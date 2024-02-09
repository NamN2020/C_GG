// 2/8/24 
/*
    Today covered sections worth noting: 
*/
#include <stdio.h>

int main()
{
    // %zu is the format specifier for type size_t
    printf("an int uses %zu bytes of memory\n", sizeof(int));

    int i = 10;
    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);
    // %p expects the argument to be a pointer to void
    // so we cast it to make the compiler happy.
    int *p; // p's type is "pointer to an int", or "int-pointer"
    p = &i;  // p now points to i, p holds address of i

    i = 10;  // i is now 10
    *p = 20; // the thing p points to (namely i!) is now 20!!

    printf("i is %d\n", i);   // prints "20"
    printf("i is %d\n", *p);  // "20"! dereference-p is the same as i!
    return 0;
}
