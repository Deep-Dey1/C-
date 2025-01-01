#include<iostream>
using namespace std;
int main(){
    // do while loop is exit ccontrole loop unlike while and for loop the conditoion of the 
    // loop will checked after the execution of th e loop and the loop will execute atleast once.
    // syntax :
    // int i = 0; // loop variable initilization 
    // do { 
    //     // loop code block
    // i++; // loop variable incrementation
    // }while(i < n) // loop condition
    // implementation : 
    int i = 0 ; 
    do{
        cout << "Hello World" << endl;
        i++;
    }while(i < 10);
    return 0;
}