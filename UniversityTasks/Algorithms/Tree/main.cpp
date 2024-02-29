#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int value) : value(value), left(nullptr), right(nullptr) {}
};

Node* createTree(int left, int right, const vector<int>& numList) {
    if (left > right) {
        return nullptr;
    }

    int mid = left + (right - left) / 2;
    Node* node = new Node(numList[mid]);

    node->left = createTree(left, mid - 1, numList);
    node->right = createTree(mid + 1, right, numList);

    return node;
}

Node* minValueNode(Node* node) {
    Node* current = node;

    // Loop to find the leftmost leaf
    while (current && current->left != nullptr) {
        current = current->left;
    }

    return current;
}

Node* deleteNode(Node* root, int value) {
    if (root == nullptr) {
        return root;
    }

    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->value) {
        root->right = deleteNode(root->right, value);
    }
    else {
        if (root->left == nullptr) { // only one
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) { // only one
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = minValueNode(root->right); // 2 children

        root->value = temp->value; // we switch

        root->right = deleteNode(root->right, temp->value); //  delete the node thats moved up
    }

    return root;
}

void preorderTraversal(Node* node) { // top - left - right
    if (node == nullptr) return;

    cout << node->value << " ";

    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void inorderTraversal(Node* node) { // left - top - right
    if (node == nullptr) return;

    inorderTraversal(node->left);

    cout << node->value << " ";

    inorderTraversal(node->right);
}

void postorderTraversal(Node* node) { // left - right - top
    if (node == nullptr) return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);

    cout << node->value << " ";
}

void binarySearchTraversal(const vector<int>& oldNumList, vector<int>& newNumList, int left, int right) {
    if (left > right) {
        return;
    }

    int mid = left + (right - left) / 2;

    newNumList.push_back(oldNumList[mid]);

    binarySearchTraversal(oldNumList, newNumList, left, mid - 1);

    binarySearchTraversal(oldNumList, newNumList, mid + 1, right);
}

int main() {
    vector<int> numList = { 0, 1, 2, 3, 4, 7, 8, 9, 12 };
    vector<int> binarySortedNumList = {};

    binarySearchTraversal(numList, binarySortedNumList, 0, numList.size() - 1);

    for (int num : binarySortedNumList) {
        cout << num << " ";
    }

    cout << endl;

    int start = 0;
    Node* topNode = createTree(0, numList.size() - 1, numList);

    inorderTraversal(topNode);


    return 0;
}
