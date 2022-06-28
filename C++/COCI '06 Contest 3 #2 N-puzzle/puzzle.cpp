#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    char l[10][10];
    int count = 0;
    for (int i=1; i <= 4; i++) {
        cin >> l[i];
    }
    for (int i=1; i<=4; i++) {
        for (int j=0; j<4; j++) {
            if(l[i][j]=='A')if(i!=1 || j!=0)count+=abs(i-1)+abs(j-0);
            if(l[i][j]=='B')if(i!=1 || j!=1)count+=abs(i-1)+abs(j-1);
            if(l[i][j]=='C')if(i!=1 || j!=2)count+=abs(i-1)+abs(j-2);
            if(l[i][j]=='D')if(i!=1 || j!=3)count+=abs(i-1)+abs(j-3);

            if(l[i][j]=='E')if(i!=2 || j!=0)count+=abs(i-2)+abs(j-0);
            if(l[i][j]=='F')if(i!=2 || j!=1)count+=abs(i-2)+abs(j-1);
            if(l[i][j]=='G')if(i!=2 || j!=2)count+=abs(i-2)+abs(j-2);
            if(l[i][j]=='H')if(i!=2 || j!=3)count+=abs(i-2)+abs(j-3);

            if(l[i][j]=='I')if(i!=3 || j!=0)count+=abs(i-3)+abs(j-0);
            if(l[i][j]=='J')if(i!=3 || j!=1)count+=abs(i-3)+abs(j-1);
            if(l[i][j]=='K')if(i!=3 || j!=2)count+=abs(i-3)+abs(j-2);
            if(l[i][j]=='L')if(i!=3 || j!=3)count+=abs(i-3)+abs(j-3);

            if(l[i][j]=='M')if(i!=4 || j!=0)count+=abs(i-4)+abs(j-0);
            if(l[i][j]=='N')if(i!=4 || j!=1)count+=abs(i-4)+abs(j-1);
            if(l[i][j]=='O')if(i!=4 || j!=2)count+=abs(i-4)+abs(j-2);
        }
    }
    cout << count;
    return 0;
}
