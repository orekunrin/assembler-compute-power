// COMP375HW1-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// The purpose of this program is to compute the power of a number

#include <iostream>
using namespace std;

int main()
{
    int dog, cat, answer;
	cout << "Enter two numbers, x and n>";
	cin >> dog >> cat;
	_asm {	// In assembler set answer to dog^cat
		mov eax, dog
		mov ebx, cat
		again: 
		   cmp ebx, 1
		   je finish
		   dec ebx
		   imul dog
		   jmp again
		finish:
		   mov answer, eax
	}
	cout << "X to the n is " << answer << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
