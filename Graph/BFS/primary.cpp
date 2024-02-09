/*bfs , level wise print , path print*/
#include <bits/stdc++.h>
using namespace std;
vector<int> v[100005];
bool vis[100005];
int level[100005];
int parent[100005];

void bfs(int s){
    vis[s] = true;
    level[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int ele = q.front();
        q.pop();

        for(int child : v[ele]){
            if(!vis[child]){
                vis[child] = true;
                level[child] = level[ele] + 1;
                parent[child] = ele;
                q.push(child);
            }
        }
    }
}


int main() {

    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }


    int src, dest;
    cin >> src >> dest;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(src);

    int z = dest;
    vector<int> path;
    while(z != -1){
        //cout << z << " ";
        path.push_back(z);
        z = parent[z];
    }

    reverse(path.begin(),path.end());
    for(int x : path)
        cout << x << " ";

    return 0;
}
