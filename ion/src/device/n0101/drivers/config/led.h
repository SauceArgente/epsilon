#ifndef ION_DEVICE_N0101_CONFIG_LED_H
#define ION_DEVICE_N0101_CONFIG_LED_H

#include <regs/regs.h>

namespace Ion {
namespace Device {
namespace LED {
namespace Config {

constexpr static AFGPIOPin RGBPins[] = {
  AFGPIOPin(GPIOB, 4,  GPIO::AFR::AlternateFunction::AF2, GPIO::PUPDR::Pull::None, GPIO::OSPEEDR::OutputSpeed::High),
  AFGPIOPin(GPIOB, 5,  GPIO::AFR::AlternateFunction::AF2, GPIO::PUPDR::Pull::None, GPIO::OSPEEDR::OutputSpeed::High),
  AFGPIOPin(GPIOB, 0,  GPIO::AFR::AlternateFunction::AF2, GPIO::PUPDR::Pull::None, GPIO::OSPEEDR::OutputSpeed::High),
};

}
}
}
}

#endif
