//https://www.codechef.com/LRNDSA01/problems/LADDU
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s;
	    cin>>n>>s;
	    int laddus=0;
	    while(n--)
	    {
	        string str;
	        cin>>str;
	        if(str=="CONTEST_WON")
	        {
	            laddus+=300;// if str is contest won, player will get 300 laddus 
	            int rank;
	            cin>>rank;
	            if(rank<20)
	            laddus+=(20-rank);// the player will get more 20-rank laddus,if his/her rank is less than 20
	        }
	        else if(str=="TOP_CONTRIBUTOR")// if the player is a top contributor he will get 300 laddus
	        laddus+=300;
	        else if(str=="BUG_FOUND")
	        {
	            int severe;
	            cin>>severe;
	            laddus+=severe;// bug finder gets laddus depending on the severity of the bug
	        }
	        else if(str=="CONTEST_HOSTED")
	        laddus+=50;//if the player hosted a contest , he will get 50 laddus
	    }
	    
	    if(s=="INDIAN")
	    cout<<laddus/200<<'\n';/*if the player is indian he can redeem 200 laddus in a month,so the number 
				     of months for which he can redeem laddus are number of laddus/200(greater than 600 ladduus(3 times),
				     greater than 800 laddus(4 times),greater than200(1 time)*/
	    else if(s=="NON_INDIAN")
	    cout<<laddus/400<<'\n';/*if the player is not an indian he can redeem 400 laddus at a time, so the
				   number of months for which he can redeem laddus are number of laddus/400*/
	}
	return 0;
}
