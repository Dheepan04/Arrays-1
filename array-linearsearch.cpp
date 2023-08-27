#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    for (int i=0; i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
 
int Linearsearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
        return i;
        }
    }
    return -1;
}

int main(void){
    struct Array a={{1,2,3,4,5},10,5};
    cout<<"The searched element element is found at : "<<Linearsearch(&a,3)<<endl;
    display(a);
    return 0;
}