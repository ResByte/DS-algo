/* Find the number of edits to convert str1 to str2 */
#include <iostream>

using namespace std;

int min(int x, int y, int z)
{
  return min(min(x,y),z);
}

int editDist(string str1, string str2, int m, int n)
{
  // if the first string empty
  if(m ==0) return n;

  //if the second string empty
  if(n == 0) return m;

  // last element of both string is same
  if(str1[m-1]== str2[n-1])
    return editDist(str1,str2, m-1, n-1);

  //else
  return 1 + min( editDist(str1, str2, m-1, n),
                  editDist(str1,str2,m-1, n-1),
                  editDist(str1,str2,m, n-1)
                );
}

int main(int argc, char const *argv[]) {
  /* code */
  string str1 ="sunday";
  string str2 = "saturday";
  cout << editDist(str1, str2, str1.length(),str2.length() );
  return 0;
}
