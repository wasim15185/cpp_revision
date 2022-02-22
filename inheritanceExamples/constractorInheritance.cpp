#include<iostream>
using namespace std ;

class Car{
   
   long id;  

   public : 
   Car(long i ){
       id =i ;
   }

    long getId(){
        return id ;
    }

    void start(){
        cout<<" Car is Started !!!"<<" and Id is : ->  "<<getId() << endl ; ;
    }



 
} ;


class Honda :  Car{

    public :
    Honda(long id ) : Car(id){

    }

    void start(){

        cout<<" Honda is Started !!! "<<" and Id is : ->  "<<getId() << endl ;

    }


} ;




int main()
{

    Car c(8712317);
    Honda h (9751672);

    c.start() ;
    h.start() ;

    // h.getId();
   
    

  
    
    
    return 0;
}
