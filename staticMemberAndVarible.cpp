
#include<iostream>
using namespace std ;

class ExampleOfStatic{


int x=10 ; 


static int staticval ; // Static Value 
public:

ExampleOfStatic(){
staticval++;
}

// Static function can access Static function
static int getStaticVal(){
    return staticval ;
}

int getNonStaticVal(){


    return staticval ;
}


} ;



// Here You must have to initlized Static variable
int ExampleOfStatic::staticval=0;


int main()
{


    ExampleOfStatic a,b,c,d,e;
    
    cout<<a.getStaticVal() <<endl ;
    cout<<ExampleOfStatic::getStaticVal() <<endl ;



    return 0;
}
