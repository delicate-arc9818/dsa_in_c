#include <stdio.h>

void binary_search(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    int left = end;
    int right = start;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            left = right = mid;

        }
        if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
}

int main(){
    int arr[7] = {2,4,4,4,6,8,9};
    int size = 7;
    int target = 4;
    binary_search(arr, size, target);
    return 0;
}