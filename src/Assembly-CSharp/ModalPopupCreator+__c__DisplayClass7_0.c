
/* Void <Create>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ModalPopupCreator+<>c__DisplayClass7_0::
     ModalPopupCreator_c_DisplayClass7_0__Create_b__0
               (ModalPopupCreator_c_DisplayClass7_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).confirmationPopup;
  if (this_00 != (ConfirmationPopup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (((this->fields).__4__this != (ModalPopupCreator *)0x0) && (x != (IUIStack *)0x0)) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

