#include <iostream>
using namespace std;
int main (){
    const int ROW = 3;
    const int COL = 4;
    int movie_rating [ROW][COL] //first [row] second[column]
    {
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}
    };
    for(int i = 0; i< ROW; i++){
        for(int j = 0; j < COL; j++){
            cout<<movie_rating[i][j] << " ";
        }
        cout<< endl;
    }
    
    //cout<<"Enter new movie_ratings: "<<endl;
    //cin>>[0][0]>>[0][1]
    
    return 0;
}