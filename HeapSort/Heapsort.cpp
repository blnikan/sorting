#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapsort(vector<int>&values)
{
	make_heap(values.begin(), values.end());

	for(auto i = values.end(); i != values.begin(); --i)
	{
		pop_heap(values.begin(),i);
	}
}

void printV(vector<int>&values)
{
	for (size_t i = 0; i < values.size(); ++i)
	{
		cout<<values[i]<<"\t";
	}
	cout<<endl;
}



int main()
{
	vector<int>data = {1,34,2342,3,23,65765,8,-8,9,7665,7656,4534,543,54,523,43};
	heapsort(data);
	printV(data);
}
