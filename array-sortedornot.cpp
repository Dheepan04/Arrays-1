#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    for (int i=1;i<size;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
        return true;
}

int main(){
    int arr1[]={1,3,5,7};
    int size1= sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,4,6,9,10};
    int size2= sizeof(arr2)/sizeof(arr2[0]);
    if(isSorted(arr1,size1)){
        cout<<"sorted array1"<<endl;
    }
    else{
        cout<<"unsorted array1"<<endl;
    }
    if(isSorted(arr2,size2)){
        cout<<"sorted array 2"<<endl;
    }
    else
        cout<<"unsorted array2";
}
