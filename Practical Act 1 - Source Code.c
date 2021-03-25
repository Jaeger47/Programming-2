#include <stdio.h>

//function prototypes
void add_info(int id_func, int age_func, char sex_func); 
void vote_test(int age_func);

int main()
{
    //local Variables
    int age,id_number;
    char sex;
    
    //get user info
    printf("Input your Sex: ");
    scanf("%c", &sex);
    printf("Input your ID Number: ");
    scanf("%d", &id_number);
    printf("Input your Age: ");
    scanf("%d", &age);
    
    //pass arg on id,age,sex
    add_info(id_number,age,sex);
    //pass arg on age to test
    vote_test(age);
    
    
    return 0;
}

void add_info(int id_func, int age_func, char sex_func)
{
    //print all user info
    printf("_______________________________________________________\n");
    printf("Sex: %c\nID#: %d\nAge: %d\n",sex_func,id_func,age_func);
}

void vote_test(int age_func)
{
    //check age for eligiblity 
    if(age_func < 18)
    {
        printf("You not eligible for Voting");
    }
    else if(age_func >= 18)
    {
        printf("You eligible for Voting");
    }
    
}
