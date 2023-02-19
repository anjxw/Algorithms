#include <bits/stdc++.h>
using namespace std;

/*
Merge Sort algorithm O(N*log(N))

Divides the unsorted array into n subarrays, each containing one element
Repeatedly merge subarrays to produce new sorted subarrays until there is only one subarray remaining
The merge process involves comparing and merging adjacent subarrays to form a larger sorted array
*/

void merge(vector<int> *values, int low, int high)
{
    int mid=(low+high)/2;
    int ind1=low;
    int ind2=mid+1;
    
    vector<int> tmp(high-low+1);
    
    for(auto &it: tmp)
    {
        if(ind1>mid)    //first part has ended, copy from the second part
        {
           nextVal= values[ind2];
           ind2++;
        }
        else if(ind1<mid)
        {
            nextVal=values[ind1];
            ind1++;
        }
        else
        {
            
        }
    }
}

void mergeSort (vector<int> &values, int low, int high)
{
  if(low==high) return;
  
  int mid=(high-low)/2;
  mergeSort(values, low, mid);
  mergeSort(values, mid+1, high);
  merge(low, mid, right);
}

int main ()
{
  vector<int>values;

  values.push_back (9);
  values.push_back (3);
  values.push_back (7);
  values.push_back (8);
  values.push_back (2);
  values.push_back (4);

  insertionSort (values);

  for (auto & it:values)
  cout << it;

  cout << endl;
  return 0;
}
