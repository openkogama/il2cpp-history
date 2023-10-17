
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
    if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
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
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (this_01 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,spawnRoleId,(MethodInfo *)0x0),
     this_01 != (MVAvatarSpawnRoleCreator *)0x0)) {
    if (((this_01->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth) ||
       ((MVAvatarSpawnRoleCreator__Class *)
        (this_01->klass->_1).typeHierarchy
        [(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      func_?();
    }
    else {
      this_02 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (AttributeSettingsManager *)0x0) {
        pKVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                 AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                           (this_02,(MethodInfo *)0x0);
        if (pKVar4 == (KogamaSettingWrapperBase *)0x0) {
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        if (((pKVar4->klass->_1).typeHierarchyDepth <
             (
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
             ->_1).typeHierarchyDepth) ||
           ((pKVar4->klass->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
             ->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           )) goto code_?;
        spawnRoleId = 0;
        if (pKVar4[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
          pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              &stack0xffffffa0,
                              (Dictionary_2_System_Object_System_Object_ *)pKVar4[1].klass,
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
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
            if (*(ushort *)(iVar8 + 0xb2) != 0) {
              do {
                if (*(IAttributeSetting__Class **)(*(int *)(iVar8 + 0x58) + (uint)uVar10 * 8) ==
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   ) {
                  puVar11 = (undefined4 *)
                           (*(int *)(*(int *)(iVar8 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xbc +
                           iVar8);
                  goto code_?;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(iVar8 + 0xb2));
            }
            puVar11 = (undefined4 *)func_?();
code_?:
            iVar8 = (*(code *)*puVar11)();
            spawnRoleId = spawnRoleId + iVar8;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
code_?:
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
                  (pGVar1,0x62,(MethodInfo *)0x0);
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__SpawnRoleSelectionElement____c___Close_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0 = callbackFunction;
    func_?();
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
  if (pMVar1 != (MainCameraManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    (in_stack_2->fields).maskMode = in_stack_3;
    if (in_stack_3 == 0) {
      pCVar4 = (in_stack_2->fields).mainCamera;
      if (pCVar4 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar4,(in_stack_2->fields).cullingMask,(MethodInfo *)0x0);
        (in_stack_2->fields).blueModeEnabled = 0;
        MainCameraManager::MainCameraManager_RenderLogic
                  (in_stack_2,(in_stack_2->fields).isLogicRendered,(MethodInfo *)0x0);
        return;
      }
    }
    else if (in_stack_3 == 1) {
      pCVar4 = (in_stack_2->fields).mainCamera;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
      if (pCVar4 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar4,1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
        (in_stack_2->fields).blueModeEnabled = 1;
        return;
      }
    }
    else {
      if (in_stack_3 != 2) {
        return;
      }
      if ((in_stack_2->fields).mainCamera != (Camera *)0x0) {
        uStack6 = 0;
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        (*pcRam_?)();
        return;
      }
    }
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
                        (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
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
              mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
              Stack_1_T_Enumerator_System_Object__Dispose
                        ((Stack_1_T_Enumerator_System_Object_ *)pMVar3,(MethodInfo *)0x0);
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
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2);
    pTVar2 = (this->fields).spawnRoleCostAmount;
    pCVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                       ((Color *)&stack0xffffffe8,IStack_1.m_value,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_color.methodPtr)(pTVar2,pCVar3->r,pCVar3->g,pCVar3->b);
      pGVar4 = (this->fields).spawnRoleCostObject;
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        pGVar4 = (this->fields).moreInfoButton;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          pNVar5 = (this->fields).spawnRoleCostFader;
          if (pNVar5 != (NotificationFade *)0x0) {
            (pNVar5->fields).shouldHideWhenDone = 0;
            pNVar5 = (this->fields).moreInfoButtonFader;
            if (pNVar5 != (NotificationFade *)0x0) {
              (pNVar5->fields).shouldHideWhenDone = 0;
              pGVar4 = (this->fields).backgroundTier1;
              if (pGVar4 != (GameObject *)0x0) {
                bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar4,(MethodInfo *)0x0);
                if ((bool)bVar6 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier1)) {
                  pGVar4 = (this->fields).backgroundTier1;
                  if (pGVar4 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,(undefined1)tierRequirement == GamePassTier__Enum_Tier1,
                             (MethodInfo *)0x0);
                }
                pGVar4 = (this->fields).backgroundTier2;
                if (pGVar4 != (GameObject *)0x0) {
                  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar4,(MethodInfo *)0x0);
                  if ((bool)bVar6 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier2)) {
                    pGVar4 = (this->fields).backgroundTier2;
                    if (pGVar4 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,(undefined1)tierRequirement == GamePassTier__Enum_Tier2,
                               (MethodInfo *)0x0);
                  }
                  pGVar4 = (this->fields).backgroundTier3;
                  if (pGVar4 != (GameObject *)0x0) {
                    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_activeSelf(pGVar4,(MethodInfo *)0x0);
                    if ((bool)bVar6 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier3)) {
                      pGVar4 = (this->fields).backgroundTier3;
                      if (pGVar4 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,(undefined1)tierRequirement == GamePassTier__Enum_Tier3,
                                 (MethodInfo *)0x0);
                    }
                    SpawnRoleSelectionElement_HandlePlayButtonVisibility(this,(MethodInfo *)0x0);
                    pCVar7 = (this->fields).continueButtonHandler;
                    if (pCVar7 != (ContinueButtonHandler *)0x0) {
                      pAVar8 = (pCVar7->fields).OnClick;
                      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                      if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                        NavMesh_OnNavMeshPreUpdate__ctor
                                  (this_00,(Object *)this,
                                   MethodInfo__SpawnRoleSelectionElement__OnPressPlay__,
                                   (MethodInfo *)0x0);
                        pAVar8 = (Action *)
                                 mscorlib.dll::System::Delegate::Delegate_Combine
                                           ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0
                                           );
                        if (pAVar8 == (Action *)0x0) {
                          (pCVar7->fields).OnClick = (Action *)0x0;
                        }
                        else {
                          pAVar9 = (Action *)0x0;
                          if (pAVar8->klass == TypeInfo__System__Action) {
                            pAVar9 = pAVar8;
                          }
                          if (pAVar9 == (Action *)0x0) goto code_?;
                          (pCVar7->fields).OnClick = pAVar9;
                          pAVar9 = (Action *)0x0;
                          if (pAVar8->klass == TypeInfo__System__Action) {
                            pAVar9 = pAVar8;
                          }
                          if (pAVar9 == (Action *)0x0) goto code_?;
                        }
                        func_?();
                        bVar6 = MVClientSettings::MVClientSettings_get_IsSubscriber
                                          ((MethodInfo *)0x0);
                        (this->fields).isSubscriber = bVar6;
                        pIVar10 = (this->fields).tryFreeButtonIcon;
                        if (pIVar10 != (Image *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                    ((Behaviour *)pIVar10,0,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          if (TypeInfo__GamePassesManager->static_fields->
                              _GamePassesActive_k__BackingField == 0) {
                            return;
                          }
                          pIVar10 = (this->fields).tryFreeButtonIcon;
                          if ((this->fields).isSubscriber == 0) {
                            pTVar11 = GamePassesManager::GamePassesManager_get_TogglePreviewState
                                                ((MethodInfo *)0x0);
                            if (pTVar11 == (TogglePreviewState *)0x0) goto code_?;
                            value = (pTVar11->fields).freeTry == 0;
                          }
                          else {
                            value = true;
                          }
                          if (pIVar10 != (Image *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                            Behaviour_set_enabled((Behaviour *)pIVar10,value,(MethodInfo *)0x0);
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
code_?:
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
  obj = (this->fields)._.spawnRolePreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  if ((this->fields).awaitingSpawn == 0) {
code_?:
    pCVar1 = (this->fields).continueButtonHandler;
    if (pCVar1 != (ContinueButtonHandler *)0x0) {
      pAVar2 = (pCVar1->fields).OnClick;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__SpawnRoleSelectionElement__OnPressPlay__,
                   (MethodInfo *)0x0);
        pAVar2 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar2,(Delegate *)this_02,(MethodInfo *)0x0);
        uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
        if (pAVar2 == (Action *)0x0) {
          (pCVar1->fields).OnClick = (Action *)0x0;
          ppAStack4 = &(pCVar1->fields).OnClick;
          pAStack5 = (Action *)0x0;
          func_?();
          return;
        }
        pAVar6 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar2;
        }
        if (pAVar6 != (Action *)0x0) {
          (pCVar1->fields).OnClick = pAVar6;
          uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
          pAStack5 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAStack5 = pAVar2;
          }
          if (pAStack5 != (Action *)0x0) {
            ppAStack4 = &(pCVar1->fields).OnClick;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  else {
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar7 != (MVLocalPlayer *)0x0) {
      this_00 = (pMVar7->fields)._.spawnRolesManager;
      this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
      if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,MethodInfo__SpawnRoleSelectionElement__Close_int_,
                   (MethodInfo *)0x0);
        if (this_00 != (SpawnRolesManager *)0x0) {
          SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                    (this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  _ppAStack00000010 = uVar3;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement_OnPlayerPlanetDataUpdated
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  this_00 = this;
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
  if ((this->fields).isWaitingForFreeTryTier == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    if ((pPVar1->fields).previewGamePassTier < (this_00->fields).tierRequirement) {
      return;
    }
    if ((this_00->fields).haveShownFreeTryUnlock != 0) {
      return;
    }
    value = (Object *)func_?();
    if (value == (Object *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)this);
    pAVar2 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this_00,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1;
      if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        pEVar4 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1 = pEVar4;
        pGVar3 = (GameObject *)&UNK_?;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      original = (this_00->fields).spawnRoleUnlockPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar5 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                         );
      value[1].klass = pOVar5;
      func_?();
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__SpawnRoleSelectionElement____c__DisplayClass44_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (value[1].klass != (Object__Class *)0x0) {
          SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Initialize
                    ((SpawnRoleUnlockedPopupController *)value[1].klass,
                     (uint)(this_00->fields).tierRequirement,0,1,(this_00->fields)._.woId,
                     (MethodInfo *)0x0);
          (this_00->fields).haveShownFreeTryUnlock = 1;
          return;
        }
      }
      goto code_?;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar2;
    }
    if (pAVar6 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar6;
    pAVar6 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar2;
    }
    if (pAVar6 != (Action *)0x0) goto code_?;
  }
  else {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0;
    if (pEVar4 != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
code_?:
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      (this_00->fields).isWaitingForFreeTryTier = 0;
      goto code_?;
    }
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    this = (SpawnRoleSelectionElement *)TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9
    ;
    pEVar4 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    if (pEVar4 != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)this,
                 MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0 = pEVar4;
      func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0);
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 = callbackFunction;
        func_?();
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
        if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_00,(Object *)this,
                     MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar3 != (IAdManager *)0x0) {
            uVar4 = 0;
            uVar5 = (pIVar3->klass->_1).interface_offsets_count;
            if (uVar5 != 0) {
              do {
                if (pIVar3->klass->interfaceOffsets[uVar4].interfaceType ==
                    (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                  pVVar6 = &(pIVar3->klass->vtable).RequestRewardedAd +
                           pIVar3->klass->interfaceOffsets[uVar4].offset;
                  goto code_?;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar5);
            }
            this_00 = (UnityAction_1_System_Int32Enum_ *)&UNK_?;
            pVVar6 = (VirtualInvokeData *)func_?(pIVar3);
code_?:
            (*pVVar6->methodPtr)(pIVar3,this_00);
            return;
          }
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
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
code_?:
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1 = pEVar3;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1,pEVar3);
        goto code_?;
      }
      goto code_?;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_01,(MethodInfo *)0x0);
    pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0;
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
code_?:
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        (this->fields).isWaitingForFreeTryTier = 1;
        return;
      }
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)0x0,
                   MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0 = pEVar3;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0,pEVar3);
        goto code_?;
      }
      goto code_?;
    }
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
        uVar5 = (*(this->klass->vtable).get_Tier.methodPtr)
                          (this,(this->klass->vtable).get_Tier.method);
        uStack_1 = (uVar5 & 0xff) - 1;
      }
      else {
        pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uStack_1 = (*(this->klass->vtable).get_Tier.methodPtr)
                             (this,(this->klass->vtable).get_Tier.method);
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
      mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
      Stack_1_T_Enumerator_System_Object__Dispose
                ((Stack_1_T_Enumerator_System_Object_ *)pMVar4,(MethodInfo *)0x0);
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
        if (this_04 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          iVar2 = 0;
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
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
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
  x = *(Object_1 **)(in_stack_2 + 0x38);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if ((*(int *)(in_stack_2 + 0x38) != 0) &&
     (pBVar4 = *(BoneAnimation **)(*(int *)(in_stack_2 + 0x38) + 0x14),
     pBVar4 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_set_FallBackWalkSpeed(pBVar4,0.7,(MethodInfo *)0x0);
    if (*(int *)(in_stack_2 + 0x38) != 0) {
      pBVar4 = *(BoneAnimation **)(*(int *)(in_stack_2 + 0x38) + 0x14);
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
                    *(undefined4 *)(in_stack_4 + 0x20) =
                         *(undefined4 *)(in_stack_4 + 0x14);
                    *(undefined1 *)(in_stack_4 + 0x18) = 1;
                    if (*(CanvasGroup **)(in_stack_4 + 0xc) != (CanvasGroup *)0x0) {
                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                (*(CanvasGroup **)(in_stack_4 + 0xc),0.0,(MethodInfo *)0x0);
                      *(undefined4 *)(in_stack_4 + 0x1c) = 0;
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
  value = (Object *)func_?(TypeInfo__SpawnRoleSelectionElement____c__DisplayClass28_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).skillMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__SpawnRoleSelectionElement____c__DisplayClass28_0___OnShowSkillMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
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
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
code_?:
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1 = pEVar3;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1,pEVar3);
        goto code_?;
      }
      goto code_?;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_01,(MethodInfo *)0x0);
    pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0;
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
code_?:
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        (this->fields).isWaitingForFreeTryTier = 1;
        return;
      }
      if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)0x0,
                   MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0 = pEVar3;
        func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0,pEVar3);
        goto code_?;
      }
      goto code_?;
    }
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_RewardedAdCallback
               (SpawnRoleSelectionElement *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
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
    func_?();
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
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1;
    if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) goto code_?;
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pSVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
    pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
code_?:
      uVar5 = func_?();
      iVar6 = (int)((ulonglong)uVar5 >> 0x20);
      in_AF = 9 < ((byte)uVar5 & 0xf) | in_AF;
      uVar7 = CONCAT31((int3)((ulonglong)uVar5 >> 8),(byte)uVar5 + in_AF * -6) & 0xffffff0f;
      uVar8 = (ushort)(uVar7 >> 0x10);
      bVar9 = (byte)uVar7;
      cVar10 = (char)((ulonglong)uVar5 >> 8) - in_AF;
      pcVar11 = (char *)((int)&pGVar2[0x7415a9d].klass + 3);
      *pcVar11 = *pcVar11 + (char)((ulonglong)uVar5 >> 0x28) + in_AF;
      in_AF = 9 < bVar9 | in_AF;
      bVar12 = bVar9 + in_AF * -6 & 0xf;
      pcVar11 = (char *)(iVar6 + 0x60);
      *pcVar11 = *pcVar11 + (char)extraout_ECX + in_AF;
      bVar13 = 9 < bVar12 | in_AF;
      uVar7 = CONCAT31((int3)(((uint)uVar8 << 0x10) >> 8),bVar12 + bVar13 * -6) & 0xffffff0f;
      pcVar11 = (char *)(CONCAT22((short)(uVar7 >> 0x10),
                                 CONCAT11((cVar10 - in_AF) - bVar13,(char)uVar7)) + 0x3f);
      *pcVar11 = *pcVar11 + (char)pSVar4 + bVar13;
      in((short)((ulonglong)uVar5 >> 0x20));
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>,
                        extraout_ECX,pGVar2,0,&stack0xfffffffc,&stack0xfffffff8,
                        CONCAT22((short)((uint)pSVar4 >> 0x10),CONCAT11(0x5f,(char)pSVar4)),iVar6
                        ,extraout_ECX,CONCAT22(uVar8,CONCAT11(cVar10,bVar9)));
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
      pTVar14 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
      if (pTVar14 != (TogglePreviewState *)0x0) {
        bVar15 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                          (pTVar14,(MethodInfo *)0x0);
        if (bVar15 == 0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SpawnRoleSelectionElement____c);
          }
          pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0;
          if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
            if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SpawnRoleSelectionElement____c);
            }
            pSVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
            pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                    );
            if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pSVar4,
                       MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 = pEVar3;
            func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0,
                            pEVar3);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
        pTVar14 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar14 != (TogglePreviewState *)0x0) {
          if ((pTVar14->fields).freeTry == 0) {
            pIVar16 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            this_00 = (UnityAction_1_System_Int32Enum_ *)
                      func_?(
                                     TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                     );
            if ((this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) &&
               (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
                UnityAction_1_System_Int32Enum___ctor
                          (this_00,(Object *)this,
                           MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                           ,(MethodInfo *)0x0), pIVar16 != (IAdManager *)0x0)) {
              uVar17 = 0;
              uVar8 = (pIVar16->klass->_1).interface_offsets_count;
              if (uVar8 != 0) {
                do {
                  if (pIVar16->klass->interfaceOffsets[uVar17].interfaceType ==
                      (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                    pVVar18 = &(pIVar16->klass->vtable).RequestRewardedAd +
                              pIVar16->klass->interfaceOffsets[uVar17].offset;
                    goto code_?;
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar8);
              }
              pVVar18 = (VirtualInvokeData *)
                        func_?(pIVar16,TypeInfo__Assets__Scripts__AdIntegration__IAdManager
                                        ,6);
code_?:
              (*pVVar18->methodPtr)(pIVar16,this_00,6,pVVar18->method);
              return;
            }
          }
          else {
            SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
            pTVar14 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0)
            ;
            if (pTVar14 != (TogglePreviewState *)0x0) {
              (pTVar14->fields).freeTry = 0;
              return;
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
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pSVar4,
               MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1 = pEVar3;
    ppEVar20 = &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1;
    break;
  case RewardedAdResult__Enum_RewardUnlocked:
    SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
  case RewardedAdResult__Enum_ErrorTimeout:
code_?:
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0;
    if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) goto code_?;
    if ((TypeInfo__SpawnRoleSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pSVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
    pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pSVar4,
               MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0 = pEVar3;
    ppEVar20 = &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0;
    break;
  default:
    goto code_?;
  }
  func_?(ppEVar20,pEVar3);
code_?:
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
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
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 = callbackFunction;
        func_?();
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
        if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_00,(Object *)this,
                     MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar3 != (IAdManager *)0x0) {
            uVar4 = 0;
            uVar5 = (pIVar3->klass->_1).interface_offsets_count;
            if (uVar5 != 0) {
              do {
                if (pIVar3->klass->interfaceOffsets[uVar4].interfaceType ==
                    (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                  pVVar6 = &(pIVar3->klass->vtable).RequestRewardedAd +
                           pIVar3->klass->interfaceOffsets[uVar4].offset;
                  goto code_?;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar5);
            }
            this_00 = (UnityAction_1_System_Int32Enum_ *)&UNK_?;
            pVVar6 = (VirtualInvokeData *)func_?(pIVar3);
code_?:
            (*pVVar6->methodPtr)(pIVar3,this_00);
            return;
          }
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
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      this = (SpawnRoleSelectionElement *)&UNK_?;
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
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
        RewardedInterstitialAd__RegisterAdEvents_m__1
                  ((RewardedInterstitialAd *)pGVar4,(Object *)0x0,unaff_retaddr,(MethodInfo *)this);
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
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
          RewardedInterstitialAd__RegisterAdEvents_m__2
                    ((RewardedInterstitialAd *)pGVar4,(Object *)0x0,unaff_retaddr,(MethodInfo *)this
                    );
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
                        (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
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

