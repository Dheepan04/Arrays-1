#include<iostream>
using namespace std;

void duplicate(int a[],int size){
    int maxelement=a[size-1];
    int Hasharray[maxelement+1]={0};
for(int i=0;i<size;i++){
    Hasharray[a[i]]++;
}
for(int i=0;i<=maxelement;++i){
    if(Hasharray[i]>1){
    cout<<"Duplicates : "<<i<<" Count: "<<Hasharray[i]<<endl;
}
}
}

int main(){
    int arr[]={1,2,2,3,5,5,5,6,7,7,8,8,9,9,9,44,55,55,32};
    int size=sizeof(arr)/sizeof(arr[0]);
    duplicate(arr,size);
}