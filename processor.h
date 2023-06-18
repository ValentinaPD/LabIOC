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
public:
    virtual std::string GetInfoProcessor() const = 0;
    virtual ~Processor() = default;
};

class AmdProcessor: public Processor
{
public:
    std::string version;
    unsigned int type;
    double speed;
    const std::vector<std::string> processor_type = {"x86","x64"};
    AmdProcessor(double _speed, unsigned int _type ,const std::string& _version);
    std::string GetInfoProcessor() const;
};

class IntelProcessor: public Processor
{
public:
    std::string version;
    unsigned int type;
    double speed;
    const std::vector<std::string> processor_type = {"x86","x64"};
    IntelProcessor(double _speed, unsigned int _type ,const std::string& _version);
    std::string GetInfoProcessor() const;
};

#endif // PROCESSOR_H
