#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
	vector<int> v1(10,42);
	cout<<"1. ";
	for(auto i: v1)
		cout<<i<<" ";
	
	vector<int> v2;
	cout<<endl<<"2. ";
	for(auto i=0; i!=10; i++)
		v2.push_back(42);
	for(auto i: v2)
		cout<<i<<" ";
		
	vector<int> v3{42,42,42,42,42,42,42,42,42,42};
	cout<<endl<<"3. ";
	for(auto i: v3)
		cout<<i<<" ";
	return 0;
}
