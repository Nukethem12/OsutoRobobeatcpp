//
// Created by adamt on 19.6.2024.
//

#include "OsuUnpack.h"

#include <iostream>

OsuMap OsuUnpack::unpack(std::filesystem::path& fpath, bool fromMap) {
    if (!fpath.extension().compare(std::filesystem::path("."))) {
        fpath = FileSelector::ListFiles("osz", fpath);
    }

    if (std::is_null_pointer<fpath>) {

        std::cout << "No osu! files found in folder." << std::endl;

    }
}
