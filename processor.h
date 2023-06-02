#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "string"
#include <vector>

enum ProcessorType
{
  x86,
  x64
};
class Processor
{
protected:
    std::string version;
    unsigned int type;
    double speed;
    const std::vector<std::string> processor_type = {"x86","x64"};

public:
    Processor();
    virtual std::string GetInfoProcessor() const = 0;
};

#endif // PROCESSOR_H
