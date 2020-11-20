#ifndef CORE_SETTINGS_H
#define CORE_SETTINGS_H

#include "core.h"
#include "JSON/include/JsonDocument.h"

using namespace Json;

class core_settingss
{
public:
    explicit core_settingss(const std::string& filename="config.json");
    ~core_settingss();
    Data read(const std::string &,const std::string&);
    void write(const std::string &,const std::string&,Data);
    void flush();
private:
    JsonDocument * pDoc=nullptr;
    std::ifstream ifs;
    std::ofstream ofs;
    std::string config_json_filename;
};

#endif
