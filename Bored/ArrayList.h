#ifndef ArrayList_H
#define ArrayList_H

template <typename T>
class ArrayList {
private:
    struct Node {
        T value;
        Node* next;
        Node* prev;

        Node(const T& v, Node* n = nullptr, Node* p = nullptr)
            : value(v), next(n), prev(p) {}
    };

    Node* head;

public:
    /* ================== Constructors / Destructor ================== */

    ArrayList() : head(nullptr) {}

    ~ArrayList() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    /* ================== Basic List Operations ================== */

    void addFirst(const T& value) {
        Node* newNode = new Node(value, head, nullptr);

        if (head != nullptr) {
            head->prev = newNode;
        }

        head = newNode;
    }

    void addLast(const T& value) {
        if (!head) {
            addFirst(value);
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }

        current->next = new Node(value, nullptr, current);
    }

    /* ================== Iterator ================== */

    class Iterator {
    private:
        Node* current;
        ArrayList* list;

    public:
        Iterator(ArrayList* l, Node* start)
            : current(start), list(l) {}

        bool next() {
            if (current && current->next) {
                current = current->next;
                return true;
            }
            return false;
        }

        bool previous() {
            if (current && current->prev) {
                current = current->prev;
                return true;
            }
            return false;
        }

        T& get() {
            return current->value;
        }

        bool valid() const {
            return current != nullptr;
        }

        // Insert AFTER current position
        void addNode(const T& value) {
            if (!current) {
                list->addFirst(value);
                current = list->head;
                return;
            }

            Node* newNode = new Node(value, current->next, current);

            if (current->next) {
                current->next->prev = newNode;
            }

            current->next = newNode;
        }
    };

    /* ================== Iterator Access ================== */

    Iterator begin() {
        return Iterator(this, head);
    }
};

#endif
