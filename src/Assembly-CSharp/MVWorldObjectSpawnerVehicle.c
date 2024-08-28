
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_CheckCanUse
               (MVWorldObjectSpawnerVehicle *this,int32_t woId,
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
  if (wo != (MVWorldObjectClient *)0x0) {
    pMVar1 = wo->klass;
    bVar2 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
       ((MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__MVWorldObjectSpawnerVehicle)) {
      bVar2 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      pMVar3 = TypeInfo__MVWorldObjectSpawnerVehicle;
      if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
         ((MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] ==
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
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
  obj = (this->fields)._.spawnStateWrapper;
  if (obj != (SpawnStateWrapper *)0x0) {
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
  this_01 = (this->fields).cullingSubscriberBase;
  if (this_01 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
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
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Could_not_get_spawnPoint_child_s,(MethodInfo *)0x0);
    return;
  }
  MVWorldObjectSpawner::MVWorldObjectSpawner_Initialize
            ((MVWorldObjectSpawner *)this,(MethodInfo *)0x0);
  key = (this->fields)._.spawnWorldObjectID;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.children;
  pOVar2 = (Object *)0x0;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&stack0xfffffff8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (pOVar2 != (Object *)0x0) {
      bVar3 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      if ((((pOVar2->klass->_1).naturalAligment < bVar3) ||
          ((MVVehicleBase__Class *)(pOVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
           TypeInfo__MVVehicleBase)) || (pOVar2 == (Object *)0x0)) goto code_?;
    }
    if (((this->fields).spawnerObject != (SpawnerObject *)0x0) &&
       (pTVar4 = (this->fields)._.triggerBoxEvents, pTVar4 != (TriggerBoxEvents *)0x0)) {
      this_02 = (MVWorldObjectSpawnerVehicle *)
                TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar4,(MethodInfo *)0x0);
      this_03 = (Predicate_1_UInt32_ *)func_?();
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_03,(Object *)this,(this->klass->vtable).OnStateChanged.methodPtr,
                 (MethodInfo *)0x0);
      owner = TypeInfo__System__Func<int,_MVInteractableBase,_bool>;
      this_04 = (Func_3_Int32_Object_Boolean_ *)func_?();
      mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                (this_04,(Object *)this,(this->klass->vtable).Use.methodPtr,(MethodInfo *)0x0);
      pUVar5 = (UseInteractor *)func_?();
      pUVar6 = pUVar5;
      UseInteractor::UseInteractor__ctor
                (pUVar5,(MVWorldObjectClient *)this_02,(GameObject *)owner,1,(Collider *)this_02,
                 (Func_2_Int32_Boolean_ *)this_03,
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)this_04,3.5,0,(MethodInfo *)0x0);
      ppUVar7 = &(this_02->fields)._.useInteractor;
      *ppUVar7 = pUVar5;
      func_?();
      pTVar4 = (this_02->fields)._.triggerBoxEvents;
      pUVar5 = *ppUVar7;
      pEVar8 = (EventHandler_1_Object_ *)func_?();
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar8,(Object *)pUVar5,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar4 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
                  (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pEVar8,(MethodInfo *)0x0);
        pTVar4 = (this_02->fields)._.triggerBoxEvents;
        pUVar5 = *ppUVar7;
        pEVar8 = (EventHandler_1_Object_ *)func_?();
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar8,(Object *)pUVar5,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar4 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
                    (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pEVar8,(MethodInfo *)0x0);
          MVWorldObjectSpawnerVehicle_InitializeCommon(this_02,(MethodInfo *)0x0);
          pSVar9 = (this_02->fields).spawnerObject;
          if (pSVar9 != (SpawnerObject *)0x0) {
            pGVar10 = (pSVar9->fields).UseInteractorRotator;
            this_05 = (GameCoinLogic *)func_?();
            GameCoinLogic::GameCoinLogic__ctor(this_05,pGVar10,1,(MethodInfo *)0x0);
            if (*ppUVar7 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        (*ppUVar7,(UseRequirement *)this_05,(MethodInfo *)0x0);
              pSVar9 = (this_02->fields).spawnerObject;
              if (pSVar9 != (SpawnerObject *)0x0) {
                pGVar10 = (pSVar9->fields).UseInteractorRotator;
                this_06 = (LevelBasedUseRequirement *)func_?();
                LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                          (this_06,pGVar10,1,(MethodInfo *)0x0);
                if (*ppUVar7 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (*ppUVar7,(UseRequirement *)this_06,(MethodInfo *)0x0);
                  pSVar9 = (this_02->fields).spawnerObject;
                  if (pSVar9 != (SpawnerObject *)0x0) {
                    pGVar10 = (pSVar9->fields).UseInteractorRotator;
                    this_07 = (GameRankRequirement *)func_?();
                    GameRankRequirement::GameRankRequirement__ctor
                              (this_07,pGVar10,(MVWorldObjectClient *)this_02,0,(MethodInfo *)0x0);
                    if (*ppUVar7 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (*ppUVar7,(UseRequirement *)this_07,(MethodInfo *)0x0);
                      pSVar9 = (this_02->fields).spawnerObject;
                      if (pSVar9 != (SpawnerObject *)0x0) {
                        pGVar10 = (pSVar9->fields).UseInteractorRotator;
                        this_08 = (RewardedAdRequirement *)func_?();
                        WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                        RewardedAdRequirement__ctor(this_08,pGVar10,(MethodInfo *)0x0);
                        if (*ppUVar7 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (*ppUVar7,(UseRequirement *)this_08,(MethodInfo *)0x0);
                          if (((*ppUVar7 != (UseInteractor *)0x0) &&
                              (UseInteractor::UseInteractor_UpdateData
                                         (*ppUVar7,(this_02->fields)._._._._._.data,
                                          (MethodInfo *)0x0), pUVar6 != (UseInteractor *)0x0)) &&
                             (this_01 = pUVar6[7].fields.useFunction,
                             this_01 != (Func_2_Int32_Boolean_ *)0x0)) {
                            pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)this_01,(MethodInfo *)0x0);
                            (this_02->fields).lodGameObject = pGVar10;
                            func_?();
                            piVar11 = &(this_02->fields)._._._._.interactionFlags;
                            *(uint *)piVar11 = (uint)*piVar11 | (uint)pUVar6[5].monitor;
                            puVar12 = (uint *)((int)&(this_02->fields)._._._._.interactionFlags + 4);
                            *puVar12 = *puVar12 | (uint)pUVar6[5].fields.useFunction;
                            piVar11 = &(this_02->fields)._._._._.interactionFlags;
                            *(uint *)piVar11 = (uint)*piVar11 | 8;
                            piVar11 = &(this_02->fields)._._._._.interactionFlags;
                            *(uint *)piVar11 = (uint)*piVar11 | 0x200000;
                            uVar13 = *(undefined4 *)
                                     ((int)&(this_02->fields)._._._._.interactionFlags + 4);
                            piVar11 = &(this_02->fields)._._._._.interactionFlags;
                            *(uint *)piVar11 = (uint)*piVar11 | 0x100000;
                            *(undefined4 *)((int)&(this_02->fields)._._._._.interactionFlags + 4) =
                                 uVar13;
                            iVar14 = (this_02->fields)._._._._.interactionFlags;
                            puVar12 = (uint *)((int)&(this_02->fields)._._._._.interactionFlags + 4);
                            *puVar12 = *puVar12 | 2;
                            *(int *)&(this_02->fields)._._._._.interactionFlags = (int)iVar14;
                            pGVar10 = (this_02->fields)._._._._.gameObject;
                            if (pGVar10 != (GameObject *)0x0) {
                              pGVar15 = (GreyOutObjectScript *)
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_AddComponent_1
                                                  (pGVar10,
                                                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                                                  );
                              ppGVar16 = &(this_02->fields).pickupItemObjectScript;
                              *ppGVar16 = pGVar15;
                              func_?();
                              pGVar15 = *ppGVar16;
                              this_09 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                  ((MethodInfo *)0x0);
                              if (((this_09 != (MVWorldObjectClientManager *)0x0) &&
                                  (pMVar17 = MVWorldObjectClientManager::
                                             MVWorldObjectClientManager_GetWorldObject
                                                       (this_09,(this_02->fields)._.
                                                                spawnWorldObjectID,(MethodInfo *)0x0
                                                       ), pMVar17 != (MVWorldObject *)0x0)) &&
                                 (pGVar15 != (GreyOutObjectScript *)0x0)) {
                                GreyOutObjectScript::GreyOutObjectScript_SetPickupObject
                                          (pGVar15,(GameObject *)pMVar17[1].fields.inputLinkRefs,
                                           (MethodInfo *)0x0);
                                (this_02->fields).initFlag = 1;
                                if (cRam_? == '\0') {
                                  func_?();
                                  func_?();
                                  func_?();
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                pUVar18 = (this_02->fields)._._._._.PositionChanged;
                                this_10 = (UnityAction_2_System_Object_System_Object_ *)
                                          func_?();
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[System::Object,System::Object]::
                                UnityAction_2_System_Object_System_Object___ctor
                                          (this_10,(Object *)this_02,
                                           MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                           ,(MethodInfo *)0x0);
                                pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                    ((Delegate *)pUVar18,(Delegate *)this_10,
                                                     (MethodInfo *)0x0);
                                if (pDVar19 == (Delegate *)0x0) {
                                  (this_02->fields)._._._._.PositionChanged =
                                       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                        *)0x0;
code_?:
                                  object = &(this_02->fields)._._._._.PositionChanged;
                                  func_?();
                                  iVar20 = (*(code *)(this_02->klass->vtable).get_WorldPosition_1.
                                                     method)();
                                  fVar21 = *(float *)(iVar20 + 8);
                                  this_11 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`1[UnityEngine::Vector2]::
                                  UnityAction_1_UnityEngine_Vector2___ctor
                                            (this_11,(Object *)object,
                                             *(MethodInfo_1 **)((int)(*object + 0xe) + 4),
                                             (MethodInfo *)0x0);
                                  uVar22 = CONCAT44(&UNK_?,object);
                                  this_12 = (CullingSubscriberBase *)func_?();
                                  position.z = fVar21;
                                  position.x = (float)(int)uVar22;
                                  position.y = (float)(int)((ulonglong)uVar22 >> 0x20);
                                  CullingSubscriberBase::CullingSubscriberBase__ctor_2
                                            (this_12,2.5,position,
                                             (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_11
                                             ,(MethodInfo *)0x0);
                                  pCRam40200108 = this_12;
                                  func_?();
                                  if (pCRam40200108 != (CullingSubscriberBase *)0x0) {
                                    (pCRam40200108->fields)._DistanceBandIndex_k__BackingField = 2;
                                    return;
                                  }
                                }
                                else {
                                  pUVar18 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                             *)func_?();
                                  if (pUVar18 !=
                                      (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *
                                      )0x0) {
                                    (this_02->fields)._._._._.PositionChanged = pUVar18;
                                    iVar20 = func_?();
                                    if (iVar20 != 0) goto code_?;
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
            }
          }
        }
      }
    }
  }
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
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    pMVar1 = (MVWorldObjectClient *)0x0;
  }
  else {
    bVar2 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVVehicleBase)) {
      func_?(pMVar1);
      goto code_?;
    }
  }
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
    VVar5 = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pGVar4 = (GameObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                        ((Object *)pGVar4,VVar5,rotation,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                        );
    ppGVar6 = &(this->fields).groundAura;
    *ppGVar6 = pGVar4;
    func_?(ppGVar6);
    if (*ppGVar6 != (GameObject *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (*ppGVar6,(MethodInfo *)0x0);
      pGVar4 = (this->fields)._._._._.gameObject;
      if ((pGVar4 != (GameObject *)0x0) &&
         (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar4,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar7,value,(MethodInfo *)0x0);
        if (*ppGVar6 != (GameObject *)0x0) {
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (*ppGVar6,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar9 = (pVVar8->zeroVector).x;
          uVar10 = (pVVar8->zeroVector).y;
          fVar11 = (pVVar8->zeroVector).z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar12 = (pVVar8->upVector).x;
          uVar13 = (pVVar8->upVector).y;
          fVar14 = (pVVar8->upVector).z;
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            iVar15 = (*(code *)(pMVar1->klass->vtable).GetLocalBounds.method)
                               (&stack0xffffffa8,pMVar1,1);
            uStack_16 = (uint)*(undefined8 *)(iVar15 + 0x10);
            fVar17 = (float)(uStack_16 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
            if (pTVar7 != (Transform *)0x0) {
              VVar5.y = (float)uVar10 + (float)uVar13 * fVar17 * _UNK_?;
              VVar5.x = (float)uVar9 + (float)uVar12 * fVar17 * _UNK_?;
              VVar5.z = fVar11 + fVar14 * fVar17 * _UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar7,VVar5,(MethodInfo *)0x0);
              if (*ppGVar6 != (GameObject *)0x0) {
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(*ppGVar6,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pTVar7 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar7,TypeInfo__UnityEngine__Quaternion->static_fields->
                                     identityQuaternion,(MethodInfo *)0x0);
                  iVar18 = (*(code *)(pMVar1->klass->vtable).get_DocumentationType.method)(pMVar1)
                  ;
                  (this->fields)._.documentationType = iVar18;
                  return;
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
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    pMVar1 = (MVWorldObjectClient *)0x0;
  }
  else {
    bVar3 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVVehicleBase)) {
      func_?(pMVar1);
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar4 != (PrefabPool *)0x0) {
    pGVar5 = (pPVar4->fields).particleCFX_GroundAura;
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
    rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    position.y = (float)uVar8;
    position.x = (float)uVar7;
    position.z = fVar9;
    pLVar10 = (List_1_MV_WorldObject_ObjectLink_ *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                        ((Object *)pGVar5,position,rotation,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                        );
    ppLVar11 = &in_stack_2[1].fields._._._.objectLinkRefs;
    *ppLVar11 = pLVar10;
    func_?(ppLVar11);
    if (*ppLVar11 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)*ppLVar11,(MethodInfo *)0x0);
      pGVar5 = (in_stack_2->fields)._._.gameObject;
      if ((pGVar5 != (GameObject *)0x0) &&
         (value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar5,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar12,value_00,(MethodInfo *)0x0);
        if (*ppLVar11 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)*ppLVar11,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar13 = (pVVar6->zeroVector).x;
          uVar14 = (pVVar6->zeroVector).y;
          fVar9 = (pVVar6->zeroVector).z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar15 = (pVVar6->upVector).x;
          fVar16 = (pVVar6->upVector).y;
          fVar17 = (pVVar6->upVector).z;
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            iVar18 = (*(code *)(pMVar1->klass->vtable).GetLocalBounds.method)
                               (&stack0xffffffb0,pMVar1,1);
            uStack_19 = (uint)*(undefined8 *)(iVar18 + 0x10);
            fVar20 = (float)(uStack_19 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
            if (pTVar12 != (Transform *)0x0) {
              value.y = (float)uVar14 + fVar16 * fVar20 * _UNK_?;
              value.x = (float)uVar13 + (float)uVar15 * fVar20 * _UNK_?;
              value.z = fVar9 + fVar17 * fVar20 * _UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar12,value,(MethodInfo *)0x0);
              if (*ppLVar11 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
                pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform((GameObject *)*ppLVar11,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pTVar12 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar12,TypeInfo__UnityEngine__Quaternion->static_fields->
                                     identityQuaternion,(MethodInfo *)0x0);
                  pMVar21 = (MVBlueprintBase__Class *)
                            (*(code *)(pMVar1->klass->vtable).get_DocumentationType.method)
                                      (pMVar1);
                  in_stack_2[1].klass = pMVar21;
                  return;
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  ppUVar1 = &(this->fields)._._._._.PositionChanged;
  pUVar2 = *ppUVar1;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    *ppUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
    func_?();
    pMStack_4 = this;
    puVar5 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)(&pMStack_4);
    fVar6 = *(float *)(puVar5 + 1);
    uVar7 = (undefined4)*puVar5;
    uVar8 = (undefined4)((ulonglong)*puVar5 >> 0x20);
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    this_02 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar8;
    position.x = (float)uVar7;
    position.z = fVar6;
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
    pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      *ppUVar1 = pUVar2;
      iVar9 = func_?();
      if (iVar9 != 0) goto code_?;
    }
    func_?();
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    bVar4 = (TypeInfo__SpawnerObject->_1).naturalAligment;
    if ((bVar4 <= (((ObjectPrefab__Class *)pSVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy[bVar4 - 1] ==
        (Il2CppClass *)TypeInfo__SpawnerObject)) {
      (this->fields).spawnerObject = pSVar2;
      bVar4 = (TypeInfo__SpawnerObject->_1).naturalAligment;
      if ((bVar4 <= (((ObjectPrefab__Class *)pSVar2->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy[bVar4 - 1] ==
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

