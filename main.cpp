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
        std::cout << "Ertek:" // innen hiányzik a tömb elemei meg az endl
    }    
    std::cout << "Atlag szamitasa: " << std::endl;

    int ossz; //ez inkább összeg legyen double és 0ra inivializálva
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        ossz += b[i]
    }

    atlag /= N_ELEMENTS; //az összeggel el kell osztani
    std::cout << "Atlag: " << atlag << std::endl;

    //a lefoglalt memóriát törölni kell delete[] b

    return 0;
}
