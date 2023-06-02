#ifndef AMDPROCESSOR_H
#define AMDPROCESSOR_H
#include <processor.h>

class AmdProcessor: public Processor
{
public:
    AmdProcessor(double _speed, unsigned int _type ,const std::string& _version);
    std::string GetInfoProcessor() const;
};

#endif // AMDPROCESSOR_H
