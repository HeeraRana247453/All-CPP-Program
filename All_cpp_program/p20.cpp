// C Program to illustrate local auto variable in comparison of static variable.
#include <stdio.h>

int function()
{
    static int count = 0;   //static variable.
    count++;
    return count;
}

int main()
{
    printf("%d \n", function());
    printf("%d \n", function());
    printf("%d \n", function());
    printf("%d \n", function());
    return 0;
}