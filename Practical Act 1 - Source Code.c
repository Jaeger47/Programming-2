#include <stdio.h>

void add_info(int id_func, int age_func, char sex_func); 
void vote_test(int age_func);

int main()
{
    int age,id_number;
    char sex;
    
    printf("Input your Sex: ");
    scanf("%c", &sex);
    printf("Input your ID Number: ");
    scanf("%d", &id_number);
    printf("Input your Age: ");
    scanf("%d", &age);
    
    
    add_info(id_number,age,sex);
    vote_test(age);
    
    
    return 0;
}

void add_info(int id_func, int age_func, char sex_func)
{
    printf("_______________________________________________________\n");
    printf("Sex: %c\nID#: %d\nAge: %d\n",sex_func,id_func,age_func);
}

void vote_test(int age_func)
{
    if(age_func < 18)
    {
        printf("You not eligible for Voting");
    }
    else if(age_func >= 18)
    {
        printf("You eligible for Voting");
    }
    
}
