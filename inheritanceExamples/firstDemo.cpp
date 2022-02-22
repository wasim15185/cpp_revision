#include<iostream>
using namespace std ;

class Parent{
    string name = "Parent" ;

    public : 
   void setName(string s){
       this->name = s ;
   }

    string getName(){
        return this->name ;
    }


    void whoIam(){
        cout<< "I am " << this->name <<endl;
    }
    

 
} ;

class Child : public Parent{

    public :
        Child(){
        
            this->setName("Child") ;
        }
    


 
} ;







int main()
{

    Parent p ;

    Child c ; 

    p.whoIam();
    c.whoIam() ;
    
    
    return 0;
}
