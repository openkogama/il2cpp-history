
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_CheckCanUse
               (MVWorldObjectSpawnerVehicleEnergy *this,int32_t woId,
               MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnStateWrapper;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    if ((pSVar1->fields)._SpawnState_k__BackingField == 2) {
      return 0;
    }
    if (avatarInteractable != (MVInteractableBase *)0x0) {
      cVar2 = (*(avatarInteractable->klass->vtable).__unknown_7.methodPtr)
                        (avatarInteractable,9,(avatarInteractable->klass->vtable).__unknown_7.method
                        );
      if (cVar2 != '\0') {
        return 0;
      }
      cVar2 = (*(avatarInteractable->klass->vtable).__unknown_7.methodPtr)
                        (avatarInteractable,7,(avatarInteractable->klass->vtable).__unknown_7.method
                        );
      if (cVar2 != '\0') {
        return 0;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar3->fields)._PlayerController_k__BackingField,
         this_00 != (MVLocalObjectController *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__,0
                        ,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVVehicleBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar4 = (this_00->fields).localControlledStack;
        if (pLVar4 == (List_1_ILocalObject_ *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        if ((pLVar4->fields)._size == 0) {
          return 0;
        }
        pMVar7 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                           (this_00,(MethodInfo *)0x0);
        if (pMVar7 == (MVWorldObjectClient *)0x0) {
          return 0;
        }
        bVar8 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if (((pMVar7->klass->_1).naturalAligment < bVar8) ||
           (bVar9 = true,
           (MVVehicleBase__Class *)(pMVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
           TypeInfo__MVVehicleBase)) {
          bVar9 = false;
        }
        pMVar10 = (MVWorldObjectClient *)0x0;
        if (bVar9) {
          pMVar10 = pMVar7;
        }
        return pMVar10 != (MVWorldObjectClient *)0x0;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_CompareWithKoGaMaPackage
               (MVWorldObjectSpawnerVehicleEnergy *this,MVWorldObjectClient *wo,
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
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
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
    bVar2 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
            naturalAligment;
    if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
       ((MVWorldObjectSpawnerVehicleEnergy__Class *)(pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1]
        == TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
      bVar2 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
              naturalAligment;
      if (((pMVar1->_1).naturalAligment < bVar2) ||
         ((MVWorldObjectSpawnerVehicleEnergy__Class *)
          (pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
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


/* VehicleEnergyRefill CreateVehicleEnergyRefill(Boolean) */

VehicleEnergyRefill *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
MVWorldObjectSpawnerVehicleEnergy_CreateVehicleEnergyRefill
          (VehicleEnergyRefill *__return_storage_ptr__,MVWorldObjectSpawnerVehicleEnergy *this,
          bool prediction,MethodInfo *method)

{
  __return_storage_ptr__->spawnerId = 0;
  __return_storage_ptr__->prediction = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x5 = 0;
  __return_storage_ptr__->amount = 0.0;
  __return_storage_ptr__->spawnerId = (this->fields)._._._._._.id;
  pMVar1 = (this->fields).vehicleEnergyChild;
  __return_storage_ptr__->prediction = prediction;
  if (pMVar1 != (MVVehicleEnergy *)0x0) {
    iStack_2 = (int)*(undefined8 *)
                      &(pMVar1->fields)._VehicleEnergyConfig_k__BackingField.energyAmount;
    __return_storage_ptr__->amount = (float)iStack_2 / _UNK_?;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (VehicleEnergyRefill *)(*pcVar3)();
  return pVVar4;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_Destroy
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  if ((this->fields).initFlag != 0) {
    pUVar1 = (this->fields)._.useInteractor;
    if ((pUVar1 == (UseInteractor *)0x0) ||
       (this_00 = (pUVar1->fields).useInteractorVisuals,
       this_00 == (UseInteractorVisualization *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
              (this_00,(this->fields)._._._._._.data,(MethodInfo *)0x0);
  }
  MVWorldObjectSpawner::MVWorldObjectSpawner_Destroy((MVWorldObjectSpawner *)this,(MethodInfo *)0x0)
  ;
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
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
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
          MVWorldObjectSpawnerVehicleEnergy_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVWorldObjectSpawnerVehicleEnergy *this,
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

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_Initialize
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

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
    FUN_?(&
                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnEnterTriggerBox_System__Object__TriggerEventArgs_
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
    FUN_?(&StringLiteral_Could_not_get_spawnPoint_child_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnWorldObjectID);
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
  pMVar4 = (MVVehicleEnergy *)
            MVGroup::MVGroup_GetChild
                      ((MVGroup *)this,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar4 == (MVVehicleEnergy *)0x0) {
    (this->fields).vehicleEnergyChild = (MVVehicleEnergy *)0x0;
  }
  else {
    bVar5 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if (((pMVar4->klass->_1).naturalAligment < bVar5) ||
       ((MVVehicleEnergy__Class *)(pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      FUN_?(pMVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).vehicleEnergyChild = pMVar4;
    bVar5 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if (((pMVar4->klass->_1).naturalAligment < bVar5) ||
       ((MVVehicleEnergy__Class *)(pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      FUN_?(pMVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).vehicleEnergyChild >> 0xc);
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
  pSVar11 = (this->fields).spawnerObject;
  if (pSVar11 != (SpawnerObject *)0x0) {
    pTVar12 = (this->fields)._.triggerBoxEvents;
    pGVar13 = (pSVar11->fields).UseInteractorRotator;
    if (pTVar12 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar12,(MethodInfo *)0x0);
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,(this->klass->vtable).Use.method);
      checkCanUseFunction =
           (Func_3_Int32_MVInteractableBase_Boolean_ *)
           FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      FUN_?(checkCanUseFunction,this,(this->klass->vtable).CheckCanUse.method);
      pUVar14 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar14,(MVWorldObjectClient *)this,pGVar13,1,triggerCollider,useFunction,
                 checkCanUseFunction,_UNK_?,1,1,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      (this->fields)._.useInteractor = pUVar14;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)&(this->fields)._.useInteractor >> 0xc);
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
      pTVar12 = (this->fields)._.triggerBoxEvents;
      pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar15,(Object *)this,
                 MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnEnterTriggerBox_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar12 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
                  (pTVar12,(EventHandler_1_TriggerEventArgs_ *)pUVar15,(MethodInfo *)0x0);
        pTVar12 = (this->fields)._.triggerBoxEvents;
        pUVar14 = (this->fields)._.useInteractor;
        pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar15,(Object *)pUVar14,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar12 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
                    (pTVar12,(EventHandler_1_TriggerEventArgs_ *)pUVar15,(MethodInfo *)0x0);
          MVWorldObjectSpawnerVehicleEnergy_InitializeCommon(this,(MethodInfo *)0x0);
          pUVar14 = (this->fields)._.useInteractor;
          if ((pUVar14 != (UseInteractor *)0x0) &&
             (this_00 = (pUVar14->fields).useInteractorVisuals,
             this_00 != (UseInteractorVisualization *)0x0)) {
            UseInteractorVisualization::UseInteractorVisualization_UpdateData
                      (this_00,(this->fields)._._._._._.data,(pUVar14->fields).woOwnerID,
                       (MethodInfo *)0x0);
            iVar16 = iRam_?;
            pMVar4 = (this->fields).vehicleEnergyChild;
            if ((pMVar4 != (MVVehicleEnergy *)0x0) &&
               ((pEVar17 = (pMVar4->fields).editableCubeModelWrapper,
                pEVar17 != (EditableCubeModelWrapper *)0x0 &&
                (pMVar18 = (pEVar17->fields).cubeModelBase, pMVar18 != (MVCubeModelInstance *)0x0)))) {
              (this->fields).lodGameObject = (pMVar18->fields)._._.gameObject;
              if (iVar16 != 0) {
                uVar6 = (uint)((ulonglong)&(this->fields).lodGameObject >> 0xc);
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
                  iVar16 = iRam_?;
                } while (!bVar10);
              }
              pMVar4 = (this->fields).vehicleEnergyChild;
              if (pMVar4 != (MVVehicleEnergy *)0x0) {
                (this->fields).visualsGameObject =
                     (pMVar4->fields)._VehicleEnergyVisualsGameObject_k__BackingField;
                if (iVar16 != 0) {
                  uVar6 = (uint)((ulonglong)&(this->fields).visualsGameObject >> 0xc);
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
                pMVar4 = (this->fields).vehicleEnergyChild;
                if (pMVar4 != (MVVehicleEnergy *)0x0) {
                  pGVar13 = (this->fields)._._._._.gameObject;
                  (this->fields)._._._._.interactionFlags =
                       (pMVar4->fields)._._._.interactionFlags |
                       (this->fields)._._._._.interactionFlags | 8;
                  if (pGVar13 != (GameObject *)0x0) {
                    pGVar19 = (GreyOutObjectScript *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_1
                                        (pGVar13,
                                         GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                                        );
                    bVar10 = iRam_? != 0;
                    (this->fields).pickupItemObjectScript = pGVar19;
                    if (bVar10) {
                      uVar6 = (uint)((ulonglong)&(this->fields).pickupItemObjectScript >> 0xc);
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
                    pGVar19 = (this->fields).pickupItemObjectScript;
                    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
                        (pMVar1 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObjectClient
                                             (this_01,(this->fields)._.spawnWorldObjectID,
                                              (MethodInfo *)0x0),
                        pMVar1 != (MVWorldObjectClient *)0x0)) &&
                       (pGVar19 != (GreyOutObjectScript *)0x0)) {
                      bVar10 = iRam_? != 0;
                      (pGVar19->fields).pickupObject = (pMVar1->fields).gameObject;
                      if (bVar10) {
                        uVar6 = (uint)((ulonglong)&(pGVar19->fields).pickupObject >> 0xc);
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
                      GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                                (pGVar19,(MethodInfo *)0x0);
                      (this->fields).initFlag = 1;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__CullingSubscriberBase,0);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnStateChanged_UnityEngine__CullingGroupEvent_
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
                      pUVar20 = (this->fields)._._._._.PositionChanged;
                      pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                                FUN_?(
                                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                             );
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                (pUVar15,(Object *)this,
                                 MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                 ,(MethodInfo *)0x0);
                      pDVar21 = mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pUVar20,(Delegate *)pUVar15,(MethodInfo *)0x0
                                          );
                      pUVar22 = 
                      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                      ;
                      if (pDVar21 == (Delegate *)0x0) {
                        (this->fields)._._._._.PositionChanged =
                             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
                      }
                      else {
                        pUVar20 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                                  FUN_?(pDVar21,
                                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                               );
                        if (pUVar20 ==
                            (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
                          FUN_?(pDVar21,pUVar22);
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        (this->fields)._._._._.PositionChanged = pUVar20;
                        pUVar22 = 
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                        ;
                        lVar23 = FUN_?(pDVar21,
                                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                              );
                        if (lVar23 == 0) {
                          FUN_?(pDVar21,pUVar22);
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
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
                      (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                                (&stack0xffffffffffffffd8,this,
                                 (this->klass->vtable).get_WorldPosition_1.method);
                      callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                                 FUN_?(
                                              TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                              );
                      FUN_?(callback,this);
                      this_02 = (CullingSubscriberBase *)
                                FUN_?(TypeInfo__CullingSubscriberBase);
                      CullingSubscriberBase::CullingSubscriberBase__ctor_1
                                (this_02,callback,(MethodInfo *)0x0);
                      CullingSubscriberBase::CullingSubscriberBase_Setup
                                (this_02,_UNK_?,(Vector3 *)&stack0xffffffffffffffd8,
                                 (MethodInfo *)0x0);
                      if (this_02 == (CullingSubscriberBase *)0x0) {
                        FUN_?();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      bVar10 = iRam_? != 0;
                      (this_02->fields)._DistanceBandIndex_k__BackingField = 2;
                      (this->fields).cullingSubscriberBase = this_02;
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_InitializeCommon
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
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
    pMVar2 = pMVar1->klass;
    bVar3 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
       ((MVVehicleEnergy__Class *)(pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      iVar4 = (*(pMVar2->vtable).get_DocumentationType.methodPtr)
                        (pMVar1,(pMVar2->vtable).get_DocumentationType.method);
      (this->fields)._.documentationType = iVar4;
      return;
    }
    FUN_?(pMVar1,TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_InitializeInventory
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy,0);
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
    pMVar2 = pMVar1->klass;
    bVar3 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
       ((MVVehicleEnergy__Class *)(pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      iVar4 = (*(pMVar2->vtable).get_DocumentationType.methodPtr)
                        (pMVar1,(pMVar2->vtable).get_DocumentationType.method);
      (this->fields)._.documentationType = iVar4;
      return;
    }
    FUN_?(pMVar1,TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy,
                  TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy,pMVar2,unaff_RBX);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnDataUpdate
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  auStack_1._0_8_ = &UNK_?;
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  auStack_1._0_8_ = &UNK_?;
  SVar2 = MVWorldObjectSpawner::MVWorldObjectSpawner_ReadRespawnStateConfiguration
                     ((MVWorldObjectSpawner *)this,(MethodInfo *)0x0);
  pSVar3 = (this->fields)._.spawnStateWrapper;
  if (pSVar3 == (SpawnStateWrapper *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pSVar3->fields).respawnInterval = SVar2.respawnInterval;
  (pSVar3->fields).respawnCount = SVar2.respawnCount;
  (pSVar3->fields).takenCounter = 0;
  pUVar5 = (this->fields)._.useInteractor;
  if ((pUVar5 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar5->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) goto code_?;
  iVar6 = (pUVar5->fields).woOwnerID;
  pOVar7 = (Object__Class *)(this->fields)._._._._._.data;
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = &UNK_?;
  pOVar8 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar8 == (Object *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar9 = iRam_? != 0;
  pOVar8[1].klass = pOVar7;
  if (bVar9) {
    uVar10 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  *(int32_t *)&pOVar8[1].monitor = iVar6;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_1._0_8_ = &UNK_?;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_1._0_8_ = &UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  auStack_1._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_1._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar8,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_1._0_8_ = &UNK_?;
  UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
            (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar14 = (this_00->fields).useRequirements;
  if (pLVar14 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&pLStack_15 >> 0xc);
    uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar16 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar16 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  puStack_17 = (undefined1 *)((ulonglong)(uint)(pLVar14->fields)._version << 0x20);
  uStack_18 = 0;
  auStack_1._8_8_ = puStack_17;
  pOStack_19 = (Object *)0x0;
  uStack_20 = 0;
  puStack_21 = auStack_1;
  pLStack_15 = pLVar14;
  auStack_1._0_8_ = pLVar14;
  while (bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar22 != 0) {
    if (pOStack_19 == (Object *)0x0) goto code_?;
    cVar23 = (*(code *)pOStack_19->klass[1]._0.interopData)
                       (pOStack_19,pOStack_19->klass[1]._0.klass);
    if (cVar23 != '\0') {
      piVar24 = &(this_00->fields).active;
      *piVar24 = *piVar24 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar9 = (this_00->fields).active == 0;
  if (!bVar9) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar9 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar9;
  fVar25 = 0.0;
  pLVar14 = (this_00->fields).useRequirements;
  if (pLVar14 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&pLStack_15 >> 0xc);
    uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar16 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar16 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  puStack_17 = (undefined1 *)((ulonglong)(uint)(pLVar14->fields)._version << 0x20);
  uStack_18 = 0;
  auStack_1._8_8_ = puStack_17;
  pOStack_19 = (Object *)0x0;
  pLStack_15 = (List_1_UseRequirement_ *)0x0;
  puStack_17 = auStack_1;
  auStack_1._0_8_ = pLVar14;
  while (bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar8 = pOStack_19, bVar22 != 0) {
    if (pOStack_19 == (Object *)0x0) goto code_?;
    cVar23 = (*(code *)pOStack_19->klass[1]._0.interopData)
                       (pOStack_19,pOStack_19->klass[1]._0.klass);
    if (cVar23 != '\0') {
      pOVar7 = pOVar8->klass;
      uStack_20._0_4_ = (this_00->fields).pivot.x;
      uStack_20._4_4_ = (this_00->fields).pivot.y;
      puStack_21 = (undefined1 *)CONCAT44(puStack_21._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar7[1]._0.fields)
                (pOVar8,&uStack_20,fVar25,(this_00->fields).dist,pOVar7[1]._0.events);
      fVar25 = fVar25 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar22 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar26 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar26 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar27 = func_?(&UNK_?);
    FUN_?(uVar27,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar26,bVar22);
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnEnterObject
               (MVWorldObjectSpawnerVehicleEnergy *this,EditorStateMachine *e,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    pSVar2 = (this->fields)._.spawnStateWrapper;
    if (pSVar2 != (SpawnStateWrapper *)0x0) {
      if ((pSVar2->fields)._SpawnState_k__BackingField == 2) {
        this_00 = (this->fields).pickupItemObjectScript;
        if (this_00 == (GreyOutObjectScript *)0x0) goto code_?;
        GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
      }
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar3 = (*(pMVar1->klass->vtable).OnEnterObject.methodPtr)
                          (pMVar1,e,(pMVar1->klass->vtable).OnEnterObject.method);
        return bVar3;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void OnEnterTriggerBox(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnEnterTriggerBox
               (MVWorldObjectSpawnerVehicleEnergy *this,Object *sender,TriggerEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_Energy_to_fuel_a_Vehicle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._PlayerController_k__BackingField,
     pMVar3 != (MVLocalObjectController *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MVVehicleBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar4 = (pMVar3->fields).localControlledStack;
    if (pLVar4 != (List_1_ILocalObject_ *)0x0) {
      if (((pLVar4->fields)._size != 0) &&
         (pMVar5 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                              (pMVar3,(MethodInfo *)0x0), pMVar5 != (MVWorldObjectClient *)0x0)) {
        method = (MethodInfo *)pMVar5->klass;
        bVar6 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if ((bVar6 <= (((MVWorldObjectClient__Class *)method)->_1).naturalAligment) &&
           ((MVVehicleBase__Class *)
            (((MVWorldObjectClient__Class *)method)->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
            TypeInfo__MVVehicleBase)) {
          lVar7._0_4_ = pMVar5[1].fields._.ownerActorNr;
          lVar7._4_4_ = pMVar5[1].fields._.previewOwnerProfileId;
          if (lVar7 == 0) {
            cVar8 = '\0';
          }
          else {
            cVar8 = (**(code **)(**(longlong **)&pMVar5[1].fields._.ownerActorNr + 0x228))();
          }
          if (cVar8 != '\0') {
            this_01 = (this->fields)._.useInteractor;
            if (this_01 != (UseInteractor *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (e != (TriggerEventArgs *)0x0) {
                pUVar9 = UseInteractor::UseInteractor_GetUseInteractorHandler
                                    (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
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
                if (pUVar9 == (UseInteractorHandler *)0x0) {
                  return;
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pUVar9->fields)._._._._._.m_CachedPtr == (void *)0x0) {
                  return;
                }
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_02 = (pUVar9->fields).useInteractors;
                if (this_02 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                             (this_01->fields).woOwnerID,(Object *)this_01,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
                             ->klass->rgctx_data[0x22].method);
                  return;
                }
              }
            }
            goto code_?;
          }
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar3 = (pMVar2->fields)._PlayerController_k__BackingField,
         pMVar3 != (MVLocalObjectController *)0x0)) {
        bVar10 = MVLocalObjectController::MVLocalObjectController_IsInsideVehicle
                          (pMVar3,(MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          return;
        }
        this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pOVar11 = (Object *)FUN_?(uRam_?);
        value_00 = TM::TM__(StringLiteral_This_is_Energy_to_fuel_a_Vehicle,(MethodInfo *)0x0);
        if (this_03 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar11,(Object *)value_00
                     ,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          uVar12 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          ,this_03,8,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__NotificationController);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__NotificationLifetime);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,2);
          pOVar11 = (Object *)FUN_?(uRam_?,auStackX_18);
          auStackX_18[0] = 8;
          value = (Object *)FUN_?(TypeInfo__NotificationLifetime,auStackX_18);
          if (this_03 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
code_?:
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar11,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__NotificationsManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
            if (this_00 == (NotificationsManager *)0x0) goto code_?;
            NotificationsManager::NotificationsManager_InstantiateNotification
                      (this_00,NotificationType__Enum_PlayerTip,
                       (Dictionary_2_System_Object_System_Object_ *)this_03,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnExitObject
               (MVWorldObjectSpawnerVehicleEnergy *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      UNRECOVERED_JUMPTABLE = (pMVar1->klass->vtable).OnExitObject.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar2 = (*UNRECOVERED_JUMPTABLE)
                        (pMVar1,e,(pMVar1->klass->vtable).OnExitObject.method,UNRECOVERED_JUMPTABLE)
      ;
      return bVar2;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnPositionChanged
               (MVWorldObjectSpawnerVehicleEnergy *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (pCVar1 = (this->fields).cullingSubscriberBase, pCVar1 != (CullingSubscriberBase *)0x0)) {
    fVar2 = (positionChangedEventArgs->fields).NewPos.x;
    fVar3 = (positionChangedEventArgs->fields).NewPos.y;
    fVar4 = (positionChangedEventArgs->fields).NewPos.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar5 != (BoundingSphere__Array *)0x0) {
      uVar6 = (pCVar1->fields)._CullingIndex_k__BackingField;
      if (uVar6 < (uint)pBVar5->max_length) {
        pBVar5->vector[(int)uVar6].position.x = fVar2;
        pBVar5->vector[(int)uVar6].position.y = fVar3;
        pBVar5->vector[(int)uVar6].position.z = fVar4;
        return;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSpawnStateChange(SpawnState) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnSpawnStateChange
               (MVWorldObjectSpawnerVehicleEnergy *this,SpawnState__Enum spawnState,
               MethodInfo *method)

{
  if (spawnState == SpawnState__Enum_Listening) {
    pGVar1 = (this->fields).pickupItemObjectScript;
    if (pGVar1 != (GreyOutObjectScript *)0x0) {
      GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar1,(MethodInfo *)0x0);
      pMVar2 = (this->fields).vehicleEnergyChild;
      if (pMVar2 != (MVVehicleEnergy *)0x0) {
        MVVehicleEnergy::MVVehicleEnergy_ToggleColliders(pMVar2,1,(MethodInfo *)0x0);
        pMVar3 = (pMVar2->fields).vehicleEnergyObject;
        if ((pMVar3 != (MVVehicleEnergyObject *)0x0) &&
           (pVVar4 = (pMVar3->fields).vehicleEnergyVisuals, pVVar4 != (VehicleEnergyVisuals *)0x0))
        {
          if ((pVVar4->fields).particleSystemOn == 0) {
            return;
          }
          pPVar5 = (pVVar4->fields).particles;
          if ((pPVar5 != (ParticleSystem *)0x0) &&
             (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pPVar5,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
            uVar6 = 1;
UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive:
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,uVar6,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (GameObject *)0x0) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pvVar8 = (obj->fields)._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar8,uVar6);
            return;
          }
        }
      }
    }
  }
  else {
    if (spawnState != SpawnState__Enum_Taken) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      bVar9 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        return;
      }
      pGVar1 = (this->fields).pickupItemObjectScript;
      if (pGVar1 != (GreyOutObjectScript *)0x0) {
        GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar1,(MethodInfo *)0x0);
        pMVar2 = (this->fields).vehicleEnergyChild;
        if (pMVar2 != (MVVehicleEnergy *)0x0) {
          MVVehicleEnergy::MVVehicleEnergy_ToggleColliders(pMVar2,0,(MethodInfo *)0x0);
          pMVar3 = (pMVar2->fields).vehicleEnergyObject;
          if ((pMVar3 != (MVVehicleEnergyObject *)0x0) &&
             (pVVar4 = (pMVar3->fields).vehicleEnergyVisuals, pVVar4 != (VehicleEnergyVisuals *)0x0)
             ) {
            if ((pVVar4->fields).particleSystemOn == 0) {
              return;
            }
            pPVar5 = (pVVar4->fields).particles;
            if ((pPVar5 != (ParticleSystem *)0x0) &&
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pPVar5,(MethodInfo *)0x0), obj != (GameObject *)0x0))
            {
              uVar6 = 0;
              goto UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnStateChanged
               (MVWorldObjectSpawnerVehicleEnergy *this,CullingGroupEvent cullingGroupEvent,
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
      pGVar2 = (this->fields).visualsGameObject;
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


/* Void Select(Color) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_Select
               (MVWorldObjectSpawnerVehicleEnergy *this,Color *color,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      fStack_2 = color->r;
      fStack_3 = color->g;
      fStack_4 = color->b;
      fStack_5 = color->a;
      (*(pMVar1->klass->vtable).Select_1.methodPtr)
                (pMVar1,&fStack_2,(pMVar1->klass->vtable).Select_1.method);
    }
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_SetupCulling
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnStateChanged_UnityEngine__CullingGroupEvent_
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
             MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
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
  this_01 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_01,callback,(MethodInfo *)0x0);
  aVStack_12[0]._0_8_ = uVar13;
  aVStack_12[0].z = fVar14;
  CullingSubscriberBase::CullingSubscriberBase_Setup
            (this_01,_UNK_?,aVStack_12,(MethodInfo *)0x0);
  if (this_01 == (CullingSubscriberBase *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar10 = iRam_? != 0;
  (this_01->fields)._DistanceBandIndex_k__BackingField = 2;
  (this->fields).cullingSubscriberBase = this_01;
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
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_SetupTierInventory
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  pGVar1 = (this->fields).lodGameObject;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).visualsGameObject;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).HideConnectors.methodPtr)
                (this,(this->klass->vtable).HideConnectors.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_Use
               (MVWorldObjectSpawnerVehicleEnergy *this,int32_t userWoID,MethodInfo *method)

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
  pSVar1 = (this->fields)._.spawnStateWrapper;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    if ((pSVar1->fields)._SpawnState_k__BackingField == 2) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar2,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObjectClient *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_SpawnWorldObject_is_null,(MethodInfo *)0x0);
        return 0;
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar4->fields)._PlayerController_k__BackingField,
         this_00 != (MVLocalObjectController *)0x0)) {
        id = (this->fields)._._._._._.id;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVVehicleBase);
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (MVVehicleBase *)
                  MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                            (this_00,(MethodInfo *)0x0);
        bVar5 = MVLocalObjectController::MVLocalObjectController_IsInsideVehicle
                          (this_00,(MVWorldObjectClient *)this_01,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return 0;
        }
        pMVar2 = (MVWorldObjectClientManager *)(this_00->fields).worldObjectClientManagerNetwork;
        if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
           (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (pMVar2,id,(MethodInfo *)0x0),
           pMVar3 != (MVWorldObjectClient *)0x0)) {
          bVar6 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1)
                  .naturalAligment;
          if (((pMVar3->klass->_1).naturalAligment < bVar6) ||
             ((MVWorldObjectSpawnerVehicleEnergy__Class *)
              (pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
              TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
            FUN_?(pMVar3,
                          TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                         );
            pcVar7 = (code *)swi(3);
            bVar5 = (*pcVar7)();
            return bVar5;
          }
          iVar8 = (pMVar3->fields)._.id;
          aVStack_9[0].spawnerId = 0;
          aVStack_9[0].prediction = 0;
          aVStack_9[0]._5_3_ = 0;
          aVStack_9[0].amount = 0.0;
          lVar10 = *(longlong *)&pMVar3[1].fields._.timestamp;
          if (lVar10 != 0) {
            iStack_11 = (int)*(undefined8 *)(lVar10 + 0x188);
            fVar12 = (float)iStack_11 / _UNK_?;
            fVar13 = (float)FUN_?();
            pLVar14 = pMVar3[1].fields._.objectLinkRefs;
            pMVar3[1].fields._.position.z = fVar13;
            if (pLVar14 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
              (pLVar14->fields)._size = (int32_t)fVar13;
              if (this_01 != (MVVehicleBase *)0x0) {
                pMVar15 = this_01->klass;
                bVar6 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
                if (((pMVar15->_1).naturalAligment < bVar6) ||
                   ((MVVehicleBase__Class *)(pMVar15->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
                    TypeInfo__MVVehicleBase)) {
                  FUN_?(this_01);
                  pcVar7 = (code *)swi(3);
                  bVar5 = (*pcVar7)();
                  return bVar5;
                }
                bVar6 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
                aVStack_9[0].prediction = 1;
                aVStack_9[0].spawnerId = iVar8;
                aVStack_9[0].amount = fVar12;
                if (((pMVar15->_1).naturalAligment < bVar6) ||
                   ((MVVehicleBase__Class *)(pMVar15->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
                    TypeInfo__MVVehicleBase)) {
                  FUN_?(this_01);
                  pcVar7 = (code *)swi(3);
                  bVar5 = (*pcVar7)();
                  return bVar5;
                }
                MVVehicleBase::MVVehicleBase_RefillEnergy(this_01,aVStack_9,(MethodInfo *)0x0);
                this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_VehicleEnergyUse
                            (this_02,id,(this_01->fields)._._._._.id,(MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        bVar5 = (*pcVar7)();
        return bVar5;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* MVWorldObjectSpawnerVehicleEnergy(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy__ctor
               (MVWorldObjectSpawnerVehicleEnergy *this,
               Dictionary_2_System_Object_System_Object_ *data,
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

