
/* Void Activate() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Activate
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if (pSVar1 == (SpawnRolePreviewer *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar1->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (pSVar1->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_AwaitSpawnThenClose
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
              (this_02,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_,
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


/* Int32 CalculateSpawnRoleCost() */

int32_t Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
        GamePassesSpawnRoleRewardInfo_CalculateSpawnRoleCost
                  (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iStack_4 = 0;
  this_00 = (this->fields).spawnRole;
  if ((this_00 != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_01 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (this_00,(MethodInfo *)0x0), this_01 != (AttributeSettingsManager *)0x0))
  {
    pSVar5 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                          (this_01,(MethodInfo *)0x0);
    if (pSVar5 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    bVar6 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pSVar5->klass->_1).naturalAligment < bVar6) ||
       ((pSVar5->klass->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)0x0;
    if (bVar7) {
      this_02 = pSVar5;
    }
    if (this_02 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) goto code_?;
    this_03 = (Dictionary_2_WinningConditionType_System_Object_ *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_02,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                 &stack0xffffffac,this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                );
      uStack_1 = 0;
      while( true ) {
        cVar8 = func_?();
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return iStack_4;
        }
        LevelRewardsManager::LevelRewardsManager_get_NextReward
                  ((LevelRewardsManager *)&stack0xffffffc0,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                  );
        iVar9 = func_?();
        if (iVar9 == 0) goto code_?;
        iVar9 = func_?();
        if ((iVar9 == 0) || (piVar10 = (int *)func_?(), piVar10 == (int *)0x0)) break;
        iVar9 = *piVar10;
        uVar11 = 0;
        if (*(ushort *)(iVar9 + 0xb6) != 0) {
          do {
            if (*(IAttributeSetting__Class **)(*(int *)(iVar9 + 0x58) + (uint)uVar11 * 8) ==
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
               ) {
              puVar12 = (undefined4 *)
                       (iVar9 + 0xc0 + *(int *)(*(int *)(iVar9 + 0x58) + 4 + (uint)uVar11 * 8) * 8);
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(iVar9 + 0xb6));
        }
        puVar12 = (undefined4 *)func_?();
code_?:
        iVar9 = (*(code *)*puVar12)();
        iStack_4 = iStack_4 + iVar9;
      }
      func_?();
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Boolean CanShowFreeTry() */

bool Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_CanShowFreeTry
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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


/* Boolean CanSpawn() */

bool Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_CanSpawn
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                           ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      puVar2 = &UNK_?;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        fVar3 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(this_02,(MethodInfo *)0x0);
        if (pOVar1 == (Object *)0x2) {
          return 0;
        }
        return fVar3 <= (float)puVar2;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_ChangeBackground
               (GamePassesSpawnRoleRewardInfo *this,GamePassTier__Enum tier,MethodInfo *method)

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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Close
               (GamePassesSpawnRoleRewardInfo *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__GamePassesSpawnRoleRewardInfo___Close_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache1;
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


/* Void Deactivate() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Deactivate
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if (pSVar1 == (SpawnRolePreviewer *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar1->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (pSVar1->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Color GetTeamRequirementColor(MVTeam) */

Color * Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
        GamePassesSpawnRoleRewardInfo_GetTeamRequirementColor
                  (Color *__return_storage_ptr__,GamePassesSpawnRoleRewardInfo *this,
                  MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_Blue) {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
  }
  else if (team == MVTeam__Enum_Red) {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamRed;
  }
  else if (team == MVTeam__Enum_Green) {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
  }
  else if (team == MVTeam__Enum_Yellow) {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
  }
  else {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamNone;
  }
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Void HandleLockedUIVisibility(Boolean, Boolean) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
               (GamePassesSpawnRoleRewardInfo *this,bool playerHasUnlockedTier,bool isTierUnlockable
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar2 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
      cVar3 = func_?(1,TypeInfo__IEditModeUI,pIVar2);
      bVar4 = cVar3 == '\0';
    }
    else {
      bVar4 = false;
    }
    pGVar5 = (this->fields).lockedUI;
    value = bVar4;
    if ((playerHasUnlockedTier == 0) &&
       ((isTierUnlockable == 0 ||
        (bVar6 = GamePassesSpawnRoleRewardInfo_CanShowFreeTry(this,(MethodInfo *)0x0), bVar6 == 0)))
       ) {
      value = true;
    }
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,value,(MethodInfo *)0x0);
      pGVar5 = (this->fields).freeTryUI;
      if (((playerHasUnlockedTier == 0) && (isTierUnlockable != 0)) && (bVar4 == false)) {
        bVar6 = GamePassesSpawnRoleRewardInfo_CanShowFreeTry(this,(MethodInfo *)0x0);
      }
      else {
        bVar6 = 0;
      }
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,bVar6,(MethodInfo *)0x0);
        pGVar5 = (this->fields).unlockedUI;
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,(bVar4 ^ 1U) & playerHasUnlockedTier,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_HandleTeamSwitching
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IKogamaSetting *)(this->fields).team;
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
                (this_00,(this->fields).team,(MethodInfo *)0x0);
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
                          ((ObjectPool_1_System_Object_ *)pMVar3,(this->fields).team,
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


/* Void Initialize(Int32, GameObject, MVAvatarSpawnRoleCreator, GamePassTier) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
               (GamePassesSpawnRoleRewardInfo *this,int32_t spawnRoleIndex,
               GameObject *spawnRolePreviewObject,MVAvatarSpawnRoleCreator *spawnRole,
               GamePassTier__Enum tierRequirment,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  (this->fields).spawnRoleIndex = spawnRoleIndex;
  (this->fields).spawnRole = spawnRole;
  (this->fields).tierRequirment = (undefined1)tierRequirment;
  if (spawnRole == (MVAvatarSpawnRoleCreator *)0x0) {
code_?:
    func_?(0);
    pAVar2 = extraout_ECX;
    pAVar3 = extraout_EDX;
  }
  else {
    MVar4 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(spawnRole,(MethodInfo *)0x0)
    ;
    (this->fields).team = MVar4;
    (this->fields).spawnRolePreviewObject = spawnRolePreviewObject;
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)spawnRole,(MethodInfo *)0x0);
    (this->fields).woid = (int32_t)pIVar5;
    pIVar6 = (this->fields).spawnRoleTeamImage;
    MVar4 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(spawnRole,(MethodInfo *)0x0)
    ;
    if (cRam_? == '\0') {
      CStack_7.b = _UNK_?;
      CStack_7.g = (float)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if (MVar4 == MVTeam__Enum_Blue) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamBlue;
      pCVar8 = &CStack_7;
    }
    else if (MVar4 == MVTeam__Enum_Red) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamRed;
      pCVar8 = &CStack_9;
    }
    else if (MVar4 == MVTeam__Enum_Green) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamGreen;
      pCVar8 = &CStack_10;
    }
    else if (MVar4 == MVTeam__Enum_Yellow) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamYellow;
      pCVar8 = &CStack_11;
    }
    else {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamNone;
      pCVar8 = &CStack_12;
    }
    pCVar8 = Styles::Styles_GetColor(pCVar8,colorStyle,(MethodInfo *)0x0);
    if (pIVar6 == (Image *)0x0) goto code_?;
    (*(code *)(pIVar6->klass->vtable).set_color.method)
              (pIVar6,pCVar8->r,pCVar8->g,pCVar8->b,pCVar8->a,
               (pIVar6->klass->vtable).get_raycastTarget.methodPtr);
    pGVar13 = (this->fields).backgroundTier1;
    _bStack_c = CONCAT31(uStack_14,(undefined1)tierRequirment == GamePassTier__Enum_Tier3);
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    bVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar13,(MethodInfo *)0x0);
    if ((bool)bVar15 != ((undefined1)tierRequirment == GamePassTier__Enum_Tier1)) {
      pGVar13 = (this->fields).backgroundTier1;
      if (pGVar13 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar13,(undefined1)tierRequirment == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar13 = (this->fields).backgroundTier2;
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    bVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar13,(MethodInfo *)0x0);
    if ((bool)bVar15 != ((undefined1)tierRequirment == GamePassTier__Enum_Tier2)) {
      pGVar13 = (this->fields).backgroundTier2;
      if (pGVar13 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar13,(undefined1)tierRequirment == GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
    }
    pGVar13 = (this->fields).backgroundTier3;
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    bVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar13,(MethodInfo *)0x0);
    if ((bool)bVar15 != bStack_16) {
      pGVar13 = (this->fields).backgroundTier3;
      if (pGVar13 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar13,bStack_16,(MethodInfo *)0x0);
    }
    GamePassesSpawnRoleRewardInfo_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar17 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar17 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar17->fields).gameMode == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar18 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar18 != (IEditModeUI *)0x0) {
        cVar19 = func_?(1,TypeInfo__IEditModeUI,pIVar18);
        if (cVar19 != '\0') goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pGVar13 = (this->fields).spawnRoleEditButton;
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar13,0,(MethodInfo *)0x0);
code_?:
    iStack_1 = GamePassesSpawnRoleRewardInfo_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
    pTVar20 = (this->fields).spawnRoleCostAmount;
    uVar21 = func_?(&iStack_1,0);
    if (pTVar20 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar20->klass->vtable).set_text.method)
              (pTVar20,uVar21,(pTVar20->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar20 = (this->fields).spawnRoleCostAmount;
    pCVar8 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                        (&CStack_7,iStack_1,(MethodInfo *)0x0);
    if (pTVar20 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar20->klass->vtable).set_color.method)
              (pTVar20,pCVar8->r,pCVar8->g,pCVar8->b,pCVar8->a,
               (pTVar20->klass->vtable).get_raycastTarget.methodPtr);
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar22 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar22 == (PlayerPlanetData *)0x0) goto code_?;
    if ((pPVar22->fields).gamePassTier < (byte)(undefined1)tierRequirment) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar22 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar22 == (PlayerPlanetData *)0x0) goto code_?;
      playerHasUnlockedTier =
           (byte)(undefined1)tierRequirment <= (pPVar22->fields).previewGamePassTier;
    }
    else {
      playerHasUnlockedTier = true;
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar22 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar22 == (PlayerPlanetData *)0x0) goto code_?;
    GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
              (this,playerHasUnlockedTier,
               (undefined1)tierRequirment ==
               (undefined1)((pPVar22->fields).gamePassTier + GamePassTier__Enum_Tier1),
               (MethodInfo *)0x0);
    pAVar23 = (spawnRole->fields).OnBodyUpdate;
    pUVar24 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar24,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__,(MethodInfo *)0x0)
    ;
    pAVar2 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar23,(Delegate *)pUVar24,(MethodInfo *)0x0);
    pAVar23 = (Action *)0x0;
    if (pAVar2 == (Action *)0x0) {
code_?:
      (spawnRole->fields).OnBodyUpdate = pAVar23;
      pAVar23 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar24 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar24,(Object *)this,
                 MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar23,(Delegate *)pUVar24,(MethodInfo *)0x0);
      uVar25 = CONCAT44(TypeInfo__System__Action,pAVar2);
      pAVar23 = (Action *)0x0;
      if (pAVar2 != (Action *)0x0) {
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar23 = pAVar2;
        }
        if (pAVar23 == (Action *)0x0) goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar23;
      pCVar26 = (this->fields).continueButtonHandler;
      if (pCVar26 != (ContinueButtonHandler *)0x0) {
        pAVar23 = (pCVar26->fields).OnClick;
        pUVar24 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar24,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__
                   ,(MethodInfo *)0x0);
        pAVar2 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar23,(Delegate *)pUVar24,(MethodInfo *)0x0);
        pAVar23 = (Action *)0x0;
        if (pAVar2 != (Action *)0x0) {
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar23 = pAVar2;
          }
          pAVar3 = TypeInfo__System__Action;
          if (pAVar23 == (Action *)0x0) goto code_?;
        }
        (pCVar26->fields).OnClick = pAVar23;
        pIVar6 = (this->fields).buttonAdImage;
        this_00 = (GoldRewardManager *)
                  GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (this_00 != (GoldRewardManager *)0x0) {
          bVar15 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone
                            (this_00,(MethodInfo *)0x0);
          if (pIVar6 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar6,bVar15 == 0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar23 = pAVar2;
    }
    pAVar3 = TypeInfo__System__Action;
    if (pAVar23 != (Action *)0x0) goto code_?;
  }
code_?:
  uVar25 = func_?(pAVar2,pAVar3);
code_?:
  func_?(uVar25);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnDestroy
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).spawnRole;
  if (pMVar1 == (MVAvatarSpawnRoleCreator *)0x0) {
code_?:
    func_?(0);
    pAVar2 = extraout_ECX;
    pAVar3 = extraout_EDX;
  }
  else {
    pAVar4 = (pMVar1->fields).OnBodyUpdate;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__,(MethodInfo *)0x0)
    ;
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pAVar4 = (Action *)0x0;
    if (pAVar2 == (Action *)0x0) {
code_?:
      (pMVar1->fields).OnBodyUpdate = pAVar4;
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      uVar6 = CONCAT44(TypeInfo__System__Action,pAVar2);
      pAVar4 = (Action *)0x0;
      if (pAVar2 != (Action *)0x0) {
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar4 = pAVar2;
        }
        if (pAVar4 == (Action *)0x0) goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
      pCVar7 = (this->fields).continueButtonHandler;
      if (pCVar7 != (ContinueButtonHandler *)0x0) {
        pAVar4 = (pCVar7->fields).OnClick;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__,
                   (MethodInfo *)0x0);
        pAVar2 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
        pAVar4 = (Action *)0x0;
        if (pAVar2 != (Action *)0x0) {
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar2;
          }
          pAVar3 = TypeInfo__System__Action;
          if (pAVar4 == (Action *)0x0) goto code_?;
        }
        (pCVar7->fields).OnClick = pAVar4;
        if ((this->fields).awaitingSpawn == 0) {
code_?:
          pSVar8 = (this->fields).spawnRolePreviewer;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pSVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            pSVar8 = (this->fields).spawnRolePreviewer;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pSVar8,(MethodInfo *)0x0);
          }
          return;
        }
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
          pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar5,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_,
                     MethodInfo__System__Action<int>__Action_System__Object__void__);
          if (this_01 != (SpawnRolesManager *)0x0) {
            SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                      (this_01,(Action_1_Int32_ *)pUVar5,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    pAVar3 = TypeInfo__System__Action;
    if (pAVar4 != (Action *)0x0) goto code_?;
  }
code_?:
  uVar6 = func_?(pAVar2,pAVar3);
code_?:
  func_?(uVar6);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnEditPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnEditPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesSpawnRoleRewardInfo___OnEditPressed_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = (Component_1 *)
              MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (this_01 != (Component_1 *)0x0) {
      cVar2 = func_?(1);
      if (cVar2 != '\0') {
        return;
      }
      original = this_01[4].klass;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_02 = (SpawnRoleEditorMenu *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)original,
                           SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                          );
      if (this_00 != (ScaleAnimationBase *)0x0) {
        (this_00->fields)._._._._.m_CachedPtr = this_02;
        if ((this_01[8].klass != (Component_1__Class *)0x0) &&
           (spawnRoleWoId =
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_01[8].klass,(MethodInfo *)0x0),
           this_02 != (SpawnRoleEditorMenu *)0x0)) {
          SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                    (this_02,(int32_t)spawnRoleWoId,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (this_01,(MethodInfo *)0x0);
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)this_00,
                     MethodInfo__GamePassesSpawnRoleRewardInfo___OnEditPressed_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnLockedPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnLockedPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    uVar3 = (pPVar2->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      bVar4 = (this->fields).tierRequirment;
      if (((byte)(uVar3 + 1) < bVar4) && ((byte)((pPVar2->fields).previewGamePassTier + 1) < bVar4))
      {
        pSVar5 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uStack_1 = (this->fields).tierRequirment - 1;
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar5 = mscorlib.dll::System::String::String_Format(pSVar5,pOVar6,(MethodInfo *)0x0);
        pGVar7 = (this->fields).lockedTipTextBubble;
        if (pGVar7 != (GamePassesTextBubble *)0x0) {
          GamePassesTextBubble::GamePassesTextBubble_Activate(pGVar7,pSVar5,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pSVar5 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uStack_1 = (uint)(this->fields).tierRequirment;
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar5 = mscorlib.dll::System::String::String_Format(pSVar5,pOVar6,(MethodInfo *)0x0);
        pGVar7 = (this->fields).lockedTipTextBubble;
        if ((pGVar7 != (GamePassesTextBubble *)0x0) &&
           (this_00 = (pGVar7->fields).fader, this_00 != (NotificationFade *)0x0)) {
          NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
          pTVar8 = (pGVar7->fields).text;
          if (pTVar8 != (Text *)0x0) {
            (*(code *)(pTVar8->klass->vtable).set_text.method)
                      (pTVar8,pSVar5,
                       (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            (pGVar7->fields).isActive = 1;
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPlayPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnPlayPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
     (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_02 != (SkyParam *)0x0))
  {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_02,(MethodInfo *)0x0);
    if (1 < iVar2) {
      GamePassesSpawnRoleRewardInfo_HandleTeamSwitching(this,(MethodInfo *)0x0);
    }
    bVar3 = GamePassesSpawnRoleRewardInfo_CanSpawn(this,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)0x0,
                   MethodInfo__GamePassesSpawnRoleRewardInfo___OnPlayPressed_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar5;
      }
      pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar4,(BaseEventData *)0x0,pEVar6,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).enterPlayWhenPlayerCanSpawn = 1;
      return;
    }
    this_00 = (this->fields).spawnRole;
    if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
      b = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
      avatarSpawnerWoId = b;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_03 = (PrefabPool *)
                MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((this_03 != (PrefabPool *)0x0) &&
         (this_04 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                    PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0),
         this_04 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)) {
        a = (SpawnRoleVariable_1_System_Int32_ *)
            System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Int32]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                      (this_04,(MethodInfo *)0x0);
        bVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                          ((int32_t)b,a,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                          );
        if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
          func_?(TypeInfo__FirstTimePressPlayController);
        }
        bVar7 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                          ((MethodInfo *)0x0);
        if (bVar7 == 0) {
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
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar8 != (MVLocalPlayer *)0x0) {
            this_05 = (SpawnRolesManager *)
                      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                      TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                      TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)pMVar8,
                                 (MethodInfo *)0x0);
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action<int>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_,
                       MethodInfo__System__Action<int>__Action_System__Object__void__);
            if (this_05 != (SpawnRolesManager *)0x0) {
              SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                        (this_05,(Action_1_Int32_ *)pUVar5,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 pMVar8 != (MVLocalPlayer *)0x0)) {
                MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                          (pMVar8,(int32_t)avatarSpawnerWoId,(MethodInfo *)0x0);
                pIVar9 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                                    ((MethodInfo *)0x0);
                if (pIVar9 != (ILockCursorManager *)0x0) {
                  func_?(4,TypeInfo__ILockCursorManager,pIVar9,1);
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
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache1 ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)0x0,
                       MethodInfo__GamePassesSpawnRoleRewardInfo___Close_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache1 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
          }
          pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache1;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar4,(BaseEventData *)0x0,pEVar6,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_06 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (this_06 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_set_CamMaskMode
                      (this_06,MaskMode__Enum_Default,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            pIVar9 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                                ((MethodInfo *)0x0);
            if (pIVar9 != (ILockCursorManager *)0x0) {
              func_?(3,TypeInfo__ILockCursorManager,pIVar9,1);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pGVar10 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                  ((MethodInfo *)0x0);
              if (pGVar10 != (GameSessionData *)0x0) {
                if ((pGVar10->fields).gameMode == 0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  pGVar10 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                      ((MethodInfo *)0x0);
                  if (pGVar10 == (GameSessionData *)0x0) goto code_?;
                  if ((pGVar10->fields).gameMode != 0) {
                    return;
                  }
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  pIVar11 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI
                                      ((MethodInfo *)0x0);
                  if (pIVar11 == (IEditModeUI *)0x0) goto code_?;
                  cVar12 = func_?(1,TypeInfo__IEditModeUI,pIVar11);
                  if (cVar12 == '\0') {
                    return;
                  }
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pGVar13 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if ((pGVar13 != (GameEventManager *)0x0) &&
                   (this_01 = (pGVar13->fields).AvatarCommandsPlayMode,
                   this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                  ShowingAdsPopup::ShowingAdsPopup_OnSkip
                            ((ShowingAdsPopup *)this_01,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnPlayerPlanetDataUpdated
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).tierRequirment;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    if ((pPVar2->fields).gamePassTier < bVar1) {
      bVar1 = (this->fields).tierRequirment;
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
      playerHasUnlockedTier = bVar1 <= (pPVar2->fields).previewGamePassTier;
    }
    else {
      playerHasUnlockedTier = true;
    }
    uVar3 = (this->fields).tierRequirment;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
                (this,playerHasUnlockedTier,uVar3 == (uint8_t)((pPVar2->fields).gamePassTier + 1),
                 (MethodInfo *)0x0);
      if ((this->fields).isWaitingForFreeTryTier != 0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache8 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar5,(Object *)0x0,
                     MethodInfo__GamePassesSpawnRoleRewardInfo___OnPlayerPlanetDataUpdated_m__8_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache8 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
        }
        pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache8;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar4,(BaseEventData *)0x0,pEVar6,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        (this->fields).isWaitingForFreeTryTier = 0;
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        if (((pPVar2->fields).previewGamePassTier < (this->fields).tierRequirment) ||
           ((this->fields).haveShownFreeTryUnlock != 0)) {
          return;
        }
        method_00 = 
        TypeInfo__GamePassesSpawnRoleRewardInfo___OnPlayerPlanetDataUpdated_c__AnonStorey2;
        this_00 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        pAVar7 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
                   (MethodInfo *)0x0);
        pAVar8 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar7,(Delegate *)pUVar5,(MethodInfo *)0x0);
        pAVar7 = (Action *)0x0;
        if (pAVar8 != (Action *)0x0) {
          if (pAVar8->klass == TypeInfo__System__Action) {
            pAVar7 = pAVar8;
          }
          if (pAVar7 == (Action *)0x0) {
            func_?(pAVar8,TypeInfo__System__Action);
            goto code_?;
          }
        }
        TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache9 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar5,(Object *)0x0,
                     MethodInfo__GamePassesSpawnRoleRewardInfo___OnPlayerPlanetDataUpdated_m__9_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache9 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
        }
        pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache9;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar4,(BaseEventData *)0x0,pEVar6,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pSVar9 = (this->fields).spawnRoleUnlockPopupPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)pSVar9,
                             SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                            );
        if (this_00 != (ScaleAnimationBase *)0x0) {
          (this_00->fields)._._._._.m_CachedPtr = pXVar10;
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar5,(Object *)this_00,
                     MethodInfo__GamePassesSpawnRoleRewardInfo___OnPlayerPlanetDataUpdated_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar4,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pSVar9 = (this_00->fields)._._._._.m_CachedPtr;
          if (pSVar9 != (SpawnRoleUnlockedPopupController *)0x0) {
            SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Initialize
                      (pSVar9,(uint)(this->fields).tierRequirment,0,1,(this->fields).woid,
                       (MethodInfo *)0x0);
            arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            message = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_PLAY_WOID_,arg1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)message,(MethodInfo *)0x0);
            (this->fields).haveShownFreeTryUnlock = 1;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPressFreePlay() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnPressFreePlay
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
      if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache3 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GamePassesSpawnRoleRewardInfo___ShowAd_m__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache3 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache3;
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
                  (pUVar3,(Object *)&UNK_?,
                   MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                  );
        if (pIVar4 != (IAdManager *)0x0) {
          func_?();
          return;
        }
      }
      else {
        GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesSpawnRoleRewardInfo___OnPressed_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pSVar1 = (this->fields).skillMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesSpawnRoleRewardInfo___OnPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
    pSVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if (pSVar1 != (SpawnRoleSelectionSkillMenu *)0x0) {
      SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_Initialize
                (pSVar1,(this->fields).woid,(uint)(this->fields).tierRequirment,
                 (this->fields).spawnRolePreviewObject,(MethodInfo *)0x0);
      arg1 = (Object *)func_?(TypeInfo__System__Int32);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_LOOK_WOID_,arg1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSpawnRoleBodyUpdate() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnSpawnRoleBodyUpdate
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  this_00 = (this->fields).spawnRole;
  if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
    spawnRolePreviewObject =
         MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                   (this_00,(MethodInfo *)0x0);
    GamePassesSpawnRoleRewardInfo_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_PreviewTier
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
      if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache7 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GamePassesSpawnRoleRewardInfo___PreviewTier_m__7_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache7 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache7;
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
                 MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
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
        if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache6 ==
            (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)0x0,
                     MethodInfo__GamePassesSpawnRoleRewardInfo___PreviewTier_m__6_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache6 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
        }
        pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache6;
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
        *(undefined2 *)((int)&(this_00->_1).cctor_finished_or_no_cctor + 2) = 1;
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

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_RewardedAdCallback
               (GamePassesSpawnRoleRewardInfo *this,RewardedAdResult__Enum result,MethodInfo *method
               )

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
    if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache5 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__GamePassesSpawnRoleRewardInfo___RewardedAdCallback_m__5_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache5 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache5;
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  default:
    GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache4 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__GamePassesSpawnRoleRewardInfo___RewardedAdCallback_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache4 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache4;
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


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_SetupPreviewImage
               (GamePassesSpawnRoleRewardInfo *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = (this->fields).spawnRolePreviewer;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pSVar1,(MethodInfo *)0x0);
  }
  pSVar1 = (this->fields).spawnRolePreviewerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar1;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (XpBoostParticlePreviewer *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffd4,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar3,*pQVar4,(MethodInfo *)0x0);
      this_02 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        func_?();
        puVar5 = &stack0xffffffe4;
        fVar6 = 0.0;
        puVar7 = &UNK_?;
        func_?();
        pSVar1 = (this->fields).spawnRolePreviewer;
        if (pSVar1 != (SpawnRolePreviewer *)0x0) {
          cameraOffset.y = (float)puVar5;
          cameraOffset.x = (float)puVar7;
          cameraOffset.z = fVar6;
          SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                    (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,
                     LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar3,
                     (Vector3)ZEXT812(0xc0c000003fc00000),StringLiteral_SpawnRole,
                     (this->fields).spawnRoleIndex,(GameObject *)this_01,(MethodInfo *)0x0);
          pSVar1 = (this->fields).spawnRolePreviewer;
          this_00 = (this->fields).spawnRoleImage;
          if (pSVar1 != (SpawnRolePreviewer *)0x0) {
            value = (Texture *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pSVar1,
                               (MethodInfo *)0x0);
            if (this_00 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_ShowAd
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
      if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache3 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GamePassesSpawnRoleRewardInfo___ShowAd_m__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache3 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache3;
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
                  (pUVar3,(Object *)&UNK_?,
                   MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                  );
        if (pIVar4 != (IAdManager *)0x0) {
          func_?();
          return;
        }
      }
      else {
        GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_StartPlaying
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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


/* Void Update() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Update
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).enterPlayWhenPlayerCanSpawn != 0) {
    bVar1 = GamePassesSpawnRoleRewardInfo_CanSpawn(this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache2 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__GamePassesSpawnRoleRewardInfo___Update_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache2 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__GamePassesSpawnRoleRewardInfo->static_fields->__f__am_cache2;
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
      (this->fields).enterPlayWhenPlayerCanSpawn = 0;
      GamePassesSpawnRoleRewardInfo_OnPlayPressed(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void <Close>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo__Close_m__1
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0x80);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPlayPressed>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo__OnPlayPressed_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPlayerPlanetDataUpdated>m__8(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated_m__8
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


/* Void <OnPlayerPlanetDataUpdated>m__9(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated_m__9
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


/* Void <PreviewTier>m__6(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo__PreviewTier_m__6
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PreviewTier>m__7(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo__PreviewTier_m__7
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


/* Void <RewardedAdCallback>m__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo__RewardedAdCallback_m__4
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


/* Void <RewardedAdCallback>m__5(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo__RewardedAdCallback_m__5
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
    uVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    pSVar3 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar2,pSVar3);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <ShowAd>m__3(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo__ShowAd_m__3
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


/* Void <Update>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo__Update_m__2
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


/* GamePassesSpawnRoleRewardInfo() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo__ctor
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  (this->fields).haveShownFreeTryUnlock = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

