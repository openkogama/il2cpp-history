
/* Void HaveShownGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
       gamePointAmountShown;
  pAVar1 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,gamePointAmountShown,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void HaveShownInGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownInGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,gamePointAmountShown,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void HaveShownTierProgressBarGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
       gamePointAmountShown;
  pAVar1 = TypeInfo__GamePointGainEffectManager->static_fields->
           OnTierProgressBarGamePointGainEffectShown;
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,gamePointAmountShown,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void PostResetCleanup() */

void Assembly-CSharp.dll::GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  func_?(TypeInfo__GamePointGainEffectManager->static_fields,0);
  TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  func_?(&TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown
                  ,0);
  TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  func_?(&TypeInfo__GamePointGainEffectManager->static_fields->
                   OnTierProgressBarGamePointGainEffectShown,0);
  return;
}


/* Int32 get_GamePointAmountShown() */

int32_t Assembly-CSharp.dll::GamePointGainEffectManager::
        GamePointGainEffectManager_get_GamePointAmountShown(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  return TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
}

