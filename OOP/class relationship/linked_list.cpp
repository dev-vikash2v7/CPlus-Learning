#include <iostream>
using namespace std;
int main(){
    //insert element
    struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = NULL;
struct node *temp = head;
while(temp->next != NULL){
  temp = temp->next;
}
temp->next = newNode;

//delete
// struct node* temp = head;
// while(temp->next->next!=NULL){
//   temp = temp->next;
// }
// temp->next = NULL;
    return 0;
}

