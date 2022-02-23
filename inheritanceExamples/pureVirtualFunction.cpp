#include<iostream>
using namespace std ;

class Car{

   public : 
    virtual void start() = 0 ; // This is " Pure Virtual Function "
    virtual void stop() = 0 ; // This is " Pure Virtual Function "

} ;

/**
 * Here we can see , 'Car' which contains two " Pure Virtual Function " 1. start() , 2. stop() 
 * 
 * Now , 'Maruti' extends 'Car' then 'Maruti' should implement those two " Pure Virtual Function " 1. start() , 2. stop()  
 * 
 * It means , if " Pure Virtual Function " is avalible in Parent class then Child class should be implement that " Pure Virtual Function "
 * 
 */

class Maruti : public Car{

    public : 
    void start(){ // " Pure Virtual Function " implemented

    }

    void stop(){ // " Pure Virtual Function " implemented

    }


};


int main( )
{
    
    return 0;
}

 
