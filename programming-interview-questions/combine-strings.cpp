/* Program URL : http://www.ardendertat.com/2011/10/10/programming-
interview-questions-6-combine-two-strings/ */

#include <iostream>
using namespace std;

bool isInterleaved(char *A, char *B, char *C);

int main()
{
	char *A = "AB";
	char *B = "CD";
	char *C = "ACBD";

	if(isInterleaved(A, B, C))
		cout << "yes" << endl;
	else
		cout << "No" << endl;
}

bool isInterleaved(char *A, char *B, char *C)
{

	while(*C != NULL)
	{   
		/* Match 1st char of C with 1st char of A, 
		if it matches, move to next char of A */
		if(*A == *C)
			A++;


		/* Match 1st char of C with 1st char of B, 
		if it matches, move to next char of B */
		else if(*B == *C)
			B++;
		else
			return false;

		/* Move to next char of C */
		C++;
	}

	/* If A or B has some char left, return false */
	if(*A || *B)
		return false;

	return true;
}