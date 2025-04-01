
/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_Initialize
               (AvatarLimbManager_AvatarEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  ppAVar1 = &(this->fields).limbRotator;
  *ppAVar1 = limbRotator;
  func_?(ppAVar1,limbRotator);
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
  pAVar1 = (this->fields).OnEmoteEnd;
  (this->fields).duration = 0.0;
  (this->fields).isActive = 0;
  if (pAVar1 != (Action_1_EmoteTypes_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).emote,(pAVar1->fields)._._.method);
  }
  return;
}

