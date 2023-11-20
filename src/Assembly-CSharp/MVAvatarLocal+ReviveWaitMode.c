
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveWaitMode::MVAvatarLocal_ReviveWaitMode_Activate
               (MVAvatarLocal_ReviveWaitMode *this,AvatarRuntimeState__Enum fromMode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      pAVar2 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
      if ((pAVar2 != (AvatarLocal *)0x0) &&
         ((pAVar2->fields).avatarCameraController != (IAvatarCameraController *)0x0)) {
        func_?();
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Idle,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._.mvAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)pMVar1,0.5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveWaitMode::MVAvatarLocal_ReviveWaitMode_DeActivate
               (MVAvatarLocal_ReviveWaitMode *this,AvatarRuntimeState__Enum toMode,
               MethodInfo *method)

{
  this_00 = (this->fields)._.mvAvatar;
  if (this_00 != (MVAvatarLocal *)0x0) {
    MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)this_00,1.0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVAvatarLocal+ReviveWaitMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveWaitMode::MVAvatarLocal_ReviveWaitMode__ctor
               (MVAvatarLocal_ReviveWaitMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.mvAvatar = mvAvatar;
  func_?(&this->fields,mvAvatar);
  (this->fields)._.modeTypes = 4;
  return;
}

