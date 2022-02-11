#include<iostream> 


template<class T>
T add(T a, T b){

return a+b ;
}


int main(int argc, char const *argv[])
{
    int integerVal= add<int>(2,6) ; // u can call generic function  like that
    int integerVal2= add(2,6) ; // u can call generic function aslo like that 
    
    float floatVal=add<float>(2.5,6.6) ;




    return 0;
}
