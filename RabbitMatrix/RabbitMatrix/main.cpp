//#include <iostream>
#include "main.h"
//using namespace std;


//void neighborCheck(cell_position location, int(*target)[8][10], int r, int c, int& nr, int& nc, bool &state);


int main()
{
	int rows = 8;
	int cols = 10;
	int totalCarrots = 0;
	int garden[8][10] = { {10,15,9,7,6,4,3,2,1,12},
		{12,2,3,4,1,6,7,8,10,0},
		{0,1,7,6,2,5,3,6,0,23},
		{4,9,0,5,12,14,2,4,4,7},
		{22,21,6,1,16,2,5,5,0,6},
		{9,8,5,3,7,6,12,6,12,3},
		{10,2,0,6,8,9,14,22,13,15},
		{9,6,5,4,1,10,17,10,2,1} };

	cout << "Printing garden" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "\t[" << garden[i][j] << "]";
		}
		cout << endl;
	}

	totalCarrots = countCarrots(&garden);
	cout << "Printing garden again" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "\t[" << garden[i][j] << "]";
		}
		cout << endl;
	}
	cout << "Total Carrots: " << totalCarrots;

	return 0;
}
