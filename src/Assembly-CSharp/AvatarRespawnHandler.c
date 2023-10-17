
/* Void Respawn() */

void Assembly-CSharp.dll::AvatarRespawnHandler::AvatarRespawnHandler_Respawn
               (AvatarRespawnHandler *this,MethodInfo *method)

{
  pAVar1 = this;
  if ((this->fields).shouldRespawnAsGhost == 0) {
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 != (FlagDebriefingControl *)0x0) {
      this_00 = (this->fields).mvAvatar;
      if ((pFVar2->fields).IsInFlagDebriefing == 0) {
        if (this_00 == (MVAvatarLocal *)0x0) goto code_?;
        this = (AvatarRespawnHandler *)CONCAT31(this._1_3_,1);
      }
      else {
        if (this_00 == (MVAvatarLocal *)0x0) goto code_?;
        this = (AvatarRespawnHandler *)CONCAT31(this._1_3_,7);
      }
code_?:
      MVAvatarLocal::MVAvatarLocal_SetMode(this_00,(AvatarRuntimeState__Enum)this,(MethodInfo *)0x0)
      ;
      (pAVar1->fields).shouldRespawnAsGhost = 1;
      return;
    }
  }
  else {
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 != (FlagDebriefingControl *)0x0) {
      if ((pFVar2->fields).IsInFlagDebriefing != 0) {
        return;
      }
      this_00 = (this->fields).mvAvatar;
      if (this_00 != (MVAvatarLocal *)0x0) {
        this = (AvatarRespawnHandler *)CONCAT31(this._1_3_,9);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

