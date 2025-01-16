#include <stdio.h>
#include <stdbool.h>


// //LINEAR SEARCH


// bool linearsearch(int arr[], int size, int key){
//     for(int i = 0; i < size; i++){
//         if(key == arr[i]){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int size, key;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("enter key: ");
//     scanf("%d", &key);
//     if(linearsearch(arr, size, key)){
//         printf("key found/n");
//     }
//     else{
//         printf("key not found/n");
//     }
//     return 0;
// }





// //BINARY SEARCH

// int binarysearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     while(start <= end){
//         int mid = start + (end - start)/2;
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(arr[mid] > key){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int size, key;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("enter key: ");
//     scanf("%d", &key);
//     printf("%d",binarysearch(arr, size, key));
//     return 0;
// }




// //FINDING SQRT USING BINARY SEARCH


// long long int sqrtint(num){
//     long long int start = 0;
//     long long int end = num;
//     long long int ans = -1;
//     while(start <= end){
//         long long int mid = start + (end - start)/2;
//         long long int sqr = mid*mid;
//         if(sqr == num){
//             return mid;
//         }
//         else if(sqr > num){
//             end = mid - 1;
//         }
//         else{
//             ans = mid;
//             start = mid + 1;
//         }
//     }
//     return ans;
// }
// double precise(long long int result, long long int num, int precision){
//     double factor = 1;
//     double ans = result;
//     for(int i = 0; i < precision; i++){
//         factor/=10;
//         for(double j = ans; j*j <= num; j+=factor){
//             ans = j;
//         }
//     }
//     return ans;
// }
// int main(){
//     long long int num;
//     int precision;
//     printf("enter num:");
//     scanf("%lld", &num);
//     printf("enter precision: ");
//     scanf("%d", &precision);
//     long long int result = sqrtint(num);
//     double ans = precise(result, num, precision);
//     printf("sqrt is: %.lf", ans);
//     return 0;
// }




//BOOK ALLOCATION PROBLEM


// bool ispossible(int arr[], int mid, int size, int students ){
//     int pagesum = 0;
//     int studentcount = 1;
//     for(int i = 0; i <  size; i++){
//         if(pagesum + arr[i] <= mid){
//             pagesum+=arr[i];
//         }
//         else{
//             studentcount++;
//             if(studentcount > students){
//                 return false;
//             }
//             pagesum = arr[i];
//         }
//     }
//     return true;
// }
// int main(){
//     int size, students;
//     int ans = -1;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("enter number of students: ");
//     scanf("%d", &students);
//     int start = 0;
//     int end = 0;
//     for(int i = 0; i < size; i++){
//         end+=arr[i];
//     }
//     while(start <= end){
//         int mid = start + (end - start)/2;
//         if(ispossible(arr, mid, size, students)){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//     printf("the ans is: %d", ans);
//     return 0;
// }




//PAINTERS PARTITIAN PROBLEM

// bool ispossible(int arr[], int size, int num, int mid){
//     int capacity = 0;
//     int painters = 1;
//     for(int i = 0; i < size; i++){
//         if(capacity + arr[i] <= mid){
//             capacity+=arr[i];
//         }
//         else{
//             painters++;
//             if(painters > num){
//                 return false;
//             }
//             capacity = arr[i];
//         }
//     }
//     return true;
// }
// int main(){
//     int size;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int num;
//     printf("enter num of painters: ");
//     scanf("%d", &num);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);  
//     }
//     int end = 0;
//     for(int i = 0; i < size; i++){
//         end+=arr[i];
//     }
//     int start = 0;
//     int ans = -1;
//     while(start <= end){
//         int mid = start + (end - start)/2;
//         if(ispossible(arr, size, num, mid)){
//             ans = mid;
//             end = mid -1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//     printf("the ans is: %d", ans);
//     return 0;
// }






//SELECTION SORT


// void selectionsort(int arr[], int size){
//     for(int i = 0; i < size - 1; i++){
//         int minidx = i;
//         for(int j = i + 1; j < size; j++){
//             if(arr[j] < arr[minidx]){
//                 minidx = j;
//             }
//         }
//         int temp = arr[minidx];
//         arr[minidx] = arr[i];
//         arr[i] = temp;
//     }
// }
// void printarray(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
// }
// int main(){
//     int size;
//     printf("enter size of array:");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     selectionsort(arr, size);
//     printarray(arr, size);
//     return 0;
// }





//BUBBLE SORT


// void bubblesort(int arr[], int size){
//     for(int i = 0; i < size - 1; i++){
//         for(int j = 0; j < size - i; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// void printarray(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
// }
// int main(){
//     int size;
//     printf("enter size of array:");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     bubblesort(arr, size);
//     printarray(arr, size);
//     return 0;
// }





//INSERTION SORT


// void insertionsort(int arr[], int size){
//     for(int i = 1; i < size; i++){
//         int temp = arr[i];
//         int j = i - 1;
//         while((j>=0) && (arr[j] > temp)){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
//     }
// }
// void printarray(int arr[], int size){
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
//     insertionsort(arr, size);
//     printarray(arr, size);
//     return 0;
// }





//REVERSE ARRAY


// void reversearray(int arr[], int size){
//     int start = 0;
//     int end = size - 1;
//     while(start <= end){
//         int temp = arr[end];
//         arr[end] = arr[start];
//         arr[start] = temp;
//         start++;
//         end--;
//     }
// }
// void printarray(int arr[], int size){
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
//     reversearray(arr, size);
//     printarray(arr, size);
//     return 0;
// }




