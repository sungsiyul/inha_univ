#include "binarySearchtree.h"           //binarySearchtree.h의 기능 사용 가능

int main() { 
    BinarySearchTree<int> tree;     //tree 생성

    //원하는 개수의 노드를 입력하고 그 element를 입력하는 반복문
    int n;
    cout << "원하는 node의 개수 : ";
    cin >> n;
    cout << "node의 element 입력" << endl;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        tree.insert(a);
    }
    cout << endl;

    //3가지 traversal에 의한 tree 출력
    tree.preorder();
    tree.inorder();
    tree.postorder();
    cout << endl;

    //16을 가진 노드 제거 후 3가지 traversal에 의한 tree 출력
    cout << "Remove node with a element of 16 ..." << endl;
    tree.remove(16);
    tree.preorder();
    tree.inorder();
    tree.postorder();
    cout << endl;

    //21을 가진 노드 삽입 후 3가지 traversal에 의한 tree 출력
    cout << "Insert node with a element of 21 ..." << endl;
    tree.insert(21);
    tree.preorder();
    tree.inorder();
    tree.postorder();
    cout << endl;

    cout << "12180626 성시열" << endl;
    return 0;
}