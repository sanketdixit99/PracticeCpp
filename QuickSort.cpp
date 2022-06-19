#include<iostream>
using namespace std;

void swap(int* m, int* n){
    int temp = *m;
    *m = *n;
    *n = temp; 
}

int partition(int* arr, int begin, int end){
    int pivot = arr[end];
    int pIndex = begin;
    for (int i=begin; i<end; i++){
        if (arr[i]<=pivot){
            swap(&arr[i], &arr[pIndex]);
            pIndex++;
        }
    }
    cout<< "before swap: arr[end] = "<<arr[end] <<" & arr[pIndex] = "<<arr[pIndex]<<endl;
    swap(&arr[end], &arr[pIndex]);
    cout<< "After swap: arr[end] = "<<arr[end] <<" & arr[pIndex] = "<<arr[pIndex]<<endl;
    return pIndex;
}

void QuickSort(int* arr, int begin, int end){
    if (begin>=end){
        return;
    }
    int pIndex = partition(arr, begin, end);
    QuickSort(arr, begin, pIndex-1);
    QuickSort(arr, pIndex+1, end);
}

int main(){
    int arr[] = {2,8,6,7,1,3,18,14};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << "length = "<<length<<endl;
    for (int i=0; i<length; i++){
        cout << " "<<arr[i];
    }
    cout << endl;
    QuickSort(arr, 0, length-1);

    for (int i=0; i<length; i++){
        cout << " "<<arr[i];
    }
}