#include<stdio.h>

void swap_value()
{
    int *p_val1=NULL, *p_val2=NULL, *p_tmp=NULL; //uninitialized pointers ==> undefined behaviour
    int a,b;
    //assigning the values to the pointers
    printf("Enter two values to swap :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    p_val1 = &a;
    p_val2 = &b;
    printf("The original values are : %d and %d\n",a,b);
    //swapping :
    p_tmp = p_val1;
    p_val1 = p_val2;
    p_val2 = p_tmp;

    printf("The swapped values are : %d and %d\n",*p_val1,*p_val2);
}   