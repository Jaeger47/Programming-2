#include <stdio.h>

//function for checking credentials
int check_info(int emp_id_number, int emp_pin);

//function for login message
void login_msg(int login_status);

int main()
{
    //temporary variable for condition testing
    int temp_id_number, temp_pin, temp_status;
    
    //program instructions
    printf("Enter Your ID NUMBER: ");
    scanf("%d", &temp_id_number);
    
    printf("Enter Your PIN: ");
    scanf("%d", &temp_pin);
    
    //pass arg to check info and return login status
    temp_status = check_info(temp_id_number,temp_pin);
    
    //pass the return value of temp_status
    login_msg(temp_status);
    
    return 0;
}

int check_info(int emp_id_number, int emp_pin)
{
    //predefined variables
    int 
    id_number_1 = 1234, pin_1 = 1111,
    id_number_2 = 4321, pin_2 = 2222,
    id_number_3 = 0001, pin_3 = 3333;
    
    //checks the pass arg is valid
    if (emp_id_number == id_number_1 && emp_pin == pin_1)
    {
        return 1;
    }
    
    else if (emp_id_number == id_number_2 && emp_pin == pin_2)
    {
        return 1;
    }
    
    else if (emp_id_number == id_number_3 && emp_pin == pin_3)
    {
        return 1;
    }
    else
    {
        return 2;
    }
    
}

void login_msg(int login_status)
{
    // if value is return 1 tell the user success msg
    if(login_status == 1)
    {
        printf("\nYou have successfully Logged In!");
    }
    else
    {
       printf("\nYour credentials is invalid, Please Try Again."); 
    }
}
