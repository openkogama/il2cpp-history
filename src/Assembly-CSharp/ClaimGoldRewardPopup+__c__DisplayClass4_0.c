
/* Void <Update>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup+<>c__DisplayClass4_0::
     ClaimGoldRewardPopup_c_DisplayClass4_0__Update_b__0
               (ClaimGoldRewardPopup_c_DisplayClass4_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  if (this_00 != (ClaimGoldRewardPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      uVar2 = 0;
      uVar3 = (x->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
            pVVar4 = &(x->klass->vtable).IsUIElementBlocked +
                     x->klass->interfaceOffsets[uVar2].offset;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      pVVar4 = (VirtualInvokeData *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,6);
code_?:
      bVar5 = (*pVVar4->methodPtr)(x,pGVar1,pVVar4->method);
      (this->fields).isBlocked = bVar5;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

