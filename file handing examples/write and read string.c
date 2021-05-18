#include <stdio.h>
#include <stdlib.h>

void flush(); //function prototype for flush

int main()
{
    char str[50];
    FILE *myfile;
    char choice;
    
    printf("[A]WRITE FILE\n[B]READ FILE\nOption: ");
    choice = getchar(); // fgets will read the \n left out by the getchar() in your program
    
    flush(); // You would need to flush the standard input (don't use fflush(stdin))
    
    switch(choice)
    {
        //writing the file
        case 'A':
        printf("\nPlease Enter any String: ");
        fgets(str,sizeof(str),stdin);
        myfile = fopen("file.txt","w");
        //catch error if not successfully executed
        if(myfile == NULL)
            {
                printf("\nERROR! file is not create");
                return(1);
            }
        fputs(str,myfile);
        fclose(myfile);
        return 0;
        break;
        
        //read the file
        case 'B':
        myfile = fopen("file.txt","r");
        //catch error if not successfully executed
        if(myfile == NULL)
            {
                printf("\nERROR! file is not found");
                return(1);
            }
        fgets(str,sizeof(str),myfile);
        printf("\nString Inside the file: ");
        puts(str);
        fclose(myfile);
        return 0;
        break;
        
        default:
        printf("Invalid Option, Try Again");

    }
}

void flush() // getting rid the current buffer
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}
