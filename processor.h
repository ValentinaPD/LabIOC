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
    virtual std::string GetInfo() const = 0;
    virtual void Set(double _speed, unsigned int _type ,const std::string& _version) = 0;
    virtual ~Processor() = default;
};

class AmdProcessor: public Processor
{
public:
    std::string version;
    unsigned int type;
    double speed;
    const std::vector<std::string> processor_type = {"x86","x64"};
    AmdProcessor();
    void Set(double _speed, unsigned int _type ,const std::string& _version);
    std::string GetInfo() const;
    virtual ~AmdProcessor() = default;

};

class IntelProcessor: public Processor
{
public:
    std::string version;
    unsigned int type;
    double speed;
    const std::vector<std::string> processor_type = {"x86","x64"};
    void Set(double _speed, unsigned int _type ,const std::string& _version);
    IntelProcessor();
    std::string GetInfo() const;
    virtual ~IntelProcessor() = default;
};

#endif // PROCESSOR_H
