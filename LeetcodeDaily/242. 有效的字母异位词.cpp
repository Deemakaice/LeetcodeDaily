/*
判断两个字符串是否是相同字母组成且乱序的
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
//方法一：排序
bool isAnagram(string s,string t){
	if(s.size()!=t.size())
	{
		return false;
	}
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	return s==t;
}

//方法二：哈希表
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
知识点：
1. map与unordered_map的区别是一个是红黑树，一个是哈希表
2. auto关键字的使用，可以在声明变量初始值的类型自动匹配
*/