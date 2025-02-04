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

#include <stdio.h>

int findGuardian(int arr[], int start, int end, int round) {
    if (start == end) {
        return arr[start];
    }

    int temp[end - start + 1];
    int j = 0;

    if (round % 2 == 0) { 
        for (int i = start; i <= end; i += 2) {
            temp[j++] = arr[i]; 
        }
    } else {  
        for (int i = end; i >= start; i -= 2) {
            temp[j++] = arr[i]; 
        }
    }

    return findGuardian(temp, 0, j - 1, round + 1);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num < 1) {
        printf("Invalid number of citizens");
        return 1;
    }

    int arr[num];
    for (int i = 0; i < num; i++) {
        arr[i] = i + 1;
    }

    int guardian = findGuardian(arr, 0, num - 1, 0);
    printf("Last remaining citizen: %d", guardian);

    return 0;
}
