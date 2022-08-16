#include<iostream>

using namespace std ;

class RectAngle{

    
    int height ;
    int width ;

public :
    RectAngle(int h , int w){
       height = h ;
       width = w ;
    }    

    /**
     * @brief hight getter and setter
     * 
     */
    int getHeight(){
        return height ;
    }

    void setHeight(int h ){
        this->height=h;
    }

    /**
     * @brief width getter and setter
     * 
     */

    int getWidth(){
        return width ;
    }

    void setWidth(int w){
        width=w;
    }

    /**
     * @brief getArea
     * 
     */

    int getArea(){
        return height*width ;
    }





} ;



int main(int argc, char const *argv[])
{

    RectAngle r =   RectAngle(5,10) ;
    

  int area =  r.getArea();

    cout<< area << endl ;
    
    return 0;
}
