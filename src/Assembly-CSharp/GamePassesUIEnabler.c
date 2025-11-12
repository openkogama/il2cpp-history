
/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesUIEnabler::GamePassesUIEnabler_OnDestroy
               (GamePassesUIEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesUIEnabler__OnGamePassProgression__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GamePassesUIEnabler__OnGamePassProgression__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                  >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void OnGamePassProgression() */

void Assembly-CSharp.dll::GamePassesUIEnabler::GamePassesUIEnabler_OnGamePassProgression
               (GamePassesUIEnabler *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                    ((MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,bVar1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,bVar1);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesUIEnabler::GamePassesUIEnabler_Start
               (GamePassesUIEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesUIEnabler__OnGamePassProgression__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  value = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                    ((MethodInfo *)0x0);
  if (this_00 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,value,(MethodInfo *)0x0);
  pAVar2 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__GamePassesUIEnabler__OnGamePassProgression__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar2 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar2,TypeInfo__System__Action);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar2,TypeInfo__System__Action);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                   &TypeInfo__GamePassProgressionController->static_fields->
                    OnGamePassesProgressionUpdate >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

