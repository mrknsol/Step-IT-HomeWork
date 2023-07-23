#include "GPU.h"


VideoCard::VideoCard(string make, string model, string graphicFamily, uint16_t internalVideoMemory,
    string memoryType, uint16_t memoryBits, uint16_t ventilatorsCount) : Component(make, model)
{
    this->graphicFamily = graphicFamily;
    this->internalVideoMemory = internalVideoMemory;
    this->memoryType = memoryType;
    this->memoryBits = memoryBits;
    this->ventilatorsCount = ventilatorsCount;
}

void VideoCard::videoCardInfo() const {
    cout << "Video card" << endl;
    cout << "Video card make: " << make << endl
        << "Video card model: " << model << endl
        << "Video card graphic family: " << graphicFamily << endl
        << "Internal video memory: " << internalVideoMemory << endl
        << "Memory type: " << memoryType << endl
        << "Video card memory bits: " << memoryBits << endl
        << "Number of ventilators: " << ventilatorsCount << endl;
}
