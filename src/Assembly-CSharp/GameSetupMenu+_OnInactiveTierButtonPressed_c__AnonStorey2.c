
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GameSetupMenu+<OnInactiveTierButtonPressed>c__AnonStorey2::
     GameSetupMenu_OnInactiveTierButtonPressed_c_AnonStorey2___m__0
               (GameSetupMenu_OnInactiveTierButtonPressed_c_AnonStorey2 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,(this->fields).popup,1,0,0x20)
    ;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

