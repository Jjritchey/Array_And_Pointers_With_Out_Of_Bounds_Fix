#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class myArray
{
private:
	int* p;                               //used to create a dynamic array
	int size;                             //holds the size of the array
	int start;                            //holds the start value of the array
	int end;                              //holds the last value of the array
public:
	myArray();                             //default constructor
	virtual ~myArray();                    //destructor
	myArray(const myArray& s);             //copy constuctor
	myArray& operator =(const myArray& s); //= operator assignment

	myArray(int);                          //constructor with integer of the size fo the array
	myArray(int, int);                     //constructor with two ints, one for size of the array and the other is for the placements of the inputs

	int& operator[](int s);                //[] operator assignment to add values to the array
	
};
