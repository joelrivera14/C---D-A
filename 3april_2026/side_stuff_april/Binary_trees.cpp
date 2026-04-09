#include <iostream>

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
    std::cout << node->val << "\n";
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
    std::cout << node->val << "\n";
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
    std::cout << node->val << "\n";
    return;
}

int main()
{
    return 0;
}