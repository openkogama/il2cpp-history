
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
      cVar2 = (*(avatarInteractable->klass->vtable).__unknown_5.methodPtr)
                        (avatarInteractable,9,(avatarInteractable->klass->vtable).__unknown_5.method
                        );
      if (cVar2 == '\0') {
        cVar2 = (*(avatarInteractable->klass->vtable).__unknown_5.methodPtr)
                          (avatarInteractable,7,
                           (avatarInteractable->klass->vtable).__unknown_5.method);
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
  if (((wo == (MVWorldObjectClient *)0x0) ||
      (pMVar1 = wo->klass,
      (pMVar1->_1).typeHierarchyDepth <
      (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
      typeHierarchyDepth)) ||
     ((MVWorldObjectSpawnerVehicleEnergy__Class *)
      (pMVar1->_1).typeHierarchy
      [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
       typeHierarchyDepth - 1] !=
      TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Not_a_vehicle_spawner,(MethodInfo *)0x0);
    return 0;
  }
  pMVar2 = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
  if (((TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
       typeHierarchyDepth <= (pMVar1->_1).typeHierarchyDepth) &&
     ((MVWorldObjectSpawnerVehicleEnergy__Class *)
      (pMVar1->_1).typeHierarchy
      [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
       typeHierarchyDepth - 1] ==
      TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
    pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._._._.data
    ;
    if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar3,(Object *)StringLiteral_gameCoinAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar4 != 0) {
        return 0;
      }
      pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (this->fields)._._._._._.data;
      if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar3,(Object *)StringLiteral_starAmount,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar4 != 0) {
          return 0;
        }
        pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                 (this->fields)._._._._._.data;
        if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (pDVar3,(Object *)StringLiteral_levelAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          pSVar5 = StringLiteral_RequiredRank;
          if (bVar4 != 0) {
            return 0;
          }
          pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                   (this->fields)._._._._._.data;
          if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
            bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (pDVar3,(Object *)StringLiteral_RequiredRank,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar4 != 0) {
              return 0;
            }
            wo = MVBlueprintBase::MVBlueprintBase_GetChild
                           ((MVBlueprintBase *)wo,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0
                           );
            if (wo == (MVWorldObjectClient *)0x0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Did_not_find_other_spawnWorldObj,(MethodInfo *)0x0)
              ;
              return 0;
            }
            pMVar6 = MVBlueprintBase::MVBlueprintBase_GetChild
                               ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,
                                (MethodInfo *)0x0);
            if (pMVar6 != (MVWorldObjectClient *)0x0) {
              pMStack7 = (pMVar6->klass->vtable).CompareWithKoGaMaPackage.method;
              pSStack8 = pSVar5;
              pDStack9 = pDVar3;
              bVar4 = (*(pMVar6->klass->vtable).CompareWithKoGaMaPackage.methodPtr)();
              return bVar4;
            }
          }
        }
      }
    }
    func_?();
    pMVar2 = extraout_EDX;
  }
  func_?(wo,pMVar2);
  pcVar10 = (code *)swi(3);
  bVar4 = (*pcVar10)();
  return bVar4;
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
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                   );
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    func_?(&
                    MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnEnterTriggerBox_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&StringLiteral_Could_not_get_spawnPoint_child_s);
    func_?(&StringLiteral_spawnWorldObjectID);
    func_?(&StringLiteral_hiddenShader_not_found);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
    if (((pMVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).typeHierarchyDepth) ||
       ((MVVehicleEnergy__Class *)
        (pMVar2->klass->_1).typeHierarchy
        [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).typeHierarchyDepth - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) goto code_?;
    (this->fields).vehicleEnergyChild = pMVar2;
    if (((pMVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).typeHierarchyDepth) ||
       ((MVVehicleEnergy__Class *)
        (pMVar2->klass->_1).typeHierarchy
        [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).typeHierarchyDepth - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) goto code_?;
  }
  func_?(&(this->fields).vehicleEnergyChild);
  if (((this->fields).spawnerObject != (SpawnerObject *)0x0) &&
     (pTVar3 = (this->fields)._.triggerBoxEvents, pTVar3 != (TriggerBoxEvents *)0x0)) {
    TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
    this_01 = (Predicate_1_Int32Enum_ *)func_?();
    if (this_01 != (Predicate_1_Int32Enum_ *)0x0) {
      mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                (this_01,(Object *)this,(this->klass->vtable).Use.method,(MethodInfo *)0x0);
      this_02 = (Func_3_Int32_Object_Boolean_ *)func_?();
      if (this_02 != (Func_3_Int32_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                  (this_02,(Object *)this,(this->klass->vtable).CheckCanUse.method,(MethodInfo *)0x0
                  );
        pUVar4 = (UseInteractor *)func_?();
        if (pUVar4 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor__ctor
                    (pUVar4,(MVWorldObjectClient *)this,(GameObject *)this_01,1,
                     (Collider *)0x40600000,(Func_2_Int32_Boolean_ *)this_01,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)0x40600000,3.5,1,(MethodInfo *)0x0)
          ;
          (this->fields)._.useInteractor = pUVar4;
          func_?(&(this->fields)._.useInteractor);
          pTVar3 = (this->fields)._.triggerBoxEvents;
          pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          if ((pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar5,(Object *)this,
                         MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnEnterTriggerBox_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0), pTVar3 != (TriggerBoxEvents *)0x0)) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
                      (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
            pUVar4 = (this->fields)._.useInteractor;
            pTVar3 = (this->fields)._.triggerBoxEvents;
            pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
            if ((pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
               (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar5,(Object *)pUVar4,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0), pTVar3 != (TriggerBoxEvents *)0x0)) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
              MVWorldObjectSpawnerVehicleEnergy_InitializeCommon(this,(MethodInfo *)0x0);
              pUVar4 = (this->fields)._.useInteractor;
              if (pUVar4 != (UseInteractor *)0x0) {
                UseInteractor::UseInteractor_UpdateData
                          (pUVar4,(this->fields)._._._._._.data,(MethodInfo *)0x0);
                pMVar2 = (this->fields).vehicleEnergyChild;
                if (((pMVar2 != (MVVehicleEnergy *)0x0) &&
                    (pEVar6 = (pMVar2->fields).editableCubeModelWrapper,
                    pEVar6 != (EditableCubeModelWrapper *)0x0)) &&
                   (pMVar7 = (pEVar6->fields).cubeModelBase, pMVar7 != (MVCubeModelInstance *)0x0))
                {
                  (this->fields).lodGameObject = (pMVar7->fields)._._.gameObject;
                  func_?(&(this->fields).lodGameObject);
                  pMVar2 = (this->fields).vehicleEnergyChild;
                  if (pMVar2 != (MVVehicleEnergy *)0x0) {
                    (this->fields).visualsGameObject =
                         (pMVar2->fields)._VehicleEnergyVisualsGameObject_k__BackingField;
                    func_?(&(this->fields).visualsGameObject);
                    pMVar2 = (this->fields).vehicleEnergyChild;
                    if (pMVar2 != (MVVehicleEnergy *)0x0) {
                      uVar8 = *(uint *)((int)&(pMVar2->fields)._._._.interactionFlags + 4);
                      uVar9 = *(uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
                      *(uint *)&(this->fields)._._._._.interactionFlags =
                           (uint)(pMVar2->fields)._._._.interactionFlags |
                           (uint)(this->fields)._._._._.interactionFlags;
                      piVar10 = &(this->fields)._._._._.interactionFlags;
                      *(uint *)piVar10 = (uint)*piVar10 | 8;
                      *(uint *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar8 | uVar9;
                      this_00 = (this->fields)._._._._.gameObject;
                      if (this_00 != (GameObject *)0x0) {
                        pGVar11 = (GreyOutObjectScript *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_1
                                            (this_00,
                                             GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                                            );
                        (this->fields).pickupItemObjectScript = pGVar11;
                        func_?(&(this->fields).pickupItemObjectScript);
                        pGVar11 = (this->fields).pickupItemObjectScript;
                        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                            ((MethodInfo *)0x0);
                        if ((pMVar12 != (MaterialLoader *)0x0) &&
                           (pGVar11 != (GreyOutObjectScript *)0x0)) {
                          (pGVar11->fields).hiddenShader = (pMVar12->fields).pickupItemShader;
                          func_?(&(pGVar11->fields).hiddenShader);
                          pGVar11 = (this->fields).pickupItemObjectScript;
                          if (pGVar11 != (GreyOutObjectScript *)0x0) {
                            x = (pGVar11->fields).hiddenShader;
                            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?();
                            }
                            bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_op_Equality
                                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                            if (bVar13 != 0) {
                              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0
                                 ) {
                                func_?(TypeInfo__UnityEngine__Debug);
                              }
                              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                                        ((Object *)StringLiteral_hiddenShader_not_found,
                                         (MethodInfo *)0x0);
                            }
                            pGVar11 = (this->fields).pickupItemObjectScript;
                            this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                ((MethodInfo *)0x0);
                            if (((this_03 != (MVWorldObjectClientManager *)0x0) &&
                                (pMVar14 = MVWorldObjectClientManager::
                                           MVWorldObjectClientManager_GetWorldObject
                                                     (this_03,(this->fields)._.spawnWorldObjectID,
                                                      (MethodInfo *)0x0),
                                pMVar14 != (MVWorldObject *)0x0)) &&
                               (pGVar11 != (GreyOutObjectScript *)0x0)) {
                              (pGVar11->fields).pickupObject =
                                   (GameObject *)pMVar14[1].fields.inputLinkRefs;
                              func_?(&(pGVar11->fields).pickupObject);
                              pGVar11 = (this->fields).pickupItemObjectScript;
                              if (pGVar11 != (GreyOutObjectScript *)0x0) {
                                GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                                          (pGVar11,(MethodInfo *)0x0);
                                (this->fields).initFlag = 1;
                                MVWorldObjectSpawnerVehicleEnergy_SetupCulling
                                          (this,(MethodInfo *)0x0);
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
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    pMVar2 = TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy;
    if (((TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).typeHierarchyDepth <=
         (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVVehicleEnergy__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).typeHierarchyDepth - 1] ==
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      iVar3 = (*(pMVar1->klass->vtable).get_DocumentationType.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable).get_DocumentationType.method);
      (this->fields)._.documentationType = iVar3;
      return;
    }
  }
  func_?(pMVar1,pMVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  else if (((TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).typeHierarchyDepth <=
            (pMVar1->klass->_1).typeHierarchyDepth) &&
          ((MVVehicleEnergy__Class *)
           (pMVar1->klass->_1).typeHierarchy
           [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).typeHierarchyDepth - 1]
           == TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
    pMVar3 = (MVBlueprintBase__Class *)(*(pMVar1->klass->vtable).get_DocumentationType.methodPtr)();
    in_stack_2[1].klass = pMVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
        bVar3 = (*(code *)pMVar1->klass[1].vtable.get_Scale.method)();
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
        this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          key = (Object *)func_?();
          value = TM::TM__(StringLiteral_This_is_Energy_to_fuel_a_Vehicle,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,key,(Object *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_PushNotification_2
                    (NotificationType__Enum_PlayerTip,this_01,NotificationLifetime__Enum_High,
                     (MethodInfo *)0x0);
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
      bVar2 = (*(code *)pMVar1->klass[1].vtable.set_Scale.method)();
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
      (*(code *)pMVar1->klass[1].vtable.IsSingletonObject.method)();
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._._._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
  if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
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
    }
    else {
      pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (this->fields)._._._._.PositionChanged = pUVar1;
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    func_?();
    pVVar4 = (Vector3 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)();
    position = *pVVar4;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    if (this_01 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                (this_01,(Object *)this,
                 MethodInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy__OnStateChanged_UnityEngine__CullingGroupEvent_
                 ,(MethodInfo *)0x0);
      this_02 = (CullingSubscriberBase *)func_?();
      if (this_02 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (this_02,2.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
                   (MethodInfo *)0x0);
        (this_02->fields)._DistanceBandIndex_k__BackingField = 2;
        (this->fields).cullingSubscriberBase = this_02;
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
    pSVar2 = extraout_EDX;
  }
  else {
    MVWorldObjectSpawner::MVWorldObjectSpawner__ctor_1
              ((MVWorldObjectSpawner *)this,data,(ObjectPrefab *)(pPVar1->fields).spawnerObject,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._._._.previewLayerMask;
    *piVar3 = *piVar3 | 0x1000;
    pSVar2 = (SpawnerObject *)(this->fields)._._._._.component;
    if (pSVar2 == (SpawnerObject *)0x0) {
      (this->fields).spawnerObject = (SpawnerObject *)0x0;
      func_?();
      return;
    }
    if (((TypeInfo__SpawnerObject->_1).typeHierarchyDepth <=
         (((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchyDepth) &&
       ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy
        [(TypeInfo__SpawnerObject->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__SpawnerObject)) {
      (this->fields).spawnerObject = pSVar2;
      if (((TypeInfo__SpawnerObject->_1).typeHierarchyDepth <=
           (((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchyDepth) &&
         ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy
          [(TypeInfo__SpawnerObject->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__SpawnerObject)) {
        func_?();
        return;
      }
    }
  }
  func_?(pSVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

