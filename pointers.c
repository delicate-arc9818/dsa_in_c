#include <stdio.h>
//int main(){
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


    /*
    int arr[20] = {1,2,3,4,5};

    printf("%p\n", &arr[0]); //address of memory[0]
    printf("%p\n", &arr);   //address of memory[0]
    printf("%p\n", arr);    //address of memory[0]

    int *ptr = &arr[0];

    printf("%p\n", ptr);    //address of memory[0]
    printf("%p\n", ptr + 1);    //address of memory[1]
    printf("%d\n", *ptr);   //value of memory[0]
    printf("%p\n", &ptr);   //address pointer
    */


    /*
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    printf("%p\n", arr);
    printf("%s\n", ch);

    char *c = &ch[0];
    int *ptr = &arr[0];

    printf("%p\n", ptr);
    printf("%s\n", c);

    char temp = 'z';
    char *p = &temp;

    printf("%s\n", p); //prints z����� until it finds \0
    */
//  return 0;
//}



/*
void print(int *ptr){

    printf("%p\n", ptr);
    printf("%d\n", *ptr);

}

void update(int *ptr){

    *ptr = *ptr + 1;
    printf("value of ptr inside func is: %d\n", *ptr);
    printf("address of ptr inside func is: %p\n", ptr);

}

int main(){
    int value = 5;
    int *ptr = &value;
    printf("before updating\n");
    print(ptr);
    printf("updated inside function\n");                                            p = p + 1 does not work globally
    update(ptr);                                                                    *p = *p + 1 works globally
    printf("after updating and coming back to main\n");
    print(ptr);
    printf("value of ptr after updating inside func is: %d\n", *ptr);
    return 0;
}
*/


/*
void getsum(int *arr, int n){

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }

    printf("%d\n", sum);

}
int main(){
    int arr[5] = {1,2,3,4,5};

    getsum(arr, 5);

    return 0;
}
*/

/*
int main(){

    int value = 5;
    int* ptr = &value;
    int** ptr2 = &ptr;

    printf("value is: %d\n", value);
    printf("value is: %d\n", *ptr);
    printf("value is: %d\n", **ptr2);
    
    printf("address of value is: %p\n", &value);
    printf("address of value is: %p\n", ptr);
    printf("address of value is: %p\n", *ptr2);

    printf("address of 1st pointer is: %p\n", &ptr);
    printf("address of 1st pointer is: %p\n", ptr2);
    return 0;
}
*/


//REFERENCE VARIABLE

int main(){

    int i = 5;

    //create reference variable

    int &(j) = i;

    printf("%d\n", i);
    i++;
    printf("%d\n", i);
    j++;
    printf("%d\n", i);

    return 0;
}