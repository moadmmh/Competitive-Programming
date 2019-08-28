//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000 * 1000 * 1000 + 7
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
#define clr(x) x.clear()
#define LOG(x) std::cout << x << std::endl;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = 3.14159265359;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int a[10];

void printing(int x,int idx,bool start){
    if(x==1){
        if(idx<8){
            if(start){
                cout<<" + x";
            }
            else
                cout<<"x";

            if(idx<7)
                cout<<"^"<<8-idx;
        }
        else if(idx==8){
            if(start){
                    cout<<" + ";
                    cout<<abs(x);
            }
            else
                cout<<x;
        }
    }
    if(x==-1){
        if(idx<8){
            if(start){
                    cout<<" - x";
            }
            else
                cout<<"-x";

            if(idx<7)
                cout<<"^"<<8-idx;
        }
        else if(idx==8){
            if(start){
                    cout<<" - ";
                    cout<<abs(x);
            }
            else
                cout<<x;
        }

    }
    else {
        if(x>1){
            if(idx<8){
                if(start){
                    cout<<" + ";
                    cout<<x<<"x";
                }
                else {
                    cout<<x<<"x";
                }
                if(idx<7){
                    cout<<"^"<<8-idx;
                }
            }
            else if(idx==8){
                if(start){
                        cout<<" + ";
                        cout<<abs(x);
                }
                else
                    cout<<x;
            }

        }
        if(x<-1){
            if(idx<8){
                if(start){
                    cout<<" - ";
                    cout<<abs(x)<<"x";
                }
                else {
                    cout<<"-";
                    cout<<abs(x)<<"x";
                }
                if(idx<7){
                    cout<<"^"<<8-idx;
                }
            }

            else if(idx==8){
                if(start){
                        cout<<" - ";
                        cout<<abs(x);
                }
                else
                    cout<<x;
            }
        }
    }
}

int  main()
{

    while (cin>>a[0])
    {
        for (int i = 1; i < 9; ++i)
        {
            cin >> a[i];
        }
        bool start = false;
        for (int i = 0; i < 9; ++i)
        {
            if(a[i]!=0){
                printing(a[i],i,start);
                start=true;
            }
        }
        if (!start)
            cout << 0 << endl;
        else {
            cout<<endl;
        }
    }
    return 0;
}
