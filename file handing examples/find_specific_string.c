//note please create a file => C:\\program.txt
/*references: 
=https://www.quora.com/How-do-I-read-a-text-file-line-by-line-column-wise-in-C-programming
=https://www.w3resource.com/c-programming-exercises/file-handling/c-file-handling-exercise-9.php
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

// Function declarations
int find_word_index(FILE *myfile, const char *word, int *line, int *col);


int main()
{
    FILE *myfile;
    char word[50];
    int line, col;
    

    //input the specific word to search
    printf("Input word to search in the file: ");
    scanf("%s", word);

    //read the file
    myfile = fopen("C:\\program.txt", "r");

    //catch error if file don't exist
    if (myfile == NULL)
    {
        printf("Error.\n");
        return(1);
    }


    // Find index of word in myfile
    find_word_index(myfile, word, &line, &col);

    if (line != -1)
        printf("'%s' found at line: %d, col: %d\n", word, line + 1, col + 1);
    else
        printf("'%s' error! the word does not exists.", word);
    
    // Close file
    fclose(myfile);
    
    return 0;
}


//finding the first occured index of the inputted string using the the line and column
int find_word_index(FILE *myfile, const char *word, int *line, int *col)
{
    char str[BUFFER_SIZE];
    char *pos;

    *line = -1;
    *col  = -1;

    while ((fgets(str, BUFFER_SIZE, myfile)) != NULL)
    {
        *line += 1;

        // Find first occurrence of word in str
        pos = strstr(str, word);

        if (pos != NULL)
        {
            // 1st index of the string in str is 
            // mem address of pos - memory
            // address of str.
            *col = (pos - str);
            break;
        }
    }


    // If the string is not found then set line to -1
    if (*col == -1)
        *line = -1;

    return *col;
}
