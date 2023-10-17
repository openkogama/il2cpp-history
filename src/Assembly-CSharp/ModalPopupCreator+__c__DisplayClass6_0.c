
/* Void <Create>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ModalPopupCreator+<>c__DisplayClass6_0::
     ModalPopupCreator_c_DisplayClass6_0__Create_b__0
               (ModalPopupCreator_c_DisplayClass6_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitPopup;
  if (this_00 != (PleaseWaitPopup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

