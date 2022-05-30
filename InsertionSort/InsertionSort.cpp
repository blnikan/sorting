#include <iostream>
#include <vector>

using namespace std;

void InsertionSort(vector<int>& values)
{
	for (size_t i = 1; i < values.size(); i++ )
	{
		int x = values[i];
		size_t j = i;
		while(j > 0 && values[j - 1] > x)
		{
			values[j] = values[j - 1];
			--j;
		}
		values[j] = x;
	}
	return;
}

void printV(vector<int>& values)
{
	for (size_t i = 0; i < values.size(); i++)
	{
		cout<< values[i]<<"\t";
	}
	cout<<endl;
}


int main()
{
	vector<int> data = {1,3,67,34,3443,24325,676,9,2,4,7,4,8,6,9,54,2};
	InsertionSort(data);
	printV(data);
}
