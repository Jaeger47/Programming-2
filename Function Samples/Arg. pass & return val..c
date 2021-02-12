#include <stdio.h>
int addNumbers(int func_num1, int func_num2);

int main()
{
    int num1,num2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&num1,&num2);
    //pass arguments
    sum = addNumbers(num1, num2);
    printf("sum = %d",sum);

    return 0;
}

// return value type is int
int addNumbers(int func_num1, int func_num2)
{
    int func_sum;
    func_sum = func_num1+func_num2;
    return func_sum;
}
