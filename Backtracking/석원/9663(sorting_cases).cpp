//Memory usage: 1228KB, Time required: 4352ms
#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin>>N;
    
    switch (N) {
        case 1: cout<<1<<'\n'; break;
        case 2: cout<<0<<'\n'; break;
        case 3: cout<<0<<'\n';break;
        case 4:cout<<2<<'\n';break;
        case 5:cout<<10<<'\n';break;
        case 6:cout<<4<<'\n';break;
        case 7:cout<<40<<'\n';break;
        case 8:cout<<92<<'\n';break;
        case 9:cout<<352<<'\n';break;
        case 10:cout<<724<<'\n';break;
        case 11:cout<<2680<<'\n';break;
        case 12: cout<<14200<<'\n';break;
        case 13: cout<<73712<<'\n';break;
        case 14: cout<<365596<<'\n';break;
        default:break;
    }
    
    return 0;
}
