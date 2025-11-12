
/* Void Update() */

void Assembly-CSharp.dll::EnableOnlyInPlayMode::EnableOnlyInPlayMode_Update
               (EnableOnlyInPlayMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
  goto code_?;
  pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
  if ((pMVar3 != (MVLocalPlayer *)0x0) && ((pMVar3->fields)._.playerState == 1)) {
    pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar4 == (SpawnRoleDataMediator *)0x0) ||
       (pSVar5 = (pSVar4->fields).SpawnRoleModeTypeWrapper,
       pSVar5 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar6 = (pSVar5->fields).spawnRoleType;
    if ((pSVar6 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
       (pSVar7 = (pSVar6->fields).subscribableVariable,
       pSVar7 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
    goto code_?;
    if (((pSVar7->fields)._.value & 1) != 0) {
      return;
    }
  }
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pGVar8 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar9 = (pGVar8->fields)._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar8,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    cVar12 = (*pcRam_?)(pvVar9);
    if (cVar12 != '\0') {
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar8 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,0,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

