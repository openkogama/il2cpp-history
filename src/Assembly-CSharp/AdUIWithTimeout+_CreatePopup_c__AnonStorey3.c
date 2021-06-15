
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIWithTimeout+<CreatePopup>c__AnonStorey3::
     AdUIWithTimeout_CreatePopup_c_AnonStorey3___m__0
               (AdUIWithTimeout_CreatePopup_c_AnonStorey3 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    bVar1 = func_?(0,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    (this->fields).stackReady = bVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

