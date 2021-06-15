
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContinueTierBoostPopup+<Update>c__AnonStorey0::
     ContinueTierBoostPopup_Update_c_AnonStorey0___m__0
               (ContinueTierBoostPopup_Update_c_AnonStorey0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._this;
  if (this_00 != (ContinueTierBoostPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
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
      (this->fields).isBlocked = bVar6;
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

