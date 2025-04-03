
/* Void <CalculateShouldShowAccessoryPopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryMenuButton+<>c__DisplayClass10_0::
     AccessoryMenuButton_c_DisplayClass10_0__CalculateShouldShowAccessoryPopup_b__0
               (AccessoryMenuButton_c_DisplayClass10_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  if (this_00 != (AccessoryMenuButton *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIVar2 = x->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
            ppMVar5 = &(&(x->klass->vtable).IsUIElementBlocked)
                       [pIVar2->interfaceOffsets[uVar3].offset].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      ppMVar5 = (MethodInfo **)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,6);
code_?:
      bVar6 = (*(code *)*ppMVar5)(x,pGVar1,ppMVar5[1]);
      (this->fields).uiBlocked = bVar6;
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

