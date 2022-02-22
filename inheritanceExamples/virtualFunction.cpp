#include<iostream>
using namespace std ;

class Parent{
    string name = "Parent" ;

    protected : 
   void setName(string s){
       this->name = s ;
   }

    public :
    string getName(){
        return this->name ;
    }

   virtual void fun1(){
        cout<< "I am Fun1() from Parent"<<endl;
    }

    void fun2(){
        cout<< "I am Fun2() from Parent"<<endl;
    }

     
    

 
} ;

class Child : public Parent{

    public :
        Child(){
        
            this->setName("Child") ;
        }
    
    void fun1(){ // This is OverLoaded Function
        cout<<" I am Fun1() from Child . "<<endl ;
    }

    void fun2(){ // This is OverLoaded Function
        cout<<" I am Fun2() from Child . "<<endl ;
    }

 
} ;

int main()
{

    Parent *p = new Child() ;
    
    p->fun1() ; // Result:- " I am Fun1() from Child  "
    p->fun2() ; // Result:- " I am Fun2() from Parent "

    return 0;
}
