#include <iostream>
#include <map>
#include "bst.h"
#include "avlbst.h"

using namespace std;


int main(int argc, char *argv[])
{
    // // Binary Search Tree tests
    // BinarySearchTree<int,int> bt;
    // // bt.insert(std::make_pair('0',1));
    // // bt.insert(std::make_pair('1',2));
    // // bt.insert(std::make_pair('2',2));
    // // bt.insert(std::make_pair('3',2));

    // bt.insert(std::make_pair(3, 1.0));
    
	// bt.insert(std::make_pair(4, 1.0));
    // bt.insert(std::make_pair(9, 1.0));
    // bt.insert(std::make_pair(5, 1.0));
    // bt.insert(std::make_pair(10, 1.0));
	// bt.insert(std::make_pair(7, 1.0));
    // bt.insert(std::make_pair(6, 1.0));
    
    // bt.print();

	// bt.remove(5);

    // bt.print();
    
    // // cout << "Binary Search Tree contents:" << endl;
    // // for(BinarySearchTree<char,int>::iterator it = bt.begin(); it != bt.end(); ++it) {
    // //     cout << it->first << " " << it->second << endl;
    // // }
    // //BinarySearchTree<int,int>::iterator it = bt.find(5);

    // // cout << it->first << " " << it->second << endl;
    // // ++it;
    // // cout << it->first << " " << it->second << endl;
    // // ++it;
    // // cout << it->first << " " << it->second << endl;
    // // ++it;
    // // cout << it->first << " " << it->second << endl;
    // // --it;
    // // cout << it->first << " " << it->second << endl;
    // // --it;
    // // cout << it->first << " " << it->second << endl;
    // // --it;

    // // BinarySearchTree<char,int>::iterator it = bt.find('3');
    // // BinarySearchTree<char,int>::iterator it2 = bt.find('2');
    // // cout << it->first << " " << it->second << endl;
    // // cout << it2->first << " " << it->second << endl;
    // // cout << "node swap" << endl;
    // // //bt.nodeSwap(it, it2);
    // // cout << it->first << " " << it->second << endl;
    // // cout << it2->first << " " << it->second << endl;


    // if(bt.find('b') != bt.end()) {
    //     cout << "Found b" << endl;
    // }
    // else {
    //     cout << "Did not find b" << endl;
    // }
    // cout << "Erasing b" << endl;
    // bt.remove('b');

    // AVL Tree Tests
    // AVLTree<char,int> at;
    // at.insert(std::make_pair('a',1));
    // at.insert(std::make_pair('b',2));
    AVLTree<uint16_t, uint16_t> at;

	at.insert(std::make_pair(9, 8));
	at.insert(std::make_pair(4, 159));
    at.insert(std::make_pair(11, 9));
    at.insert(std::make_pair(3, 8));
	at.insert(std::make_pair(5, 159));
    at.insert(std::make_pair(10, 9));
    at.insert(std::make_pair(12, 9));
    at.insert(std::make_pair(2, 9));
    at.insert(std::make_pair(7, 9));

    at.print();

    at.remove(10);
    at.print();

    at.insert(std::make_pair(13, 9));
    at.print();

    at.insert(std::make_pair(6, 9));
    at.print();

    at.remove(9);
    at.print();

    at.insert(std::make_pair(14, 9));
    at.print();

    at.remove(11);
    at.print();
    // AVLNode<uint16_t, uint16_t>* x = static_cast<AVLNode<uint16_t, uint16_t>*>(at.internalFind(1));
    // cout << "Ro:" << x->getKey() << endl;
    // cout << "L:" << x->getLeft() << endl;
    // cout << "R:" << x->getRight() << endl;
    // cout << "P:" << x->getParent()->getKey() << endl;
    // AVLNode<uint16_t, uint16_t>* y = static_cast<AVLNode<uint16_t, uint16_t>*>(at.internalFind(6));
    // cout << "Ro:" << y->getKey() << endl;
    // cout << "L:" << y->getLeft() << endl;
    // cout << "R:" << y->getRight() << endl;
    // cout << "P:" << y->getParent()->getKey() << endl;
    // AVLNode<uint16_t, uint16_t>* z = static_cast<AVLNode<uint16_t, uint16_t>*>(at.internalFind(3));
    // cout << "Ro:" << z->getKey() << endl;
    // cout << "L:" << z->getLeft() << endl;
    // cout << "R:" << z->getRight() << endl;
    // cout << "P:" << z->getParent()->getKey() << endl;

    // cout << "\nAVLTree contents:" << endl;
    // for(AVLTree<uint16_t, uint16_t>::iterator it = at.begin(); it != at.end(); ++it) {
    //     cout << it->first << " " << it->second << endl;
    // }
    // if(at.find('b') != at.end()) {
    //     cout << "Found b" << endl;
    // }
    // else {
    //     cout << "Did not find b" << endl;
    // }

    //at.print();

    //cout << "Erasing b" << endl;

    //at.remove('b');

    return 0;
}
