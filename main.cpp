#include <iostream>

using namespace std;
// Definicja klasy
class MyClass {
public:
		int* myArray;

		MyClass(int size) {
				myArray = new int[size];
				std::cout << "Obiekt MyClass został utworzony i pamięć została zaalokowana.\n";
		}

		~MyClass() {
				delete[] myArray;
				std::cout << "Obiekt MyClass został zniszczony i pamięć została zwolniona.\n";
		}
};

int main() {
		// Użycie operatora new do utworzenia tablicy obiektów MyClass
		MyClass* myObjects = new MyClass[3]{ MyClass(5), MyClass(10), MyClass(15)};

        // Zwolnienie pamięci przy użyciu operatora delete[]
        delete[] myObjects;
};
		