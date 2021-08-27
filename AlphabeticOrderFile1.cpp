// Chapter 5, Programming Challenge 25: Using Files-Student Line Up
// 4-02 Participation Credit
// Name: Svetlana Gulotta
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string name;		// To hold a student's name
	string front = "A";		// To hold the least alphabetic value
	//initiate front to A
	string back = "Z";		// To hold the greatest alphabetic value
	//initiate back to Z
	ifstream inFile;	// To hold the input file

	// *** Add code here to open the LineUp.txt file. Caps matter
	inFile. open("LineUp.txt");//Opens the file
	//file is added to the workflow folder for the LineUp project in Visual Studio 2014
	// *** Add code here to read the first student's name from the file.
	inFile>>name;//reads the name from the file

	// Set front and back equal to the first student's name.
	front = name;
	back = name;
	
	// *** add a while loop here to read the remaining student's names from the file.
	while(!inFile.eof())
	{
		inFile>>name;
		//if back is less or equal to Z, it's stored in back
		if(name>=back) back = name;
		//if front is greater  or equal to A, it's stored in front
		if(name<=front) front = name;

	}
	// *** the loop terminates when there is no more input to read


	// Close the file.
	inFile.close();

	// Display the name of the student who is in the
	// front of the line.
	cout << front << " is in the front.\n";

	// Display the name of the student who is in the
	// back of the line.
	cout << back << " is in the back.\n\n";

	return 0;
}