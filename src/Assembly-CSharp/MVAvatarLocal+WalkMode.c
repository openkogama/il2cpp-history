
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_Activate
               (MVAvatarLocal_WalkMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pPVar2 = (PrefabPool *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                       (pMVar1,
                        MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                       );
    if (pPVar2 != (PrefabPool *)0x0) {
      transform = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      pNVar3 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                         ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffc8,(Transform *)transform,
                          (MethodInfo *)0x0);
      method_00 = (pNVar3->value).m_Extents.z;
      uVar4 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Byte]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)
                         &stack0xffffffac,(MethodInfo *)method_00);
      if (uVar4 == 0) {
        fVar5 = 0.0;
        fVar6 = 0.0;
        fVar7 = 0.0;
        fVar8 = 0.0;
        uVar9 = 0;
      }
      else {
        pfVar10 = (float *)func_?();
        fVar5 = *pfVar10;
        fVar6 = pfVar10[1];
        fVar7 = pfVar10[2];
        fVar8 = pfVar10[3];
        uVar9 = *(undefined8 *)(pfVar10 + 4);
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        bounds.m_Center.y = fVar6;
        bounds.m_Center.x = fVar5;
        bounds.m_Center.z = fVar7;
        bounds.m_Extents.x = fVar8;
        bounds.m_Extents.y = (float)uVar9;
        bounds.m_Extents.z = (float)((ulonglong)uVar9 >> 0x20);
        MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                  (pMVar1,bounds,(MethodInfo *)0x0);
        pMVar11 = (this->fields)._.mvAvatar;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (pMVar11 != (MVAvatarLocal *)0x0) {
          (pMVar11->fields)._.healParticleSpawnTime = fVar5;
          pMVar11 = (this->fields)._.mvAvatar;
          if ((pMVar11 != (MVAvatarLocal *)0x0) &&
             (pMVar12 = (pMVar11->fields)._.shield, pMVar12 != (MVRuntimeDataVariableClampedFloat *)0x0
             )) {
            (*(code *)(pMVar12->klass->vtable).set_Value.method)();
            pMVar11 = (this->fields)._.mvAvatar;
            if ((pMVar11 != (MVAvatarLocal *)0x0) &&
               (this_00 = (pMVar11->fields).triggerHandler, this_00 != (MVTriggerHandler *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this_00,1,(MethodInfo *)0x0);
              pMVar11 = (this->fields)._.mvAvatar;
              if (pMVar11 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar11,(MethodInfo *)0x0);
                pPVar2 = (PrefabPool *)(this->fields)._.mvAvatar;
                if (pPVar2 != (PrefabPool *)0x0) {
                  this_05 = PrefabPool::PrefabPool_get_MVNegatePrefab(pPVar2,(MethodInfo *)0x0);
                  if (this_05 != (ObjectPrefab *)0x0) {
                    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                              ((Collider *)this_05,1,(MethodInfo *)0x0);
                    pMVar11 = (this->fields)._.mvAvatar;
                    pIVar13 = (this->fields).avatarInputController;
                    if ((pMVar11 != (MVAvatarLocal *)0x0) &&
                       (pTVar14 = (pMVar11->fields)._._._.transform, pTVar14 != (Transform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&stack0xffffffe4,pTVar14,(MethodInfo *)0x0);
                      if (pIVar13 != (IAvatarInputController *)0x0) {
                        func_?();
                        pMVar11 = (this->fields)._.mvAvatar;
                        if ((pMVar11 != (MVAvatarLocal *)0x0) &&
                           (this_01 = (pMVar11->fields)._.limbManager,
                           this_01 != (AvatarLimbManager *)0x0)) {
                          AvatarLimbManager::AvatarLimbManager_SetLimbRotatorActivity
                                    (this_01,1,(MethodInfo *)0x0);
                          pMVar11 = (this->fields)._.mvAvatar;
                          if (pMVar11 != (MVAvatarLocal *)0x0) {
                            this_02 = (pMVar11->fields)._.body;
                            if (this_02 != (MVBody *)0x0) {
                              if (pMVar11 == (MVAvatarLocal *)0x0) goto code_?;
                              MVBody::MVBody_set_Visible(this_02,1,(MethodInfo *)0x0);
                            }
                            if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
                              func_?();
                            }
                            bVar15 = MVClientSettings::MVClientSettings_get_ReviveEnabled
                                              ((MethodInfo *)0x0);
                            if (bVar15 != 0) {
                              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr
                                   & 0x2000000) != 0) &&
                                 ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                func_?();
                              }
                              this_06 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                         *)MVGameControllerBase::
                                           MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                     ((MethodInfo *)0x0);
                              if (this_06 ==
                                  (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                   *)0x0) goto code_?;
                              this_07 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                         *)System.Core.dll::System::Linq::
                                           Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
                                           Object,System::Object]::
                                           Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                     (this_06,(MethodInfo *)0x0);
                              if (this_07 ==
                                  (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                   *)0x0) goto code_?;
                              this_08 = (ReviveState *)
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System
                                        ::Object]::
                                        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                                                  (this_07,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                                  );
                              if (this_08 == (ReviveState *)0x0) goto code_?;
                              ReviveState::ReviveState_ResetSafePostions(this_08,(MethodInfo *)0x0);
                            }
                            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                              func_?();
                            }
                            this_09 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if (this_09 != (MVNetworkGame *)0x0) {
                              this_10 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                         *)InventoryItemPreviewer::
                                           InventoryItemPreviewer_get_PreviewGameObject
                                                     ((InventoryItemPreviewer *)this_09,
                                                      (MethodInfo *)0x0);
                              if (this_10 !=
                                  (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                   *)0x0) {
                                pOVar16 = System.dll::System::Collections::Generic::
                                          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                          ::Single,System::Object]::
                                          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                    (this_10,(MethodInfo *)0x0);
                                if (pOVar16 == (Object *)0x2) {
                                  pMVar11 = (this->fields)._.mvAvatar;
                                  if ((pMVar11 != (MVAvatarLocal *)0x0) &&
                                     (this_04 = (pMVar11->fields).avatarLocalModes,
                                     this_04 != (MVAvatarLocal_AvatarLocalModes *)0x0)) {
                                    MVAvatarLocal+AvatarLocalModes::
                                    MVAvatarLocal_AvatarLocalModes_SetMode
                                              (this_04,AvatarRuntimeState__Enum_Wait,
                                               (MethodInfo *)0x0);
                                    return;
                                  }
                                }
                                else {
                                  if ((undefined1)fromMode != AvatarRuntimeState__Enum_Wait) {
                                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                                methodPtr & 0x2000000) != 0) &&
                                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                      func_?();
                                    }
                                    pMVar17 = MVGameControllerBase::
                                              MVGameControllerBase_get_MainCameraManager
                                                        ((MethodInfo *)0x0);
                                    if (pMVar17 == (MainCameraManager *)0x0) goto code_?;
                                    MainCameraManager::MainCameraManager_set_CamMaskMode
                                              (pMVar17,MaskMode__Enum_Default,(MethodInfo *)0x0);
                                    pMVar11 = (this->fields)._.mvAvatar;
                                    if (pMVar11 == (MVAvatarLocal *)0x0) goto code_?;
                                    (*(code *)(pMVar11->klass->vtable).set_Visible.method)();
                                    pMVar11 = (this->fields)._.mvAvatar;
                                    if (pMVar11 == (MVAvatarLocal *)0x0) goto code_?;
                                    this_11 = (AvatarUIHandlerRemote *)
                                              MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
                                                        (pMVar11,(MethodInfo *)0x0);
                                    if (this_11 == (AvatarUIHandlerRemote *)0x0)
                                    goto code_?;
                                    pSVar18 = AvatarUIHandlerRemote::
                                              AvatarUIHandlerRemote_get_ShieldBar
                                                        (this_11,(MethodInfo *)0x0);
                                    if (pSVar18 == (ShieldBar *)0x0) goto code_?;
                                    func_?();
                                    pMVar17 = MVGameControllerBase::
                                              MVGameControllerBase_get_MainCameraManager
                                                        ((MethodInfo *)0x0);
                                    if (pMVar17 == (MainCameraManager *)0x0) goto code_?;
                                    pMVar19 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                                        (pMVar17,(MethodInfo *)0x0);
                                    if (pMVar19 == (MVCameraBase *)0x0) goto code_?;
                                    (*(code *)(pMVar19->klass->vtable).Reset.method)();
                                    pMVar17 = MVGameControllerBase::
                                              MVGameControllerBase_get_MainCameraManager
                                                        ((MethodInfo *)0x0);
                                    if (pMVar17 == (MainCameraManager *)0x0) goto code_?;
                                    pMVar19 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                                        (pMVar17,(MethodInfo *)0x0);
                                    if (pMVar19 == (MVCameraBase *)0x0) goto code_?;
                                    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_1_get_transform
                                                        ((Component_1 *)pMVar19,(MethodInfo *)0x0);
                                    pMVar11 = (this->fields)._.mvAvatar;
                                    if ((pMVar11 == (MVAvatarLocal *)0x0) ||
                                       (this_03 = (pMVar11->fields)._._._.transform,
                                       this_03 == (Transform *)0x0)) goto code_?;
                                    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_rotation
                                                        ((Quaternion *)&stack0xffffffe4,this_03,
                                                         (MethodInfo *)0x0);
                                    if (pTVar14 == (Transform *)0x0) goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_rotation(pTVar14,*pQVar20,(MethodInfo *)0x0);
                                  }
                                  pIVar21 = MVGameControllerDesktop::
                                            MVGameControllerDesktop_get_LockCursorManager
                                                      ((MethodInfo *)0x0);
                                  if (pIVar21 != (ILockCursorManager *)0x0) {
                                    func_?();
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
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_CreateInputController
          (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  this_00 = (AvatarInputController *)func_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor(this_00,(MethodInfo *)0x0);
  return (IAvatarInputController *)this_00;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_DeActivate
               (MVAvatarLocal_WalkMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields)._.limbManager, pAVar2 != (AvatarLimbManager *)0x0)) {
    pAVar3 = (pAVar2->fields).limbRotator;
    if (pAVar3 != (AvatarLimbManager_LimbRotator *)0x0) {
      (pAVar3->fields).isActive = 0;
      return;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DieByFalling() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_DieByFalling
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pMVar2 = (pMVar1->fields)._.Health, pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  {
    (*(code *)(pMVar2->klass->vtable).set_Value.method)();
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       ((pMVar1->fields).interactableLocal != (AvatarInteractable *)0x0)) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
        if (pMVar4 != (MVLocalPlayer *)0x0) {
          pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,(MethodInfo *)0x0);
          pDVar6 = GameMessages::GameMessages_MakePlayerKilledMessage
                             ((int32_t)pSVar5,(int32_t)pSVar5,PlayerKilledByType__Enum_FallOffWorld,
                              (MethodInfo *)0x0);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                             ((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                      (pMVar7,MVGameMsgType__Enum_AvatarKilled,pDVar6,(MethodInfo *)0x0);
            pDVar6 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pSVar5 = (String *)func_?();
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame *)0x0) {
              pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
              if (pMVar4 != (MVLocalPlayer *)0x0) {
                ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                NamedThemeAttribute_1_UnityEngine_Color__get_Name
                          ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,(MethodInfo *)0x0);
                pCVar8 = (CrossPlatformInputManager_VirtualButton *)func_?();
                if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)pDVar6,pSVar5,pCVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  pBVar9 = TypeInfo__System__Byte;
                  pSVar5 = (String *)func_?();
                  pCVar8 = (CrossPlatformInputManager_VirtualButton *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)pDVar6,pSVar5,pCVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  pSVar5 = (String *)func_?();
                  pCVar8 = (CrossPlatformInputManager_VirtualButton *)
                            func_?(TypeInfo__MV__Common__PlayerKilledByType);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)pDVar6,pSVar5,pCVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                    func_?(TypeInfo__NotificationController);
                  }
                  NotificationController::NotificationController_OnNotificationReceived
                            (NotificationType__Enum_Kill,pDVar6,(MethodInfo *)0x0);
                  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pBVar9->_0).methods;
                  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
                    bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds
                            ::Api::NativeAdType]::
                            HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                      (this_00,10,
                                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                      );
                    if (bVar10 == 0) {
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                         ((MethodInfo *)0x0);
                      if (pMVar7 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_PostNotificationOperation
                                (pMVar7,NotificationType__Enum_Kill,pDVar6,(MethodInfo *)0x0);
                    }
                    this_01 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)
                              (pBVar9->_0).typeMetadataHandle;
                    if (this_01 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
                      System.Core.dll::System::Action`3[Single,Object,MV::Common::
                      PlayerKilledByType]::
                      Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
                                (this_01,1000.0,(Object *)0x0,PlayerKilledByType__Enum_FallOffWorld,
                                 MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
                                );
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
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_FixedUpdate
               (MVAvatarLocal_WalkMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._.mvAvatar;
  if ((pMVar2 == (MVAvatarLocal *)0x0) ||
     (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 == (AvatarMotor *)0x0)) goto code_?;
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)pAVar3,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    pMVar2 = (this->fields)._.mvAvatar;
    if ((pMVar2 != (MVAvatarLocal *)0x0) &&
       (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
      AvatarMotor::AvatarMotor_UpdateVelocity(pAVar3,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if (movementMap == (IInputToPlayerMovement *)0x0) goto code_?;
  puVar5 = (undefined8 *)func_?(&VStack_6,0,TypeInfo__IInputToPlayerMovement,movementMap)
  ;
  uStack_7 = *puVar5;
  fStack_8 = *(float *)(puVar5 + 1);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pFVar9 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar9 == (FlagDebriefingControl *)0x0) goto code_?;
  if ((pFVar9->fields).IsInFlagDebriefing != 0) {
    this_00 = (PrefabPool *)(this->fields)._.mvAvatar;
    pIVar10 = (this->fields).avatarInputController;
    if (((this_00 == (PrefabPool *)0x0) ||
        (this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0),
        this_01 == (MVPointLightObject *)0x0)) ||
       (pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&stack0xffffffcc,(Transform *)this_01,(MethodInfo *)0x0),
       pIVar10 == (IAvatarInputController *)0x0)) goto code_?;
    func_?(3,TypeInfo__IMotorAPI,pIVar10,pQVar11->x,pQVar11->y,pQVar11->z,pQVar11->w);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        (&VStack_6,(MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar12->x;
    uStack_7._4_4_ = pVVar12->y;
    fStack_8 = pVVar12->z;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  pMVar2 = (this->fields)._.mvAvatar;
  if ((((pMVar2 == (MVAvatarLocal *)0x0) ||
       (this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)pMVar2,(MethodInfo *)0x0),
       this_03 == (CelestialParam *)0x0)) ||
      (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)this_03,(MethodInfo *)0x0), this_04 == (Transform *)0x0))
     || (pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_6,this_04,(MethodInfo *)0x0),
        this_02 == (WaterPlaneManager *)0x0)) goto code_?;
  fVar13 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                     (this_02,*pVVar12,(MethodInfo *)0x0);
  fVar14 = (this->fields).prevWaterProximity;
  fVar15 = (this->fields).swimStartProximity;
  if ((fVar15 <= fVar14) || (fVar13 < fVar15)) {
    if ((fVar15 < fVar14) && (fVar13 < fVar15)) {
      pMVar2 = (this->fields)._.mvAvatar;
      animationState = StringLiteral_Walk;
      goto joined_?;
    }
  }
  else {
    pMVar2 = (this->fields)._.mvAvatar;
    animationState = StringLiteral_Swim;
joined_?:
    if (pMVar2 == (MVAvatarLocal *)0x0) goto code_?;
    MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar2,animationState,(MethodInfo *)0x0);
  }
  pIVar10 = (this->fields).avatarInputController;
  (this->fields).prevWaterProximity = fVar13;
  uVar16 = func_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
  pMVar2 = (this->fields)._.mvAvatar;
  uStack_17 = CONCAT31(uStack_17._1_3_,uVar16);
  uStack_18 = CONCAT31(uStack_18._1_3_,(this->fields).isFiring);
  if ((pMVar2 != (MVAvatarLocal *)0x0) &&
     (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
    puVar5 = (undefined8 *)
              (*(code *)(pAVar3->klass->vtable).get_Velocity.method)
                        (auStack_19,pAVar3,(pAVar3->klass->vtable).get_IsMovementLocked.methodPtr);
    uVar20 = *(undefined4 *)(puVar5 + 1);
    pMVar2 = (this->fields)._.mvAvatar;
    VStack_6.y = (float)*puVar5;
    VStack_6.z = (float)((ulonglong)*puVar5 >> 0x20);
    if (pMVar2 != (MVAvatarLocal *)0x0) {
      bVar4 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar2,(MethodInfo *)0x0);
      this = (MVAvatarLocal_WalkMode *)(uint)bVar4;
      pMVar2 = (pMVar1->fields)._.mvAvatar;
      if ((pMVar2 != (MVAvatarLocal *)0x0) && (pIVar10 != (IAvatarInputController *)0x0)) {
        func_?(0,TypeInfo__IAvatarInputController,pIVar10,(int)uStack_7,
                        (int)((ulonglong)uStack_7 >> 0x20),fStack_8,uStack_17,uStack_18,
                        CONCAT44(VStack_6.z,VStack_6.y),uVar20,this,
                        (pMVar2->fields)._ForceRotateAvatarToFiringDirection_k__BackingField);
        pMVar2 = (pMVar1->fields)._.mvAvatar;
        if ((pMVar2 != (MVAvatarLocal *)0x0) &&
           (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
          AvatarMotor::AvatarMotor_FixedUpdateFunction
                    (pAVar3,(IMotorAPI *)(pMVar1->fields).avatarInputController,(MethodInfo *)0x0);
          pMVar2 = (pMVar1->fields)._.mvAvatar;
          if (pMVar2 != (MVAvatarLocal *)0x0) {
            bVar4 = MVAvatar::MVAvatar_IsInMode
                              ((MVAvatar *)pMVar2,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              return;
            }
            if ((pMVar1->fields).avatarInputController != (IAvatarInputController *)0x0) {
              puVar5 = (undefined8 *)func_?();
              VStack_6.z = *(float *)(puVar5 + 1);
              VStack_6.x = (float)*puVar5;
              VStack_6.y = (float)((ulonglong)*puVar5 >> 0x20);
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              pMVar2 = (pMVar1->fields)._.mvAvatar;
              if ((pMVar2 != (MVAvatarLocal *)0x0) &&
                 (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
                bVar4 = AvatarMotor::AvatarMotor_IsJumping(pAVar3,(MethodInfo *)0x0);
                (pMVar1->fields).isJumping = bVar4;
                pMVar2 = (pMVar1->fields)._.mvAvatar;
                if ((pMVar2 != (MVAvatarLocal *)0x0) &&
                   (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
                  bVar4 = AvatarMotor::AvatarMotor_IsAirJumping(pAVar3,(MethodInfo *)0x0);
                  if ((pMVar1->fields).swimStartProximity <= (pMVar1->fields).prevWaterProximity) {
                    pMVar2 = (pMVar1->fields)._.mvAvatar;
                    if (pMVar2 != (MVAvatarLocal *)0x0) {
                      MVAvatarLocal::MVAvatarLocal_SetAnimation
                                (pMVar2,StringLiteral_Swim,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  else if ((pMVar1->fields).isJumping == 0) {
                    fVar21 = (float10)func_?(&VStack_6);
                    pMVar2 = (pMVar1->fields)._.mvAvatar;
                    if (_UNK_? < (float)fVar21) {
                      if (pMVar2 != (MVAvatarLocal *)0x0) {
                        MVAvatarLocal::MVAvatarLocal_SetAnimation
                                  (pMVar2,StringLiteral_Walk,(MethodInfo *)0x0);
                        return;
                      }
                    }
                    else if (pMVar2 != (MVAvatarLocal *)0x0) {
                      MVAvatarLocal::MVAvatarLocal_SetAnimation
                                (pMVar2,StringLiteral_Idle,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  else {
                    pMVar2 = (pMVar1->fields)._.mvAvatar;
                    if (bVar4 != 0) {
                      if (pMVar2 == (MVAvatarLocal *)0x0) goto code_?;
                      MVAvatarLocal::MVAvatarLocal_SetAnimation
                                (pMVar2,StringLiteral_Idle,(MethodInfo *)0x0);
                      pMVar2 = (pMVar1->fields)._.mvAvatar;
                    }
                    if (pMVar2 != (MVAvatarLocal *)0x0) {
                      MVAvatarLocal::MVAvatarLocal_SetAnimation
                                (pMVar2,StringLiteral_Jump,(MethodInfo *)0x0);
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
code_?:
  func_?(0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_FrameUpdate
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatarLocal_WalkMode_HandleFocus(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)pAVar2,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
    AvatarMotor::AvatarMotor_UpdateFunction(pAVar2,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 == (MVAvatarLocal *)0x0) ||
      (this_00 = (pMVar1->fields)._._._.gameObject, this_00 == (GameObject *)0x0)) ||
     (this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), this_03 == (Transform *)0x0))
  goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     (&VStack_5,this_03,(MethodInfo *)0x0);
  uVar6 = pVVar4->y;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
  MVWorldObjectClientManager::MVWorldObjectClientManager_get_WorldBounds
            ((Bounds *)&stack0xffffffcc,this_04,(MethodInfo *)0x0);
  puVar7 = (undefined8 *)func_?();
  VStack_5._0_8_ = *puVar7;
  if ((float)uVar6 < VStack_5.y - _UNK_?) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pMVar8 = (pMVar1->fields)._.Health, pMVar8 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)
       ) goto code_?;
    (*(code *)(pMVar8->klass->vtable).set_Value.method)();
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar9 = (pMVar1->fields).interactableLocal, pAVar9 == (AvatarInteractable *)0x0))
    goto code_?;
    AvatarInteractable::AvatarInteractable_DieFromFalling(pAVar9,(MethodInfo *)0x0);
  }
  if (interactionMap == (InputToInGameAction *)0x0) goto code_?;
  bVar3 = SubscribableVariableBase`1[System::Boolean]::
          SubscribableVariableBase_1_System_Boolean__get_Value
                    ((SubscribableVariableBase_1_System_Boolean_ *)interactionMap,(MethodInfo *)0x0)
  ;
  if (bVar3 != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
    cVar10 = (*(code *)(pAVar2->klass->vtable).get_IsMovementLocked.method)();
    if (cVar10 == '\0') {
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      bVar3 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if (bVar3 == 0) {
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (this_01 = (pMVar1->fields).useInteractorHandler, this_01 == (UseInteractorHandler *)0x0)
           ) goto code_?;
        UseInteractorHandler::UseInteractorHandler_Use(this_01,(MethodInfo *)0x0);
      }
      else {
        if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
        MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
      }
    }
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (this_02 = (pMVar1->fields).pickupOwner, this_02 == (AvatarPickupOwner *)0x0))
  goto code_?;
  x = (Object_1 *)
      GamePointGainEffect::GamePointGainEffect_get_ID
                ((GamePointGainEffect *)this_02,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    MVAvatarLocal_WalkMode_HandlePickupUpdate(this,interactionMap,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar3 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
    bVar3 = AvatarMotor::AvatarMotor_IsStuck(pAVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pMVar8 = (pMVar1->fields)._.Health,
         pMVar8 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)) goto code_?;
      (*(code *)(pMVar8->klass->vtable).set_Value.method)();
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar9 = (pMVar1->fields).interactableLocal, pAVar9 == (AvatarInteractable *)0x0))
      goto code_?;
      AvatarInteractable::AvatarInteractable_DieFromBeingStuck(pAVar9,(MethodInfo *)0x0);
    }
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar3 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    bVar3 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar11 == (MainCameraManager *)0x0) ||
       (pMVar12 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar11,(MethodInfo *)0x0),
       pMVar12 == (MVCameraBase *)0x0)) goto code_?;
    iVar13 = (*(code *)(pMVar12->klass->vtable).__unknown.method)();
    if (iVar13 != 0x10) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar14 = (AvatarUIHandlerRemote *)
                  MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
       pAVar14 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
    pSVar15 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(pAVar14,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar11 == (MainCameraManager *)0x0) ||
       (pMVar12 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar11,(MethodInfo *)0x0),
       pMVar12 == (MVCameraBase *)0x0)) goto code_?;
    iVar13 = (*(code *)(pMVar12->klass->vtable).__unknown.method)();
    if (iVar13 != 0) goto code_?;
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar14 = (AvatarUIHandlerRemote *)
                  MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
       pAVar14 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
    pSVar15 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(pAVar14,(MethodInfo *)0x0);
  }
  if (pSVar15 != (ShieldBar *)0x0) {
    func_?();
    return;
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void HandleFocus() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleFocus
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 == (MainCameraManager *)0x0) ||
     (pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar1,(MethodInfo *)0x0),
     pMVar2 == (MVCameraBase *)0x0)) goto code_?;
  iVar3 = (*(code *)(pMVar2->klass->vtable).__unknown.method)();
  if (iVar3 == 6) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar4 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if (pIVar4 == (IPlayModeUI *)0x0) goto code_?;
    cVar5 = func_?(3,TypeInfo__IPlayModeUI,pIVar4);
    if (cVar5 == '\0') {
      pMVar6 = (this->fields)._.mvAvatar;
      if (((pMVar6 != (MVAvatarLocal *)0x0) &&
          (pAVar7 = (AvatarUIHandlerRemote *)
                     MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar6,(MethodInfo *)0x0),
          pAVar7 != (AvatarUIHandlerRemote *)0x0)) &&
         (pSVar8 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                              (pAVar7,(MethodInfo *)0x0), pSVar8 != (ShieldBar *)0x0)) {
        func_?(6,TypeInfo__IAvatarCameraController);
        return;
      }
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVCameraBase *)0x0)) {
    iVar3 = (*(code *)(pMVar2->klass->vtable).__unknown.method)();
    if (iVar3 == 6) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar4 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if (pIVar4 != (IPlayModeUI *)0x0) {
      cVar5 = func_?(3);
      if (cVar5 == '\0') {
        return;
      }
      pMVar6 = (this->fields)._.mvAvatar;
      if (((pMVar6 != (MVAvatarLocal *)0x0) &&
          (pAVar7 = (AvatarUIHandlerRemote *)
                     MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar6,(MethodInfo *)0x0),
          pAVar7 != (AvatarUIHandlerRemote *)0x0)) &&
         (pSVar8 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                              (pAVar7,(MethodInfo *)0x0), pSVar8 != (ShieldBar *)0x0)) {
        func_?(4,TypeInfo__IAvatarCameraController);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar1 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar1,(MethodInfo *)0x0);
          this_00 = (Component_1 *)func_?();
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if ((pMVar1 != (MainCameraManager *)0x0) &&
             (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pMVar1,(MethodInfo *)0x0),
             pTVar9 != (Transform *)0x0)) {
            pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&stack0xffffffec,pTVar9,(MethodInfo *)0x0);
            fVar11 = pQVar10->x;
            fVar12 = pQVar10->y;
            fVar13 = pQVar10->z;
            fVar14 = pQVar10->w;
            if ((this_00 != (Component_1 *)0x0) &&
               (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform(this_00,(MethodInfo *)0x0),
               pTVar9 != (Transform *)0x0)) {
              value.y = fVar12;
              value.x = fVar11;
              value.z = fVar13;
              value.w = fVar14;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar9,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HandlePickupUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandlePickupUpdate
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMVar1 = this;
  pMVar2 = (this->fields)._.mvAvatar;
  if (((pMVar2 != (MVAvatarLocal *)0x0) &&
      (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) &&
     (this_00 = (MvCharacterController *)
                GamePointGainEffect::GamePointGainEffect_get_ID
                          ((GamePointGainEffect *)pAVar3,(MethodInfo *)0x0),
     this_00 != (MvCharacterController *)0x0)) {
    bVar4 = MvCharacterController::MvCharacterController_get_IsGrounded(this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._.mvAvatar;
    this = (MVAvatarLocal_WalkMode *)((uint)bVar4 << 0x18);
    if ((pMVar2 != (MVAvatarLocal *)0x0) &&
       (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) {
      MVPickupOwner::MVPickupOwner_SetLineOfFireLocal((MVPickupOwner *)pAVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pMVar2 = (pMVar1->fields)._.mvAvatar;
        if ((pMVar2 == (MVAvatarLocal *)0x0) ||
           (pAVar3 = (pMVar2->fields).pickupOwner, interactionMap == (InputToInGameAction *)0x0))
        goto code_?;
        bVar4 = GoldRewardManager::GoldRewardManager_get_IsCountingDownGoldReward
                          ((GoldRewardManager *)interactionMap,(MethodInfo *)0x0);
        pMVar2 = (pMVar1->fields)._.mvAvatar;
        if ((pMVar2 == (MVAvatarLocal *)0x0) || (pAVar3 == (AvatarPickupOwner *)0x0))
        goto code_?;
        this = (MVAvatarLocal_WalkMode *)(pMVar2->fields)._.IsFiring;
        MVPickupOwner::MVPickupOwner_HandleFire
                  ((MVPickupOwner *)pAVar3,bVar4,(MVRuntimeDataVariable *)this,(MethodInfo *)0x0);
      }
      pMVar2 = (pMVar1->fields)._.mvAvatar;
      if (((pMVar2 != (MVAvatarLocal *)0x0) &&
          (pAVar3 = (pMVar2->fields).pickupOwner, interactionMap != (InputToInGameAction *)0x0)) &&
         (bVar4 = GoldRewardManager::GoldRewardManager_get_IsCountingDownGoldReward
                            ((GoldRewardManager *)interactionMap,(MethodInfo *)0x0),
         pAVar3 != (AvatarPickupOwner *)0x0)) {
        AvatarPickupOwner::AvatarPickupOwner_HandlePointing(pAVar3,bVar4,(MethodInfo *)0x0);
        pMVar2 = (pMVar1->fields)._.mvAvatar;
        if (((pMVar2 != (MVAvatarLocal *)0x0) &&
            (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) &&
           (piVar5 = (int *)GamePointGainEffect::GamePointGainEffect_get_ID
                                       ((GamePointGainEffect *)pAVar3,(MethodInfo *)0x0),
           piVar5 != (int *)0x0)) {
          iVar6 = (**(code **)(*piVar5 + 0x120))();
          if (iVar6 == 5) {
            return;
          }
          pMVar2 = (pMVar1->fields)._.mvAvatar;
          if (pMVar2 != (MVAvatarLocal *)0x0) {
            bVar4 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar2,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              pMVar2 = (pMVar1->fields)._.mvAvatar;
              if ((pMVar2 == (MVAvatarLocal *)0x0) ||
                 (woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0),
                 this_01 == (MVWorldObjectClientManager *)0x0)) goto code_?;
              id = MVWorldObjectClientManager::
                   MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                             (this_01,(int32_t)woID,(MethodInfo *)0x0);
              if (id == -1) {
                return;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this = (MVAvatarLocal_WalkMode *)
                     MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if ((MVWorldObjectClientManager *)this == (MVWorldObjectClientManager *)0x0)
              goto code_?;
              pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  ((MVWorldObjectClientManager *)this,id,(MethodInfo *)0x0);
              if (pMVar7 == (MVWorldObject *)0x0) {
                return;
              }
              bVar8 = (TypeInfo__MVJetPack->_1).naturalAligment;
              if (((pMVar7->klass->_1).naturalAligment < bVar8) ||
                 ((MVJetPack__Class *)(pMVar7->klass->_1).typeHierarchy[bVar8 - 1] !=
                  TypeInfo__MVJetPack)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              pMVar10 = (MVWorldObject *)0x0;
              if (bVar9) {
                pMVar10 = pMVar7;
              }
              if (pMVar10 == (MVWorldObject *)0x0) {
                return;
              }
            }
            pMVar2 = (pMVar1->fields)._.mvAvatar;
            if (((pMVar2 != (MVAvatarLocal *)0x0) &&
                (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) &&
               (piVar5 = (int *)GamePointGainEffect::GamePointGainEffect_get_ID
                                           ((GamePointGainEffect *)pAVar3,(MethodInfo *)0x0),
               piVar5 != (int *)0x0)) {
              cVar11 = (**(code **)(*piVar5 + 0x108))();
              if (cVar11 != '\0') {
                bVar4 = InputToInGameAction::InputToInGameAction_get_Holster
                                  (interactionMap,(MethodInfo *)0x0);
                if (this._3_1_ == '\0') {
                  if (bVar4 != 0) {
                    pMVar2 = (pMVar1->fields)._.mvAvatar;
                    if ((pMVar2 == (MVAvatarLocal *)0x0) ||
                       (pAVar12 = (pMVar2->fields).avatarEquipable, pAVar12 == (AvatarEquipable *)0x0)
                       ) goto code_?;
                    (*(code *)(pAVar12->klass->vtable).Holster.method)();
                  }
                }
                else if (bVar4 != 0) {
                  pMVar2 = (pMVar1->fields)._.mvAvatar;
                  if ((pMVar2 == (MVAvatarLocal *)0x0) ||
                     ((pMVar2->fields).avatarEquipable == (AvatarEquipable *)0x0))
                  goto code_?;
                  func_?();
                }
              }
              bVar4 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone
                                ((GoldRewardManager *)interactionMap,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                pMVar2 = (pMVar1->fields)._.mvAvatar;
                if ((pMVar2 == (MVAvatarLocal *)0x0) ||
                   (pAVar12 = (pMVar2->fields).avatarEquipable, pAVar12 == (AvatarEquipable *)0x0))
                goto code_?;
                (*(code *)(pAVar12->klass->vtable).Unequip.method)();
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void HandleStuck() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleStuck
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pMVar2 = (pMVar1->fields)._.Health, pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  {
    (*(code *)(pMVar2->klass->vtable).set_Value.method)();
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       ((pMVar1->fields).interactableLocal != (AvatarInteractable *)0x0)) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
        if (pMVar4 != (MVLocalPlayer *)0x0) {
          pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,(MethodInfo *)0x0);
          pDVar6 = GameMessages::GameMessages_MakePlayerKilledMessage
                             ((int32_t)pSVar5,(int32_t)pSVar5,PlayerKilledByType__Enum_Crushed,
                              (MethodInfo *)0x0);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                             ((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                      (pMVar7,MVGameMsgType__Enum_AvatarKilled,pDVar6,(MethodInfo *)0x0);
            pDVar6 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pSVar5 = (String *)func_?();
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame *)0x0) {
              pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
              if (pMVar4 != (MVLocalPlayer *)0x0) {
                ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                NamedThemeAttribute_1_UnityEngine_Color__get_Name
                          ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,(MethodInfo *)0x0);
                pCVar8 = (CrossPlatformInputManager_VirtualButton *)func_?();
                if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)pDVar6,pSVar5,pCVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  pBVar9 = TypeInfo__System__Byte;
                  pSVar5 = (String *)func_?();
                  pCVar8 = (CrossPlatformInputManager_VirtualButton *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)pDVar6,pSVar5,pCVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  pSVar5 = (String *)func_?();
                  pCVar8 = (CrossPlatformInputManager_VirtualButton *)
                            func_?(TypeInfo__MV__Common__PlayerKilledByType);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)pDVar6,pSVar5,pCVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                    func_?(TypeInfo__NotificationController);
                  }
                  NotificationController::NotificationController_OnNotificationReceived
                            (NotificationType__Enum_Kill,pDVar6,(MethodInfo *)0x0);
                  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pBVar9->_0).methods;
                  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
                    bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds
                            ::Api::NativeAdType]::
                            HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                      (this_00,0xe,
                                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                      );
                    if (bVar10 == 0) {
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                         ((MethodInfo *)0x0);
                      if (pMVar7 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_PostNotificationOperation
                                (pMVar7,NotificationType__Enum_Kill,pDVar6,(MethodInfo *)0x0);
                    }
                    this_01 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)
                              (pBVar9->_0).typeMetadataHandle;
                    if (this_01 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
                      System.Core.dll::System::Action`3[Single,Object,MV::Common::
                      PlayerKilledByType]::
                      Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
                                (this_01,1000.0,(Object *)0x0,PlayerKilledByType__Enum_Crushed,
                                 MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
                                );
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
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HandleWaterplane() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleWaterplane
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  pMVar1 = (this->fields)._.mvAvatar;
  if ((((pMVar1 != (MVAvatarLocal *)0x0) &&
       (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
       this_01 != (CelestialParam *)0x0)) &&
      (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
     && (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0),
        this_00 != (WaterPlaneManager *)0x0)) {
    fVar3 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                      (this_00,*pVVar2,(MethodInfo *)0x0);
    fVar4 = (this->fields).prevWaterProximity;
    fVar5 = (this->fields).swimStartProximity;
    if ((fVar5 <= fVar4) || (fVar3 < fVar5)) {
      if ((fVar4 <= fVar5) || (fVar5 <= fVar3)) goto code_?;
      pMVar1 = (this->fields)._.mvAvatar;
      animationState = StringLiteral_Walk;
    }
    else {
      pMVar1 = (this->fields)._.mvAvatar;
      animationState = StringLiteral_Swim;
    }
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,animationState,(MethodInfo *)0x0);
code_?:
      (this->fields).prevWaterProximity = fVar3;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsInJetpack() */

bool Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_IsInJetpack
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_00 = (this->fields)._.mvAvatar;
  if (this_00 != (MVAvatarLocal *)0x0) {
    woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar1,(int32_t)woID,(MethodInfo *)0x0);
      if (id != -1) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,id,(MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          bVar3 = (TypeInfo__MVJetPack->_1).naturalAligment;
          if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
             ((MVJetPack__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
              TypeInfo__MVJetPack)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          pMVar5 = (MVWorldObject *)0x0;
          if (bVar4) {
            pMVar5 = pMVar2;
          }
          if (pMVar5 != (MVWorldObject *)0x0) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void SetAnimationState(Vector3) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_SetAnimationState
               (MVAvatarLocal_WalkMode *this,Vector3 moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
    bVar3 = AvatarMotor::AvatarMotor_IsJumping(pAVar2,(MethodInfo *)0x0);
    (this->fields).isJumping = bVar3;
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
      bVar3 = AvatarMotor::AvatarMotor_IsAirJumping(pAVar2,(MethodInfo *)0x0);
      if ((this->fields).swimStartProximity <= (this->fields).prevWaterProximity) {
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Swim,(MethodInfo *)0x0);
          return;
        }
      }
      else if ((this->fields).isJumping == 0) {
        fVar4 = (float10)func_?();
        pMVar1 = (this->fields)._.mvAvatar;
        if (_UNK_? < (float)fVar4) {
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Walk,(MethodInfo *)0x0);
            return;
          }
        }
        else if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Idle,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pMVar1 = (this->fields)._.mvAvatar;
        if (bVar3 != 0) {
          if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Idle,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._.mvAvatar;
        }
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Jump,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVAvatarLocal+WalkMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode__ctor
               (MVAvatarLocal_WalkMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).swimStartProximity = 0.6;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._.mvAvatar = mvAvatar;
  (this->fields)._.modeTypes = 1;
  if (mvAvatar != (MVAvatarLocal *)0x0) {
    pAVar1 = (mvAvatar->fields).pickupOwner;
    if (pAVar1 != (AvatarPickupOwner *)0x0) {
      pMVar2 = (pAVar1->fields)._.onHandleFiring;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__MVAvatarLocal__WalkMode__OnHandleFiring_bool_,
                 (MethodInfo *)0x0);
      pMVar4 = (MVPickupOwner_OnHandleFiringDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pMVar2 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
      if (pMVar4 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
        if (pMVar4->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
          pMVar2 = pMVar4;
        }
        pAVar5 = (AvatarMotor_OnWallJumpDelegate__Class *)
                 TypeInfo__MVPickupOwner__OnHandleFiringDelegate;
        if (pMVar2 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
      }
      bVar6 = cRam_? == '\0';
      (pAVar1->fields)._.onHandleFiring = pMVar2;
      if (bVar6) {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      this_00 = (AvatarInputController *)func_?(TypeInfo__AvatarInputController);
      AvatarInputController::AvatarInputController__ctor(this_00,(MethodInfo *)0x0);
      (this->fields).avatarInputController = (IAvatarInputController *)this_00;
      this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)mvAvatar,(MethodInfo *)0x0);
      if (this_01 != (CelestialParam *)0x0) {
        object_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                              ((GameObject *)this_01,
                               AvatarSound_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarSound>__
                              );
        (this->fields).avatarSound = (AvatarSound *)object_00;
        pAVar7 = (mvAvatar->fields).avatarMotor;
        if (pAVar7 != (AvatarMotor *)0x0) {
          a = (pAVar7->fields).OnWallJump;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__AvatarMotor__OnWallJumpDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)object_00,MethodInfo__AvatarSound__HandleWallJump__,
                     (MethodInfo *)0x0);
          pMVar4 = (MVPickupOwner_OnHandleFiringDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)a,(Delegate *)pUVar3,(MethodInfo *)0x0);
          pMVar2 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
          if (pMVar4 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
            if ((AvatarMotor_OnWallJumpDelegate__Class *)pMVar4->klass ==
                TypeInfo__AvatarMotor__OnWallJumpDelegate) {
              pMVar2 = pMVar4;
            }
            pAVar5 = TypeInfo__AvatarMotor__OnWallJumpDelegate;
            if (pMVar2 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
          }
          (pAVar7->fields).OnWallJump = (AvatarMotor_OnWallJumpDelegate *)pMVar2;
          pAVar7 = (mvAvatar->fields).avatarMotor;
          if (pAVar7 != (AvatarMotor *)0x0) {
            a_00 = (pAVar7->fields).OnActiveBounce;
            object = (this->fields).avatarSound;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__AvatarMotor__OnActiveBounceDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)object,MethodInfo__AvatarSound__HandleActiveBounce__,
                       (MethodInfo *)0x0);
            pMVar4 = (MVPickupOwner_OnHandleFiringDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a_00,(Delegate *)pUVar3,(MethodInfo *)0x0);
            pMVar2 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
            if (pMVar4 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
code_?:
              (pAVar7->fields).OnActiveBounce = (AvatarMotor_OnActiveBounceDelegate *)pMVar2;
              return;
            }
            if ((AvatarMotor_OnActiveBounceDelegate__Class *)pMVar4->klass ==
                TypeInfo__AvatarMotor__OnActiveBounceDelegate) {
              pMVar2 = pMVar4;
            }
            pAVar5 = (AvatarMotor_OnWallJumpDelegate__Class *)
                     TypeInfo__AvatarMotor__OnActiveBounceDelegate;
            if (pMVar2 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  pMVar4 = extraout_ECX;
  pAVar5 = (AvatarMotor_OnWallJumpDelegate__Class *)extraout_EDX;
code_?:
  func_?(pMVar4,pAVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean get_IsSwimming() */

bool Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_get_IsSwimming
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  return (this->fields).swimStartProximity <= (this->fields).prevWaterProximity;
}

