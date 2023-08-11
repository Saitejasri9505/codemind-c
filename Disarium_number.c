#include <stdio.h>
#include <math.h>

int findLength(int no)
{
    int copiedNumber = no;
    int length = 0;

    while (copiedNumber != 0)
    {
        length++;
        copiedNumber /= 10;
    }

    return length;
}

int isDisarium(int no, int length)
{
    int sum = 0;
    int copiedNumber = no;
    int lastDigit;

    while (copiedNumber > 0)
    {
        lastDigit = copiedNumber % 10;

        sum += (int)pow(lastDigit, length);
        copiedNumber /= 10;
        length--;
    }

    return sum == no;
}

int main()
{
    int no;

    scanf("%d", &no);

    int length = findLength(no);

    if (isDisarium(no, length) == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}