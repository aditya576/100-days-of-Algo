//https://www.codechef.com/LRNDSA01/problems/CARVANS
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)//while t is greater than 0,this loop will run
	{
	    int n,a[10000];
	    std::cin>>n;//8 3 6
	    int max=n;//Maximum value is the size of the array now,that is, the total number of cars
	    for(int i=0;i<n;i++)
	    std::cin>>a[i];
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[i]>a[j])//if any jth car moving before the ith car is moving at a lower speed , then ith car is not moving at its maximum speed
	            {
	                max--;//maximum value will be one less now
	                break;//it will come out of the 2nd loop
	            }
	        }
	    }
	    std::cout<<max<<'\n';//will output the cars moving at their maximum speed for every testcase(t)
	}
	return 0;
}
