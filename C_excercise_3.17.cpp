#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
	vector<string> sv; //建立一個字串型態的動態陣列（vector），名稱為 sv，用來存放輸入的字串。
	string s;
	while(cin >> s)
		sv.push_back(s); //將字串 s 新增（push）到 sv 向量的最後面。 ["hello", "world", "this", "is", "a", "test"]
	for(auto &elem: sv)  //遍歷 sv 向量中的每個字串 elem。
		for(auto &c: elem) //遍歷 elem（即 std::string），逐個取出字元 c。
			c=toupper(c);  //字串轉成大寫 
			
	//decltype(sv.size())會取得 sv.size() 的型別（通常是 size_t）這樣可以確保 i 的型別與 sv.size() 相同，避免型別錯誤。
	for(decltype(sv.size()) i=0; i!=sv.size(); ++i) //遍歷 sv 裡的每個字串，索引 i 從 0 到 sv.size() - 1
	{
		cout<< sv[i] <<"\t"; //以 tab (\t) 間隔輸出字串，使輸出較整齊
		if ((i+1) %8 == 0)   //每 8 個字串輸出後，換行
			cout << endl;
    }
	return 0;
}
