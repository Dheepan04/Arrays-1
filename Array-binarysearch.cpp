#include<iostream> 
using namespace std;

struct Array{
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

int Binarysearch(struct Array arr,int key){
    int l=0,mid,h;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
int main(){
    struct Array aa={ {10 ,20,30,40,50}, 7, 5};
    cout<<"the element 40 is founded in : "<<Binarysearch(aa,10);
    return 0;
}