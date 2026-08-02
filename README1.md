##  Problem
Write a C program to read the contents of a text file line by line and display the total number of lines,
words, and characters.

##  Algorithm
1.Start.
2.Declare a file pointer fp, a character variable ch, and variables lines, words, characters, and inWord.
3.Open the file student.txt in read ("r") mode.
4.If the file does not exist (fp == NULL), display "File not found!" and stop.
5.Read one character at a time from the file using fgetc(fp) until EOF is reached.
6.Increment the character count for every character read.
7.If the character is '\n', increment the line count.
8.If the character is a whitespace (space, tab, or newline), set inWord = 0.
9.Otherwise, if inWord == 0, increment the word count and set inWord = 1.
10.Repeat Steps 5–9 until the end of the file.
11.Close the file using fclose(fp).
12.Display the total number of lines, words, and characters.
13.Stop.

## Sample output
Total Lines      : 2
Total Words      : 6
Total Characters : 43
