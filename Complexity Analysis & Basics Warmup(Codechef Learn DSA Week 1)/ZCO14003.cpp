//https://www.codechef.com/LRNDSA01/problems/ZCO14003
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n,budget[500000];
	std::cin>>n;
	for(long long int i=0;i<n;i++)
	std::cin>>budget[i];// takes budget of every ith customer
	sort(budget,budget+n);// standard function for sorting in c++(it   sorts the budgets of customers un ascending order)
	
	for(long long int i=0;i<n;i++)
	budget[i]=budget[i]*(n-i);/*the budget is converted to revenue if the price is taken as the budget of every ith customer. no of potential customers would be 
			  	   those whose budget is more or equal to the budget of every ith customer(and the budget of the customers after ith customer is n-i
				   For example-14,20,30,53 are the budgets,, revenue would be 14*4,20*3,30*2,53*1(56,60,60,53). Maximum revenue would be 60
				*/
	
	long long int max=budget[0];
	for(long long int i=1;i<n;i++)
	{
	    if(budget[i]>max)
	     max=budget[i];
	}
	
	std::cout<<max;
	
	return 0;
}
