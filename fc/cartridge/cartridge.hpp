#include "chip/chip.hpp"
#include "board/board.hpp"

struct Cartridge : Thread {
  static auto Enter() -> void;
  auto main() -> void;

  auto pathID() const -> uint { return information.pathID; }
  auto sha256() const -> string { return information.sha256; }
  auto manifest() const -> string { return information.manifest; }
  auto title() const -> string { return information.title; }

  auto load() -> bool;
  auto save() -> void;
  auto unload() -> void;

  auto power() -> void;
  auto reset() -> void;

  auto serialize(serializer&) -> void;

  struct Information {
    uint pathID = 0;
    string sha256;
    string manifest;
    string title;
  } information;

//privileged:
  Board* board = nullptr;

  auto readPRG(uint addr) -> uint8;
  auto writePRG(uint addr, uint8 data) -> void;

  auto readCHR(uint addr) -> uint8;
  auto writeCHR(uint addr, uint8 data) -> void;

  //scanline() is for debugging purposes only:
  //boards must detect scanline edges on their own
  auto scanline(uint y) -> void;
};

extern Cartridge cartridge;
