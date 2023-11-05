//
// Created by eryil on 5.11.2023.
//

#ifndef ARRAYBAG_ARRAYBAG_H
#define ARRAYBAG_ARRAYBAG_H

const int SIZE = 10;
class ArrayBag {
public:
    ArrayBag();
    int getCurrentSize();
    bool isEmpty();
    bool add(int item);
    bool remove(int item);
    void clear();
    int getFreqOf(int item);
    bool contains(int item);
    void printArray();
private:
    int lastIndex;
    int items[SIZE];
};


#endif //ARRAYBAG_ARRAYBAG_H
