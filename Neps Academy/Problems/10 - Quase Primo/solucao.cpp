//https://neps.academy/problem/10
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
const ld PI = 2.0 * acos(0.0);
const int BLOCK = 333;

ll primos[MAXN], N;
int K;

ll solve(int i, int qtd, ll prod)
{
	if(i == K) return (N / prod) * (qtd % 2 ? -1 : 1);

	ll ans = solve(i + 1, qtd, prod);

	if(primos[i] * prod <= N)
		ans += solve(i + 1, qtd + 1, primos[i] * prod);

	return ans;
}

int main(int argc, char const *argv[])
{
	optimize;
	
	cin >> N >> K;

	for(int i = 0; i < K; i++) cin >> primos[i];

	cout << solve(0, 0, 1) << endl;

	return 0;
}