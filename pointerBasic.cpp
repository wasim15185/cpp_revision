#include<iostream>
using namespace std ;


/**
 * @brief there are two types of Variable 1. Data Variable 2. Address Variable
 * 
 * what is Data Variable ?
 * which variable store data that's called Data-Variable (eg: int a = 10 ; )
 * 
 * what is Address Variable ?
 * which variable store address of variable that's called Address Variable (eg: int x = 50 ;  int *p = &x  ; Here p is Adress-Variable)
 * 
 * 
 */

/*
what is pointer ?

Ans:- pointers are "types of variable which is used for storing address of variable"
*/



int main(int argc, char const *argv[])
{

    int x =50; // this is data variable

    int *p = &x ; // this is pointer variable

    cout<< "p is showing , address of x :-" << p <<endl ; // this will show the address of variable (here those variable is x) (address of x)


    cout<< "*p is showing varible inside x :-"<< *p <<endl  ;// this will value of where the p pointer , pointing the variable . (50)   



    return 0;
}

