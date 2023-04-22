#pragma once            //헤더파일 중복 정의 방지
#include "binaryTree.h" //binaryTree.h의 기능 모두 사용 가능.

template <typename T>   //자료형 대신 T를 사용
class BinarySearchTree : public BinaryTree<T> { //BinarySearchTree 클래스 생성, BinaryTree를 상속 받음. 
public:                                      //여기서 Binary Search Tree의 조건인 left_child->element <= parent->element <= right->element를 맞춰준다.
    BinarySearchTree() {    //생성자
    }
    
    ~BinarySearchTree() {   //소멸자
    }
 
    void inserter(Node<T>* node, T key) {   //inserter 함수, getRoot()를 통해 뿌리 값을 받아옴
        Node<T>* newNode = new Node<T>(key, nullptr, nullptr, nullptr); //먼저 삽입할 값을 element로 한 새로운 노드를 생성하고 연결점은 모두 nullptr로 한다.

        if (key == node->getEle()) {        //만약 삽입하고 싶은 값과 뿌리노드의 값이 같을 경우
            return;                             //이 함수를 탈출한다.
        }
        else if (key < node->getEle()) {    //만약 key 값이 뿌리(부모) 노드보다 작을 경우 중
            if (node->getLeft() == NULL) {      //뿌리(부모) 노드의 left_child가 비어있다면
                node->setLeft(newNode);             //left_child에 새로 생성한 newNode를 연결시켜준다.
            }
            else {                              //뿌리(부모) 노드의 left_child가 비어있지 않다면
                inserter(node->getLeft(), key);     //그 비어있지 않은 left_child 노드을 부모노드로 하여 inserter함수를 재귀호출하고, 삽입하고 싶은 값도 함께 넘겨준다. 
            }
        }
        else if (key > node->getEle()) {    //만약 key 값이 뿌리(부모) 노드보다 클 경우 중
            if (node->getRight() == NULL) {     //뿌리(부모) 노드의 right_child가 비어있다면
                node->setRight(newNode);            //right_child에 새로 생성한 newNode를 연결시켜준다.
            }
            else {                              //뿌리(부모) 노드의 right_child가 비어있지 않다면
                inserter(node->getRight(), key);    //그 비어있지 않은 right_child 노드을 부모노드로 하여 inserter함수를 재귀호출하고, 삽입하고 싶은 값도 함께 넘겨준다. 
            }
        }
    }

    void remover(Node<T>* parentNode, Node<T>* deleteNode) { //remover 함수 선언, 지우고 싶은 노드의 부모와 그 노드를 받아옴
        //1. 지우려는 노드가 external node일 때.
        if (deleteNode->isExternal()) {             
            if (deleteNode == this->getRoot()) {    //그 중에서 지우려는 노드가 뿌리라면?
                this->setRoot(nullptr);             //ROOT노드의를 nullptr로 초기화 시키면서 tree를 없앤다.
            }
            else {                                  //지우려는 노드가 뿌리가 아니라면
                if (parentNode->getLeft() == deleteNode) {  //그 중에서 지우려는 노드가 부모노드의 왼쪽 노드라면?
                    parentNode->setLeft(nullptr);           //왼쪽 노드를 nullptr로 초기화 시켜주고
                }
                else if (parentNode->getRight() == deleteNode) {//그중에서 오른쪽 이라면
                    parentNode->setRight(nullptr);              //오른쪽 노드를 nullptr로 초기화 시킨다.
                }
            }
        }
        //2. 지우려는 노드의 left_child 혹은 right_child 중 하나만 NULL일 때.
        else if (deleteNode->getLeft() == NULL || deleteNode->getRight() == NULL) {
            Node<T>* childNode = (deleteNode->getLeft() != NULL) ? deleteNode->getLeft() : deleteNode->getRight();
            //지우려는 노드의 left_child가 NULL이 아닐 때(값이 있을 때)는 그 left_child의 노드를, 아니면 right_child의 노드를 childNode로 하여 생성한다.
            if (deleteNode == this->getRoot()) {            //만약 지우려는 노드가 뿌리라면?
                this->setRoot(childNode);                   //뿌리 노드를 childNode로 대체한다.
            }
            else {                                          //지우려는 노드가 뿌리가 아닐 때
                if (parentNode->getLeft() == deleteNode) {  //만약 지우려는 노드가 부모의 왼쪽 노드라면
                    parentNode->setLeft(childNode);         //그 부모의 왼쪽 노드를 childNode로 대체한다.
                }
                else if (parentNode->getRight() == deleteNode) {//만약 지우려는 노드가 부모의 오른쪽 노드라면
                    parentNode->setRight(childNode);            //그 부모의 오른쪽 노드를 childNode로 대체한다.
                }
            }
        }

        //3. 지우려는 노드가 internal 노드일 때(left_child와 right_child가 모두 값이 있음)
        //* 이 경우에는 지우려는 노드를 기준으로 한 번 오른쪽으로 간 뒤 쭉 왼쪽으로 내려가서 있는 external node와 값이 바꾼 뒤 그 external node를 제거한다.
        else {
            Node<T>* temp = deleteNode; //지우려는 노드를 temp라는 노드로 생성
            Node<T>* down_temp = deleteNode->getRight();    //지우려는 노드의 right_child를 down_temp라는 노드로 생성
            while (down_temp->getLeft() != NULL) {  //이후 한번 오른쪽으로 간 뒤 왼쪽으로 쭉 내려가면서 그것이 NULL이 될 때까지 반복문을 반복.
                temp = down_temp;                   //temp의 한 칸 아래 값을 temp에 넣어주고
                down_temp = down_temp->getLeft();   //down_temp는 한칸 더 왼쪽으로 내려간 값을 넣어줌.  //**이것은 왼쪽으로 한칸 내려간 뒤 오른쪽으로 쭉 내려가면서 반복하더라도 BST조건에 부합하진 않는다.
            }                                       //이를 반복적으로 하다보면 down_temp의 left_child는 NULL값이고 external node일 것이다.
            
            if (down_temp == temp->getLeft()) {         //만약 그 down_temp가 부모의 왼쪽에 있다면
                temp->setLeft(down_temp->getRight());   //그 down_temp 위치의 값은 down_temp의 right 값이 된다.
            }
            else {                                      //만약 그 down_temp가 부모의 오른쪽에 있다면
                temp->setRight(down_temp->getRight());  //그 down_temp 위치의 값은 down_temp의 right 값이 된다.
            }

            deleteNode->setEle(down_temp->getEle());    //지우려는 노드의 값을 down_temp의 값으로 지정하고
            deleteNode = down_temp; //지우려는 노드를 down_temp로 지정한다.
        }
        delete deleteNode;  //이후 지우려는 노드 즉 down_temp를 삭제한다.
    }

