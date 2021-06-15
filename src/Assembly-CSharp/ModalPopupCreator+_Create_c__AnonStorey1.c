
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ModalPopupCreator+<Create>c__AnonStorey1::
     ModalPopupCreator_Create_c_AnonStorey1___m__0
               (ModalPopupCreator_Create_c_AnonStorey1 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).confirmationPopup;
  if (this_00 != (ConfirmationPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._this;
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

