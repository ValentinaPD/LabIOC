#ifndef COMPUTER_H
#define COMPUTER_H
#include "processor.h"
#include "string"

class Computer
{
private:
    Processor *processor;
public:
    Computer(Processor* _processor);
    std::string GetProcessorInfo();
};

#endif // COMPUTER_H
