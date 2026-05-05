#include "../include/interface.cpp"

int main() {
    double x;

    std::cout << "Ingrese un valor x: ";
    std::cin >> x;

    std::cout << "\n--- RESULTADOS ---\n";
    std::cout << "e^x ≈ " << expTaylor(x) << std::endl;
    std::cout << "sen(x) ≈ " << senoTaylor(x) << std::endl;
    std::cout << "cos(x) ≈ " << cosenoTaylor(x) << std::endl;
    std::cout << "valor absoluto = " << absoluto(x) << std::endl;
    std::cout << "raiz cuadrada ≈ " << raizNewton(x) << std::endl;

    return 0;
}
