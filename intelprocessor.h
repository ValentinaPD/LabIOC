#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H
#include "processor.h"

class IntelProcessor: public Processor
{
public:
    IntelProcessor();
    QString GetInfoProcessor() const;
};

#endif // INTELPROCESSOR_H
