#include <iostream>
#include <vector>
#include <list>

using namespace std;
const int N=4;

int main() {
    vector <list<int> > adjList(N);
    adjList[0].push_back(1);
    adjList[0].push_back(2);

    adjList[1].push_back(2);
    adjList[1].push_back(0);

    adjList[2].push_back(0);
    adjList[2].push_back(1);
    adjList[2].push_back(3);

    adjList[3].push_back(2);
     int c=0;
    for (vector<list<int> >::iterator i=adjList.begin(); i !=adjList.end(); ++i){

        cout<<"vertices connected to node "<<c <<" are ";

        list<int> li = *i;
        for(list<int>::iterator iter = li.begin(); iter!= li.end(); ++iter){

            cout<<*iter<<" ";
        }
        cout<<endl;
        c++;
    }


}
