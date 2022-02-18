#include<iostream>

using namespace std ;

class RectAngle{

int height =5 ;
int width =36 ;

public:

    void setHeight(int h){
        height=h ;
    }

    int getHeight(){
        return height ;
    }

    void setWidth(int w){
        width=w;
    }

    int getWidth(){
        return width;
    }


    int getArea(){
        cout<< height*width <<endl;
      return height*width ;  
    }


   // Only declaration
    int perimetre() ;


} ;


/**
 * @brief Definition outside class using "::"
 * 
 * @return int 
 */


int RectAngle::perimetre(){ //"::" --> is ScopeResoution-Operator 

    int p = this->getHeight() * this->getWidth();

   cout<<p << endl ;
   return  p;
}


int main()
{

   RectAngle r ; 

   r.getArea();
    
    
    return 0;
}
