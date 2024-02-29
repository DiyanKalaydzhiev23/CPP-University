//#include <iostream>
//
//using namespace std;
//
//struct Node {
//    int value;
//    Node* left;
//    Node* right;
//
//    Node(int value) : value(value), left(nullptr), right(nullptr) {}
//};
//
//Node* createTree(int n) {
//    if (n <= 0) {
//        return nullptr;
//    }
//
//    int leftCount = n / 2;
//    int rightCount = n - leftCount - 1;
//
//    int val;
//    cin >> val;
//
//    Node* node = new Node(val);
//
//    node->left = createTree(leftCount);
//    node->right = createTree(rightCount);
//
//    return node;
//}
//
//int maina() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}
