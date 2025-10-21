#include <iostream>
using namespace std;

int main() {
    //TODO: Create int var and cout and cin commands
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nFizzBuzz from 1 to " << n << ":\n";
     // TODO: Write a for loop that runs from 1 to limit
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz";

        // TODO: Use if/else statements to apply FizzBuzz logic
    else if (i % 3 == 0)
            cout << "Fizz";
        else if (i % 5 == 0)
            cout << "Buzz";
        else
            cout << i;

        cout << endl;
     }        
    

    return 0;
}
