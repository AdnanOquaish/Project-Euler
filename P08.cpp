/*******************************************************************************
 * ************************     ADNAN OQUAISH     ******************************
 * *************************     BITS Pilani     *******************************
 *******************************************************************************/

    //Answer: 23514624000

    #include <bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
	#include <ext/pb_ds/tree_policy.hpp>

    using namespace __gnu_pbds;
    using namespace std;

    typedef long long int ll;
    typedef long int li;
    typedef unsigned int ui;
    typedef pair<int,int> pii;
    typedef pair<ll,int> pli;
    typedef pair<int,ll> pil;
    typedef pair<ll,ll> pll;
    typedef list<int> lsi;
	typedef vector<lsi> vls;
	typedef set<int> sti;
	typedef vector<int> vi;
    typedef vector<long int> vl;
    typedef vector<ll> vll;
	template <class T> inline void smax(T &x,T y){ x = max((x), (y));}
	template <class T> inline void smin(T &x,T y){ x = min((x), (y));}


    #define PB                           push_back
    #define pb 							 pop_back()
    #define MP                           make_pair
    #define LB                           lower_bound
    #define UB                           upper_bound
    #define B                            begin()
    #define E                            end()
    #define F                            first
    #define S                            second
    #define SZ                           size()
    #define sqr(a)						 (a*a)
    #define MIN(x,y)                     (x<y ? x : y)
    #define MAX(x,y)                     (x>y ? x : y)
    #define ABS(x)						 (x>0 ? x : -1*x)
    #define inp(x)						 cin>>x
    #define out(x)						 cout<<x
	#define scd(x)						 scanf("%d",&x)
	#define scu(x)						 scanf("%u",&x)
	#define scl(x)						 scanf("%ld",&x)
	#define scll(x)						 scanf("%lld",&x)
	#define scc(x)						 scanf("%c",&x)
	#define scs(x)						 scanf("%s",x)
	#define scf(x)						 scanf("%f",&x)
	#define sclf(x)						 scanf("%lf",&x)
	#define scllf(x)					 scanf("%llf",&x)
	#define sc2d(x,y)					 scanf("%d %d",&x,&y)
	#define sc2u(x,y)					 scanf("%u %u",&x,&y)
	#define sc3d(x,y,z)					 scanf("%d %d %d",&x,&y,&z)
	#define sc2l(x,y)					 scanf("%ld %ld",&x,&y)
	#define sc3l(x,y,z)					 scanf("%ld %ld %ld",&x,&y,&z)
	#define sc2ll(x,y)					 scanf("%lld %lld",&x,&y)
	#define sc3ll(x,y,z)				 scanf("%lld %lld %lld",&x,&y,&z)
	#define sc2f(x,y) 					 scanf("%f %f",&x,&y)
	#define sc3f(x,y,z) 				 scanf("%f %f %f",&x,&y,&z)
	#define sc2lf(x,y) 					 scanf("%lf %lf",&x,&y)
	#define sc3lf(x,y,z) 				 scanf("%lf %lf %lf",&x,&y,&z)
	#define sc2llf(x,y) 				 scanf("%llf %llf",&x,&y)
	#define sc3llf(x,y,z) 				 scanf("%llf %llf %llf",&x,&y,&z)
	#define prd(x) 						 printf("%d\n",x)
	#define prl(x) 						 printf("%ld\n",x)
	#define prll(x) 					 printf("%lld\n",x)
	#define prc(x) 						 printf("%c\n",x)
	#define prs(x)					     printf("%s\n",x)
	#define prf(x) 					     printf("%f\n",x)
	#define prlf(x)						 printf("%lf\n",x)
	#define prllf(x)					 printf("%llf\n",x)
	#define pr2d(x,y)					 printf("%d %d\n",x,y)
	#define pr2l(x,y)					 printf("%ld %ld\n",x,y)
	#define pr2ll(x,y)					 printf("%lld %lld\n",x,y)
	#define pr2c(x,y)				     printf("%c %c\n",x,y)
	#define pr2s(x,y)					 printf("%s %s\n",x,y)
	#define pr2f(x,y)					 printf("%f %f\n",x,y)
	#define pr2lf(x,y)					 printf("%lf %lf\n",x,y)
	#define pr2llf(x,y)					 printf("%llf %llf\n",x,y)
	#define pr3d(x,y,z)					 printf("%d %d %d\n",x,y)
	#define pr3l(x,y,z)					 printf("%ld %ld %ld\n",x,y)
	#define pr3ll(x,y,z)				 printf("%lld %lld %lld\n",x,y)
	#define pr3c(x,y,z)					 printf("%c %c %c\n",x,y)
	#define pr3s(x,y,z)					 printf("%s %s %s\n",x,y)
	#define pr3f(x,y,z)					 printf("%f %f %f\n",x,y)
	#define pr3lf(x,y,z)				 printf("%lf %lf %lf\n",x,y)
	#define pr3llf(x,y,z)				 printf("%llf %llf %llf\n",x,y)
	#define INF                          (int)1e9
    #define EPS                          1e-9
	#define bitcount                     __builtin_popcount
	#define gcd                          __gcd
	#define forall(i,a,b)                for( i=a;i<b;i++)
	#define For(i,a,b) 					 for((i)=(a);(i) < (b); ++(i))
	#define rof(i,a,b) 					 for(int (i)=(a);(i) > (b); --(i))
	#define foreach(v, c)                for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
	#define all(a)                       a.begin(), a.end()
	#define rep(i, c) 					 for(auto &(i) : (c))
	#define in(a,b)                      ( (b).find(a) != (b).end())
	#define fill(a,v)                    memset(a, v, sizeof a)
	#define sz(a)                        ((int)(a.size()))
	#define mp                           make_pair
	#define maX(a,b)                     ((a)>(b) ? (a) : (b))
	#define miN(a,b)                     ((a)<(b) ? (a) : (b))
	#define checkbit(n,b)                ((n >> b) & 1)
	#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
	#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())
    #define parr(a,n)                    for(int o=0;o<n;o++) printf("%d ",a[o]);printf("\n")
    #define parr1(a,n)                   for(int o=1;o<=n;o++) printf("%lld ",a[o]);printf("\n")
    #define error(x)					 cerr << #x << " = " << (x) <<endl
	#define Error(a,b)					 cerr<<"( "<<#a<<" , "<<#b<<" ) = ( "<<(a)<<" , "<<(b)<<" )\n";
	#define errop(a)					 cerr<<#a<<" = ( "<<((a).x)<<" , "<<((a).y)<<" )\n";
	#define coud(a,b)					 cout<<fixed << setprecision((b)) << (a)
	#define L(x)						 ((x)<<1)
	#define R(x)						 (((x)<<1)+1)
	#define umap						 unordered_map
	#define double 						 long double
    #define MOD  					1000000007

   	char str[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

	int main()
	{
    	ll i,j,k,n,m,t;
    	t = 1;
    	// For(i,0,13)
    	// {
    	// 	t *= (str[i] - 48);
    	// }
    	k = 0;
    	For(i,0,988)
    	{
    		t = 1;
    		For(j,0,13)
    		{
    			t *= (str[i+j] - 48);
    		}
    		if(t > k)
    			k = t;
    	}
    	//cout<<(int)str[0]<<endl;
    	cout<<k<<endl;
    	return 0;
    }
