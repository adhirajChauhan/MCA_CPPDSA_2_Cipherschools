#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL; 
    }
};

void printLevelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout << node->data << " ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }

        else if(!q.empty()){
            q.push(NULL);
        }

    }
}

int KLevelSum(Node* root, int k){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level,sum = 0;

    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            if(level==k){
                sum += node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }

        else if(!q.empty()){
            q.push(NULL);
            level++;
        }

    }
    return sum;
}

int countNodes(Node* root){
    if(root == NULL) return 0;
    return countNodes(root->left)+countNodes(root->right)+1;
}

int sumOfNodes(Node* root){
    if(root == NULL) return 0;
    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}

int calHeight(Node* root){
    if(root ==NULL) return 0;
    // int leftHeight = calHeight(root->left);
    // int rightHeight = calHeight(root->right);

    return max(calHeight(root->left), calHeight(root->right)) + 1;

}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);


}