#include "../inc/Array.hpp"

int main() {
    std::cout << "=== Test Constructeur par défaut ===" << std::endl;
    Array<int> a;
    std::cout << "Taille de a: " << a.Size() << std::endl;

    std::cout << "\n=== Test Constructeur avec taille ===" << std::endl;
    Array<int> b(5);
    std::cout << "Taille de b: " << b.Size() << std::endl;

    std::cout << "\n=== Remplissage de b ===" << std::endl;
    for (size_t i = 0; i < b.Size(); ++i) {
        b[i] = static_cast<int>(i * 2);
        std::cout << "b[" << i << "] = " << b[i] << std::endl;
    }

    std::cout << "\n=== Test Constructeur par copie ===" << std::endl;
    Array<int> c(b);
    std::cout << "Taille de c: " << c.Size() << std::endl;
    for (size_t i = 0; i < c.Size(); ++i) {
        std::cout << "c[" << i << "] = " << c[i] << std::endl;
    }

    std::cout << "\n=== Test Opérateur d'affectation ===" << std::endl;
    Array<int> d;
    d = b;
    std::cout << "Taille de d: " << d.Size() << std::endl;
    for (size_t i = 0; i < d.Size(); ++i) {
        std::cout << "d[" << i << "] = " << d[i] << std::endl;
    }

    std::cout << "\n=== Test Accès Hors Limite ===" << std::endl;
    try {
        std::cout << d[10] << std::endl;  // Hors limite !
    } catch (const std::exception& e) {
        std::cerr << "Exception attrapée: " << e.what() << std::endl;
    }

    return 0;
}
