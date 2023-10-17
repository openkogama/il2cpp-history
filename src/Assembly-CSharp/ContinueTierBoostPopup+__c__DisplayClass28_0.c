
/* Void <Update>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContinueTierBoostPopup+<>c__DisplayClass28_0::
     ContinueTierBoostPopup_c_DisplayClass28_0__Update_b__0
               (ContinueTierBoostPopup_c_DisplayClass28_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  if (this_00 != (ContinueTierBoostPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      bVar2 = func_?(6,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1);
      (this->fields).isBlocked = bVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

