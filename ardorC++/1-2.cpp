//==========================================================
//
// Title:      1-2.cpp
// Author:     Daehwan Yoo
// Date:       May/30/2021
// Description:
//   This program uses function overload.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

int swap(int *n1, int *n2) 
{
	int temp = *n1;
	*n2 = *n1;
	*n1 = *n2;

}

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);


}
