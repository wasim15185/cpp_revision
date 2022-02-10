#include<iostream>

using namespace std ;


void display(){
    cout<<"Hello I'm display() funtion"<<endl;
}

string giveString(string str){
    return "Random - "+str ;
}

int main(int argc, char const *argv[])
{
    // first pointer
    void (*fp) (); // function pointer declearation
     fp =display ; // function pointer initlizaton
    (*fp)() ;  // dereffenceing or function calling

    // second pointer
    string (*fq) (string)=giveString ; // function pointer declearation + initlizaton
    string newstr=  (*fq)("Lol") ; // dereffenceing or function calling

    cout<<newstr<<endl ;



    return 0;
}
