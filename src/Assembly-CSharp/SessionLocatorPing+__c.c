
/* Void <CloseApplication>b__12_0() */

void Assembly-CSharp.dll::SessionLocatorPing+<>c::SessionLocatorPing_c__CloseApplication_b__12_0
               (SessionLocatorPing_c *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__QuitConnectionError);
    cRam_? = '\x01';
  }
  this_00 = (QuitConnectionError *)func_?(TypeInfo__QuitConnectionError);
  QuitConnectionError::QuitConnectionError__ctor(this_00,(MethodInfo *)0x0);
  MVGameControllerBase::MVGameControllerBase_ApplicationQuit
            ((QuitBaseCallback *)this_00,(MethodInfo *)0x0);
  return;
}


/* SessionLocatorPing+<>c() */

void Assembly-CSharp.dll::SessionLocatorPing+<>c::SessionLocatorPing_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SessionLocatorPing____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SessionLocatorPing____c;
  value = (SessionLocatorPing_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__SessionLocatorPing____c->static_fields->__9 = value;
  func_?(TypeInfo__SessionLocatorPing____c->static_fields,value);
  return;
}

