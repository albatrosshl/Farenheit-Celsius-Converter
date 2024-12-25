#include <iostream>
using namespace std; 

int main() {

	//temp input for fahrenheit
	double fahrenheit; 

	//program go: "GIMI TEMP VRO"
	cout << "Give me a temperature to convert";
	cin >> fahrenheit;

	//convertor (i honestly dont know how to make this so i had to use chatgpt, again.
	double celsius = (5.0 / 9.0) /* wtf */ * (fahrenheit - 32); //im geniuenly so confused..

	//result...

	cout << "The temp in celsius is defined to be:" << celsius << endl;

	return 0;
}
