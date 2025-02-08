#include <stdio.h>
int main(){
    /*
    int arr[10];
    printf("address of first memory block is: %p\n", arr);
    printf("address of first memory block is: %p\n", &arr[0]);
    printf("value at first memory block is: %d\n", arr[0]);
    printf("value at first memory block is: %d\n", *arr);
    printf("value at memory location + 1 is: %d\n", *arr + 1);
    printf("value at memory location + 1 is: %d\n", *(arr) + 1);
    printf("value at second memory block is: %d\n", *(arr + 1));
    //arr[i] = *(arr + i)
    //i[arr] = *(i + arr) same as line 11
    printf("value at second memory block is: %d\n", 1[arr]);
    */


    /*
    int temp[10];

    printf("size of array is: %lu bytes \n", sizeof(temp)); //long unsigned bit
    printf("size of address of value at memory[0] is: %lu bytes \n", sizeof(&temp));
    printf("size of value at memory[0] is: %lu bytes \n", sizeof(*temp));

    int *ptr = &temp[0];

    printf("size of address of first memory location is: %lu bytes \n", sizeof(ptr));
    printf("size of memory used to store value at first memory block is: %lu bytes \n", sizeof(*ptr));
    printf("size of memory address of pointer is: %lu bytes \n", sizeof(&ptr));
    */

    int arr[20] = {1,2,3,4,5};

    printf("%p\n", &arr[0]); //address of memory[0]
    printf("%p\n", &arr);   //address of memory[0]
    printf("%p\n", arr);    //address of memory[0]

    int *ptr = &arr[0];

    printf("%p\n", ptr);    //address of memory[0]
    printf("%p\n", ptr + 1);    //address of memory[1]
    printf("%d\n", *ptr);   //value of memory[0]
    printf("%p\n", &ptr);   //address pointer
    return 0;
}