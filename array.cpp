#include<iostream>
using namespace std ;

int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4,5,6}; //and this array will create in 'stack' 

    int b[5]={8,3,1,5,6}; // and this array will create in 'stack' 


    int x[7]={2,5,9,7,9,7,6}; // this array will create in 'stack' 

    int *p=new int[9]; // this array will create in 'heap' (and heap is large memory) 


    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<endl ;
     }
    


    return 0;
}
