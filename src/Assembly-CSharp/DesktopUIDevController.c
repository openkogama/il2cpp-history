
/* Void Awake() */

void Assembly-CSharp.dll::DesktopUIDevController::DesktopUIDevController_Awake
               (DesktopUIDevController *this,MethodInfo *method)

{
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_Push
              (this_00,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
               UIGroupFlags__Enum_Default,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

