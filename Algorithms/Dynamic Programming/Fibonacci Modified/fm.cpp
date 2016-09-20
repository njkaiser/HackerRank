#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <cstdint>
struct uint256_t
{
    uint64_t bits[4];
};


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t1_tmp;
    int t2_tmp;
    uint256_t tn;
    int n;

    cin >> t1_tmp >> t2_tmp >> n;

    uint256_t t1 = 0;
    uint256_t t2 = 0;
    t1 += t1_tmp;
    t2 += t2_tmp;

    for(int i = 3; i <= n; ++i)
    {
      tn = t1 + pow(t2, 2);
      t1 = t2;
      t2 = tn;
    }

    cout << tn << endl;

    return 0;
}
