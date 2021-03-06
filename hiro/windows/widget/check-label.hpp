#if defined(Hiro_CheckLabel)

namespace hiro {

struct pCheckLabel : pWidget {
  Declare(CheckLabel, Widget)

  auto minimumSize() -> Size;
  auto setChecked(bool checked) -> void;
  auto setText(const string& text) -> void;

  auto onToggle() -> void;
};

}

#endif
