## Problem 
Write a C program to copy the contents of one text file into another file while preserving formatting.

## Algorithm
1.Start.
2.Declare two file pointers (source and destination) and a character variable ch.
3.Open the source file in read ("r") mode.
4.Open the destination file in write ("w") mode.
5.If the source file is NULL, display "Invalid Source File" and stop.
6.If the destination file is NULL, display "Invalid Destination File" and stop.
7.Read one character from the source file using fgetc() and store it in ch.
8.While ch is not EOF:
9.Write ch into the destination file using fputc().
10.Read the next character from the source file.
11.Close both files.
12.Display "Copied successfully."
13.Stop.

## Sample output (student2.txt)
Name:Dharun Ram P
Rollno:210
Marks:100
Favorite colour:Blue & Green
