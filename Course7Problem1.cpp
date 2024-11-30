
#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void RandomizeMatrixElements(short Arr [3][3] , short Rows , short Cols)
{
	

	for (short i = 0 ; i < Rows; i++)
	{

		for (short j = 0 ; j < Cols; j++)
		{
			Arr[i][j] = RandomNumber(1,100);
		}

	}
}

void PrintMatrixElements(short Arr[3][3] , short Rows , short Cols)
{


	for (short i = 0 ; i < Rows; i++)
	{
		for (short j = 0 ; j < Cols; j++)
		{
			cout << setw(3) << Arr[i][j] << "\t";
		}
		cout << "\n";
	}

}

int main()
{
	srand((unsigned)time(NULL));


	short Arr[3][3];

	RandomizeMatrixElements(Arr , 3 , 3);

	cout << "\n The following is a 3x3 random matrix :\n";


	PrintMatrixElements(Arr ,3 , 3);

}

