#include<iostream>

using namespace std;


void Merge(int* L, int* R, int* A, int nL, int nR){
    int i=0; int j=0; int k=0;
    while(i<nL && j<nR){
        if(L[i]<=R[j]){
            A[k] = L[i];
            k++;
            i++;
        }
        else{
            A[k] = R[j];
            k++;
            j++;
        }
    }
    while (i<nL){
        A[k] = L[i];
        i++;
        k++;
    }
    while (j<nR){
        A[k] = R[j];
        j++;
        k++;
    }
}


void MergeSort(int A[], int size){
    if (size<2){
        return;
    }
    int mid = size/2;
    int nL, nR;
    int* L = new int;
    int* R = new int;
    if (size%2){
        nL =  mid+1;
        nR = mid;
        for (int i=0; i<=mid; i++){
            L[i] = A[i];
        }
        for (int j=0; j<mid; j++){
            R[j] = A[mid+1+j];
        }
    }
    else{
        nL = mid;
        nR = mid;
        for (int i=0; i<mid; i++){
            L[i] = A[i];
        }
        for (int j=0; j<mid; j++){
            R[j] = A[mid+j];
        }
    }
    MergeSort(L, nL);
    MergeSort(R, nR);
    Merge(L, R, A, nL, nR);    
}

int main(){
    int arr[] = {2,5,6,7,8,2,4,10,12};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << "length = "<<length<<endl;
    for (int i=0; i<length; i++){
        cout << " "<<arr[i];
    }
    cout << endl;
    MergeSort(arr, length);

    for (int i=0; i<length; i++){
        cout << " "<<arr[i];
    }
} 