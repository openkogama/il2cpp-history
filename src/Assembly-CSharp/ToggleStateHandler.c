
/* Void UpdateToggleState() */

void Assembly-CSharp.dll::ToggleStateHandler::ToggleStateHandler_UpdateToggleState
               (ToggleStateHandler *this,MethodInfo *method)

{
  if ((this->fields)._.usingImageComponent == 0) {
    this_00 = (this->fields)._.button;
    if (this_00 == (Button *)0x0) goto code_?;
    this_01 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                        ((Selectable *)this_00,(MethodInfo *)0x0);
  }
  else {
    this_01 = (this->fields)._.imageComponent;
  }
  if (this_01 != (Image *)0x0) {
    if ((this->fields)._.toggleState == 0) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                (this_01,(this->fields).toggleOff,(MethodInfo *)0x0);
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_01,(this->fields).toggleOn,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

