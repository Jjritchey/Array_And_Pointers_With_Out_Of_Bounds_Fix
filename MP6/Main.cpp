//Justin Ritchey - 11/20/2020 - MP6 - Program that will terminate when an array is called our to bounds 
//program will also allow user to create arrays which start start at values other than 0.

#include "MyArray.h"
#include <iostream>

using namespace std;

int main()
{
	myArray list1(5);       //Line 1            0..4
	myArray list2(2, 13);   //Line 2            2..12
	myArray list3(-5, 9);   //Line 3            -5..3
	
	
		for (int x = 0; x < 4; x++)            //assigning 0 to all values of the array if it goes out of the scope of the array it will terminiate
			list1[x] = 0;
		
		for (int x = 2; x < 13; x++)           //assigning 0 to all values of the array if it goes out of the scope of the array it will terminiate
			list2[x] = 0;
		
		for (int x = -5; x < 4; x++)           //assigning 0 to all values of the array if it goes out of the scope of the array it will terminiate
			list3[x] = 0;

		list1[3] = 10;                         //assiging some values to the array - will terminiate if the requested array value is out of bounds
		list1[0] = 20;

		list2[12] = 5;

		list3[-3] = 2;

		cout << "List1\n";                //testing the arrays values - will terminiate if calling any out of bound values in the array
		cout << list1[3] << endl;
		cout << list1[1] << endl;

		//cout << list1[-2] << endl;      //  will make program terminiate
		//cout << list1[10] << endl;
		

		cout << "\nList2\n";
		cout << list2[4] << endl;
		cout << list2[12] << endl;

		//cout << list2[0] << endl;       // will make program terminiate
		//cout << list2[22] << endl;

		

		cout << "\nList3\n";
		cout << list3[3] << endl;
		cout << list3[-2] << endl;
		cout << list3[-3] << endl;

		cout << list3[-10] << endl;       // will make program terminiate
		//cout << list3[33] << endl;
	
	

	return 0;
}