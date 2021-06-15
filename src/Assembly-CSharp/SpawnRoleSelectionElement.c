
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_AwaitSpawnThenClose
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    this_01 = (SpawnRolesManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
              TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,(MethodInfo *)0x0)
    ;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__SpawnRoleSelectionElement__Close_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    if (this_01 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                (this_01,(Action_1_Int32_ *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_7 = (undefined4 *)&stack0xffffffa0, puStack_4 = &stack0xffffffa0,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_7 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar8 = (MVAvatarSpawnRoleCreator *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,spawnRoleId,(MethodInfo *)0x0),
     pMVar8 != (MVAvatarSpawnRoleCreator *)0x0)) {
    bVar9 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((pMVar8->klass->_1).naturalAligment < bVar9) ||
       ((MVAvatarSpawnRoleCreator__Class *)(pMVar8->klass->_1).typeHierarchy[bVar9 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    this_01 = (MVAvatarSpawnRoleCreator *)0x0;
    if (bVar10) {
      this_01 = pMVar8;
    }
    if (this_01 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    this_02 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                        (this_01,(MethodInfo *)0x0);
    if (this_02 != (AttributeSettingsManager *)0x0) {
      pSVar11 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                *)MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                            (this_02,(MethodInfo *)0x0);
      if (pSVar11 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)0x0) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      bVar9 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((pSVar11->klass->_1).naturalAligment < bVar9) ||
         ((pSVar11->klass->_1).typeHierarchy[bVar9 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)0x0;
      if (bVar10) {
        this_03 = pSVar11;
      }
      if (this_03 ==
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) goto code_?;
      spawnRoleId = 0;
      this_04 = (Dictionary_2_WinningConditionType_System_Object_ *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          (this_03,(MethodInfo *)0x0);
      if (this_04 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
        Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                   &stack0xffffffac,this_04,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                  );
        uStack_1 = 0;
        while( true ) {
          cVar12 = func_?();
          if (cVar12 == '\0') {
            *puStack_7 = 0x7c;
            uStack_1 = 0xffffffff;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return spawnRoleId;
          }
          LevelRewardsManager::LevelRewardsManager_get_NextReward
                    ((LevelRewardsManager *)&stack0xffffffc0,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                    );
          uStack_6 = CONCAT44(MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                               ,&uStack_6);
          iVar13 = func_?();
          if (iVar13 == 0) goto code_?;
          iVar14 = func_?(iVar13);
          if ((iVar14 == 0) ||
             (piVar15 = (int *)func_?(iVar13), piStack_16 = piVar15, piVar15 == (int *)0x0))
          break;
          iStack_17 = *piVar15;
          uVar18 = 0;
          if (*(ushort *)(iStack_17 + 0xb6) != 0) {
            do {
              if (*(IAttributeSetting__Class **)(*(int *)(iStack_17 + 0x58) + (uint)uVar18 * 8) ==
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 ) {
                puVar19 = (undefined4 *)
                          (iStack_17 + 0xc0 +
                          *(int *)(*(int *)(iStack_17 + 0x58) + 4 + (uint)uVar18 * 8) * 8);
                goto code_?;
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *(ushort *)(iStack_17 + 0xb6));
          }
          puVar19 = (undefined4 *)
                    func_?(piVar15,
                                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                   );
code_?:
          iVar13 = (*(code *)*puVar19)(piVar15);
          spawnRoleId = spawnRoleId + iVar13;
        }
        func_?(iVar13);
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  iVar21 = (*pcVar20)();
  return iVar21;
}


/* Boolean CanShowFreeTry() */

bool Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_CanShowFreeTry
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,unaff_retaddr);
  bVar3 = 0;
  if (MVar1 != MVGameMode__Enum_Edit) {
    bVar3 = bVar2;
  }
  return bVar3;
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
                  (pGVar1,0x42,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_Close
               (SpawnRoleSelectionElement *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__SpawnRoleSelectionElement___Close_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
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
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
        func_?();
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar2 = (pPVar1->fields).gamePassTier;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar3 = (this->fields).tierRequirement;
    if ((bVar2 < bVar3) && ((pPVar1->fields).previewGamePassTier < bVar3)) {
      pGVar4 = (this->fields).playButton;
      if (bVar3 == (byte)(bVar2 + 1)) {
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          pGVar4 = (this->fields).freeTryButton;
          bVar5 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,bVar5,(MethodInfo *)0x0);
            pGVar4 = (this->fields).lockedButton;
            bVar5 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,bVar5 == 0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        pGVar4 = (this->fields).freeTryButton;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          pGVar4 = (this->fields).lockedButton;
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  pGVar4 = (this->fields).playButton;
  if (pGVar4 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,1,(MethodInfo *)0x0);
    pGVar4 = (this->fields).freeTryButton;
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pGVar4 = (this->fields).lockedButton;
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_HandleTeamSwitching
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IKogamaSetting *)(this->fields).teamRequirement;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,(MethodInfo *)0x0);
    if (pIVar1 == pIVar4) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_00,(this->fields).teamRequirement,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_01 = (GameStatCounterManager *)
                  DayNightCycle::DayNightCycle_get_CurrentStarsParam
                            ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          actorNr = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar3,(MethodInfo *)0x0)
          ;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             ((pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
              pMVar3 != (MVLocalPlayer *)0x0 &&
              (pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                  ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,
                                   (MethodInfo *)0x0), this_01 != (GameStatCounterManager *)0x0))))
          {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_01,(int32_t)actorNr,(MVTeam__Enum)pIVar1,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 != (MVNetworkGame *)0x0) &&
               (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
               pMVar3 != (MVLocalPlayer *)0x0)) {
              MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)pMVar3,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                 pMVar3 != (MVLocalPlayer *)0x0)) {
                UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
                ObjectPool_1_System_Object__set_countAll
                          ((ObjectPool_1_System_Object_ *)pMVar3,(this->fields).teamRequirement,
                           (MethodInfo *)0x0);
                return;
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


/* Void Initialize(Int32, Int32, GamePassTier, MVTeam, UnityAction`1[System.Int32],
   UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_Initialize
               (SpawnRoleSelectionElement *this,int32_t spawnRoleIndex,int32_t woId,
               GamePassTier__Enum tierRequirement,MVTeam__Enum team,
               UnityAction_1_System_Int32_ *onSelectedCallback,
               UnityAction_1_System_Int32_ *onActivatedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Initialize
            ((DefaultSpawnRoleSelectionElement *)this,spawnRoleIndex,woId,tierRequirement,team,
             onSelectedCallback,onActivatedCallback,(MethodInfo *)0x0);
  uVar1 = (uint8_t)tierRequirement;
  (this->fields).tierRequirement = uVar1;
  (this->fields).teamRequirement = team;
  SpawnRoleSelectionElement_CalculateTotalSpawnRoleCost(this,woId,(MethodInfo *)0x0);
  pTVar2 = (this->fields).spawnRoleCostAmount;
  func_?(&stack0xfffffff8,0);
  if (pTVar2 != (Text *)0x0) {
    skillCost = &UNK_?;
    (*(code *)(pTVar2->klass->vtable).set_text.method)();
    pTVar2 = (this->fields).spawnRoleCostAmount;
    SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
              ((Color *)&stack0xffffffe8,(int32_t)skillCost,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_color.method)();
      pGVar3 = (this->fields).spawnRoleCostObject;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pGVar3 = (this->fields).moreInfoButton;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pNVar4 = (this->fields).spawnRoleCostFader;
          if (pNVar4 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_set_ShouldHideWhenDone(pNVar4,0,(MethodInfo *)0x0);
            pNVar4 = (this->fields).moreInfoButtonFader;
            if (pNVar4 != (NotificationFade *)0x0) {
              NotificationFade::NotificationFade_set_ShouldHideWhenDone(pNVar4,0,(MethodInfo *)0x0);
              pGVar3 = (this->fields).backgroundTier1;
              if (pGVar3 != (GameObject *)0x0) {
                bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar3,(MethodInfo *)0x0);
                if ((bool)bVar5 != (uVar1 == 1)) {
                  pGVar3 = (this->fields).backgroundTier1;
                  if (pGVar3 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,uVar1 == 1,(MethodInfo *)0x0);
                }
                pGVar3 = (this->fields).backgroundTier2;
                if (pGVar3 != (GameObject *)0x0) {
                  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar3,(MethodInfo *)0x0);
                  if ((bool)bVar5 != (uVar1 == 2)) {
                    pGVar3 = (this->fields).backgroundTier2;
                    if (pGVar3 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar3,uVar1 == 2,(MethodInfo *)0x0);
                  }
                  pGVar3 = (this->fields).backgroundTier3;
                  if (pGVar3 != (GameObject *)0x0) {
                    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_activeSelf(pGVar3,(MethodInfo *)0x0);
                    if ((bool)bVar5 != (uVar1 == 3)) {
                      pGVar3 = (this->fields).backgroundTier3;
                      if (pGVar3 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,uVar1 == 3,(MethodInfo *)0x0);
                    }
                    SpawnRoleSelectionElement_HandlePlayButtonVisibility(this,(MethodInfo *)0x0);
                    pCVar6 = (this->fields).continueButtonHandler;
                    if (pCVar6 != (ContinueButtonHandler *)0x0) {
                      pAVar7 = (pCVar6->fields).OnClick;
                      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (this_00,(Object *)this,
                                 MethodInfo__SpawnRoleSelectionElement__OnPressPlay__,
                                 (MethodInfo *)0x0);
                      pAVar8 = (Action *)
                               mscorlib.dll::System::Delegate::Delegate_Combine
                                         ((Delegate *)pAVar7,(Delegate *)this_00,(MethodInfo *)0x0)
                      ;
                      pAVar7 = (Action *)0x0;
                      if (pAVar8 != (Action *)0x0) {
                        if (pAVar8->klass == TypeInfo__System__Action) {
                          pAVar7 = pAVar8;
                        }
                        if (pAVar7 == (Action *)0x0) goto code_?;
                      }
                      (pCVar6->fields).OnClick = pAVar7;
                      pIVar9 = (this->fields).buttonAdImage;
                      if (pIVar9 != (Image *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)pIVar9,0,(MethodInfo *)0x0);
                        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                          func_?();
                        }
                        bVar5 = GamePassesManager::GamePassesManager_get_GamePassesActive
                                          ((MethodInfo *)0x0);
                        if (bVar5 == 0) {
                          return;
                        }
                        pIVar9 = (this->fields).buttonAdImage;
                        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                          func_?();
                        }
                        this_01 = (GoldRewardManager *)
                                  GamePassesManager::GamePassesManager_get_TogglePreviewState
                                            ((MethodInfo *)0x0);
                        if ((this_01 != (GoldRewardManager *)0x0) &&
                           (bVar5 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone
                                              (this_01,(MethodInfo *)0x0), pIVar9 != (Image *)0x0))
                        {
                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                    ((Behaviour *)pIVar9,bVar5 == 0,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnDestroy
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_OnDestroy
            ((DefaultSpawnRoleSelectionElement *)this,(MethodInfo *)0x0);
  if ((this->fields).awaitingSpawn == 0) {
code_?:
    pCVar1 = (this->fields).continueButtonHandler;
    if (pCVar1 != (ContinueButtonHandler *)0x0) {
      pAVar2 = (pCVar1->fields).OnClick;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__SpawnRoleSelectionElement__OnPressPlay__,
                 (MethodInfo *)0x0);
      pAStack4 =
           (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action *)0x0;
      if (pAStack4 == (Action *)0x0) {
code_?:
        (pCVar1->fields).OnClick = pAVar2;
        return;
      }
      if (pAStack4->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack4;
      }
      pAStack5 = TypeInfo__System__Action;
      if (pAVar2 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      this_01 = (SpawnRolesManager *)
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                          ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,
                           (MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__SpawnRoleSelectionElement__Close_int_,
                 MethodInfo__System__Action<int>__Action_System__Object__void__);
      if (this_01 != (SpawnRolesManager *)0x0) {
        SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                  (this_01,(Action_1_Int32_ *)pUVar3,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?(0);
  pAStack4 = extraout_ECX;
  pAStack5 = extraout_EDX;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache6 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__SpawnRoleSelectionElement___OnPlayerPlanetDataUpdated_m__6_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache6 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache6;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar4 != (PlayerPlanetData *)0x0) {
    if (((pPVar4->fields).previewGamePassTier < (this->fields).tierRequirement) ||
       ((this->fields).haveShownFreeTryUnlock != 0)) {
      return;
    }
    method_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(method_00,(MethodInfo *)method_00);
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
    uVar7 = CONCAT44(TypeInfo__System__Action,pAVar6);
    pAVar5 = (Action *)0x0;
    if (pAVar6 != (Action *)0x0) {
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar6;
      }
      if (pAVar5 == (Action *)0x0) goto code_?;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache7 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__SpawnRoleSelectionElement___OnPlayerPlanetDataUpdated_m__7_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache7 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache7;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pSVar8 = (this->fields).spawnRoleUnlockPopupPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pWVar9 = (WinningConditionDebriefing *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pSVar8,
                        SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                       );
    if (method_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
      (method_00->fields)._this = pWVar9;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)&UNK_?,
                 MethodInfo__SpawnRoleSelectionElement___OnPlayerPlanetDataUpdated_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pSVar8 = _UNK_?;
      unlockedTier = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                     TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                     TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                               ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,
                                (MethodInfo *)0x0);
      if (pSVar8 != (SpawnRoleUnlockedPopupController *)0x0) {
        SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Initialize
                  (pSVar8,(GamePassTier__Enum)unlockedTier,0,1,(int32_t)unlockedTier,
                   (MethodInfo *)0x0);
        (this->fields).haveShownFreeTryUnlock = 1;
        return;
      }
    }
  }
  uVar7 = func_?();
code_?:
  func_?(uVar7);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPressFreePlay() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressFreePlay
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__SpawnRoleSelectionElement___ShowAd_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    this_00 = (GoldRewardManager *)
              GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (this_00 != (GoldRewardManager *)0x0) {
      bVar2 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,unaff_EBX,
                   MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)pUVar3);
        if (pIVar4 != (IAdManager *)0x0) {
          pIVar5 = pIVar4->klass;
          uVar6 = 0;
          uVar7._0_1_ = (pIVar5->_1).rank;
          uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
          if (uVar7 != 0) {
            do {
              if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar8 = &(&(pIVar4->klass->vtable).RequestRewardedAd)
                           [pIVar5->interfaceOffsets[uVar6].offset].method;
                goto code_?;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar7);
          }
          ppMVar8 = (MethodInfo **)func_?();
code_?:
          (*(code *)*ppMVar8)();
          return;
        }
      }
      else {
        SpawnRoleSelectionElement_PreviewTier((SpawnRoleSelectionElement *)0x0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          Assets::Scripts::GamePasses::TogglePreviewState::
          TogglePreviewState_set_FreeTryWithoutAdAvailable(pTVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPressLockedPlay() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressLockedPlay
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      bVar3 = (this->fields).tierRequirement;
      if (((byte)(uVar2 + 1) < bVar3) && ((byte)((pPVar1->fields).previewGamePassTier + 1) < bVar3))
      {
        pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).get_Tier.method)
                  (this,(this->klass->vtable).Initialize.methodPtr);
      }
      else {
        pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).get_Tier.method)
                  (this,(this->klass->vtable).Initialize.methodPtr);
      }
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Format(pSVar4,arg0,(MethodInfo *)0x0);
      this_00 = (this->fields).lockedTierBubble;
      if (this_00 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate(this_00,pSVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressPlay
               (SpawnRoleSelectionElement *this,MethodInfo *method)

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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_01 != (SkyParam *)0x0))
  {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0);
    if (1 < iVar2) {
      SpawnRoleSelectionElement_HandleTeamSwitching(this,(MethodInfo *)0x0);
    }
    b = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
        TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
        TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                  ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
    avatarSpawnerWoId = b;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = (PrefabPool *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((this_02 != (PrefabPool *)0x0) &&
       (this_03 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0),
       this_03 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)) {
      a = (SpawnRoleVariable_1_System_Int32_ *)
          System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    (this_03,(MethodInfo *)0x0);
      bVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                        ((int32_t)b,a,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                        );
      if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimePressPlayController);
      }
      bVar4 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                        ((MethodInfo *)0x0);
      if (bVar4 == 0) {
        if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
          func_?(TypeInfo__FirstTimePressPlayController);
        }
        FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                  ((MethodInfo *)0x0);
      }
      if (bVar3 == 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        (this->fields).awaitingSpawn = 1;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar5 != (MVLocalPlayer *)0x0) {
          this_04 = (SpawnRolesManager *)
                    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                    TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                              ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)pMVar5,
                               (MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<int>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__SpawnRoleSelectionElement__Close_int_,
                     MethodInfo__System__Action<int>__Action_System__Object__void__);
          if (this_04 != (SpawnRolesManager *)0x0) {
            SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                      (this_04,(Action_1_Int32_ *)pUVar6,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
               pMVar5 != (MVLocalPlayer *)0x0)) {
              MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                        (pMVar5,(int32_t)avatarSpawnerWoId,(MethodInfo *)0x0);
              pIVar7 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                                 ((MethodInfo *)0x0);
              if (pIVar7 != (ILockCursorManager *)0x0) {
                func_?(4,TypeInfo__ILockCursorManager,pIVar7,1);
                return;
              }
            }
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)0x0,
                     MethodInfo__SpawnRoleSelectionElement___Close_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar6;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_05 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_05 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_set_CamMaskMode
                    (this_05,MaskMode__Enum_Default,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pIVar7 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                             ((MethodInfo *)0x0);
          if (pIVar7 != (ILockCursorManager *)0x0) {
            func_?(3,TypeInfo__ILockCursorManager,pIVar7,1);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                ((MethodInfo *)0x0);
            if (pGVar8 != (GameSessionData *)0x0) {
              if ((pGVar8->fields).gameMode == 0) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                    ((MethodInfo *)0x0);
                if (pGVar8 == (GameSessionData *)0x0) goto code_?;
                if ((pGVar8->fields).gameMode != 0) {
                  return;
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pIVar9 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI
                                    ((MethodInfo *)0x0);
                if (pIVar9 == (IEditModeUI *)0x0) goto code_?;
                cVar10 = func_?(1,TypeInfo__IEditModeUI,pIVar9);
                if (cVar10 == '\0') {
                  return;
                }
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if ((pGVar11 != (GameEventManager *)0x0) &&
                 (this_00 = (pGVar11->fields).AvatarCommandsPlayMode,
                 this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                ShowingAdsPopup::ShowingAdsPopup_OnSkip
                          ((ShowingAdsPopup *)this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_2 + 0x38);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if ((*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38) !=
       (KogamaSettingNumericBase_1_System_Single_ *)0x0) &&
     (pBVar4 = (BoneAnimation *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38),
                          (MethodInfo *)0x0), pBVar4 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_set_FallBackWalkSpeed(pBVar4,0.7,(MethodInfo *)0x0);
    if (*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38) !=
        (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
      pBVar4 = (BoneAnimation *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38),
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
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
  DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_OnSelected
            ((DefaultSpawnRoleSelectionElement *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields).spawnRoleCostObject;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).moreInfoButton;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pNVar2 = (this->fields).playButtonFader;
      if (pNVar2 != (NotificationFade *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pNVar2,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          pNVar2 = (this->fields).spawnRoleCostFader;
          if (pNVar2 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_Activate(pNVar2,(MethodInfo *)0x0);
            pNVar2 = (this->fields).moreInfoButtonFader;
            if (pNVar2 != (NotificationFade *)0x0) {
              NotificationFade::NotificationFade_Activate(pNVar2,(MethodInfo *)0x0);
              if ((this->fields).playButtonFader != (NotificationFade *)0x0) {
                *(undefined4 *)(in_stack_3 + 0x20) =
                     *(undefined4 *)(in_stack_3 + 0x14);
                *(undefined1 *)(in_stack_3 + 0x18) = 1;
                if (*(CanvasGroup **)(in_stack_3 + 0xc) != (CanvasGroup *)0x0) {
                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                            (*(CanvasGroup **)(in_stack_3 + 0xc),0.0,(MethodInfo *)0x0);
                  *(undefined4 *)(in_stack_3 + 0x1c) = 0;
                  return;
                }
                func_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnShowSkillMenu() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnShowSkillMenu
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__SpawnRoleSelectionElement___OnShowSkillMenu_c__AnonStorey0);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  pSVar1 = (this->fields).skillMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar2 = (WinningConditionDebriefing *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                     );
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_00->fields)._this = pWVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__SpawnRoleSelectionElement___OnShowSkillMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pSVar1 = (SpawnRoleSelectionSkillMenu *)(this_00->fields)._this;
    spawnRoleId = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                            ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0
                            );
    if (pSVar1 != (SpawnRoleSelectionSkillMenu *)0x0) {
      SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_Initialize
                (pSVar1,(int32_t)spawnRoleId,(uint)(this->fields).tierRequirement,
                 (this->fields)._.spawnRolePreviewObject,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUnSelected() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnUnSelected
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_OnUnSelected
            ((DefaultSpawnRoleSelectionElement *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields).spawnRoleCostObject;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).moreInfoButton;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).playButtonFader;
      if (this_00 != (NotificationFade *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_PreviewTier
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  this_01 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_01 != (TogglePreviewState *)0x0) {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache5 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__SpawnRoleSelectionElement___PreviewTier_m__5_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache5 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache5;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar2,(BaseEventData *)0x0,pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                (this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = TypeInfo__System__Action;
      pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_00,
                 MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,
                 (MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar5 = (Action *)0x0;
      if (pAVar6 == (Action *)0x0) {
code_?:
        TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache4 ==
            (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)0x0,
                     MethodInfo__SpawnRoleSelectionElement___PreviewTier_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache4 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
        }
        pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache4;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar2,(BaseEventData *)0x0,pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        *(undefined1 *)((int)&(this_00->_1).element_size + 1) = 1;
        return;
      }
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar6;
      }
      if (pAVar5 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_RewardedAdCallback
               (SpawnRoleSelectionElement *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if ((pIVar1 == (IEditModeUI *)0x0) && (RewardedAdResult__Enum_RewardNotUnlocked < result)) {
    return;
  }
  switch(result) {
  case RewardedAdResult__Enum_ErrorClient:
  case RewardedAdResult__Enum_ErrorInternal:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache3 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__SpawnRoleSelectionElement___RewardedAdCallback_m__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache3 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    callbackFunction = TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache3;
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  default:
    SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache2 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__SpawnRoleSelectionElement___RewardedAdCallback_m__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache2 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    callbackFunction = TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache2;
  }
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
code_?:
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_ShowAd
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__SpawnRoleSelectionElement___ShowAd_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__SpawnRoleSelectionElement->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    this_00 = (GoldRewardManager *)
              GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (this_00 != (GoldRewardManager *)0x0) {
      bVar2 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,unaff_EBX,
                   MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)pUVar3);
        if (pIVar4 != (IAdManager *)0x0) {
          pIVar5 = pIVar4->klass;
          uVar6 = 0;
          uVar7._0_1_ = (pIVar5->_1).rank;
          uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
          if (uVar7 != 0) {
            do {
              if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar8 = &(&(pIVar4->klass->vtable).RequestRewardedAd)
                           [pIVar5->interfaceOffsets[uVar6].offset].method;
                goto code_?;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar7);
          }
          ppMVar8 = (MethodInfo **)func_?();
code_?:
          (*(code *)*ppMVar8)();
          return;
        }
      }
      else {
        SpawnRoleSelectionElement_PreviewTier((SpawnRoleSelectionElement *)0x0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          Assets::Scripts::GamePasses::TogglePreviewState::
          TogglePreviewState_set_FreeTryWithoutAdAvailable(pTVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_StartPlaying
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar2 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar2->fields).gameMode != 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if (pIVar3 == (IEditModeUI *)0x0) goto code_?;
        cVar4 = func_?(1,TypeInfo__IEditModeUI);
        if (cVar4 == '\0') {
          return;
        }
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar5 != (GameEventManager *)0x0) &&
         (this_00 = (pGVar5->fields).AvatarCommandsPlayMode,
         this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateButtonUI() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_UpdateButtonUI
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar2 = (pPVar1->fields).gamePassTier;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar3 = (in_stack_4->fields).tierRequirement;
    if ((bVar2 < bVar3) && ((pPVar1->fields).previewGamePassTier < bVar3)) {
      pGVar5 = (in_stack_4->fields).playButton;
      if (bVar3 == (byte)(bVar2 + 1)) {
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
          pGVar5 = (in_stack_4->fields).freeTryButton;
          bVar6 = SpawnRoleSelectionElement_CanShowFreeTry(in_stack_4,(MethodInfo *)0x0);
          if (pGVar5 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,bVar6,(MethodInfo *)0x0);
            pGVar5 = (in_stack_4->fields).lockedButton;
            bVar6 = SpawnRoleSelectionElement_CanShowFreeTry(in_stack_4,(MethodInfo *)0x0);
            if (pGVar5 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,bVar6 == 0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,0,(MethodInfo *)0x0);
        pGVar5 = (in_stack_4->fields).freeTryButton;
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
          pGVar5 = (in_stack_4->fields).lockedButton;
          if (pGVar5 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  pGVar5 = (in_stack_4->fields).playButton;
  if (pGVar5 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,1,(MethodInfo *)0x0);
    pGVar5 = (in_stack_4->fields).freeTryButton;
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pGVar5 = (in_stack_4->fields).lockedButton;
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <Close>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement__Close_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPlayerPlanetDataUpdated>m__6(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated_m__6
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPlayerPlanetDataUpdated>m__7(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated_m__7
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PreviewTier>m__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement__PreviewTier_m__4
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(x->klass->vtable).Create_1)[iVar4].method)
                    (x,(&(x->klass->vtable).Create_2)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,2);
    (*(code *)*puVar5)(x,puVar5[1]);
    return;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <PreviewTier>m__5(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement__PreviewTier_m__5
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>m__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement__RewardedAdCallback_m__2
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_The_video_was_canceled__Your_Fre,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Video_canceled,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>m__3(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement__RewardedAdCallback_m__3
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
          ppMVar5 = &(&(pIVar1->klass->vtable).get_RewardedAdNotAvailableText)
                     [pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)
              func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,0);
code_?:
    uVar6 = (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    pSVar7 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar6,pSVar7);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <ShowAd>m__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement__ShowAd_m__1
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GamePassTier get_Tier() */

GamePassTier__Enum
Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_get_Tier
          (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)this >> 8),(this->fields).tierRequirement);
}

