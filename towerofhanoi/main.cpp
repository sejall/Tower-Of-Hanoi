#include <stdio.h>

using namespace std;

void towerofhanoi(int n,char beg,char aux,char ends )
{
    if(n==1)
        {printf("Move disk 1 from %c to %c\n",beg,ends);
        return;
        }
    towerofhanoi(n-1,beg,ends,aux);
    printf("Move disk %d from %c to %c\n",n,beg,ends);
    towerofhanoi(n-1,aux,beg,ends);
    return;
}
int main()
{
    int n=4;
    towerofhanoi(4,'A','B','C');
    return 0;
}
