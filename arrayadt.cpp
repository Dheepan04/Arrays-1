#include<iostream>
using namespace std;

class Array{
    private:
    int *A;
    int size;
    int length;
    public:
        Array(int size){
            this->size=size; //Array obj is pointer ie created in heaps
            A= new int[size];

        }
        void create(){
            length=5;
            for(int i=0;i<length;i++){
                A[i]=10;
            }
        }
        void display(){
            cout<<"The array elements are";
            for(int i=0;i<length;i++){
                cout<<A[i]<< " ";
        }
}
        ~Array(){
            delete[] A;
            cout<<"The array is destroyed"<<endl;
        }

};

int main(){
        Array arr(10);
        arr.create();
        arr.display();
        return 0;

}