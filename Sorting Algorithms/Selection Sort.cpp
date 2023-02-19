#include <bits/stdc++.h>
using namespace std;

// Selection sort algorithm O(n^2)
// Repeatedly finds the minimum element in an unsorted portion of an array
// Swaps it with the element at the beginning of that portion
// Inefficient for large arrays, can be useful for sorting small arrays or arrays with large items

void selectionSort(vector<int> &values)
{
  for(int i=0;i<values.size();i++)
  {
      int minInd=i;
      for(int j=i;j<values.size();j++)
      {
          if(values[j]<values[minInd])
          minInd=j;
      }
      
      if(minInd!=i)
      swap(values[i], values[minInd]);
  }
}

int main()
{
    vector<int> values;
    
    values.push_back(9);
    values.push_back(3);
    values.push_back(7);
    values.push_back(8);
    values.push_back(2);
    values.push_back(4);
    
    selectionSort(values);
    
    for(auto &it: values)
    cout<<it;
    
    cout<<endl;
    return 0;
}
