
/* Void <OnStatusChanged>b__5_0() */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling+<>c::
     MVNetworkGame_StatusChangedHandling_c__OnStatusChanged_b__5_0
               (MVNetworkGame_StatusChangedHandling_c *this,MethodInfo *method)

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


/* MVNetworkGame+StatusChangedHandling+<>c() */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling+<>c::
     MVNetworkGame_StatusChangedHandling_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame_StatusChangedHandling____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVNetworkGame_StatusChangedHandling____c;
  value = (MVNetworkGame_StatusChangedHandling_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9 = value;
  func_?(TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields,value);
  return;
}

