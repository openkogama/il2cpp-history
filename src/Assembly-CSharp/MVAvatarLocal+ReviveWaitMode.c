
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveWaitMode::MVAvatarLocal_ReviveWaitMode_Activate
               (MVAvatarLocal_ReviveWaitMode *this,AvatarRuntimeState__Enum fromMode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      this_01 = (AvatarUIHandlerRemote *)
                MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
      if (this_01 != (AvatarUIHandlerRemote *)0x0) {
        pSVar2 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                           (this_01,(MethodInfo *)0x0);
        if (pSVar2 != (ShieldBar *)0x0) {
          func_?();
          pMVar1 = (this->fields)._.mvAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Idle,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._.mvAvatar;
            if ((pMVar1 != (MVAvatarLocal *)0x0) &&
               (this_00 = (pMVar1->fields)._.avatar, this_00 != (Avatar_1 *)0x0)) {
              this_02 = (AvatarFader *)
                        System.Core.dll::System::Linq::
                        Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                        Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
                                   this_00,(MethodInfo *)0x0);
              if (this_02 != (AvatarFader *)0x0) {
                AvatarFader::AvatarFader_SetTransparency(this_02,0.5,(MethodInfo *)0x0);
                return;
              }
            }
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
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._.avatar, this_00 != (Avatar_1 *)0x0)) {
    this_01 = (AvatarFader *)
              System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System
              ::Object]::
              Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (AvatarFader *)0x0) {
      AvatarFader::AvatarFader_SetTransparency(this_01,1.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVAvatarLocal+ReviveWaitMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveWaitMode::MVAvatarLocal_ReviveWaitMode__ctor
               (MVAvatarLocal_ReviveWaitMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._.mvAvatar = mvAvatar;
  (this->fields)._.modeTypes = 4;
  return;
}

