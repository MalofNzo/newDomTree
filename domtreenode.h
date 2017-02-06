//
// Created by 江涛 on 2017/2/5.
//
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <fstream>
#ifndef NEWDOMTREE_DOMTREENODE_H
#define NEWDOMTREE_DOMTREENODE_H
using namespace std;
struct domtreenode{
    string nodeName;
    string nodeText;
    string attribute;
    vector<domtreenode*> childNode;
};

#endif //NEWDOMTREE_DOMTREENODE_H
