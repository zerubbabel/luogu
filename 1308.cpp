#include<iostream>
#include<cstdio>
#include<string>
#include<cctype>
using namespace std;

int main(){
	string s="",s0,w0,w="",t="";
	int L,LS,tot=0,pos=-1;
	getline(cin,w0);
	L=w0.size();
	for(int i=0;i<L;i++){
		if((w0[i]>='A') and (w0[i]<='Z')) w+=char(w0[i]-'A'+'a');
		else w+=w0[i];	
	}
	getline(cin,s0);
	LS=s0.size();
	for(int i=0;i<LS;i++){
		if((s0[i]>='A') and (s0[i]<='Z')) s+=char(s0[i]-'A'+'a');
		else s+=s0[i];	
	}	
	for (int i=0;i<s.size();i++){
		if((i>0) and (s[i-1]!=' ')) continue;//不是单词开头就结束 
		string t=s.substr(i,L);
		if ((t==w) and ((i+L>=s.size()) or (s[i+L]==' '))){//单词长度匹配，后面是空格或者句末
			if (pos==-1)pos=i;
			tot++;
		}
	}
	if (tot>0) cout<<tot<<' '<<pos<<endl;
	else cout<<-1;
	return 0;
}