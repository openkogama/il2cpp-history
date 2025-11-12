
/* AvatarInteractable+DamageSource() */

void Assembly-CSharp.dll::AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInteractable__DamageSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarInteractable_DamageSource *)
           FUN_?(TypeInfo__AvatarInteractable__DamageSource);
  (pAVar1->fields).time = 0.0;
  TypeInfo__AvatarInteractable__DamageSource->static_fields->none = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AvatarInteractable__DamageSource->static_fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* AvatarInteractable+DamageSource(MVPlayer, PlayerKilledByType, String) */

void Assembly-CSharp.dll::AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
               (AvatarInteractable_DamageSource *this,MVPlayer *shooter,
               PlayerKilledByType__Enum damageType,String *weaponName,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).shooter = shooter;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).damageType = (uint8_t)damageType;
  (this->fields).weaponName = weaponName;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).weaponName >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcRam_?)();
  (this->fields).time = fVar9;
  return;
}


/* Boolean get_Outdated() */

bool Assembly-CSharp.dll::AvatarInteractable+DamageSource::
     AvatarInteractable_DamageSource_get_Outdated
               (AvatarInteractable_DamageSource *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  return _UNK_? < fVar4 - (this->fields).time;
}

