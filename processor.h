#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "string"

enum ProcessorType
{
  x86,
  x64
};
class Processor
{
protected:
    std::string version;
    std::string type;
    double speed;

public:
    Processor();
    virtual std::string GetInfoProcessor() const = 0;
};

#endif // PROCESSOR_H
