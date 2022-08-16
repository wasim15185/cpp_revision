#include<iostream>

using namespace std ;
/*
what is typedef ?

ans:- we can change the datatype name , 

let , int ,float,char ... etc are 'datatypes' ,
now, if i write ' typedef  int xyzInt '
then , 'int' datatype name is changed .

*/

int main(int argc, char const *argv[])
{

typedef int newChangedIntTypename ;

 newChangedIntTypename a =5 ;

cout<<a;

 


    
    return 0;
}
