#include <iostream>
#include <unordered_map>
#include <vector>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

void dfs(TreeNode *node)
{
    if (node == nullptr)
    {
        return;
    }
    dfs(node->left);
    dfs(node->right);
    return;
}

void preorderDfs(TreeNode *node)
{
    if (node == nullptr)
    {
        return;
    }
    std::cout << node->val << " ";
    preorderDfs(node->left);
    preorderDfs(node->right);
    return;
}

void inorderDfs(TreeNode *node)
{
    if (node == nullptr)
    {
        return;
    }
    inorderDfs(node->left);
    std::cout << node->val << " ";
    inorderDfs(node->right);
    return;
}

void postorderDfs(TreeNode *node)
{
    if (node == nullptr)
    {
        return;
    }
    postorderDfs(node->left);
    postorderDfs(node->right);
    std::cout << node->val << " ";
    return;
}

int main()
{
    TreeNode *root = new TreeNode(0);
    TreeNode *lSide = new TreeNode(1);
    TreeNode *rSide = new TreeNode(2);
    root->left = lSide;
    root->right = rSide;

    preorderDfs(root);
    std::cout << "\n";
    inorderDfs(root);
    std::cout << "\n";
    postorderDfs(root);
    std::cout << "\n";

    return 0;
}