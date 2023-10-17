
/* Void FakeGainEffect(Int32) */

void Assembly-CSharp.dll::FakeGamePointGainEffectManager::
     FakeGamePointGainEffectManager_FakeGainEffect(int32_t amountOfGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FakeGamePointGainEffectManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect !=
      (Action_1_Int32_ *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = (pGVar1->fields).gameMode;
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (iVar3 == 0) {
      bVar4 = 1;
    }
    if (bVar4 != 0) {
      pAVar5 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
      if (pAVar5 == (Action_1_Int32_ *)0x0) goto code_?;
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,amountOfGamePoints,(pAVar5->fields)._._.method);
    }
  }
  return;
}


/* Boolean ShouldShowFakeGainEffect() */

bool Assembly-CSharp.dll::FakeGamePointGainEffectManager::
     FakeGamePointGainEffectManager_ShouldShowFakeGainEffect(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    iVar2 = (pGVar1->fields).gameMode;
    bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (iVar2 == 0) {
      bVar3 = 1;
    }
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}

