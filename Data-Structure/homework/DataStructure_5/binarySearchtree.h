#pragma once            //������� �ߺ� ���� ����
#include "binaryTree.h" //binaryTree.h�� ��� ��� ��� ����.

template <typename T>   //�ڷ��� ��� T�� ���
class BinarySearchTree : public BinaryTree<T> { //BinarySearchTree Ŭ���� ����, BinaryTree�� ��� ����. 
public:                                      //���⼭ Binary Search Tree�� ������ left_child->element <= parent->element <= right->element�� �����ش�.
    BinarySearchTree() {    //������
    }
    
    ~BinarySearchTree() {   //�Ҹ���
    }
 
    void inserter(Node<T>* node, T key) {   //inserter �Լ�, getRoot()�� ���� �Ѹ� ���� �޾ƿ�
        Node<T>* newNode = new Node<T>(key, nullptr, nullptr, nullptr); //���� ������ ���� element�� �� ���ο� ��带 �����ϰ� �������� ��� nullptr�� �Ѵ�.

        if (key == node->getEle()) {        //���� �����ϰ� ���� ���� �Ѹ������ ���� ���� ���
            return;                             //�� �Լ��� Ż���Ѵ�.
        }
        else if (key < node->getEle()) {    //���� key ���� �Ѹ�(�θ�) ��庸�� ���� ��� ��
            if (node->getLeft() == NULL) {      //�Ѹ�(�θ�) ����� left_child�� ����ִٸ�
                node->setLeft(newNode);             //left_child�� ���� ������ newNode�� ��������ش�.
            }
            else {                              //�Ѹ�(�θ�) ����� left_child�� ������� �ʴٸ�
                inserter(node->getLeft(), key);     //�� ������� ���� left_child ����� �θ���� �Ͽ� inserter�Լ��� ���ȣ���ϰ�, �����ϰ� ���� ���� �Բ� �Ѱ��ش�. 
            }
        }
        else if (key > node->getEle()) {    //���� key ���� �Ѹ�(�θ�) ��庸�� Ŭ ��� ��
            if (node->getRight() == NULL) {     //�Ѹ�(�θ�) ����� right_child�� ����ִٸ�
                node->setRight(newNode);            //right_child�� ���� ������ newNode�� ��������ش�.
            }
            else {                              //�Ѹ�(�θ�) ����� right_child�� ������� �ʴٸ�
                inserter(node->getRight(), key);    //�� ������� ���� right_child ����� �θ���� �Ͽ� inserter�Լ��� ���ȣ���ϰ�, �����ϰ� ���� ���� �Բ� �Ѱ��ش�. 
            }
        }
    }

    void remover(Node<T>* parentNode, Node<T>* deleteNode) { //remover �Լ� ����, ����� ���� ����� �θ�� �� ��带 �޾ƿ�
        //1. ������� ��尡 external node�� ��.
        if (deleteNode->isExternal()) {             
            if (deleteNode == this->getRoot()) {    //�� �߿��� ������� ��尡 �Ѹ����?
                this->setRoot(nullptr);             //ROOT����Ǹ� nullptr�� �ʱ�ȭ ��Ű�鼭 tree�� ���ش�.
            }
            else {                                  //������� ��尡 �Ѹ��� �ƴ϶��
                if (parentNode->getLeft() == deleteNode) {  //�� �߿��� ������� ��尡 �θ����� ���� �����?
                    parentNode->setLeft(nullptr);           //���� ��带 nullptr�� �ʱ�ȭ �����ְ�
                }
                else if (parentNode->getRight() == deleteNode) {//���߿��� ������ �̶��
                    parentNode->setRight(nullptr);              //������ ��带 nullptr�� �ʱ�ȭ ��Ų��.
                }
            }
        }
        //2. ������� ����� left_child Ȥ�� right_child �� �ϳ��� NULL�� ��.
        else if (deleteNode->getLeft() == NULL || deleteNode->getRight() == NULL) {
            Node<T>* childNode = (deleteNode->getLeft() != NULL) ? deleteNode->getLeft() : deleteNode->getRight();
            //������� ����� left_child�� NULL�� �ƴ� ��(���� ���� ��)�� �� left_child�� ��带, �ƴϸ� right_child�� ��带 childNode�� �Ͽ� �����Ѵ�.
            if (deleteNode == this->getRoot()) {            //���� ������� ��尡 �Ѹ����?
                this->setRoot(childNode);                   //�Ѹ� ��带 childNode�� ��ü�Ѵ�.
            }
            else {                                          //������� ��尡 �Ѹ��� �ƴ� ��
                if (parentNode->getLeft() == deleteNode) {  //���� ������� ��尡 �θ��� ���� �����
                    parentNode->setLeft(childNode);         //�� �θ��� ���� ��带 childNode�� ��ü�Ѵ�.
                }
                else if (parentNode->getRight() == deleteNode) {//���� ������� ��尡 �θ��� ������ �����
                    parentNode->setRight(childNode);            //�� �θ��� ������ ��带 childNode�� ��ü�Ѵ�.
                }
            }
        }

        //3. ������� ��尡 internal ����� ��(left_child�� right_child�� ��� ���� ����)
        //* �� ��쿡�� ������� ��带 �������� �� �� ���������� �� �� �� �������� �������� �ִ� external node�� ���� �ٲ� �� �� external node�� �����Ѵ�.
        else {
            Node<T>* temp = deleteNode; //������� ��带 temp��� ���� ����
            Node<T>* down_temp = deleteNode->getRight();    //������� ����� right_child�� down_temp��� ���� ����
            while (down_temp->getLeft() != NULL) {  //���� �ѹ� ���������� �� �� �������� �� �������鼭 �װ��� NULL�� �� ������ �ݺ����� �ݺ�.
                temp = down_temp;                   //temp�� �� ĭ �Ʒ� ���� temp�� �־��ְ�
                down_temp = down_temp->getLeft();   //down_temp�� ��ĭ �� �������� ������ ���� �־���.  //**�̰��� �������� ��ĭ ������ �� ���������� �� �������鼭 �ݺ��ϴ��� BST���ǿ� �������� �ʴ´�.
            }                                       //�̸� �ݺ������� �ϴٺ��� down_temp�� left_child�� NULL���̰� external node�� ���̴�.
            
            if (down_temp == temp->getLeft()) {         //���� �� down_temp�� �θ��� ���ʿ� �ִٸ�
                temp->setLeft(down_temp->getRight());   //�� down_temp ��ġ�� ���� down_temp�� right ���� �ȴ�.
            }
            else {                                      //���� �� down_temp�� �θ��� �����ʿ� �ִٸ�
                temp->setRight(down_temp->getRight());  //�� down_temp ��ġ�� ���� down_temp�� right ���� �ȴ�.
            }

            deleteNode->setEle(down_temp->getEle());    //������� ����� ���� down_temp�� ������ �����ϰ�
            deleteNode = down_temp; //������� ��带 down_temp�� �����Ѵ�.
        }
        delete deleteNode;  //���� ������� ��� �� down_temp�� �����Ѵ�.
    }

