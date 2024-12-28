#include<iostream>
using namespace std;

# define constant_3 1000

int main(){
    //this program will tell about the basics of the c++ constants 
    /*
    * there are 3 ways to decleare a constant in c++ :
    * first : using "const" keyword it decleares a constant in runtime
    * second : using "constexpr" keyword it declears a constant in      
      compile time
    * as "#define" macro a global constangt declearation.
    */

    /*
    * using #define macro : syntax : # define name value
    * using const keyword : syntax : const datatype name value
    * using constexpr keyword : syntax : constexpr datatype name value
    */

    //implementations : 

    const int constant_1 = 10;
    constexpr char constant_2 = 'd';

    cout << constant_1 << endl << constant_2 << endl << constant_3 << endl ;

    //trying to change the value os the constant (produce errors) :
    // constant_1 = 0;
    // constant_2 = 'z';
    // constant_3 = 0;

    // cout << constant_1 << endl << constant_2 << endl << constant_3 << endl ;

    return 0;
}