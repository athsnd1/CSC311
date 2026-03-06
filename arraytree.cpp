#include<iostream>
#include<vector>
#include<string>
using namespace std;

class arrayTree{
    
    
    public:
    vector<string> tree;
        arrayTree(int size){
            tree.resize(size,"null");
        }
    
    void setRoot(string val){
        if(tree.empty()){
            cout<<"Tree is empty"<<endl;
            return;
        }else{
            tree[0] = val;
        }
    }

    void setLeftChild(string val, int parentIndex){
        if(parentIndex >= tree.size()){
            cout<<"Parent index greater than tree size"<<endl;
            return;
        }
        int idx = 2 * parentIndex + 1;
        if(idx > tree.size()){
            cout<<"Tree is full";
            return;
        }
        if(tree.empty()){
            cout<<"Empty tree"<<endl;
            return;
        }
        tree[idx] = val;
        
    }

    void setRightChild(string val, int parentIndex){
        if(parentIndex >= tree.size()){
            cout<<"Parent index greater than tree size"<<endl;
            return;
        }
        int idx = 2 * parentIndex + 2;
        if(idx >= tree.size()){
            cout<<"Tree is full";
            return;
        }
        if(tree.empty()){
            cout<<"Empty tree"<<endl;
            return;
        }
        tree[idx] = val;
    }

};

int main(){
    arrayTree tree(10);
    tree.setRoot("A");
    tree.setLeftChild("B",0);
    tree.setRightChild("C",0);
    tree.setLeftChild("D",1);
    tree.setRightChild("E",1);
    tree.setLeftChild("F",2);
    tree.setRightChild("G",2);

    cout<<"Diagrammatic view of the Binary tree:"<<endl;
    cout<<"                        ["<<tree.tree[0]<<"] "<<endl;
    cout<<"                      /"<<"    "<<" \\"<<endl;
    cout<<"                     /"<<"      "<<" \\"<<endl;
    cout<<"                   ["<<tree.tree[1]<<" ]"<<"     "<<"["<<tree.tree[2]<<"]"<<endl;
    cout<<"                   /"<<" \\      /"<<"  \\"<<endl;
    cout<<"                  /"<<"   \\    /"<<"    \\"<<endl;
    cout<<"                 ["<<tree.tree[3]<<"]"<<" "<<"["<<tree.tree[4]<<"]"<<"  "<<"["<<tree.tree[5]<<"]"<<"  "<<"["<<tree.tree[6]<<"]"<<endl;


    return 0;
}