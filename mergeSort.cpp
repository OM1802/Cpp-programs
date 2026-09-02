#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int temp[10];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]){
          temp[k++] = arr[i++];
        }
        else{
          temp[k++] = arr[j++];
        }    
    }

    while (i <= mid){
      temp[k++] = arr[i++];
    }
    while (j <= high){
      temp[k++] = arr[j++];
    }
    for (i = low; i <= high; i++){
      arr[i] = temp[i];
    }     
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[10] = {45, 12, 89, 23, 7, 56, 34, 91, 3, 67};

    mergeSort(arr,0,9);

    for (int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }  
    return 0;
}



