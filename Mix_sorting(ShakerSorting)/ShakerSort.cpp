#include <iostream>
#include <vector>

using namespace std;


void ShakerSort(vector<int> &values)
{
	if (values.empty()){return;}

	int left = 0;
	int right = values.size() - 1;

	while(left <= right)
	{
		for(int i = right; i > left; --i)
		{
			if (values[i-1] > values[i])
			{
				swap(values[i-1],values[i]);
			}
		}

		++ left;
		
		for(int i = left; i < right; ++i)
		{
			if (values[i]>values[i+1])
			{
				swap(values[i],values[i+1]);
			}
		}

		--right;
	}
	
}

void printV(vector <int>&values)
{
	for(size_t i = 0; i<values.size();i++)
	{
		cout<<values[i]<<"\t";
	}
	cout<<endl;
}

int main()
{
	vector<int> data = {1,6,3,1,3,546,657,932,3,23,566,9,5,32,67,2,334,34,};
	ShakerSort(data);
	printV(data);
}
