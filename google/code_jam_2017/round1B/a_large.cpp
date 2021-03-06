#include <bits/stdc++.h>
using namespace std;

#define int long long
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF ((int)1e9)
#define MOD7 (INF + 7)
#define MOD11 (INF + 11)
#define EPS (1e-9)
#define PI (acos(-1))
#define SZ(x) ((int)x.size())
#define eb emplace_back
#define pb eb
#define fi first
#define se second
#define ull unsigned long long
#define ll long long
#define ii pair <int, int>
#define vi vector <int>
#define vii vector <ii>
#define vvi vector <vi>
#define vvii vector <vii>
#define dd pair <double, double>
#define vd vector <double>
#define vdd vector <dd>
#define vvd vector <vd>
#define vvdd vector <vdd>
#define ALL(x) (x).begin(), (x).end()
#define debug(x) cout<<#x<<" is "<<x<<endl;

struct Horse {
    double k, s;
};

bool cmp(Horse a, Horse b) {
    return a.k > b.k;
}

signed main() {
	int TC;
	cin >> TC;
	for (int tc = 1; tc <= TC; tc++) {
        double d, n, a;
        cin >> d >> n;

        vector <Horse> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i].k >> h[i].s;
        }

        sort(ALL(h), cmp);

        double la = 0;
        for (int i = 0; i < n; i++) {
            double k = h[i].k, s = h[i].s;
            a = (d-k)/s;
            if (a >= la) {
                la = a;
            }
        }

        double ans = d/la;
		cout << "Case #" << tc << ": ";
        cout << fixed << setprecision(6) << ans << endl;
	}
	return 0;
}
