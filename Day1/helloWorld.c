// 2/6/24 
/*
    Today covered sections worth noting: 
        Ternary Operator
        Comma Operator
        sizeof Operator
        switch Statement
*/
#include <stdio.h>

int main()
{
    // printf
    int i = 2;
    float f = 9.241;
    char *s = "Wtf a char point is a String?";
    printf("%s\nHello World\nThis is a int: %i\nThis is a float: %f", s, i, f);

    // Ternary Operator
    int x = 2420422;
    printf("\nThe number %d is %s.\n", x, x % 2 == 0 ? "even" : "odd");

    // The Comma Operator
    for (int x = 0, y = 10; y >= 0; x++, y--)
        printf("%d, %d\n", x, y);

    // The sizeof Operator
    int a = 999; // int = 16 bits -> 4 bytes
                 // float = 32 bits -> 8 bytes
    // %zu is the format specifier for type size_t
    printf("%zu\n", sizeof a);      // Prints 4 on my system
    printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system
    printf("%zu\n", sizeof 3.14);   // Prints 8 on my system
    // If you need to print out negative size_t values, use %zd
    printf("%zu\n", sizeof(int));  // Prints 4 on my system
    printf("%zu\n", sizeof(char)); // Prints 1 on all systems

    // The switch Statement
    int sw = 1;
    switch (sw)
    {
    case 1:
        printf("Case1\n");
        // Fall through!
    case 2:
        printf("Case2\n");
        break;
    case 3:
        printf("Case3\n");
        break;
    }
    // If x == 1, this switch will first hit case 1, it’ll print the 1, but then it just continues on to the next line of code… which prints 2!
    // And then, at last, we hit a break so we jump out of the switch
    // if x == 2, then we just hit the case 2, print 2, and break as normal.
    // Not having a break is called fall through.
    //ProTip: ALWAYS put a comment in the code where you intend to fall through, like I did above. It will save other programmers from wondering if you meant to do that.

    //  Passing by Value
    //But no fancy-schmancy name will distract you from the fact that EVERYTHING you pass to a function WITHOUT EXCEPTION is copied into its corresponding parameter, and 
    //the function operates on that local copy, NO MATTER WHAT. Remember that, even when we’re talking about this so-called passing by reference.
    return 0;
}
