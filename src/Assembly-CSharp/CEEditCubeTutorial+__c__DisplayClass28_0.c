
/* Void <Exit>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::CEEditCubeTutorial+<>c__DisplayClass28_0::
     CEEditCubeTutorial_c_DisplayClass28_0__Exit_b__0
               (CEEditCubeTutorial_c_DisplayClass28_0 *this,IModalPopupCreator *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Error;
  pSVar2 = (this->fields).err;
  if (handler == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  uVar5 = (handler->klass->_1).interface_offsets_count;
  if (uVar5 != 0) {
    do {
      if (handler->klass->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        pVVar6 = &(handler->klass->vtable).CreateErrorNotificationPopup +
                 handler->klass->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           func_?(handler,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*pVVar6->methodPtr)(handler,pSVar2,pSVar1,pVVar6->method);
  return;
}

