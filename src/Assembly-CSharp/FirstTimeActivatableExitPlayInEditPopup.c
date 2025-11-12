
/* Void OnDisable() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPopup::
     FirstTimeActivatableExitPlayInEditPopup_OnDisable
               (FirstTimeActivatableExitPlayInEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsEventAllowedInMode
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pFVar2 = (this->fields)._.firstTimeEventMessage;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pFVar2 != (FirstTimeEventMessage *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pFVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        (this->fields).setFirstTimeEventOnEnable = 1;
      }
    }
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  CVar3._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
  if (this != (FirstTimeActivatableExitPlayInEditPopup *)0x0) {
    CVar3._.m_CachedPtr = (this->fields)._._._._._._._;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(CVar3._.m_CachedPtr,0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPopup::
     FirstTimeActivatableExitPlayInEditPopup_OnEnable
               (FirstTimeActivatableExitPlayInEditPopup *this,MethodInfo *method)

{
  if ((this->fields)._._.waitingForDelay != 0) {
    routine = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_ShowDelay
                        ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  if ((this->fields).setFirstTimeEventOnEnable != 0) {
    FirstTimeActivatableMessage::FirstTimeActivatableMessage_DestroyMessage
              ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._._.firstTimeEvent,(MethodInfo *)0x0);
    (this->fields).setFirstTimeEventOnEnable = 0;
  }
  return;
}

