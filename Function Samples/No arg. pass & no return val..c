#include <stdio.h>

void addnumber();

int main()
{
    addnumber();// argument is not passed
    return 0;
}

// return type is void meaning doesn't return any value
void addnumber()
{
    int func_num1=4, func_num2=6;

    printf("%d plus %d is %d",func_num1,func_num2, func_num1+func_num2);

}
