#pragma once

#include <hyprland/src/config/values/types/ColorValue.hpp>
#include <hyprland/src/config/values/types/IntValue.hpp>
#include <hyprland/src/config/values/types/StringValue.hpp>
#include <hyprland/src/plugins/PluginAPI.hpp>

inline HANDLE PHANDLE = nullptr;

struct SVars {
    SP<Config::Values::CIntValue>    columns;
    SP<Config::Values::CIntValue>    gapSize;
    SP<Config::Values::CColorValue>  bgCol;
    SP<Config::Values::CStringValue> workspaceMethod;
    SP<Config::Values::CIntValue>    skipEmpty;
    SP<Config::Values::CIntValue>    gestureDistance;
    SP<Config::Values::CIntValue>    gestureFingers;
    SP<Config::Values::CStringValue> gestureDirection;
};

inline SVars vars = {};
