## Problem
Write a C program to replace every occurrence of a given word in a text file with another word.

## Algorithm
1.Open the original file in read ("r") mode.
2.Open a temporary file in write ("w") mode.
3.Ask the user to enter:
4.The word to search.
5.The new word to replace it with.
6.Read one word at a time from the original file using fscanf().
7.Compare each word with the search word using strcmp().
8.If the words match, write the new word to the temporary file.
9.Otherwise, write the original word to the temporary file.
10.Repeat until the end of the file.
11.Close both files.
12.Delete the original file using remove().
13.Rename the temporary file to the original file name using rename().
14.Display "Word replaced successfully."
15.Stop.


## Sample input
Enter word to replace: Dharun
Enter new word: Karthik

## Sample output
Name Karthik Ram
Department ECE
