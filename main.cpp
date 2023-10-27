#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


//저장 할공간 만들어서 다시 만들어보기


int main()
{
	int pocket[52];
	for (int i = 0; i < 52; i++)
	{
		pocket[i] = i + 1;
	}
	srand((unsigned int)time(nullptr));
	for (int i = 0; i < 10000; i++)
	{
		int random1 = rand() % 52;
		int random2 = rand() % 52;
		int temp = pocket[random1];
		pocket[random1] = pocket[random2];
		pocket[random2] = temp;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << pocket[i] << endl;
	}
	return 0;
}
