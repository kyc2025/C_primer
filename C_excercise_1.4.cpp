#include <iostream>
int main()
{
	//ex1.9
	int val=50, sum=0;
	while(val<=100)
	{
		sum+=val;
		val++;
	}
	std::cout<<"sum = "<<sum<<std::endl;
	//ex1.10
	int i=10;
	while(i>=0)
	{
		std::cout<<"i= "<<i<<std::endl;
		i--;
	}
	//ex1.11
	int a=0,b=0,c=0;
	std::cin>>a>>b;
	if(a>b)
	{
		c=a-1;
		while(c!=b)
		{
			std::cout<<c<<std::endl;
			c--;
		}
	}
	else
	{
		c=b-1;
		while(c!=a)
		{
			std::cout<<c<<std::endl;
			c--;
		}
	}
	
	
	return 0;
}
