#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Selectionsort(vector <int>& values)
{
	for(auto i = values.begin(); i != values.end(); i++)
	{
		auto j = min_element(i, values.end());
		swap(*i,*j);
	}
}

void printV(vector <int>& values)
{
	for (size_t i = 0; i < values.size(); ++i)
	{
		cout << values[i]<<"\t";
	}
	cout << endl;
}


int main()
{
	vector<int>data = {2,1,35,64645,656,45,454,423,423,545,6647,67,6,31,93,45,95,382,34};
	Selectionsort(data);
	printV(data);	
}
