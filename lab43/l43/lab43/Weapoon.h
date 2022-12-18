#pragma once
#include <iostream>
using namespace std;

class Weapoon
{
public:
    string name;
    int damage;
    int weight;
    int maxWeight;

    Weapoon();

    Weapoon(string name, int damage, int weight, int maxWeight);

    ~Weapoon();

    int checkWeight();

    void totalWeight(int weight2);

    void totalWeight();
};

