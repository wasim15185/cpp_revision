#include<iostream>

using namespace std ;

int main(int argc, char const *argv[])
{
    int x =10;
    int &y=x;
    
    cout<< y <<endl ;
    cout<<x <<endl ;

    return 0;
}
