
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle_CheckCanUse
               (MVWorldObjectSpawnerVehicle *this,int32_t woId,
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
      (pMVar1->_1).typeHierarchyDepth <
      (TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth)) ||
     ((MVWorldObjectSpawnerVehicle__Class *)
      (pMVar1->_1).typeHierarchy[(TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth - 1]
      != TypeInfo__MVWorldObjectSpawnerVehicle)) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Not_a_vehicle_spawner,(MethodInfo *)0x0);
    return 0;
  }
  pMVar2 = TypeInfo__MVWorldObjectSpawnerVehicle;
  if (((TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth <=
       (pMVar1->_1).typeHierarchyDepth) &&
     ((MVWorldObjectSpawnerVehicle__Class *)
      (pMVar1->_1).typeHierarchy[(TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth - 1]
      == TypeInfo__MVWorldObjectSpawnerVehicle)) {
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
    func_?(&TypeInfo__UnityEngine__Object);
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
  pMVar2 = (MVVehicleBase__Class *)
            MVGroup::MVGroup_GetChild
                      ((MVGroup *)this,(this->fields)._.spawnWorldObjectID,(MethodInfo *)0x0);
  if (pMVar2 == (MVVehicleBase__Class *)0x0) {
    pMVar3 = (MVVehicleBase__Class *)0x0;
  }
  else {
    pIVar4 = (pMVar2->_0).image;
    pMVar5 = TypeInfo__MVVehicleBase;
    if ((*(byte *)&pIVar4[4].nameNoExt < (TypeInfo__MVVehicleBase->_1).typeHierarchyDepth) ||
       (pMVar3 = pMVar2,
       *(MVVehicleBase__Class **)
        ((pIVar4[2].typeCount - 4) + (uint)(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth * 4) !=
       TypeInfo__MVVehicleBase)) goto code_?;
  }
  if (((this->fields).spawnerObject != (SpawnerObject *)0x0) &&
     (pTVar6 = (this->fields)._.triggerBoxEvents, pTVar6 != (TriggerBoxEvents *)0x0)) {
    TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar6,(MethodInfo *)0x0);
    this_01 = (Predicate_1_Int32Enum_ *)func_?(TypeInfo__System__Func<int,_bool>);
    if (this_01 != (Predicate_1_Int32Enum_ *)0x0) {
      mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                (this_01,(Object *)this,(this->klass->vtable).Use.method,(MethodInfo *)0x0);
      this_02 = (Func_3_Int32_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      if (this_02 != (Func_3_Int32_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                  (this_02,(Object *)this,(this->klass->vtable).CheckCanUse.method,(MethodInfo *)0x0
                  );
        pUVar7 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
        if (pUVar7 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor__ctor
                    (pUVar7,(MVWorldObjectClient *)this,(GameObject *)0x40600000,1,(Collider *)0x0,
                     (Func_2_Int32_Boolean_ *)0x40600000,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,3.5,0,(MethodInfo *)0x0);
          (this->fields)._.useInteractor = pUVar7;
          func_?(&(this->fields)._.useInteractor,pUVar7);
          pTVar6 = (TriggerBoxEvents *)&UNK_?;
          pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          if ((pUVar8 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar8,(Object *)0x0,
                         MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0), pTVar6 != (TriggerBoxEvents *)0x0)) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
                      (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
            pTVar6 = (this->fields)._.triggerBoxEvents;
            pUVar7 = (this->fields)._.useInteractor;
            pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            if ((pUVar8 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
               (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar8,(Object *)pUVar7,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0), pTVar6 != (TriggerBoxEvents *)0x0)) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
                        (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
              MVWorldObjectSpawnerVehicle_InitializeCommon(this,(MethodInfo *)0x0);
              pSVar9 = (this->fields).spawnerObject;
              if (pSVar9 != (SpawnerObject *)0x0) {
                pGVar10 = (pSVar9->fields).UseInteractorRotator;
                this_03 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                if (this_03 != (GameCoinLogic *)0x0) {
                  GameCoinLogic::GameCoinLogic__ctor(this_03,pGVar10,1,(MethodInfo *)0x0);
                  pUVar7 = (this->fields)._.useInteractor;
                  if (pUVar7 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_AddRequirement
                              (pUVar7,(UseRequirement *)this_03,(MethodInfo *)0x0);
                    pSVar9 = (this->fields).spawnerObject;
                    if (pSVar9 != (SpawnerObject *)0x0) {
                      pGVar10 = (pSVar9->fields).UseInteractorRotator;
                      this_04 = (LevelBasedUseRequirement *)
                                func_?(TypeInfo__LevelBasedUseRequirement);
                      if (this_04 != (LevelBasedUseRequirement *)0x0) {
                        LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                                  (this_04,pGVar10,1,(MethodInfo *)0x0);
                        pUVar7 = (this->fields)._.useInteractor;
                        if (pUVar7 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar7,(UseRequirement *)this_04,(MethodInfo *)0x0);
                          pSVar9 = (this->fields).spawnerObject;
                          if (pSVar9 != (SpawnerObject *)0x0) {
                            pGVar10 = (pSVar9->fields).UseInteractorRotator;
                            this_05 = (GameRankRequirement *)
                                      func_?(TypeInfo__GameRankRequirement);
                            if (this_05 != (GameRankRequirement *)0x0) {
                              GameRankRequirement::GameRankRequirement__ctor
                                        (this_05,pGVar10,(MVWorldObjectClient *)this,0,
                                         (MethodInfo *)0x0);
                              pUVar7 = (this->fields)._.useInteractor;
                              if (pUVar7 != (UseInteractor *)0x0) {
                                UseInteractor::UseInteractor_AddRequirement
                                          (pUVar7,(UseRequirement *)this_05,(MethodInfo *)0x0);
                                pSVar9 = (this->fields).spawnerObject;
                                if (pSVar9 != (SpawnerObject *)0x0) {
                                  pGVar10 = (pSVar9->fields).UseInteractorRotator;
                                  this_06 = (RewardedAdRequirement *)
                                            func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                                  );
                                  if (this_06 != (RewardedAdRequirement *)0x0) {
                                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                                    RewardedAdRequirement__ctor(this_06,pGVar10,(MethodInfo *)0x0);
                                    pUVar7 = (this->fields)._.useInteractor;
                                    if (pUVar7 != (UseInteractor *)0x0) {
                                      UseInteractor::UseInteractor_AddRequirement
                                                (pUVar7,(UseRequirement *)this_06,(MethodInfo *)0x0
                                                );
                                      pUVar7 = (this->fields)._.useInteractor;
                                      if (((pUVar7 != (UseInteractor *)0x0) &&
                                          (UseInteractor::UseInteractor_UpdateData
                                                     (pUVar7,(this->fields)._._._._._.data,
                                                      (MethodInfo *)0x0),
                                          pMVar3 != (MVVehicleBase__Class *)0x0)) &&
                                         (this_00 = (Component *)
                                                    (pMVar3->vtable).set_Scale.methodPtr,
                                         this_00 != (Component *)0x0)) {
                                        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_get_gameObject
                                                            (this_00,(MethodInfo *)0x0);
                                        (this->fields).lodGameObject = pGVar10;
                                        func_?(&(this->fields).lodGameObject,pGVar10);
                                        uVar11._0_1_ = (pMVar3->_1).naturalAligment;
                                        uVar11._1_1_ = (pMVar3->_1).packingSize;
                                        uVar11._2_2_ = *(undefined2 *)&(pMVar3->_1).field_0x56;
                                        iVar12 = (this->fields)._._._._.interactionFlags;
                                        *(uint *)((int)&(this->fields)._._._._.interactionFlags + 4)
                                             = (uint)(pMVar3->vtable).Equals.methodPtr |
                                               *(uint *)((int)&(this->fields)._._._._.
                                                               interactionFlags + 4);
                                        puVar13 = (uint *)((int)&(this->fields)._._._._.
                                                                interactionFlags + 4);
                                        *puVar13 = *puVar13 | 2;
                                        *(uint *)&(this->fields)._._._._.interactionFlags =
                                             uVar11 | (uint)iVar12 | 0x300008;
                                        pGVar10 = (this->fields)._._._._.gameObject;
                                        if (pGVar10 != (GameObject *)0x0) {
                                          pGVar14 = (GreyOutObjectScript *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_AddComponent_1
                                                              (pGVar10,
                                                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__AddComponent<GreyOutObjectScript>__
                                                  );
                                          (this->fields).pickupItemObjectScript = pGVar14;
                                          func_?(&(this->fields).pickupItemObjectScript,
                                                          pGVar14);
                                          pMVar3 = (MVVehicleBase__Class *)
                                                    (this->fields).pickupItemObjectScript;
                                          pMVar15 = MVGameControllerBase::
                                                    MVGameControllerBase_get_MaterialLoader
                                                              ((MethodInfo *)0x0);
                                          if ((pMVar15 != (MaterialLoader *)0x0) &&
                                             (pSVar16 = (pMVar15->fields).pickupItemShader,
                                             pMVar3 != (MVVehicleBase__Class *)0x0)) {
                                            (pMVar3->_0).byval_arg.data.dummy = pSVar16;
                                            func_?(&(pMVar3->_0).byval_arg,pSVar16);
                                            pGVar14 = (this->fields).pickupItemObjectScript;
                                            if (pGVar14 != (GreyOutObjectScript *)0x0) {
                                              pSVar16 = (pGVar14->fields).hiddenShader;
                                              if ((TypeInfo__UnityEngine__Object->_1).
                                                  cctor_finished_or_no_cctor == 0) {
                                                func_?(TypeInfo__UnityEngine__Object);
                                              }
                                              bVar17 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Object::Object_1_op_Equality
                                                                ((Object_1 *)pSVar16,(Object_1 *)0x0,
                                                                 (MethodInfo *)0x0);
                                              if (bVar17 != 0) {
                                                if ((TypeInfo__UnityEngine__Debug->_1).
                                                    cctor_finished_or_no_cctor == 0) {
                                                  func_?(TypeInfo__UnityEngine__Debug);
                                                }
                                                UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                                Debug_1_LogError((Object *)
                                                                                                                                  
                                                  StringLiteral_hiddenShader_not_found,
                                                  (MethodInfo *)0x0);
                                              }
                                              pMVar3 = (MVVehicleBase__Class *)
                                                        (this->fields).pickupItemObjectScript;
                                              this_07 = MVGameControllerBase::
                                                        MVGameControllerBase_get_WOCM
                                                                  ((MethodInfo *)0x0);
                                              if (((this_07 != (MVWorldObjectClientManager *)0x0) &&
                                                  (pMVar18 = MVWorldObjectClientManager::
                                                                                                                          
                                                  MVWorldObjectClientManager_GetWorldObject
                                                            (this_07,(this->fields)._.
                                                                     spawnWorldObjectID,
                                                             (MethodInfo *)0x0),
                                                  pMVar18 != (MVWorldObject *)0x0)) &&
                                                 (pLVar19 = pMVar18[1].fields.inputLinkRefs,
                                                 pMVar3 != (MVVehicleBase__Class *)0x0)) {
                                                (pMVar3->_0).namespaze = (char *)pLVar19;
                                                pMVar3 = (MVVehicleBase__Class *)
                                                          &(pMVar3->_0).namespaze;
                                                func_?(pMVar3,pLVar19);
                                                pGVar14 = (this->fields).pickupItemObjectScript;
                                                if (pGVar14 != (GreyOutObjectScript *)0x0) {
                                                  GreyOutObjectScript::
                                                  GreyOutObjectScript_InitializeOriginalMaterials
                                                            (pGVar14,(MethodInfo *)0x0);
                                                  (this->fields).initFlag = 1;
                                                  MVWorldObjectSpawnerVehicle_SetupCulling
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
  pMVar5 = pMVar3;
code_?:
  func_?(pMVar2,pMVar5);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  pMStack_2 = pMVar1;
  if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
     (((TypeInfo__MVVehicleBase->_1).typeHierarchyDepth <= (pMVar1->klass->_1).typeHierarchyDepth &&
      ((MVVehicleBase__Class *)
       (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] ==
       TypeInfo__MVVehicleBase)))) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      pTStack_4 = (Transform *)(pPVar3->fields).particleCFX_GroundAura;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar6 = (pVVar5->zeroVector).x;
      uVar7 = (pVVar5->zeroVector).y;
      pMStack_2 = (MVWorldObjectClient *)(pVVar5->zeroVector).z;
      fStack_8 = (float)uVar6;
      fStack_9 = (float)uVar7;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fStack_11 = (pQVar10->identityQuaternion).x;
      RStack_12._options = (int32_t)(pQVar10->identityQuaternion).y;
      RStack_12._cultureKey = (String *)(pQVar10->identityQuaternion).z;
      RStack_12._pattern = (String *)(pQVar10->identityQuaternion).w;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      position.y = fStack_9;
      position.x = fStack_8;
      position.z = (float)pMStack_2;
      rotation.y = (float)RStack_12._options;
      rotation.x = fStack_11;
      rotation.z = (float)RStack_12._cultureKey;
      rotation.w = (float)RStack_12._pattern;
      pGVar13 = (GameObject *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                          ((Object *)pTStack_4,position,rotation,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                          );
      (this->fields).groundAura = pGVar13;
      func_?(&(this->fields).groundAura);
      pGVar13 = (this->fields).groundAura;
      if (pGVar13 != (GameObject *)0x0) {
        pTStack_4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar13,(MethodInfo *)0x0);
        pGVar13 = (this->fields)._._._._.gameObject;
        if ((pGVar13 != (GameObject *)0x0) &&
           (value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar13,(MethodInfo *)0x0), pTStack_4 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTStack_4,value_00,(MethodInfo *)0x0);
          pGVar13 = (this->fields).groundAura;
          if (pGVar13 != (GameObject *)0x0) {
            pTStack_4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar13,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_14._0_4_ = (pVVar5->zeroVector).x;
            uStack_14._4_4_ = (pVVar5->zeroVector).y;
            fStack_15 = (pVVar5->zeroVector).z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar16 = (pVVar5->upVector).x;
            uVar17 = (pVVar5->upVector).y;
            fStack_9 = (pVVar5->upVector).z;
            fStack_18 = (float)uVar16;
            fStack_8 = (float)uVar17;
            if (pMVar1 != (MVWorldObjectClient *)0x0) {
              (*(pMVar1->klass->vtable).GetLocalBounds.methodPtr)(auStack_19,pMVar1,1);
              pRVar20 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text
                        ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                  (&RStack_12,
                                   (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&stack0xffffffac,(MethodInfo *)0x0);
              fVar21 = (float)((uint)pRVar20->_cultureKey ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              );
              fStack_18 = (float)uStack_14 + fStack_18 * fVar21 * _UNK_?;
              fStack_8 = uStack_14._4_4_ + fStack_8 * fVar21 * _UNK_?;
              fStack_9 = fStack_15 + fStack_9 * fVar21 * _UNK_?;
              if (pTStack_4 != (Transform *)0x0) {
                value.y = fStack_8;
                value.x = fStack_18;
                value.z = fStack_9;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTStack_4,value,(MethodInfo *)0x0);
                pGVar13 = (this->fields).groundAura;
                if (pGVar13 != (GameObject *)0x0) {
                  pTStack_4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar13,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTStack_4 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTStack_4,
                               TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                               (MethodInfo *)0x0);
                    iVar22 = (*(pMVar1->klass->vtable).get_DocumentationType.methodPtr)(pMVar1);
                    (this->fields)._.documentationType = iVar22;
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
  else {
    func_?(pMVar1);
  }
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
     (((TypeInfo__MVVehicleBase->_1).typeHierarchyDepth <= (pMVar1->klass->_1).typeHierarchyDepth
      && ((MVVehicleBase__Class *)
          (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1]
          == TypeInfo__MVVehicleBase)))) {
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
      pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fStack_10 = (pQVar9->identityQuaternion).x;
      RStack_11._options = (int32_t)(pQVar9->identityQuaternion).y;
      RStack_11._cultureKey = (String *)(pQVar9->identityQuaternion).z;
      RStack_11._pattern = (String *)(pQVar9->identityQuaternion).w;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      position.y = (float)uVar7;
      position.x = (float)uVar6;
      position.z = fVar8;
      rotation.y = (float)RStack_11._options;
      rotation.x = fStack_10;
      rotation.z = (float)RStack_11._cultureKey;
      rotation.w = (float)RStack_11._pattern;
      pLVar12 = (List_1_MV_WorldObject_ObjectLink_ *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                          ((Object *)pGVar4,position,rotation,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                          );
      in_stack_2[1].fields._._._.objectLinkRefs = pLVar12;
      func_?(&in_stack_2[1].fields._._._.objectLinkRefs);
      pLVar12 = in_stack_2[1].fields._._._.objectLinkRefs;
      if (pLVar12 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)pLVar12,(MethodInfo *)0x0);
        pGVar4 = (in_stack_2->fields)._._.gameObject;
        if ((pGVar4 != (GameObject *)0x0) &&
           (value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar4,(MethodInfo *)0x0), pTVar13 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar13,value_00,(MethodInfo *)0x0);
          pLVar12 = in_stack_2[1].fields._._._.objectLinkRefs;
          if (pLVar12 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
            pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                ((GameObject *)pLVar12,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_14._0_4_ = (pVVar5->zeroVector).x;
            uStack_14._4_4_ = (pVVar5->zeroVector).y;
            fStack_15 = (pVVar5->zeroVector).z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar16 = (pVVar5->upVector).x;
            fVar8 = (pVVar5->upVector).y;
            fVar17 = (pVVar5->upVector).z;
            puStack_18 = (undefined *)uVar16;
            if (pMVar1 != (MVWorldObjectClient *)0x0) {
              (*(pMVar1->klass->vtable).GetLocalBounds.methodPtr)(auStack_19,pMVar1,1);
              pRVar20 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text
                        ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                  (&RStack_11,
                                   (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&stack0xffffffb4,(MethodInfo *)0x0);
              fVar21 = (float)((uint)pRVar20->_cultureKey ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              );
              puStack_18 = (undefined *)
                           ((float)uStack_14 + (float)puStack_18 * fVar21 * _UNK_?);
              if (pTVar13 != (Transform *)0x0) {
                value.y = uStack_14._4_4_ + fVar8 * fVar21 * _UNK_?;
                value.x = (float)puStack_18;
                value.z = fStack_15 + fVar17 * fVar21 * _UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar13,value,(MethodInfo *)0x0);
                pLVar12 = in_stack_2[1].fields._._._.objectLinkRefs;
                if (pLVar12 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
                  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform((GameObject *)pLVar12,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar13 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar13,TypeInfo__UnityEngine__Quaternion->static_fields->
                                       identityQuaternion,(MethodInfo *)0x0);
                    pMVar22 = (MVBlueprintBase__Class *)
                              (*(pMVar1->klass->vtable).get_DocumentationType.methodPtr)(pMVar1);
                    in_stack_2[1].klass = pMVar22;
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
  else {
    func_?(pMVar1);
  }
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
               MethodInfo__MVWorldObjectSpawnerVehicle__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
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
                (this_01,(Object *)this,(this->klass->vtable).OnStateChanged.method,
                 (MethodInfo *)0x0);
      pCVar5 = (CullingSubscriberBase *)func_?();
      if (pCVar5 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (pCVar5,2.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
                   (MethodInfo *)0x0);
        (this->fields).cullingSubscriberBase = pCVar5;
        func_?();
        pCVar5 = (this->fields).cullingSubscriberBase;
        if (pCVar5 != (CullingSubscriberBase *)0x0) {
          (pCVar5->fields)._DistanceBandIndex_k__BackingField = 2;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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

