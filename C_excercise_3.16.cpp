#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout; using std:: endl;
using std::string;
int main()
{
	//a 
	vector<int> v1;
	std::cout <<"[a] "; 
	for (auto i :v1)
		std::cout << i << " ";
	cout << endl;
	//b
	vector<int> v2(10);       //�ŧi10�ӼƨS�w�q 
	std::cout <<"[b] "; 
	for (auto i :v2)
		std::cout << i << " ";
	cout << endl;
	//c
	vector<int> v3(10,42);    //�ŧi10��42 
	std::cout <<"[c] "; 
	for (auto i :v3) 
		std::cout << i << " ";
	cout << endl;
	//d
	vector<int> v4{10};		   //�ŧi�@�Ӿ��10
	std::cout <<"[d] ";
	for (auto i :v4)
		std::cout << i << " ";
	cout << endl;
	//e
	vector<int> v5{10,42};     //�ŧi��Ӿ��10,42 
	std::cout <<"[e] ";
	for (auto i :v5)
		std::cout << i << " ";
	cout << endl;
	//f
	vector<string> v6{10};     //�u�ŧiv6�}�C,�S��r 
	std::cout <<"[f] ";
	for (auto i :v6)
		std::cout << i << " ";
	cout << endl;
	//g
	vector<string> v7{10,"hi"};// �ŧiv7�}�C,������hi 
	std::cout <<"[g] ";
	for (auto i :v7)    
		std::cout << i << " ";
	cout << endl; 
	
	return 0;
}
