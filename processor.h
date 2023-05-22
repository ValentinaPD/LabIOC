#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "QString"

enum ProcessorType
{
  x86,
  x64
};
class Processor
{
protected:
    QString version;
    ProcessorType type;
    double speed;

public:
    Processor();
    virtual QString GetInfoProcessor() const = 0;
};

#endif // PROCESSOR_H
