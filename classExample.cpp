#include<iostream>

using namespace std ;



class RectAngle
{

public:
  int height ;
  int width ;


  int getArea(){
      cout<< height*width<<endl;
      return height*width ;
  }

};


int main(int argc, char const *argv[])
{
  
 

    RectAngle r ;

    RectAngle *p =&r;

    r.height=10 ;
    r.width=10 ;

    p->getArea();

   


    return 0;
}



