// The purpose of this program is to compute the power of a number
// Written by John Orekunrin

#include <iostream>
using namespace std;

int main()
{
    int dog, cat, answer;
	cout << "Enter two numbers, x and n>";
	cin >> dog >> cat;
	_asm {	// In assembler set answer to dog^cat
		mov eax, dog	// move the value of dog into the eax register
		mov ebx, cat	// move the value of cat into the ebx register
		again: 		// begins a loop
		   cmp ebx, 1	// compare the value in the ebx register to 1
		   je finish	// if the value of ebx equals 1, jump to the line "finish:"
		   dec ebx	// else, decrement the value in the ebx register
		   imul dog	// multiply the value in the eax register by dog (imul automatically multiples by whatever value is in the eax register)
		   jmp again	// jump back to the beginning of the loop
		finish:
		   mov answer, eax	// when finished, place the value in the eax register to answer
	}
	cout << "X to the n is " << answer << endl;
}
