#include<iostream>
using namespace std;
void function(int*);
int main(){
    // a basic program to show the working of the pass by refrence functions :
    int variable = 10 ;
    function(&variable);
    cout << variable << endl;
    return 0;
}
void function(int * var){
    *var = 20;
}