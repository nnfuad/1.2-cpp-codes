#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    printf("Enter a number: ");
    scanf("%s", c);  

    int len = strlen(c);
        
    char temp = c[0];
    c[0] = c[len - 1];
    c[len - 1] = temp;

    printf("Swapped number is: %s\n", c);

    return 0;
}