#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here

int treeHeight(Node* root){
	if(root == nullptr)
		return 0;

	int leftHeight = treeHeight(root->left);
	int rightHeight = treeHeight(root->right);

    int maxHeight = leftHeight > rightHeight ? leftHeight: rightHeight;
	return maxHeight+1;
}

bool equalPaths(Node * root)
{
    // Add your code below
    if(root == nullptr)
        return true;
    int leftHeight = treeHeight(root->left);
	int rightHeight = treeHeight(root->right);
    if((leftHeight == 0 && rightHeight == 1) || (leftHeight == 1 && rightHeight == 0))
        return true;
    return leftHeight == rightHeight;

}

