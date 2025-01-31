// This program demonstrates the use of constants and basic arithmetic operations.
// More information on the keyword 'const' can be found on pages 95 - 97.
// For the if-else format, refer to page 77.

#include <iostream>
#include <cstdlib>
using namespace std;

const int INT1 = 15;
const int INT2 = 20;

int main() {
    cout << "Sum of " << INT1 << " and " << INT2 << " is " << (INT1 + INT2) << endl;
    cout << "Product is " << (INT1 * INT2) << endl;

    if (INT1 < INT2) {
        cout << INT2 << " is bigger" << endl;
    } else {
        cout << INT1 << " is bigger" << endl;
    }

    return EXIT_SUCCESS;
}

