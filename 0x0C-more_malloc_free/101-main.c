#include <stdio.h>
#include <string.h>
#include "main.h"


int main(int argc, char *argv[])
{
        char *num1;
        char *num2, *result;

        if (argc != 3 || !isNumeric(argv[1]) || !isNumeric(argv[2]))
        {
                printf("Error\n");
                return (98);
        }

        num1 = argv[1];
        num2 = argv[2];

        while (*num1 == '0' && *(num1 + 1) != '\0')
        {
                num1++;
        }
        while (*num2 == '0' && *(num2 + 1) != '\0')
        {
                num2++;
        }

        if (*num1 == '\0' || *num2 == '\0')
        {
                printf("0\n");
                return (0);
        }

        result = multiplyStrings(num1, num2);

        printf("%s\n", result);

        free(result);

        return (0);
}

