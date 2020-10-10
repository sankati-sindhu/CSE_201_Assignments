#include <iostream>

using namespace std;

int main(){

    int V;

    cin>>V;

    int M[3][3] = {0};
    /*int start, end, weight;
    for(int i =0;i<V;i++){
        for(int j =0;j<V;j++){
            M[i][j] = 0;
        }
    }
    while(1){

        cin>>start;
        if(start == -1){
            break;
        }

        cin>>end>>weight;
        M[start][end] = weight;
        M[end][start] = weight;
    }*/
    for(int i =0;i<V;i++){
        for(int j =0;j<V;j++){
            cout<<M[i][j]<<" ";

        }
        cout<<"\n";
    }

    return 0;


}