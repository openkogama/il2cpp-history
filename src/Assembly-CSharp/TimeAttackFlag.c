
/* Void Destroy() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_Destroy
               (TimeAttackFlag *this,MethodInfo *method)

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
             MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,
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
                                 TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
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
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          source = (pTVar1->fields).TriggerExit;
          do {
            pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)source,(Delegate *)pUVar2,(MethodInfo *)0x0);
            if (pDVar7 != (Delegate *)0x0) {
              pDVar8 = (Delegate *)0x0;
              if ((EventHandler_1_TriggerEventArgs___Class *)pDVar7->klass ==
                  TypeInfo__System__EventHandler<TriggerEventArgs>) {
                pDVar8 = pDVar7;
              }
              if (pDVar8 == (Delegate *)0x0) goto code_?;
            }
            pEVar9 = (EventHandler_1_TriggerEventArgs_ *)func_?();
            bVar10 = pEVar9 != source;
            source = pEVar9;
          } while (bVar10);
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
  func_?();
code_?:
  this_05 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_05,StringLiteral_Could_not_find_FlagReached_singl,(MethodInfo *)0x0);
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean DoReachTimeAttackFlag(Int32) */

bool Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_DoReachTimeAttackFlag
               (TimeAttackFlag *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isTimeAttackDebriefingOn == 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).lastCaptureTime + _UNK_? <= fVar1) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastCaptureTime = fVar1;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar2 != (FlagDebriefingControl *)0x0) {
        fVar3 = (pFVar2->fields).RunStartTime;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        captureTime = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                                ((fVar1 - fVar3) * _UNK_?,(MethodInfo *)0x0);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_ReportReachedTimeAttackFlag
                    (this_00,captureTime,(int32_t)woid,(MethodInfo *)0x0);
          pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                             ((MethodInfo *)0x0);
          if (pFVar2 != (FlagDebriefingControl *)0x0) {
            FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
                      (pFVar2,captureTime,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
  }
  return 0;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,TimeAttackFlag *this,float gridSize,
                    Vector3 position,MethodInfo *method)

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

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_Initialize
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TimeAttackFlag_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pWVar2 = (WinningConditionManager *)
             PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
    if (pWVar2 != (WinningConditionManager *)0x0) {
      pTVar3 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType_6
                         (pWVar2,
                          TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                         );
      if (pTVar3 == (TimeAttackFlagReachedClient *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar1 = (PrefabPool *)
                 MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pPVar1 != (PrefabPool *)0x0) {
          pWVar2 = (WinningConditionManager *)
                   PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
          args = (Object__Array *)func_?();
          if (pWVar2 != (WinningConditionManager *)0x0) {
            MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_CreateWinnerCondition_6
                      (pWVar2,args,
                       TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeAttackFlagReachedClient>_System__Object____
                      );
            goto code_?;
          }
        }
      }
      else {
code_?:
        this_00 = (this->fields).useInteractor;
        (this->fields).initializedInWorld = 1;
        data = (Dictionary_2_System_Object_System_Object_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        if (this_00 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
          this_01 = (this->fields)._._._.gameObject;
          if (this_01 != (GameObject *)0x0) {
            pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_29
                               (this_01,
                                WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                               );
            (this->fields).worldObjectEnableController = (WorldObjectEnableController *)pUVar4;
            pTVar5 = (this->fields).timeAttackFlagObject;
            if (pTVar5 != (TimeAttackFlagObject *)0x0) {
              MVLogicObject::MVLogicObject_SetupCulling
                        ((MVLogicObject *)this,(pTVar5->fields).visualObject,2.0,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                  ((MethodInfo *)0x0);
              if (this_02 != (MVLocalPlayer *)0x0) {
                bVar6 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
                if (bVar6 != 0) {
                  TimeAttackFlag_InitializeCallbacks(this,(MethodInfo *)0x0);
                  return;
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                this_03 = (MVAvatar *)
                          MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (this_03 != (MVAvatar *)0x0) {
                  pMVar7 = MVAvatar::MVAvatar_get_Shield(this_03,(MethodInfo *)0x0);
                  if (pMVar7 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                    pDVar8 = *(Delegate **)&(pMVar7->fields)._._.writeThrough;
                    this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (this_04,(Object *)this,MethodInfo__TimeAttackFlag__LateInitialize__,
                               (MethodInfo *)0x0);
                    pDStack9 =
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   (pDVar8,(Delegate *)this_04,(MethodInfo *)0x0);
                    pDVar8 = (Delegate *)0x0;
                    if (pDStack9 == (Delegate *)0x0) {
code_?:
                      *(Delegate **)&(pMVar7->fields)._._.writeThrough = pDVar8;
                      return;
                    }
                    if ((Action__Class *)pDStack9->klass == TypeInfo__System__Action) {
                      pDVar8 = pDStack9;
                    }
                    pAStack10 = TypeInfo__System__Action;
                    if (pDVar8 != (Delegate *)0x0) goto code_?;
                    goto code_?;
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
  pDStack9 = extraout_ECX;
  pAStack10 = extraout_EDX;
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeCallbacks() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_InitializeCallbacks
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar1 != (FlagDebriefingControl *)0x0) {
    pAVar2 = (pFVar1->fields).OnFlagDebriefing;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__TimeAttackFlag__OnStartFlagDebriefing_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar4 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pAVar2 = (Action_1_Int32_ *)0x0;
    if (pAVar4 != (Action_1_Int32_ *)0x0) {
      if (pAVar4->klass == TypeInfo__System__Action<int>) {
        pAVar2 = pAVar4;
      }
      pAVar5 = (Action__Class *)TypeInfo__System__Action<int>;
      if (pAVar2 == (Action_1_Int32_ *)0x0) goto code_?;
    }
    (pFVar1->fields).OnFlagDebriefing = pAVar2;
    pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar1 != (FlagDebriefingControl *)0x0) {
      a = (pFVar1->fields).OnFlagDebriefingEnd;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__TimeAttackFlag__OnEndFlagDebriefing__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action_1_Int32_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action_1_Int32_ *)0x0;
      if (pAVar4 == (Action_1_Int32_ *)0x0) {
code_?:
        (pFVar1->fields).OnFlagDebriefingEnd = (Action *)pAVar2;
        return;
      }
      if ((Action__Class *)pAVar4->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar4;
      }
      pAVar5 = TypeInfo__System__Action;
      if (pAVar2 != (Action_1_Int32_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void LateInitialize() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_LateInitialize
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TimeAttackFlag_InitializeCallbacks(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    pMVar1 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      if (this != (TimeAttackFlag *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,(this->klass->vtable).InitializeInventory.methodPtr,
                   (MethodInfo *)0x0);
        pDStack2 =
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)this_01,(Delegate *)this_01,(MethodInfo *)0x0);
        pDVar3 = (Delegate *)0x0;
        if (pDStack2 == (Delegate *)0x0) {
code_?:
          *(Delegate **)&(pMVar1->fields)._._.writeThrough = pDVar3;
          return;
        }
        if ((Action__Class *)pDStack2->klass == TypeInfo__System__Action) {
          pDVar3 = pDStack2;
        }
        pAStack4 = TypeInfo__System__Action;
        if (pDVar3 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
  pDStack2 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnDataUpdate
               (TimeAttackFlag *this,MethodInfo *method)

{
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
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


/* Void OnEndFlagDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnEndFlagDebriefing
               (TimeAttackFlag *this,MethodInfo *method)

{
  (this->fields).isTimeAttackDebriefingOn = 0;
  return;
}


/* Void OnStartFlagDebriefing(Int32) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnStartFlagDebriefing
               (TimeAttackFlag *this,int32_t captureTime,MethodInfo *method)

{
  (this->fields).isTimeAttackDebriefingOn = 1;
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_SetupUseInteractor
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).timeAttackFlagObject != (TimeAttackFlagObject *)0x0) {
    pTVar1 = (this->fields).triggerBoxEvents;
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar1,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<int,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,MethodInfo__TimeAttackFlag__DoReachTimeAttackFlag_int_,
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
          pTVar4 = (this->fields).timeAttackFlagObject;
          if (pTVar4 != (TimeAttackFlagObject *)0x0) {
            root = (pTVar4->fields).useInteractionRotator;
            this_00 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
            GameCoinLogic::GameCoinLogic__ctor(this_00,root,0,(MethodInfo *)0x0);
            pUVar3 = (this->fields).useInteractor;
            if (pUVar3 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        (pUVar3,(UseRequirement *)this_00,(MethodInfo *)0x0);
              pTVar4 = (this->fields).timeAttackFlagObject;
              if (pTVar4 != (TimeAttackFlagObject *)0x0) {
                tintObject = (pTVar4->fields).tintObject;
                this_01 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                TeamRequirement::TeamRequirement__ctor(this_01,tintObject,0,(MethodInfo *)0x0);
                pUVar3 = (this->fields).useInteractor;
                if (pUVar3 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar3,(UseRequirement *)this_01,(MethodInfo *)0x0);
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


/* TimeAttackFlag(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag__ctor
               (TimeAttackFlag *this,Dictionary_2_System_Object_System_Object_ *data,
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
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    prefabObject = MVJetPack::MVJetPack_get_Shield((MVJetPack *)this_01,(MethodInfo *)0x0);
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    pTVar1 = (TimeAttackFlagObject *)(this->fields)._._._.component;
    if (pTVar1 == (TimeAttackFlagObject *)0x0) {
      pTVar2 = (TimeAttackFlagObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__TimeAttackFlagObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pTVar1->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pTVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__TimeAttackFlagObject)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pTVar2 = (TimeAttackFlagObject *)0x0;
      if (bVar4) {
        pTVar2 = pTVar1;
      }
      if (pTVar2 == (TimeAttackFlagObject *)0x0) goto code_?;
    }
    (this->fields).timeAttackFlagObject = pTVar2;
    if (pTVar2 != (TimeAttackFlagObject *)0x0) {
      this_00 = (pTVar2->fields).triggerBoxEvents;
      (this->fields).triggerBoxEvents = this_00;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (this_00 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_00,(EventHandler_1_TriggerEventArgs_ *)this_02,(MethodInfo *)0x0);
        uVar5 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        piVar6 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar6 = (uint)*piVar6 | 0x22000000;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar5;
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_get_DocumentationType
          (TimeAttackFlag *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TimeAttackFlag;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_triggerBoxEvents_TriggerEnter
               (TimeAttackFlag *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

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
        if ((this->fields).isTimeAttackDebriefingOn != 0) {
          return;
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (fVar3 < (this->fields).lastCaptureTime + _UNK_?) {
          return;
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).lastCaptureTime = fVar3;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar4 != (FlagDebriefingControl *)0x0) {
          fVar5 = (pFVar4->fields).RunStartTime;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          captureTime = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                                  ((fVar3 - fVar5) * _UNK_?,(MethodInfo *)0x0);
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
          if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_ReportReachedTimeAttackFlag
                      (this_02,captureTime,(int32_t)woid,(MethodInfo *)0x0);
            pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                               ((MethodInfo *)0x0);
            if (pFVar4 != (FlagDebriefingControl *)0x0) {
              FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
                        (pFVar4,captureTime,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

