
/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_Initialize
               (AvatarLimbManager_AvatarEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  (this->fields).limbRotator = limbRotator;
  func_?(&(this->fields).limbRotator,limbRotator);
  (this->fields).lifeTime = lifeTime;
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_StartEmote
               (AvatarLimbManager_AvatarEmote *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  (this->fields).duration = (this->fields).lifeTime;
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_StopEmote
               (AvatarLimbManager_AvatarEmote *this,MethodInfo *method)

{
  (this->fields).duration = 0.0;
  (this->fields).isActive = 0;
  if ((this->fields).OnEmoteEnd != (Action_1_EmoteTypes_ *)0x0) {
    pAVar1 = (this->fields).OnEmoteEnd;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).emote,(pAVar1->fields)._._.method);
  }
  return;
}

