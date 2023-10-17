
/* Void <CloseApplication>b__12_0() */

void Assembly-CSharp.dll::SessionLocatorPing+<>c::SessionLocatorPing_c__CloseApplication_b__12_0
               (SessionLocatorPing_c *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__QuitConnectionError);
    cRam_? = '\x01';
  }
  this_00 = (QuitConnectionError *)func_?(TypeInfo__QuitConnectionError);
  if (this_00 != (QuitConnectionError *)0x0) {
    QuitConnectionError::QuitConnectionError__ctor(this_00,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_ApplicationQuit
              ((QuitBaseCallback *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SessionLocatorPing+<>c() */

void Assembly-CSharp.dll::SessionLocatorPing+<>c::SessionLocatorPing_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SessionLocatorPing____c);
    cRam_? = '\x01';
  }
  value = (SessionLocatorPing_c *)func_?(TypeInfo__SessionLocatorPing____c);
  if (value != (SessionLocatorPing_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__SessionLocatorPing____c->static_fields->__9 = value;
    func_?(TypeInfo__SessionLocatorPing____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

