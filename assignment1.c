 #include <stdio.h>

// int last_occurance(int arr[], int size, int target){
//     int left = 0;
//     int right = size - 1;
//     int idx = -1;
//     while(left <= right){
//         int mid = left + (right - left) / 2;
//         if(arr[mid] == target){
//             idx = mid;
//             left = mid + 1;
//         }
//         else if(arr[mid] > target){
//             right = mid - 1;
//         }
//         else{
//             left = mid + 1;
//         }
//     }
//     return idx;
// }

// int first_occurance(int arr[], int size, int target){
//     int left = 0;
//     int right = size - 1;
//     int idx = -1;
//     while(left <= right){
//         int mid = left + (right - left) / 2;
//         if(arr[mid] == target){
//             idx = mid;
//             right = mid - 1;
//         }
//         else if(arr[mid] > target){
//             right = mid - 1;
//         }
//         else{
//             left = mid + 1;
//         }
//     }
//     return idx;
// }

// int main(){
//     int arr[7] = {2,4,4,4,6,8,9};
//     int size = 7;
//     int target = 6;
//     int a1 = first_occurance(arr, size, target);
//     int a2 = last_occurance(arr, size, target);
//     printf("{%d %d}\n", a1, a2);
//     return 0;
// }




int main(){
    int size = 7;
    elimination(size);
    return 0;
}