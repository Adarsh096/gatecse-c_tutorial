#include<stdio.h>

/*
Additional References :
https://www.geeksforgeeks.org/how-to-find-size-of-array-in-cc-without-using-sizeof-operator/
https://www.youtube.com/watch?v=zuegQmMdy8M
*/

void display(char *c)
{   int i = 0;
    while(c[i]!='\0')
    {
        printf("%c",c[i]);
        i++;
    }
    printf("\n");
    // OR 
    while(*c != '\0')
    {
        printf("%c",*c);
        c++; // moving the pointer to next element
    }
    printf("\n");
}
void readonly_display(const char *c)
{   // here we can not alter the array which is pointed by the pointer c:
    while(*c != '\0')
    {
        printf("%c",*c);
        c++; // moving the pointer to next element
    }
    printf("\n");
}
// define the method at the top to use in the functions below (Restriction of c)
void increment(int *p) 
{
    *p = *p + 1;
}

//NOTE : We pass the size of the array to any function because we can not calculate the size inside the function.
int sumElements(int arr[], int len)
{
    int sum=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    // this will give wrong value because we get reference to the array instead of the actual array ...
    printf("size of array calculated inside the function is : %d\n"+size); 

    for(int i=0;i<len; i++)
    {
        sum += arr[i];
    }
    return sum;
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

    // arrays and pointers:
    printf("--------arrays and pointers-----------\n");
    int array1[] = {1,2,3,7,4,5,9,6};
    int *p_array1 = array1; // no need for the & sign
    
    // For an array 'array' with pointer "p_array' :
    //NOTE : Address of an element at index i ==> &array[i] or (array+i) or (p_array+i)
    //NOTE : Vlaue at an index i in an array ==> array[i] or *(p_array+i) or *(array+i)
    // The address of the first element in the array is called the Base address. Obtained simply as =array;

    printf("Address of first element : %d\n",array1);
    printf("Address of first element : %d\n",&array1[0]);
    printf("Value of first element : %d\n",*array1);
    printf("Value of first element : %d\n",array1[0]);

    //Size of array calculation
    // using pointers
    int array1_sz = *(&array1 + 1)-array1;
    // using sizeof operator :
    int array1_size = sizeof(array1)/sizeof(array1[0]);

    printf("Size of array1 is : %d\n",array1_sz);
    printf("Size of array1 is : %d\n\n",array1_size);

    for(int i=0; i<array1_sz; i++)
    {
        printf("Address of %dth element : %d\n",i,array1);
        printf("Address of %dth element : %d\n",i,&array1[i]);
        printf("Value of %dth element : %d\n",i,*array1);
        printf("Value of %dth element : %d\n",i,array1[i]);
    }
    // Interesting Fact :
    // array1++ is invalid
    // p_array1++ is valid

    // arrays as function arguments :
    int sum = sumElements(array1,array1_sz);
    printf("Sum of all elements is : %d\n",sum);

    //character arrays or strings in C :
    //NOTE : All the strings in c should be null terminated 
    //and thus the character arrays should be of length one character more than the string we want to store.

    char str1[5] = "JOHN";
    char *p_str1;
    p_str1 = str1;
    printf("string is : %s\n",p_str1);
    printf("Character at index 3 : %c\n",*(str1+3));
    printf("Character at index 3 : %c\n",*(p_str1+3));
    printf("Character at index 3 : %c\n",str1[3]);
    display(p_str1);
    readonly_display(p_str1);
    // Character Pointer Gotcha's 
    char *p_str_const = "Hello"; // This is a compile time constant
    // uncomment the following to see the error
    // p_str_const[1] = 'E'; // this will give error during runtime...
    printf("%s\n",p_str_const);

    //The following is the way to declare the mutable strings...
    char *p_str2 = str1; 
    p_str2[1] = 'E'; // this will not give error during runtime...
    printf("%s\n",p_str2);

}

