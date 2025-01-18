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

// void sortLogBookDiary(int size, int arr[size][2], int result[size][2]){
//     int min;
//     int max;
//     for(int i = 0; i < size; i++){
//         for(int j = 0; j < 2; j++){
//             if(j == 0){
//                 if(arr[i][0] > arr[i+1][0]){
//                     min = arr[i+1][0];
//                 }
//                 else{
//                     min = arr[i][0];
//                 }
//             }
//             else{
//                 if(arr[i][1] > arr[i+1][1]){
//                     max = arr[arr[i][1]];
//                 }
//                 else{
//                     max = arr[i+1][1];
//                 }
//             }
//         }
//         result[i][0] = min;
//         result[i][1] = max;
//     }
// }

// void printArray(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
// }

// int main(){
//     int logBook;
//     printf("enter logBook of mugiwara's: ");
//     scanf("%d", &logBook);
//     int logBookDiary[logBook][2];
//     for(int i = 0; i < logBook; i+=2){
//         for(int j = 0 ; j < 2; j++){
//             scanf("%d", &logBookDiary[i][j]);
//         }
//     }
//     int result[logBook][2];
//     sortLogBookDiary(logBook, logBookDiary, result);
//     printArray(result, logBook);
//     return 0;
// }

//QUESTION-2

// void largestIndex(int arr[], int size){
//     int maxcount = 0;
//     int count  = 0;
//     for(int i = 1; i < size; i++){
//         for(int j = i - 1; j >=0; j--){
//             if(arr[j] > arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//                 count++;
//             }
//         }
//         if(count > maxcount){
//             maxcount = count;
//         }
//     }
//     printf("%d", maxcount);
// }

// int main(){
//     int size;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     largestIndex(arr, size);
//     return 0;
// }


//QUESTION-3


// void merge(int arr[], int left, int mid, int right){
//     int n1 = mid - left + 1;
//     int n2 = right - mid;
//     int leftarr[n1];
//     int rightarr[n2];
//     for(int i = 0; i < n1; i++){
//         leftarr[i] = arr[left + i];
//     }
//     for(int i = 0; i < n2; i++){
//         rightarr[i] = arr[mid + 1 + i];
//     }
//     int i = 0;
//     int j = 0;
//     int k = left;
//     while(i < n1 && j < n2){
//         if(leftarr[i] < rightarr[j]){
//             arr[k] = leftarr[i];
//             i++;
//         }
//         else{
//             arr[k] = rightarr[j];
//             j++;
//         }
//         k++;
//     }
//     while(i < n1){
//         arr[k] = leftarr[i];
//         i++;
//         k++;
//     }
//     while(j < n2){
//         arr[k] = rightarr[j];
//         j++;
//         k++;
//     }
// }

// void mergesort(int arr[], int left, int right){
//     if(left < right){
//         int mid = left + (right - left) / 2;
//         mergesort(arr, left, mid);
//         mergesort(arr, mid+1, right);
//         merge(arr, left, mid, right);
//     }
// }


// void printarr(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
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
//     int oddcount = size/2;
//     int evencount = size - oddcount;
//     int oddarr[oddcount];
//     int evenarr[evencount];
//     oddcount = 0;
//     evencount = 0;
//     for(int i = 0; i < size; i++){
//         if(i%2==0){
//             evenarr[evencount] = arr[i];
//             evencount++;
//         }
//         else{
//             oddarr[oddcount] = arr[i];
//             oddcount++;
//         }
//     }
//     mergesort(oddarr, 0, oddcount - 1);
//     mergesort(evenarr, 0, evencount - 1);

//     oddcount = evencount = 0;
//     for (int i = 0; i < size; i++) {
//         if (i % 2 == 0) {
//             arr[i] = evenarr[oddcount++];
//         } else {
//             arr[i] = oddarr[evencount++];
//         }
//     }

//     printarr(arr, size);
//     return 0;
// }