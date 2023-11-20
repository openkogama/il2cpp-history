
/* Void <ExitContinuePopup>b__5_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierBoostStateHandler+<>c::
     TierBoostStateHandler_c__ExitContinuePopup_b__5_0
               (TierBoostStateHandler_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <StopPreviewTier>b__3_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierBoostStateHandler+<>c::TierBoostStateHandler_c__StopPreviewTier_b__3_0
               (TierBoostStateHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
          pIVar1 = x->klass;
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(pIVar1->vtable).Create_1)[iVar4].method)
                    (x,(&(pIVar1->vtable).Create_2)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,2);
    (*(code *)*puVar5)(x,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* TierBoostStateHandler+<>c() */

void Assembly-CSharp.dll::TierBoostStateHandler+<>c::TierBoostStateHandler_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TierBoostStateHandler____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierBoostStateHandler____c;
  value = (TierBoostStateHandler_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__TierBoostStateHandler____c->static_fields->__9 = value;
  func_?(TypeInfo__TierBoostStateHandler____c->static_fields,value);
  return;
}

