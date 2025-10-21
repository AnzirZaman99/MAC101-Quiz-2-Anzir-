#include <iostream>
using namespace std;

int main() {
    //TODO: Create int var and cout and cin commands
     for (int i = 1; i <= 100; i++) {
     
    // TODO: Write a for loop that runs from 1 to limit
    if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz";

        // TODO: Use if/else statements to apply FizzBuzz logic
    else if (i % 3 == 0)
            cout << "Fizz";
        else if (i % 5 == 0)
            cout << "Buzz";
        else
            cout << i;

        cout << endl; // Move to the next line
     }        
    

    return 0;
}
