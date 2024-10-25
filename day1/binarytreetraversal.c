#include <stdio.h>
#include <stdlib.h>
typedef struct BinaryTreeNode{
	char data;
	struct BinaryTreeNode *left, *right;
}BTreeNode;

BTreeNode *createNode(char element){
	BTreeNode *temp = (BTreeNode*)calloc(1, sizeof(BTreeNode));
	temp->data = element;
	return temp;
}
void preorderTraversal(BTreeNode *root){
	if(root){
		printf("%c ", root->data);
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
}
void postorderTraversal(BTreeNode *root){
	if(root){
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		printf("%c ", root->data);
	}
}
void inorderTraversal(BTreeNode *root){
	if (root){
		inorderTraversal(root->left);
		printf("%c ", root->data);
		inorderTraversal(root->right);
	}
}

int main(){
	BTreeNode *root = createNode('A');
	root->left = createNode('B');
	root->right = createNode('C');
	root->left->left = createNode('D');
	root->left->right = createNode('E');
	root->right->left = createNode('F');
	root->right->right = createNode('G');
	root->left->left->left = createNode('H');
	root->left->left->right = createNode('I');
	root->right->left->right = createNode('J');
	printf("Pre order : ");
	preorderTraversal(root);
	printf("\n");
	printf("Post Order : ");
	postorderTraversal(root);
	printf("\n");
	printf("Inorder : ");
	inorderTraversal(root);
	return 0;
}