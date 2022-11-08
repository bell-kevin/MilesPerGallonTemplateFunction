// MPGtemplateFunction.cpp
//

#include <iostream>
using namespace std;

//template function for swapping two values
template <class T>
T MPG(T miles, T gallons)
{
	T mpg;
	mpg = miles / gallons;
	return mpg;
}



int main()
{
    cout << "Chapter 16 Miles Per Gallon by Kevin Bell\n\n";
	cout << "Please enter the miles travelled as an integer: ";
	int miles;
	cin >> miles;
	cout << "Please enter the gallons used as an integer: ";
	int gallons;
	cin >> gallons;
	cout << "Integer MPG = " << MPG(miles, gallons) << endl;
	cout << endl;
	cout << "Please enter the miles travelled as a double: ";
	double miles2;
	cin >> miles2;
	cout << "Please enter the gallons used as a double: ";
	double gallons2;
	cin >> gallons2;
	cout << "Double MPG = " << MPG(miles2, gallons2) << endl;
	cout << endl;
	system("pause");
	return 0;
} // end main function