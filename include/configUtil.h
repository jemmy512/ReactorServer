#ifndef _CONFIGUTIL_H_
#define _CONFIGUTIL_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <map>

/*
char configPath[255] = "../config.ini";
*/

using namespace std;

int get_config(char *file, char *key, char *value);

class ConfigFile {
public:
    ConfigFile(string file);

    string getValue(string key);
private:
    string fileName;
    std::map<string, string> confMap;
};

#endif