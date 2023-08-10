#include<stdio.h>
int main()
{

    // variable declaration
    int i, number;
    scanf("%d", &number);

    // loop to check number is perfect square or not
    for(i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
            printf("True");

            return 0;   // same as using break in this case to end the program
        }
    }
    printf("False");
    return 0;
}