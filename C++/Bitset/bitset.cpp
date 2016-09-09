#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <set>

int main()
{
	int N, S, P, Q;
	cin >> N >> S >> P >> Q;
	
	vector<long long> a;
	a.push_back(static_cast<long long>(S) % 2147483648);
	
	for(int i = 1; i < N; ++i)
	{
		//if(((a.back() * static_cast<long long>(P) + Q) % 2147483648) > 2147483648
		//int 
		a.push_back((a.back() * static_cast<long long>(P) + Q) % 2147483648);
	}
	
	for(vector<long long>::iterator it = a.begin(); it != a.end(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
	
	cout << a.size() << endl;
	
	return 0;
}
