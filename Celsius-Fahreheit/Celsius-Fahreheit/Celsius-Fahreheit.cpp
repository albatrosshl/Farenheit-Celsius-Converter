#include <iostream>

using namespace std;

int main() {

    double celsius;
    cout << "give me the temperature in celsius...   ";
    cin >> celsius; 

    double fahrenheit = (9.0 / 5.0) * celsius + 32; 

    cout << "the temp in fahreneit is...  " << fahrenheit << endl; 

    return 0;
}