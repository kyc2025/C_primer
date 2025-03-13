#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
	vector<string> sv; //�إߤ@�Ӧr�ꫬ�A���ʺA�}�C�]vector�^�A�W�٬� sv�A�ΨӦs���J���r��C
	string s;
	while(cin >> s)
		sv.push_back(s); //�N�r�� s �s�W�]push�^�� sv �V�q���̫᭱�C ["hello", "world", "this", "is", "a", "test"]
	for(auto &elem: sv)  //�M�� sv �V�q�����C�Ӧr�� elem�C
		for(auto &c: elem) //�M�� elem�]�Y std::string�^�A�v�Ө��X�r�� c�C
			c=toupper(c);  //�r���ন�j�g 
			
	//decltype(sv.size())�|���o sv.size() �����O�]�q�`�O size_t�^�o�˥i�H�T�O i �����O�P sv.size() �ۦP�A�קK���O���~�C
	for(decltype(sv.size()) i=0; i!=sv.size(); ++i) //�M�� sv �̪��C�Ӧr��A���� i �q 0 �� sv.size() - 1
	{
		cout<< sv[i] <<"\t"; //�H tab (\t) ���j��X�r��A�Ͽ�X�����
		if ((i+1) %8 == 0)   //�C 8 �Ӧr���X��A����
			cout << endl;
    }
	return 0;
}
