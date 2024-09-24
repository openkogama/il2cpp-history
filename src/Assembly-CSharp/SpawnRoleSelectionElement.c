
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_AwaitSpawnThenClose
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&MethodInfo__SpawnRoleSelectionElement__Close_int_);
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    this_00 = (pMVar1->fields)._.spawnRolesManager;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__SpawnRoleSelectionElement__Close_int_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                (this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 CalculateTotalSpawnRoleCost(Int32) */

int32_t Assembly-CSharp.dll::SpawnRoleSelectionElement::
        SpawnRoleSelectionElement_CalculateTotalSpawnRoleCost
                  (SpawnRoleSelectionElement *this,int32_t spawnRoleId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
     (this_01 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,spawnRoleId,(MethodInfo *)0x0),
     this_01 == (MVAvatarSpawnRoleCreator *)0x0)) goto code_?;
  if (((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <=
       (this_01->klass->_1).naturalAligment) &&
     ((MVAvatarSpawnRoleCreator__Class *)
      (this_01->klass->_1).typeHierarchy
      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] ==
      TypeInfo__MVAvatarSpawnRoleCreator)) {
    this_02 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                        (this_01,(MethodInfo *)0x0);
    if (this_02 == (AttributeSettingsManager *)0x0) goto code_?;
    pKVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_02,(MethodInfo *)0x0);
    if (pKVar4 == (KogamaSettingWrapperBase *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment <= (pKVar4->klass->_1).naturalAligment) &&
       ((pKVar4->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      spawnRoleId = 0;
      if (pKVar4[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
        pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa0,
                            (Dictionary_2_System_UInt32_System_Object_ *)pKVar4[1].klass,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                           );
        uVar6 = *(undefined8 *)&(pDVar5->_current).value;
        uStack_1 = 1;
        while( true ) {
          bVar7 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                             &stack0xffffffb8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                            );
          if (bVar7 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                       ,(MethodInfo *)uVar6);
            *unaff_FS_OFFSET = uStack_3;
            return spawnRoleId;
          }
          if ((MethodInfo *)uVar6 == (MethodInfo *)0x0) break;
          iVar8 = func_?();
          if ((iVar8 == 0) || (piVar9 = (int *)func_?(), piVar9 == (int *)0x0))
          goto code_?;
          iVar8 = *piVar9;
          uVar10 = 0;
          if (*(ushort *)(iVar8 + 0xb6) != 0) {
            do {
              if (*(IAttributeSetting__Class **)(*(int *)(iVar8 + 0x58) + (uint)uVar10 * 8) ==
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 ) {
                puVar11 = (undefined4 *)
                         (iVar8 + (*(int *)(*(int *)(iVar8 + 0x58) + 4 + (uint)uVar10 * 8) + 0x18) *
                                  8);
                goto code_?;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(iVar8 + 0xb6));
          }
          puVar11 = (undefined4 *)func_?();
code_?:
          iVar8 = (*(code *)*puVar11)();
          spawnRoleId = spawnRoleId + iVar8;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  iVar13 = (*pcVar12)();
  return iVar13;
}


/* Boolean CanShowFreeTry() */

bool Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_CanShowFreeTry
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if ((this->fields).isSubscriber != 0) {
    return MVar1 != MVGameMode__Enum_Edit;
  }
  bVar2 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
  return bVar2 & MVar1 != MVGameMode__Enum_Edit;
}


/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_ChangeBackground
               (SpawnRoleSelectionElement *this,GamePassTier__Enum tier,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = (undefined1)tier == GamePassTier__Enum_Tier1;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar3 != ((undefined1)tier == GamePassTier__Enum_Tier1)) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar1,(MethodInfo *)0x0);
      if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier2)) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0x92,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar1,(MethodInfo *)0x0);
        if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier3)) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_Close
               (SpawnRoleSelectionElement *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___Close_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSelectionElement____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SpawnRoleSelectionElement____c);
  }
  callbackFunction = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__SpawnRoleSelectionElement____c___Close_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0 = callbackFunction;
    func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (in_stack_3->fields).maskMode = in_stack_4;
  if (in_stack_4 == 0) {
    pCVar5 = (in_stack_3->fields).mainCamera;
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar5,(in_stack_3->fields).cullingMask,(MethodInfo *)0x0);
      (in_stack_3->fields).blueModeEnabled = 0;
      MainCameraManager::MainCameraManager_RenderLogic
                (in_stack_3,(in_stack_3->fields).isLogicRendered,(MethodInfo *)0x0);
      return;
    }
  }
  else if (in_stack_4 == 1) {
    pCVar5 = (in_stack_3->fields).mainCamera;
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar5,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
      (in_stack_3->fields).blueModeEnabled = 1;
      return;
    }
  }
  else {
    if (in_stack_4 != 2) {
      return;
    }
    if ((in_stack_3->fields).mainCamera != (Camera *)0x0) {
      uStack7 = 0;
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandlePlayButtonVisibility() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement_HandlePlayButtonVisibility
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    if ((bVar2 < (this->fields).tierRequirement) &&
       ((pPVar1->fields).previewGamePassTier < (this->fields).tierRequirement)) {
      pGVar3 = (this->fields).playButton;
      if ((this->fields).tierRequirement == (uint8_t)(bVar2 + 1)) {
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pGVar3 = (this->fields).freeTryButton;
          bVar4 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,bVar4,(MethodInfo *)0x0);
            pGVar3 = (this->fields).lockedButton;
            bVar4 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,bVar4 ^ 1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pGVar3 = (this->fields).freeTryButton;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pGVar3 = (this->fields).lockedButton;
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  pGVar3 = (this->fields).playButton;
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    pGVar3 = (this->fields).freeTryButton;
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).lockedButton;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_HandleTeamSwitching
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  iVar1 = (this->fields).teamRequirement;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if (iVar1 == (pMVar3->fields)._._Team_k__BackingField) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_01,(this->fields).teamRequirement,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar2->fields).gameStatCounterManager;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          actorNr = (pMVar3->fields)._._ActorNr_k__BackingField;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             ((pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
              pMVar3 != (MVLocalPlayer *)0x0 && (this_00 != (GameStatCounterManager *)0x0)))) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_00,actorNr,(pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 != (MVNetworkGame *)0x0) &&
               (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
               pMVar3 != (MVLocalPlayer *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
              BindingRestrictions+TestBuilder+AndNode]::
              Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                        ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_
                          *)pMVar3,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                 pMVar3 != (MVLocalPlayer *)0x0)) {
                (pMVar3->fields)._._Team_k__BackingField = (this->fields).teamRequirement;
                return;
              }
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


