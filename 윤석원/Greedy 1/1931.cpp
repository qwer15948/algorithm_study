//memory usage : 5804KB, Time required: 44ms
#include <iostream>
#include <vector>

using namespace std;
int  **quick;

void quickSort(int i, int j)
{
    if(i>=j) return;
    int pivot = quick[(i+j)/2][1];
    int left = i;
    int right = j;
    
    while(left<=right)
    {
        while(quick[left][1]<pivot) left++;
        while(quick[right][1]>pivot) right--;
        if(left<=right){
            if(left<right && !(quick[left][1]==quick[right][1] && quick[left][0]<quick[right][0])){
                swap(quick[left], quick[right]);
            }
            left++; right--;
        }
        
    }
    quickSort(i,right);
    quickSort(left,j);
}

int main(void)
{
    int N;
    scanf("%d\n", &N);
    quick = new int *[N];
    for(int i=0; i<N; ++i){
        quick[i] = new int [2];
        scanf("%d %d\n", &quick[i][0], &quick[i][1]);
    }
    
    quickSort(0, N-1);
    int end=0, count=0;
    for(int i=0; i<N; ++i){
        if(quick[i][0]>=end){
            end = quick[i][1];
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
