#include "displayapp/screens/MotorIcon.h"
#include <cstdint>
#include "displayapp/screens/Symbols.h"

using namespace Pinetime::Applications::Screens;

const char* MotorIcon::GetIcon(bool isEnabled) {
  if (isEnabled)
    return "";
  return Symbols::notificationsOff;
}
