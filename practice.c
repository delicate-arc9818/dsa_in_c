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




//MERGE SORT


// void merge(int arr[], int start, int mid, int end){
//     int i, j, k;
//     int n1 = mid - start + 1;
//     int n2 = end - mid;
//     int leftarr[n1], rightarr[n2];
//     for(int i = 0; i < n1; i++){
//         leftarr[i] = arr[start + i];
//     }
//     for(int j = 0; j < n2; j++){
//         rightarr[j] = arr[mid + 1 + j];
//     }
//     i = 0;
//     j = 0;
//     k = start;
//     while(i < n1 && j < n2){
//         if(leftarr[i] <= rightarr[j]){
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
//         int mid = left + (right - left)/2;
//         mergesort(arr, left, mid);
//         mergesort(arr, mid+1, right);
//         merge(arr, left, mid, right);
//     }
// }
// int main(){
//     int size;
//     printf("enter size of arr: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i  = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     mergesort(arr, 0, size-1);
//     for(int i = 0; i <  size; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }




//ROTATE ARRAY

// void printArray(int brr[], int size){
//     for(int i = 0; i < size; i++){
//         printf("%d ", brr[i]);
//     }
// }

// void rotateArray(int arr[], int size, int roteteBy, int brr[]){
//     for(int i = 0; i < size; i++){
//         brr[i] = arr[(i + roteteBy)%size];
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
//     int rotateBy;
//     printf("rotate array by:");
//     scanf("%d", &rotateBy);
//     int brr[size];
//     rotateArray(arr, size, rotateBy, brr);
//     printArray(brr, size);
//     return 0;
// }




//ARRAY IS SORTED ?

// bool sortedRotated(int arr[], int size){
//     int count  = 0;
//     for(int i = 1; i < size; i++){
//         if(arr[i-1] < arr[i]){
//             count++;
//         }
//     }
//     if(arr[size-1] > arr[0]){
//         count++;
//     }
//     return count <= 1;
// }

// int main(){
//     int size;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     if(sortedRotated(arr, size)){
//         printf("array is sorted");
//     }
//     else{
//         printf("array is not sorted");
//     }
//     return 0;
// }




//ADDING TWO ARRAYS

// int main() {
//     int n;
//     printf("Enter the size of the arrays: ");
//     scanf("%d", &n);

//     int array1[n], array2[n], sum[n + 1];
//     int carry = 0;

//     printf("Enter elements of the first array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &array1[i]);
//     }

//     printf("Enter elements of the second array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &array2[i]);
//     }

//     for (int i = 0; i < n; i++) {
//         int current_sum = array1[i] + array2[i] + carry;
//         sum[i] = current_sum % 10;
//         carry = current_sum / 10;
//     }

//     if (carry > 0) {
//         sum[n] = carry;
//         n++;
//     }

//     printf("Sum of the two arrays:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", sum[i]);
//     }
//     printf("\n");

//     return 0;
// }





//LENGTH OF STRING

// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[20];
//     scanf("%s", &name);
//     int result = getLength(name);
//     printf("Length of string is: %d", result);
//     return 0;
// }





//REVERSE NAME

// void reverse(char name[], int len){
//     int start = 0;
//     int end = len-1;
//     while(start < end){
//         char temp = name[start];
//         name[start] = name[end];
//         name[end] = temp;
//         start++;
//         end--;
//     }
// }

// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[20];
//     scanf("%s", &name);
//     int len = getLength(name);
//     reverse(name, len);
//     printf("%s", name);
//     return 0;
// }




//is_Pallindrome

// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }

// bool pallin(char name[], int len){
//     int s = 0;
//     int e = len-1;
//     while(s < e){
//         if(name[s] != name[e]){
//             return 0;
//         }
//         s++;
//         e--;
//     }
//     return 1;
// }

// int main(){
//     char name[20];
//     scanf("%s", &name);
//     int len = getLength(name);
//     if(pallin(name, len)){
//         printf("is a pallindrome");
//     }
//     else{
//         printf("not a pallindrome");
//     }
//     return 0;
// }




//file handling

// int main(){
//     FILE* fptr;
//     fptr = fopen("text.txt", "w");
//     fputs("C is a fun programming language\n", fptr);
//     fputs("And, I love using C language", fptr);
//     fclose(fptr);

//     fptr = fopen("text.txt", "r");
//     char content[1000];
//     while(fgets(content, 1000, fptr)){
//         printf("%s", content);
//     }
//     return 0;
// }