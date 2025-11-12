
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_CheckCanUse
               (MVWorldObjectSpawnerVehicle *this,int32_t woId,
               MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnStateWrapper;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    if ((pSVar1->fields)._SpawnState_k__BackingField != 2) {
      if (avatarInteractable == (MVInteractableBase *)0x0) goto code_?;
      cVar2 = (*(avatarInteractable->klass->vtable).__unknown_7.methodPtr)
                        (avatarInteractable,9,(avatarInteractable->klass->vtable).__unknown_7.method
                        );
      if (cVar2 == '\0') {
        cVar2 = (*(avatarInteractable->klass->vtable).__unknown_7.methodPtr)
                          (avatarInteractable,7,
                           (avatarInteractable->klass->vtable).__unknown_7.method);
        if (cVar2 == '\0') {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  FUN_?(this,CONCAT44(in_register_00000014,woId));
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
     MVWorldObjectSpawnerVehicle_CompareWithKoGaMaPackage
               (MVWorldObjectSpawnerVehicle *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_starAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameCoinAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnWorldObjectID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_levelAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_a_vehicle_spawner);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Did_not_find_other_spawnWorldObj);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    pMVar1 = wo->klass;
    bVar2 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
       ((MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVWorldObjectSpawnerVehicle)) {
      bVar2 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      if (((pMVar1->_1).naturalAligment < bVar2) ||
         ((MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        FUN_?(wo);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._._._._._.data;
      if (pDVar5 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar5,(Object *)StringLiteral_gameCoinAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar6) {
        return 0;
      }
      pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._._._._._.data;
      if (pDVar5 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar5,(Object *)StringLiteral_starAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar6) {
        return 0;
      }
      pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._._._._._.data;
      if (pDVar5 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar5,(Object *)StringLiteral_levelAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar6) {
        return 0;
      }
      pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._._._._._.data;
      if (pDVar5 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar5,(Object *)StringLiteral_RequiredRank,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar6) {
        return 0;
      }
      pMVar7 = MVBlueprintBase::MVBlueprintBase_GetChild
                         ((MVBlueprintBase *)wo,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
      if (pMVar7 != (MVWorldObjectClient *)0x0) {
        pMVar7 = MVBlueprintBase::MVBlueprintBase_GetChild
                           ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,
                            (MethodInfo *)0x0);
        if (pMVar7 != (MVWorldObjectClient *)0x0) {
          bVar4 = FUN_?();
          return bVar4;
        }
        goto code_?;
      }
      message = StringLiteral_Did_not_find_other_spawnWorldObj;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        message = StringLiteral_Did_not_find_other_spawnWorldObj;
      }
      goto code_?;
    }
  }
  message = StringLiteral_Not_a_vehicle_spawner;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
    message = StringLiteral_Not_a_vehicle_spawner;
  }
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)message,(MethodInfo *)0x0);
  return 0;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
          MVWorldObjectSpawnerVehicle_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVWorldObjectSpawnerVehicle *this,
                    float gridSize,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    fVar8 = VStack_3.z;
    pGVar1 = (this->fields)._._._._.gameObject;
    VStack_9.x = VStack_3.x;
    VStack_9.y = 2.0;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_10.x = 0.0;
      QStack_10.y = 0.0;
      QStack_10.z = 0.0;
      QStack_10.w = 0.0;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pVVar6 = (Vector3 *)(*pcVar5)();
        return pVVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        pVVar6 = (Vector3 *)(*pcVar5)();
        return pVVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&QStack_10);
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_3.z = position->z;
      VStack_3.x = position->x;
      VStack_3.y = position->y;
      aQStack_11[0].x = QStack_10.x;
      aQStack_11[0].y = QStack_10.y;
      aQStack_11[0].z = QStack_10.z;
      aQStack_11[0].w = QStack_10.w;
      VStack_9.z = fVar8;
      pVVar6 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         ((Vector3 *)&QStack_10,&VStack_3,aQStack_11,gridSize,&VStack_9,
                          (MethodInfo *)0x0);
      fVar12 = pVVar6->y;
      fVar8 = pVVar6->z;
      __return_storage_ptr__->x = pVVar6->x;
      __return_storage_ptr__->y = fVar12;
      __return_storage_ptr__->z = fVar8;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_Initialize
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameCoinLogic);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnWorldObjectID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_get_spawnPoint_child_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0);
    return;
  }
  MVWorldObjectSpawner::MVWorldObjectSpawner_Initialize
            ((MVWorldObjectSpawner *)this,(MethodInfo *)0x0);
  pMVar1 = MVGroup::MVGroup_GetChild
                      ((MVGroup *)this,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar4) ||
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        TypeInfo__MVVehicleBase)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar5 = (this->fields).spawnerObject;
  if (pSVar5 != (SpawnerObject *)0x0) {
    pTVar6 = (this->fields)._.triggerBoxEvents;
    pGVar7 = (pSVar5->fields).UseInteractorRotator;
    if (pTVar6 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar6,(MethodInfo *)0x0);
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,(this->klass->vtable).Use.method);
      checkCanUseFunction =
           (Func_3_Int32_MVInteractableBase_Boolean_ *)
           FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      FUN_?(checkCanUseFunction,this,(this->klass->vtable).CheckCanUse.method);
      pUVar8 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar8,(MVWorldObjectClient *)this,pGVar7,1,triggerCollider,useFunction,
                 checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
      bVar9 = iRam_? != 0;
      (this->fields)._.useInteractor = pUVar8;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)&(this->fields)._.useInteractor >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar12 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pTVar6 = (this->fields)._.triggerBoxEvents;
      pUVar8 = (this->fields)._.useInteractor;
      pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar14,(Object *)pUVar8,
                 MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar6 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
                  (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar14,(MethodInfo *)0x0);
        pTVar6 = (this->fields)._.triggerBoxEvents;
        pUVar8 = (this->fields)._.useInteractor;
        pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar14,(Object *)pUVar8,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar6 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
                    (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar14,(MethodInfo *)0x0);
          MVWorldObjectSpawnerVehicle_InitializeCommon(this,(MethodInfo *)0x0);
          pSVar5 = (this->fields).spawnerObject;
          if (pSVar5 != (SpawnerObject *)0x0) {
            pGVar7 = (pSVar5->fields).UseInteractorRotator;
            pUVar15 = (UseRequirement *)FUN_?(TypeInfo__GameCoinLogic);
            bVar9 = iRam_? != 0;
            pUVar15[1].monitor = (MonitorData *)0x0;
            *(undefined4 *)&pUVar15[1].fields = 0;
            *(undefined4 *)((longlong)&pUVar15[1].klass + 4) = 1;
            *(undefined1 *)&pUVar15[3].klass = 1;
            *(GameObject **)&pUVar15[2].fields = pGVar7;
            if (bVar9) {
              uVar10 = (uint)((ulonglong)&pUVar15[2].fields >> 0xc);
              uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
              do {
                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                LOCK();
                bVar9 = uVar12 == *puVar13;
                if (bVar9) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            pUVar8 = (this->fields)._.useInteractor;
            if (pUVar8 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement(pUVar8,pUVar15,(MethodInfo *)0x0);
              pSVar5 = (this->fields).spawnerObject;
              if (pSVar5 != (SpawnerObject *)0x0) {
                pGVar7 = (pSVar5->fields).UseInteractorRotator;
                pUVar15 = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
                bVar9 = iRam_? != 0;
                *(undefined8 *)&pUVar15[1].fields = 0;
                *(undefined4 *)&pUVar15[2].klass = 0;
                *(undefined1 *)((longlong)&pUVar15[1].klass + 4) = 1;
                pUVar15[2].monitor = (MonitorData *)pGVar7;
                if (bVar9) {
                  uVar10 = (uint)((ulonglong)&pUVar15[2].monitor >> 0xc);
                  uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                  do {
                    uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                    puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                    LOCK();
                    bVar9 = uVar12 == *puVar13;
                    if (bVar9) {
                      *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar9);
                }
                pUVar8 = (this->fields)._.useInteractor;
                if (pUVar8 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement(pUVar8,pUVar15,(MethodInfo *)0x0);
                  pSVar5 = (this->fields).spawnerObject;
                  if (pSVar5 != (SpawnerObject *)0x0) {
                    pGVar7 = (pSVar5->fields).UseInteractorRotator;
                    this_02 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
                    GameRankRequirement::GameRankRequirement__ctor
                              (this_02,pGVar7,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
                    pUVar8 = (this->fields)._.useInteractor;
                    if (pUVar8 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar8,(UseRequirement *)this_02,(MethodInfo *)0x0);
                      pSVar5 = (this->fields).spawnerObject;
                      if (pSVar5 != (SpawnerObject *)0x0) {
                        pGVar7 = (pSVar5->fields).UseInteractorRotator;
                        this_03 = (RewardedAdRequirement *)
                                  FUN_?(
                                               TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                               );
                        WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                        RewardedAdRequirement__ctor(this_03,pGVar7,(MethodInfo *)0x0);
                        pUVar8 = (this->fields)._.useInteractor;
                        if (pUVar8 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar8,(UseRequirement *)this_03,(MethodInfo *)0x0);
                          pUVar8 = (this->fields)._.useInteractor;
                          if ((((pUVar8 != (UseInteractor *)0x0) &&
                               (this_00 = (pUVar8->fields).useInteractorVisuals,
                               this_00 != (UseInteractorVisualization *)0x0)) &&
                              (UseInteractorVisualization::UseInteractorVisualization_UpdateData
                                         (this_00,(this->fields)._._._._._.data,
                                          (pUVar8->fields).woOwnerID,(MethodInfo *)0x0),
                              pMVar1 != (MVWorldObjectClient *)0x0)) &&
                             (this_01 = *(Component **)&pMVar1[1].fields._.position,
                             this_01 != (Component *)0x0)) {
                            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject(this_01,(MethodInfo *)0x0);
                            bVar9 = iRam_? != 0;
                            (this->fields).lodGameObject = pGVar7;
                            if (bVar9) {
                              uVar10 = (uint)((ulonglong)&(this->fields).lodGameObject >> 0xc);
                              uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                              do {
                                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                                LOCK();
                                bVar9 = uVar12 == *puVar13;
                                if (bVar9) {
                                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar9);
                            }
                            pGVar7 = (this->fields)._._._._.gameObject;
                            (this->fields)._._._._.interactionFlags =
                                 (pMVar1->fields).interactionFlags |
                                 (this->fields)._._._._.interactionFlags | 0x200300008;
                            if (pGVar7 != (GameObject *)0x0) {
                              pGVar16 = (GreyOutObjectScript *)
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_AddComponent_1
                                                  (pGVar7,
                                                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                                                  );
                              bVar9 = iRam_? != 0;
                              (this->fields).pickupItemObjectScript = pGVar16;
                              if (bVar9) {
                                uVar10 = (uint)((ulonglong)&(this->fields).pickupItemObjectScript >>
                                               0xc);
                                uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                                do {
                                  uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                                  puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                                  LOCK();
                                  bVar9 = uVar12 == *puVar13;
                                  if (bVar9) {
                                    *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar9);
                              }
                              pGVar16 = (this->fields).pickupItemObjectScript;
                              this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                  ((MethodInfo *)0x0);
                              if (((this_04 != (MVWorldObjectClientManager *)0x0) &&
                                  (pMVar1 = MVWorldObjectClientManager::
                                             MVWorldObjectClientManager_GetWorldObjectClient
                                                       (this_04,(this->fields)._.spawnWorldObjectID,
                                                        (MethodInfo *)0x0),
                                  pMVar1 != (MVWorldObjectClient *)0x0)) &&
                                 (pGVar16 != (GreyOutObjectScript *)0x0)) {
                                bVar9 = iRam_? != 0;
                                (pGVar16->fields).pickupObject = (pMVar1->fields).gameObject;
                                if (bVar9) {
                                  uVar10 = (uint)((ulonglong)&(pGVar16->fields).pickupObject >> 0xc)
                                  ;
                                  uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                                  do {
                                    uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                                    puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                                    LOCK();
                                    bVar9 = uVar12 == *puVar13;
                                    if (bVar9) {
                                      *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar9);
                                }
                                GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                                          (pGVar16,(MethodInfo *)0x0);
                                (this->fields).initFlag = 1;
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__CullingSubscriberBase,0);
                                  LOCK();
                                  UNLOCK();
                                  FUN_?(&
                                                MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  FUN_?(&
                                                TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                               );
                                  LOCK();
                                  UNLOCK();
                                  FUN_?(&
                                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pUVar17 = (this->fields)._._._._.PositionChanged;
                                pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                                          FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  );
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[System::Object,System::Object]::
                                UnityAction_2_System_Object_System_Object___ctor
                                          (pUVar14,(Object *)this,
                                           MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                           ,(MethodInfo *)0x0);
                                pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                    ((Delegate *)pUVar17,(Delegate *)pUVar14,
                                                     (MethodInfo *)0x0);
                                pUVar19 = 
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                ;
                                if (pDVar18 == (Delegate *)0x0) {
                                  (this->fields)._._._._.PositionChanged =
                                       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                        *)0x0;
                                }
                                else {
                                  pUVar17 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                             *)FUN_?(pDVar18,
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  );
                                  if (pUVar17 ==
                                      (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *
                                      )0x0) {
                                    FUN_?(pDVar18,pUVar19);
                                    pcVar3 = (code *)swi(3);
                                    (*pcVar3)();
                                    return;
                                  }
                                  (this->fields)._._._._.PositionChanged = pUVar17;
                                  pUVar19 = 
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                  ;
                                  lVar20 = FUN_?(pDVar18,
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  );
                                  if (lVar20 == 0) {
                                    FUN_?(pDVar18,pUVar19);
                                    pcVar3 = (code *)swi(3);
                                    (*pcVar3)();
                                    return;
                                  }
                                }
                                if (iRam_? != 0) {
                                  uVar10 = (uint)((ulonglong)&(this->fields)._._._._.PositionChanged
                                                 >> 0xc);
                                  uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                                  do {
                                    uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                                    puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                                    LOCK();
                                    bVar9 = uVar12 == *puVar13;
                                    if (bVar9) {
                                      *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar9);
                                }
                                puVar21 = (undefined8 *)
                                          (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                                                    (&VStack_22,this,
                                                     (this->klass->vtable).get_WorldPosition_1.
                                                     method);
                                uVar23 = *puVar21;
                                fVar24 = *(float *)(puVar21 + 1);
                                callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                                           FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                                  );
                                FUN_?(callback,this);
                                pCVar25 = (CullingSubscriberBase *)
                                          FUN_?(TypeInfo__CullingSubscriberBase);
                                CullingSubscriberBase::CullingSubscriberBase__ctor_1
                                          (pCVar25,callback,(MethodInfo *)0x0);
                                VStack_22._0_8_ = uVar23;
                                VStack_22.z = fVar24;
                                CullingSubscriberBase::CullingSubscriberBase_Setup
                                          (pCVar25,_UNK_?,&VStack_22,(MethodInfo *)0x0);
                                bVar9 = iRam_? != 0;
                                (this->fields).cullingSubscriberBase = pCVar25;
                                if (bVar9) {
                                  uVar10 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase
                                                 >> 0xc);
                                  uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                                  do {
                                    uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                                    puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                                    LOCK();
                                    bVar9 = uVar12 == *puVar13;
                                    if (bVar9) {
                                      *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar9);
                                }
                                pCVar25 = (this->fields).cullingSubscriberBase;
                                if (pCVar25 == (CullingSubscriberBase *)0x0) {
                                  FUN_?();
                                  pcVar3 = (code *)swi(3);
                                  (*pcVar3)();
                                  return;
                                }
                                (pCVar25->fields)._DistanceBandIndex_k__BackingField = 2;
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_InitializeCommon
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnWorldObjectID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__MVVehicleBase)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar4 != (PrefabPool *)0x0) {
    pGVar5 = (pPVar4->fields).particleCFX_GroundAura;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7._0_4_ = (pVVar6->zeroVector).x;
    uVar7._4_4_ = (pVVar6->zeroVector).y;
    fVar8 = (pVVar6->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar10._0_4_ = (pQVar9->identityQuaternion).x;
    uVar10._4_4_ = (pQVar9->identityQuaternion).y;
    uVar11._0_4_ = (pQVar9->identityQuaternion).z;
    uVar11._4_4_ = (pQVar9->identityQuaternion).w;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    uStack_12 = CONCAT44(uStack_12._4_4_,fVar8);
    uStack_13 = uVar7;
    uStack_14 = uVar10;
    uStack_15 = uVar11;
    pGVar5 = (GameObject *)FUN_?(pGVar5);
    bVar16 = iRam_? != 0;
    (this->fields).groundAura = pGVar5;
    if (bVar16) {
      uVar17 = (uint)((ulonglong)&(this->fields).groundAura >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar16 = uVar19 == *puVar20;
        if (bVar16) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar16);
    }
    pGVar5 = (this->fields).groundAura;
    if (pGVar5 != (GameObject *)0x0) {
      pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar5,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._._._._.gameObject;
      if ((pGVar5 != (GameObject *)0x0) &&
         (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar5,(MethodInfo *)0x0), pTVar21 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar21,value,(MethodInfo *)0x0);
        pGVar5 = (this->fields).groundAura;
        if (pGVar5 != (GameObject *)0x0) {
          pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_14._0_4_ = (pVVar6->zeroVector).x;
          uStack_14._4_4_ = (pVVar6->zeroVector).y;
          fVar8 = (pVVar6->zeroVector).z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_13._0_4_ = (pVVar6->upVector).x;
          uStack_13._4_4_ = (pVVar6->upVector).y;
          fVar22 = (pVVar6->upVector).z;
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            lVar23 = (*(pMVar1->klass->vtable).GetLocalBounds.methodPtr)
                               (auStack_24,pMVar1,1,(pMVar1->klass->vtable).GetLocalBounds.method)
            ;
            fVar25 = (float)((uint)*(undefined8 *)(lVar23 + 0x10) ^ _UNK_?);
            if (pTVar21 != (Transform *)0x0) {
              uStack_14 = CONCAT44(uStack_13._4_4_ * fVar25 * _UNK_? + uStack_14._4_4_,
                                   (float)uStack_13 * fVar25 * _UNK_? + (float)uStack_14);
              uStack_15 = CONCAT44(uStack_15._4_4_,fVar22 * fVar25 * _UNK_? + fVar8);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar26 = (pTVar21->fields)._._.m_CachedPtr;
              if (pvVar26 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar26);
              pGVar5 = (this->fields).groundAura;
              if (pGVar5 != (GameObject *)0x0) {
                pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Quaternion);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
                if (pTVar21 == (Transform *)0x0) {
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uStack_13._0_4_ = (pQVar9->identityQuaternion).x;
                uStack_13._4_4_ = (pQVar9->identityQuaternion).y;
                uStack_12._0_4_ = (pQVar9->identityQuaternion).z;
                uStack_12._4_4_ = (pQVar9->identityQuaternion).w;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar26 = (pTVar21->fields)._._.m_CachedPtr;
                if (pvVar26 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar7 = func_?(&UNK_?);
                  FUN_?(uVar7,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                (*pcRam_?)(pvVar26,&uStack_13);
                iVar27 = (*(pMVar1->klass->vtable).get_DocumentationType.methodPtr)
                                   (pMVar1,(pMVar1->klass->vtable).get_DocumentationType.method);
                (this->fields)._.documentationType = iVar27;
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
     MVWorldObjectSpawnerVehicle_InitializeInventory
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVVehicleBase,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnWorldObjectID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__MVVehicleBase)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar4 != (PrefabPool *)0x0) {
    pGVar5 = (pPVar4->fields).particleCFX_GroundAura;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7._0_4_ = (pVVar6->zeroVector).x;
    uVar7._4_4_ = (pVVar6->zeroVector).y;
    fVar8 = (pVVar6->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar10._0_4_ = (pQVar9->identityQuaternion).x;
    uVar10._4_4_ = (pQVar9->identityQuaternion).y;
    uVar11._0_4_ = (pQVar9->identityQuaternion).z;
    uVar11._4_4_ = (pQVar9->identityQuaternion).w;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    uStack_12 = CONCAT44(uStack_12._4_4_,fVar8);
    uStack_13 = uVar7;
    uStack_14 = uVar10;
    uStack_15 = uVar11;
    pGVar5 = (GameObject *)FUN_?(pGVar5);
    bVar16 = iRam_? != 0;
    (this->fields).groundAura = pGVar5;
    if (bVar16) {
      uVar17 = (uint)((ulonglong)&(this->fields).groundAura >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar16 = uVar19 == *puVar20;
        if (bVar16) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar16);
    }
    pGVar5 = (this->fields).groundAura;
    if (pGVar5 != (GameObject *)0x0) {
      pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar5,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._._._._.gameObject;
      if ((pGVar5 != (GameObject *)0x0) &&
         (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar5,(MethodInfo *)0x0), pTVar21 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar21,value,(MethodInfo *)0x0);
        pGVar5 = (this->fields).groundAura;
        if (pGVar5 != (GameObject *)0x0) {
          pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_14._0_4_ = (pVVar6->zeroVector).x;
          uStack_14._4_4_ = (pVVar6->zeroVector).y;
          fVar8 = (pVVar6->zeroVector).z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_13._0_4_ = (pVVar6->upVector).x;
          uStack_13._4_4_ = (pVVar6->upVector).y;
          fVar22 = (pVVar6->upVector).z;
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            lVar23 = (*(pMVar1->klass->vtable).GetLocalBounds.methodPtr)
                               (auStack_24,pMVar1,1,(pMVar1->klass->vtable).GetLocalBounds.method)
            ;
            fVar25 = (float)((uint)*(undefined8 *)(lVar23 + 0x10) ^ _UNK_?);
            if (pTVar21 != (Transform *)0x0) {
              uStack_14 = CONCAT44(uStack_13._4_4_ * fVar25 * _UNK_? + uStack_14._4_4_,
                                   (float)uStack_13 * fVar25 * _UNK_? + (float)uStack_14);
              uStack_15 = CONCAT44(uStack_15._4_4_,fVar22 * fVar25 * _UNK_? + fVar8);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar26 = (pTVar21->fields)._._.m_CachedPtr;
              if (pvVar26 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar26);
              pGVar5 = (this->fields).groundAura;
              if (pGVar5 != (GameObject *)0x0) {
                pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Quaternion);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
                if (pTVar21 == (Transform *)0x0) {
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uStack_13._0_4_ = (pQVar9->identityQuaternion).x;
                uStack_13._4_4_ = (pQVar9->identityQuaternion).y;
                uStack_12._0_4_ = (pQVar9->identityQuaternion).z;
                uStack_12._4_4_ = (pQVar9->identityQuaternion).w;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar26 = (pTVar21->fields)._._.m_CachedPtr;
                if (pvVar26 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar7 = func_?(&UNK_?);
                  FUN_?(uVar7,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                (*pcRam_?)(pvVar26,&uStack_13);
                iVar27 = (*(pMVar1->klass->vtable).get_DocumentationType.methodPtr)
                                   (pMVar1,(pMVar1->klass->vtable).get_DocumentationType.method);
                (this->fields)._.documentationType = iVar27;
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSpawnStateChange(SpawnState) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
     MVWorldObjectSpawnerVehicle_OnSpawnStateChange
               (MVWorldObjectSpawnerVehicle *this,SpawnState__Enum spawnState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (spawnState == SpawnState__Enum_None) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_SpawnState_is_none;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (spawnState == SpawnState__Enum_Listening) {
    pGVar4 = (this->fields).pickupItemObjectScript;
    if (pGVar4 != (GreyOutObjectScript *)0x0) {
      GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar4,(MethodInfo *)0x0);
      pGVar5 = (this->fields).groundAura;
      if (pGVar5 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar5 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar6 = (pGVar5->fields)._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar5,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,1);
        return;
      }
    }
  }
  else {
    if (spawnState != SpawnState__Enum_Taken) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      bVar8 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        pGVar4 = (this->fields).pickupItemObjectScript;
        if (pGVar4 == (GreyOutObjectScript *)0x0) goto code_?;
        GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar4,(MethodInfo *)0x0);
      }
      pGVar5 = (this->fields).groundAura;
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_OnStateChanged
               (MVWorldObjectSpawnerVehicle *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    pGVar2 = (this->fields).lodGameObject;
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,value,(MethodInfo *)0x0);
      pGVar2 = (this->fields).groundAura;
      if (pGVar2 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,value,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar2 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,value);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_SetupCulling
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._._._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar3 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    (this->fields)._._._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             FUN_?(pDVar2,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar2,pUVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->fields)._._._._.PositionChanged = pUVar1;
    pUVar3 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pUVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields)._._._._.PositionChanged >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  puVar11 = (undefined8 *)
            (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                      (aVStack_12,this,(this->klass->vtable).get_WorldPosition_1.method);
  uVar13 = *puVar11;
  fVar14 = *(float *)(puVar11 + 1);
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this);
  pCVar15 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar15,callback,(MethodInfo *)0x0);
  aVStack_12[0]._0_8_ = uVar13;
  aVStack_12[0].z = fVar14;
  CullingSubscriberBase::CullingSubscriberBase_Setup
            (pCVar15,_UNK_?,aVStack_12,(MethodInfo *)0x0);
  bVar10 = iRam_? != 0;
  (this->fields).cullingSubscriberBase = pCVar15;
  if (bVar10) {
    uVar6 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pCVar15 = (this->fields).cullingSubscriberBase;
  if (pCVar15 == (CullingSubscriberBase *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pCVar15->fields)._DistanceBandIndex_k__BackingField = 2;
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
     MVWorldObjectSpawnerVehicle_SetupTierInventory
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  this_00 = (this->fields).lodGameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).HideConnectors.methodPtr)
              (this,(this->klass->vtable).HideConnectors.method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_Use
               (MVWorldObjectSpawnerVehicle *this,int32_t userWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SpawnWorldObject_is_null);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_vehicleSeatManager);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.spawnStateWrapper;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    if ((pSVar1->fields)._SpawnState_k__BackingField == 2) {
      return 0;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_02,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObjectClient *)0x0) {
        message = StringLiteral_SpawnWorldObject_is_null;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          message = StringLiteral_SpawnWorldObject_is_null;
        }
      }
      else {
        this_00 = (pMVar2->fields).gameObject;
        if (this_00 == (GameObject *)0x0) goto code_?;
        this_03 = (VehicleSeatManager *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (this_00,
                             VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                            );
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
        if (this_03 != (VehicleSeatManager *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((this_03->fields)._._._._.m_CachedPtr != (void *)0x0) {
            seatBase = VehicleSeatManager::VehicleSeatManager_get_DriverSeat
                                 (this_03,(MethodInfo *)0x0);
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
            if (seatBase != (VehicleSeatBase *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((seatBase->fields)._._._._.m_CachedPtr != (void *)0x0) {
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar3 != (MVNetworkGame *)0x0) &&
                   (this_01 = (pMVar3->fields)._PlayerController_k__BackingField,
                   this_01 != (MVLocalObjectController *)0x0)) {
                  bVar4 = MVLocalObjectController::MVLocalObjectController_SpawnVehicleWithDriver
                                    (this_01,(this->fields)._._._._._.id,userWoID,seatBase,
                                     (MethodInfo *)0x0);
                  return bVar4 != 0;
                }
                goto code_?;
              }
            }
            message = StringLiteral_No_driver_seat;
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
              message = StringLiteral_No_driver_seat;
            }
            goto code_?;
          }
        }
        message = StringLiteral_No_vehicleSeatManager;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          message = StringLiteral_No_vehicleSeatManager;
        }
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* MVWorldObjectSpawnerVehicle(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
               (MVWorldObjectSpawnerVehicle *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SpawnerObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (pPVar1->fields).spawnerObject;
  (this->fields)._.spawnWorldObjectID = -1;
  (this->fields)._.predictTakeTime = -1;
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,(ObjectPrefab *)pSVar3,worldObjects,(MethodInfo *)0x0);
  piVar4 = &(this->fields)._._._._.previewLayerMask;
  *piVar4 = *piVar4 | 0x1000;
  pSVar3 = (SpawnerObject *)(this->fields)._._._._.component;
  if (pSVar3 == (SpawnerObject *)0x0) {
    (this->fields).spawnerObject = (SpawnerObject *)0x0;
  }
  else {
    bVar5 = (TypeInfo__SpawnerObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar3->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pSVar3->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__SpawnerObject)) {
      FUN_?(pSVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).spawnerObject = pSVar3;
    bVar5 = (TypeInfo__SpawnerObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar3->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pSVar3->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__SpawnerObject)) {
      FUN_?(pSVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).spawnerObject >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}

