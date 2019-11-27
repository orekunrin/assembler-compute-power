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
