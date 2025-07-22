
/* Void <DeleteWoid>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TouchEditModeController+<>c__DisplayClass65_0::
     TouchEditModeController_c_DisplayClass65_0__DeleteWoid_b__0
               (TouchEditModeController_c_DisplayClass65_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Error;
  pSVar2 = (this->fields).errorText;
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  pIVar5 = x->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(x->klass->vtable).CreateErrorNotificationPopup)
                   [x->klass->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*(code *)*ppMVar7)(x,pSVar2,pSVar1,ppMVar7[1]);
  return;
}

