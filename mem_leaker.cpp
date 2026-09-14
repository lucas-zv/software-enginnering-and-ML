#include <iostream>
#include <cstring>
#include <new>

int main(){

    const size_t CHUNK_SIZE = 10000000;

    for(unsigned long long i = 0;;i++){
        int* ptr = new(std::nothrow) int[CHUNK_SIZE];
        memset(ptr, 1, CHUNK_SIZE * sizeof(int));
        std::cout << "sector: " << i << " " << (i * 40) << "MB leaked" << std::endl;
    }

    return 0;
}
