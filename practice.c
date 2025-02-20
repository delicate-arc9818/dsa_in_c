#include <stdio.h>
#include <stdbool.h>
#include <string.h>


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




//FILE HANDLING


// void addStudent(int roll_num, char name[], float marks){
//     FILE *fp = fopen("students.txt", "a");

//     if (fp == NULL){
//         printf("Error opening file!\n");
//         return;
//     }

//     fprintf(fp, "\n%d %s %.2f", roll_num, name, marks);

//     fclose(fp);

//     printf("Student added successfully\n");
// }

// void displayRecord(){
//     FILE *fp = fopen("students.txt", "r");

//     if(fp == NULL){
//         printf("Error opening file!\n");
//         return;
//     }

//     char ch;

//     while((ch = fgetc(fp)) != EOF){
//         printf("%c", ch);
//     }

//     fclose(fp);

// }

// void studentSearch(int roll_num){
//     FILE *fp = fopen("students.txt", "r");

//     if(fp == NULL){
//         printf("Error opening file\n");
//         return;
//     }

//     int roll;
//     char name[100];
//     char surname[100];
//     float marks;

//     while(fscanf(fp, "%d %s %s %f", &roll, name, surname, &marks) != EOF){

//         if(roll == roll_num){
//             printf("Record found: Roll Number: %d Name: %s Marks: %.2f", roll, name, marks);
//             fclose(fp);
//             return;
//         }

//     }
//     printf("NO matching record");
//     fclose(fp);
// }


// int main(){
//     int command;
//     while(1){
//         printf("\nEnter command: ");
//         scanf("%d", &command);
//         if(command == 1){
//             //add a new student
//             int roll_num;
//             char name[100];
//             float marks;

//             printf("Enter roll number: ");
//             scanf("%d", &roll_num);
//             getchar();

//             printf("Enter name: ");
//             fgets(name, sizeof(name), stdin);
//             name[strcspn(name, "\n")] = '\0';

//             printf("Enter marks: ");
//             scanf("%f", &marks);

//             addStudent(roll_num, name, marks);
//         }
//         else if(command == 2){
//             //display all student record
//             displayRecord();
//         }
//         else if(command == 3){
//             //search for student by roll number
//             int roll_num;

//             printf("enter roll num to search: ");
//             scanf("%d", &roll_num);

//             studentSearch(roll_num);
//         }
//         else if(command == 4){
//             //update name or marks by roll number
//             int roll_num;
//             printf("enter roll number to update: ");
//             scanf("%d", &roll_num);
//         }
//         else if(command == 5){
//             //delete record
//         }
//         else if(command == 6){
//             //mergesort student records by name
//         }
//         else if(command == 7){
//             //mergesort student records by marks
//         }
//         else{
//             break;
//         }
//     }
//     return 0;
// }





//QUICK SORT

// int quick(int arr[], int lwb, int upb){
//     int i, j, pivot, temp;
//     i = lwb;
//     j = upb;
//     pivot = arr[lwb];
//     while(i <= j){
//         while(arr[i] <= pivot){
//             i++;
//         }
//         while(arr[j] >= pivot){
//             j--;
//         }
//         if(i < j){
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//         arr[lwb] = arr[j];
//         arr[j] = pivot;
//         return j;
//     }
// }

// void sort(int arr[], int lwb, int upb){
//     int z;
//     if(lwb < upb){
//         z = quick(arr, lwb, upb);
//         sort(arr, lwb, z-1);
//         sort(arr, z+1, upb);
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
//     sort(arr, 0, size - 1);
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }




//TWO SUM USING POINTERS

// void twosum(int arr[], int size, int target){
//     int left = 0;
//     int right = size - 1;
//     while(left < right){
//         int sum = arr[left] + arr[right];
//         if(sum == target){
//             return;
//         }
//         else if(sum < target){
//             left++;
//         }
//         else{
//             right--;
//         }
//     }
//     printf("no number found");
// }

// int main(){
//     int size, target;
//     printf("enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", arr[i]);
//     }
//     printf("Enter target sum: ");
//     scanf("%d", &target);
//     twosum(arr, size, target);
//     return 0;
// }




// void multiplymatrix(int n, int (*a)[n], int (*b)[n], int (*result)[n]){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             *(*(result + i) + j) = 0;
//             for(int k = 0; k < n; k++){
//                 *(*(result + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
//             }
//         }
//     }
// }

// void printmatrix(int n, int (*result)[n]){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             printf("%d ", *(*(result + i) + j));
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int n = 3;
//     int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
//     int result[n][n];
//     multiplymatrix(n, a, b, result);
//     printmatrix(n, result);
//     return 0;
// }

// int binarysearch(int size, int arr[], int target){
//     int start = 0;
//     int end = arr[size] - 1;
//     while(start <= end){
//         int mid = start + (end - start)/2;
//         if(target == arr[mid]){
//             return mid;
//         }
//         else if(target < arr[mid]){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
// }

