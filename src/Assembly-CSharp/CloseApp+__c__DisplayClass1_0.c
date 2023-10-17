
/* Void <Close>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::CloseApp+<>c__DisplayClass1_0::CloseApp_c_DisplayClass1_0__Close_b__1
               (CloseApp_c_DisplayClass1_0 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Quit_game_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Quit_game_,(MethodInfo *)0x0);
  pSVar2 = ::StringLiteral__;
  pUVar3 = (this->fields).quit;
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = 0;
  uVar6 = (x->klass->_1).interface_offsets_count;
  if (uVar6 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        pVVar7 = &(x->klass->vtable).Create_2 + x->klass->interfaceOffsets[uVar5].offset;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,3);
code_?:
  (*pVVar7->methodPtr)(x,pSVar1,pUVar3,pSVar2,pVVar7->method);
  return;
}

