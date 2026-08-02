## Problem
Write a C program to compare two text files and identify whether both files are identical.

## Algorithm
1.Start.
2.Open the first file in read ("r") mode.
3.Open the second file in read ("r") mode.
4.If either file cannot be opened, display "File not found" and stop.
5.Read one character from each file using fgetc().
6.Compare the characters.
7.If the characters are different, display "Files are different." and stop.
8.Repeat Steps 5–7 until both files reach the end (EOF).
9.If both files reach EOF without any differences, display "Files are identical."
10.Close both files.
11.Stop.

## Sample output
Hello World(in student1.txt)
Hello World(in student2.txt)
Files are identical.
