
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
    pIStack_1 = (IModalPopupCreator *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IModalPopupCreator *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__TierBoostStateHandler____c->static_fields->__9 = value;
  func_?(TypeInfo__TierBoostStateHandler____c->static_fields,value);
  return;
}

