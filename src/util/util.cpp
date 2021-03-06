//
// libembryo
//
// Copyright Stanley Cen 2013
// Released under the MIT License
//

#include <libembryo/util.h>

namespace embryo
{
    namespace util
    {
        std::string getFileNameFromPath(const std::string& path)
        {
            int pos = path.length();
            while (pos && path[pos] != '/') --pos;
            return path.substr(pos + 1);
        }
    }
}
