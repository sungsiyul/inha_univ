#include "binarySearchtree.h"           //binarySearchtree.h�� ��� ��� ����

int main() { 
    BinarySearchTree<int> tree;     //tree ����

    //���ϴ� ������ ��带 �Է��ϰ� �� element�� �Է��ϴ� �ݺ���
    int n;
    cout << "���ϴ� node�� ���� : ";
    cin >> n;
    cout << "node�� element �Է�" << endl;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        tree.insert(a);
    }
    cout << endl;

    //3���� traversal�� ���� tree ���
    tree.preorder();
    tree.inorder();
    tree.postorder();
    cout << endl;

    //16�� ���� ��� ���� �� 3���� traversal�� ���� tree ���
    cout << "Remove node with a element of 16 ..." << endl;
    tree.remove(16);
    tree.preorder();
    tree.inorder();
    tree.postorder();
    cout << endl;

    //21�� ���� ��� ���� �� 3���� traversal�� ���� tree ���
    cout << "Insert node with a element of 21 ..." << endl;
    tree.insert(21);
    tree.preorder();
    tree.inorder();
    tree.postorder();
    cout << endl;

    cout << "12180626 ���ÿ�" << endl;
    return 0;
}