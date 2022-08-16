#include<iostream>
using namespace std ;

class Complex{

public: 
    int real ;
    int imaginary ;

    Complex(int r = 0, int i = 0){
        real =r ;
        imaginary =i ;
    }

/**
 * @brief This operation is overloading for adding (+) performance
 * 
 * operator+ 
 * 
 * @param c 
 * @return Complex 
 */
   Complex operator+(Complex c){
       Complex temp ;
       temp.imaginary = this->imaginary + c.imaginary;
       temp.real = this->real+c.real ;
        cout<< "Number is : "<< temp.real <<" + "<< temp.imaginary<<"i "<<endl ;

       return temp ;
   }





    /**
     * @brief This operation is overloading for adding (+) performance
     * 
     * @param c 
     * @return Complex 
     */
    Complex add (Complex c){
        Complex temp ;
        temp.imaginary = this->imaginary + c.imaginary;
        temp.real = this->real+c.real ;
        cout<< "Number is : "<< temp.real <<" + "<< temp.imaginary<<"i "<<endl ;

        return temp ;
    }



} ;


int main()
{
    

    Complex c1(6,9) , c2(9,65) , c3 ;

      

    c3=c1+c2 ; // this is happening beacuse of ' operator+ ' function  <-- This is Operator Overloading

    //c3= c1.add(c2) ; // <-- This is also Operator Overloading 


    return 0;
}
