#include <bits/stdc++.h>
using namespace std;

bool factorialSum(int n) {
    vector<long long> f;
    long long s = 1;
    for (int i = 1; s <= n; ++ i) {
        s *= i;
        f.push_back(s);
    }
    sort(rbegin(f), rend(f));
    for (int i = 0; i < f.size(); ++ i) {
        if (n >= f[i]) {
            n -= f[i];
        }
    }
    return n == 0;
}

int main() {
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
    if(factorialSum(n))
	cout<<"Yes";
	else
	cout<<"No";


   return 0;
	}
	

