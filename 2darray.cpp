#include<iostream>
using namespace std;

int main(){

    //Method1
    int A[3][4]; //Array declaration
    int B[2][3]=
    {
        {10,20,30},
        {40,50,60}
    
    };
    int *c[2];// new key for allocating in heaps
    c[0]=new int[3];//3rows and 4cols
    c[1]=new int[4] ;

    int **d;
    d= new int*[2];
    d[0]= new int [3];
    d[1]=  new int [4];

}