    void insert(T key) {    //insert함수, 넣고싶은 값을 key에 저장     //**사용자가 사용 시 insert와 넣고 싶은 값을 편하게 넣을 수 있게 하는 인터페이스 역할.
        if (this->isEmpty()) {    //tree가 비어있다면
            Node<T>* newNode = new Node<T>(key, nullptr, nullptr, nullptr); //key값을 element로 가진 새로운 노드를 생성한다.
            this->setRoot(newNode);     //그 새로운 값을 ROOT로 지정하여 새로운 tree를 생성한다.
        }
        else {               //tree가 존재한다면
            inserter(this->getRoot(), key);    //inserter를 호출하고 뿌리값과 삽입할 값을 넘겨줌.
        }
    }
    
    void remove(T key) {    //remove함수, 제거하고 싶은 값을 key에 저장     //**사용자가 사용 시 remove와 넣고 싶은 값을 편하게 넣을 수 있게 하는 인터페이스 역할.
        if (this->isEmpty()) {                          //만약 tree가 비어있다면
            cout << "Tree가 비어있습니다." << endl;     //출력문 출력
            return;                                     //함수 탈출
        }

        //그렇지 않다면
        Node<T>* parentNode = nullptr;          //parentNode를 생성하고 nullptr로 초기화한다.
        Node<T>* deleteNode = this->getRoot();  //deleteNode를 생성하고 tree의 뿌리 노드로 지정한다.
        while (deleteNode != NULL && deleteNode->getEle() != key) { //deleteNode 값이 NULL이 되거나 값이 지우고 싶은 값이 될 때까지 반복한다.
            parentNode = deleteNode;        //deleteNode를 parentNode로 지정하고
            //지우고 싶은 값이 parentNode의 값보다 작을 때 parentNode의 left_child 노드, 그렇지 않으면 right_child의 노드가 deleteNode가 된다.
            deleteNode = (key < parentNode->getEle()) ? parentNode->getLeft() : parentNode->getRight();
        }   //이를 반복하다보면 한칸씩 아래로 내려가면서 결국 지우고 싶은 값에 도착하거나 값이 없을 경우 external 노드에 도착한다.

        if (deleteNode == NULL) {   //만약 값이 없어 external 노드에 도착했을 경우
            cout << "값이 Tree에 존재하지 않습니다." << endl;  //출력문 출력
            return;                                            //함수 탈출
        }
        else {                      //만약 지우고 싶은 값에 도착했을 경우
            remover(parentNode, deleteNode);    //지우고 싶은 값의 parent와 지우고 싶은 함수를 remover함수로 넘겨준다.
        }
    }
};