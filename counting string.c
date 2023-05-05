#include<stdio.h>
#include<string.h>
int main(){
char s[1000];
scanf("%s",s,sizeof(s));
int cnt[26]={0};
int len=strlen(s);
for(int i=0;i<len;i++){
    int value = s[i]-'a';
    cnt[value]++;
}
for(int i=0;i<26;i++){

    if(cnt[i]!=0)
        {
        printf("%c : %d\n",i+'a',cnt[i]);
    }
}
return 0;
}
