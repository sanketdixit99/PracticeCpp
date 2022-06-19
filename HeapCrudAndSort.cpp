#include<iostream>
using namespace std;

class Heap{
    public:
    void swap(int* m, int* n){
        int temp = *m;
        *m = *n;
        *n = temp;
    }

    void heapify(int* arr, int n, int i){
        int left = 2*i;
        int right = 2*i+1;

        if(left>n){
            return;
        }
        if(right>n && left<=n){
            if(arr[left-1] > arr[i-1]){
                swap(&arr[left-1], &arr[i-1]);
            }
            return;
        }

        int l = arr[left-1];
        int r = arr[right-1];
        int node_value = arr[i-1];

        if (l>=r && l>node_value){
            swap(&arr[left-1], &arr[i-1]);
        }
        if(r>l && r>node_value){
            swap(&arr[right-1], &arr[i-1]);
        }
    }

    void insert(int* arr, int n, int value){
        n = n+1;
        arr[n-1] = value;
        for(int i=n/2; i>0; i--){
            heapify(arr, n, i);
        }
    }
};

int main(){
    int maxHeap[] = {11,12,20,15,10,8,22};
    int n = sizeof(maxHeap)/sizeof(maxHeap[0]);
    cout << "before heapify"<<endl;
    for(int i=0; i<n;i++){
        cout << " "<<maxHeap[i];
    } 
    cout<<endl;
    Heap h1;

    for(int j=n/2; j>0; j--){
        h1.heapify(maxHeap, n, j);
    }

    cout << "After heapify"<<endl;
    for(int i=0; i<n;i++){
        cout << " "<<maxHeap[i];
    } 
    cout<<endl;

    h1.insert(maxHeap, n, 17);

    cout << "After insert"<<endl;
    for(int i=0; i<n+1;i++){
        cout << " "<<maxHeap[i];
    } 
    cout<<endl;
}