#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //rosszul van írva az N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //hiányzik a pontosvessző
    for (int i = 0;) //hiányzik a ciklusfeltétel
    {
        b[i] = i * 2; //Az i-hez hozzá kell adni 1et hogy 1től kezdjünk
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //az átlagos érdemes 0ra inicializálni
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    //a lefoglalt memóriát törölni kell delete[] b

    return 0;
}
