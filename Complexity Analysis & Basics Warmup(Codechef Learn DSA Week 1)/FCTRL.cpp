//https://www.codechef.com/LRNDSA01/problems/FCTRL
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin>>t;
	while(t--)//loop will run till the value of t is greater than 0
	{
	    int n,n_5=0;//n_5 is the number of 5's
	    std::cin>>n;
	    int x=5;//the ans will contain 0 only when a multiple of 5 is multiplied by a multiple of 2 or we cross a multiple of 10
	    while(x<=n)// this loop will find the numbers which are powers of 5(5->one 5(5*1),25->two 5(5*5),125->three 5(5*5*5))
	    {
	        n_5+=(n/x);// no. of multiple of x's between 1 and n
	        x*=5;//first iteration,x=5;2nd iteration ,x=25;3rd iteration x is 125
	    }
	    std::cout<<n_5<<'\n';
	}
	return 0;
}
