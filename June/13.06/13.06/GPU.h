#pragma once
#include <iostream>
#include "Component.h"

using namespace std;


struct VideoCard : public Component
{
    string graphicFamily;
    uint16_t internalVideoMemory;
    string memoryType;
    uint16_t ventilatorsCount;
    uint16_t memoryBits;

    VideoCard() = default;
    VideoCard(string make, string model, string graphicFamily, uint16_t internalVideoMemory,
        string memoryType, uint16_t memoryBits, uint16_t ventilatorsCount);

    void videoCardInfo() const;
};
