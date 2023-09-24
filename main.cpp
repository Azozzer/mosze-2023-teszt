#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // N_ELEMENTS-nek kéne lennie
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // i értéke nagyobb vagy egyenlő, mint N_ELEMENTS
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // atlag = 0
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] // ; hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
