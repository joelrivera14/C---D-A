#include <iostream>
#include <queue>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};
/* DFS: uses a stack under the hood
   BFS: uses a queue
*/
void printAllNodes(TreeNode* root);
int main()
{
    TreeNode* rootNode = new TreeNode(0);
    TreeNode* first = new TreeNode(1);
    TreeNode* second = new TreeNode(2);
    TreeNode* third = new TreeNode(3);
    TreeNode* fourth = new TreeNode(4);
    TreeNode* fifth = new TreeNode(5);
    rootNode->left = first;
    rootNode->right = second;
    first->left = third;
    first->right = fourth;
    second->left = fifth;
    printAllNodes(rootNode);
    return 0;
}

void printAllNodes(TreeNode* root){
    std::queue<TreeNode*> queue;
    queue.push(root);
    while(!queue.empty()){
        int nodesOnLvl = queue.size();
        for(int i = 0; i < nodesOnLvl; ++i){
            TreeNode* node = queue.front();
            queue.pop();
            std::cout<<node->val<<" ";
            if(node->left) queue.push(node->left);
            if(node->right) queue.push(node->right);
        }
    }
}
