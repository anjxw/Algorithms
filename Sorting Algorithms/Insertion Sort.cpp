#include <bits/stdc++.h>
using namespace std;

// Insertion sort algorithm O(n^2)
// iteratively builds a sorted portion of an array by taking each unsorted element and inserting it in its proper place in the sorted portion. 
// Efficient for small and partially sorted arrays

void insertionSort (vector < int >&values)
{
  for (int i =; i < values.size (); i++)
    {
      int j = i - 1;
      int tmp = values[i];
      while (j >= 0 && values[j] > tmp)
	{
	  values[j + 1] = values[j];
	  j--;
	}
      values[j + 1] = tmp;
    }
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
