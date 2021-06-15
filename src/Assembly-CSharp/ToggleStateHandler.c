
/* Void UpdateToggleState() */

void Assembly-CSharp.dll::ToggleStateHandler::ToggleStateHandler_UpdateToggleState
               (ToggleStateHandler *this,MethodInfo *method)

{
  this_00 = (this->fields)._.button;
  if ((this->fields)._.toggleState == 0) {
    if (this_00 != (Button *)0x0) {
      pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                         ((Selectable *)this_00,(MethodInfo *)0x0);
      if (pIVar1 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                  (pIVar1,(this->fields).toggleOff,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (this_00 != (Button *)0x0) {
    pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)this_00,(MethodInfo *)0x0);
    if (pIVar1 != (Image *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                (pIVar1,(this->fields).toggleOn,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

