#include <iostream>
#include <vector>

using namespace std;


int Partition(	vector <int> &values, size_t l, size_t r)
{
	int q = values[r];
	int less = l;
	for (size_t i = l; i < r; ++i)
	{
		if (values[i] <= q)
		{
			swap(values[i],values[less]);
			++less;
		}
	}
	swap(values[less], values[r]);
	return less;
}

void QuickSortImpl(vector<int>&values, int l, int r)
{
	if (l<r)
	{
		int q = Partition(values,l,r);
		QuickSortImpl(values, l, q-1);
		QuickSortImpl(values, q + 1,r );
	}
}

void QuickSort(vector <int> &values)
{
	if(!values.empty())
	{
		QuickSortImpl(values, 0, values.size() - 1);
	}

}

void printV(vector<int> &values)
{
	for (size_t i = 0; i<values.size();i++)
	{
		cout << values[i]<<"\t";
	}
	cout << endl;
}


int main()
{
	vector<int> data = {1,2,6,34,54,45,323,323,256,456,75,56,4561,2};
	QuickSort(data);
	printV(data);

}

