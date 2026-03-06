#include<iostream>
#include<vector>
using namespace std;

vector<Item*> Table(10,nullptr);

struct Item{
    int data;
    int key;
    Item* next;
};

void insert(int data, int key){
    Item* item = (Item*)malloc(sizeof(Item));
    item->data = data;
    item->key = key;

    int hashIndex = key % Table.size();

    if(Table[hashIndex]!=nullptr){
        Table[hashIndex]->next = item;
    }


}

Item* search(int key){
    int hashIndex = key % Table.size();
    
}

int main(){
    return 0;
}