//https://www.codechef.com/LRNDSA01/problems/TEST
//This is a problem for newbies
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	while(1)//This loop will run until the loop encounters a break statement
	{
	    int n;
	    std::cin>>n;//takes input of n
	    if(n==42)// if it gets an input of n=42,it will come out of the loop and it will not take any more input
	    break;
	    
	    std::cout<<n<<'\n';//prints the value of n, '\n' inserts a new line
	}
	return 0;
}
