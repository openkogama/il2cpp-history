
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
  pOStack_7 = (Object *)0x0;
  this_00 = (this->fields).spawnRole;
  if ((this_00 != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_01 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (this_00,(MethodInfo *)0x0), this_01 != (AttributeSettingsManager *)0x0))
  {
    pKVar8 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_01,(MethodInfo *)0x0);
    if (pKVar8 == (KogamaSettingWrapperBase *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    bVar9 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKVar8->klass->_1).naturalAligment < bVar9) ||
       ((pKVar8->klass->_1).typeHierarchy[bVar9 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?();
    }
    else if (pKVar8[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffa0,
                          (Dictionary_2_System_UInt32_System_Object_ *)pKVar8[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      pDStack_11 = &DStack_12;
      uStack_13 = 0;
      DStack_12._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar10->_dictionary;
      DStack_12._version = pDVar10->_version;
      DStack_12._index = pDVar10->_index;
      DStack_12._current.key = (Object *)(pDVar10->_current).key;
      DStack_12._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      uStack_1 = 1;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_12,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar14 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_12,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return (int32_t)pOVar6;
        }
        pOVar6 = DStack_12._current.value;
        this = (GamePassesSpawnRoleRewardInfo *)
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        if (DStack_12._current.value == (Object *)0x0) break;
        iVar15 = func_?(DStack_12._current.value,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                               );
        if (iVar15 == 0) goto code_?;
        this = (GamePassesSpawnRoleRewardInfo *)
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        piStack_16 = (int *)func_?(pOVar6,
                                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                           );
        if (piStack_16 == (int *)0x0) goto code_?;
        iVar15 = *piStack_16;
        uVar17 = 0;
        uStack_18 = 0;
        uVar19 = *(ushort *)(iVar15 + 0xb6);
        uStack_20 = (uint)uVar19;
        if (uVar19 != 0) {
          do {
            if (*(IAttributeSetting__Class **)(*(int *)(iVar15 + 0x58) + (uint)uVar17 * 8) ==
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
               ) {
              puVar21 = (undefined4 *)
                       (iVar15 + (*(int *)(*(int *)(iVar15 + 0x58) + 4 + (uint)uVar17 * 8) + 0x18) * 8
                       );
              goto code_?;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar19);
        }
        puVar21 = (undefined4 *)
                 func_?(piStack_16,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 ,0);
code_?:
        iVar15 = (*(code *)*puVar21)(piStack_16,puVar21[1]);
        pOVar6 = (Object *)((int)&pOStack_7->klass + iVar15);
        pOStack_7 = pOVar6;
      }
    }
  }
  func_?();
code_?:
  uVar22 = func_?(pOVar6,this);
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  iVar24 = (*pcVar23)();
  return iVar24;
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
                  (pGVar1,0xc2,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GamePassesSpawnRoleRewardInfo____c___Close_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0 = callbackFunction;
    func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0,
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
              mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
              BindingRestrictions+TestBuilder+AndNode]::
              Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                        ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_
                          *)pMVar3,(MethodInfo *)0x0);
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
  ppMVar1 = &(this->fields).spawnRole;
  *ppMVar1 = spawnRole;
  func_?(ppMVar1,spawnRole);
  (this->fields).tierRequirment = (undefined1)tierRequirment;
  if (spawnRole == (MVAvatarSpawnRoleCreator *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    CStack_2.g = (float)extraout_ECX;
    pAVar3 = extraout_EDX;
  }
  else {
    MVar4 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                       (spawnRole,(MethodInfo *)0x0);
    (this->fields).team = MVar4;
    ppGVar5 = &(this->fields).spawnRolePreviewObject;
    *ppGVar5 = spawnRolePreviewObject;
    func_?(ppGVar5,spawnRolePreviewObject);
    (this->fields).woid = (spawnRole->fields)._._._._.id;
    pIVar6 = (this->fields).spawnRoleTeamImage;
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
      pCVar7 = (Color *)&puStack_8;
    }
    else if (MVar4 == MVTeam__Enum_Red) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamRed;
      pCVar7 = (Color *)&stack0xffffffb8;
    }
    else if (MVar4 == MVTeam__Enum_Green) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamGreen;
      pCVar7 = &CStack_9;
    }
    else if (MVar4 == MVTeam__Enum_Yellow) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamYellow;
      pCVar7 = &CStack_2;
    }
    else {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_TeamNone;
      pCVar7 = &CStack_10;
    }
    pCVar7 = Styles::Styles_GetColor(pCVar7,colorStyle,(MethodInfo *)0x0);
    if (pIVar6 == (Image *)0x0) goto code_?;
    (*(code *)(pIVar6->klass->vtable).set_color.method)
              (pIVar6,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
               (pIVar6->klass->vtable).get_raycastTarget.methodPtr);
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
    (*(code *)(pTVar17->klass->vtable).set_text.method)
              (pTVar17,pSVar18,(pTVar17->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar17 = (this->fields).spawnRoleCostAmount;
    pCVar7 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                        ((Color *)&puStack_8,IStack_16.m_value,(MethodInfo *)0x0);
    if (pTVar17 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar17->klass->vtable).set_color.method)
              (pTVar17,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
               (pTVar17->klass->vtable).get_raycastTarget.methodPtr);
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
    ppAVar21 = &(spawnRole->fields).OnBodyUpdate;
    pAVar22 = *ppAVar21;
    pNVar23 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar23,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__,(MethodInfo *)0x0)
    ;
    pAVar22 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar22,(Delegate *)pNVar23,(MethodInfo *)0x0);
    if (pAVar22 != (Action *)0x0) {
      pAVar24 = (Action *)0x0;
      if (pAVar22->klass == TypeInfo__System__Action) {
        pAVar24 = pAVar22;
      }
      if (pAVar24 != (Action *)0x0) {
        *ppAVar21 = pAVar24;
        pAVar24 = (Action *)0x0;
        if (pAVar22->klass == TypeInfo__System__Action) {
          pAVar24 = pAVar22;
        }
        if (pAVar24 != (Action *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    *ppAVar21 = (Action *)0x0;
code_?:
    func_?();
    pAVar22 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pNVar23 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar23,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    CStack_2.g = (float)mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pAVar22,(Delegate *)pNVar23,(MethodInfo *)0x0);
    if ((Action *)CStack_2.g == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
      CStack_2.b = 0.0;
code_?:
      CStack_2.g = (float)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      CStack_2.r = (float)&UNK_?;
      func_?();
      pCVar25 = (this->fields).continueButtonHandler;
      if (pCVar25 != (ContinueButtonHandler *)0x0) {
        pAVar22 = (pCVar25->fields).OnClick;
        pNVar23 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar23,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__
                   ,(MethodInfo *)0x0);
        pAVar22 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar22,(Delegate *)pNVar23,(MethodInfo *)0x0);
        if (pAVar22 == (Action *)0x0) {
          (pCVar25->fields).OnClick = (Action *)0x0;
        }
        else {
          pAVar24 = (Action *)0x0;
          if (pAVar22->klass == TypeInfo__System__Action) {
            pAVar24 = pAVar22;
          }
          if (pAVar24 == (Action *)0x0) goto code_?;
          (pCVar25->fields).OnClick = pAVar24;
          pAVar24 = (Action *)0x0;
          if (pAVar22->klass == TypeInfo__System__Action) {
            pAVar24 = pAVar22;
          }
          if (pAVar24 == (Action *)0x0) goto code_?;
        }
        func_?();
        pIVar6 = (this->fields).buttonAdImage;
        pTVar26 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if ((pTVar26 != (TogglePreviewState *)0x0) && (pIVar6 != (Image *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar6,(pTVar26->fields).freeTry == 0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pAVar22 = (Action *)0x0;
    if (((Action *)CStack_2.g)->klass == TypeInfo__System__Action) {
      pAVar22 = (Action *)CStack_2.g;
    }
    CStack_2.b = (float)TypeInfo__System__Action;
    if (pAVar22 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar22;
    CStack_2.b = (float)(Action *)0x0;
    if (((Action *)CStack_2.g)->klass == TypeInfo__System__Action) {
      CStack_2.b = CStack_2.g;
    }
    pAVar3 = TypeInfo__System__Action;
    if ((Action *)CStack_2.b != (Action *)0x0) goto code_?;
  }
  CStack_2.r = (float)&UNK_?;
  CStack_2.b = (float)pAVar3;
  CStack_2.b = (float)func_?();
  CStack_2.g = (float)extraout_ECX_00;
code_?:
  CStack_2.r = (float)&UNK_?;
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
code_?:
    func_?();
  }
  else {
    ppAVar2 = &(pMVar1->fields).OnBodyUpdate;
    pAVar3 = *ppAVar2;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__,(MethodInfo *)0x0)
    ;
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pAVar3 != (Action *)0x0) {
      pAVar5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar3;
      }
      if (pAVar5 != (Action *)0x0) {
        *ppAVar2 = pAVar5;
        pAVar5 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar3;
        }
        if (pAVar5 != (Action *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    *ppAVar2 = (Action *)0x0;
code_?:
    func_?();
    pAVar3 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pAVar3 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pCVar6 = (this->fields).continueButtonHandler;
      if (pCVar6 != (ContinueButtonHandler *)0x0) {
        pAVar3 = (pCVar6->fields).OnClick;
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__,
                   (MethodInfo *)0x0);
        pAVar3 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
        if (pAVar3 == (Action *)0x0) {
          (pCVar6->fields).OnClick = (Action *)0x0;
        }
        else {
          pAVar5 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar5 = pAVar3;
          }
          if (pAVar5 == (Action *)0x0) goto code_?;
          (pCVar6->fields).OnClick = pAVar5;
          pAVar5 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar5 = pAVar3;
          }
          if (pAVar5 == (Action *)0x0) goto code_?;
        }
        func_?();
        if ((this->fields).awaitingSpawn == 0) {
code_?:
          pSVar7 = (this->fields).spawnRolePreviewer;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pSVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            pSVar7 = (this->fields).spawnRolePreviewer;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pSVar7,(MethodInfo *)0x0);
          }
          return;
        }
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar9 != (MVLocalPlayer *)0x0) {
          this_00 = (pMVar9->fields)._.spawnRolesManager;
          this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
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
    pAVar5 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar3;
    }
    if (pAVar5 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar3;
    }
    if (pAVar5 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  method_00 = TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
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
      if (value != (Object *)0x0) {
        pOVar5 = value + 1;
        pOVar5->klass = pOVar4;
        func_?(pOVar5,pOVar4);
        pMVar6 = (this->fields).spawnRole;
        if ((pMVar6 != (MVAvatarSpawnRoleCreator *)0x0) && (pOVar5->klass != (Object__Class *)0x0))
        {
          SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                    ((SpawnRoleEditorMenu *)pOVar5->klass,(pMVar6->fields)._._._._.id,
                     (MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0___OnEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
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
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      bVar4 = (this->fields).tierRequirment;
      if (((byte)(uVar3 + 1) < bVar4) && ((byte)((pPVar2->fields).previewGamePassTier + 1) < bVar4))
      {
        pSVar5 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uStack_1 = (this->fields).tierRequirment - 1;
      }
      else {
        pSVar5 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        uStack_1 = (uint)(this->fields).tierRequirment;
      }
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
      pSVar5 = mscorlib.dll::System::String::String_Format(pSVar5,arg0,(MethodInfo *)0x0);
      pGVar6 = (this->fields).lockedTipTextBubble;
      if ((pGVar6 != (GamePassesTextBubble *)0x0) &&
         (this_00 = (pGVar6->fields).fader, this_00 != (NotificationFade *)0x0)) {
        NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
        pTVar7 = (pGVar6->fields).text;
        if (pTVar7 != (Text *)0x0) {
          (*(code *)(pTVar7->klass->vtable).set_text.method)
                    (pTVar7,pSVar5,
                     (pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          (pGVar6->fields).isActive = 1;
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
      mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
      BindingRestrictions+TestBuilder+AndNode]::
      Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)
                 pMVar4,(MethodInfo *)0x0);
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
        root_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
          pGVar6 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
          root_00 = callbackFunction_00;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)pGVar6,
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
                  ((GameObject *)root_00,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        (this->fields).enterPlayWhenPlayerCanSpawn = 1;
        return;
      }
      pMVar7 = (this->fields).spawnRole;
      if (pMVar7 != (MVAvatarSpawnRoleCreator *)0x0) {
        iVar2 = (pMVar7->fields)._._._._.id;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar4 != (MVLocalPlayer *)0x0) &&
           (pSVar8 = (pMVar4->fields).spawnRoleDataMediator, pSVar8 != (SpawnRoleDataMediator *)0x0
           )) {
          bVar9 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
                  SpawnRoleVariable_1_System_Int32__op_Equality
                            (iVar2,(SpawnRoleVariable_1_System_Int32_ *)(pSVar8->fields).woId,
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
          if (bVar9 == 0) {
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
                        (this_04,(Object *)this,
                         MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_,(MethodInfo *)0x0);
              if (this_02 != (SpawnRolesManager *)0x0) {
                SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                          (this_02,(Action_1_Int32_ *)this,(MethodInfo *)0x0);
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar1 != (MVNetworkGame *)0x0) {
                  pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
                  if (pMVar4 != (MVLocalPlayer *)0x0) {
                    MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(pMVar4,iVar2,(MethodInfo *)0x0);
                    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock
                              (1,1,(MethodInfo *)0x0);
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
              func_?();
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            pGVar10 = root;
            if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?();
            }
            callbackFunction =
                 TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              root = pGVar10;
              if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0
                 ) {
                func_?();
                root = pGVar10;
              }
              pGVar6 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
              callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)pGVar6,
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
                      (root,(BaseEventData *)0x0,
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
  uVar1 = (this->fields).tierRequirment;
  uVar2 = (uint)CONCAT11(uVar1,cRam_?);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    uVar2 = CONCAT31((uint3)uVar1,1);
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar3 == (PlayerPlanetData *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((pPVar3->fields).gamePassTier < (byte)(uVar2 >> 8)) {
      uVar1 = (this->fields).tierRequirment;
      uVar4 = CONCAT11(uVar1,(char)uVar2);
      if ((char)uVar2 == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        uVar4 = CONCAT11(uVar1,1);
        cRam_? = '\x01';
      }
      uVar2 = (uint)uVar4;
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
      playerHasUnlockedTier = (byte)(uVar4 >> 8) <= (pPVar3->fields).previewGamePassTier;
    }
    else {
      playerHasUnlockedTier = true;
    }
    uVar1 = (this->fields).tierRequirment;
    if ((char)uVar2 == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
    GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
              (this,playerHasUnlockedTier,uVar1 == (uint8_t)((pPVar3->fields).gamePassTier + 1),
               (MethodInfo *)0x0);
    if ((this->fields).isWaitingForFreeTryTier != 0) {
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGStack_6 = pGVar5;
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      pEVar7 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0;
      if (pEVar7 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        pGVar8 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        pEVar7 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar7,(Object *)pGVar8,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0 = pEVar7;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0,
                        pEVar7);
        pGVar5 = pGStack_6;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      (this->fields).isWaitingForFreeTryTier = 0;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
    if ((pPVar3->fields).previewGamePassTier < (this->fields).tierRequirment) {
      return;
    }
    if ((this->fields).haveShownFreeTryUnlock != 0) {
      return;
    }
    method_00 = TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pAVar9 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar9 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar9,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar9 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
      pAVar10 = (Action *)0x0;
code_?:
      func_?();
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar11 = pGVar5;
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      pEVar7 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_1;
      if (pEVar7 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pGVar5 = pGVar11;
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
          pGVar5 = pGVar11;
        }
        pGVar8 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        pEVar7 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar7,(Object *)pGVar8,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_1 = pEVar7;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_1,
                        pEVar7);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      original = (this->fields).spawnRoleUnlockPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar12 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                         );
      if (value != (Object *)0x0) {
        pOVar13 = value + 1;
        pOVar13->klass = pOVar12;
        func_?(pOVar13,pOVar12);
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pAVar10,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar5,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (pOVar13->klass != (Object__Class *)0x0) {
          SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Initialize
                    ((SpawnRoleUnlockedPopupController *)pOVar13->klass,
                     (uint)*(byte *)&pAVar10[1].fields._._.method_info,0,1,
                     (int32_t)pAVar10[1].fields._._.interp_invoke_impl,(MethodInfo *)0x0);
          pSVar14 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&pAVar10[1].fields._._.interp_invoke_impl,(MethodInfo *)0x0);
          pSVar14 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_PLAY_WOID_,pSVar14,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar14,(MethodInfo *)0x0);
          pAVar10[1].fields._._.field_0x33 = 1;
          return;
        }
      }
      goto code_?;
    }
    pAVar10 = (Action *)0x0;
    if (pAVar9->klass == TypeInfo__System__Action) {
      pAVar10 = pAVar9;
    }
    if (pAVar10 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar10;
    pAVar10 = (Action *)0x0;
    if (pAVar9->klass == TypeInfo__System__Action) {
      pAVar10 = pAVar9;
    }
    if (pAVar10 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0 = callbackFunction;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0,
                        callbackFunction);
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
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar3 != (IAdManager *)0x0) {
          puStack4 = (undefined *)0x6;
          func_?(6);
          return;
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
  method_00 = TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
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
               MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0___OnPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (pOVar2->klass != (Object__Class *)0x0) {
      this_00 = &(this->fields).woid;
      SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_Initialize
                ((SpawnRoleSelectionSkillMenu *)pOVar2->klass,*this_00,
                 (uint)(this->fields).tierRequirment,(this->fields).spawnRolePreviewObject,
                 (MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_LOOK_WOID_,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        pGVar4 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pGVar4,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_1 = pEVar3;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_1,
                        pEVar3);
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
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
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
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pGVar2 = pGVar6;
        if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pGVar2 = pGVar6;
        }
        pGVar4 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pGVar4,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_0 = pEVar3;
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
      (this->fields).haveShownFreeTryUnlock = 0;
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      pGVar2 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pGVar2,
                 MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1 = callbackFunction;
      ppEVar3 = &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1;
code_?:
      func_?(ppEVar3,callbackFunction);
    }
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  case RewardedAdResult__Enum_RewardUnlocked:
    GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    callbackFunction = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      pGVar2 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pGVar2,
                 MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0 = callbackFunction;
      ppEVar3 = &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0;
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
  ppSVar1 = &(this->fields).spawnRolePreviewer;
  pSVar2 = *ppSVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = *ppSVar1;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pSVar2,(MethodInfo *)0x0);
  }
  pSVar2 = (this->fields).spawnRolePreviewerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar2 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar2,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  *ppSVar1 = pSVar2;
  func_?(ppSVar1,pSVar2);
  this_01 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (GameObject *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar4,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        spawnRoleId = (this->fields).spawnRoleIndex;
        if (*ppSVar1 != (SpawnRolePreviewer *)0x0) {
          cameraOffset.z = -6.0;
          cameraOffset.x = 0.0;
          cameraOffset.y = 1.5;
          previewPosition.z = (float)spawnRoleId * _UNK_?;
          previewPosition.x = 500.0;
          previewPosition.y = 500.0;
          SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                    (*ppSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,
                     LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar4,
                     previewPosition,StringLiteral_SpawnRole,spawnRoleId,this_01,(MethodInfo *)0x0);
          if ((*ppSVar1 != (SpawnRolePreviewer *)0x0) &&
             (this_00 = (this->fields).spawnRoleImage, this_00 != (RawImage *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_00,(Texture *)((*ppSVar1)->fields).previewTexture,(MethodInfo *)0x0);
            return;
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
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0 = callbackFunction;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0,
                        callbackFunction);
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
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar3 != (IAdManager *)0x0) {
          puStack4 = (undefined *)0x6;
          func_?(6);
          return;
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

