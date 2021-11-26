#include<stdio.h>

// define the method at the top to use in the functions below (Restriction of c)
void increment(int *p) 
{
    *p = *p + 1;
}

void pointer_init()
{
    int a ;
    int *p; // uninitialized ptr
    a=10;
    p = &a; // address of a goes in p // initialization of ptr
    printf("a = %d\n",a);
    *p = 12; // value at address held in p is changed to 12
    printf("a = %d\n",a);
}

void pointer_arithm()
{
    // pointer arithmetics:
    // adding 1 to apointer will move the pointer by the number of bytes required by the datatype it is pointing to
    int a ;
    int *p; // uninitialized ptr
    a=10;
    p = &a; // address of a goes in p // initialization of ptr

    printf("pointer address p : %d\n",p);
    // p+1 will be ahead by 4 bytes since each integer takes 4 bytes
    printf("size of int is : %d\n",sizeof(int));
    printf("new pointer address p+1 : %d\n",p+1);

    //The datatype of pointer defines how the pointer will move
    int b = 1025; // 00000000 0000000 00000100 00000001 in binary
    int *b_ptr;
    b_ptr = &b;
    printf("Address = %d, value = %d\n",b_ptr,
    *b_ptr);
    printf("Address = %d, value = %d\n",b_ptr+1,*(b_ptr+1));// garbage value

    char *b_ptr0;
    b_ptr0 = (char*) b_ptr; //typecasting of pointer
    printf("Address = %d, value = %d\n",b_ptr0,*b_ptr0);//reads the 1st byte from left in binary representation of 1025
    printf("Address = %d, value = %d\n",b_ptr0+1,*(b_ptr0+1)); //reads the 2nd byte from left in binary representation of 1025


    // Void Pointer : Does not have a datatype associated to it:
    void *v_p;
    v_p = &p;
    // we can not dereference the void pointer like *v_p to get the value.
    // neither can we perform arithmetic with void pointers.

    // pointer to a pointer:
    int **b_ptr_p = &b_ptr; // we pass the address of pointer
    printf("Address = %d, value = %d\n",b_ptr_p,
    *b_ptr_p);
    printf("Address = %d, value = %d\n",*b_ptr_p,
    **b_ptr_p); // it is the same as printing details of variable a

    // pass by reference using pointers:
    int count = 2;
    increment(&count); // pass address to the pointer argument
    printf("count = %d\n",count);





}

