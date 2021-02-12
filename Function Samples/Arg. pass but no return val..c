#include <stdio.h>

void addnumber(int func_num1, int func_num2);


int main()
{
    int num1, num2;
    printf("enter two integers: ");
    scanf("%d %d",&num1,&num2);
    //pass arguments
    addnumber(num1,num2);
    return 0;
}

// return type is void meaning doesn't return any value
void addnumber(int func_num1, int func_num2)
{
    printf("%d plus %d is %d",func_num1, func_num2,func_num1+func_num2);
}
