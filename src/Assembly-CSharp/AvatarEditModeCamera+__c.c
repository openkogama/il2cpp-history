
/* Boolean <ResetPosition>b__2_0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeCamera+<>c::AvatarEditModeCamera_c__ResetPosition_b__2_0
               (AvatarEditModeCamera_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSpawnPointBlue);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    if (((TypeInfo__MVSpawnPointBlue->_1).typeHierarchyDepth <= (wo->klass->_1).typeHierarchyDepth)
       && ((MVSpawnPointBlue__Class *)
           (wo->klass->_1).typeHierarchy[(TypeInfo__MVSpawnPointBlue->_1).typeHierarchyDepth - 1] ==
           TypeInfo__MVSpawnPointBlue)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
}


/* AvatarEditModeCamera+<>c() */

void Assembly-CSharp.dll::AvatarEditModeCamera+<>c::AvatarEditModeCamera_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarEditModeCamera____c);
    cRam_? = '\x01';
  }
  value = (AvatarEditModeCamera_c *)func_?(TypeInfo__AvatarEditModeCamera____c);
  if (value != (AvatarEditModeCamera_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__AvatarEditModeCamera____c->static_fields->__9 = value;
    func_?(TypeInfo__AvatarEditModeCamera____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

