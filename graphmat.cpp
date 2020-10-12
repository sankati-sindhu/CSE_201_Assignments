/*==============================|-problem statement-|==============================*/
/*
   Represent a graph using adjacency matrix.
*/
/*===================================|-solution-|===================================*/
#include <iostream>

using namespace std;

int main(){

    int V;
    cout<<"Number of vertices in the graph \n";
    cin>>V;

    int M[3][3] = {0};

    int start, end, weight;
    for(int i =0;i<V;i++){
        for(int j =0;j<V;j++){
            M[i][j] = 0;
        }
    }
    cout<<"enter edges . to quit press -1\n";
    while(1){

        cin>>start;
        if(start == -1){
            break;
        }

        cin>>end>>weight;
        M[start][end] = weight;
        M[end][start] = weight;
    }
    cout<<"the graph is: \n";
    for(int i =0;i<V;i++){
        for(int j =0;j<V;j++){
            cout<<M[i][j]<<" ";

        }
        cout<<"\n";
    }

    return 0;


}
/*==================================|-sample output-|=================================*/
/*
Number of vertices in the graph 
4
enter edges . to quit press -1
0 2 1
1 3 4
2 1 8
-1
the graph is: 
0 0 1 0 
0 0 8 4 
4 8 0 0 
0 4 0 0 
*/
