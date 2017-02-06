
#include "domtreenode.h"
using namespace std;
string readhtml(string filename);
domtreenode* createDomTree(string html);
int main() {
    createDomTree("aa");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
string readhtml(string filename){
    string output = "";
    char buffer[512];
    ifstream in;
    in.open(filename);
    if(!in.is_open()){
        cout<<"open file error."<<endl;
        exit(0);
    }
    while (!in.eof()){
        in>>buffer;
        output += buffer;
    }
    in.close();
    return output;
}
domtreenode* createDomTree(string html){
    domtreenode *father;
    father = new domtreenode;
    return father;//NULL
}

