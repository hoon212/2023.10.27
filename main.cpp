#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	srand(time(0));
	int random1= 1 + rand() % 52;
	int random2= 1 + rand() % 52;
	int random3= 1 + rand() % 52;
	int random4= 1 + rand() % 52;
	{
		printf("·£´ý°ª : % d\n", random1);
		printf("·£´ý°ª : % d\n", random2);
		printf("·£´ý°ª : % d\n", random3);
		printf("·£´ý°ª : % d\n", random4);
	}


	return 0;
}