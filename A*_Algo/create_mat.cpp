#include <iostream>

using namespace std;

int main(){
    
    int Mat[5][5];

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            Mat[i][j] = 0;
            // cout<<Mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    Mat[2][3] = 1; 
    Mat[2][4] = 1;
    Mat[3][4] = 1;
    Mat[1][1] = Mat[1][2] = Mat[2][1] = Mat[1][4] = 1 ;

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            
            cout<<Mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}