
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_CheckCanUse
               (MVWorldObjectSpawnerVehicleEnergy *this,int32_t woId,
               MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnStateWrapper;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    if ((pSVar1->fields)._SpawnState_k__BackingField != 2) {
      if (avatarInteractable == (MVInteractableBase *)0x0) goto code_?;
      cVar2 = (*(code *)(avatarInteractable->klass->vtable).__unknown_5.method)
                        (avatarInteractable,9,
                         (avatarInteractable->klass->vtable).__unknown_6.methodPtr);
      if (cVar2 == '\0') {
        cVar2 = (*(code *)(avatarInteractable->klass->vtable).__unknown_5.method)
                          (avatarInteractable,7,
                           (avatarInteractable->klass->vtable).__unknown_6.methodPtr);
        if (cVar2 == '\0') {
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (this_00 = (pMVar3->fields)._PlayerController_k__BackingField,
             this_00 != (MVLocalObjectController *)0x0)) {
            bVar4 = MVLocalObjectController::MVLocalObjectController_IsInsideVehicle
                              (this_00,(MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
            return bVar4;
          }
          goto code_?;
        }
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_CompareWithKoGaMaPackage
               (MVWorldObjectSpawnerVehicleEnergy *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&StringLiteral_starAmount);
    func_?(&StringLiteral_gameCoinAmount);
    func_?(&StringLiteral_spawnWorldObjectID);
    func_?(&StringLiteral_levelAmount);
    func_?(&StringLiteral_RequiredRank);
    func_?(&StringLiteral_Not_a_vehicle_spawner);
    func_?(&StringLiteral_Did_not_find_other_spawnWorldObj);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    pMVar1 = wo->klass;
    bVar2 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
            naturalAligment;
    if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
       ((MVWorldObjectSpawnerVehicleEnergy__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
      bVar2 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
              naturalAligment;
      pMVar3 = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
      if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
         ((MVWorldObjectSpawnerVehicleEnergy__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] ==
          TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
        pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._._._._._.data;
        if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (pDVar4,(Object *)StringLiteral_gameCoinAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar5 != 0) {
            return 0;
          }
          pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this->fields)._._._._._.data;
          if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              (pDVar4,(Object *)StringLiteral_starAmount,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar5 != 0) {
              return 0;
            }
            pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (this->fields)._._._._._.data;
            if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (pDVar4,(Object *)StringLiteral_levelAmount,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              pSVar6 = StringLiteral_RequiredRank;
              if (bVar5 != 0) {
                return 0;
              }
              pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this->fields)._._._._._.data;
              if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                  (pDVar4,(Object *)StringLiteral_RequiredRank,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                  );
                if (bVar5 != 0) {
                  return 0;
                }
                wo = MVBlueprintBase::MVBlueprintBase_GetChild
                               ((MVBlueprintBase *)wo,StringLiteral_spawnWorldObjectID,
                                (MethodInfo *)0x0);
                if (wo == (MVWorldObjectClient *)0x0) {
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)StringLiteral_Did_not_find_other_spawnWorldObj,
                             (MethodInfo *)0x0);
                  return 0;
                }
                pMVar7 = MVBlueprintBase::MVBlueprintBase_GetChild
                                   ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,
                                    (MethodInfo *)0x0);
                if (pMVar7 != (MVWorldObjectClient *)0x0) {
                  pIStack8 = (pMVar7->klass->vtable).Compare.methodPtr;
                  pSStack9 = pSVar6;
                  pDStack10 = pDVar4;
                  bVar5 = (*(code *)(pMVar7->klass->vtable).CompareWithKoGaMaPackage.method)();
                  return bVar5;
                }
              }
            }
          }
        }
        func_?();
        pMVar3 = extraout_EDX;
      }
      func_?(wo,pMVar3);
      pcVar11 = (code *)swi(3);
      bVar5 = (*pcVar11)();
      return bVar5;
    }
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Not_a_vehicle_spawner,(MethodInfo *)0x0);
  return 0;
}


