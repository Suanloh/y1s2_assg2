#include "File.h"

File::File(const string& name, const string& extension)
    : name(name), extension(extension) {}

string File::getName() const {
    return name;
}

string File::getExtension() const {
    return extension;
}

string File::getFullName() const {
    return name + "." + extension;
}