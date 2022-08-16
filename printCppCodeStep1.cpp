
#include<iostream>

/*
 * you can chose any of two things
*/

int main(int argc, char const *argv[])
{
    int a =100;

     std::string str ="Lol...";

    std::cin>>str ;

    std::cout<<"value of str is :- "<<str ;


    getline(std::cin,str) ; // the for printing whole string 

    std::cout<< "Hello "<< a ;

    return 0;
}
