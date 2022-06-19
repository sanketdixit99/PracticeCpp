#include<bits/stdc++.h>
using namespace std;

void mysortarray(int* arr,int n){
    sort(arr, arr+n);
}

int main(){
    int a[] = {2,7,3,8,5,4,6};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"Before Sort a"<<endl;
    for(int i=0; i<n; i++){
        cout<<" "<<a[i];
    }
    cout<<endl;

    mysortarray(a,n);
    
    cout<<"After Sort a"<<endl;
    for(int i=0; i<n; i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}