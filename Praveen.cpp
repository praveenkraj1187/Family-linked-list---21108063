#include<bits/stdc+
using namespace std;

struct node{
int age;
string name;
node *next;
node *prev;
node(string s, int x){
    name=s;
    age=x;
    prev = NULL;
    next = NULL;
}
};

void printtheLL(node *head){
    while(head!=NULL) {
        cout<<head->name<<"-"<<head->age<<" ";
        head=head->next;
    }

}

int main(){
    node *father=new node("RAM LAKHAN RAM",45);
    node *mother=new node("GEETA DEVI",43);
    node *myself=new node("PRAVEEN KUMAR",20);
    node *sister=new node("PRIYA KUMARI",16);
    node *brother=new node("PRABHAT KUMAR",14);

    node *head=father;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=myself;
    myself->prev=mother;
    myself->next=sister;
    sister->prev=myself;
    sister->next=brother;
    brother->next=NULL;
    brother->prev=sister;

    printtheLL(head);

    return 0;
}+.h>