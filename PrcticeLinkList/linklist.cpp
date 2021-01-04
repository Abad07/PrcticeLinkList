#include<iostream>
using namespace std;

class list {
public:
	int data;
	list* next;
	int key;
	list() {
		data = 0;
		next = NULL;
		key = 0;

	}

};

class linkList {
public:
	list* head;
	list* current;
	linkList() {
		head = NULL;
		current = NULL;
	}
	void addNodeAtEnd(int num) {
		list* n = new list();
		n->data = num;
		n->key =n-> key + 1;

		if (head == NULL) {
			head = n;
			current = n;
		}
		else {
			current->next = n;
			current = n;
		}
	}
	void deleteNodeFromStart() {
		if (head == NULL) {
			cout << "No Data Found" << endl;
		}
		else {
			list* temp;
			temp = head->next;
			head = temp;
		}
	}

	void deleteAnyNode(int nodeToDelete) {
		if (head == NULL) {
			cout << "No value to delete" << endl;
		}
		else {
			list* f;
			list* b;
			f = head;
			b = head;
			while (f->next != NULL) {
				if (f->key == nodeToDelete) {
					for (int i = 0; i < nodeToDelete - 1; i++) {
						b = b->next;
					}
					b->next = f->next;
					goto done;
				}
				else {
					f = f->next;
				}
			}
			if (f->key == nodeToDelete) {
				deleteNodeFromLast();
			}

		done:



		}


	}
	void showAllElements() {
		list* temp = head;
		while (temp->next != NULL) {
			cout << temp->data << endl;
			temp = temp->next;
		}
		cout << temp->data << endl;

	}

};

int main() {
	linkList obj;


	for (int i = 0; i < 5; i++) {
		obj.addNodeAtEnd(i);
	}
	obj.showAllElements();



}