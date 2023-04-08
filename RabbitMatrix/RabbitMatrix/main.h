#include <iostream>
using namespace std;
#pragma once

enum cell_position
{
	TOP_LEFT,
	TOP_RIGHT,
	BOTTOM_LEFT,
	BOTTOM_RIGHT,
	TOP_BORDER,
	BOTTOM_BORDER,
	LEFT_BORDER,
	RIGHT_BORDER,
	CENTER
};

void neighborCheck(cell_position location, int(*target)[8][10], int r, int c, int& nr, int& nc, bool& state)
{
	int temp = 0;
	switch (location)
	{
	case TOP_LEFT:
		cout << "you are at top left" << endl;
		if ((*target)[r][c] != 0)
		{
			temp = (*target)[r][c + 1];
			nr = r;
			nc = c + 1;
			if (temp < (*target[r + 1][c]))
			{
				temp = (*target[r + 1][c]);
				nr = r;
				nc = c + 1;
			}

			//cout << "you are here" << endl;
			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in top left" << endl;
		}
		else
			state = 1;
		break;
	case TOP_RIGHT:
		cout << "you are at top right" << endl;
		if ((*target)[r][c] != 0)
		{
			temp = (*target)[r][c - 1];
			nr = r;
			nc = c - 1;
			if (temp < (*target[r + 1][c]))
			{
				temp = (*target[r + 1][c]);
				nr = r + 1;
				nc = c;
			}

			//cout << "you are here" << endl;
			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in top right" << endl;
		}
		else
			state = 1;
		break;
	case BOTTOM_LEFT:
		cout << "you are at bottom left" << endl;
		if ((*target)[r][c] != 0)
		{
			temp = (*target)[r][c + 1];
			nr = r;
			nc = c + 1;
			if (temp < (*target[r - 1][c]))
			{
				temp = (*target[r - 1][c]);
				nr = r - 1;
				nc = c;
			}

			//cout << "you are here" << endl;
			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in bottom left" << endl;
		}
		else
			state = 1;
		break;
	case BOTTOM_RIGHT:
		cout << "you are at bottom right" << endl;
		if ((*target)[r][c] != 0)
		{
			temp = (*target)[r][c - 1];
			nr = r;
			nc = c - 1;
			if (temp < (*target[r - 1][c]))
			{
				temp = (*target[r - 1][c]);
				nr = r - 1;
				nc = c;
			}

			//cout << "you are here" << endl;
			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in bottom right" << endl;
		}
		else
			state = 1;
		break;
	case TOP_BORDER:
		cout << "you are at top border" << endl;
		if ((*target)[r][c] != 0)
		{
			temp = (*target)[r][c - 1];
			nr = r;
			nc = c - 1;
			if (temp < (*target)[r + 1][c])
			{
				temp = (*target)[r + 1][c];
				nr = r + 1;
				nc = c;
			}
			if (temp < (*target)[r][c + 1])
			{
				temp = (*target)[r][c + 1];
				nr = r;
				nc = c + 1;
			}

			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in top border" << endl;
		}
		else
			state = 1;
		break;
	case BOTTOM_BORDER:
		cout << "you are at bottom border" << endl;
		if ((*target)[r][c] != 0)
		{
			temp = (*target)[r][c - 1];
			nr = r;
			nc = c - 1;
			if (temp < (*target)[r - 1][c])
			{
				temp = (*target)[r - 1][c];
				nr = r - 1;
				nc = c;
			}
			if (temp < (*target)[r][c + 1])
			{
				temp = (*target)[r][c + 1];
				nr = r;
				nc = c + 1;
			}

			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in bottom border" << endl;
		}
		else
			state = 1;
		break;
	case LEFT_BORDER:
		cout << "you are at left border" << endl;
		if ((*target)[r][c] != 0)
		{
			temp = (*target)[r][c + 1];
			nr = r;
			nc = c + 1;
			if (temp < (*target)[r - 1][c])
			{
				temp = (*target)[r - 1][c];
				nr = r - 1;
				nc = c;
			}
			if (temp < (*target)[r + 1][c])
			{
				temp = (*target)[r + 1][c];
				nr = r + 1;
				nc = c;
			}

			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in left border" << endl;
		}
		else
			state = 1;
		break;
	case RIGHT_BORDER:
		cout << "you are at right border" << endl;
		if ((*target)[r][c] != 0)
		{
			temp = (*target)[r][c - 1];
			nr = r;
			nc = c - 1;
			if (temp < (*target)[r + 1][c])
			{
				temp = (*target)[r + 1][c];
				nr = r + 1;
				nc = c;
			}
			if (temp < (*target)[r - 1][c])
			{
				temp = (*target)[r - 1][c];
				nr = r - 1;
				nc = c;
			}

			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in right border" << endl;
		}
		else
			state = 1;
		break;
	case CENTER:
		if ((*target)[r][c] != 0)
		{
			cout << "You are in a center cell" << endl;
			temp = (*target)[r][c - 1];
			nr = r;
			nc = c - 1;
			if (temp < (*target)[r][c + 1])
			{
				temp = (*target)[r][c + 1];
				nr = r;
				nc = c + 1;
			}
			if (temp < (*target)[r - 1][c])
			{
				temp = (*target)[r - 1][c];
				nr = r - 1;
				nc = c;
			}
			if (temp < (*target)[r + 1][c])
			{
				temp = (*target)[r + 1][c];
				nr = r + 1;
				nc = c;
			}

			cout << "r = " << r << endl << "c = " << c << endl << "nr = " << nr << endl << "nc = " << nc << endl;
			cout << "you are here in a center cell" << endl;
		}
		else
			state = 1;
		break;
	default:
		break;
	}
	//	return CENTER;
}

