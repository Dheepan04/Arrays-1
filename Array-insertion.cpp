#include<iostream>
using namespace std;

struct Array{    // user defined Datatype that can have multiple datatypes
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    cout<<"The array elements are : ";
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

void Append(struct Array *arr, int x){
    if(arr->length < arr->size){
        arr->A[arr->length]=x;
        arr->length++;
    }
}
void insert(struct Array *arr , int index, int x ){
    if(index>=0 && index<arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}


int main(){
    struct Array ar1={ {1,2,3,4,5},10,5 };
    cout<<"the initial array is : "<<endl;
    display(ar1);
    cout<<endl;
    Append(&ar1,100);
    cout<<"Array after appending 100 : "<<endl;
    display(ar1); 
    cout<<endl;
    insert(&ar1,0,200);
    cout<<"Array afer insertion at 0 index"<<endl;
    display(ar1);
    return 0;
}