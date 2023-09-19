#include <bits/stdc++.h>

//Vector manipulation



void some_function(vector < int > v) { //very bad, copy is created
}

void some_function(const vector < int > & v) { // OK  //const added - can't modify vector
 }
 
 void modify_vector(vector < int > & v) { // OK  //can change vector
  v[0]++;
}


struct point {
  double x, y;

  // … 

  // Declare operator < taking precision into account
  bool operator < (const point & p) const {
    if (x < p.x - epsilon) return true;
    if (x > p.x + epsilon) return false;
    if (y < p.y - epsilon) return true;
    if (y > p.y + epsilon) return false;
    return false;
  }
};


vi D(N, 987654321);
// distance from start vertex to each vertex 

priority_queue < ii, vector < ii > , greater < ii > > Q;
// priority_queue with reverse comparison operator,
// so top() will return the least distance
// initialize the start vertex, suppose it’s zero
D[0] = 0;
Q.push(ii(0, 0));

// iterate while queue is not empty
while (!Q.empty()) {

  // fetch the nearest element
  ii top = Q.top();
  Q.pop();

  // v is vertex index, d is the distance
  int v = top.second, d = top.first;

  // this check is very important
  // we analyze each vertex only once
  // the other occurrences of it on queue (added earlier)
  // will have greater distance
  if (d <= D[v]) {
    // iterate through all outcoming edges from v
    tr(G[v], it) {
      int v2 = it - > first, cost = it - > second;
      if (D[v2] > D[v] + cost) {
        // update distance if possible
        D[v2] = D[v] + cost;
        // add the vertex to queue
        Q.push(ii(D[v2], v2));
      }
    }
  }
}



int main()
{
    int a=10;
    int b=5;
    cout<<__gcd(a,b);  // returns the greates common devision of two ints
    
    vector < int > v1;
    vector < int > v2;
    
    v1.resize(v1.size() + v2.size());
    copy(all(v2), v1.end() - v2.size()); //copy all v2 elements after v1 elements
    int sum = accumulate(all(v1), 0);
    long long sum = accumulate(all(v1), (long long) 0);
    
    set< point >
    map< point, string >
    
    
    //strings
    string s = “hello”;
    string s1 = s.substr(0, 3), // “hel”   ne ukljucuje end indeks
}




typedef vector< int > vi;
typedef vector< vi > vvi;

int N; // number of vertices
vvi graph; 
vi V; // V is a visited flag 

void dfs(int i) {
  if (!V[i]) {
    V[i] = true;
    for_each(all(W[i]), dfs); //‘for_each’ calls the specified function for each element in range
  }
}

bool check_graph_connected_dfs() {
  int start_vertex = 0;
  V = vi(N, false); //whole visited vector array is false
  dfs(start_vertex);
  return (find(all(V), 0) == V.end()); //searching for at least one zero in V, by means of a single call to find().
}
