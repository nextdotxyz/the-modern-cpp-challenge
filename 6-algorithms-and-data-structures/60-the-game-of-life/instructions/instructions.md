# Objective

Write a program that implements the Game of Life cellular automaton proposed by John Horton Conway. The universe of this game is a grid of square cells that could have one of two states: dead or alive. Every cell interacts with its adjacent neighbors, with the following transactions occurring on every step:

Any live cell with fewer than two live neighbors dies, as if caused by under-population
Any live cell with two or three live neighbors lives on to the next generation
Any live cell with more than three live neighbors dies, as if by overpopulation
Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction

The status of the game on each iteration should be displayed on the console, and for convenience, you should pick a reasonable size, such as 20 rows x 50 columns.

# Implementation

There are several functions of interest:

`initialize()` generates a starting layout; although the code accompanying the book contains more options, only two are listed here: `random`, which generates a random layout, and `ten_cell_row`, which represents a line of 10 cells in the middle of the grid.
`reset()` sets all the cells as `dead`.
`count_neighbors()` returns the number of alive neighbors. It uses a helper variadic function template `count_alive()`.
`next_generation()` produces a new state of the game based on the transition rules.
`display()` shows the game status on the console; this uses a system call to erase the console, although you could use other means to do so, such as specific operating system APIs.
`run()` initializes the starting layout and then produces a new generation at a user-specified interval, for a user-specified number of iterations, or indefinitely (if the number of iterations was set to 0).