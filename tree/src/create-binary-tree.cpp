#include "tree.h"
#include "str.h"

TreeNode* createBinaryTree(const std::string& input)
{
    std::vector<std::string> nodes = split(input, ',');

    if(nodes.empty() || nodes.front() == "null") {
        return nullptr;
    }

    auto root = new TreeNode(std::stoi(nodes.front()));

//    int pos = 0;
//    for(int len = 1; len < nodes.size(); len *= 2) {
//        std::vector<int> levelNodes;
//
//
//        pos += len;
//
//
//    }

    return root;
}

