struct System {
  auto loaded() const -> bool { return information.loaded; }
  auto colorburst() const -> double { return information.colorburst; }

  auto run() -> void;
  auto runToSave() -> void;

  auto load() -> bool;
  auto save() -> void;
  auto unload() -> void;
  auto power() -> void;
  auto reset() -> void;

  auto init() -> void;
  auto term() -> void;

  //video.cpp
  auto configureVideoPalette() -> void;
  auto configureVideoEffects() -> void;

  //serialization.cpp
  auto serialize() -> serializer;
  auto unserialize(serializer&) -> bool;

  auto serialize(serializer&) -> void;
  auto serializeAll(serializer&) -> void;
  auto serializeInit() -> void;

  struct Information {
    bool loaded = false;
    double colorburst = 0.0;
    string manifest;
  } information;

private:
  uint _serializeSize = 0;
};

struct Peripherals {
  auto unload() -> void;
  auto reset() -> void;
  auto connect(uint port, uint device) -> void;

  Controller* controllerPort1 = nullptr;
  Controller* controllerPort2 = nullptr;
};

extern System system;
extern Peripherals peripherals;