/* VehicleEnergyRefill CreateVehicleEnergyRefill(Boolean) */

VehicleEnergyRefill *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
MVWorldObjectSpawnerVehicleEnergy_CreateVehicleEnergyRefill
          (VehicleEnergyRefill *__return_storage_ptr__,MVWorldObjectSpawnerVehicleEnergy *this,
          bool prediction,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  __return_storage_ptr__->spawnerId = 0;
  __return_storage_ptr__->prediction = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x5 = 0;
  iVar2 = (this->fields)._._._._._.id;
  __return_storage_ptr__->amount = 0.0;
  __return_storage_ptr__->spawnerId = iVar2;
  __return_storage_ptr__->prediction = prediction;
  pMVar3 = (this->fields).vehicleEnergyChild;
  if (pMVar3 != (MVVehicleEnergy *)0x0) {
    __return_storage_ptr__->amount =
         (float)(pMVar3->fields)._VehicleEnergyConfig_k__BackingField.energyAmount / _UNK_?;
    return __return_storage_ptr__;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pVVar7 = (VehicleEnergyRefill *)(*pcVar6)();
  return pVVar7;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_Destroy
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  if ((this->fields).initFlag != 0) {
    this_00 = (this->fields)._.useInteractor;
    if (this_00 == (UseInteractor *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UseInteractor::UseInteractor_OnDestroy(this_00,(this->fields)._._._._._.data,(MethodInfo *)0x0);
  }
  MVWorldObjectSpawner::MVWorldObjectSpawner_Destroy((MVWorldObjectSpawner *)this,(MethodInfo *)0x0)
  ;
  this_01 = (this->fields).cullingSubscriberBase;
  if (this_01 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?();
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
          MVWorldObjectSpawnerVehicleEnergy_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVWorldObjectSpawnerVehicleEnergy *this,
                    float gridSize,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      pGVar1 = (this->fields)._._._._.gameObject;
      uVar5 = 0x40000000;
      if (pGVar1 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          uVar6 = 0;
          pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
          fVar8 = pQVar7->x;
          fVar9 = pQVar7->y;
          fVar10 = pQVar7->z;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          rotation.y = fVar9;
          rotation.x = fVar8;
          rotation.z = fVar10;
          rotation.w = gridSize;
          scale.y = (float)uVar5;
          scale.x = (float)uVar6;
          scale.z = fVar4;
          pVVar3 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                             ((Vector3 *)&stack0xffffffe4,position,rotation,gridSize,scale,
                              (MethodInfo *)0x0);
          fVar8 = pVVar3->y;
          fVar4 = pVVar3->z;
          __return_storage_ptr__->x = pVVar3->x;
          __return_storage_ptr__->y = fVar8;
          __return_storage_ptr__->z = fVar4;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar11)();
  return pVVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_Initialize
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                   );
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    func_?(&
                    MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnEnterTriggerBox_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&StringLiteral_Could_not_get_spawnPoint_child_s);
    func_?(&StringLiteral_spawnWorldObjectID);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Could_not_get_spawnPoint_child_s,(MethodInfo *)0x0);
    return;
  }
  MVWorldObjectSpawner::MVWorldObjectSpawner_Initialize
            ((MVWorldObjectSpawner *)this,(MethodInfo *)0x0);
  pMVar2 = (MVVehicleEnergy *)
            MVGroup::MVGroup_GetChild
                      ((MVGroup *)this,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar2 == (MVVehicleEnergy *)0x0) {
    (this->fields).vehicleEnergyChild = (MVVehicleEnergy *)0x0;
  }
  else {
    bVar3 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
       ((MVVehicleEnergy__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) goto code_?;
    (this->fields).vehicleEnergyChild = pMVar2;
    bVar3 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
       ((MVVehicleEnergy__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) goto code_?;
  }
  func_?();
  if (((this->fields).spawnerObject != (SpawnerObject *)0x0) &&
     (pTVar4 = (this->fields)._.triggerBoxEvents, pTVar4 != (TriggerBoxEvents *)0x0)) {
    triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar4,(MethodInfo *)0x0);
    this_01 = (Predicate_1_UInt32_ *)func_?();
    mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
              (this_01,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    owner = TypeInfo__System__Func<int,_MVInteractableBase,_bool>;
    this_02 = (Func_3_Int32_Object_Boolean_ *)func_?();
    mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
              (this_02,(Object *)this,(this->klass->vtable).Use.methodPtr,(MethodInfo *)0x0);
    pUVar5 = (UseInteractor *)func_?();
    UseInteractor::UseInteractor__ctor
              (pUVar5,(MVWorldObjectClient *)this,(GameObject *)owner,1,triggerCollider,
               (Func_2_Int32_Boolean_ *)this_01,(Func_3_Int32_MVInteractableBase_Boolean_ *)this_02,
               3.5,1,(MethodInfo *)0x0);
    (this->fields)._.useInteractor = pUVar5;
    func_?();
    pTVar4 = (this->fields)._.triggerBoxEvents;
    pEVar6 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar6,(Object *)this,
               MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnEnterTriggerBox_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar4 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
                (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pEVar6,(MethodInfo *)0x0);
      pTVar4 = (this->fields)._.triggerBoxEvents;
      pUVar5 = (this->fields)._.useInteractor;
      pEVar6 = (EventHandler_1_Object_ *)func_?();
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar6,(Object *)pUVar5,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar4 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
                  (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pEVar6,(MethodInfo *)0x0);
        MVWorldObjectSpawnerVehicleEnergy_InitializeCommon(this,(MethodInfo *)0x0);
        pUVar5 = (this->fields)._.useInteractor;
        if (pUVar5 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_UpdateData
                    (pUVar5,(this->fields)._._._._._.data,(MethodInfo *)0x0);
          pMVar2 = (this->fields).vehicleEnergyChild;
          if (((pMVar2 != (MVVehicleEnergy *)0x0) &&
              (pEVar7 = (pMVar2->fields).editableCubeModelWrapper,
              pEVar7 != (EditableCubeModelWrapper *)0x0)) &&
             (pMVar8 = (pEVar7->fields).cubeModelBase, pMVar8 != (MVCubeModelInstance *)0x0)) {
            (this->fields).lodGameObject = (pMVar8->fields)._._.gameObject;
            func_?();
            pMVar2 = (this->fields).vehicleEnergyChild;
            if (pMVar2 != (MVVehicleEnergy *)0x0) {
              (this->fields).visualsGameObject =
                   (pMVar2->fields)._VehicleEnergyVisualsGameObject_k__BackingField;
              func_?();
              pMVar2 = (this->fields).vehicleEnergyChild;
              if (pMVar2 != (MVVehicleEnergy *)0x0) {
                piVar9 = &(this->fields)._._._._.interactionFlags;
                *(uint *)piVar9 = (uint)*piVar9 | (uint)(pMVar2->fields)._._._.interactionFlags;
                puVar10 = (uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
                *puVar10 = *puVar10 | *(uint *)((int)&(pMVar2->fields)._._._.interactionFlags + 4);
                uVar11 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
                piVar9 = &(this->fields)._._._._.interactionFlags;
                *(uint *)piVar9 = (uint)*piVar9 | 8;
                *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar11;
                this_00 = (this->fields)._._._._.gameObject;
                if (this_00 != (GameObject *)0x0) {
                  pGVar12 = (GreyOutObjectScript *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (this_00,
                                       GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                                      );
                  ppGVar13 = &(this->fields).pickupItemObjectScript;
                  *ppGVar13 = pGVar12;
                  func_?();
                  pGVar12 = *ppGVar13;
                  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (((this_03 != (MVWorldObjectClientManager *)0x0) &&
                      (pMVar14 = MVWorldObjectClientManager::
                                 MVWorldObjectClientManager_GetWorldObject
                                           (this_03,(this->fields)._.spawnWorldObjectID,
                                            (MethodInfo *)0x0), pMVar14 != (MVWorldObject *)0x0)) &&
                     (pGVar12 != (GreyOutObjectScript *)0x0)) {
                    GreyOutObjectScript::GreyOutObjectScript_SetPickupObject
                              (pGVar12,(GameObject *)pMVar14[1].fields.inputLinkRefs,
                               (MethodInfo *)0x0);
                    (this->fields).initFlag = 1;
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      func_?();
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    pUVar15 = (this->fields)._._._._.PositionChanged;
                    this_04 = (UnityAction_2_System_Object_System_Object_ *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (this_04,(Object *)this,
                               MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                               ,(MethodInfo *)0x0);
                    pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pUVar15,(Delegate *)this_04,(MethodInfo *)0x0);
                    if (pDVar16 == (Delegate *)0x0) {
                      (this->fields)._._._._.PositionChanged =
                           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
                      func_?();
                      iVar17 = (*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
                      fVar18 = *(float *)(iVar17 + 8);
                      this_05 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
                      puVar19 = &UNK_?;
                      pUVar20 = this_05;
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::
                      Vector2]::UnityAction_1_UnityEngine_Vector2___ctor
                                (this_05,(Object *)this,
                                 MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnStateChanged_UnityEngine__CullingGroupEvent_
                                 ,(MethodInfo *)0x0);
                      this_06 = (CullingSubscriberBase *)func_?();
                      position.y = (float)pUVar20;
                      position.x = (float)puVar19;
                      position.z = fVar18;
                      CullingSubscriberBase::CullingSubscriberBase__ctor_2
                                (this_06,2.5,position,
                                 (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_05,
                                 (MethodInfo *)0x0);
                      if (this_06 != (CullingSubscriberBase *)0x0) {
                        (this_06->fields)._DistanceBandIndex_k__BackingField = 2;
                        (this->fields).cullingSubscriberBase = this_06;
                        func_?();
                        return;
                      }
                    }
                    else {
                      pUVar15 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                                func_?();
                      if (pUVar15 !=
                          (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
                        (this->fields)._._._._.PositionChanged = pUVar15;
                        iVar17 = func_?();
                        if (iVar17 != 0) goto code_?;
                        func_?();
                      }
                      func_?();
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
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_InitializeCommon
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    func_?(&StringLiteral_spawnWorldObjectID);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    bVar3 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    pMVar2 = TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy;
    if ((bVar3 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVVehicleEnergy__Class *)(pMVar1->klass->_1).typeHierarchy[bVar3 - 1] ==
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      iVar4 = (*(code *)(pMVar1->klass->vtable).get_DocumentationType.method)
                        (pMVar1,(pMVar1->klass->vtable).TraverseRecursiveTail.methodPtr);
      (this->fields)._.documentationType = iVar4;
      return;
    }
  }
  func_?(pMVar1,pMVar2);
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
    func_?();
    func_?(&StringLiteral_spawnWorldObjectID);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                     (in_stack_2,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    func_?();
  }
  else {
    bVar3 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if ((bVar3 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVVehicleEnergy__Class *)(pMVar1->klass->_1).typeHierarchy[bVar3 - 1] ==
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      pMVar4 = (MVBlueprintBase__Class *)
               (*(code *)(pMVar1->klass->vtable).get_DocumentationType.method)();
      in_stack_2[1].klass = pMVar4;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnDataUpdate
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  MVWorldObjectSpawner::MVWorldObjectSpawner_OnDataUpdate
            ((MVWorldObjectSpawner *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._._._.data,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnEnterObject
               (MVWorldObjectSpawnerVehicleEnergy *this,EditorStateMachine *e,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    pSVar2 = (this->fields)._.spawnStateWrapper;
    if (pSVar2 != (SpawnStateWrapper *)0x0) {
      if ((pSVar2->fields)._SpawnState_k__BackingField == 2) {
        this_00 = (this->fields).pickupItemObjectScript;
        if (this_00 == (GreyOutObjectScript *)0x0) goto code_?;
        GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
      }
      if (pMVar1 != (MVWorldObject *)0x0) {
        bVar3 = (*pMVar1->klass[1].vtable.set_Scale.methodPtr)();
        return bVar3;
      }
    }
  }
code_?:
  func_?();
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
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_This_is_Energy_to_fuel_a_Vehicle);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._PlayerController_k__BackingField,
     pMVar2 != (MVLocalObjectController *)0x0)) {
    bVar3 = MVLocalObjectController::MVLocalObjectController_IsInsideVehicleUsingEnergy
                      (pMVar2,(MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields)._PlayerController_k__BackingField,
         pMVar2 != (MVLocalObjectController *)0x0)) {
        bVar3 = MVLocalObjectController::MVLocalObjectController_IsInsideVehicle
                          (pMVar2,(MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          return;
        }
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        key = (Object *)func_?();
        value = TM::TM__(StringLiteral_This_is_Energy_to_fuel_a_Vehicle,(MethodInfo *)0x0);
        if (this_01 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,key,(Object *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_PushNotification_2
                    (NotificationType__Enum_PlayerTip,
                     (Dictionary_2_System_Object_System_Object_ *)this_01,
                     NotificationLifetime__Enum_High,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      this_00 = (this->fields)._.useInteractor;
      if (this_00 != (UseInteractor *)0x0) {
        UseInteractor::UseInteractor_triggerBoxEvents_TriggerEnter
                  (this_00,sender,e,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnExitObject
               (MVWorldObjectSpawnerVehicleEnergy *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      bVar2 = (*pMVar1->klass[1].vtable.get_WorldPosition.methodPtr)();
      return bVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnPositionChanged
               (MVWorldObjectSpawnerVehicleEnergy *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (this_00 = (this->fields).cullingSubscriberBase, this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              (this_00,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    if (pGVar1 == (GreyOutObjectScript *)0x0) goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).vehicleEnergyChild;
    if (pMVar2 == (MVVehicleEnergy *)0x0) goto code_?;
    MVVehicleEnergy::MVVehicleEnergy_ToggleColliders(pMVar2,1,(MethodInfo *)0x0);
    pMVar3 = (pMVar2->fields).vehicleEnergyObject;
    if ((pMVar3 == (MVVehicleEnergyObject *)0x0) ||
       (pVVar4 = (pMVar3->fields).vehicleEnergyVisuals, pVVar4 == (VehicleEnergyVisuals *)0x0))
    goto code_?;
    if ((pVVar4->fields).particleSystemOn == 0) {
      return;
    }
    pPVar5 = (pVVar4->fields).particles;
    if (pPVar5 == (ParticleSystem *)0x0) goto code_?;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar5,(MethodInfo *)0x0);
  }
  else {
    if (spawnState != SpawnState__Enum_Taken) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    bVar7 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      return;
    }
    pGVar1 = (this->fields).pickupItemObjectScript;
    if (pGVar1 == (GreyOutObjectScript *)0x0) goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).vehicleEnergyChild;
    if (pMVar2 == (MVVehicleEnergy *)0x0) goto code_?;
    MVVehicleEnergy::MVVehicleEnergy_ToggleColliders(pMVar2,0,(MethodInfo *)0x0);
    pMVar3 = (pMVar2->fields).vehicleEnergyObject;
    if ((pMVar3 == (MVVehicleEnergyObject *)0x0) ||
       (pVVar4 = (pMVar3->fields).vehicleEnergyVisuals, pVVar4 == (VehicleEnergyVisuals *)0x0))
    goto code_?;
    if ((pVVar4->fields).particleSystemOn == 0) {
      return;
    }
    pPVar5 = (pVVar4->fields).particles;
    if (pPVar5 == (ParticleSystem *)0x0) goto code_?;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar5,(MethodInfo *)0x0);
  }
  if (pGVar6 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_OnStateChanged
               (MVWorldObjectSpawnerVehicleEnergy *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    pGVar2 = (this->fields).lodGameObject;
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,value,(MethodInfo *)0x0);
      pGVar2 = (this->fields).visualsGameObject;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_Select
               (MVWorldObjectSpawnerVehicleEnergy *this,Color color,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      (*pMVar1->klass[1].vtable.ShallowCopy.methodPtr)();
    }
    return;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
     MVWorldObjectSpawnerVehicleEnergy_SetupCulling
               (MVWorldObjectSpawnerVehicleEnergy *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&
                    MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnStateChanged_UnityEngine__CullingGroupEvent_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._._._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    (this->fields)._._._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
    func_?();
    pMStack_3 = this;
    puVar4 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)(&pMStack_3);
    fVar5 = *(float *)(puVar4 + 1);
    uVar6 = (undefined4)*puVar4;
    uVar7 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnStateChanged_UnityEngine__CullingGroupEvent_
               ,(MethodInfo *)0x0);
    this_02 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar7;
    position.x = (float)uVar6;
    position.z = fVar5;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,2.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    if (this_02 != (CullingSubscriberBase *)0x0) {
      ppCStack8 = &(this->fields).cullingSubscriberBase;
      (this_02->fields)._DistanceBandIndex_k__BackingField = 2;
      *ppCStack8 = this_02;
      func_?();
      return;
    }
  }
  else {
    pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar1 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (this->fields)._._._._.PositionChanged = pUVar1;
      iVar9 = func_?();
      if (iVar9 == 0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
      MVWorldObjectClient::MVWorldObjectClient_SetupTierInventory
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_SpawnWorldObject_is_null);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.spawnStateWrapper;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    if ((pSVar1->fields)._SpawnState_k__BackingField == 2) {
      return 0;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObject *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_SpawnWorldObject_is_null,(MethodInfo *)0x0);
        return 0;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar3->fields)._PlayerController_k__BackingField,
         this_00 != (MVLocalObjectController *)0x0)) {
        bVar4 = MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseRequest
                          (this_00,(this->fields)._._._._._.id,0,(MethodInfo *)0x0);
        return bVar4;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
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
    func_?(&TypeInfo__SpawnerObject);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    func_?();
  }
  else {
    MVWorldObjectSpawner::MVWorldObjectSpawner__ctor_1
              ((MVWorldObjectSpawner *)this,data,(ObjectPrefab *)(pPVar1->fields).spawnerObject,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._._._.previewLayerMask;
    *piVar2 = *piVar2 | 0x1000;
    pSVar3 = (SpawnerObject *)(this->fields)._._._._.component;
    if (pSVar3 == (SpawnerObject *)0x0) {
      (this->fields).spawnerObject = (SpawnerObject *)0x0;
      func_?();
      return;
    }
    bVar4 = (TypeInfo__SpawnerObject->_1).naturalAligment;
    if ((bVar4 <= (((ObjectPrefab__Class *)pSVar3->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pSVar3->klass)->_1).typeHierarchy[bVar4 - 1] ==
        (Il2CppClass *)TypeInfo__SpawnerObject)) {
      (this->fields).spawnerObject = pSVar3;
      bVar4 = (TypeInfo__SpawnerObject->_1).naturalAligment;
      if ((bVar4 <= (((ObjectPrefab__Class *)pSVar3->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pSVar3->klass)->_1).typeHierarchy[bVar4 - 1] ==
          (Il2CppClass *)TypeInfo__SpawnerObject)) {
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

