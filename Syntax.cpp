#include <iostream>
#include <conio.h>
// Question:Why preProcessor does not have Semicolon at end
// Answer:preProcessor start with # and semicolon is needed by compiler
//        preProcessor are program that process our source code before compilation
//        hence  it dosent required semicolon

// functionality of cout and cin and many standard operation are include inside iostream header file

using namespace std;
// In c++ two variable with same name is not allowed to overcome this namespace is used
// if you not  defined using namespace std then you have to write like eg
// std::cout<<"Enter Name"
// functionality of cout and cin are in iostream header file under namespace std thats why we need both
// iostream and using namespace std;
int main()
{
    cout << "Hello world!";
    return 0;
}