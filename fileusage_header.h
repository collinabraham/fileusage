#if !defined (GUARD_FILEUSAGE_HEADER_H)
#define GUARD_FILEUSAGE_HEADER_H

#include<iostream>
#include<iomanip>
#include<vector>
#include<locale>
#include<regex>
#include<experimental/filesystem>
#include<map>
#include<iterator>
#include<sstream>
#include<thread>

using namespace std;
using namespace std::experimental::filesystem;

//function signatures
void rscan(path const& f, map <string, pair<unsigned, uintmax_t>>& files);
void rscanWithRegex(path const& f, map <string, pair<unsigned, uintmax_t>>& files, regex reg);
void scanWithRegex(path const& f, map <string, pair<unsigned, uintmax_t>>& files, regex reg);
void scan(path const& f, map <string, pair<unsigned, uintmax_t>>& files);
void mapPrinter(map <string, pair<unsigned, uintmax_t>>& files, bool reverseCheck);
void mapPrinterFileSizes(map<uintmax_t, pair<string, unsigned>>& files, bool reverseCheck);
void mapBuilder(map<uintmax_t, pair<string, unsigned>>& storageMap, map <string, pair<unsigned, uintmax_t>>& files);
template <class T>
string commaFormat(T value);
void helpMenu();


#endif
