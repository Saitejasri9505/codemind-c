#include <stdio.h>
#include <math.h>

// function prototype
long long convertOctalToDecimal(int octalNumber);

int main() {
    int octalNumber;
    scanf("%d", &octalNumber);

    printf("%lld", convertOctalToDecimal(octalNumber));

    return 0;
}
long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}
