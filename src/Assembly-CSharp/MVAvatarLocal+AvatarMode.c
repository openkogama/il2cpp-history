
/* Void SetModeTypes() */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
               (MVAvatarLocal_AvatarMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this = (MVAvatarLocal_AvatarMode *)(this->fields).modeTypes;
    this_00 = (pMVar1->fields)._.SpawnRoleModeTypes;
    value = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

