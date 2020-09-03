#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int e,em,m,mh,h;
    int a[3];


    cin >> e >> em >> m >> mh >> h;

    a[0] = e;
    a[1] = m;
    a[2] = h;

    while((em>0 || mh>0)){
        if(em>0){
            if(a[0]<a[1]){
            	a[0]++;
            	em--;
			}
			else if 
				if(em>=mh){
					a[1]++;
					em--;
				}
				else{
					a[1]++;
					mh--;
				}
			}
        }

        if(mh>0){
        	if(a[2]<a[1]){
        		a[2]++;
        		mh--;
			}
			else if(a[1]<=a[2]){
				if(em>=mh){
					a[1]++;
					em--;
				}
				else{
					a[1]++;
					mh--;
				}
			}
		}

    }
    cout << "a[0] : " << a[0] << endl;
    cout << "a[1] : " << a[1] << endl;
    cout << "a[2] : " << a[2] << endl;

    sort(a,a+3);
    
    cout << a[0] << endl;

    return 0;
}

#--------------------------------------------------------------#
/* example!!!! 
#include <iostream>

using namespace std;



int main()
{
    while(1){
        int e, em, m, mh, h;
        cin >> e >> em >> m >> mh >> h;
        int res = 0;

        while (1)
        {
            bool e_pass = false, m_pass = false, h_pass = false;
            if (e)
                --e, e_pass = true;
            else
                if (em)
                    --em, e_pass = true;

            if (m)
                --m, m_pass = true;
            else
                if (mh || em)
                    if (em >= mh)
                        --em, m_pass = true;
                    else
                        --mh, m_pass = true;

            if (h)
                --h, h_pass = true;
            else
                if (mh)
                    --mh, h_pass = true;


            if (!e_pass || !m_pass || !h_pass)
                break;
            ++res;
        }

        cout << res << endl;
    }
}
*/
#-----------------------------------------------------------------------------#
