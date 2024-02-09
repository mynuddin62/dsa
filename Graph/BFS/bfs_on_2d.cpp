/*bfs on 2d */
#include <bits/stdc++.h>
using namespace std;
bool vis[105][105];
int n, m;
char a[105][105];
int dis[105][105];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j){
    return 0 <= i && i < n && 0 <= j && j < m;
}
void bfs(int si, int sj) {
    vis[si][sj] = true;
    dis[si][sj] = 0;
    queue<pair<int,int>> q;
    q.push({si,sj});
    while(!q.empty()) {
        pair<int,int> pa = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int ci = pa.first + d[i].first;
            int cj = pa.second + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pa.first][pa.second] + 1;
                q.push({ci,cj});
            }
        }
    
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(dis,-1, sizeof(dis));
    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);
    int di, dj;
    cin >> di >> dj;
    cout << dis[di][dj];
    return 0;
}
