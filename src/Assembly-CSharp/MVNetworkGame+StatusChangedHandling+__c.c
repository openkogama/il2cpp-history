
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


/* MVNetworkGame+StatusChangedHandling+<>c() */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling+<>c::
     MVNetworkGame_StatusChangedHandling_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame_StatusChangedHandling____c);
    cRam_? = '\x01';
  }
  value = (MVNetworkGame_StatusChangedHandling_c *)
          func_?(TypeInfo__MVNetworkGame_StatusChangedHandling____c);
  if (value != (MVNetworkGame_StatusChangedHandling_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9 = value;
    func_?(TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

