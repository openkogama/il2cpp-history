
/* Void <CalculateShouldShowAccessoryPopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryMenuButton+<>c__DisplayClass10_0::
     AccessoryMenuButton_c_DisplayClass10_0__CalculateShouldShowAccessoryPopup_b__0
               (AccessoryMenuButton_c_DisplayClass10_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  if (this_00 != (AccessoryMenuButton *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      bVar2 = func_?(6,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1);
      (this->fields).uiBlocked = bVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

