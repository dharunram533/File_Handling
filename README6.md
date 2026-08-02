## Problem
Write a C program to search for a specific word in a text file and display the number of occurrences.

## Algorithm
1.Start.
2.Declare a file pointer, two character arrays (search and word), and a counter variable.
3.Open the file student1.txt in read ("r") mode.
4.If the file cannot be opened, display "File not found" and stop.
5.Ask the user to enter the word to search.
6.Read one word at a time from the file using fscanf().
7.Compare the entered word with the word read from the file using strcmp().
8.If both words are the same, increment the counter.
9.Repeat Steps 6–8 until the end of the file (EOF).
10.Close the file.
11.If the counter is 0, display "Word not found".
12.Otherwise, display the total number of occurrences of the word.
13.Stop.

## Sample input
Enter word to search: Dharun

## Sample output
Word found 1 times
