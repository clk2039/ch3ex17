/*
File name: ch3ex17.cpp
Github URL: 
Programmer: Kit Miller
Date: September 2025
Requirements: Write a program that can be used as a math tutor for young children. The program should display two random
numbers to be added. The program should then pause while the studen works on the problem. 
When the student is ready to check the answer, he or she can press a key and the program will display the correct solution.
*/

#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main()
{
// Create a random number generator
	random_device myEngine;

// Define a distribution range
	uniform_int_distribution<int> randomInt(100, 999);

// Generate two random numbers
	int num1 = randomInt(myEngine);
	int num2 = randomInt(myEngine);

// Display the two numbers to be added
	cout << "Solve this problem:" << endl;
	cout << setw(5) << num1 << endl;
	cout << "+" << setw(4) << num2 << endl;
	cout << "-----" << endl;
	
// Set to pause until student is ready
	cout << "Press Enter when you are ready to see the answer...";
	cin.ignore();
	cin.get();

// Display the correct answer
	int answer = num1 + num2;
	cout << setw(5) << num1 << endl;
	cout << "+" << setw(4) << num2 << endl;
	cout << "-----" << endl;
	cout << setw(5) << answer << endl;
	
	return 0;

}

