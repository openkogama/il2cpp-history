
/* Void <DeleteWoid>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TouchEditModeController+<>c__DisplayClass64_0::
     TouchEditModeController_c_DisplayClass64_0__DeleteWoid_b__0
               (TouchEditModeController_c_DisplayClass64_0 *this,IModalPopupCreator *x,
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
  uVar5 = (x->klass->_1).interface_offsets_count;
  if (uVar5 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        pVVar6 = &(x->klass->vtable).CreateErrorNotificationPopup +
                 x->klass->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*pVVar6->methodPtr)(x,pSVar2,pSVar1,pVVar6->method);
  return;
}

