//Source: https://blog.csdn.net/qq_52331221/article/details/121866394
//Author: 随兴随缘 ( https://blog.csdn.net/qq_52331221 )

/*
*/
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(){
    string s;
    int a=0,b=0,c=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') a++;
        else if(s[i]>='0'&&s[i]<='9') b++;
        else c++;
    }
    printf("blank = %d, digit = %d, other = %d",a,b,c);
}