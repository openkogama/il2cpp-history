
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts+<Update>c__AnonStorey0::
     ReviveUIHandlerBoosts_Update_c_AnonStorey0___m__0
               (ReviveUIHandlerBoosts_Update_c_AnonStorey0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._this;
  if (this_00 != (ReviveUIHandlerBoosts *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      bVar2 = func_?(6,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1);
      (this->fields).isBlocked = bVar2;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

