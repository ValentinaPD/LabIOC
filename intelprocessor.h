#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H
#include "processor.h"

class IntelProcessor: public Processor
{
public:
    IntelProcessor(double _speed, std::string _type ,const std::string& _version);
    std::string GetInfoProcessor() const;
};

#endif // INTELPROCESSOR_H
