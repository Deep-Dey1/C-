#include<iostream>
using namespace std;

int global_variable = 500; //global variable 

int a = 200 ; //global variable

int func(){
    int var_in_func = 100; // This variable is inside the func() functiona nd this is local to the func() function and cannot accessed outside the func() function.
    return var_in_func;
}

int test_func(){
    int a = 100;
    cout << "local variable : " << a << endl ; //this will print the value of the local variable 
    cout << "global variable : " << ::a << endl ; //this will print the value of the global variable 
    // use ::variable_name to access the global variable when the name of the local variable and the global variable is same inside the local variable function.
    return 1;
}

int main(){
    // This program tells the basics of scopes of the variables 
    int var_in_main = 10; //this variable is inside the main function and local to the main function.
    
    // var_in_func = 200 ; this statement will give an error since we cannot access the var_in_func variable that is local to the func() function.

    // cout << global_variable; wont give error we can print it in main function
    // cout << var_in_func; since local to the func() function and we cannot access it in main function. 



    /* variable shadowing :
    * when the globale and the local variable has the same name then on calling that name inside the local function the local variable got accessed and the global 
      variable got shadowed by the local variable.
      implementation : 
    */

    test_func();


    return 0;
}