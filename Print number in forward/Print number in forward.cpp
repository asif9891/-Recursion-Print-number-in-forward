#include<iostream>
using namespace std;

void print(int number)
{
	if (number < 1)
	{
		return;
	}
	//cout << number << endl;   //uncomment this for backward counting.
	print(number - 1);
	cout << number << endl;
	

}
int main()
{
	print(4);
	return 0;
}