#include<iostream>
using namespace std;
int main(){
    // working of continue
    // continue is a jump statement in c++.
    // it used to contre the flow of program.
    // syntax : 
    // .
    // code block{
    //     part1
    //     if(condition){
    //         // if condition true then skip the part2 of the code block
    //         continue;
    //     }    
    //     part2
    // }
    // .

    // working :
    // skip the printing of the statement for i = 3 
    for(int i = 1 ; i <= 5 ; i++){
        if(i==3){
            continue;
        }
        cout << "Statement No. : " << i << endl;
    }


    return 0;
}