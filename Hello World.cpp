#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!\n"; // here \n is used for new line
	cout << "Hello\nWorld";   // Here we have Hello on first line and World on second line
	cout << "Hello World" << endl; // here endl works the same as \n

	/*printing an integer*/

	int num = 13;
	num = num + 1;
//  int num = num+1; is wrong since we don't define variable type repetitively
	cout << num;

    /*Print a const */
	const int n = 6;
//  n = n + 1; //since it's defined as a constant (const) we can't modify it again . so there will be an error for running this line
	cout << n;

}
