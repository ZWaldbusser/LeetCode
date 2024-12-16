class Node {
    int data;
    Node* next;
    Node* prev;
    public:
        Node(int d) {
            data = d;
            next = nullptr;
            prev = nullptr;
        }
        int getData() {
            return data;
        }
        void setNext(Node* n) {
            next = n;
        }
        void setPrev(Node* n) {
            prev = n;
        }
        Node* getNext() {
            return next;
        }
        Node* getPrev() {
            return prev;
        }
};

class MyCircularDeque {
public:
    int max;
    int s;
    Node* firstNode;
	Node* lastNode;
    MyCircularDeque(int k) {
        max = k;
        s = 0;
        firstNode = nullptr;
	    lastNode = nullptr;
        
    }
    
    bool insertFront(int value) {
        if(!isFull()) {
            Node* temp = new Node(value);
            if (s == 0) {
                this->firstNode = temp;
                this->lastNode = temp;
            } else if (s == 1) {
                temp->setNext(lastNode);
                lastNode->setPrev(temp);
                this->firstNode = temp;
                
            } else {
                temp->setNext(firstNode);
                firstNode->setPrev(temp);
                this->firstNode = temp;
            }
            s++;
            return true;
        } else {
            return false;
        }
        
    }
    
    bool insertLast(int value) {
        if(!isFull()) {
            Node* temp = new Node(value);
            if (s == 0) {
                firstNode = temp;
                lastNode = temp;
            } else if (s == 1) {
                temp->setPrev(firstNode);
                firstNode->setNext(temp);
                lastNode = temp;
            } else {
                temp->setPrev(lastNode);
                lastNode->setNext(temp);
                lastNode = temp;
            }
            s++;
            return true;
        } else {
            return false;
        }
        
    }
    
    bool deleteFront() {
        if (s == 0) return false;
        Node* oldHead = firstNode;
        firstNode = firstNode->getNext();
        if (firstNode) {
            firstNode->setPrev(nullptr);
        } else {
            lastNode = nullptr;
        }
        delete oldHead;
        s--;
        return true;
    }

    bool deleteLast() {
        if (s == 0) return false;
        Node* oldTail = lastNode;
        lastNode = lastNode->getPrev();
        if (lastNode) {
            lastNode->setNext(nullptr);
        } else {
            firstNode = nullptr;
        }
        delete oldTail;
        s--;
        return true;
    }
    
    int getFront() {
        if(s == 0) return -1;
        return firstNode->getData();
    }
    
    int getRear() {
        if(s == 0) return -1;
        return lastNode->getData();
    }
    
    bool isEmpty() {
        return s==0;
    }
    
    bool isFull() {
        return max == s;
    }
};
