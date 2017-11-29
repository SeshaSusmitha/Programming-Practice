#include <iostream>
using namespace std;
int repeatedStringMatch(string &A, string &B);
int compare(string &A, string &B, int index);

int main(){
	string A= "abcd";
	string B = "cdabcdab";
	cout << repeatedStringMatch(A, B) << endl;
}


int repeatedStringMatch(string &A, string &B) {
	int A_len = A.length();
    for (int i = 0; i < A_len; i++) 
        if (B[0] == A[i] && compare(A, B, i) != -1) 
            return compare(A, B, i);
    return -1;
}


int compare(string& A, string& B, int index) {
    int A_len = A.length(), B_len = B.length(), repeat_count = 1;
    for (int i = 0; i < B_len; i++, index++) {
        if (index == A_len) {
            index = 0;
            repeat_count++;
        }
        if (B[i] != A[index]) return -1;
    }
    return repeat_count;
 }