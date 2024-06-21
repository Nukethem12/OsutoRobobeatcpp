//
// Created by adamt on 19.6.2024.
//

#ifndef OSUUNPACK_H
#define OSUUNPACK_H
#include <string>
#include <filesystem>

#include "OsuMap.h"
#include "FileSelector.h"

class OsuUnpack {

public:
    static OsuMap unpack(std::filesystem::path& fpath, bool fromMap);
private:
    const std::filesystem::path exportPath = "./OsuExport";


};



#endif //OSUUNPACK_H
