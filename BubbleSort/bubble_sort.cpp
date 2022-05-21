#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int> &values) 
{
  for (size_t i = 0; i + 1 < values.size(); ++i) 
  {
    for (size_t j = 0; j + 1 < values.size() - i; ++j) 
    {
      if (values[j + 1] < values[j]) 
      {
        swap(values[j], values[j + 1]);
      }
    }
  }
  return ;
}

void OutVector(vector < int > & values)
{
  for(size_t i=0;i<values.size();i++)
  {
    cout<<values[i]<<"\t";
  }
  cout<<endl;
}

int main() 
{
  vector<int> data = {1,2,312,3546,536476,46,74,33,23,423,43,5,454323,423,432,434,67768,8987,89,7,1,};
  BubbleSort(data);
  OutVector(data);
  
}