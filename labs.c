#include <stdio.h>

//LAB-0

//QUESION-1

// int factorial(int num){
//     if(num==1){
//         return num;
//     }
//     return num*factorial(num-1);
// }

// int main(){
//     int num;
//     printf("enter num: ");
//     scanf("%d", &num);
//     int result = factorial(num);
//     printf("factorial of %d is: %d\n", num, result);
//     return 0;
// }

//QUESTION-2

// void reverseArray(int arr[], int size){
//     int start = 0;
//     int end = size - 1;
//     while(start < end){
//         int temp = arr[end];
//         arr[end] = arr[start];
//         arr[start] = temp;
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
// }

// int main(){
//     int size;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     reverseArray(arr, size);
//     printArray(arr, size);
//     return 0;
// }

//QUESTION-3

// int majorityElement(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         int count = 0;
//         for(int j = 0; j < size; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count > size/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }

// int main(){
//     int size;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     int result = majorityElement(arr, size);
//     printf("answer is %d\n", result);
//     return 0;
// }









//LAB-1

//QUESTION-1

void sortLogBookDiary(int size, int arr[size][2], int result[size][2]){
    int min;
    int max;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < 2; j++){
            if(j == 0){
                if(arr[i][0] > arr[i+1][0]){
                    min = arr[i+1][0];
                }
                else{
                    min = arr[i][0];
                }
            }
            else{
                if(arr[i][1] > arr[i+1][1]){
                    max = arr[arr[i][1]];
                }
                else{
                    max = arr[i+1][1];
                }
            }
        }
        result[i][0] = min;
        result[i][1] = max;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int logBook;
    printf("enter logBook of mugiwara's: ");
    scanf("%d", &logBook);
    int logBookDiary[logBook][2];
    for(int i = 0; i < logBook; i+=2){
        for(int j = 0 ; j < 2; j++){
            scanf("%d", &logBookDiary[i][j]);
        }
    }
    int result[logBook][2];
    sortLogBookDiary(logBook, logBookDiary, result);
    printArray(result, logBook);
    return 0;
}