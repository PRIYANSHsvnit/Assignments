
#include <stdio.h>
#include <string.h>

int flip(int number, int N) {
    // Convert the number to a string
    char numStr[20];
    sprintf(numStr, "%d", number);
    
    int len = strlen(numStr);
    
    // If N is 0 or greater than the number of digits, return the number as is
    if (N <= 0 || N >= len) {
        return number;
    }

    // Reverse the last N digits
    for (int i = len - N, j = len - 1; i < j; i++, j--) {
        char temp = numStr[i];
        numStr[i] = numStr[j];
        numStr[j] = temp;
    }

    // Convert the string back to an integer
    int flippedNumber;
    sscanf(numStr, "%d", &flippedNumber);
    
    return flippedNumber;
}

int main() {
    int num,n;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter number of digits in last to flip: ");
    scanf("%d",&n);

    printf("The number after flipping last %d digits is %d",n,flip(num,n));

    return 0;
}

