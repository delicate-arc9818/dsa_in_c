// #include <stdio.h>
// #include <stdbool.h>


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