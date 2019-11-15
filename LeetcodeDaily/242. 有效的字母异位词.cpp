/*
�ж������ַ����Ƿ�����ͬ��ĸ����������
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
//����һ������
bool isAnagram(string s,string t){
	if(s.size()!=t.size())
	{
		return false;
	}
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	return s==t;
}

//����������ϣ��
bool isAnagram1(string s,string t)
{
	if(s.size()!=t.size())
	{return false;}
	unordered_map<char,int> umap;
	for(int i=0;i<s.size();i++)
	{
		++umap[s[i]];
		--umap[t[i]];
	}
	for(auto c:umap)
	{
		if(c.second!=0) return false;
	}
	return true;
}
/*
֪ʶ�㣺
1. map��unordered_map��������һ���Ǻ������һ���ǹ�ϣ��
2. auto�ؼ��ֵ�ʹ�ã�����������������ʼֵ�������Զ�ƥ��
*/