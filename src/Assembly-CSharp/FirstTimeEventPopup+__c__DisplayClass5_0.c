
/* Void <PopSelf>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeEventPopup+<>c__DisplayClass5_0::
     FirstTimeEventPopup_c_DisplayClass5_0__PopSelf_b__0
               (FirstTimeEventPopup_c_DisplayClass5_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).popupGameObject;
  if (x == (IUIStack *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        ppMVar6 = &(&(x->klass->vtable).PopToStackElement)[x->klass->interfaceOffsets[uVar4].offset]
                   .method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,5);
code_?:
  cVar7 = (*(code *)*ppMVar6)(x,pGVar1,ppMVar6[1]);
  if (cVar7 != '\0') {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
  }
  return;
}

