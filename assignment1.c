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
//     int size;
//     printf("Enter size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     int target;
//     printf("Enter target: ");
//     scanf("%d", &target);
//     int a1 = first_occurance(arr, size, target);
//     int a2 = last_occurance(arr, size, target);
//     printf("{%d %d}\n", a1, a2);
//     return 0;
// }

// #include <stdio.h>

// long long int findGuardianRec(long long int n){
//     if(n == 1){
//         return 1;
//     }
//     return 2*((n/2) + 1 - findGuardianRec(n/2));
// }

// int main() {
//     long long int num;
//     printf("Enter number: ");
//     scanf("%lld", &num);

//     if (num < 1) {
//         printf("Invalid number of citizens\n");
//         return 1;
//     }
//     int guardian = findGuardianRec(num);
//     printf("Last remaining citizen: %d\n", guardian);

//     return 0;
// }

