#include <iostream>

using namespace std;


int main()
{
    int N;
    cin >> N;
    char **mat = new char*[N];
    double x_pos[N] = {0,};
    double y_pos[N] = {0,};
    int sum = 0;

    for(int i=0; i<N; i++){
        mat[i] = new char[N];
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
           mat[i][j] = '.';
           cin >> mat[i][j];
        }
    }

    int p = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(mat[i][j] != '.'){
                x_pos[p] = i+1;
                y_pos[p] = j+1;
                p++;
            }
        }
    }

    for(int i=0; i<p-2; i++){
        for(int j=i+1; j<p-1; j++){
            for(int k=j+1; k<p; k++){
                    if((y_pos[j]- y_pos[i])/(x_pos[j]-x_pos[i])==(y_pos[k]- y_pos[i])/(x_pos[k]-x_pos[i])
                       && (y_pos[k]- y_pos[j])/(x_pos[k]-x_pos[j])==(y_pos[k]- y_pos[i])/(x_pos[k]-x_pos[i])){
                        sum++;
                       }

            }
        }
    }

    cout << sum << endl;

    for(int i=0; i<N; i++){
        delete[] mat[i];
    }

    delete [] mat;

    return 0;
}
