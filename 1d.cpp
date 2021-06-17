#include<iostream>
int main()
{
	int n;
	std::cout<<" enter a number of your choice";
	std::cin>>n;
	if (n==0)
	{
		std::cout<<"entered number is zero";
	}
	if (n>0)
	{
		std::cout<<"entered number is positive";
	}
	if (n<0)
	{
		std::cout<<"entered number is negative";
	}
	return 0;
}

