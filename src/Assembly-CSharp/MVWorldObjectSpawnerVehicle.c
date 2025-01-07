
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_CheckCanUse
               (MVWorldObjectSpawnerVehicle *this,int32_t woId,
               MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnStateWrapper;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    if ((pSVar1->fields)._SpawnState_k__BackingField != 2) {
      if (avatarInteractable == (MVInteractableBase *)0x0) goto code_?;
      cVar2 = (*(code *)(avatarInteractable->klass->vtable).__unknown_7.method)
                        (avatarInteractable,9,
                         (avatarInteractable->klass->vtable).__unknown_8.methodPtr);
      if (cVar2 == '\0') {
        cVar2 = (*(code *)(avatarInteractable->klass->vtable).__unknown_7.method)
                          (avatarInteractable,7,
                           (avatarInteractable->klass->vtable).__unknown_8.methodPtr);
        if (cVar2 == '\0') {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
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
      (pMVar1->_1).naturalAligment < (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment))
     || ((MVWorldObjectSpawnerVehicle__Class *)
         (pMVar1->_1).typeHierarchy[(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment - 1]
         != TypeInfo__MVWorldObjectSpawnerVehicle)) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Not_a_vehicle_spawner,(MethodInfo *)0x0);
    return 0;
  }
  pMVar2 = TypeInfo__MVWorldObjectSpawnerVehicle;
  if (((TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment <= (pMVar1->_1).naturalAligment)
     && ((MVWorldObjectSpawnerVehicle__Class *)
         (pMVar1->_1).typeHierarchy[(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment - 1]
         == TypeInfo__MVWorldObjectSpawnerVehicle)) {
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._._._.data;
    if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar3,(Object *)StringLiteral_gameCoinAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar4 != 0) {
        return 0;
      }
      pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._._._.data;
      if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar3,(Object *)StringLiteral_starAmount,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar4 != 0) {
          return 0;
        }
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._._._._._.data;
        if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (pDVar3,(Object *)StringLiteral_levelAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          pSVar5 = StringLiteral_RequiredRank;
          if (bVar4 != 0) {
            return 0;
          }
          pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this->fields)._._._._._.data;
          if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
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
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Did_not_find_other_spawnWorldObj,(MethodInfo *)0x0)
              ;
              return 0;
            }
            pMVar6 = MVBlueprintBase::MVBlueprintBase_GetChild
                               ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,
                                (MethodInfo *)0x0);
            if (pMVar6 != (MVWorldObjectClient *)0x0) {
              pSStack7 = pSVar5;
              pMStack8 = wo;
              pDStack9 = pDVar3;
              bVar4 = func_?();
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


/* Void Destroy() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_Destroy
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

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
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields)._.spawnStateWrapper != (SpawnStateWrapper *)0x0) {
    obj = (this->fields)._.spawnStateWrapper;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_RemoveUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)obj,(MethodInfo *)0x0);
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?();
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
          MVWorldObjectSpawnerVehicle_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVWorldObjectSpawnerVehicle *this,
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

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_Initialize
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                   );
    func_?(&TypeInfo__GameRankRequirement);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&StringLiteral_spawnWorldObjectID);
    func_?(&StringLiteral_Could_not_get_spawnPoint_child_s);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    MVWorldObjectSpawner::MVWorldObjectSpawner_Initialize
              ((MVWorldObjectSpawner *)this,(MethodInfo *)0x0);
    pMVar1 = MVGroup::MVGroup_GetChild
                       ((MVGroup *)this,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
       (((TypeInfo__MVVehicleBase->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment &&
        ((MVVehicleBase__Class *)
         (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] ==
         TypeInfo__MVVehicleBase)))) {
      if (((this->fields).spawnerObject != (SpawnerObject *)0x0) &&
         (pTVar2 = (this->fields)._.triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
        TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
        this_01 = (Predicate_1_UInt32_ *)func_?();
        mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                  (this_01,(Object *)this,(this->klass->vtable).OnStateChanged.methodPtr,
                   (MethodInfo *)0x0);
        this_02 = (Func_3_Int32_Object_Boolean_ *)
                  func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
        owner = this;
        mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                  (this_02,(Object *)this,(this->klass->vtable).Use.methodPtr,(MethodInfo *)0x0);
        triggerCollider = (Collider *)&UNK_?;
        pUVar3 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
        UseInteractor::UseInteractor__ctor
                  (pUVar3,(MVWorldObjectClient *)this,(GameObject *)owner,1,triggerCollider,
                   (Func_2_Int32_Boolean_ *)this_01,
                   (Func_3_Int32_MVInteractableBase_Boolean_ *)this_02,3.5,0,(MethodInfo *)0x0);
        (this->fields)._.useInteractor = pUVar3;
        func_?();
        pTVar2 = (this->fields)._.triggerBoxEvents;
        pUVar3 = (this->fields)._.useInteractor;
        pUVar4 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar4,(Object *)pUVar3,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
          this_00 = (this->fields)._.triggerBoxEvents;
          pUVar3 = (this->fields)._.useInteractor;
          pUVar4 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar4,(Object *)pUVar3,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (this_00 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
                      (this_00,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
            MVWorldObjectSpawnerVehicle_InitializeCommon(this,(MethodInfo *)0x0);
            pSVar5 = (this->fields).spawnerObject;
            if (pSVar5 != (SpawnerObject *)0x0) {
              pGVar6 = (pSVar5->fields).UseInteractorRotator;
              this_03 = (GameCoinLogic *)func_?();
              GameCoinLogic::GameCoinLogic__ctor(this_03,pGVar6,1,(MethodInfo *)0x0);
              pUVar3 = (this->fields)._.useInteractor;
              if (pUVar3 != (UseInteractor *)0x0) {
                UseInteractor::UseInteractor_AddRequirement
                          (pUVar3,(UseRequirement *)this_03,(MethodInfo *)0x0);
                pSVar5 = (this->fields).spawnerObject;
                if (pSVar5 != (SpawnerObject *)0x0) {
                  pGVar6 = (pSVar5->fields).UseInteractorRotator;
                  this_04 = (LevelBasedUseRequirement *)func_?();
                  LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                            (this_04,pGVar6,1,(MethodInfo *)0x0);
                  pUVar3 = (this->fields)._.useInteractor;
                  if (pUVar3 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_AddRequirement
                              (pUVar3,(UseRequirement *)this_04,(MethodInfo *)0x0);
                    pSVar5 = (this->fields).spawnerObject;
                    if (pSVar5 != (SpawnerObject *)0x0) {
                      pGVar6 = (pSVar5->fields).UseInteractorRotator;
                      this_05 = (GameRankRequirement *)func_?();
                      GameRankRequirement::GameRankRequirement__ctor
                                (this_05,pGVar6,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
                      pUVar3 = (this->fields)._.useInteractor;
                      if (pUVar3 != (UseInteractor *)0x0) {
                        UseInteractor::UseInteractor_AddRequirement
                                  (pUVar3,(UseRequirement *)this_05,(MethodInfo *)0x0);
                        pSVar5 = (this->fields).spawnerObject;
                        if (pSVar5 != (SpawnerObject *)0x0) {
                          pGVar6 = (pSVar5->fields).UseInteractorRotator;
                          this_06 = (RewardedAdRequirement *)func_?();
                          WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                          RewardedAdRequirement__ctor(this_06,pGVar6,(MethodInfo *)0x0);
                          pUVar3 = (this->fields)._.useInteractor;
                          if (pUVar3 != (UseInteractor *)0x0) {
                            UseInteractor::UseInteractor_AddRequirement
                                      (pUVar3,(UseRequirement *)this_06,(MethodInfo *)0x0);
                            pUVar3 = (this->fields)._.useInteractor;
                            if (((pUVar3 != (UseInteractor *)0x0) &&
                                (UseInteractor::UseInteractor_UpdateData
                                           (pUVar3,(this->fields)._._._._._.data,(MethodInfo *)0x0),
                                pTVar2 != (TriggerBoxEvents *)0x0)) &&
                               (pEVar7 = pTVar2[6].fields.TriggerExitOverride,
                               pEVar7 != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
                              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 ((Component *)pEVar7,(MethodInfo *)0x0);
                              (this->fields).lodGameObject = pGVar6;
                              func_?(&(this->fields).lodGameObject);
                              pEVar7 = pTVar2[4].fields.TriggerEnter;
                              iVar8 = (this->fields)._._._._.interactionFlags;
                              *(uint *)((int)&(this->fields)._._._._.interactionFlags + 4) =
                                   (uint)pTVar2[4].fields.TriggerExit |
                                   *(uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
                              puVar9 = (uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
                              *puVar9 = *puVar9 | 2;
                              *(uint *)&(this->fields)._._._._.interactionFlags =
                                   (uint)pEVar7 | (uint)iVar8 | 0x300008;
                              pGVar6 = (this->fields)._._._._.gameObject;
                              if (pGVar6 != (GameObject *)0x0) {
                                pGVar10 = (GreyOutObjectScript *)
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_AddComponent_1
                                                    (pGVar6,
                                                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                                                  );
                                (this->fields).pickupItemObjectScript = pGVar10;
                                func_?(&(this->fields).pickupItemObjectScript);
                                pGVar10 = (this->fields).pickupItemObjectScript;
                                this_07 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                    ((MethodInfo *)0x0);
                                if (((this_07 != (MVWorldObjectClientManager *)0x0) &&
                                    (pMVar11 = MVWorldObjectClientManager::
                                               MVWorldObjectClientManager_GetWorldObject
                                                         (this_07,(this->fields)._.
                                                                  spawnWorldObjectID,
                                                          (MethodInfo *)0x0),
                                    pMVar11 != (MVWorldObject *)0x0)) &&
                                   (pGVar10 != (GreyOutObjectScript *)0x0)) {
                                  GreyOutObjectScript::GreyOutObjectScript_SetPickupObject
                                            (pGVar10,(GameObject *)pMVar11[1].fields.inputLinkRefs,
                                             (MethodInfo *)0x0);
                                  (this->fields).initFlag = 1;
                                  MVWorldObjectSpawnerVehicle_SetupCulling(this,(MethodInfo *)0x0);
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
      func_?();
      pMVar1 = extraout_EDX;
    }
    func_?(pMVar1);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Could_not_get_spawnPoint_child_s,(MethodInfo *)0x0);
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_InitializeCommon
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_spawnWorldObjectID);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
     (((TypeInfo__MVVehicleBase->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment &&
      ((MVVehicleBase__Class *)
       (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] ==
       TypeInfo__MVVehicleBase)))) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      pGVar3 = (pPVar2->fields).particleCFX_GroundAura;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      VVar4 = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pGVar3 = (GameObject *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                          ((Object *)pGVar3,VVar4,rotation,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                          );
      (this->fields).groundAura = pGVar3;
      func_?(&(this->fields).groundAura);
      pGVar3 = (this->fields).groundAura;
      if (pGVar3 != (GameObject *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._._._._.gameObject;
        if (pGVar3 != (GameObject *)0x0) {
          value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar5,value,(MethodInfo *)0x0);
            pGVar3 = (this->fields).groundAura;
            if (pGVar3 != (GameObject *)0x0) {
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar7 = (pVVar6->zeroVector).x;
              uVar8 = (pVVar6->zeroVector).y;
              fVar9 = (pVVar6->zeroVector).z;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar10 = (pVVar6->upVector).x;
              uVar11 = (pVVar6->upVector).y;
              fVar12 = (pVVar6->upVector).z;
              if (pMVar1 != (MVWorldObjectClient *)0x0) {
                iVar13 = (*(code *)(pMVar1->klass->vtable).GetLocalBounds.method)
                                   (&stack0xffffffa8,pMVar1,1);
                uStack_14 = (uint)*(undefined8 *)(iVar13 + 0x10);
                fVar15 = (float)(uStack_14 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                );
                if (pTVar5 != (Transform *)0x0) {
                  VVar4.y = (float)uVar8 + (float)uVar11 * fVar15 * _UNK_?;
                  VVar4.x = (float)uVar7 + (float)uVar10 * fVar15 * _UNK_?;
                  VVar4.z = fVar9 + fVar12 * fVar15 * _UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar5,VVar4,(MethodInfo *)0x0);
                  pGVar3 = (this->fields).groundAura;
                  if (pGVar3 != (GameObject *)0x0) {
                    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if (pTVar5 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                (pTVar5,TypeInfo__UnityEngine__Quaternion->static_fields->
                                         identityQuaternion,(MethodInfo *)0x0);
                      iVar16 = (*(code *)(pMVar1->klass->vtable).get_DocumentationType.method)
                                         (pMVar1);
                      (this->fields)._.documentationType = iVar16;
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
  else {
    func_?(pMVar1);
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
     MVWorldObjectSpawnerVehicle_InitializeInventory
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_spawnWorldObjectID);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      (in_stack_2,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
     (((TypeInfo__MVVehicleBase->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment &&
      ((MVVehicleBase__Class *)
       (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] ==
       TypeInfo__MVVehicleBase)))) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      pGVar4 = (pPVar3->fields).particleCFX_GroundAura;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar6 = (pVVar5->zeroVector).x;
      uVar7 = (pVVar5->zeroVector).y;
      fVar8 = (pVVar5->zeroVector).z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      position.y = (float)uVar7;
      position.x = (float)uVar6;
      position.z = fVar8;
      pLVar9 = (List_1_MV_WorldObject_ObjectLink_ *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                          ((Object *)pGVar4,position,rotation,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                          );
      in_stack_2[1].fields._._._.objectLinkRefs = pLVar9;
      func_?(&in_stack_2[1].fields._._._.objectLinkRefs);
      pLVar9 = in_stack_2[1].fields._._._.objectLinkRefs;
      if (pLVar9 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)pLVar9,(MethodInfo *)0x0);
        pGVar4 = (in_stack_2->fields)._._.gameObject;
        if (pGVar4 != (GameObject *)0x0) {
          value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar4,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar10,value_00,(MethodInfo *)0x0);
            pLVar9 = in_stack_2[1].fields._._._.objectLinkRefs;
            if (pLVar9 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform((GameObject *)pLVar9,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar11 = (pVVar5->zeroVector).x;
              uVar12 = (pVVar5->zeroVector).y;
              fVar8 = (pVVar5->zeroVector).z;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar13 = (pVVar5->upVector).x;
              fVar14 = (pVVar5->upVector).y;
              fVar15 = (pVVar5->upVector).z;
              if (pMVar1 != (MVWorldObjectClient *)0x0) {
                iVar16 = (*(code *)(pMVar1->klass->vtable).GetLocalBounds.method)
                                   (&stack0xffffffb0,pMVar1,1);
                uStack_17 = (uint)*(undefined8 *)(iVar16 + 0x10);
                fVar18 = (float)(uStack_17 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                );
                if (pTVar10 != (Transform *)0x0) {
                  value.y = (float)uVar12 + fVar14 * fVar18 * _UNK_?;
                  value.x = (float)uVar11 + (float)uVar13 * fVar18 * _UNK_?;
                  value.z = fVar8 + fVar15 * fVar18 * _UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar10,value,(MethodInfo *)0x0);
                  pLVar9 = in_stack_2[1].fields._._._.objectLinkRefs;
                  if (pLVar9 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
                    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform((GameObject *)pLVar9,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if (pTVar10 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                (pTVar10,TypeInfo__UnityEngine__Quaternion->static_fields->
                                         identityQuaternion,(MethodInfo *)0x0);
                      pMVar19 = (MVBlueprintBase__Class *)
                                (*(code *)(pMVar1->klass->vtable).get_DocumentationType.method)
                                          (pMVar1);
                      in_stack_2[1].klass = pMVar19;
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
  else {
    func_?(pMVar1);
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_OnDataUpdate
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  SVar1 = MVWorldObjectSpawner::MVWorldObjectSpawner_ReadRespawnStateConfiguration
                    ((MVWorldObjectSpawner *)this,(MethodInfo *)0x0);
  pSVar2 = (this->fields)._.spawnStateWrapper;
  if (pSVar2 != (SpawnStateWrapper *)0x0) {
    (pSVar2->fields).respawnInterval = SVar1.respawnInterval;
    (pSVar2->fields).respawnCount = SVar1.respawnCount;
    (pSVar2->fields).takenCounter = 0;
    this_00 = (this->fields)._.useInteractor;
    if (this_00 != (UseInteractor *)0x0) {
      UseInteractor::UseInteractor_UpdateData
                (this_00,(this->fields)._._._._._.data,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_SpawnState_is_none);
    cRam_? = '\x01';
  }
  if (spawnState == SpawnState__Enum_None) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_SpawnState_is_none,(MethodInfo *)0x0);
    return;
  }
  if (spawnState == SpawnState__Enum_Listening) {
    pGVar1 = (this->fields).pickupItemObjectScript;
    if (pGVar1 != (GreyOutObjectScript *)0x0) {
      GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar1,(MethodInfo *)0x0);
      if ((this->fields).groundAura != (GameObject *)0x0) {
        spawnState = SpawnState__Enum_Listening;
        goto UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive;
      }
    }
  }
  else {
    if (spawnState != SpawnState__Enum_Taken) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      bVar2 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pGVar1 = (this->fields).pickupItemObjectScript;
        if (pGVar1 == (GreyOutObjectScript *)0x0) goto code_?;
        GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar1,(MethodInfo *)0x0);
      }
      if ((this->fields).groundAura != (GameObject *)0x0) {
        spawnState = SpawnState__Enum_None;
UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive:
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?(&UNK_?);
        }
        (*pcRam_?)(spawnState,0);
        return;
      }
    }
  }
code_?:
  func_?();
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
      pGVar2 = (this->fields).groundAura;
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


/* Void SetupCulling() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_SetupCulling
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&
                    MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
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
             MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
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
              (this_01,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    this_02 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar7;
    position.x = (float)uVar6;
    position.z = fVar5;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,2.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    pCRam00000108 = this_02;
    func_?();
    if (pCRam00000108 != (CullingSubscriberBase *)0x0) {
      (pCRam00000108->fields)._DistanceBandIndex_k__BackingField = 2;
      return;
    }
  }
  else {
    pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar1 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (this->fields)._._._._.PositionChanged = pUVar1;
      iVar8 = func_?();
      if (iVar8 != 0) goto code_?;
    }
    func_?();
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    MVWorldObjectClient::MVWorldObjectClient_SetupTierInventory
              ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_Use
               (MVWorldObjectSpawnerVehicle *this,int32_t userWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_SpawnWorldObject_is_null);
    func_?(&StringLiteral_No_vehicleSeatManager);
    func_?(&StringLiteral_No_driver_seat);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.spawnStateWrapper;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    if ((pSVar1->fields)._SpawnState_k__BackingField == 2) {
      return 0;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObject *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_SpawnWorldObject_is_null,(MethodInfo *)0x0);
        return 0;
      }
      this_00 = pMVar2[1].fields.inputLinkRefs;
      if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
        this_03 = (VehicleSeatManager *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            ((GameObject *)this_00,
                             VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                            );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          userWoID = (int32_t)TypeInfo__UnityEngine__Object;
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_No_vehicleSeatManager,(MethodInfo *)0x0);
          return 0;
        }
        if (this_03 != (VehicleSeatManager *)0x0) {
          seatBase = VehicleSeatManager::VehicleSeatManager_get_DriverSeat
                               (this_03,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)seatBase,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_No_driver_seat,(MethodInfo *)0x0);
            return 0;
          }
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (this_01 = (pMVar4->fields)._PlayerController_k__BackingField,
             this_01 != (MVLocalObjectController *)0x0)) {
            bVar3 = MVLocalObjectController::MVLocalObjectController_SpawnVehicleWithDriver
                              (this_01,(this->fields)._._._._._.id,userWoID,seatBase,
                               (MethodInfo *)0x0);
            return bVar3 != 0;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* MVWorldObjectSpawnerVehicle(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
               (MVWorldObjectSpawnerVehicle *this,Dictionary_2_System_Object_System_Object_ *data,
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
    pSVar2 = (pPVar1->fields).spawnerObject;
    (this->fields)._.spawnWorldObjectID = -1;
    (this->fields)._.predictTakeTime = -1;
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,(ObjectPrefab *)pSVar2,worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._._._.previewLayerMask;
    *piVar3 = *piVar3 | 0x1000;
    pSVar2 = (SpawnerObject *)(this->fields)._._._._.component;
    if (pSVar2 == (SpawnerObject *)0x0) {
      (this->fields).spawnerObject = (SpawnerObject *)0x0;
      func_?();
      return;
    }
    if (((TypeInfo__SpawnerObject->_1).naturalAligment <=
         (((ObjectPrefab__Class *)pSVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy
        [(TypeInfo__SpawnerObject->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__SpawnerObject)) {
      (this->fields).spawnerObject = pSVar2;
      if (((TypeInfo__SpawnerObject->_1).naturalAligment <=
           (((ObjectPrefab__Class *)pSVar2->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy
          [(TypeInfo__SpawnerObject->_1).naturalAligment - 1] ==
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

