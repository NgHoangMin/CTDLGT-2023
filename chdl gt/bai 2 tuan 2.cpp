#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *next;
};

node *createNode(int x){
	node *tmp = new node;
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

node *addElement(node *p , int x){
	node *tmp = createNode(x);
	p->next = tmp;
	return tmp;
}

void printList(node *l){
	node *p = l;
	while (p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
int getElement(node *head, int index){
    node *p = head;
    for (int i = 0 ; i < index - 1 ; i++){
        p = p->next;
    }
    return p->data;
}
int main(){
	int n , x;
	cin >> n; cin >> x;
	node *l = createNode(x);
	node *p = l;
	for (int i = 1 ; i < n ; i++){
		cin >> x;
		p = addElement(p , x); 
	}
	printList(l);
	int k;
	cin >> k;
	cout << getElement(l , k);
}
