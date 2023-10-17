
/* Void <ExecuteToggleState>b__3_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::FullscreenToggleExecute+<>c::
     FullscreenToggleExecute_c__ExecuteToggleState_b__3_0
               (FullscreenToggleExecute_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Fullscreen_is_not_supported_in_u000A);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Fullscreen_is_not_supported_in_u000A,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Error,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FullscreenToggleExecute+<>c() */

void Assembly-CSharp.dll::FullscreenToggleExecute+<>c::FullscreenToggleExecute_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullscreenToggleExecute____c);
    cRam_? = '\x01';
  }
  value = (FullscreenToggleExecute_c *)func_?(TypeInfo__FullscreenToggleExecute____c);
  if (value != (FullscreenToggleExecute_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__FullscreenToggleExecute____c->static_fields->__9 = value;
    func_?(TypeInfo__FullscreenToggleExecute____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

