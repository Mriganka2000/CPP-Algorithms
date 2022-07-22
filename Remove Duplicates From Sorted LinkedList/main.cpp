#include "LinkedList.h"

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(1);
    list.insert(2);
    list.insert(2);
    list.insert(3);
    list.insert(3);
    list.insert(3);
    list.insert(4);
    list.insert(4);

    list.remove_duplicates();

    list.print();
}
