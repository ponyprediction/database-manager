#ifndef UTIL_HPP
#define UTIL_HPP

#include <QString>

class Util
{
public:
    Util();
    ~Util();
    static QString getLineFromConf(const QString & id);
    static void addMessage(const QString & message);
    static void addWarning(const QString & warning);
    static void addError(const QString & message);
    static void showFile(const QString & path);
    static bool createDir(const QString & path);
};

#endif // UTIL_HPP
