#include <bits/stdc++.h>
using namespace std;

// This code implements the bubble sort algorithm, which repeatedly swaps adjacent elements if they are in the wrong order,
// until the entire array is sorted in ascending order. Bubble sort has a time complexity of O(n^2),
// which makes it inefficient for large arrays, but it is easy to understand and implement.

void bubbleSort(vector<int> &values)
{
  bool swapped=false;
  int it=0;
  
  do{
      swapped=false;
      
      for(int i=0;i<values.size()-it-1;i++)
       {
           if(values[i]>values[i+1]) 
           {
               swap(values[i], values[i+1]);
               swapped=true;
            }
   
       }
       
        it++;
  } while(swapped);
  
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
    
    bubbleSort(values);
    
    for(auto &it: values)
    cout<<it;
    
    cout<<endl;
    return 0;
}
