#include<stdio.h>

/*
Additional References :
https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
https://web.eecs.umich.edu/~sugih/pointers/C++NotInC.html
https://www.geeksforgeeks.org/difference-int-main-int-mainvoid/
*/

// in c a function without any parameter will accept any number of parameters.
// in c++ a function without any parameter will allow call without parameters.
// in c : int main(){ return 0;}  is different from int main(void){return 0;}
// in c++ : both are the same ...

//identifier is the name of variable/function

void draw_triangle()
{
    printf("printing triangle \n");
    printf("    /|\n");
    printf("   / |\n");
    printf("  /  |\n");
    printf(" /   |\n");
    printf("------\n");
}

// int main()
// {
//     printf("printing triangle \n")
//     printf("    /|\n");
//     printf("   / |\n");
//     printf("  /  |\n");
//     printf(" /   |\n");
//     printf("/----|\n");

//     return 0;
// }