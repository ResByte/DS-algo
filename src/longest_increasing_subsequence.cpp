/**
This is code for Longest increasing subsequence using Dynamic programming
*/


#include <iostream>

using namespace std;

int lis(int arr[],int n)
{
  int *lis;
  int max = 0;
  lis = new int(n);

  // initialize values for lis
  for(int i = 0; i < n; i++)
  {
    lis[i] = 1;
  }

  // in bottom up manner compute LIS
  for (int i = 1; i < n; i++)
  {
    for (int j =0; j < i; j++)
    {
      if ( arr[i] > arr[j] && lis[i] < lis[j] +1)
        lis[i] =lis[j] +1;
    }
  }

  // find max of all LIS values
  for (int i = 0; i < n; i++)
    if (max < lis[i])
      max = lis[i];

  return max;

}


int main(int argc, char const *argv[]) {
  /* code */
  int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<< "Length of LIS is "<< lis(arr,n)<<endl;

  return 0;
}
