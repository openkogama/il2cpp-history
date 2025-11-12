
/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_Initialize
               (AvatarLimbManager_AvatarEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).limbRotator = limbRotator;
  if (bVar1) {
    (this->fields).lifeTime = lifeTime;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).limbRotator >> 0xc);
  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
  do {
    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
    LOCK();
    bVar1 = uVar4 == *puVar5;
    if (bVar1) {
      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (!bVar1);
  (this->fields).lifeTime = lifeTime;
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_StartEmote
               (AvatarLimbManager_AvatarEmote *this,MethodInfo *method)

{
  (this->fields).duration = (this->fields).lifeTime;
  (this->fields).isActive = 1;
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).emote,(pAVar1->fields)._._.method);
    return;
  }
  return;
}

