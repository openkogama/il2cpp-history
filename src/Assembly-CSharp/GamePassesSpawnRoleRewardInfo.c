
/* Void Activate() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Activate
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (pSVar1->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_AwaitSpawnThenClose
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_);
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
                (this_01,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_,
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


/* Int32 CalculateSpawnRoleCost() */

int32_t Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
        GamePassesSpawnRoleRewardInfo_CalculateSpawnRoleCost
                  (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOVar6 = (Object *)0x0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  pOStack_8 = (Object *)0x0;
  this_00 = (this->fields).spawnRole;
  if ((this_00 != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_01 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (this_00,(MethodInfo *)0x0), this_01 != (AttributeSettingsManager *)0x0))
  {
    pKVar9 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_01,(MethodInfo *)0x0);
    if (pKVar9 == (KogamaSettingWrapperBase *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    if (((pKVar9->klass->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((pKVar9->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?();
    }
    else if (pKVar9[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffa0,
                          (Dictionary_2_System_Object_System_Object_ *)pKVar9[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      pDStack_11 = &DStack_7;
      uStack_12 = 0;
      DStack_7._dictionary = pDVar10->_dictionary;
      DStack_7._version = pDVar10->_version;
      DStack_7._index = pDVar10->_index;
      DStack_7._current.key = (pDVar10->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      uStack_1 = 1;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar13 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return (int32_t)pOVar6;
        }
        pOVar6 = DStack_7._current.value;
        this = (GamePassesSpawnRoleRewardInfo *)
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        if (DStack_7._current.value == (Object *)0x0) break;
        iVar14 = func_?(DStack_7._current.value,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                               );
        if (iVar14 == 0) goto code_?;
        this = (GamePassesSpawnRoleRewardInfo *)
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        piStack_15 = (int *)func_?(pOVar6,
                                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                           );
        if (piStack_15 == (int *)0x0) goto code_?;
        iVar14 = *piStack_15;
        uVar16 = 0;
        uStack_17 = 0;
        uVar18 = *(ushort *)(iVar14 + 0xb2);
        uStack_19 = (uint)uVar18;
        if (uVar18 != 0) {
          do {
            if (*(IAttributeSetting__Class **)(*(int *)(iVar14 + 0x58) + (uint)uVar16 * 8) ==
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
               ) {
              puVar20 = (undefined4 *)
                       (iVar14 + 0xbc + *(int *)(*(int *)(iVar14 + 0x58) + 4 + (uint)uVar16 * 8) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar18);
        }
        puVar20 = (undefined4 *)
                 func_?(piStack_15,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 ,0);
code_?:
        iVar14 = (*(code *)*puVar20)(piStack_15,puVar20[1]);
        pOVar6 = (Object *)((int)&pOStack_8->klass + iVar14);
        pOStack_8 = pOVar6;
      }
    }
  }
  func_?();
code_?:
  uVar21 = func_?(pOVar6,this);
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  iVar23 = (*pcVar22)();
  return iVar23;
}


/* Boolean CanShowFreeTry() */

bool Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_CanShowFreeTry
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  bVar2 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
  return bVar2 & -(MVar1 != MVGameMode__Enum_Edit);
}


/* Boolean CanSpawn() */

bool Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_CanSpawn
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    iVar3 = (pMVar2->fields).currentGameState;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar5 != (MVLocalPlayer *)0x0) {
      if (iVar3 == 2) {
        return 0;
      }
      return (pMVar5->fields).respawnTime <= fVar4;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
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
                  (pGVar1,0x52,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Close
               (GamePassesSpawnRoleRewardInfo *this,int32_t spawnRoleID,MethodInfo *method)

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
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___Close_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
  }
  callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GamePassesSpawnRoleRewardInfo____c___Close_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0 = callbackFunction;
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


/* Void Deactivate() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Deactivate
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (pSVar1->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Color GetTeamRequirementColor(MVTeam) */

Color * Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
        GamePassesSpawnRoleRewardInfo_GetTeamRequirementColor
                  (Color *__return_storage_ptr__,GamePassesSpawnRoleRewardInfo *this,
                  MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_Blue) {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
  }
  else if (team == MVTeam__Enum_Red) {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamRed;
  }
  else if (team == MVTeam__Enum_Green) {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
  }
  else if (team == MVTeam__Enum_Yellow) {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
  }
  else {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
      cVar3 = func_?(1,TypeInfo__IEditModeUI,pIVar2);
      bVar4 = cVar3 == '\0';
    }
    else {
      bVar4 = false;
    }
    pGVar5 = (this->fields).lockedUI;
    if (playerHasUnlockedTier == 0) {
      if (isTierUnlockable == 0) {
        bVar6 = 1;
      }
      else {
        MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        bVar8 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
        bVar6 = bVar8 & MVar7 != MVGameMode__Enum_Edit ^ 1;
      }
    }
    else {
      bVar6 = 0;
    }
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,bVar4 | bVar6,(MethodInfo *)0x0);
      pGVar5 = (this->fields).freeTryUI;
      if (((isTierUnlockable & (playerHasUnlockedTier ^ 1)) == 0) || (bVar4 != false)) {
        bVar8 = 0;
      }
      else {
        MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        this = (GamePassesSpawnRoleRewardInfo *)0x0;
        bVar8 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
        bVar8 = -(MVar7 != MVGameMode__Enum_Edit) & bVar8;
      }
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,bVar8,(MethodInfo *)0x0);
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_HandleTeamSwitching
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  iVar1 = (this->fields).team;
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
                (this_01,(this->fields).team,(MethodInfo *)0x0);
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
                (pMVar3->fields)._._Team_k__BackingField = (this->fields).team;
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


/* Void Initialize(Int32, GameObject, MVAvatarSpawnRoleCreator, GamePassTier) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
               (GamePassesSpawnRoleRewardInfo *this,int32_t spawnRoleIndex,
               GameObject *spawnRolePreviewObject,MVAvatarSpawnRoleCreator *spawnRole,
               GamePassTier__Enum tierRequirment,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__);
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleIndex = spawnRoleIndex;
  (this->fields).spawnRole = spawnRole;
  func_?(&(this->fields).spawnRole,spawnRole);
  (this->fields).tierRequirment = (undefined1)tierRequirment;
  if (spawnRole == (MVAvatarSpawnRoleCreator *)0x0) {
code_?:
    uVar1 = func_?();
code_?:
    CStack_2.g = (float)&UNK_?;
    CStack_2._8_8_ = uVar1;
    func_?();
    CStack_2.b = (float)extraout_ECX;
    pAVar3 = extraout_EDX;
  }
  else {
    MVar4 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                       (spawnRole,(MethodInfo *)0x0);
    (this->fields).team = MVar4;
    (this->fields).spawnRolePreviewObject = spawnRolePreviewObject;
    func_?(&(this->fields).spawnRolePreviewObject,spawnRolePreviewObject);
    (this->fields).woid = (spawnRole->fields)._._._._.id;
    pIVar5 = (this->fields).spawnRoleTeamImage;
    MVar4 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                       (spawnRole,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Styles);
      cRam_? = '\x01';
    }
    if (MVar4 == MVTeam__Enum_Blue) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamBlue;
      pCVar6 = &CStack_2;
    }
    else if (MVar4 == MVTeam__Enum_Red) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamRed;
      pCVar6 = &CStack_7;
    }
    else if (MVar4 == MVTeam__Enum_Green) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamGreen;
      pCVar6 = &CStack_8;
    }
    else if (MVar4 == MVTeam__Enum_Yellow) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamYellow;
      pCVar6 = &CStack_9;
    }
    else {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamNone;
      pCVar6 = &CStack_10;
    }
    pCVar6 = Styles::Styles_GetColor(pCVar6,colorStyle,(MethodInfo *)0x0);
    if (pIVar5 == (Image *)0x0) goto code_?;
    (*(pIVar5->klass->vtable).set_color.methodPtr)
              (pIVar5,pCVar6->r,pCVar6->g,pCVar6->b,pCVar6->a,
               (pIVar5->klass->vtable).set_color.method);
    pGVar11 = (this->fields).backgroundTier1;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar11,(MethodInfo *)0x0);
    if ((bool)bVar12 != ((undefined1)tierRequirment == GamePassTier__Enum_Tier1)) {
      pGVar11 = (this->fields).backgroundTier1;
      if (pGVar11 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,(undefined1)tierRequirment == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar11 = (this->fields).backgroundTier2;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar11,(MethodInfo *)0x0);
    if ((bool)bVar12 != ((undefined1)tierRequirment == GamePassTier__Enum_Tier2)) {
      pGVar11 = (this->fields).backgroundTier2;
      if (pGVar11 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,(undefined1)tierRequirment == GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
    }
    pGVar11 = (this->fields).backgroundTier3;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar11,(MethodInfo *)0x0);
    if ((bool)bVar12 != ((undefined1)tierRequirment == GamePassTier__Enum_Tier3)) {
      pGVar11 = (this->fields).backgroundTier3;
      if (pGVar11 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,(undefined1)tierRequirment == GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
    }
    GamePassesSpawnRoleRewardInfo_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar13 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar13->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar14 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar14 != (IEditModeUI *)0x0) {
        cVar15 = func_?(1,TypeInfo__IEditModeUI,pIVar14);
        if (cVar15 != '\0') goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pGVar11 = (this->fields).spawnRoleEditButton;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
code_?:
    IStack_16.m_value = GamePassesSpawnRoleRewardInfo_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
    pTVar17 = (this->fields).spawnRoleCostAmount;
    pSVar18 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_16,(MethodInfo *)0x0);
    if (pTVar17 == (Text *)0x0) goto code_?;
    (*(pTVar17->klass->vtable).set_text.methodPtr)
              (pTVar17,pSVar18,(pTVar17->klass->vtable).set_text.method);
    pTVar17 = (this->fields).spawnRoleCostAmount;
    pCVar6 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                        (&CStack_2,IStack_16.m_value,(MethodInfo *)0x0);
    if (pTVar17 == (Text *)0x0) goto code_?;
    (*(pTVar17->klass->vtable).set_color.methodPtr)
              (pTVar17,pCVar6->r,pCVar6->g,pCVar6->b,pCVar6->a,
               (pTVar17->klass->vtable).set_color.method);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar19 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar19 == (PlayerPlanetData *)0x0) goto code_?;
    uVar20 = (uint)CONCAT11((undefined1)tierRequirment,cRam_?);
    if ((pPVar19->fields).gamePassTier < (byte)(undefined1)tierRequirment) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        uVar20 = (uint)CONCAT11((undefined1)tierRequirment,1);
        cRam_? = '\x01';
      }
      pPVar19 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar19 == (PlayerPlanetData *)0x0) goto code_?;
      playerHasUnlockedTier = (byte)(uVar20 >> 8) <= (pPVar19->fields).previewGamePassTier;
    }
    else {
      playerHasUnlockedTier = true;
    }
    if ((char)uVar20 == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      uVar20 = (tierRequirment & 0xff) << 8;
      cRam_? = '\x01';
    }
    pPVar19 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar19 == (PlayerPlanetData *)0x0) goto code_?;
    GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
              (this,playerHasUnlockedTier,
               (char)(uVar20 >> 8) == (uint8_t)((pPVar19->fields).gamePassTier + 1),(MethodInfo *)0x0
              );
    pAVar21 = (spawnRole->fields).OnBodyUpdate;
    pNVar22 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar22 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar22,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__,(MethodInfo *)0x0)
    ;
    pAVar21 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar21,(Delegate *)pNVar22,(MethodInfo *)0x0);
    uVar1._4_4_ = (float)TypeInfo__System__Action;
    uVar1._0_4_ = (float)pAVar21;
    CStack_2.a = 0.0;
    if (pAVar21 != (Action *)0x0) {
      if (pAVar21->klass == TypeInfo__System__Action) {
        CStack_2.a = (float)pAVar21;
      }
      if ((Action *)CStack_2.a != (Action *)0x0) {
        (spawnRole->fields).OnBodyUpdate = (Action *)CStack_2.a;
        uVar1._4_4_ = (float)TypeInfo__System__Action;
        CStack_2.a = (float)(Action *)0x0;
        if (pAVar21->klass == TypeInfo__System__Action) {
          CStack_2.a = (float)pAVar21;
        }
        if ((Action *)CStack_2.a != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    (spawnRole->fields).OnBodyUpdate = (Action *)0x0;
code_?:
    CStack_2.b = (float)&(spawnRole->fields).OnBodyUpdate;
    CStack_2.g = (float)&UNK_?;
    func_?();
    CStack_2.g = (float)TypeInfo__System__Action;
    pAVar21 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    CStack_2.r = (float)&UNK_?;
    pNVar22 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar22 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar22,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    CStack_2.b = (float)mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pAVar21,(Delegate *)pNVar22,(MethodInfo *)0x0);
    if ((Action *)CStack_2.b == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
      CStack_2.a = 0.0;
code_?:
      CStack_2.b = (float)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      CStack_2.g = (float)&UNK_?;
      func_?();
      pCVar23 = (this->fields).continueButtonHandler;
      if (pCVar23 == (ContinueButtonHandler *)0x0) goto code_?;
      pAVar21 = (pCVar23->fields).OnClick;
      pNVar22 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (pNVar22 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar22,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__,
                 (MethodInfo *)0x0);
      pAVar21 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar21,(Delegate *)pNVar22,(MethodInfo *)0x0);
      uVar1._4_4_ = (float)TypeInfo__System__Action;
      uVar1._0_4_ = (float)pAVar21;
      CStack_2.a = 0.0;
      if (pAVar21 == (Action *)0x0) {
        (pCVar23->fields).OnClick = (Action *)0x0;
code_?:
        CStack_2.b = (float)&(pCVar23->fields).OnClick;
        CStack_2.g = (float)&UNK_?;
        func_?();
        pIVar5 = (this->fields).buttonAdImage;
        pTVar24 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if ((pTVar24 != (TogglePreviewState *)0x0) && (pIVar5 != (Image *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar5,(pTVar24->fields).freeTry == 0,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (pAVar21->klass == TypeInfo__System__Action) {
        CStack_2.a = (float)pAVar21;
      }
      if ((Action *)CStack_2.a != (Action *)0x0) {
        (pCVar23->fields).OnClick = (Action *)CStack_2.a;
        uVar1._4_4_ = (float)TypeInfo__System__Action;
        CStack_2.a = (float)(Action *)0x0;
        if (pAVar21->klass == TypeInfo__System__Action) {
          CStack_2.a = (float)pAVar21;
        }
        if ((Action *)CStack_2.a != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    pAVar21 = (Action *)0x0;
    if (((Action *)CStack_2.b)->klass == TypeInfo__System__Action) {
      pAVar21 = (Action *)CStack_2.b;
    }
    CStack_2.a = (float)TypeInfo__System__Action;
    if (pAVar21 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar21;
    CStack_2.a = (float)(Action *)0x0;
    if (((Action *)CStack_2.b)->klass == TypeInfo__System__Action) {
      CStack_2.a = CStack_2.b;
    }
    pAVar3 = TypeInfo__System__Action;
    if ((Action *)CStack_2.a != (Action *)0x0) goto code_?;
  }
  CStack_2.g = (float)&UNK_?;
  CStack_2.a = (float)pAVar3;
  CStack_2.a = (float)func_?();
  CStack_2.b = (float)extraout_ECX_00;
code_?:
  CStack_2.g = (float)&UNK_?;
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnDestroy
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).spawnRole;
  if (pMVar1 == (MVAvatarSpawnRoleCreator *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).OnBodyUpdate;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar3 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__,(MethodInfo *)0x0)
    ;
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pAVar2 != (Action *)0x0) {
      pAVar4 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar2;
      }
      if (pAVar4 != (Action *)0x0) {
        (pMVar1->fields).OnBodyUpdate = pAVar4;
        pAVar4 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar4 = pAVar2;
        }
        if (pAVar4 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    (pMVar1->fields).OnBodyUpdate = (Action *)0x0;
code_?:
    func_?();
    pAVar2 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar3 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pCVar5 = (this->fields).continueButtonHandler;
      if (pCVar5 == (ContinueButtonHandler *)0x0) goto code_?;
      pAVar2 = (pCVar5->fields).OnClick;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (pNVar3 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
      if (pAVar2 == (Action *)0x0) {
        (pCVar5->fields).OnClick = (Action *)0x0;
code_?:
        func_?();
        if ((this->fields).awaitingSpawn == 0) {
code_?:
          pSVar6 = (this->fields).spawnRolePreviewer;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pSVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pSVar6 = (this->fields).spawnRolePreviewer;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pSVar6,(MethodInfo *)0x0);
          }
          return;
        }
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar8 != (MVLocalPlayer *)0x0) {
          this_00 = (pMVar8->fields)._.spawnRolesManager;
          this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
          if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_01,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_,
                       (MethodInfo *)0x0);
            if (this_00 != (SpawnRolesManager *)0x0) {
              SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                        (this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        goto code_?;
      }
      pAVar4 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar2;
      }
      if (pAVar4 != (Action *)0x0) {
        (pCVar5->fields).OnClick = pAVar4;
        pAVar4 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar4 = pAVar2;
        }
        if (pAVar4 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    pAVar4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    if (pAVar4 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    if (pAVar4 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnEditPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnEditPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0___OnEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode != 0) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar2 != (IEditModeUI *)0x0) {
        cVar3 = func_?(1,TypeInfo__IEditModeUI,pIVar2);
        if (cVar3 != '\0') {
          return;
        }
        original = (this->fields).spawnRoleEditorMenuPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar4 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                           );
        value[1].klass = pOVar4;
        func_?(value + 1,pOVar4);
        pMVar5 = (this->fields).spawnRole;
        if ((pMVar5 != (MVAvatarSpawnRoleCreator *)0x0) && (value[1].klass != (Object__Class *)0x0))
        {
          SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                    ((SpawnRoleEditorMenu *)value[1].klass,(pMVar5->fields)._._._._.id,
                     (MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0___OnEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
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


/* Void OnLockedPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnLockedPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
      if (((byte)(uVar3 + 1) < (this->fields).tierRequirment) &&
         ((byte)((pPVar2->fields).previewGamePassTier + 1) < (this->fields).tierRequirment)) {
        pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uStack_1 = (this->fields).tierRequirment - 1;
      }
      else {
        pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uStack_1 = (uint)(this->fields).tierRequirment;
      }
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
      pSVar4 = mscorlib.dll::System::String::String_Format(pSVar4,arg0,(MethodInfo *)0x0);
      pGVar5 = (this->fields).lockedTipTextBubble;
      if ((pGVar5 != (GamePassesTextBubble *)0x0) &&
         (this_00 = (pGVar5->fields).fader, this_00 != (NotificationFade *)0x0)) {
        NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
        pTVar6 = (pGVar5->fields).text;
        if (pTVar6 != (Text *)0x0) {
          (*(pTVar6->klass->vtable).set_text.methodPtr)
                    (pTVar6,pSVar4,(pTVar6->klass->vtable).set_text.method);
          (pGVar5->fields).isActive = 1;
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPlayPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnPlayPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayPressed_b__36_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
  goto code_?;
  iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
  if (1 < iVar2) {
    iVar3 = (this->fields).team;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    if (iVar3 != (pMVar4->fields)._._Team_k__BackingField) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_03,(this->fields).team,(MethodInfo *)0x0);
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
      (pMVar4->fields)._._Team_k__BackingField = (this->fields).team;
    }
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar5 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar5 != (MVNetworkGameStateListener *)0x0)) {
    iVar3 = (pMVar5->fields).currentGameState;
    method_00 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer(method_00);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      if ((iVar3 == 2) || ((float)method_00 < (pMVar4->fields).respawnTime)) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_00 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__36_0
        ;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pGVar7 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
          if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)pGVar7,
                     MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayPressed_b__36_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__36_0 =
               callbackFunction_00;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar6,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        (this->fields).enterPlayWhenPlayerCanSpawn = 1;
        return;
      }
      pMVar8 = (this->fields).spawnRole;
      if (pMVar8 != (MVAvatarSpawnRoleCreator *)0x0) {
        iVar2 = (pMVar8->fields)._._._._.id;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar4 != (MVLocalPlayer *)0x0) &&
           (pSVar9 = (pMVar4->fields).spawnRoleDataMediator, pSVar9 != (SpawnRoleDataMediator *)0x0)
           ) {
          bVar10 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
                  SpawnRoleVariable_1_System_Int32__op_Equality
                            (iVar2,(SpawnRoleVariable_1_System_Int32_ *)(pSVar9->fields).woId,
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
          if (bVar10 == 0) {
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
                avatarSpawnerWoId = this_04;
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
                UnityAction_1_System_Int32Enum___ctor
                          (this_04,(Object *)this,
                           MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_,(MethodInfo *)0x0);
                if (this_02 != (SpawnRolesManager *)0x0) {
                  SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                            (this_02,(Action_1_Int32_ *)this_04,(MethodInfo *)0x0);
                  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar1 != (MVNetworkGame *)0x0) {
                    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
                    if (pMVar4 != (MVLocalPlayer *)0x0) {
                      MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                                (pMVar4,(int32_t)avatarSpawnerWoId,(MethodInfo *)0x0);
                      MVGameControllerDesktop::MVGameControllerDesktop_CursorLock
                                (1,1,(MethodInfo *)0x0);
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
              func_?();
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?();
            }
            callbackFunction =
                 TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0
                 ) {
                func_?();
              }
              pGVar7 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
              callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
              if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)pGVar7,
                         MethodInfo__GamePassesSpawnRoleRewardInfo____c___Close_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0 =
                   callbackFunction;
              func_?();
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar6,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            this_05 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_05 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_set_CamMaskMode
                        (this_05,MaskMode__Enum_Default,(MethodInfo *)0x0);
              GamePassesSpawnRoleRewardInfo_StartPlaying(this,(MethodInfo *)0x0);
              return;
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


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnPlayerPlanetDataUpdated
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__);
    func_?(&
                    SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0);
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    func_?(&StringLiteral_PLAY_WOID_);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).tierRequirment;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 == (PlayerPlanetData *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((pPVar2->fields).gamePassTier < bVar1) {
      bVar1 = (this->fields).tierRequirment;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
      playerHasUnlockedTier = bVar1 <= (pPVar2->fields).previewGamePassTier;
    }
    else {
      playerHasUnlockedTier = true;
    }
    uVar3 = (this->fields).tierRequirment;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
    GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
              (this,playerHasUnlockedTier,uVar3 == (uint8_t)((pPVar2->fields).gamePassTier + 1),
               (MethodInfo *)0x0);
    if ((this->fields).isWaitingForFreeTryTier != 0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar5 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0;
      if (pEVar5 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        pGVar6 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        pEVar5 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        if (pEVar5 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,(Object *)pGVar6,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0 = pEVar5;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0,
                        pEVar5);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar4,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      (this->fields).isWaitingForFreeTryTier = 0;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
    if ((pPVar2->fields).previewGamePassTier < (this->fields).tierRequirment) {
      return;
    }
    if ((this->fields).haveShownFreeTryUnlock != 0) {
      return;
    }
    value = (Object *)
            func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0);
    if (value == (Object *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    pAVar7 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar7 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar7,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar7 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar5 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_1;
      if (pEVar5 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pGVar6 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        pEVar5 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (pEVar5 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,(Object *)pGVar6,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_1 = pEVar5;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_1,
                        pEVar5);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar4,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      original = (this->fields).spawnRoleUnlockPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar8 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                          );
      value[1].klass = pOVar8;
      func_?();
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (value[1].klass != (Object__Class *)0x0) {
          SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Initialize
                    ((SpawnRoleUnlockedPopupController *)value[1].klass,
                     (uint)(this->fields).tierRequirment,0,1,(this->fields).woid,(MethodInfo *)0x0);
          pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&(this->fields).woid,(MethodInfo *)0x0);
          pSVar9 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_PLAY_WOID_,pSVar9,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar9,(MethodInfo *)0x0);
          (this->fields).haveShownFreeTryUnlock = 1;
          return;
        }
      }
      goto code_?;
    }
    pAVar10 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar10 = pAVar7;
    }
    if (pAVar10 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar10;
    pAVar10 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar10 = pAVar7;
    }
    if (pAVar10 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
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
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
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
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_00,(Object *)this,
                     MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar3 != (IAdManager *)0x0) {
            func_?(6);
            return;
          }
        }
      }
      else {
        GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
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
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0___OnPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0);
    func_?(&StringLiteral_LOOK_WOID_);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0);
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
                 MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0___OnPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                  ((SpawnRoleSelectionSkillMenu *)value[1].klass,(this->fields).woid,
                   (uint)(this->fields).tierRequirment,(this->fields).spawnRolePreviewObject,
                   (MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(this->fields).woid,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_LOOK_WOID_,pSVar2,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar2,(MethodInfo *)0x0);
        return;
      }
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
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
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
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      pEVar3 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_1;
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
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
      pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_1 = pEVar3;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_1,
                        pEVar3);
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
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_0;
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
        (this->fields).haveShownFreeTryUnlock = 0;
        return;
      }
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      if (pEVar3 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)0x0,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_0 = pEVar3;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_0,
                        pEVar3);
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

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_RewardedAdCallback
               (GamePassesSpawnRoleRewardInfo *this,RewardedAdResult__Enum result,MethodInfo *method
               )

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
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
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
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1;
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
code_?:
      func_?();
      bVar3 = *extraout_EDX;
      *(char *)&pGVar2->klass = *(char *)&pGVar2->klass + (char)extraout_EDX;
      bVar4 = *extraout_EDX;
      pcVar5 = (char *)((int)&pGVar2[-0x7295080].fields._.m_CachedPtr + 2);
      *pcVar5 = *pcVar5 + (char)((uint)extraout_EDX >> 8);
      bVar3 = (byte)((uint)object >> 8) | bVar3 | bVar4 | *extraout_EDX;
      extraout_EDX[extraout_ECX + -0x74aaefc6] = extraout_EDX[extraout_ECX + -0x74aaefc6] + bVar3;
      in((short)extraout_EDX);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__GameObject,pGVar2,0,
                        CONCAT22((short)((uint)object >> 0x10),CONCAT11(bVar3,(char)object)));
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
        func_?(&
                        SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&StringLiteral_Preview_Root___TierShopItem);
        func_?(&StringLiteral_SpawnRole);
        cRam_? = '\x01';
      }
      pSVar6 = (this->fields).spawnRolePreviewer;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pSVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        pSVar6 = (this->fields).spawnRolePreviewer;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pSVar6,(MethodInfo *)0x0);
      }
      pSVar6 = (this->fields).spawnRolePreviewerPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pSVar6 = (SpawnRolePreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pSVar6,
                          SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                         );
      (this->fields).spawnRolePreviewer = pSVar6;
      func_?(&(this->fields).spawnRolePreviewer,pSVar6);
      pGVar2 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)result,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      if (pGVar2 != (GameObject *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        if (pTVar8 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar8,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                     (MethodInfo *)0x0);
          this_01 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (this_01,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_01,(MethodInfo *)0x0);
            pSVar6 = (this->fields).spawnRolePreviewer;
            if (pSVar6 != (SpawnRolePreviewer *)0x0) {
              cameraOffset.z = -6.0;
              cameraOffset.x = 0.0;
              cameraOffset.y = 1.5;
              previewPosition.z = (float)(this->fields).spawnRoleIndex * _UNK_?;
              previewPosition.x = 500.0;
              previewPosition.y = 500.0;
              SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                        (pSVar6,(this->fields).previewWidth,(this->fields).previewHeight,
                         CameraClearFlags__Enum_Color,
                         LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,
                         pTVar8,previewPosition,StringLiteral_SpawnRole,
                         (this->fields).spawnRoleIndex,pGVar2,(MethodInfo *)0x0);
              pSVar6 = (this->fields).spawnRolePreviewer;
              if ((pSVar6 != (SpawnRolePreviewer *)0x0) &&
                 (this_00 = (this->fields).spawnRoleImage, this_00 != (RawImage *)0x0)) {
                UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                          (this_00,(Texture *)(pSVar6->fields).previewTexture,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1 = callbackFunction;
    ppEVar10 = &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1;
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    return;
  case RewardedAdResult__Enum_RewardUnlocked:
    GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0;
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0 = callbackFunction;
    ppEVar10 = &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0;
    break;
  default:
    return;
  }
  func_?(ppEVar10,callbackFunction);
code_?:
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_SetupPreviewImage
               (GamePassesSpawnRoleRewardInfo *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&
                    SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___TierShopItem);
    func_?(&StringLiteral_SpawnRole);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = (this->fields).spawnRolePreviewer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pSVar1,(MethodInfo *)0x0);
  }
  pSVar1 = (this->fields).spawnRolePreviewerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar1;
  func_?(&(this->fields).spawnRolePreviewer,pSVar1);
  this_01 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        pSVar1 = (this->fields).spawnRolePreviewer;
        if (pSVar1 != (SpawnRolePreviewer *)0x0) {
          cameraOffset.z = -6.0;
          cameraOffset.x = 0.0;
          cameraOffset.y = 1.5;
          previewPosition.z = (float)(this->fields).spawnRoleIndex * _UNK_?;
          previewPosition.x = 500.0;
          previewPosition.y = 500.0;
          SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                    (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,
                     LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar3,
                     previewPosition,StringLiteral_SpawnRole,(this->fields).spawnRoleIndex,this_01,
                     (MethodInfo *)0x0);
          pSVar1 = (this->fields).spawnRolePreviewer;
          if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
             (this_00 = (this->fields).spawnRoleImage, this_00 != (RawImage *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_00,(Texture *)(pSVar1->fields).previewTexture,(MethodInfo *)0x0);
            return;
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


/* Void ShowAd() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_ShowAd
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
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
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_00,(Object *)this,
                     MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar3 != (IAdManager *)0x0) {
            func_?(6);
            return;
          }
        }
      }
      else {
        GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_StartPlaying
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
      this = (GamePassesSpawnRoleRewardInfo *)&UNK_?;
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


/* Void Update() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Update
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
                    MethodInfo__GamePassesSpawnRoleRewardInfo____c___Update_b__43_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    cRam_? = '\x01';
  }
  if ((this->fields).enterPlayWhenPlayerCanSpawn != 0) {
    bVar1 = GamePassesSpawnRoleRewardInfo_CanSpawn(this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__43_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          func_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___Update_b__43_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__43_0 = callbackFunction;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__43_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      (this->fields).enterPlayWhenPlayerCanSpawn = 0;
      GamePassesSpawnRoleRewardInfo_OnPlayPressed(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* GamePassesSpawnRoleRewardInfo() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo__ctor
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  (this->fields).haveShownFreeTryUnlock = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

