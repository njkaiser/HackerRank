#include <iostream>

using namespace std;


int main() {
    
    int N, Q;
    cin >> N >> Q;
    
    int **mtx = new int*[N];
    
    for(int i = 0; i < N; ++i)
    {
        int k;
        cin >> k;
        
        int *line = new int[k];
        
        for(int j = 0; j < k; ++j)
        {
        	cin >> line[j];
        }
        
        mtx[i] = line;
    }
    
    for(int m = 0; m < Q; ++m)
    {
        int a, b;
        cin >> a >> b;
        
        cout << *(mtx[a] + b) << endl;
    }
    
    
    for(int n = 0; n < N; ++n)
    {
    	delete[] mtx[n];
    }
    delete[] mtx;
    
	return 0;
}

