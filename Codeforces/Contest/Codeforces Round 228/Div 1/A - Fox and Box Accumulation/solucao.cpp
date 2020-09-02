//https://codeforces.com/contest/388/problem/A
#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 2000000020LL
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define PB push_back
#define EB emplace_back
#define MOD 1000000007
#define PRIME 101 
#define MAXN 200020
#define MAXL 23
#define endl '\n'

using namespace std;

// (1 + sqrt(5)) / 2
const ld GOLDEN_RATIO = 1.6180339887498949025257388711906969547271728515625;
const ld PI = acos(-1.0);
const int BLOCK = 333;

int nums[MAXN], sz[MAXN];

int main(int argc, char const *argv[])
{
	optimize;
	
    int N, x;

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> nums[i];

    sort(nums, nums + N);

    multiset<int> caixas;

    for(int i = 0; i < N; i++)
    {
        int tam = *caixas.begin();

        if(caixas.empty() or tam > nums[i])
            caixas.insert(1);    
        else
        {
            caixas.erase(caixas.begin());
            caixas.insert(tam + 1);
        }
    }
    
    cout << ((int)caixas.size()) << endl;

	return 0;
}