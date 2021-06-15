
/* Void Destroy() */

void Assembly-CSharp.dll::MVFlag::MVFlag_Destroy(MVFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_,
             MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
            );
  if (pTVar1 != (TriggerBoxEvents *)0x0) {
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pUVar3 = (this->fields).useInteractor;
    if (pUVar3 == (UseInteractor *)0x0) {
code_?:
      MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
                ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
      if ((this->fields).initializedInWorld == 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_00 != (MVNetworkGame *)0x0) &&
         (this_01 = (Collection_1_VoxelHit_ *)
                    CloudyTheme::CloudyTheme_get_Identifier
                              ((CloudyTheme *)this_00,(MethodInfo *)0x0),
         this_01 != (Collection_1_VoxelHit_ *)0x0)) {
        this_02 = (MVWorldObjectClientManager *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
        pOVar4 = System.Core.dll::System::Linq::
                 Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                 Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                             *)this,(MethodInfo *)0x0);
        if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
           (this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                                (this_02,(WorldObjectType__Enum)pOVar4,(MethodInfo *)0x0),
           this_03 != (List_1_MVWorldObjectClient_ *)0x0)) {
          pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if (pOVar4 != (Object *)0x0) {
            return;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar5 = (PrefabPool *)
                   MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pPVar5 != (PrefabPool *)0x0) &&
             (pWVar6 = (WinningConditionManager *)
                       PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar5,(MethodInfo *)0x0),
             pWVar6 != (WinningConditionManager *)0x0)) {
            this_04 = MVWorldObject.dll::WinningConditionManager::
                      WinningConditionManager_GetSingletonWinnerConditionByType_6
                                (pWVar6,
                                 FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                                );
            if (this_04 == (TimeAttackFlagReachedClient *)0x0) goto code_?;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pPVar5 = (PrefabPool *)
                     MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pPVar5 != (PrefabPool *)0x0) {
              pWVar6 = (WinningConditionManager *)
                       PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar5,(MethodInfo *)0x0);
              pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_04,(MethodInfo *)0x0);
              if (pWVar6 != (WinningConditionManager *)0x0) {
                MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_RemoveWinnerCondition
                          (pWVar6,(int32_t)pOVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pTVar1 = (this->fields).triggerBoxEvents;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)pUVar3,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar1 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                  (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pTVar1 = (this->fields).triggerBoxEvents;
        pUVar3 = (this->fields).useInteractor;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)pUVar3,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar1 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
          pUVar3 = (this->fields).useInteractor;
          data = (Dictionary_2_System_Object_System_Object_ *)
                 PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
          if (pUVar3 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor_OnDestroy(pUVar3,data,(MethodInfo *)0x0);
            (this->fields).useInteractor = (UseInteractor *)0x0;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  this_05 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_05,StringLiteral_Could_not_find_FlagReached_singl,(MethodInfo *)0x0);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean DoCaptureFlag(Int32) */

bool Assembly-CSharp.dll::MVFlag::MVFlag_DoCaptureFlag
               (MVFlag *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ReportCaptureFlag
              (this_00,(int32_t)woid,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVFlag::MVFlag_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVFlag *this,float gridSize,Vector3 position,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
            ((Vector3 *)&stack0xffffffe4,*pVVar1,2.0,(MethodInfo *)0x0);
  pVVar1 = (Vector3 *)0x3f800000;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    puVar2 = &UNK_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      puVar3 = &UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      fVar5 = pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        position.x = (float)TypeInfo__SharedCubeFunctions;
        gridSize = (float)&UNK_?;
        func_?();
      }
      position.x = 0.0;
      auVar9._4_4_ = position.z;
      auVar9._0_4_ = position.y;
      auVar9._8_4_ = 0;
      rotation.y = fVar6;
      rotation.x = fVar5;
      rotation.z = fVar7;
      rotation.w = fVar8;
      scale.y = (float)puVar2;
      scale.x = (float)pVVar1;
      scale.z = (float)puVar3;
      pVVar10 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,(Vector3)(auVar9 << 0x20),rotation,gridSize,scale,
                          (MethodInfo *)0x0);
      fVar6 = pVVar10->y;
      fVar5 = pVVar10->z;
      pVVar1->x = pVVar10->x;
      pVVar1->y = fVar6;
      pVVar1->z = fVar5;
      return pVVar1;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar11)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVFlag::MVFlag_Initialize(MVFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVFlag_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pWVar2 = (WinningConditionManager *)
             PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
    if (pWVar2 != (WinningConditionManager *)0x0) {
      pTVar3 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType_6
                         (pWVar2,
                          FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                         );
      if (pTVar3 == (TimeAttackFlagReachedClient *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar1 = (PrefabPool *)
                 MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pPVar1 == (PrefabPool *)0x0) goto code_?;
        pWVar2 = (WinningConditionManager *)
                 PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
        args = (Object__Array *)func_?();
        if (pWVar2 == (WinningConditionManager *)0x0) goto code_?;
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition_6
                  (pWVar2,args,
                   FlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<FlagReachedClient>_System__Object____
                  );
      }
      this_00 = (this->fields).useInteractor;
      (this->fields).initializedInWorld = 1;
      data = (Dictionary_2_System_Object_System_Object_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (this_00 != (UseInteractor *)0x0) {
        UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
        pGVar4 = (this->fields)._._._.gameObject;
        if (pGVar4 != (GameObject *)0x0) {
          pUVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_29
                             (pGVar4,
                              WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                             );
          (this->fields).worldObjectEnableController = (WorldObjectEnableController *)pUVar5;
          this_01 = (this->fields).flagObject;
          if (this_01 != (FlagObject *)0x0) {
            pGVar4 = (GameObject *)
                     MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)this_01,
                                (MethodInfo *)0x0);
            MVLogicObject::MVLogicObject_SetupCulling
                      ((MVLogicObject *)this,pGVar4,2.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVFlag::MVFlag_SetupUseInteractor(MVFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).flagObject != (FlagObject *)0x0) {
    pTVar1 = (this->fields).triggerBoxEvents;
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar1,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<int,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,MethodInfo__MVFlag__DoCaptureFlag_int_,
                 MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
      pUVar3 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar3,(MVWorldObjectClient *)this,(GameObject *)0x0,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)pUVar2,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5
                 ,(MethodInfo *)0x0);
      pTVar1 = (this->fields).triggerBoxEvents;
      (this->fields).useInteractor = pUVar3;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)pUVar3,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar1 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pTVar1 = (this->fields).triggerBoxEvents;
        pUVar3 = (this->fields).useInteractor;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)pUVar3,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar1 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                    (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
          pFVar4 = (this->fields).flagObject;
          if (pFVar4 != (FlagObject *)0x0) {
            root = (pFVar4->fields).useInteractionRotator;
            this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
            GameCoinLogic::GameCoinLogic__ctor(this_01,root,0,(MethodInfo *)0x0);
            pUVar3 = (this->fields).useInteractor;
            if (pUVar3 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        (pUVar3,(UseRequirement *)this_01,(MethodInfo *)0x0);
              this_00 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                         *)(this->fields).flagObject;
              if (this_00 !=
                  (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                   *)0x0) {
                tintObject = (TintObject *)
                             System.Core.dll::System::Linq::
                             Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::
                             Schema::JsonSchemaType]::
                             Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                       (this_00,(MethodInfo *)0x0);
                this_02 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                TeamRequirement::TeamRequirement__ctor(this_02,tintObject,0,(MethodInfo *)0x0);
                pUVar3 = (this->fields).useInteractor;
                if (pUVar3 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar3,(UseRequirement *)this_02,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVFlag(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVFlag::MVFlag__ctor
               (MVFlag *this,Dictionary_2_System_Object_System_Object_ *data,
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
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = (ObjectPrefab *)
                   ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
                   ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                             ((ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)this_00,
                              (MethodInfo *)0x0);
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0
              );
    pFVar1 = (FlagObject *)(this->fields)._._._.component;
    if (pFVar1 == (FlagObject *)0x0) {
      this_01 = (FlagObject *)0x0;
    }
    else {
      bVar2 = (TypeInfo__FlagObject->_1).naturalAligment;
      if (((((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32___Class *)pFVar1->klass)->_1)
           .naturalAligment < bVar2) ||
         ((((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32___Class *)pFVar1->klass)->_1).
          typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__FlagObject)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_01 = (FlagObject *)0x0;
      if (bVar3) {
        this_01 = pFVar1;
      }
      if (this_01 == (FlagObject *)0x0) goto code_?;
    }
    (this->fields).flagObject = this_01;
    if (this_01 != (FlagObject *)0x0) {
      this_02 = (TriggerBoxEvents *)
                System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Int32]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                          ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                           (MethodInfo *)0x0);
      (this->fields).triggerBoxEvents = this_02;
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this,
                 MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (this_02 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_02,(EventHandler_1_TriggerEventArgs_ *)this_03,(MethodInfo *)0x0);
        uVar4 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        piVar5 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar5 = (uint)*piVar5 | 0x22100000;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar4;
        return;
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVFlag::MVFlag_get_DocumentationType(MVFlag *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Flag;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVFlag::MVFlag_triggerBoxEvents_TriggerEnter
               (MVFlag *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  this_00 = (this->fields).worldObjectEnableController;
  if (this_00 != (WorldObjectEnableController *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        (MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x2) {
      return;
    }
    this_01 = (this->fields).useInteractor;
    if (this_01 != (UseInteractor *)0x0) {
      UVar2 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_01,(MethodInfo *)0x0);
      if ((UVar2 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
        return;
      }
      if (e != (TriggerEventArgs *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ReportCaptureFlag
                    (this_02,(int32_t)woid,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

