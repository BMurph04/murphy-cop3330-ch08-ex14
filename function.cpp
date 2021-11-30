#include "function.h"

using namespace std;
//It is possible to declare a non-reference argument const.


//This could be useful in a program where we're trying to print the results of arithmetic on a value.
int main(){
    double input;
    cout << "Please enter a number. This program will calculate its square and square root." << endl;

    cin >> input;

    arithmetic(input); 

    //Program goes on to use input.

    
}

void arithmetic(const int input){ //When writing our function, we aren't able to modify the argument (integer in this case) we pass in.

    cout << "The square of this number is " << input*input << "." << endl;
    cout << "The square root of this number is " << sqrt(input) << "." << endl;

    /*
    People don't usually do this often because there will very rarely be a situation where a function will change its arguments
    when arguments are being passed by value. Also, having no ability to update an argument or return a value severely limits the
    usefulness of functions. Using functions like this 
    usually only serves to clutter code and distract from clear intentions throughout your code.
    */

}