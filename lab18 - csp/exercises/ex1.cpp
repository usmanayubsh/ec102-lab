#include <iostream>
using namespace std;

int max_index(int [5]);
int main()
{
	int an_array[5] = {25, 23, 2, 10, 11}, i;
	i = max_index(an_array);
	cout << "Max number is: " << an_array[i] << " and max index is: " << i;
	return 0;
}

int max_index(int num[5])
{
    int max_number = 0, max_index;
	for(int i = 0; i < 5; i++)
	{
		if(num[i] > max_number)
		{
			max_number = num[i];
			max_index = i;
		}
	}
	return max_index;
}


