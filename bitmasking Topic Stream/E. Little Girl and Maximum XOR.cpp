/*
"THE STONE THAT THE BUILDERS REJECTED HAS BECOME THE CORNERSTONE. 
THIS IS THE LORD'S DOING , THIS IS MARVELOUS IN OUR EYES ." (118 :22-23 ) ❤

Dear online judge:
I have not failed. I've just found 10,000 ways that won't work.
                    _Thomas A. Edison
"لكن بالنسبة لكَ كُن قويًا ولا تستسلم لأنَّ عملَك سيُكافأ"
*/
#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
#include <vector>
#include <set>
#include <map>
#include<math.h>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <bitset>
#include <utility>
#include <string>
#include <cctype>
#include <iomanip>
#include <numeric> // for NTH
#define bye return;
#define endl '\n'
#define ll long long
#define li long int
#define lli long long int
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define Number_of_leading_zeroes_l(num) __builtin_clz(num)
#define Number_of_leading_zeroes_ll(num) __builtin_clzll(num)
#define Number_of_trailing_zeroes_ll(num) __builtin_ctz(num)
#define pop_count_int(num) __builtin_popcount(num)
#define pop_count_l(num) __builtin_popcountl(num)
#define pop_count_ll(num) __builtin_popcountll(num)
#define ison(num, bit) (num & (1 << bit))
#define setoffif(num, bit) (num ^= (1 << bit)) // iff (num &(1<<bit))
#define setoff(num, bit) (num &= ~(1 << bit))
#define seton(num, bit) (num |= (1 << bit))
#define flipbit(num, bit) (num ^= (1 << bit))
#define LSB(num) (num & (-num))
#define indx_of_MSB(n)  _lg(n) // zero based from right 
#define Num_of_Digits(n) ((ll)log10(n) + 1)
#define ceill(n, m) (((n) / (m)) + (((n) % (m) ) ? 1 : 0))
#define lastOne(x) (__builtin_clzll(x)) 
#define fixed(n) fixed << setprecision(n)
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define Pi  3.14159265358979323846264
#define INF_LL 0x3f3f3f3f3f3f3f3f
#define INF_INT 0x3f3f3f3f
#define sin(a) sin((a)*PI/180)
#define cos(a) cos((a)*PI/180)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define M 64    //the size of the bitset must be a constant number. You can't read n and then declare bitset<n>
#define bitset(n) bitset<M>(n) // zero based , indexing beginning from the right not left 
// #define ordered_set tree<pair<int, int>, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>
// #define ordered_map tree<int, int, less<>, rb_tree_tag, tree_order_statistics_int_update>
ll sgn(ll x){ if(x > 0) return 1; if(x < 0) return -1; return 0;}
ll mod = 1e9 + 7;
ll mul(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; }
ll add(ll a, ll b) { return ((a % mod) + (b % mod)) % mod; }
ll sub(ll a, ll b) { return ((a % mod) - (b % mod) + mod) % mod; }
const ll   llmin  = -1e18 ;
const ll   llmax  =  1e18 ;
const int  imin   = -1e9  ;
const int  imax   =  1e9  ;
const int  N      = 2e5   ;
using namespace std;
void AC() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); // or cin.tie(NULL)
    cout.tie(nullptr);  // or cout.tie(0)
}
void file_set(){ //string& file_name
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // freopen((file_name+".in").c_str(), "r", stdin);
    // freopen((file_name+".out").c_str(), "w", stdout);
}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
    // THOSE WHO CAN'T REMEMBER THE PAST'RE CONDEMNED TO REPEAT IT (USE DP -_-) - George Santayana
    // PUSH HARDER THAN YESTERDAY IF YOU WANT A DIFFERENT TOMORROW !
    //YOU DON'T HAVE TO BE A GENIUS , YOU NEED TO BE DETERMINED .
const  ll MAX = 1e5+2;
ll vis[MAX];
//   n = ~(int)0; // test for possible overflow
ll MSB(ll x ){
    ll k = Number_of_leading_zeroes_ll(x);
    return (63-k) ;
}
void LELLO(){
    /*
    the idea of the problem is to flib after all the same bits from MSB
    and by taking bitwise XOR of two number , we get all the bits seton from msb to bit 0  
    by this equation (2 * (1LL << MSB) - 1) we get the final answer 
    */
    ll l , r ; 
	cin >> l >> r;
	if (l == r){
        cout << 0 << '\n';
        bye
    }
	ll x = l ^ r;
	ll MSB = 63 - __builtin_clzll(x);
	cout << (2 * (1LL << MSB) - 1) << '\n';
}
void driver(ll t=1)
{

    while (t--) LELLO();
    Time 
}
signed main()
{
    AC();
    // file_set();
    // ll test ; cin >> test ;
    driver();
}