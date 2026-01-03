#include <iostream>

int main()
{
    /**/
    /*arrays are fun
const int size = 10;
int d[size]={};

    for(int i = 0; i<size;++i){
        std::cout<<d[i]<<std::endl;
    }
*/
    const int s = 5;
    const int c = 8;
    int a[s][c]={{},{},{5,1,1,1,2},{},{}};

    for(int i = 0; i<s;++i){
        for(int j = 0; j<c;++j){
            std::cout<<a[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}