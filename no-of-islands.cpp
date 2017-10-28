#include <iostream>
#include <stdbool.h>
#include <string.h>
using namespace std;

#define ROW 5
#define COL 5
int countOfIslands(int M[][COL]);
void DFS(int M[][COL], int row, int col, bool visited[][COL]);
int isSafe(int M[][COL], int row, int col, bool visited[][COL]);



int main(){

	int M[][COL] = { {1, 1, 0, 0, 0},
					 {0, 1, 0, 0, 1},
					 {1, 0, 0, 1, 1},
					 {0, 0, 0, 0, 0},
					 {1, 0, 1, 0, 1}
					};

	cout << countOfIslands(M);
	cout << endl;
}

int countOfIslands(int M[][COL]){

	/* Boolean array to mark visited status */
	bool visited[ROW][COL];

	/* Initially setting all nodes to not visited */
	memset(visited, 0, sizeof(visited));

	/* Count variable to count no.of islands */
	int count = 0, i, j;


	/* For each element, check if the value is 1 and the node is not visited...
	if so, call DFS on the particular element/cell */
	for(i = 0; i < ROW; i++){
		for(j = 0; j < COL; j++){
			if(M[i][j] && !visited[i][j]){
				DFS(M, i, j, visited);
				++count;
			}

		}
	}
	return count;

}

void DFS(int M[][COL], int row, int col, bool visited[][COL]){

	/* These arrays are used to get 8 neighbours of teh element */
	static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
	static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1};

	/* Mark the current cell as visited */
	visited[row][col] = true;

	/* Recur for all 8 neighbours to check which can be in the current island */
	for(int k = 0; k < 8; k++){
		if(isSafe(M, row+rowNbr[k], col+colNbr[k], visited))
			DFS(M, row+rowNbr[k], col+colNbr[k], visited);
	}
}


int isSafe(int M[][COL], int row, int col, bool visited[][COL]){
	return ( (row >= 0) && (row < ROW) && 
			 (col >= 0) && (col < COL) &&
			 (M[row][col]) && (!visited[row][col]));
}