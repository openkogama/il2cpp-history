
/* Void HaveShownGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
       gamePointAmountShown;
  if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown !=
      (Action_1_Int32_ *)0x0) {
    pAVar1 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,gamePointAmountShown,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void HaveShownInGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownInGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown !=
      (Action_1_Int32_ *)0x0) {
    pAVar1 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,gamePointAmountShown,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void HaveShownTierProgressBarGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
       gamePointAmountShown;
  if (TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
      != (Action_1_Int32_ *)0x0) {
    pAVar1 = TypeInfo__GamePointGainEffectManager->static_fields->
             OnTierProgressBarGamePointGainEffectShown;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,gamePointAmountShown,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void PostResetCleanup() */

void Assembly-CSharp.dll::GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__GamePointGainEffectManager->static_fields->
                    OnInGamePointGainEffectShown >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__GamePointGainEffectManager->static_fields->
                    OnTierProgressBarGamePointGainEffectShown >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Int32 get_GamePointAmountShown() */

int32_t Assembly-CSharp.dll::GamePointGainEffectManager::
        GamePointGainEffectManager_get_GamePointAmountShown(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
}

