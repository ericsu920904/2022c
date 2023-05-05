int maxVowels(char * s, int k){
    int N=strlen(s);
    int len=0,ans=0;
    for(int i=0;i<N;i++){
        if(s[i]=='a' || s[i]=='e' s[i]=='i' ||s[i]=='o' ||s[i]=='u')
            len++;
        }else{
        if(len>ans) ans=len;
        len=0;
        }
    }
    if(len>ans)ans=len;
    if(ans>k) return k;
    else return ans;
}
