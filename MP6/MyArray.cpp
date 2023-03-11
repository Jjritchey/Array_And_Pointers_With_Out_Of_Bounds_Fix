#include "MyArray.h"
#include <iostream>
#include <new>

using namespace std;

myArray::myArray()                                     //default constructor
{
	p = NULL;
	size = 0;
	start = 0;
	end = 0;
}

myArray::~myArray()                                    //destructor
{
}

myArray::myArray(const myArray& s)                     //copy constructor
{
	*this = s;
}

myArray& myArray::operator=(const myArray& s)          //= operator assigenment
{
	p = s.p;
	size = s.size;
	start = s.start;
	end = s.end;
	

	return *this;
}

int& myArray::operator[](int s)             //[] operator assignment to add in numbers to the array
{
	int j = 0;                              //value to send back the array

	if ((s <= end) && (s >= start))         //checking if the array value is in bounds
	{
		if (start == 0)                     //if the array has a start value of 0, it is treated as a normal array
		{
			return p[s];
		}
		else                               //if the array has any other start value, this will return the equvienlt value of the array for the given value
		{
			for (int i = start; i <= end; i++)
			{
				if (i == s)
				{
					return p[j];
				}
				else
				{
					j++;
				}
			}
		}
	}
	else                                  //if the value is out of bounds, this will alert the user which value falied and terminate the program
	{
		cout << s << " is out of bounds for the given array - - ";
		cout << "Program will now terminate\n\n\n";
		exit(1);
	}
}

myArray::myArray(int s)                  //creating a normal dynamic array
{
	p = new int[s];
	size = s;
	start = 0;
	end = s - 1;
}

myArray::myArray(int m, int s)          //creating an array which has a different start than 0
{
	p = new int[s];
	size = s;
	start = m;
	end = start + size - 1;
}



