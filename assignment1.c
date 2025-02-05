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

// Recursive helper function with corrected survivor count.
int findGuardianRec(int n, int left) {
    if (n == 1)
        return 1;  // Base case: only one citizen remains.
    
    if (left) {
        // Left-to-right elimination:
        // Survivors are in positions 1, 3, 5, … (i.e. ceil(n/2) survivors)
        return 2 * findGuardianRec((n + 1) / 2, 0) - 1;
    } else {
        // Right-to-left elimination:
        if (n % 2 == 1)
            // For odd n, survivors are in positions 1, 3, 5, … (ceil(n/2))
            return 2 * findGuardianRec((n + 1) / 2, 1) - 1;
        else
            // For even n, survivors are in positions 2, 4, 6, … (n/2 survivors)
            return 2 * findGuardianRec(n / 2, 1);
    }
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Invalid number of citizens\n");
        return 1;
    }

    // Start with left-to-right elimination (left = 1).
    int guardian = findGuardianRec(num, 1);
    printf("Last remaining citizen: %d\n", guardian);

    return 0;
}