int countCarrots(int(*arrG)[8][10])
{
	bool awake = 0; //awake
	int targetRow = 4;
	int targetCol = 4;
	int tCarrots = 0;
	int temp = 0;
	cell_position nextCell;
	int nextR = 0;
	int nextC = 0;
	int unusedVar = 69420;
	cout << (*arrG)[targetRow][targetCol] << endl;



	do
	{
		cout << "Carrots in current cell = " << (*arrG)[targetRow][targetCol] << endl;
		tCarrots += (*arrG)[targetRow][targetCol];
		cout << "Carrots so far = " << tCarrots << endl;
		cout << "targetRow = " << targetRow << endl << "targetCol = " << targetCol << endl << "nextR = " << nextR << endl << "nextC = " << nextC << endl;

		if (targetRow == 0 && targetCol == 0)
		{
			neighborCheck(TOP_LEFT, arrG, targetRow, targetCol, nextR, nextC, awake);

		}
		if (targetRow == 0 && targetCol == 9)
		{
			neighborCheck(TOP_RIGHT, arrG, targetRow, targetCol, nextR, nextC, awake);
		}
		if (targetRow == 7 && targetCol == 0)
		{
			neighborCheck(BOTTOM_LEFT, arrG, targetRow, targetCol, nextR, nextC, awake);
		}
		if (targetRow == 7 && targetCol == 9)
		{
			neighborCheck(BOTTOM_RIGHT, arrG, targetRow, targetCol, nextR, nextC, awake);
		}
		if (targetRow == 0 && targetCol != 0 && targetCol != 9)
		{
			neighborCheck(TOP_BORDER, arrG, targetRow, targetCol, nextR, nextC, awake);
		}
		if (targetRow == 7 && targetCol != 0 && targetCol != 9)
		{
			neighborCheck(BOTTOM_BORDER, arrG, targetRow, targetCol, nextR, nextC, awake);
		}
		if (targetRow != 0 && targetRow != 7 && targetCol == 0)
		{
			neighborCheck(LEFT_BORDER, arrG, targetRow, targetCol, nextR, nextC, awake);
		}
		if (targetRow != 0 && targetRow != 7 && targetCol == 9)
		{
			neighborCheck(RIGHT_BORDER, arrG, targetRow, targetCol, nextR, nextC, awake);
		}
		if (targetRow != 0 && targetRow != 7 && targetCol != 0 && targetCol != 9)
		{
			neighborCheck(CENTER, arrG, targetRow, targetCol, nextR, nextC, awake);
		}

		//move onto next cell
		(*arrG)[targetRow][targetCol] = 0;
		cout << "Carrots in previous cell = " << (*arrG)[targetRow][targetCol] << endl;
		targetRow = nextR;
		targetCol = nextC;
		unusedVar *= unusedVar;
	} while (awake == 0);
	//previous while condition was (*arrG)[targetRow][targetCol] != 0
	cout << "Final destination!! Bunny is asleep! Total carrots eaten = " << tCarrots << endl;
	return tCarrots;
}