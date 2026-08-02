## Problem
Write a C program to reverse the contents of a text file and store them in another file.

## Algorithm
1.Start.
2.Declare two file pointers (old and new), a character array, and an index variable.
3.Open the source file (student1.txt) in read ("r") mode.
4.If the file cannot be opened, display "File not found" and stop.
5.Read the contents of the source file character by character using fgetc() and store them in the character array.
6.Open the destination file (student_reversed.txt) in write ("w") mode.
7.Traverse the character array from the last character to the first.
8.Write each character into the destination file using fputc() or fprintf().
9.Close both files using fclose().
10.Display "Reversed content stored successfully."
11.Stop.

## Sample input
Hello World

## Sample output
dlroW olleH(in student_reversed.txt)
Reversed content stored successfully.
