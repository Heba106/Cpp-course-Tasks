#include <iostream>
using namespace std;
char mat[3][3] = { '1','2','3','4','5','6','7','8', '9' };
char player = 'X';
void layout()
{
	system("cls");
	
	for (int i = 0; i< 3; i++)
	{
		cout << " ---------------\n";
		for (int j = 0; j < 3; j++)
		{
			
			cout<<" " << mat[i][j] << " |  ";
		}
		
		cout << "\n";
	}
	cout << " ---------------\n";


}
void play()
{
	char position;
	cout << "choose position : player ( " << player << ")";
	cin >> position;
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mat[i][j] == position)
				mat[i][j] = player;

		}
	}

	if (player == 'X')
		player = 'O';
	else
		player = 'X';



}
char won()
{
	int counter = 0;
	int X3 = 0, O3 = 0;
	for (int i = 0; i< 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			if (mat[i][j] == 'X')
				X3 ++;
			else if (mat[i][j] == 'O')
             O3 ++;

			if (X3 == 3)

				return'X';
			else	if (O3 == 3)

				return'O';

			
			if (mat[i][j] != 'X' && mat[i][j] != 'O')
			{
				counter++;
			}

		}
		X3 = 0;
		O3 = 0;
	}
	for (int i = 0; i< 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mat[j][i] == 'X')
				X3 ++;
			else if (mat[j][i] == 'O')
            O3++;

			if (X3 == 3)

				return'X';
			else	if (O3 == 3)

				return'O';

		}
		X3 = 0;
		O3 = 0;


	}
	if (mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X')
		return 'X';
	else if (mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == '0')
		return 'O';
	if (mat[0][2] == 'X' && mat[1][1] == 'X' && mat[2][0] == 'X')
		return 'X';
	else if (mat[0][2] == 'O' && mat[1][1] == 'O' && mat[2][0] == 'O')
		return 'O';
	if (counter == 0)
	{
		return'Z';
	}
	return '.';
}
int main()
{
	while (won() == '.')
	{
		layout();
		play();
	}
	layout();
	if (won() == 'Z')

		cout << " \nNo winner!\n";

	else
	{
		cout << "The winner is player " << won() << endl;
	}


}

