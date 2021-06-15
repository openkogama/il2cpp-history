
/* Void Activate(Int32, SpawnRoleDataReceiver, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Activate
               (MVBuildModeAvatarLocal *this,int32_t idFrom,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    this_00 = (pGVar1->fields).AvatarCommandsPlayMode;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_add_OnKillSelf
                (this_00,(Action *)pUVar2,(MethodInfo *)0x0);
      this_01 = (this->fields).laserPoint;
      if (this_01 != (LaserPointer *)0x0) {
        this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (this_06 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_06,1,(MethodInfo *)0x0);
          this_07 = (PrefabPool *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_07 != (PrefabPool *)0x0) {
            this_08 = (MVLocalObjectController *)
                      PrefabPool::PrefabPool_get_MVSmokePrefab(this_07,(MethodInfo *)0x0);
            if (this_08 != (MVLocalObjectController *)0x0) {
              MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
                        (this_08,(ILocalObject *)this,(MethodInfo *)0x0);
              this_02 = (this->fields).avatarScriptObject;
              if (this_02 != (AvatarLocalBuildMode *)0x0) {
                AvatarLocalBuildMode::AvatarLocalBuildMode_Activate(this_02,(MethodInfo *)0x0);
                this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)(this->fields).avatarScriptObject;
                if (this_03 !=
                    (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)0x0) {
                  this_09 = (AvatarCamerasDesktopBuildMode *)
                            System.dll::System::Collections::Generic::
                            SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                            ::Single,System::Object]::
                            SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                      (this_03,(MethodInfo *)0x0);
                  if (this_09 != (AvatarCamerasDesktopBuildMode *)0x0) {
                    AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera
                              (this_09,CameraType__Enum_EditorCamera,(MethodInfo *)0x0);
                    this_10 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                        ((MethodInfo *)0x0);
                    this_11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                        ((MethodInfo *)0x0);
                    if (this_11 != (MainCameraManager *)0x0) {
                      pMVar3 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                         (this_11,(MethodInfo *)0x0);
                      if (pMVar3 != (MVCameraBase *)0x0) {
                        fVar4 = (float10)(*(code *)(pMVar3->klass->vtable).get_FieldOfView.method)
                                                   (pMVar3);
                        if (this_10 != (MainCameraManager *)0x0) {
                          MainCameraManager::MainCameraManager_set_FieldOfView
                                    (this_10,(float)fVar4,(MethodInfo *)0x0);
                          (*(code *)(this->klass->vtable).set_Position.method)(this);
                          (*(code *)(this->klass->vtable).set_Rotation.method)(this,rotation.x);
                          if (idFrom < 1) {
code_?:
                            if (spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                              this_05 = (spawnRoleDataReceiver->fields).woId;
                              value = mscorlib.dll::System::Collections::ObjectModel::
                                      Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                                ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
                              if (this_05 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) {
                                Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                                SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32]::
                                SpawnRoleReceiverVariable_1_System_Int32__set_Value
                                          (this_05,(int32_t)value,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                                          );
                                distanceReferencePoint = (this->fields)._._._.transform;
                                if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr &
                                     0x2000000) != 0) &&
                                   ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                                          (distanceReferencePoint,(MethodInfo *)0x0);
                                if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr
                                     & 0x2000000) != 0) &&
                                   ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                pAVar5 = ChatCommandManager::
                                         ChatCommandManager_GetChatCommandCallback
                                                   (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                                pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                          *)func_?();
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar2,(Object *)this,
                                           MethodInfo__MVBuildModeAvatarLocal__HideEditCube__,
                                           (MethodInfo *)0x0);
                                pAVar6 = (Action *)
                                         mscorlib.dll::System::Delegate::Delegate_Combine
                                                   ((Delegate *)pAVar5,(Delegate *)pUVar2,
                                                    (MethodInfo *)0x0);
                                pAVar5 = (Action *)0x0;
                                if (pAVar6 == (Action *)0x0) {
code_?:
                                  ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                                            (ChatCommand__Enum_HideAllUI,pAVar5,(MethodInfo *)0x0);
                                  return;
                                }
                                if (pAVar6->klass == TypeInfo__System__Action) {
                                  pAVar5 = pAVar6;
                                }
                                if (pAVar5 != (Action *)0x0) goto code_?;
                                goto code_?;
                              }
                            }
                          }
                          else if (spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                            this_04 = (spawnRoleDataReceiver->fields).position;
                            pVVar7 = (Vector3 *)
                                     (*(code *)(this->klass->vtable).get_Position.method)
                                               (&stack0xfffffff0,this);
                            if (this_04 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)
                            {
                              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                              SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::
                              Vector3]::SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
                                        (this_04,*pVVar7,
                                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                                        );
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
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DeActivate(Int32, SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_DeActivate
               (MVBuildModeAvatarLocal *this,int32_t idTo,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleDataReceiver = (SpawnRoleDataReceiver *)0x0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    this_00 = (pGVar1->fields).AvatarCommandsPlayMode;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnKillSelf
                (this_00,(Action *)pUVar2,(MethodInfo *)0x0);
      this_01 = (this->fields).laserPoint;
      if (this_01 != (LaserPointer *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__ChatCommandManager);
          }
          pAVar3 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                             (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__HideEditCube__,
                     (MethodInfo *)0x0);
          pAVar4 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pAVar3,(Delegate *)pUVar2,(MethodInfo *)0x0);
          pAVar3 = (Action *)0x0;
          if (pAVar4 == (Action *)0x0) {
code_?:
            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                      (ChatCommand__Enum_HideAllUI,pAVar3,(MethodInfo *)0x0);
            return;
          }
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar3 = pAVar4;
          }
          if (pAVar3 != (Action *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_FixedUpdate
          (MVBuildModeAvatarLocal *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields).buildModeAvatarLocalModes;
  if ((pMVar1 != (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) &&
     (pMVar2 = (pMVar1->fields).currentMode,
     pMVar2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0)) {
    (*(code *)(pMVar2->klass->vtable).__unknown_2.method)
              (pMVar2,movementMap,(pMVar2->klass->vtable).__unknown_3.methodPtr);
    return movementMap;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar4 = (IInputToPlayerMovement *)(*pcVar3)();
  return pIVar4;
}


/* Vector3 GetLookDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_GetLookDirection
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal *this,MethodInfo *method
                    )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pVVar3 = MainCameraManager::MainCameraManager_get_FireDirection
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar3->x;
    uStack_1._4_4_ = pVVar3->y;
    fStack_2 = pVVar3->z;
    puVar4 = (undefined8 *)func_?(&stack0xffffffe4,&uStack_1);
    uVar5 = *puVar4;
    fVar6 = *(float *)(puVar4 + 1);
    __return_storage_ptr__->x = (float)(int)uVar5;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar7)();
  return pVVar3;
}


/* Void HideEditCube() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_HideEditCube
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields).laserPoint;
  if (this_00 != (LaserPointer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Initialize
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarScriptObject;
  if (this_00 != (AvatarLocalBuildMode *)0x0) {
    AvatarLocalBuildMode::AvatarLocalBuildMode_Initialize(this_00,this,(MethodInfo *)0x0);
    this_02 = (ScaleAnimationBase *)
              func_?(TypeInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,in_stack_1);
    (this_02->fields).state = (int32_t)this;
    (this->fields).buildModeAvatarLocalModes =
         (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)this_02;
    MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
    MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_SetMode
              ((MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)this_02,
               MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._.body;
    if (pMVar2 != (MVBody *)0x0) {
      this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
      if (this_03 != (CelestialParam *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_03,0,(MethodInfo *)0x0);
        this_04 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                            ((MVBuildModeAvatar *)this,1,(MethodInfo *)0x0);
        (this->fields).laserPoint = this_04;
        if (this_04 != (LaserPointer *)0x0) {
          LaserPointer::LaserPointer_SubscribeToCommands(this_04,(MethodInfo *)0x0);
          pUVar3 = (this->fields)._._._.PositionChanged;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__MVBuildModeAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,
                     MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                    );
          pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          if (pUVar5 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            if (pUVar5->klass ==
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
               ) {
              pUVar3 = pUVar5;
            }
            if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
            goto code_?;
          }
          pUVar6 = (this->fields)._._._.ScaleChanged;
          (this->fields)._._._.PositionChanged = pUVar3;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__MVBuildModeAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                     ,
                     MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
                    );
          pUVar7 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
          if (pUVar7 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
            if (pUVar7->klass ==
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
               ) {
              pUVar6 = pUVar7;
            }
            if (pUVar6 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
            goto code_?;
          }
          (this->fields)._._._.ScaleChanged = pUVar6;
          MVBuildModeAvatar::MVBuildModeAvatar_Initialize
                    ((MVBuildModeAvatar *)this,(MethodInfo *)0x0);
          this_05 = (AvatarLimbManager *)func_?();
          WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
          WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                    ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this_05,
                     (MethodInfo *)0x0);
          this_01 = (KogamaSettingNumericBase_1_System_Single_ *)(this->fields).avatarScriptObject;
          pMVar2 = (this->fields)._.body;
          (this->fields)._.limbManager = this_05;
          if (this_01 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
            pIVar8 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               (this_01,(MethodInfo *)0x0);
            if (this_05 != (AvatarLimbManager *)0x0) {
              (*(code *)(((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__Class *)
                         this_05->klass)->vtable).System_Collections_IEnumerator_get_Current.method)
                        (this_05,this,pMVar2,pIVar8,(this->fields)._.limbRotationRuntimeData,
                         (((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__Class *)
                          this_05->klass)->vtable).MoveNext.methodPtr);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_06 = (MVAvatar *)
                        MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (this_06 != (MVAvatar *)0x0) {
                this_07 = MVAvatar::MVAvatar_get_Shield(this_06,(MethodInfo *)0x0);
                actorNr = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                          TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                          TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                    ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,
                                     (MethodInfo *)0x0);
                if (this_07 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                  this_08 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                      ((MVPlayerContainer *)this_07,(int32_t)actorNr,
                                       (MethodInfo *)0x0);
                  id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
                  if (this_08 != (MVPlayer *)0x0) {
                    MVPlayer::MVPlayer_NotifyAvatarCreated(this_08,(int32_t)id,(MethodInfo *)0x0);
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
  func_?(0);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_OnPositionChanged
               (MVBuildModeAvatarLocal *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
      (positionChangedEventArgs != (PositionChangedEventArgs *)0x0)) &&
     (this_00 = (pSVar1->fields).position,
     this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (this_00,(positionChangedEventArgs->fields).NewPos,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnScaleChanged(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_OnScaleChanged
               (MVBuildModeAvatarLocal *this,MVWorldObjectClient *wo,
               ScaleChangedEventArgs *scaleChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
      (scaleChangedEventArgs != (ScaleChangedEventArgs *)0x0)) &&
     (this_00 = (pSVar1->fields).scale,
     this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (this_00,(scaleChangedEventArgs->fields).NewScale,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetCamera
               (MVBuildModeAvatarLocal *this,CameraType__Enum cameraType,MethodInfo *method)

{
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)(this->fields).avatarScriptObject;
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
    cameraController = pMRam00000010;
    if (pOVar1 != (Object *)0x0) {
      if (pMRam00000010 == (MVCameraController *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack3 = 0;
      this_01 = (pMRam00000010->fields).cameraStack;
      if (this_01 != (MVCameraController_CameraStack *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_02 = (this_01->fields).cameras;
        if (this_02 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
          newCamera = (MVCameraBase *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::
                      Object]::Dictionary_2_CameraType_System_Object__get_Item
                                ((Dictionary_2_CameraType_System_Object_ *)this_02,in_stack_4
                                 ,
                                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                                );
          MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
                    (this_01,newCamera,cameraController,(MethodInfo *)0x0);
          return;
        }
      }
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToSpawn() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

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
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClient *)0x0) {
      QStack_1.x = (float)(this_01->klass->vtable).set_WorldPosition.methodPtr;
      puVar2 = (undefined8 *)(*(code *)(this_01->klass->vtable).get_WorldPosition_1.method)();
      QStack_1.x = (float)(this->klass->vtable).get_WorldRotation_1.methodPtr;
      (*(code *)(this->klass->vtable).set_WorldPosition.method)
                (this,*puVar2,*(undefined4 *)(puVar2 + 1));
      pQVar3 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         (&QStack_1,this_01,(MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                ((MVWorldObjectClient *)this,*pQVar3,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        pMVar4 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_02,(MethodInfo *)0x0);
        if (pMVar4 != (MVCameraBase *)0x0) {
          QStack_1.x = (float)(pMVar4->klass->vtable).FocusOnObject.methodPtr;
          (*(code *)(pMVar4->klass->vtable).Reset.method)(pMVar4);
          return;
        }
      }
    }
  }
  QStack_1.x = 0.0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Suspend() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Suspend
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (TransformNetworkManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
              TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,(MethodInfo *)0x0);
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    if (this_00 != (TransformNetworkManager *)0x0) {
      TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                (this_00,(int32_t)pIVar2,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pRVar3 = (RuntimeVariableNetworkManager *)
                 ShootableButton::ShootableButton_get_InputSignalReceiver
                           ((ShootableButton *)pMVar1,(MethodInfo *)0x0);
        if (pRVar3 != (RuntimeVariableNetworkManager *)0x0) {
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                    (pRVar3,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pRVar3 = (RuntimeVariableNetworkManager *)
                     ShootableButton::ShootableButton_get_InputSignalReceiver
                               ((ShootableButton *)pMVar1,(MethodInfo *)0x0);
            pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
            if (pRVar3 != (RuntimeVariableNetworkManager *)0x0) {
              RuntimeVariableNetworkManager::
              RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                        (pRVar3,(int32_t)pIVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnSuspend() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_UnSuspend
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Update
          (MVBuildModeAvatarLocal *this,InputToInGameAction *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields).buildModeAvatarLocalModes;
  if ((pMVar1 != (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) &&
     (pMVar2 = (pMVar1->fields).currentMode,
     pMVar2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0)) {
    (*(code *)(pMVar2->klass->vtable).__unknown_3.method)
              (pMVar2,movementMap,(pMVar2->klass->vtable).__unknown_4.methodPtr);
    return movementMap;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar4 = (InputToInGameAction *)(*pcVar3)();
  return pIVar4;
}


/* MVBuildModeAvatarLocal(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
               (MVBuildModeAvatarLocal *this,Dictionary_2_System_Object_System_Object_ *data,
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
    pGVar1 = (GameObject *)
             System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,(MethodInfo *)0x0);
    MVBuildModeAvatar::MVBuildModeAvatar__ctor
              ((MVBuildModeAvatar *)this,data,pGVar1,worldObjects,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._._.gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                         (pGVar1,
                          AvatarLocalBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarLocalBuildMode>__
                         );
      (this->fields).avatarScriptObject = (AvatarLocalBuildMode *)pUVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

