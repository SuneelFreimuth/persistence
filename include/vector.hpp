#pragma once

#include <atomic>


// https://dmiller.github.io/clojure-clr-next/general/2023/02/12/PersistentVector-part-2.html
template <typename Elem, int BranchFactor>
class Vector {
public:
    Vector();

    int Size();

private:
};
