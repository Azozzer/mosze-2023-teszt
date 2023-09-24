#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // NELEMENTS helyett N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i*2;
    }
    std::cout << "Ertek:";
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << " " << b[i];
    }
    std::cout << std::endl;
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Ezt a kódot ide én írtam" << std::endl;
    return 0;
}
