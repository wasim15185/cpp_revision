#include<iostream>
#include <chrono>
using namespace std ;


// class Print {
     

// } ;


class Speed 
{

private:
int itaration ;
   
public:
    Speed(int i){
        this ->itaration=i ;
    };

    void run(){


    auto execute_start = std::chrono::high_resolution_clock::now();

        for(int i=0 ; i < itaration;i++){
             cout<< "Wait . I am executing Now My current itaration status is :- "<<i<<" / " <<itaration <<endl;
        }


    auto execute_end = std::chrono::high_resolution_clock::now();
    auto executionTime = std::chrono::duration_cast<std::chrono::milliseconds>(execute_end - execute_start).count();
    // auto executionTimeInSec = executionTime/std::chrono::seconds() ;

    // string s = "Execution Time is "+executionTimeInSec +" s"

    cout<<"Execution Time is :- "<<executionTime<<" ms"<<endl ;



    }


};






int main(int argc, char const *argv[])
{
    
    Speed s(10000);
    s.run() ;

    return 0;
}
