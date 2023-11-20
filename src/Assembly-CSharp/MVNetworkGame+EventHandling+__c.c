
/* Void <HandleEvent>b__10_0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+<>c::
     MVNetworkGame_EventHandling_c__HandleEvent_b__10_0
               (MVNetworkGame_EventHandling_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (wo != (MVWorldObjectClient *)0x0) {
    *(undefined4 *)&(wo->fields).interactionFlags = 0;
    *(undefined4 *)((int)&(wo->fields).interactionFlags + 4) = 0;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVNetworkGame+EventHandling+<>c() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+<>c::MVNetworkGame_EventHandling_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame_EventHandling____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVNetworkGame_EventHandling____c;
  value = (MVNetworkGame_EventHandling_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9 = value;
  func_?(TypeInfo__MVNetworkGame_EventHandling____c->static_fields,value);
  return;
}

