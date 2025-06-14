#include <iostream>

//struct Test{
//    int a; // 4
//    Test* ptr; // 8
//    int b; // 1
//};


struct BitField{
    int a: 24;
    size_t b : 1;
};

enum Baba{
    edno,
    dwe,
    tri,
    ednow,
    dwew,
    triw
};

namespace A {
    int i = 1;
}

namespace B {
    int i = 2;
    int j = 3;

    namespace C {
        namespace D {
            using namespace A; // all names from A injected into global namespace

            int j = 4;
            int k = 5;
            int a = i;         // i is B::i, because A::i is hidden by B::i
        }

        using namespace D; // names from D are injected into C
        // names from A are injected into global namespace

        int k = 89; // OK to declare name identical to one introduced by a using
       // int l = k;  // ambiguous: C::k or D::k
        int m = i;  // ok: B::i hides A::i
        int n = j;  // ok: D::j hides B::j
    }
}

int main() {
    char* b;

    std::cout<<sizeof(B::C::n);


    //char* n = "hello";
    //delete n;

    //std::cout << data << std::endl;
    return 0;
}
