#include <iostream>

void compute(int PA, int PB, float G1, float G2){
    int popA = PA, popB =PB, count = 0;
    bool flag = false;
    do {
        popA = popA*(1+(G1/100));
        //std::cout<<popA<<std::endl; //for test proposes
        popB = popB*(1+(G2/100));
        //std::cout<<popB<<std::endl; //for test proposes
        count++;
        if (count>100) flag = true;
    } while (popA<=popB && count <= 100);
    if (flag == false){
        std::cout << count << " anos." <<std::endl;
    } else std::cout << "Mais de 1 seculo." << std::endl;
}

int main() {
    int T = 0, PA[3000], PB[3000];
    float G1[3000], G2[3000];
    std::cin >> T;
    for (int x = 0; x<T; x++){
        std::cin >> PA[x] >> PB[x] >> G1[x] >> G2[x];
    }
    for (int x = 0; x<T; x++){
        compute(PA[x],PB[x],G1[x],G2[x]);
    }
    return 0;
}
