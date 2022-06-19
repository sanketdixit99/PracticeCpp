#include<bits/stdc++.h>
using namespace std;
int findindex(int* arr, int start, int end, int target){
    if(start<end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            return findindex(arr, start, mid-1, target);
        }else{
            return findindex(arr, mid+1, end, target);
        }
    }
    else{
        if(arr[start] > target){
            return start;
        }else{
            return start+1;
        }
    }
}

int main(){
    int arr[] = {1, 3, 5, 7, 9, 11};
    int start = 0;
    int end = 5;

    int value = findindex(arr, start, end, 4); 
    cout<<value<<endl;
    value = findindex(arr, start, end, 5); 
    cout<<value<<endl;
    value = findindex(arr, start, end, 12); 
    cout<<value<<endl;
    value = findindex(arr, start, end, 0); 
    cout<<value<<endl;
    value = findindex(arr, start, end, 10); 
    cout<<value<<endl;
}