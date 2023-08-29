#include<iostream>
using namespace std;

bool anagrams(string s1,string s2){
    int hash[26]={0};

    for(char c : s1){
        int index = c-'a';
        hash[index]++;
    }
    
    for(char c : s2){
        int index=c-'a';
        hash[index]--;
    }
    for(int i=0;i<26;i++){
        if(hash[i]!=0){
            return false;
        }
    }
    return true;

}
int main(){
    string s1="listen";
    string s2="silent";
    if(anagrams(s1,s2)){
        cout<<s1<<" and "<<s2<<" are anagrams";        
    }
    else
            cout<<s1<<" and "<<s2<<" not anagrams";

}