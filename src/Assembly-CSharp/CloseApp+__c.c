
/* Void <Close>b__1_0(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::CloseApp+<>c::CloseApp_c__Close_b__1_0
               (CloseApp_c *this,bool confirmation,ConfirmationPopup *popup,MethodInfo *method)

{
  if (confirmation != 0) {
    MVGameControllerBase::MVGameControllerBase_ApplicationQuit
              ((QuitBaseCallback *)0x0,(MethodInfo *)0x0);
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CloseApp+<>c() */

void Assembly-CSharp.dll::CloseApp+<>c::CloseApp_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CloseApp____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CloseApp____c;
  value = (CloseApp_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__CloseApp____c->static_fields->__9 = value;
  func_?(TypeInfo__CloseApp____c->static_fields,value);
  return;
}

