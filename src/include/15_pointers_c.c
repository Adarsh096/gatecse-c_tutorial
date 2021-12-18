#include<stdio.h>

void nd_display(int *p_array, int row, int col)
{
    
}

void nd_array_pointer()
{
    int arr[2][3]; // array of 2*3 size

    // each row is a 1-d array here:
    // will print the address of the first element in the 1st row :
    printf("Row of nd array : %d\n",arr[0]);
    // initializing the array :
    int start_seed = 1;
    for(int i = 0; i<2; i++)
    {
        for(int j=0; j<3;j++)
        {
            arr[i][j] = start_seed++; // we could have done a scanf too...
        }
    }

    // display 2d array :
    
    //GOTCHA : will give error. We can not pass the 2d array to a int pointer simply
    // nd_display(arr,2,3); 

    printf("Printing the contents of the array : \n");
    for(int i = 0; i<2; i++)
    {   printf("[");
        for(int j=0; j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("]\n");
    }

    // 2d array and pointers :
    /*
    int *p = arr; // Valid for 1d array. Otherwise compilation error.

    Now If arr here is a 2d array so the arrays name will return an array of 3 pointer to 3 int
    Thus the following is valid for a 2d array:
    int (*p)[3] = arr;
    //GOTCHA : 
    int *p[3] = arr; // Error : It will not be able to decide the datatype.

    FACTS : If arr is a 2d array then -
        arr[0] and arr[1] are both are pointer to 1D array of 3 elements
        This time each element of the array arr is a 1D array of 3 elements.
        So the name of the array will give the pointer to the first element ie the arr[0]

        printf(arr) == printf(&arr[0]);

        p+1 ==> move to the next row of 3 int since it is an array with two row of 3 ints. Name of array give a pointer to the first element so p here will give us the pointer to the first element in the first row.
        
        *(p+1) = arr[0][0]

        // dereferencing the pointer will give the value at the stored address..
        // and also the name of the array give the pointer to the first element.
        *(arr+1) == arr[1] =~ &arr[1][0] 

        // watch : https://youtu.be/zuegQmMdy8M?t=6847
        
        print(*(arr+1)+2) == print(arr[1]+2) == print(&arr[1][2])
        
        Here's a Tricky One For Ya...
        *(*arr+1) ==> arr[0][1]
    */

    /* GOTCHA!!!
    arr gives pointer to a 1D array of 3 elements 
    *arr gives a pointer to the first integer in the first row
    Even though the address of arr and *arr are same, they are not the same pointers.
    */

    printf("%d\n",(arr+1));  // address of first element of second row // Type hex address 
    printf("%d\n",*(arr+1)); // address of first element of second row // Type : Pointer
    printf("%d\n",**(arr+1)); // value of first element of second row. //Two * for 2D array element referencing.

    //Following will print same values:
    printf("%d\n",*(arr+1)+2);
    printf("%d\n",arr[1]+2);
    printf("%d\n",&arr[1][2]);


    int (*p)[3] = arr;

    //NOTE : printing a pointer and printing the address of value pointed by pointer will give same result
    // but they are of different datatypes ie pointer is not the same as address, rather pointer stores address 
    // and printing a pointer gives out the value stored in the pointer which is the address.
    
    printf("Pointer p : %d\n",*p);
    printf("Address of value pointed by pointer p : %d\n",arr[0]);
    printf("Address of pointer p : %d\n",&p);

}