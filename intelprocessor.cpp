#include "intelprocessor.h"

IntelProcessor::IntelProcessor()
{

}
QString IntelProcessor::GetInfoProcessor() const
{
    return "Intel Processor. Version: " + version + ". Type: " + type + ". Speed: " + speed;
}
