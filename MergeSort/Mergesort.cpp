#include <iostream>
#include <vector>

using namespace std;


void MergePreSort(vector<int>& values, vector<int>& buffer, int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2 ;
		MergePreSort(values, buffer, l , m);
		MergePreSort(values, buffer, m + 1, r );

		int k = l;
		
		for(int i = l, j = m + 1; i <= m || j <= r;)
		{
			if(j > r || (i <= m && values[i] < values[j]))
			{
				buffer[k] = values[i];
				++i;
			}
			else
			{
				buffer[k] = values[j];
				++j;
			}
		}

		for(int i = l; i <= r; ++i)
		{
			values[i] = buffer[i];
		}
	}

}


void MergeSort(vector<int>&values)
{
	if(!values.empty())
	{
		vector<int> buffer(values.size());
		MergePreSort( values , buffer, 0 , values.size() - 1);
	}
}

void printV(vector<int>& values)
{
	for(size_t i = 0; i < values.size(); ++i)
	{
		cout << values[i] << "\t";
	}
	cout << endl;
}

int main()
{
	vector<int> data = {2,321,3,213,213,12,32,345,49935,66,76,8,76,4543,43,456,5588};
	MergeSort(data);
	printV(data);
}
