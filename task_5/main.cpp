#include <iostream>
void filled(int* ptr, int Of);
void showed(int* ptr, int Of);
void swapDataInCells(int* ptr, int Of);
int main() {
    int size = 12;
    int* swap = new int[size];
    filled(swap, size);
    showed(swap, size);
    swapDataInCells(swap, size);
    showed(swap, size);
    delete[] swap;
    return 0;
}
void filled(int* ptr, int Of) {
for (int i = 0; i < Of; i++) {
    ptr[i] = i + 1;
}}

void showed(int* ptr, int Of) {

for (int i = 0; i < Of; i++) {
    std::cout << ptr[i] << "  ";
}
    std::cout << std::endl;

}

void swapDataInCells(int* ptr, int Of) {
    int buffer;
    for (int i = 0; i < Of; i++) {
        if (i % 2 == 0) {
            buffer = ptr[i];
            ptr[i] = ptr[i + 1];
            ptr[i + 1] = buffer;
        }
    }
}