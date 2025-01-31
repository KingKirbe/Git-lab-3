#include <iostream>
#include <cstdlib>
#include <iomanip> // Include for formatting output

using namespace std;

/*
 * Author: Aiden Heilligenstein
 * Lab #: Lab 3
 * Description: This program converts Celcius and Farenheit.
 */

int main()
{
    double ctof;  
    double ftoc;  
 
    int fah = 56;  
    int cel = 20;  

    ctof = (9.0 / 5.0) * cel + 32; 
    ftoc = (5.0 / 9.0) * (fah - 32); 

    // Set output to one decimal place
    cout << fixed << setprecision(1);

    cout << cel << " degrees Celsius in Fahrenheit is " << ctof << "°F" << endl;
    cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << "°C" << endl;

    return (EXIT_SUCCESS);
}
