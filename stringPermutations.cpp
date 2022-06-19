#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s, int start, int end){       
    if(start>=end){
        return true;
    }
    
    if(s[start] == s[end]){
        return palindrome(s, start+1, end-1);
    }

    return false;
}

void powerset(string s, int index, string str){
    if(index > s.size()-1){
        cout<< " "<<str;
        return;
    }
    powerset(s, index+1, str);
    powerset(s, index+1, str+s[index]);

}

void permute(string s, int index, string str){
    if(str.size() == s.size()){
        cout<< " "<<str;
        return;
    }

    for(int i=index; i<s.size(); i++){
        char temp = s[i];
        s[i] = s[index];
        s[index] = temp;
        permute(s, index+1, str+temp);
    }
}

int main(){
    string s = "racecar";
    string s1 = "abc";
    //bool output = palindrome(s, 0, s.size()-1);
    //cout << "   " <<output<<endl;
    
    //powerset(s1, 0, "");
    string s2 = "ABCD";
    permute(s2, 0, "");
}