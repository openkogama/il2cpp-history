
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_CheckCanUse
               (MVWorldObjectSpawnerVehicle *this,int32_t woId,
               MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  this_00 = (this->fields)._.spawnStateWrapper;
  if (this_00 != (SpawnStateWrapper *)0x0) {
    pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
    if (pIVar1 != (IKogamaSetting *)0x2) {
      if (avatarInteractable == (MVInteractableBase *)0x0) goto code_?;
      cVar2 = (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)
                        (avatarInteractable,9,
                         (avatarInteractable->klass->vtable).__unknown_5.methodPtr);
      if (cVar2 == '\0') {
        cVar2 = (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)
                          (avatarInteractable,7,
                           (avatarInteractable->klass->vtable).__unknown_5.methodPtr);
        if (cVar2 == '\0') {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    pMVar1 = wo->klass;
    bVar2 = (pMVar1->_1).naturalAligment;
    bVar3 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
    if ((bVar2 < bVar3) ||
       ((MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVWorldObjectSpawnerVehicle)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar5 = (MVWorldObjectClient *)0x0;
    if (bVar4) {
      pMVar5 = wo;
    }
    if (pMVar5 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      if ((bVar2 < bVar3) ||
         ((MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      this_00 = (MVBlueprintBase *)0x0;
      if (bVar4) {
        this_00 = (MVBlueprintBase *)wo;
      }
      pMVar6 = TypeInfo__MVWorldObjectSpawnerVehicle;
      if (this_00 != (MVBlueprintBase *)0x0) {
        pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                  *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0)
        ;
        if (pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                       *)0x0) {
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (pDVar7,StringLiteral_gameCoinAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar8 != 0) {
            return 0;
          }
          pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                    *)PrefabPool::PrefabPool_get_MVBatteryPrefab
                                ((PrefabPool *)this,(MethodInfo *)0x0);
          if (pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                         *)0x0) {
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                    WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                    KogamaSettingWrapperBase]::
                    Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                              (pDVar7,StringLiteral_starAmount,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar8 != 0) {
              return 0;
            }
            pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)PrefabPool::PrefabPool_get_MVBatteryPrefab
                                  ((PrefabPool *)this,(MethodInfo *)0x0);
            if (pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                           *)0x0) {
              bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                      WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                      KogamaSettingWrapperBase]::
                      Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                (pDVar7,StringLiteral_levelAmount,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar8 != 0) {
                return 0;
              }
              pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)PrefabPool::PrefabPool_get_MVBatteryPrefab
                                    ((PrefabPool *)this,(MethodInfo *)0x0);
              if (pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                             *)0x0) {
                bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                        WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                        KogamaSettingWrapperBase]::
                        Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                  (pDVar7,StringLiteral_RequiredRank,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                  );
                if (bVar8 != 0) {
                  return 0;
                }
                pMVar5 = MVBlueprintBase::MVBlueprintBase_GetChild
                                   (this_00,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
                if (pMVar5 == (MVWorldObjectClient *)0x0) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                            ((Object *)StringLiteral_Did_not_find_other_spawnWorldObj,
                             (MethodInfo *)0x0);
                  return 0;
                }
                pMVar5 = MVBlueprintBase::MVBlueprintBase_GetChild
                                   ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,
                                    (MethodInfo *)0x0);
                if (pMVar5 != (MVWorldObjectClient *)0x0) {
                  bVar8 = (*(code *)(pMVar5->klass->vtable).CompareWithKoGaMaPackage.method)();
                  return bVar8;
                }
              }
            }
          }
        }
        func_?();
        wo = extraout_EDX;
        pMVar6 = (MVWorldObjectSpawnerVehicle__Class *)this;
      }
      func_?(wo,pMVar6);
      pcVar9 = (code *)swi(3);
      bVar8 = (*pcVar9)();
      return bVar8;
    }
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Not_a_vehicle_spawner,(MethodInfo *)0x0);
  return 0;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_Destroy
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if ((this->fields).initFlag != 0) {
    this_00 = (this->fields)._.useInteractor;
    data = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_00 == (UseInteractor *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UseInteractor::UseInteractor_OnDestroy(this_00,data,(MethodInfo *)0x0);
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_01 = (this->fields)._.spawnStateWrapper;
  if (this_01 != (SpawnStateWrapper *)0x0) {
    SpawnStateWrapper::SpawnStateWrapper_Destroy(this_01,(MethodInfo *)0x0);
  }
  this_02 = (this->fields).cullingSubscriberBase;
  if (this_02 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_02,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
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
    func_?(_UNK_?);
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
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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
  func_?(0);
  pcVar11 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar11)();
  return pVVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_Initialize
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Could_not_get_spawnPoint_child_s,(MethodInfo *)0x0);
    return;
  }
  MVWorldObjectSpawner::MVWorldObjectSpawner_Initialize
            ((MVWorldObjectSpawner *)this,(MethodInfo *)0x0);
  pMVar1 = MVGroup::MVGroup_GetChild
                      ((MVGroup *)this,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVVehicleBase)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVWorldObjectClient *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
  }
  if (((this->fields).spawnerObject != (SpawnerObject *)0x0) &&
     (pTVar5 = (this->fields)._.triggerBoxEvents, pTVar5 != (TriggerBoxEvents *)0x0)) {
    triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar5,(MethodInfo *)0x0);
    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar6,(Object *)this,(this->klass->vtable).OnStateChanged.methodPtr,
               MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
    owner = TypeInfo__System__Func<int,_MVInteractableBase,_bool>;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,(this->klass->vtable).Use.methodPtr,
               MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Func_System__Object__void__)
    ;
    this_01 = (MVVehicleBase *)func_?();
    this_09 = this_01;
    UseInteractor::UseInteractor__ctor
              ((UseInteractor *)this_01,(MVWorldObjectClient *)this,(GameObject *)owner,1,
               triggerCollider,(Func_2_Int32_Boolean_ *)pUVar6,
               (Func_3_Int32_MVInteractableBase_Boolean_ *)this_00,3.5,(MethodInfo *)0x0);
    pTVar5 = (this->fields)._.triggerBoxEvents;
    (this->fields)._.useInteractor = (UseInteractor *)this_01;
    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar6,(Object *)this_01,
               MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,
               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
              );
    if (pTVar5 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
                (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
      pTVar5 = (this->fields)._.triggerBoxEvents;
      pUVar7 = (this->fields)._.useInteractor;
      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar6,(Object *)pUVar7,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar5 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
                  (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
        MVWorldObjectSpawnerVehicle_InitializeCommon(this,(MethodInfo *)0x0);
        pSVar8 = (this->fields).spawnerObject;
        if (pSVar8 != (SpawnerObject *)0x0) {
          pGVar9 = (pSVar8->fields).UseInteractorRotator;
          this_02 = (GameCoinLogic *)func_?();
          GameCoinLogic::GameCoinLogic__ctor(this_02,pGVar9,1,(MethodInfo *)0x0);
          pUVar7 = (this->fields)._.useInteractor;
          if (pUVar7 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor_AddRequirement
                      (pUVar7,(UseRequirement *)this_02,(MethodInfo *)0x0);
            pSVar8 = (this->fields).spawnerObject;
            if (pSVar8 != (SpawnerObject *)0x0) {
              pGVar9 = (pSVar8->fields).UseInteractorRotator;
              this_03 = (LevelBasedUseRequirement *)func_?();
              LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                        (this_03,pGVar9,1,(MethodInfo *)0x0);
              pUVar7 = (this->fields)._.useInteractor;
              if (pUVar7 != (UseInteractor *)0x0) {
                UseInteractor::UseInteractor_AddRequirement
                          (pUVar7,(UseRequirement *)this_03,(MethodInfo *)0x0);
                pSVar8 = (this->fields).spawnerObject;
                if (pSVar8 != (SpawnerObject *)0x0) {
                  pGVar9 = (pSVar8->fields).UseInteractorRotator;
                  this_04 = (GameRankRequirement *)func_?();
                  GameRankRequirement::GameRankRequirement__ctor
                            (this_04,pGVar9,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
                  pUVar7 = (this->fields)._.useInteractor;
                  if (pUVar7 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_AddRequirement
                              (pUVar7,(UseRequirement *)this_04,(MethodInfo *)0x0);
                    pUVar7 = (this->fields)._.useInteractor;
                    data = (Dictionary_2_System_Object_System_Object_ *)
                           PrefabPool::PrefabPool_get_MVBatteryPrefab
                                     ((PrefabPool *)this,(MethodInfo *)0x0);
                    if (((pUVar7 != (UseInteractor *)0x0) &&
                        (UseInteractor::UseInteractor_UpdateData(pUVar7,data,(MethodInfo *)0x0),
                        this_09 != (MVVehicleBase *)0x0)) &&
                       (this_05 = MVVehicleBase::MVVehicleBase_get_Visualization
                                            (this_09,(MethodInfo *)0x0),
                       this_05 != (VehicleVisualizationBase *)0x0)) {
                      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)this_05,(MethodInfo *)0x0)
                      ;
                      iVar10 = (this->fields)._._._._.interactionFlags;
                      uVar11 = *(uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
                      (this->fields).lodGameObject = pGVar9;
                      IVar12 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                                         ((MVWorldObjectClient *)this_09,(MethodInfo *)0x0);
                      *(uint *)((int)&(this->fields)._._._._.interactionFlags + 4) =
                           extraout_EDX | uVar11;
                      *(InteractionFlags__Enum *)&(this->fields)._._._._.interactionFlags =
                           IVar12 | (InteractionFlags__Enum)iVar10 |
                           (InteractionFlags__Enum_CanUseLevel|
                            InteractionFlags__Enum_CanUseGameCoins|
                           InteractionFlags__Enum_DirectlySelectable);
                      pGVar9 = (this->fields)._._._._.gameObject;
                      if (pGVar9 != (GameObject *)0x0) {
                        pGVar13 = (GreyOutObjectScript *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_85
                                            (pGVar9,
                                             GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                                            );
                        (this->fields).pickupItemObjectScript = pGVar13;
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?();
                        }
                        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                            ((MethodInfo *)0x0);
                        if ((pMVar14 != (MaterialLoader *)0x0) &&
                           (pGVar13 != (GreyOutObjectScript *)0x0)) {
                          (pGVar13->fields).hiddenShader = (pMVar14->fields).pickupItemShader;
                          pGVar13 = (this->fields).pickupItemObjectScript;
                          if (pGVar13 != (GreyOutObjectScript *)0x0) {
                            x = (pGVar13->fields).hiddenShader;
                            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                              func_?();
                            }
                            bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                     Object_1_op_Equality
                                               ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                            if (bVar15 != 0) {
                              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                                   0x2000000) != 0) &&
                                 ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                                func_?();
                              }
                              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                                        ((Object *)StringLiteral_hiddenShader_not_found,
                                         (MethodInfo *)0x0);
                            }
                            pGVar13 = (this->fields).pickupItemObjectScript;
                            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                              func_?();
                            }
                            this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                ((MethodInfo *)0x0);
                            if (((this_06 != (MVWorldObjectClientManager *)0x0) &&
                                (this_07 = (DayNightCycle *)
                                           MVWorldObjectClientManager::
                                           MVWorldObjectClientManager_GetWorldObject
                                                     (this_06,(this->fields)._.spawnWorldObjectID,
                                                      (MethodInfo *)0x0),
                                this_07 != (DayNightCycle *)0x0)) &&
                               (pCVar16 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                                    (this_07,(MethodInfo *)0x0),
                               pGVar13 != (GreyOutObjectScript *)0x0)) {
                              (pGVar13->fields).pickupObject = (GameObject *)pCVar16;
                              pGVar13 = (this->fields).pickupItemObjectScript;
                              if (pGVar13 != (GreyOutObjectScript *)0x0) {
                                GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                                          (pGVar13,(MethodInfo *)0x0);
                                (this->fields).initFlag = 1;
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                pUVar17 = (this->fields)._._._._.PositionChanged;
                                pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                           *)func_?();
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar6,(Object *)this,
                                           MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                           ,
                                           MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                                          );
                                pUVar18 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                           *)mscorlib.dll::System::Delegate::Delegate_Combine
                                                       ((Delegate *)pUVar17,(Delegate *)pUVar6,
                                                        (MethodInfo *)0x0);
                                pUVar17 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                           *)0x0;
                                if (pUVar18 !=
                                    (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                                    0x0) {
                                  if (pUVar18->klass ==
                                      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                     ) {
                                    pUVar17 = pUVar18;
                                  }
                                  if (pUVar17 ==
                                      (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *
                                      )0x0) {
                                    func_?();
                                    goto code_?;
                                  }
                                }
                                (this->fields)._._._._.PositionChanged = pUVar17;
                                puVar19 = (undefined8 *)
                                          (*(code *)(this->klass->vtable).get_WorldPosition_1.method
                                          )();
                                uVar20 = (undefined4)*puVar19;
                                fVar21 = *(float *)(puVar19 + 1);
                                pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                           *)func_?();
                                uVar22 = CONCAT44(&UNK_?,uVar20);
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar6,(Object *)this,this->klass[1]._0.image,
                                           MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                                          );
                                this_08 = (CullingSubscriberBase *)func_?();
                                position.z = fVar21;
                                position.x = (float)(int)uVar22;
                                position.y = (float)(int)((ulonglong)uVar22 >> 0x20);
                                CullingSubscriberBase::CullingSubscriberBase__ctor_2
                                          (this_08,2.5,position,
                                           (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar6,
                                           (MethodInfo *)0x0);
                                (this->fields).cullingSubscriberBase = this_08;
                                if (this_08 != (CullingSubscriberBase *)0x0) {
                                  LockCursorManager3DMode::
                                  LockCursorManager3DMode_set_OnCursorLockChanged
                                            ((LockCursorManager3DMode *)this_08,
                                             (Action_1_Boolean_ *)0x2,(MethodInfo *)0x0);
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
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_InitializeCommon
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    pMVar2 = (MVWorldObjectClient *)0x0;
  }
  else {
    bVar3 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVVehicleBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar2 = (MVWorldObjectClient *)0x0;
    if (bVar4) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      func_?(pMVar1);
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pSVar5 = (SentryGunBeam *)
              PrefabPool::PrefabPool_get_ParticleCFX_GroundAura(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
    uVar7 = pVVar6->x;
    uVar8 = pVVar6->y;
    fVar9 = pVVar6->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                        ((Quaternion *)&stack0xffffffc0,(MethodInfo *)0x0);
    fVar11 = pQVar10->x;
    fVar12 = pQVar10->y;
    fVar13 = pQVar10->z;
    fVar14 = pQVar10->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    position.y = (float)uVar8;
    position.x = (float)uVar7;
    position.z = fVar9;
    rotation.y = fVar12;
    rotation.x = fVar11;
    rotation.z = fVar13;
    rotation.w = fVar14;
    pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                        (pSVar5,position,rotation,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                        );
    (this->fields).groundAura = (GameObject *)pSVar5;
    if (pSVar5 != (SentryGunBeam *)0x0) {
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)pSVar5,(MethodInfo *)0x0);
      pGVar16 = (this->fields)._._._._.gameObject;
      if (pGVar16 != (GameObject *)0x0) {
        value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar16,(MethodInfo *)0x0);
        if (pTVar15 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar15,value,(MethodInfo *)0x0);
          pGVar16 = (this->fields).groundAura;
          if (pGVar16 != (GameObject *)0x0) {
            pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar16,(MethodInfo *)0x0);
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
            uVar17._0_4_ = pVVar6->x;
            uVar17._4_4_ = pVVar6->y;
            pVVar6 = (Vector3 *)&stack0xffffffd0;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                (pVVar6,(MethodInfo *)0x0);
            uVar19 = pVVar18->x;
            uVar20 = pVVar18->y;
            fVar9 = pVVar18->z;
            if (pMVar2 != (MVWorldObjectClient *)0x0) {
              pMStack21 = (MVWorldObjectClient *)0x1;
              (*(code *)(pMVar2->klass->vtable).GetLocalBounds.method)();
              pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                  ((Vector3 *)&stack0xffffffc4,
                                   (InputToPlayerMovementAndroid *)&stack0xffffffa0,
                                   (MethodInfo *)0x0);
              uVar22 = pVVar18->y;
              a.y = (float)uVar20;
              a.x = (float)uVar19;
              a.z = fVar9;
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                  ((Vector3 *)&stack0xffffffc4,a,(float)(uVar22 ^ _UNK_?),
                                   (MethodInfo *)0x0);
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                  ((Vector3 *)&stack0xffffffc4,*pVVar18,0.9,(MethodInfo *)0x0);
              a_00.z = (float)pVVar6;
              a_00.x = (float)(int)uVar17;
              a_00.y = (float)(int)((ulonglong)uVar17 >> 0x20);
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  ((Vector3 *)&stack0xffffffc4,a_00,*pVVar18,(MethodInfo *)0x0);
              if (pTVar15 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar15,*pVVar6,(MethodInfo *)0x0);
                pGVar16 = (this->fields).groundAura;
                if (pGVar16 != (GameObject *)0x0) {
                  pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar16,(MethodInfo *)0x0);
                  pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_identity
                                      ((Quaternion *)&stack0xffffffc0,(MethodInfo *)0x0);
                  if (pTVar15 != (Transform *)0x0) {
                    pMStack21 = (MVWorldObjectClient *)pQVar10->w;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar15,*pQVar10,(MethodInfo *)0x0);
                    pMStack21 = pMVar2;
                    iVar23 = (*(code *)(pMVar2->klass->vtable).get_DocumentationType.method)();
                    (this->fields)._.documentationType = iVar23;
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
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
     MVWorldObjectSpawnerVehicle_InitializeInventory
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                      (in_stack_2,StringLiteral_spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    pMVar3 = (MVWorldObjectClient *)0x0;
  }
  else {
    bVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar4) ||
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVVehicleBase)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar3 = (MVWorldObjectClient *)0x0;
    if (bVar5) {
      pMVar3 = pMVar1;
    }
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
      func_?(pMVar1);
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    pSVar6 = (SentryGunBeam *)
              PrefabPool::PrefabPool_get_ParticleCFX_GroundAura(this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    fVar10 = pVVar7->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                        ((Quaternion *)&stack0xffffffc8,(MethodInfo *)0x0);
    fVar12 = pQVar11->x;
    fVar13 = pQVar11->y;
    fVar14 = pQVar11->z;
    fVar15 = pQVar11->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    position.y = (float)uVar9;
    position.x = (float)uVar8;
    position.z = fVar10;
    rotation.y = fVar13;
    rotation.x = fVar12;
    rotation.z = fVar14;
    rotation.w = fVar15;
    pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                        (pSVar6,position,rotation,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                        );
    in_stack_2[1].fields._._._.objectLinkRefs = (List_1_MV_WorldObject_ObjectLink_ *)pSVar6;
    if (pSVar6 != (SentryGunBeam *)0x0) {
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)pSVar6,(MethodInfo *)0x0);
      this_00 = (in_stack_2->fields)._._.gameObject;
      if (this_00 != (GameObject *)0x0) {
        value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
        if (pTVar16 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar16,value,(MethodInfo *)0x0);
          pLVar17 = in_stack_2[1].fields._._._.objectLinkRefs;
          if (pLVar17 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                ((GameObject *)pLVar17,(MethodInfo *)0x0);
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
            uVar18._0_4_ = pVVar7->x;
            uVar18._4_4_ = pVVar7->y;
            pVVar7 = (Vector3 *)&stack0xffffffd8;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                (pVVar7,(MethodInfo *)0x0);
            uVar20 = pVVar19->x;
            uVar21 = pVVar19->y;
            fVar10 = pVVar19->z;
            if (pMVar3 != (MVWorldObjectClient *)0x0) {
              (*(code *)(pMVar3->klass->vtable).GetLocalBounds.method)();
              pVVar19 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                  ((Vector3 *)&stack0xffffffcc,
                                   (InputToPlayerMovementAndroid *)&stack0xffffffa8,
                                   (MethodInfo *)0x0);
              uVar22 = pVVar19->y;
              a.y = (float)uVar21;
              a.x = (float)uVar20;
              a.z = fVar10;
              pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                  ((Vector3 *)&stack0xffffffcc,a,(float)(uVar22 ^ _UNK_?),
                                   (MethodInfo *)0x0);
              pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                  ((Vector3 *)&stack0xffffffcc,*pVVar19,0.9,(MethodInfo *)0x0);
              a_00.z = (float)pVVar7;
              a_00.x = (float)(int)uVar18;
              a_00.y = (float)(int)((ulonglong)uVar18 >> 0x20);
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  ((Vector3 *)&stack0xffffffcc,a_00,*pVVar19,(MethodInfo *)0x0);
              if (pTVar16 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar16,*pVVar7,(MethodInfo *)0x0);
                pLVar17 = in_stack_2[1].fields._._._.objectLinkRefs;
                if (pLVar17 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
                  pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform((GameObject *)pLVar17,(MethodInfo *)0x0);
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_identity
                                      ((Quaternion *)&stack0xffffffc8,(MethodInfo *)0x0);
                  if (pTVar16 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar16,*pQVar11,(MethodInfo *)0x0);
                    pMVar23 = (MVBlueprintBase__Class *)
                              (*(code *)(pMVar3->klass->vtable).get_DocumentationType.method)();
                    in_stack_2[1].klass = pMVar23;
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
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_OnDataUpdate
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_OnEnterObject
               (MVWorldObjectSpawnerVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    this_00 = (this->fields)._.spawnStateWrapper;
    if (this_00 != (SpawnStateWrapper *)0x0) {
      pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
      if (pIVar2 == (IKogamaSetting *)0x2) {
        this_01 = (this->fields).pickupItemObjectScript;
        if (this_01 == (GreyOutObjectScript *)0x0) goto code_?;
        GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_01,(MethodInfo *)0x0);
      }
      if (pMVar1 != (MVWorldObject *)0x0) {
        pMStack3 = pMVar1->klass[1].vtable.set_Rotation.method;
        bVar4 = (*pMVar1->klass[1].vtable.set_Rotation.methodPtr)();
        return bVar4;
      }
    }
  }
code_?:
  pMStack3 = (MethodInfo *)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_OnExitObject
               (MVWorldObjectSpawnerVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      bVar2 = (*pMVar1->klass[1].vtable.get_Scale.methodPtr)();
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_OnPositionChanged
               (MVWorldObjectSpawnerVehicle *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (this_00 = (this->fields).cullingSubscriberBase, this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              (this_00,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSpawnStateChange(SpawnState) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::
     MVWorldObjectSpawnerVehicle_OnSpawnStateChange
               (MVWorldObjectSpawnerVehicle *this,SpawnState__Enum spawnState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (spawnState == SpawnState__Enum_None) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_SpawnState_is_none,(MethodInfo *)0x0);
    return;
  }
  if (spawnState == SpawnState__Enum_Listening) {
    pGVar1 = (this->fields).pickupItemObjectScript;
    if (pGVar1 == (GreyOutObjectScript *)0x0) goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar1,(MethodInfo *)0x0);
    pGVar2 = (this->fields).groundAura;
  }
  else {
    if (spawnState != SpawnState__Enum_Taken) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    bVar3 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pGVar1 = (this->fields).pickupItemObjectScript;
      if (pGVar1 == (GreyOutObjectScript *)0x0) goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar1,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields).groundAura;
  }
  if (pGVar2 != (GameObject *)0x0) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)func_?(), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?,0);
      func_?(uVar5);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(0);
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_OnStateChanged
               (MVWorldObjectSpawnerVehicle *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    pGVar1 = (this->fields).lodGameObject;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,value,(MethodInfo *)0x0);
      pGVar1 = (this->fields).groundAura;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_Select
               (MVWorldObjectSpawnerVehicle *this,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      (*pMVar1->klass[1].vtable.OnObjectLinkChanged.methodPtr)(pMVar1,color.r,color.g);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_SetupCulling
               (MVWorldObjectSpawnerVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._._._.PositionChanged;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
            );
  pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    if (pUVar3->klass ==
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      func_?();
      goto code_?;
    }
  }
  (this->fields)._._._._.PositionChanged = pUVar1;
  puVar4 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
  fVar5 = *(float *)(puVar4 + 1);
  uVar6 = (undefined4)*puVar4;
  uVar7 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,this->klass[1]._0.image,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
            );
  this_00 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  position.y = (float)uVar7;
  position.x = (float)uVar6;
  position.z = fVar5;
  CullingSubscriberBase::CullingSubscriberBase__ctor_2
            (this_00,2.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar2,
             (MethodInfo *)0x0);
  (this->fields).cullingSubscriberBase = this_00;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
              ((LockCursorManager3DMode *)this_00,(Action_1_Boolean_ *)0x2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.spawnStateWrapper;
  if (this_00 != (SpawnStateWrapper *)0x0) {
    pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
    if (pIVar1 == (IKogamaSetting *)0x2) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = (DayNightCycle *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
      if (this_02 == (DayNightCycle *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_SpawnWorldObject_is_null,(MethodInfo *)0x0);
        return 0;
      }
      this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0);
      if (this_03 != (CelestialParam *)0x0) {
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)this_03,
                             VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)this_04,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_No_vehicleSeatManager,(MethodInfo *)0x0);
          return 0;
        }
        if (this_04 != (UseInteractorHandler *)0x0) {
          seatBase = VehicleSeatManager::VehicleSeatManager_get_DriverSeat
                               ((VehicleSeatManager *)this_04,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)seatBase,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_No_driver_seat,(MethodInfo *)0x0);
            return 0;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_05 = (PrefabPool *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_05 != (PrefabPool *)0x0) {
            this_06 = (MVLocalObjectController *)
                      PrefabPool::PrefabPool_get_MVSmokePrefab(this_05,(MethodInfo *)0x0);
            worldObjectSpawnerVehicleID =
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
            if (this_06 != (MVLocalObjectController *)0x0) {
              bVar2 = MVLocalObjectController::MVLocalObjectController_SpawnVehicleWithDriver
                                (this_06,(int32_t)worldObjectSpawnerVehicleID,0xADDR,seatBase,
                                 (MethodInfo *)0x0);
              return bVar2 != 0;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* MVWorldObjectSpawnerVehicle(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
               (MVWorldObjectSpawnerVehicle *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 == (PrefabPool *)0x0) {
    func_?(0);
  }
  else {
    prefabObject = (ObjectPrefab *)
                   MVTextMsg::MVTextMsg_get_InputSignalReceiver
                             ((MVTextMsg *)this_00,(MethodInfo *)0x0);
    (this->fields)._.spawnWorldObjectID = -1;
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    piVar1 = &(this->fields)._._._._.previewLayerMask;
    *piVar1 = *piVar1 | 0x1000;
    pSVar2 = (SpawnerObject *)(this->fields)._._._._.component;
    if (pSVar2 == (SpawnerObject *)0x0) {
      (this->fields).spawnerObject = (SpawnerObject *)0x0;
      return;
    }
    bVar3 = (TypeInfo__SpawnerObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar2->klass)->_1).naturalAligment < bVar3) ||
       ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__SpawnerObject)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pSVar5 = (SpawnerObject *)0x0;
    if (bVar4) {
      pSVar5 = pSVar2;
    }
    if (pSVar5 != (SpawnerObject *)0x0) {
      (this->fields).spawnerObject = pSVar5;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

