# Objective

Write a program that implements Richard Dawkins' weasel computer simulation, described in Dawkins' words as follows (The Blind Watchmaker, chapter 3):

```markup
We again use our computer monkey, but with a crucial difference in its program. It again begins by choosing a random sequence of 28 letters, just as before ... it duplicates it repeatedly, but with a certain chance of random error – 'mutation' – in the copying. The computer examines the mutant nonsense phrases, the 'progeny' of the original phrase, and chooses the one which, however slightly, most resembles the target phrase, METHINKS IT IS LIKE A WEASEL.
```

# Implementation

The Weasel program is a thought experiment proposed by Richard Dawkins, intended to demonstrate how the accumulated small improvements (mutations that bring a benefit to the individual so that it is chosen by natural selection) produce fast results as opposed to the mainstream misinterpretation that evolution happens in big leaps. The algorithm for the Weasel simulation, as described on Wikipedia (see https://en.wikipedia.org/wiki/Weasel_program), is as follows:

Start with a random string of 28 characters.
Make 100 copies of this string, with a 5% chance per character of that character being replaced with a random character.
Compare each new string with the target METHINKS IT IS LIKE A WEASEL, and give each a score (the number of letters in the string that are correct and in the correct position).
If any of the new strings has a perfect score (28), then stop.
Otherwise, take the highest-scoring string and go to step 2.
A possible implementation is as follows. The `make_random()` function creates a random starting sequence of the same length as the target; the `fitness()` function computes the score of each mutated string (that is, resemblance with the target); the `mutate()` function produces a new string from a parent with a given chance for each character to mutate: