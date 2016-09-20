#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string time;
    cin >> time;

    string::size_type sz;

    string hrs_str = time.substr(0, 2);
    string mins_secs = time.substr(2, 6);
    string AorP = time.substr(8, 2);

    int hrs = stoi(hrs_str);

    if(AorP > "BM")
    {
      if(hrs != 12)
        hrs += 12;
    }
    else
      if(hrs == 12)
        hrs -= 12;

    if(hrs < 10)
      cout << '0';

    cout << hrs << mins_secs << endl;

    return 0;
}
