
/* Void FakeGainEffect(Int32) */

void Assembly-CSharp.dll::FakeGamePointGainEffectManager::
     FakeGamePointGainEffectManager_FakeGainEffect(int32_t amountOfGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FakeGamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FakeGamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FakeGamePointGainEffectManager);
  }
  if (TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect !=
      (Action_1_Int32_ *)0x0) {
    if ((((uint)(TypeInfo__FakeGamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__FakeGamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FakeGamePointGainEffectManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar1 == (GameSessionData *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = (pGVar1->fields).gameMode;
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if ((iVar3 == 0) || (bVar4 != 0)) {
      if ((((uint)(TypeInfo__FakeGamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__FakeGamePointGainEffectManager->_1).cctor_started == 0)) {
        func_?();
      }
      this = (Action_1_UIPushOption_ *)
             TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
      if (this == (Action_1_UIPushOption_ *)0x0) goto code_?;
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this,amountOfGamePoints,MethodInfo__System__Action<int>__Invoke_int_);
    }
  }
  return;
}


/* Boolean ShouldShowFakeGainEffect() */

bool Assembly-CSharp.dll::FakeGamePointGainEffectManager::
     FakeGamePointGainEffectManager_ShouldShowFakeGainEffect(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
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

