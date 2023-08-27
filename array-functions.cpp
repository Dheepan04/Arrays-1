#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    for (int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    temp=*y;
}
int get(struct Array arr, int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    else{return -1;}
}
void set(struct Array *arr,int index,int x){  //no return value functions so we must include pointer to store and access address
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
}
int max(struct Array arr){
    int max=arr.A[0];
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]>max){
        max=arr.A[i];
        }
    }
    return max;
}
int min(struct Array arr){
    int min= arr.A[0];
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;
}
int sum(struct Array arr){
    int s=0;
    for(int i=0;i<arr.length;i++){
        s=s+arr.A[i];
    }
    return s;
}
float avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}

int main(){
    struct Array a={{1,2,3,4,5},10,6};
    cout<<"The given array is : "<<endl;
    display(a);
    cout<<endl;
    cout<<"The element at second index : "<<get(a,2);
    cout<<endl;
    set(&a,0,100);
    display(a);
    cout<<endl;
    cout<<"Max = "<<max(a)<<endl;
    cout<<"Min = "<< min(a)<<endl;
    cout<<"Avg = "<< avg(a)<<endl;
}