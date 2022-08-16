#include<iostream>
using namespace std ;


 
int main()
{

  
 try
 {
    float x = 60/0;
    cout<<"x is :-"<<x<<endl ; 
 }
 catch(exception e)
 {
     std::cerr << e.what() << '\n';
 }
 
  
    return 0;
}
