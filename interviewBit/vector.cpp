#include <iostream>
#include <vector>
using namespace std;

int main (){
  vector<int> myvector (20);
  for (int i=0; i<myvector.size(); i++)
    myvector[i]=i;

  for (int i=0; i<myvector.size(); i++)
    cout << ' ' << myvector[i];
  return 0;
}
