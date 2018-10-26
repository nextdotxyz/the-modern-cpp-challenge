# ReadMe

### Description:

*The Modern C++ Challenge* covers several areas of problem solving using C++. 

- Important dates (Timeline on Asana)
  - 10/25/2018 - Start development
  - 11/19/2018 - Completion (Before Thanksgiving)

- 12 Chapters

- ~100 Challenges

  - **MCPPC_chapter-title_lesson##** 
  - eg. **MCPPC_math-problems_01**

  info> note the `_` for space and `-` for word breaks. 

- Services
  - GitHub
  - Asana
  - Packt

- Developers:
  - Troy - Project manager 
  - Trang - Content developer / Engineer

> all files (including the instructions) should be hosted on GitHub and are synced to the Codevolve platform.

### GitHub

Next XYZ projects include sync functionality with GitHub. Instructions to authenticate your Next XYZ account with Github can be found [https://docs.codevolve.com/how-tos/github-file-sync](here). The format for storing the files on Github is important and must be followed. Any changes forces the content developer to update all the labs manually. The format is as as follows: 

 nextdotxyz/the-modern-cpp-challenge
```
	chapter-title

		##-title-of-the-challenge

				instructions 

					 ##-instructions.md

				starter

					main.cpp

				solution

					main.cpp
```

info> if there are any issues that arise with the format of this repository make it known. Issues with the structure should be remediated as soon as possible. 

info> `##-instructions.md` the hashmark numbers represent the order of the instructions, i.e. 01, 02, 03 to list the order of the instructions and not the chapter or exercise number of the instructions. 

### Asana

It is important that the proper workflow is followed in corresponding Asana project. Timelines, project files, questions, concerns, updates, and issues should be posted and logged within the correct Asana project and on the most relevant slip. 

### Starter Files

This title does not include starter files. Therefore a doctored solution file should be provided with a comment reading: `# Write your code here` in the appropriate location, most often inside the `main()`, Supporting files can be included as is, as long as the student has no direct interaction with the code base for that file. 

#### Formatting

- Basic structure for methods (declaration) will be included in the starter files so there is no cause or room for confusion. 
- Member variable declarations will be included in the starter files so there is no cause or room for confusion. 

### Solution Files

Solution files are provided by Packt and the author. Include solution files in the directory under the `.solution` directory. All the project solution files that have been provided should be in this folder. Keep in mind that the student will not have access to this folder, it is a convinience folder for the developer. No blank files should be living in this folder. 

==finish the instructions section==

### Instructions

Instruction files are created from using the challenge and the challenge solution text. The challenge will be listed as the "Objective" and the solution text will be listed under "Implementation" as individual tasks where relevant. The title listed for the instructions should be "Instructions", unless there are multiple steps within a project. There are some considerations when tech editing and styling the instructions. 

For a challenge where the solution has *multiple and substantial approaches* (technical editor's best judgement), we can create new challenges with tailored instructions for that portion of the solution text. This should follow the normal naming conventions with `a`, `b`, `c`, etc... **MCPPC_math-problems_01a|b|c**

#### Style Guide:

Filenames should be italic: *index.html*
Program input / output text should be in bold if it's inline or in an unstyled code block if it's multi line:
Enter **John Smith** as input.
Enter the following as input:

```
Sherlock Holmes
Dr. Watson
```

Inline code should be done with inline code, multi line should be in code blocks with the cpp style applied for highlighting:

- This is `<some code>`
- Formatted code syntax

~~~cpp
```java
some code
more code
```
~~~

- Break up paragraphs that run on — don't just rely on the formatting in the instructions. Also check for errors when copying text over. There is a lot, pay special attention to works that break lines in a PDF as they may carry over a `-`.
- Headers (e.g. Instructions and Grading) should be done with two #'s, e.g. `## `Introduction.

Additional Notes:

- Values in instructions should be formatted in bold.
  - Ex) Assign the value of **57** to variable `x`.
- `iostream` (and other built-in header files) should be styled as code and not as a file name.
- If the textbook labels instructions with 'a, b, c, ...' it is fine to change this to '1, 2, 3, ...' if you think it looks better.

If an instruction specifies inputs and outputs, it is fine to take the sentence and turn it into a numbered list if it makes it easier to read. (see ex. below)

```
* Simple example of the bullet above. *
This sentence: 
"Prompt the user for the number of quarters, dimes, and nickles. Then the program outputs this value in pennies." 
```

becomes -

```
Prompt the user for:

1. The number of quarters
2. The number of dimes
3. The number of nickles
   The program then outputs:
4. The total value of the coins in pennies

```

### Formulas

Formulas can be tricky because they use special characters that are interpreted as markdown. For simple formulas with special characters, we can use alt codes. For more advanced formulas and where the PDF shows the formula, we can take a screenshot of the forumla in the text and embed it in the instructions on Github. Ensure that any screenshots of the forumla are of the forumla only, and do not contain other characters or images withing the screenshot. 

#### Things to remove

- remove all instances of saving or opening programs, or text editing. 
- replace all local file paths with the `root/sandbox/` filepath. 

### Tests

This title will be tested. The bulk of the tests are going to be "Test Cases" and "Unit Tests". Early chapters may have the need for Code Patterns. 

* Code Patterns - Regex are used to find matching code patterns in the code. This should be avoided if necessary. Mostly used in earlier labs or when ensuring that specific elements or texts have been included, or named properly

* Test Cases - Widely used test that tests that the input and output of a program match the test cases. When using test cases it is important know that 1 test will not be enough. The content developer is responsible for reasoning through potential edge cases and testing for those cases to ensure an accurate grading experience. 

* Unit Tests - Widely used tests designed to test the accuracy and consistency of functions. A unit test takes a function and runs it through a series of different, pre-configured scenarios monitoring the result for the expected result. Often, one unit test is not enough and the content developer will need to write multiple unit tests to ensure that all edge cases have been covered. Multiple unit tests for one function are often grouped into one tests related specifically by test case and function.

 > Nomenclature for tests is important. Do not name tests "Test1", "Test Case", etc.. It is important that the student have an idea what the test is doing. Ex. " `foo()`returns the expected result when given the input of `x`".  

### Requirements

Requirements are used to help group related sets of tests together to for a better grading experience. Many times, in order to successfully test a program multiple tests of a different kinda must be used. Grouping related tests into "Requirements" allows all the tests for function `foo()` to be grouped and presented to the student during the review, or when they grade their project. 

> Nomenclature for requirements should be relevant to the set of tests they contain. Ex. "Function `foo()` implemented properly"

### Grading

Grading needs to be enabled. Requirements listed should be toggled on if they are inteded to be graded (in rare circumstances there are groups of tests or requirements that are not used but remain in the lab). The grading weight should be set to `10` for all requirements. 

### Codey

Codey will be enabled in this title and will have negative feedback according to specific check it is associated with. Eg. "it looks like you did not use the correct parameter name, make sure it is set to `something`"

### Settings

* Instruction size = thin

* Interface layout = two pane tall

  * Pane 1 = code editor
  * Pane 2 = terminal
  * Pane 2 = Full GUI (for GUI labs)

* Starting theme = light 

* Enable Lite Mode (Editor) = On

  > Projects that contain more than 3 or 4 files should not be in lite mode. Use best judgement. 

* Enable Bar Button = On

* Button Text = "Run Code"

* Enable Navigation = On

* File Actions Enabled = On

* Enable File Reset = On

* Run Program = On

* Clear Terminal = On

* Enable Messags = On

* Enable Codey = On

* Show Test Button = On

* Stack = Python
