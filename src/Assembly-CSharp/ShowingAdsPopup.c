
/* Void Initialize(Single, Action) */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_Initialize
               (ShowingAdsPopup *this,float timeoutTime,Action *OnSkipPressed,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).skipAction = OnSkipPressed;
  if (bVar1) {
    method = (MethodInfo *)0xADDR;
    uVar2 = (uint)((ulonglong)&(this->fields).skipAction >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    OnSkipPressed = (Action *)(ulonglong)(uVar2 & 0x3f);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (longlong)OnSkipPressed;
      }
      UNLOCK();
    } while (!bVar1);
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?,timeoutTime,OnSkipPressed,method),
     pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  fVar8 = (float)(*pcRam_?)();
  (this->fields).timeoutTime = timeoutTime;
  (this->fields).startTime = fVar8;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_OnDestroy
               (ShowingAdsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Resuming_audio);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Resuming_audio,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted != 0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted = 0;
    bVar1 = TypeInfo__MainCameraManager->static_fields->storedMuteValue;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MainCameraManager,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    TypeInfo__MainCameraManager->static_fields->isMuted = bVar1;
    if (TypeInfo__MainCameraManager->static_fields->isMuted == 0) {
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar2 = TypeInfo__MainCameraManager->static_fields->baseVolume;
    }
    else {
      fVar2 = 0.0;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(fVar2);
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    pAVar5 = TypeInfo__MainCameraManager->static_fields->OnMuteChange;
    if (pAVar5 != (Action_1_Boolean_ *)0x0) {
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MainCameraManager);
      }
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,
                 TypeInfo__MainCameraManager->static_fields->isMuted,(pAVar5->fields)._._.method);
    }
    return;
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_OnEnable
               (ShowingAdsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Muting_audio);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Muting_audio,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted != 0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    return;
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted = 1;
  TypeInfo__MainCameraManager->static_fields->storedMuteValue =
       TypeInfo__MainCameraManager->static_fields->isMuted;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->isMuted = 1;
  if (TypeInfo__MainCameraManager->static_fields->isMuted == 0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar1 = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    fVar1 = 0.0;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(fVar1);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  pAVar4 = TypeInfo__MainCameraManager->static_fields->OnMuteChange;
  if (pAVar4 != (Action_1_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    (*(pAVar4->fields)._._.invoke_impl)
              ((pAVar4->fields)._._.method_code,TypeInfo__MainCameraManager->static_fields->isMuted,
               (pAVar4->fields)._._.method);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_Update
               (ShowingAdsPopup *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if (fVar3 - (this->fields).startTime < (this->fields).timeoutTime) {
    return;
  }
  this_00 = (this->fields).button;
  if ((this_00 == (Button *)0x0) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (ShowingAdsPopup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,0);
  return;
}

