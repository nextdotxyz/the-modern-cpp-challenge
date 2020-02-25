# Objective

Write a program that simulates the way customers are served in an office. The office has three desks where customers can be served at the same time. Customers can enter the office at any time. They take a ticket with a service number from a ticketing machine and wait until their number is next for service at one of the desks. Customers are served in the order they entered the office, or more precisely, in the order given by their ticket. Every time a service desk finishes serving a customer, the next customer in order is served. The simulation should stop after a particular number of customers have been issued tickets and served.

Here is a snippit of the output of an execution of this program:
```markup
LOG: desk 1 open
LOG: desk 2 open
LOG: desk 3 open
LOG: [+] new customer with ticket 100
LOG: [-] desk 2 handling customer 100
LOG: [=] queue size: 0
LOG: [=] queue size: 0
LOG: [+] new customer with ticket 101
LOG: [=] queue size: 1
LOG: [-] desk 3 handling customer 101
LOG: [=] queue size: 0
LOG: [+] new customer with ticket 102
LOG: [=] queue size: 1
LOG: [-] desk 1 handling customer 102
LOG: [=] queue size: 0
LOG: [+] new customer with ticket 103
LOG: [=] queue size: 1
...
LOG: [+] new customer with ticket 112
LOG: [=] queue size: 7
LOG: [+] new customer with ticket 113
LOG: [=] queue size: 8
LOG: [ ] desk 2 done with customer 103
LOG: [-] desk 2 handling customer 106
LOG: [=] queue size: 7
...
LOG: [ ] desk 1 done with customer 120
LOG: [-] desk 1 handling customer 123
LOG: [=] queue size: 1
LOG: [ ] desk 2 done with customer 121
LOG: [-] desk 2 handling customer 124
LOG: [=] queue size: 0
LOG: [ ] desk 3 done with customer 122
LOG: desk 3 closed
LOG: [ ] desk 1 done with customer 123
LOG: desk 1 closed
LOG: [ ] desk 2 done with customer 124
LOG: desk 2 closed
```

# Implementation

In order to implement the simulation of the customer service office as required, we could use several helper classes. `ticketing_machine` is a class that models a very simple machine that issues incremental ticketing numbers, starting with an initial, user-specified seed. `customer` is a class that represents a customer that enters the store and receives a ticket from the ticketing machine. `operator<` is overloaded for this class in order to store customers in a priority queue from which they should be taken in the order given by their ticket number. In addition, the `logger` class from the previous problem is used to print messages to the console.

Each desk from the office is modeled using a different thread. Customers entering the store and queuing after getting a ticket are modeled using a separate thread. In the following simulation, a new customer enters the store every 200-500 milliseconds, gets a ticket and is placed in a priority queue. The execution of the store thread finishes after 25 customers enter the store and are placed in the queue. An `std::condition_variable` is used to communicate between threads to notify that a new customer has been placed in the queue or that an existing customer has been removed from the queue (which happens when a customer moves to an open desk). The threads that represent the office desk are running until a flag indicating the office is opened is reset but not before all customers that are in the queue are served. In this simulation, each customer spends 2,000 to 3,000 milliseconds at a desk.