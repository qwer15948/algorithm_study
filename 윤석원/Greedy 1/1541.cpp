//memory usage : 1984KB, Time required: 0ms
#include <iostream>
using namespace std;

int main(void)
{
    char s[50];
    int result = 0;
    scanf("%s", s);
    
    int state = -1, n=0;
    for(int i=0; s[i]; ++i){
        if(state==1){
            if(s[i]>=48 && s[i]<=57) n = n*10 + s[i] - 48;
            else {
                result -= n;
                n = 0;
            }
        }
        else if(state==-1){
            if(s[i]>=48 && s[i]<=57) n = n*10 + s[i] - 48;
            else if(s[i]=='+') {
                state = 0;
                result += n;
                n = 0;
            }
            else {
                state = 1;
                result += n;
                n = 0;
            }
        }
        else{
            if(s[i]>=48 && s[i]<=57) n = n*10 + s[i] - 48;
            else if(s[i]=='-') {
                state = 1;
                result += n;
                n = 0;
            }
            else{
                result += n;
                n = 0;
            }
        }
    }
    if(state==1) result -= n;
    
    else result += n;
    
    
    cout<<result<<endl;
    
    return 0;
}
