#include "function.h"

using namespace std;
//It is possible to declare a non-reference argument const.


//This could be useful in a program where we're trying to validate the input of the user.
int main(){
    int input, result;
    bool validInput;
    cout << "Please enter a number 1-10. This program will calculate its square." << endl;

    cin >> input;

    validInput = checkValid(input); //Checks if the input entered is valid
    
    if(!validInput){
        cout << "That was an invalid input." << endl;
        return 0;
    }
    else{
        cout << "The input is valid!" << endl;
        result = input * input; //If it's valid, do arithmetic
        cout << "The square of the input is " << result << endl;
        //Program goes on to use validated input.
    }

    
}

bool checkValid(const int input){ //When writing our function, we aren't able to modify the argument (integer in this case) we pass in.

    if(input >= 1 && input <= 10){ //Checks the input to see if it is between 1 and 10
        return true; //Returns true if valid
    }
    else{
        return false; //Returns false if invalid
    }

    /*
    People don't usually do this often because there will very rarely be a situation where a function will change its arguments
    when arguments are being passed by value. Adding it usually only serves to clutter code and distract from clear intentions
    throughout your code.
    */

}