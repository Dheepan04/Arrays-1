#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int len;
};

void display(struct Array arr){
    for(int i=0;i<arr.len;i++){
        cout<<arr.A[i]<<" ";
    }
    //cout<<endl;
}

int del(struct Array *arr,int index){
    int x=0;
    int i;
    if(index>=0 && index<arr->len){
        x=arr->A[index];
        for(i=index;i<arr->len-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->len--;
        return x;
    }
    return 0;
}

int main(){
    struct Array a={ {1,2,3,4,5},10,5};
    cout<<"The deleted element in array : "<<del(&a,2)<<endl;
    display(a);
    return 0;
    
}