# Aim: 
To study and implement C++ decision making statements Loops
# Software Required :
Visual Studio

# Theory:
Different Types of Loops C++ provides three types of loops that works the same, but are preferred in different use cases:

# 1.For Loop:
The for loop is an entry-controlled loop, which means that it checks whether the test condition is true before executing the statements inside it. The various parts of the for loop are:

The for loop in C++ is a control flow statement that allows precise, repeated execution of a code block based on:

Initialization: Where the loop begins

Condition: When it should stop

Increment/Decrement: How it moves forward

It’s perfect when you know in advance how many times something should happen.

# 2.While Loop:

The while loop is also an entry-controlled loop which is used in situations where we do not know the exact number of iterations of the loop beforehand.

The while loop in C++ is built around the idea of dynamic repetition. It runs a block of code as long as a condition remains true. Unlike a for loop, which is best when the number of iterations is known upfront, the while loop thrives when repetition depends on changing circumstances.

-> Why is it Useful?

1.Ideal for scenarios with unknown end points

2.Great for real-time monitoring, like checking sensor data or waiting for user input

3.Offers flexibility and control over repetition

# 3.Do-While Loop
The do-while loop is an exit-controlled loop which means the condition is checked after executing the body of the loop. So, in a do-while loop, the loop body will execute at least once irrespective of the test condition.

# Infinite Loops:

An infinite loop (sometimes called an endless loop) is a piece of coding that lacks a functional exit so that it repeats indefinitely. An infinite loop occurs when a condition is always evaluated to be true.

# Nesting of Loops:

Nesting of loops refers to placing one loop inside another. The inner loop is executed completely for each iteration of the outer loop. This is useful when you need to perform multiple iterations within each iteration of a larger loop, such as iterating over a two-dimensional array or performing operations that require more than one level of iteration.

Think of nested loops like a clock with seconds and minutes. For every minute that passes (outer loop), 60 seconds tick by (inner loop). In C/C++, a nested loop means you put one loop inside another to do repeated tasks in layers.

-> Basic Idea

1.The outer loop runs first.

2.For each time the outer loop runs, the inner loop runs all its steps.


# Implementation:
The Logic and conditional flow of the statements were seen through the following programs :

1.Printing even numbers from 1 to 10

2.reversing of integer values

3.login through password with lockout mechanism

