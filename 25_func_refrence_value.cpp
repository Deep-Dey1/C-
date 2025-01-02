#include<iostream>
using namespace std;

void pass_value(int);
void pass_refrence(int *);

int main(){
    // Pass By Value : when we pass actual values in the function and the value of the actual variables get copied and stored into another storage space and the effects are made in these new memory locations without effecting the actual value of the passing variables.

    // Pass By Refrence : Both actual and formal parameters refer to the same locations, so any changes made inside the function are reflected in the actual parameters of the caller.
    int pass_value_variable = 10 ;
    int pass_refrence_variable = 20 ;


    cout << "Pass by value variable : " << pass_value_variable << endl;
    cout << "Pass by refrence variable : " << pass_refrence_variable << endl;
    // pass by value fucntion example :
    pass_value(pass_value_variable);
    cout << "the result after calling of pass by value function of pass by value variable : " << pass_value_variable << endl;

    // pass by refrence fucntion example :
    pass_refrence(&pass_refrence_variable);
    cout << "the result after calling of pass by refrence function of pass bby refrence variable : " << pass_refrence_variable << endl;


    return 0 ;
}

void pass_value(int var){
    var = 100 ;
}

void pass_refrence(int * var){
    *var = 200 ;
}