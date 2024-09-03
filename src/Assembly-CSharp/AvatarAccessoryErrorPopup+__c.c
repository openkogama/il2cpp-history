
/* Void <OnButtonPressed>b__8_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryErrorPopup+<>c::
     AvatarAccessoryErrorPopup_c__OnButtonPressed_b__8_0
               (AvatarAccessoryErrorPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* AvatarAccessoryErrorPopup+<>c() */

void Assembly-CSharp.dll::AvatarAccessoryErrorPopup+<>c::AvatarAccessoryErrorPopup_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarAccessoryErrorPopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryErrorPopup____c;
  value = (AvatarAccessoryErrorPopup_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9 = value;
  func_?(TypeInfo__AvatarAccessoryErrorPopup____c->static_fields,value);
  return;
}