/* Void Initialize(Int32, Int32, GamePassTier, MVTeam, UnityAction`1[System.Int32],
   UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_Initialize
               (SpawnRoleSelectionElement *this,int32_t spawnRoleIndex,int32_t woId,
               GamePassTier__Enum tierRequirement,MVTeam__Enum team,
               UnityAction_1_System_Int32_ *onSelectedCallback,
               UnityAction_1_System_Int32_ *onActivatedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__SpawnRoleSelectionElement__OnPressPlay__);
    cRam_? = '\x01';
  }
  (this->fields)._.spawnRoleIndex = spawnRoleIndex;
  (this->fields)._.onSelectedCallback = onSelectedCallback;
  (this->fields)._.woId = woId;
  func_?(&(this->fields)._.onSelectedCallback,onSelectedCallback);
  (this->fields)._.onActivatedCallback = onActivatedCallback;
  func_?(&(this->fields)._.onActivatedCallback,onActivatedCallback);
  (this->fields).tierRequirement = (undefined1)tierRequirement;
  (this->fields).teamRequirement = team;
  IStack_1.m_value =
       SpawnRoleSelectionElement_CalculateTotalSpawnRoleCost(this,woId,(MethodInfo *)0x0);
  pTVar2 = (this->fields).spawnRoleCostAmount;
  mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  if (pTVar2 == (Text *)0x0) {
code_?:
    func_?();
  }
  else {
    (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
    pTVar2 = (this->fields).spawnRoleCostAmount;
    pCVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                       ((Color *)&stack0xffffffe8,IStack_1.m_value,(MethodInfo *)0x0);
    if (pTVar2 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar2->klass->vtable).set_color.method)(pTVar2,pCVar3->r,pCVar3->g,pCVar3->b);
    pGVar4 = (this->fields).spawnRoleCostObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pGVar4 = (this->fields).moreInfoButton;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pNVar5 = (this->fields).spawnRoleCostFader;
    if (pNVar5 == (NotificationFade *)0x0) goto code_?;
    (pNVar5->fields).shouldHideWhenDone = 0;
    pNVar5 = (this->fields).moreInfoButtonFader;
    if (pNVar5 == (NotificationFade *)0x0) goto code_?;
    (pNVar5->fields).shouldHideWhenDone = 0;
    pGVar4 = (this->fields).backgroundTier1;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar4,(MethodInfo *)0x0);
    if ((bool)bVar6 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier1)) {
      pGVar4 = (this->fields).backgroundTier1;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,(undefined1)tierRequirement == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar4 = (this->fields).backgroundTier2;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar4,(MethodInfo *)0x0);
    if ((bool)bVar6 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier2)) {
      pGVar4 = (this->fields).backgroundTier2;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,(undefined1)tierRequirement == GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
    }
    pGVar4 = (this->fields).backgroundTier3;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar4,(MethodInfo *)0x0);
    if ((bool)bVar6 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier3)) {
      pGVar4 = (this->fields).backgroundTier3;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,(undefined1)tierRequirement == GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
    }
    SpawnRoleSelectionElement_HandlePlayButtonVisibility(this,(MethodInfo *)0x0);
    pCVar7 = (this->fields).continueButtonHandler;
    if (pCVar7 == (ContinueButtonHandler *)0x0) goto code_?;
    pAVar8 = (pCVar7->fields).OnClick;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__SpawnRoleSelectionElement__OnPressPlay__,
               (MethodInfo *)0x0);
    pAVar8 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      (pCVar7->fields).OnClick = (Action *)0x0;
code_?:
      func_?();
      bVar6 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      (this->fields).isSubscriber = bVar6;
      pIVar9 = (this->fields).tryFreeButtonIcon;
      if (pIVar9 != (Image *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pIVar9,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
          return;
        }
        pIVar9 = (this->fields).tryFreeButtonIcon;
        if ((this->fields).isSubscriber == 0) {
          pTVar10 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
          if (pTVar10 == (TogglePreviewState *)0x0) goto code_?;
          value = (pTVar10->fields).freeTry == 0;
        }
        else {
          value = true;
        }
        if (pIVar9 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar9,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pAVar11 = (Action *)0x0;
    if (pAVar8->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar8;
    }
    if (pAVar11 == (Action *)0x0) goto code_?;
    (pCVar7->fields).OnClick = pAVar11;
    pAVar11 = (Action *)0x0;
    if (pAVar8->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar8;
    }
    if (pAVar11 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnDestroy
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__SpawnRoleSelectionElement__Close_int_);
    func_?(&MethodInfo__SpawnRoleSelectionElement__OnPressPlay__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_02 = (Action__Class *)(this->fields)._.spawnRolePreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this_02,(MethodInfo *)0x0);
  if ((this->fields).awaitingSpawn == 0) {
code_?:
    pCVar1 = (this->fields).continueButtonHandler;
    if (pCVar1 == (ContinueButtonHandler *)0x0) goto code_?;
    pAVar2 = (pCVar1->fields).OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__SpawnRoleSelectionElement__OnPressPlay__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAStack3 == (Action *)0x0) {
      (pCVar1->fields).OnClick = (Action *)0x0;
code_?:
      func_?();
      return;
    }
    pAVar2 = (Action *)0x0;
    if (pAStack3->klass == TypeInfo__System__Action) {
      pAVar2 = pAStack3;
    }
    pAStack4 = TypeInfo__System__Action;
    if (pAVar2 == (Action *)0x0) goto code_?;
    (pCVar1->fields).OnClick = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAStack3->klass == TypeInfo__System__Action) {
      pAVar2 = pAStack3;
    }
    this_02 = TypeInfo__System__Action;
    if (pAVar2 != (Action *)0x0) goto code_?;
  }
  else {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar5 != (MVLocalPlayer *)0x0) {
      this_02 = (Action__Class *)(pMVar5->fields)._.spawnRolesManager;
      this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,MethodInfo__SpawnRoleSelectionElement__Close_int_,
                 (MethodInfo *)0x0);
      if (this_02 != (Action__Class *)0x0) {
        SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                  ((SpawnRolesManager *)this_02,(Action_1_Int32_ *)this_00,(MethodInfo *)0x0);
        goto code_?;
      }
    }
code_?:
    pAStack3 = (Action *)func_?();
  }
  pAStack4 = this_02;
  pAStack3 = (Action *)func_?();
  pAStack4 = extraout_ECX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement_OnPlayerPlanetDataUpdated
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c__DisplayClass44_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSelectionElement____c__DisplayClass44_0);
    func_?(&TypeInfo__SpawnRoleSelectionElement____c);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar2 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pSVar3,
                 MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0 = pEVar2;
      func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0,pEVar2);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar4 == (PlayerPlanetData *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((pPVar4->fields).previewGamePassTier < (this->fields).tierRequirement) {
      return;
    }
    if ((this->fields).haveShownFreeTryUnlock != 0) {
      return;
    }
    method_00 = TypeInfo__SpawnRoleSelectionElement____c__DisplayClass44_0;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar6 = pGVar1;
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pEVar2 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1;
      if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pGVar1 = pGVar6;
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SpawnRoleSelectionElement____c);
          pGVar1 = pGVar6;
        }
        pSVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pSVar3,
                   MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1 = pEVar2;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1,pEVar2);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      original = (this->fields).spawnRoleUnlockPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar7 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                         );
      if (value != (Object *)0x0) {
        value[1].klass = pOVar7;
        func_?(value + 1);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__SpawnRoleSelectionElement____c__DisplayClass44_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (value[1].klass != (Object__Class *)0x0) {
          SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Initialize
                    ((SpawnRoleUnlockedPopupController *)value[1].klass,
                     (uint)(this->fields).tierRequirement,0,1,(this->fields)._.woId,
                     (MethodInfo *)0x0);
          (this->fields).haveShownFreeTryUnlock = 1;
          return;
        }
      }
      goto code_?;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar8;
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPressFreePlayAd() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressFreePlayAd
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSelectionElement____c);
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      callbackFunction = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SpawnRoleSelectionElement____c);
        }
        object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 = callbackFunction;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(
                                 TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar3 != (IAdManager *)0x0) {
          pIVar4 = pIVar3->klass;
          uVar5 = 0;
          uVar6._0_1_ = (pIVar4->_1).rank;
          uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
          if (uVar6 != 0) {
            do {
              if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar7 = &(&(pIVar3->klass->vtable).RequestRewardedAd)
                           [pIVar3->klass->interfaceOffsets[uVar5].offset].method;
                goto code_?;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar6);
          }
          this_00 = (UnityAction_1_System_Int32Enum_ *)&UNK_?;
          ppMVar7 = (MethodInfo **)func_?(pIVar3);
code_?:
          (*(code *)*ppMVar7)(pIVar3,this_00);
          return;
        }
      }
      else {
        SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPressFreePlaySubscriber() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement_OnPressFreePlaySubscriber
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSelectionElement____c);
    cRam_? = '\x01';
  }
  this_00 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_00 == (TogglePreviewState *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SpawnRoleSelectionElement____c);
        }
        pSVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pSVar4,
                   MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1 = pEVar3;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1,pEVar3);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_01,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar6 = pGVar2;
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pGVar2 = pGVar6;
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pGVar2 = pGVar6;
        }
        pSVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pSVar4,
                   MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0 = pEVar3;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).isWaitingForFreeTryTier = 1;
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPressLockedPlay() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressLockedPlay
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
    func_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    uVar3 = (pPVar2->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      if (((byte)(uVar3 + 1) < (this->fields).tierRequirement) &&
         ((byte)((pPVar2->fields).previewGamePassTier + 1) < (this->fields).tierRequirement)) {
        pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uVar5 = (*(code *)(this->klass->vtable).get_Tier.method)
                          (this,(this->klass->vtable).Initialize.methodPtr);
        uStack_1 = (uVar5 & 0xff) - 1;
      }
      else {
        pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uStack_1 = (*(code *)(this->klass->vtable).get_Tier.method)
                             (this,(this->klass->vtable).Initialize.methodPtr);
        uStack_1 = uStack_1 & 0xff;
      }
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
      pSVar4 = mscorlib.dll::System::String::String_Format(pSVar4,arg0,(MethodInfo *)0x0);
      this_00 = (this->fields).lockedTierBubble;
      if (this_00 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate(this_00,pSVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressPlay
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
  goto code_?;
  iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
  if (1 < iVar2) {
    iVar3 = (this->fields).teamRequirement;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    if (iVar3 != (pMVar4->fields)._._Team_k__BackingField) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_03,(this->fields).teamRequirement,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      this_01 = (pMVar1->fields).gameStatCounterManager;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
      iVar2 = (pMVar4->fields)._._ActorNr_k__BackingField;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if ((pMVar4 == (MVLocalPlayer *)0x0) || (this_01 == (GameStatCounterManager *)0x0))
      goto code_?;
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveTeamScoreOnActorLeave
                (this_01,iVar2,(pMVar4->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
      BindingRestrictions+TestBuilder+AndNode]::
      Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)
                 pMVar4,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
      (pMVar4->fields)._._Team_k__BackingField = (this->fields).teamRequirement;
    }
  }
  iVar2 = (this->fields)._.woId;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar4 != (MVLocalPlayer *)0x0) &&
     (pSVar5 = (pMVar4->fields).spawnRoleDataMediator, pSVar5 != (SpawnRoleDataMediator *)0x0)) {
    bVar6 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                      (iVar2,(SpawnRoleVariable_1_System_Int32_ *)(pSVar5->fields).woId,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
      FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                ((MethodInfo *)0x0);
    }
    if (bVar6 == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      (this->fields).awaitingSpawn = 1;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar4 != (MVLocalPlayer *)0x0) {
        this_02 = (pMVar4->fields)._.spawnRolesManager;
        this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_04,(Object *)this,MethodInfo__SpawnRoleSelectionElement__Close_int_,
                   (MethodInfo *)0x0);
        if (this_02 != (SpawnRolesManager *)0x0) {
          SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                    (this_02,(Action_1_Int32_ *)this_04,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar4 != (MVLocalPlayer *)0x0) {
              MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(pMVar4,iVar2,(MethodInfo *)0x0);
              MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        MethodInfo__SpawnRoleSelectionElement____c___Close_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__SpawnRoleSelectionElement____c);
        cRam_? = '\x01';
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        root = (GameObject *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___Close_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      this_05 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_05 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_05,MaskMode__Enum_Default,(MethodInfo *)0x0);
        SpawnRoleSelectionElement_StartPlaying(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSelctionHighlight() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnSelctionHighlight
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  this_00 = (this->fields)._.spawnRolePreviewer;
  (this->fields)._.isSelected = 1;
  if ((this_00 == (SpawnRolePreviewer *)0x0) ||
     (SpawnRolePreviewer::SpawnRolePreviewer_SetRenderGrey(this_00,0,(MethodInfo *)0x0),
     (this->fields)._.spawnRolePreviewer == (SpawnRolePreviewer *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_2 + 0x3c);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if ((*(int *)(in_stack_2 + 0x3c) != 0) &&
     (pBVar4 = *(BoneAnimation **)(*(int *)(in_stack_2 + 0x3c) + 0x18),
     pBVar4 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_set_FallBackWalkSpeed(pBVar4,0.7,(MethodInfo *)0x0);
    if (*(int *)(in_stack_2 + 0x3c) != 0) {
      pBVar4 = *(BoneAnimation **)(*(int *)(in_stack_2 + 0x3c) + 0x18);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_01 != (MVNetworkGame *)0x0) &&
         (iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                            (this_01,(MethodInfo *)0x0), pBVar4 != (BoneAnimation *)0x0)) {
        BoneAnimation::BoneAnimation_StartAnimation
                  (pBVar4,StringLiteral_Walk,iVar5 + -500,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSelected() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnSelected
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnRolePreviewer;
  (this->fields)._.isSelected = 1;
  if (pSVar1 != (SpawnRolePreviewer *)0x0) {
    SpawnRolePreviewer::SpawnRolePreviewer_SetRenderGrey(pSVar1,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._.spawnRolePreviewer;
    if (pSVar1 != (SpawnRolePreviewer *)0x0) {
      SpawnRolePreviewer::SpawnRolePreviewer_StartActiveAnimation(pSVar1,(MethodInfo *)0x0);
      pGVar2 = (this->fields).spawnRoleCostObject;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields).moreInfoButton;
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
          pNVar3 = (this->fields).playButtonFader;
          if (pNVar3 != (NotificationFade *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pNVar3,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,1,(MethodInfo *)0x0);
              pNVar3 = (this->fields).spawnRoleCostFader;
              if (pNVar3 != (NotificationFade *)0x0) {
                NotificationFade::NotificationFade_Activate(pNVar3,(MethodInfo *)0x0);
                pNVar3 = (this->fields).moreInfoButtonFader;
                if (pNVar3 != (NotificationFade *)0x0) {
                  NotificationFade::NotificationFade_Activate(pNVar3,(MethodInfo *)0x0);
                  if ((this->fields).playButtonFader != (NotificationFade *)0x0) {
                    *(undefined4 *)(in_stack_4 + 0x24) =
                         *(undefined4 *)(in_stack_4 + 0x18);
                    *(undefined1 *)(in_stack_4 + 0x1c) = 1;
                    if (*(CanvasGroup **)(in_stack_4 + 0x10) != (CanvasGroup *)0x0) {
                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                (*(CanvasGroup **)(in_stack_4 + 0x10),0.0,(MethodInfo *)0x0);
                      *(undefined4 *)(in_stack_4 + 0x20) = 0;
                      return;
                    }
                    func_?();
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnShowSkillMenu() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnShowSkillMenu
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c__DisplayClass28_0___OnShowSkillMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSelectionElement____c__DisplayClass28_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleSelectionElement____c__DisplayClass28_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).skillMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__SpawnRoleSelectionElement____c__DisplayClass28_0___OnShowSkillMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (value[1].klass != (Object__Class *)0x0) {
      SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_Initialize
                ((SpawnRoleSelectionSkillMenu *)value[1].klass,(this->fields)._.woId,
                 (uint)(this->fields).tierRequirement,(this->fields)._.spawnRolePreviewObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUnSelected() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnUnSelected
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnRolePreviewer;
  (this->fields)._.isSelected = 0;
  if (pSVar1 != (SpawnRolePreviewer *)0x0) {
    SpawnRolePreviewer::SpawnRolePreviewer_SetRenderGrey(pSVar1,1,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._.spawnRolePreviewer;
    if (pSVar1 != (SpawnRolePreviewer *)0x0) {
      SpawnRolePreviewer::SpawnRolePreviewer_StartInactiveAnimation(pSVar1,(MethodInfo *)0x0);
      pGVar2 = (this->fields).spawnRoleCostObject;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields).moreInfoButton;
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          this_00 = (this->fields).playButtonFader;
          if (this_00 != (NotificationFade *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_PreviewTier
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSelectionElement____c);
    cRam_? = '\x01';
  }
  this_00 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_00 == (TogglePreviewState *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SpawnRoleSelectionElement____c);
        }
        pSVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pSVar4,
                   MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1 = pEVar3;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1,pEVar3);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_01,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar6 = pGVar2;
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pGVar2 = pGVar6;
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pGVar2 = pGVar6;
        }
        pSVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pSVar4,
                   MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0 = pEVar3;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).isWaitingForFreeTryTier = 1;
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_RewardedAdCallback
               (SpawnRoleSelectionElement *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSelectionElement____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  RVar1 = RewardedAdResult__Enum_RewardUnlocked;
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    RVar1 = result;
  }
  switch(RVar1) {
  case RewardedAdResult__Enum_ErrorClient:
  case RewardedAdResult__Enum_ErrorInternal:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    callbackFunction = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar2 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pSVar2,
                 MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1 = callbackFunction;
      ppEVar3 = &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1;
code_?:
      func_?(ppEVar3,callbackFunction);
    }
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  case RewardedAdResult__Enum_RewardUnlocked:
    SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    callbackFunction = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar2 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pSVar2,
                 MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0 = callbackFunction;
      ppEVar3 = &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0;
      goto code_?;
    }
    break;
  default:
    goto code_?;
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
code_?:
code_?:
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_ShowAd
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&
                    MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSelectionElement____c);
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      callbackFunction = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SpawnRoleSelectionElement____c);
        }
        object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 = callbackFunction;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(
                                 TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar3 != (IAdManager *)0x0) {
          pIVar4 = pIVar3->klass;
          uVar5 = 0;
          uVar6._0_1_ = (pIVar4->_1).rank;
          uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
          if (uVar6 != 0) {
            do {
              if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar7 = &(&(pIVar3->klass->vtable).RequestRewardedAd)
                           [pIVar3->klass->interfaceOffsets[uVar5].offset].method;
                goto code_?;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar6);
          }
          this_00 = (UnityAction_1_System_Int32Enum_ *)&UNK_?;
          ppMVar7 = (MethodInfo **)func_?(pIVar3);
code_?:
          (*(code *)*ppMVar7)(pIVar3,this_00);
          return;
        }
      }
      else {
        SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_StartPlaying
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode == 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar1 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar1->fields).gameMode != 0) {
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
            (IEditModeUI *)0x0) goto code_?;
        cVar2 = func_?();
        if (cVar2 == '\0') {
          return;
        }
      }
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 != (GameEventManager *)0x0) &&
         (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
         pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__8
                  ((RewardedAd *)pGVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      func_?(4);
      pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (pSVar5->fields).SpawnRoleModeTypeWrapper,
         this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar6 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar3 != (GameEventManager *)0x0) &&
           (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
           pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                    ((RewardedAd *)pGVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  uVar7 = func_?(&stack0xfffffff4);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateButtonUI() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_UpdateButtonUI
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    if ((bVar2 < (this->fields).tierRequirement) &&
       ((pPVar1->fields).previewGamePassTier < (this->fields).tierRequirement)) {
      pGVar3 = (this->fields).playButton;
      if ((this->fields).tierRequirement == (uint8_t)(bVar2 + 1)) {
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pGVar3 = (this->fields).freeTryButton;
          bVar4 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,bVar4,(MethodInfo *)0x0);
            pGVar3 = (this->fields).lockedButton;
            bVar4 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,bVar4 ^ 1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pGVar3 = (this->fields).freeTryButton;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pGVar3 = (this->fields).lockedButton;
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  pGVar3 = (this->fields).playButton;
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    pGVar3 = (this->fields).freeTryButton;
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).lockedButton;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

