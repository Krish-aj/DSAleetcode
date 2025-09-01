/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// used a different function to do traversal because in single function while recursion the value will change each time in array and return size
 void pre(struct TreeNode* root, int *result, int* returnSize){
    if(root!=NULL){
    
    result[(*returnSize)++]=root->val;         // stores value in array
    pre(root->left,result,returnSize);       // these both do the traversal 
    pre(root->right,result,returnSize);

    }
 }
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    int *result=(int*)malloc(100*sizeof(int));      
    pre(root,result,returnSize);
    return result;                      // finally we can return teh array ; 
   
}

