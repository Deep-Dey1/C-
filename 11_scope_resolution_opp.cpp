#include<iostream>
using namespace std;

namespace MyNameSpace {
    int func_variable = 20 ;
}

int main(){
    // scope resolution operator ::
    // syntax = scope :: variable 
    // used to access any variable from one scope to another scope 
    // demonstration :
    cout << MyNameSpace::func_variable << endl;
    return 0;
}