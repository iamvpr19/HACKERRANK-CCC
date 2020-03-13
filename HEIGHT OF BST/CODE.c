#include <stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
 
struct node* newnode(int element);
struct node* insert(struct node* root, int data);
//void inorder(struct node*root);
 
 
int main(){
	int num,data;
	  struct node *root;
	  root=NULL;
	scanf("%d", &num);              			// Reading input from STDIN
	//printf("Input number is %d.\n", num);       // Writing output to STDOUT
	
	
	for(int i=0;i<num;i++)
	{
	    
	    scanf("%d", &data);
        root= insert(root,data);
	    
	    
	}
	
	//printf("hello");
	printf("%d",height(root));
	
}
 
 
struct node* newNode(int element)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
    temp->left=temp->right=NULL;
    return temp;
}
 
struct node* insert(struct node* root, int data)
{
    if (root == NULL)    //If the tree is empty, return a new,single node
        return newNode(data);
    else
    {
        //Otherwise, recur down the tree 
        if (data <= root->data)
            root->left  = insert(root->left, data);
        else
            root->right = insert(root->right, data);
        //return the (unchanged) root pointer 
        return root;
    }
}
 
int height(struct node* root)
{
    
   if (root == NULL)  
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        int left = height(root->left);  
        int right = height(root->right);  
      
        /* use the larger one */
        if (left > right)  
            return(left + 1);  
        else return(right + 1);  
    }  
    
}
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 
 
// Write your code here
