
/* Void HaveShownGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointGainEffectManager);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
       gamePointAmountShown;
  if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown !=
      (Action_1_Int32_ *)0x0) {
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePointGainEffectManager);
    }
    this = (Action_1_UIPushOption_ *)
           TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    if (this == (Action_1_UIPushOption_ *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this,gamePointAmountShown,MethodInfo__System__Action<int>__Invoke_int_);
  }
  return;
}


/* Void HaveShownInGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownInGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointGainEffectManager);
  }
  if (TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown !=
      (Action_1_Int32_ *)0x0) {
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePointGainEffectManager);
    }
    this = (Action_1_UIPushOption_ *)
           TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
    if (this == (Action_1_UIPushOption_ *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this,gamePointAmountShown,MethodInfo__System__Action<int>__Invoke_int_);
  }
  return;
}


/* Void HaveShownTierProgressBarGamePointGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectManager::
     GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
               (int32_t gamePointAmountShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointGainEffectManager);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
       gamePointAmountShown;
  if (TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
      != (Action_1_Int32_ *)0x0) {
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePointGainEffectManager);
    }
    this = (Action_1_UIPushOption_ *)
           TypeInfo__GamePointGainEffectManager->static_fields->
           OnTierProgressBarGamePointGainEffectShown;
    if (this == (Action_1_UIPushOption_ *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this,gamePointAmountShown,MethodInfo__System__Action<int>__Invoke_int_);
  }
  return;
}


/* Void PostResetCleanup() */

void Assembly-CSharp.dll::GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointGainEffectManager);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  return;
}


/* Int32 get_GamePointAmountShown() */

int32_t Assembly-CSharp.dll::GamePointGainEffectManager::
        GamePointGainEffectManager_get_GamePointAmountShown(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointGainEffectManager);
  }
  return TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
}

