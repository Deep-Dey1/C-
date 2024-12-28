#include <iostream>
using namespace std;


int func();

int main() {
    cout << func() << "\n";
    cout << func();
    
    return 0;
}

// Function containing static variables
// memory is retained during execution
int func(){
  
      // Static variable
    static int count = 0;

     // Simmilarly like static variable we can create the register variables as :  register datatype variable_name = value ;
     // example :  register int count = 10 ; 
     // register variables gets stored in registers in the processor if any free register available else they get stored in the RAM.


    count++;
    return count;
}

// The static storage class is used to declare static variables that have the property of preserving their value even after they are out of their scope. 
// They are initialized only once and exist until the termination of the program. Thus, no new memory is allocated because they are not re-declared. 
// Global static variables can be accessed anywhere in the program but unlike extern variable, they have internal linkage so they cannot be accessed outside the program.