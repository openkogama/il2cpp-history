
/* Void FakeGainEffect(Int32) */

void Assembly-CSharp.dll::FakeGamePointGainEffectManager::
     FakeGamePointGainEffectManager_FakeGainEffect(int32_t amountOfGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FakeGamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect ==
      (Action_1_Int32_ *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    iVar2 = (pGVar1->fields).gameMode;
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).profileID < 1 || iVar2 == 0) {
        pAVar3 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
        if (pAVar3 == (Action_1_Int32_ *)0x0) goto DAT_?;
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,amountOfGamePoints,(pAVar3->fields)._._.method);
      }
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean ShouldShowFakeGainEffect() */

bool Assembly-CSharp.dll::FakeGamePointGainEffectManager::
     FakeGamePointGainEffectManager_ShouldShowFakeGainEffect(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    iVar2 = (pGVar1->fields).gameMode;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      return (pGVar1->fields).profileID < 1 || iVar2 == 0;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

