#pragma once
#include "../libs/chesto/src/DrawUtils.hpp"

namespace HBAS::ThemeManager
{
    // Misc variables
    inline bool isDarkMode = false;

    // Colours
    inline CST_Color background = {0xff, 0xff, 0xff, 0xff};
    inline CST_Color sidebarColor = {30, 30, 30, 0xff};
    // inline CST_Color sidebarColor = {0x00, 0x84, 0xff, 0xff}; // homebrew blue (highlighting is off)
    inline CST_Color textPrimary = {0x00, 0x00, 0x00, 0xff};
    inline CST_Color textSecondary = {0x50, 0x50, 0x50, 0xff};

    void themeManagerInit();
}