#include <iostream>
#include <string.h>

using namespace std;

#define N 5

int arr[N][N], temp_arr[N][N];

void init(){
    
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
      
            arr[i][j] = i*5 + j+1;
            
}

void print_arr(){
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout.width(2);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
}

int main()
{
    init();
    
    print_arr();
    
    // 배열 90도 회전
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            temp_arr[i][j] = arr[N - j -1][i];
    
    // 배열 값 복사
    memmove(arr, temp_arr, sizeof(arr));
    
    print_arr();
}
