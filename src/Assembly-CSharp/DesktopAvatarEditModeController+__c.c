
/* Boolean <InitializeLocalAvatar>b__23_0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::DesktopAvatarEditModeController+<>c::
     DesktopAvatarEditModeController_c__InitializeLocalAvatar_b__23_0
               (DesktopAvatarEditModeController_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSpawnPointBlue);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    if (((TypeInfo__MVSpawnPointBlue->_1).naturalAligment <= (wo->klass->_1).naturalAligment) &&
       ((MVSpawnPointBlue__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVSpawnPointBlue->_1).naturalAligment - 1] ==
        TypeInfo__MVSpawnPointBlue)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
}


/* DesktopAvatarEditModeController+<>c() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController+<>c::
     DesktopAvatarEditModeController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopAvatarEditModeController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopAvatarEditModeController____c;
  value = (DesktopAvatarEditModeController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9 = value;
  func_?(TypeInfo__DesktopAvatarEditModeController____c->static_fields,value);
  return;
}

