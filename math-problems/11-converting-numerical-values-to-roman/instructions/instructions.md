### Objective

Write a program that, given a number entered by the user, prints its Roman numeral equivalent. 

Roman numerals, as they are known today, use seven symbols: **I = 1**, **V = 5**, **X = 10**, **L = 50**, **C = 100**, **D = 500**, and **M = 1000**. The system uses additions and subtractions in composing the numerical symbols. The symbols from **1** to **10** are **I**, **II**, **III**, **IV**, **V**, **VI**, **VII**, **VIII**, **IX**, and **X**. 

Romans did not have a symbol for zero and used to write nulla to represent it. In this system, the largest symbols are on the left, and the least significant are on the right. As an example, the Roman numeral for **1994** is **MCMXCIV**. If you are not familiar with the rules for Roman numerals, you should read more on the web.

### Implementation
To determine the Roman numeral of a number, use the following algorithm:

1. Check every Roman base symbol from the highest (**M**) to the lowest (**I**)
2. If the current value is greater than the value of the symbol, then concatenate the symbol to the Roman numeral and subtract its value from the current one
3. Repeat until the current value reaches zero


For example, consider **4**2: the first Roman base symbol smaller than **42** is **XL**, which is **40**. We concatenate it to the numeral, resulting in **XL**, and subtract from the current number, resulting in **2**. The first Roman base symbol smaller than **2** is **I**, which is **1**. We add that to the numeral, resulting in **XLI**, and subtract **1** from the number, resulting in **1**. We add one more **I** to the numeral, which becomes **XLII**, and subtract again **1** from the number, reaching **0** and therefore stopping.
