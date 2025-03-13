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
	vector<int> v2(10);       //宣告10個數沒定義 
	std::cout <<"[b] "; 
	for (auto i :v2)
		std::cout << i << " ";
	cout << endl;
	//c
	vector<int> v3(10,42);    //宣告10個42 
	std::cout <<"[c] "; 
	for (auto i :v3) 
		std::cout << i << " ";
	cout << endl;
	//d
	vector<int> v4{10};		   //宣告一個整數10
	std::cout <<"[d] ";
	for (auto i :v4)
		std::cout << i << " ";
	cout << endl;
	//e
	vector<int> v5{10,42};     //宣告兩個整數10,42 
	std::cout <<"[e] ";
	for (auto i :v5)
		std::cout << i << " ";
	cout << endl;
	//f
	vector<string> v6{10};     //只宣告v6陣列,沒填字 
	std::cout <<"[f] ";
	for (auto i :v6)
		std::cout << i << " ";
	cout << endl;
	//g
	vector<string> v7{10,"hi"};// 宣告v7陣列,全部填hi 
	std::cout <<"[g] ";
	for (auto i :v7)    
		std::cout << i << " ";
	cout << endl; 
	
	return 0;
}
