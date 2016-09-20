#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> vec;
    for(int i = 0; i < n; ++i)
    {
      int tmp;
      cin >> tmp;
      vec.push_back(tmp);
    }

    for(int j = 0; j < k; ++j)
    {
      vec.insert(vec.begin(), *(vec.end() - 1));
      vec.pop_back();
    }


    //not necessary, just for testing purposes
    // for(it = vec.begin(); it != vec.end(); ++it)
    // {
    //   cout << *it << ' ';
    // }
    // cout << endl;

    // vector<int>::iterator it;
    for(int l = 0; l < q; ++l)
    {
      //TODO: read in indices and print output here
      int m;
      cin >> m;
      //it = vec.begin();
      cout << *(vec.begin() + m) << endl;
    }

    return 0;
}
