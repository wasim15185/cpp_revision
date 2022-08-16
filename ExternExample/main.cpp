#include <iostream>
#include "support.cpp"
#include "anotherSupport.cpp"

using namespace std;

 

void call()
{

    cout << "call() ...is called" << endl;
}

int main(int argc, char const *argv[])
{

    cout << "value of a is " << a << endl;

    call();
    return 0;
}
