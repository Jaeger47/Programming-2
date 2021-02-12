#include <stdio.h>

int getnumber_1();
int getnumber_2();

int main()
{
    int num1, num2;
    
    // no argument is passed
    num1 = addnumber_1();
    // no argument is passed
    num2 = addnumber_2();

    printf("\n%d plus %d is %d", num1,num2,num1+num2);

    return 0;
}


//returns integer entered by the user
int addnumber_1()
{
    int func_num1;

    printf("\nEnter any integer: ");
    scanf("%d",&func_num1);

    return func_num1;

}

int addnumber_2()
{
    int func_num2;

    printf("\nEnter any integer: ");
    scanf("%d",&func_num2);

    return func_num2;

}