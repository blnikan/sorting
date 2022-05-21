#include <iostream>
#include <vector>

using namespace std;

void CombSort(vector<int>&values)
{
	const double factor = 1.247;
	double step = values.size() - 1;

	while(step >= 1)
	{
		for (size_t i = 0; i + step < values.size(); i++)
		{
			if (values[i]> values[i + step])
			{
				swap(values[i],values[i + step]);
			}
		}
		
		step /= factor;
		
		for (size_t i = 0; i + 1 < values.size(); ++i)
		{
			for(size_t j = 0; j + 1 < values.size() - i; ++j)
			{
				if (values[j+1] < values[j] )
				{
					swap(values[j], values[j + 1]);

				}
			}
		}

	}
}

void printV(vector<int>&values)
{
	for (size_t i = 0; i < values.size(); i++)
	{
		cout<< values[i]<<"\t";
	}
	cout<<endl;
}


int main()
{	
	vector <int> data = {8,6,3,3432,423,4,5656,67,68,76543,35,3432,2};
	CombSort(data);
	printV(data);
}
