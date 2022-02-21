#include<iostream>
using namespace std ;

#include<iostream>
using namespace std ;


/**
 * @brief Parent
 * 
 */

class Parent{
    string name = "Parent" ;

    

 protected:
  void setName(string s){
       this->name = s ;
   }

public : 
    string getName(){
        return this->name ;
    }


   void fun1(){
      cout<< " i am fun1 from " <<name<<endl ;
   }
    
   void fun2(){
      cout<< " i am fun2 from " <<name<<endl ;

   }
    
   void fun3(){
      cout<< " i am fun3 from " <<name<<endl ;

   }
    

 
} ;

/**
 * @brief Child
 * 
 */

class Child : public Parent{

 public :
        Child(){
        
            this->setName("Child") ;
        }
 
    void fun4(){
      cout<< " i am fun4 from " <<getName()<<endl ;

   }
    void fun5(){
      cout<< " i am fun5 from " <<getName()<<endl ;

   }



 
} ;



int main()
{
    Parent *ptr ;

    ptr=new Child(); // Object in Heap

    ptr->fun1();
    ptr->fun2();
    ptr->fun3();

    
    Child c ;
    Parent *p = &c; // Object in stack
    p->fun1() ;
    p->fun2() ;
    p->fun3() ;

    
    
    return 0;
}