4.Patterns(Star Patterns, Floyd's series)

5.printing a word multiple times

6.alphabet pattern

# Algorithms:

# Program 1:
Objective: to print Floyds Series 

Steps:

1.Start the program

2.Declare Variables

3.i: Loop control for rows

4.j: Loop control for printing numbers in each row

5.num: An integer to store and print consecutive values (initialized to 1)

6.Set Initial Values

7.num ← 1

8.Begin Outer Loop to handle rows

8.For i from 1 to n (here, n = 4):

9.Begin Inner Loop for each row’s numbers:

10.For j from 1 to i:

11.Print the value of num

12.Increment num ← num + 1

13.After the inner loop ends, print a newline to move to the next row

14.End Outer Loop

15.Terminate Program

# Program 2:
Objective: Allow the user to set a password and re-enter it for verification with a maximum of 3 attempts. Lock the system if the entered password is incorrect all three times.

Steps: 

1.Start the Program

2.Declare Variables

new_password (string): to store the password set by the user

Password (string): to store the input for verification

attempts (integer): initialized to 0, keeps track of incorrect tries

maxAttempts (integer): set to 3, defines max allowed attempts

3.Prompt User to Set Password

Display: “Set your password:”

Read input using getline() into new_password

4.Begin Validation Loop

Repeat the following steps while attempts < maxAttempts:

Prompt user: “Enter your password again:”

Read input into Password

Compare Password with new_password:

If they match:

Display: “Password is correct.”

Terminate program

If they do not match:

Increment attempts ← attempts + 1

Check remaining attempts:

If attempts < maxAttempts:

Display: “Incorrect password. Attempts left: maxAttempts - attempts”

Else:

Display: “System locked due to too many failed attempts.”

5.End Program

# Program 3:

Objective: Print a left-aligned pyramid of stars (*) with a total of n rows, where each row contains an increasing number of stars.

Steps:

1.Start the Program

2.Declare and Initialize Variables

i – to control the outer loop (tracks rows)

j – to control the inner loop (tracks stars in each row)

n – set to 5 (number of pyramid levels)

3.Loop to Print Each Row (Outer Loop)

Repeat steps for i from 1 to n:

Print Stars in the Row (Inner Loop):

For j from 1 to i, print a * without newline

After inner loop ends, print a newline to move to the next row

4.End the Loop

5.Terminate Program

# Program 4:
Objective: Print a centered reverse pyramid made of asterisks *, where the widest row is at the top and each subsequent row becomes narrower. Each row is centered using spaces.

Steps:

1.Start the program

2.Initialize Variable

rows ← 5 → this determines the total number of pyramid levels

3.Loop to Create Each Row (Descending Order)

Repeat the following steps for i from rows down to 1:

-> Print Leading Spaces

Run a loop from space = 0 to (rows - i - 1)

Print a space " " to shift the stars right

-> Print Stars

Run another loop from star = 0 to (2 * i - 2)

Print a star "*" in each iteration

-> Print Newline

After both loops, print a newline to move to the next row

4.End Program

# Program 5:
Objective: Print a left-aligned pyramid of stars (*), but each row is right-shifted by adding leading spaces so it looks “flipped” toward the right margin.

Steps:

1.Start the program

2.Initialize Variables

n ← 5 → number of rows for the pyramid

Declare loop control variables: i, j, k

3.Loop through Rows

For i from 1 to n, repeat:

a. Print Spaces

For k from n down to i, print a space " "

This creates the rightward shifting effect

b. Print Stars

For j from 1 to i, print a star "*"

c. Move to Next Line

Print a newline to start the next row

4.End Program

# Program 6:
Objective: Print a star (*) hourglass pattern consisting of a reversed pyramid followed by a normal pyramid aligned to form an hourglass shape.

Steps:

1.Start the program

2.Declare and Initialize Variables

rows ← 5: total number of rows

n ← 5: total rows for bottom half of hourglass

3.Print the Upper Half (Inverted Pyramid)

Loop variable i from rows down to 1

a.Print leading spaces:

Loop space from 0 to rows - i - 1

Output a space " "

b.Print stars:

Loop star from 0 to (2 * i - 2)

Output a star "*"

c.Print newline to start a new row

4.Print the Lower Half (Upright Pyramid)

Loop variable i from 2 to n

a.Print leading spaces:

Loop k from n down to i + 1

Output a space " "

b.Print stars:

Loop j from 2 to 2 * i

Output a star "*"

c.Print newline to move to the next row

5.End the program

# Program 7:
Objective: Generate a left-aligned pyramid where each row contains consecutive alphabet characters starting from 'A', increasing with each character printed.

Steps:

1.Start the Program

2.Initialize Variables

n ← 4 → number of rows to print

ch ← 'A' → starting character in the ASCII sequence

3.Loop Through Rows

Use a loop where i goes from 1 to n:

a.For each row i, use another loop where j goes from 1 to i:

Print the current value of ch

Increment ch to the next character (ch ← ch + 1)

b.After the inner loop ends, print a newline to move to the next row

4.End the Loop

5.Terminate the Program

# Program 8:
Objective: Print all even numbers starting from 0 up to 10, incrementing by 2 in each step.

Steps: 

1.Start the Program

2.Declare Variable

num → an integer to hold the current number

3.Initialize num to 0

4.Loop Until num Reaches 11

Repeat the following steps while num is less than 11:

a.Print the value of num

b.Increment num by 2 (num ← num + 2)

5.Terminate the Program

# Program 9:
Objective: Print values of two counters: the outer loop runs twice, and for each outer loop iteration, the inner loop runs three times.

Steps:

1.Start the program

2.Declare variables

i: controls the outer loop

j: controls the inner loop

3.Outer Loop Execution

Loop from i = 1 to 2 (inclusive)

Display: Outer : i

a.Inner Loop Execution

For each i, loop j from 1 to 3 (inclusive)

Display: Inner : j

4.End all loops

5.Terminate the program

# Program 10:
Objective: Accept an integer input (e.g., a PRN or Roll number) and reverse its digits to produce and display the reversed number.

Steps:

1.Start the program

2.Declare and initialize variables:

n → to store the input number

x → to hold the last digit of n

s ← 0 → to hold the reversed number

3.Prompt the user

Display: “Enter your PRN/Roll number:”

Read integer input into n

4.Reverse the digits using a loop

Repeat while n > 0:

a.Calculate x ← n % 10 → extract the last digit

b.Update s ← s * 10 + x → build the reversed number

c.Update n ← n / 10 → remove the last digit from n

5.Display the reversed number

Output: s

6.End the program

# Program 11:
Objective: Print the word "SIT" exactly 5 times using a for loop.

Steps:

1.Start

2.Declare a variable i for loop control.

3.Set up a loop that:

Starts with i = 1

Runs while i < 6

Increments i by 1 on each iteration

4.Inside the loop, print "SIT" on a new line

5.Repeat steps until loop ends

6.End the program

# Conclusion:
We learnt the use of loops and created several programs using the For loop in C++.