    void insert(T key) {    //insert�Լ�, �ְ���� ���� key�� ����     //**����ڰ� ��� �� insert�� �ְ� ���� ���� ���ϰ� ���� �� �ְ� �ϴ� �������̽� ����.
        if (this->isEmpty()) {    //tree�� ����ִٸ�
            Node<T>* newNode = new Node<T>(key, nullptr, nullptr, nullptr); //key���� element�� ���� ���ο� ��带 �����Ѵ�.
            this->setRoot(newNode);     //�� ���ο� ���� ROOT�� �����Ͽ� ���ο� tree�� �����Ѵ�.
        }
        else {               //tree�� �����Ѵٸ�
            inserter(this->getRoot(), key);    //inserter�� ȣ���ϰ� �Ѹ����� ������ ���� �Ѱ���.
        }
    }
    
    void remove(T key) {    //remove�Լ�, �����ϰ� ���� ���� key�� ����     //**����ڰ� ��� �� remove�� �ְ� ���� ���� ���ϰ� ���� �� �ְ� �ϴ� �������̽� ����.
        if (this->isEmpty()) {                          //���� tree�� ����ִٸ�
            cout << "Tree�� ����ֽ��ϴ�." << endl;     //��¹� ���
            return;                                     //�Լ� Ż��
        }

        //�׷��� �ʴٸ�
        Node<T>* parentNode = nullptr;          //parentNode�� �����ϰ� nullptr�� �ʱ�ȭ�Ѵ�.
        Node<T>* deleteNode = this->getRoot();  //deleteNode�� �����ϰ� tree�� �Ѹ� ���� �����Ѵ�.
        while (deleteNode != NULL && deleteNode->getEle() != key) { //deleteNode ���� NULL�� �ǰų� ���� ����� ���� ���� �� ������ �ݺ��Ѵ�.
            parentNode = deleteNode;        //deleteNode�� parentNode�� �����ϰ�
            //����� ���� ���� parentNode�� ������ ���� �� parentNode�� left_child ���, �׷��� ������ right_child�� ��尡 deleteNode�� �ȴ�.
            deleteNode = (key < parentNode->getEle()) ? parentNode->getLeft() : parentNode->getRight();
        }   //�̸� �ݺ��ϴٺ��� ��ĭ�� �Ʒ��� �������鼭 �ᱹ ����� ���� ���� �����ϰų� ���� ���� ��� external ��忡 �����Ѵ�.

        if (deleteNode == NULL) {   //���� ���� ���� external ��忡 �������� ���
            cout << "���� Tree�� �������� �ʽ��ϴ�." << endl;  //��¹� ���
            return;                                            //�Լ� Ż��
        }
        else {                      //���� ����� ���� ���� �������� ���
            remover(parentNode, deleteNode);    //����� ���� ���� parent�� ����� ���� �Լ��� remover�Լ��� �Ѱ��ش�.
        }
    }
};