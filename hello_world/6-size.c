#include <stdio.h>
int main()
{
        int i;
        float f;
        char c;
        long it;
        long long it;

        printf("Size of a char: %lu bytes\n", sizeof(c));
        printf("Size of an int: %lu bytes\n", sizeof(i));
        printf("Size of long int: %lu bytes\n", sizeof(long it));
        printf("Size of long long int: %lu bytes\n", sizeof(long long it));
        printf("Size of float: %lu bytes\n", sizeof(f));

        return 0;
}
