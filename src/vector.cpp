#include "vector.hpp"

namespace {
    template <typename Elem>
    struct Node {
        std::atomic<bool> edit_;
        std::vector<Elem> elems;
    };
}

template <typename T, int BranchFactor>
Vector<T, BranchFactor>::Vector()
    : size_{0}, edit_{false}
{}

template <typename T, int BranchFactor>
int Vector<T, BranchFactor>::Size() {
    return size_;
}