// int binarysearch(int start, int end, int target){
//     int mid = start + (end - start)/2;
//     if(start > end){
//         return -1;
//     }
//     else if(target < mid){
//         return binarysearch(start, mid - 1, target);
//     }
//     else if(target == mid){
//         return mid;
//     }
//     else{
//         return binarysearch(mid + 1, end, target);
//     }

// }

// int main(){

// }

// void bubblesort(int arr[], int size){
//     for(int i = 0; i < size - 1; i++){
//         for(int j = 0; j < size - 1; j++){
//             if(arr[j] > arr[j+1]){                   inner loop runs for n-1 time, outer loop runs for n-1 times
//                 int temp = arr[j];                   time complexity = O(n^2)
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// void insertionsort(int arr[], int size){
//     for(int i = 1; i < size; i++){
//         int num = arr[i];
//         int j = i - 1;
//         for(j; j >= 0; j--){
//             if(arr[j] > num){
//                 arr[j+1] = arr[j];
//             }
//         }
//         arr[j+1] = num;
//     }
// }

// void selectsort(int arr[], int n){
//     for(int i = 0; i < n-1; i++){
//         int small = arr[i];
//         int b = i;
//         for(int j = i + 1; j < n; j++){
//             if(small > arr[j]){
//                 arr[j] = small;
//                 b = j;
//             }
//         }
//         arr[b] = arr[i];
//         arr[i] = small;
//     }
// }

// void divide(int arr[], int start, int end){
//     int mid;
//     if(start < end){
//         mid = start + (end - start)/2;
//         divide(arr, start, mid);
//         divide(arr, mid+1, end);
//         conquermerge(arr, start, mid, end);
//     }
// }

// void conquermerge(int arr[], int start, int mid, int end){
//     int x = start;
//     int y = mid + 1;
//     int z = 0;
//     int temp[100];

//     while((x <= mid) && (y <= end)){
//         if(arr[x] <= arr[y]){
//             temp[z] = arr[x];
//             x++;
//             z++;
//         }
//         else{
//             temp[z] = arr[y];
//             y++;
//             z++;
//         }
//     }
//     while(x <= mid){
//         temp[z++] = arr[x++];
//     }

//     while(y <= end){
//         temp[z++] = arr[y++];
//     }

//     z = 0;
//     for(x = start; x <= end; x++){
//         arr[x] = temp[z];
//         z++;
//     }
// }

// int max = 8;
// int stack[8];
// int top = -1;

// int isempty(){
//     if(top == -1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int isfull(){
//     if(top == max){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int peek(){
//     return stack[top];
// }

// int pop(){
//     if(!isempty()){
//         int data = stack[top];
//         top-=1;
//         return data;
//     }
//     else{
//         printf("stack empty\n");
//         return 0;
//     }
// }

// void push(int data){
//     if(!isfull()){
//         top = top + 1;
//         stack[top] = data;
//     }
//     else{
//         printf("stack overflow\n");
//     }
// }











void insertionsort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int j = i-1;
        int temp = arr[i];
        for(;j >= 0; j--){
            if(arr[j] > arr[i]){
                arr[j+1] = arr[j];
            }
        }
        arr[j] = temp;
    }
}
void merge(int arr[], int start, int mid, int end);

void divide(int arr[], int start, int end){
    if(start < end){
        int mid = start + (end - start)/2;
        divide(arr, start, mid);
        divide(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }

}

void merge(int arr[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int temp[100];
    int z = 0;


    while((i <= mid) && (j <= end)){
        if(arr[i] <= arr[j]){
            temp[z] = arr[i];
            i++;
            z++;
        }
        else{
            temp[z] = arr[j];
            j++;
            z++;
        }
    }

    while(i <= mid){
        temp[z++] = arr[i++];
    }

    while(j <= end){
        temp[z++] = arr[j++];
    }
    for(int k = start; k <= end; k++){
        arr[k] = temp[k - start];
        z++;
    }

}

// int main(){

//     int arr[5] = {1, 43, 22, 1, 3};
//     divide(arr, 0, 4);

//     for(int i = 0; i < 5; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }



void sort(int arr[], int lwb, int upb);
int quick(int arr[], int lwb, int upb){
    int i = lwb + 1;
    int j = upb;
    int pivot = arr[lwb];

    while(i <= j){
        while((i <= upb) &&(arr[i] <= pivot)){
            i++;
        }
        while((j >= lwb) &&(arr[j] > pivot)){
            j--;
        }
        if(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[lwb] = arr[j];
    arr[j] = pivot;
    return j;

}

void sort(int arr[], int lwb, int upb){
    int z;
    if(lwb < upb){
        z = quick(arr, lwb, upb);
        sort(arr, lwb, z-1);
        sort(arr, z+1, upb);
    }
}

int main(){

    int arr[5] = {1, 43, 22, 1, 3};
    sort(arr, 0, 4);

    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}