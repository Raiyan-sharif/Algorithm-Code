#include <bits/stdc++.h>
using namespace std;
#define MAX 100000 //maximum node
vector<int>edges[MAX];
vector<int>cost[MAX]; //parallel vector to store costs;
int main()
{
int N,E,i,j=1;

scanf("%d%d",&N,&E);
//int arr[E]={0};
int max=0;
for(i=1;i<=E;i++)
{
   int x,y;
   scanf("%d%d",&x,&y);

   if(x==y){
        edges[x].push_back(y);
   //edges[y].push_back(x);
   cost[x].push_back(1);
   cost[y].push_back(1);

   }
   else{
   edges[x].push_back(y);
   edges[y].push_back(x);
   cost[x].push_back(1);
   cost[y].push_back(1);}
  // arr[j]=edges[x][0];
   j++;

}

for(int i=1;i<=N;i++)
{

      int size=edges[i].size();
      printf("%d->",i);
     for(int k=0; k <size; ++k)
     {
         printf("%d ",edges[i][k]);
     }

     printf("\n");


}
return 0;
}
/*
6 8
1 2
1 4
2 4
2 5
4 5
5 3
3 6
6 6
*/
