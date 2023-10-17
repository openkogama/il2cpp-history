
/* Void <Create>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ModalPopupCreator+<>c__DisplayClass5_0::
     ModalPopupCreator_c_DisplayClass5_0__Create_b__0
               (ModalPopupCreator_c_DisplayClass5_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).confirmationPopup;
  if (this_00 != (ConfirmationPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields).__4__this;
    if ((pMVar2 != (ModalPopupCreator *)0x0) && (x != (IUIStack *)0x0)) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,
                      (pMVar2->fields).popupPushOption,0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

