#pragma once

//license: GPLv3
//started: 2010-12-27

#include <emulator/emulator.hpp>
#include <emulator/thread.hpp>
#include <emulator/scheduler.hpp>
#include <emulator/cheat.hpp>

#include <processor/lr35902/lr35902.hpp>

namespace GameBoy {
  using File = Emulator::File;
  using Thread = Emulator::Thread;
  using Scheduler = Emulator::Scheduler;
  using Cheat = Emulator::Cheat;
  extern Scheduler scheduler;
  extern Cheat cheat;

  #include <gb/memory/memory.hpp>
  #include <gb/system/system.hpp>
  #include <gb/cartridge/cartridge.hpp>
  #include <gb/cpu/cpu.hpp>
  #include <gb/ppu/ppu.hpp>
  #include <gb/apu/apu.hpp>
}

#include <gb/interface/interface.hpp>
