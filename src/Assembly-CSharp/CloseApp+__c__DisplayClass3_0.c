
/* Void <Close>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::CloseApp+<>c__DisplayClass3_0::CloseApp_c_DisplayClass3_0__Close_b__1
               (CloseApp_c_DisplayClass3_0 *this,IModalPopupCreator *x,BaseEventData *y,
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
  pIVar6 = x->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar8 = &(&(x->klass->vtable).Create_2)[x->klass->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  ppMVar8 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,3);
code_?:
  (*(code *)*ppMVar8)(x,pSVar1,pUVar3,pSVar2,ppMVar8[1]);
  return;
}

