//Memory usage: 1984KB, Time required : 0ms
#include <iostream>
using namespace std;

int main(void)
{
    int e, em, m, mh, h;
    
    scanf("%d%d%d%d%d", &e, &em, &m, &mh, &h);
    
    while(em>0 && mh>0){
        if(e > m){
            if(e+em >= h+mh) em--;
            else mh--;
            m++;
        }
        else{
            em--;
            e++;
        }
        
        if(em==0 || mh==0) break;
        
        if(h >= m){
            if(e+em >= h+mh) em--;
            else mh--;
            m++;
        }
        else{
            mh--;
            h++;
        }
    }
    
    while(em>0){
        if(e > m) m++;
        else e++;
            
        em--;
    }
    
    while(mh>0){
        if(h >= m) m++;
        else h++;
        
        mh--;
    }
    
    if(e<=m && e<=h) cout<<e<<endl;
    else if(m<=e && m<=h) cout<<m<<endl;
    else cout<<h<<endl;
    
    return 0;
}
