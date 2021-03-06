#ifndef NODE_H
#define NODE_H

#include <vector>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

class node
{
    friend ostream &operator <<(ostream &, const node &);
private:
    int label;
    int kShell;
    int degree = 0;
    int result;
    vector<int> connectedTo;
public:
    void addEdge(int i);
    node();
    node(int label, int sizeOfNodes);
    bool noEdge();
    bool deleteEdge(int i);
};

ostream &operator <<(ostream &output, const node &n);

#endif // NODE_H
