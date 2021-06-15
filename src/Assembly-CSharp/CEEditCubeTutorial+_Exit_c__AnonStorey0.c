
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::CEEditCubeTutorial+<Exit>c__AnonStorey0::
     CEEditCubeTutorial_Exit_c_AnonStorey0___m__0
               (CEEditCubeTutorial_Exit_c_AnonStorey0 *this,IModalPopupCreator *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Error;
  pSVar2 = (this->fields).err;
  if (handler == (IModalPopupCreator *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = handler->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(handler->klass->vtable).CreateErrorNotificationPopup)
                   [pIVar4->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(handler,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*(code *)*ppMVar7)(handler,pSVar2,pSVar1,ppMVar7[1]);
  return;
}

