## Problem
Write a C program to count vowels, consonants, digits, spaces, and special characters in a file.

## Algorithm
1.Start.
2.Declare variables to count spaces, vowels, digits, consonants, and special characters.
3.Open the file student1.txt in read ("r") mode.
4.If the file cannot be opened, display "Invalid" and stop.
5.Read the file character by character using fgetc().
6.For each character:
7.If it is a vowel (A, E, I, O, U, a, e, i, o, u), increment the vowel count.
8.Else if it is a space (' '), increment the space count.
9.Else if it is a digit ('0' to '9'), increment the digit count.
10.Else if it is an alphabet (A-Z or a-z), increment the consonant count.
11.Else if it is a newline ('\n') or tab ('\t'), ignore it.
12.Otherwise, increment the special character count.
13.Repeat until the end of the file (EOF).
14.Close the file.
15.Display the number of spaces, vowels, digits, consonants, and special characters.
16.Stop.

## Sample output
SPACE: 9
VOWELS: 17
DIGITS: 6
CONSONANTS: 29
SPECIAL CHARACTERS: 4
