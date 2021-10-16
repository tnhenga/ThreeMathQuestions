// Tanaka Nhenga

#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

int x, y;

int RandNums()
{
	int count = 0;
  int ans;
	srand(time(NULL));
	while (count < 3)
	{
		x = rand() % (7 + 1);
		y = rand() % (7 + 1);
		cout << "What is "<<x<<"*"<<y<<"?\n";
		cin >> ans;
		if (ans == x*y)
		{
			count++;
			cout << "Correct\n";
		}
		else
		{
			cout << "No! Try Again!\n";
		}
	}
	return 0;
}


int main()
{
	RandNums();
	cout << "You've completed the program!";
	return 0;
}