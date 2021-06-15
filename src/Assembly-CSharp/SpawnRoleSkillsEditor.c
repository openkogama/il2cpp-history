
/* Void AddSkillCallback(KogamaSettingValueWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_AddSkillCallback
               (SpawnRoleSkillsEditor *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pAVar1 = (this->fields).attributeSettingsManager;
  if (pAVar1 != (AttributeSettingsManager *)0x0) {
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
    ::AttributeSettingsManager::AttributeSettingsManager_UpdateSetting
              (pAVar1,attributeSetting,(MethodInfo *)0x0);
    pAVar1 = (this->fields).attributeSettingsManager;
    if (pAVar1 != (AttributeSettingsManager *)0x0) {
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
      AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_Submit
                (pAVar1,(MethodInfo *)0x0);
      if (attributeSetting != (KogamaSettingValueWrapperBase *)0x0) {
        skillKey = (String *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)attributeSetting,(MethodInfo *)0x0);
        SpawnRoleSkillsEditor_CreateSkillSetting
                  (this,skillKey,(KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
        this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).updateSkillCostCallback;
        if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
          AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                    (this_00,(MethodInfo *)0x0);
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


/* Void CreateSkillSetting(String, KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_CreateSkillSetting
               (SpawnRoleSkillsEditor *this,String *skillKey,
               KogamaSettingWrapperBase *skillSettingData,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).skillDataManagerPrefab;
  if (pSVar1 == (SpawnRolesSkillDataManager *)0x0) {
code_?:
    func_?(0);
    pKVar2 = extraout_EDX;
    skillSettingData = (KogamaSettingWrapperBase *)unaff_EDI;
  }
  else {
    this_01 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsSettingsClone
                        (pSVar1,skillKey,(MethodInfo *)0x0);
    pSVar1 = (this->fields).skillDataManagerPrefab;
    this = (SpawnRoleSkillsEditor *)
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    unaff_EDI = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)skillSettingData;
    if (skillSettingData == (KogamaSettingWrapperBase *)0x0) goto code_?;
    iVar3 = func_?(skillSettingData,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            ,pSVar1);
    if (iVar3 == 0) goto code_?;
    this = (SpawnRoleSkillsEditor *)
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    iVar3 = func_?(skillSettingData,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    if (iVar3 == 0) goto code_?;
    uVar4 = func_?(0,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            ,iVar3);
    uVar5 = (object->fields).spawnRoleTier;
    iVar6 = (object->fields).spawnRoleCost;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)object,
               MethodInfo__SpawnRoleSkillsEditor__RemoveSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__UnityAction_System__Object__void__
              );
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,(Object *)object,
               MethodInfo__SpawnRoleSkillsEditor__UpdateSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__UnityAction_System__Object__void__
              );
    this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_04,(Object *)object,MethodInfo__SpawnRoleSkillsEditor__CantUpdateSkillCallback__
               ,(MethodInfo *)0x0);
    this = (SpawnRoleSkillsEditor *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )this,(Object *)object,MethodInfo__SpawnRoleSkillsEditor__CantRemoveSkillCallback__,
               (MethodInfo *)0x0);
    if (this_01 == (SkillSettingBase *)0x0) goto code_?;
    bVar7 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if (((skillSettingData->klass->_1).naturalAligment < bVar7) ||
       ((skillSettingData->klass->_1).typeHierarchy[bVar7 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pKVar9 = (KogamaSettingWrapperBase *)0x0;
    if (bVar8) {
      pKVar9 = skillSettingData;
    }
    pKVar2 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    if (pKVar9 != (KogamaSettingWrapperBase *)0x0) {
      unaff_EDI = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)&UNK_?;
      (*(code *)(this_01->klass->vtable).Initialize.method)
                (this_01,&UNK_?,pSVar1,uVar4,iVar6,uVar5,pKVar9,this_02,this_03,this_04,
                 this,(this_01->klass->vtable).UpdateSkillData.methodPtr);
      this_00 = (object->fields).skillSettingList;
      if (this_00 != (List_1_SkillSettingBase_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this_01,
                   MethodInfo__System__Collections__Generic__List<SkillSettingBase>__Add_SkillSettingBase_
                  );
        pSVar1 = (object->fields).skillDataManagerPrefab;
        if (pSVar1 != (SpawnRolesSkillDataManager *)0x0) {
          unaff_EDI = this_04;
          SVar10 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
                            (pSVar1,(String *)&UNK_?,(MethodInfo *)0x0);
          if (SVar10 == SkillCategory__Enum_Defence) {
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_01,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar11,(object->fields).defenceSkillsContainer,0,(MethodInfo *)0x0);
              return;
            }
          }
          else if (SVar10 == SkillCategory__Enum_Offence) {
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_01,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar11,(object->fields).offenceSkillsContainer,0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (SVar10 != SkillCategory__Enum_Tactical) {
              return;
            }
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_01,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar11,(object->fields).tacticalSkillsContainer,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(skillSettingData,pKVar2);
code_?:
  func_?(skillSettingData,this);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void CreateSkillSettings() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_CreateSkillSettings
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).attributeSettingsManager;
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (this_00 != (AttributeSettingsManager *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pSVar9 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                          (this_00,(MethodInfo *)0x0);
    if (pSVar9 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    bVar10 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pSVar9->klass->_1).naturalAligment < bVar10) ||
       ((pSVar9->klass->_1).typeHierarchy[bVar10 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)0x0;
    if (bVar11) {
      this_01 = pSVar9;
    }
    if (this_01 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) goto code_?;
    this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_01,(MethodInfo *)0x0);
    if (this_02 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffffb4,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar12->dictionary;
      auStack_6._4_4_ = pDVar12->next;
      auStack_6._8_4_ = pDVar12->stamp;
      auStack_6._12_4_ = (pDVar12->current).key;
      auStack_6._16_4_ = (pDVar12->current).value;
      uStack_1 = 0;
      while (cVar13 = func_?(), cVar13 != '\0') {
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                              );
        auStack_6._0_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Key__
        ;
        skillKey = (String *)func_?();
        auStack_6._0_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
        ;
        skillSettingData = (KogamaSettingWrapperBase *)func_?();
        SpawnRoleSkillsEditor_CreateSkillSetting(this,skillKey,skillSettingData,(MethodInfo *)0x0);
      }
      *puStack_8 = 100;
      uStack_1 = 0xffffffff;
      func_?();
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Initialize(Int32, GamePassTier, AttributeSettingsManager, UnityAction) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_Initialize
               (SpawnRoleSkillsEditor *this,int32_t spawnRoleCost,GamePassTier__Enum spawnRoleTier,
               AttributeSettingsManager *spawnRoleAttributeSettingsManager,
               UnityAction *updateSkillCost,MethodInfo *method)

{
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  (this->fields).attributeSettingsManager = spawnRoleAttributeSettingsManager;
  (this->fields).updateSkillCostCallback = updateSkillCost;
  SpawnRoleSkillsEditor_CreateSkillSettings(this,(MethodInfo *)0x0);
  return;
}


/* Void OnAddDefenceSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddDefenceSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleSkillsEditor___OnAddDefenceSkillPressed_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pSVar1 = (this->fields).skillSelectionMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRoleSkillSelectionMenu *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pSVar1;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_2 = CONCAT31(GStack_2._1_3_,(this->fields).spawnRoleTier);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__UnityAction_System__Object__void__
                );
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleSkillSelectionMenu *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  (pSVar1,(SpawnRolesSkillDataManager *)0x0,notAppliedSettings,
                   SkillCategory__Enum_Defence,spawnRoleCost,GStack_2,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)pUVar3,(UnityAction *)this_02,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this_01,
                   MethodInfo__SpawnRoleSkillsEditor___OnAddDefenceSkillPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnAddOffenceSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddOffenceSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleSkillsEditor___OnAddOffenceSkillPressed_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pSVar1 = (this->fields).skillSelectionMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRoleSkillSelectionMenu *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pSVar1;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_2 = CONCAT31(GStack_2._1_3_,(this->fields).spawnRoleTier);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__UnityAction_System__Object__void__
                );
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleSkillSelectionMenu *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  (pSVar1,(SpawnRolesSkillDataManager *)0x0,notAppliedSettings,
                   SkillCategory__Enum_Offence,spawnRoleCost,GStack_2,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)pUVar3,(UnityAction *)this_02,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this_01,
                   MethodInfo__SpawnRoleSkillsEditor___OnAddOffenceSkillPressed_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnAddTacticalSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddTacticalSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleSkillsEditor___OnAddTacticalSkillPressed_c__AnonStorey2;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pSVar1 = (this->fields).skillSelectionMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRoleSkillSelectionMenu *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pSVar1;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_2 = CONCAT31(GStack_2._1_3_,(this->fields).spawnRoleTier);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__UnityAction_System__Object__void__
                );
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleSkillSelectionMenu *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  (pSVar1,(SpawnRolesSkillDataManager *)0x0,notAppliedSettings,
                   SkillCategory__Enum_Tactical,spawnRoleCost,GStack_2,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)pUVar3,(UnityAction *)this_02,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this_01,
                   MethodInfo__SpawnRoleSkillsEditor___OnAddTacticalSkillPressed_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnDestroy
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  pAVar1 = (this->fields).attributeSettingsManager;
  if (pAVar1 == (AttributeSettingsManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (pAVar1->fields).settingsManager;
  if (pSVar3 == (SettingsManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar4 = (pSVar3->fields).settingsReporter;
  if (pSVar4 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((pSVar4->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar5 = (pSVar4->fields).worldObject;
      pAVar6 = (Action_2_Int32_Object_ *)(pSVar4->fields).partialDataUpdate;
      if ((pMVar5 == (MVWorldObject *)0x0) ||
         (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)pMVar5,(MethodInfo *)0x0),
         pAVar6 == (Action_2_Int32_Object_ *)0x0)) goto code_?;
      System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                (pAVar6,(int32_t)pIVar7,(Object *)(pSVar4->fields).DeltaData,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
      (pSVar4->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    if ((pSVar4->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return;
    }
    pMVar5 = (pSVar4->fields).worldObject;
    pAVar6 = (Action_2_Int32_Object_ *)(pSVar4->fields).partialDataRemove;
    if ((pMVar5 != (MVWorldObject *)0x0) &&
       (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMVar5,(MethodInfo *)0x0),
       pAVar6 != (Action_2_Int32_Object_ *)0x0)) {
      System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                (pAVar6,(int32_t)pIVar7,(Object *)(pSVar4->fields).DeltaRemovalData,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
      (pSVar4->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveSkillCallback(KogamaSettingValueWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_RemoveSkillCallback
               (SpawnRoleSkillsEditor *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pAVar1 = (this->fields).attributeSettingsManager;
  if (pAVar1 != (AttributeSettingsManager *)0x0) {
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
    ::AttributeSettingsManager::AttributeSettingsManager_RemoveAvatarSetting
              (pAVar1,attributeSetting,(MethodInfo *)0x0);
    pAVar1 = (this->fields).attributeSettingsManager;
    if (pAVar1 != (AttributeSettingsManager *)0x0) {
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
      AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_Submit
                (pAVar1,(MethodInfo *)0x0);
      this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).updateSkillCostCallback;
      if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowPowerErrorTipBubble() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_ShowPowerErrorTipBubble
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cantAddSkillInfoTextBubble;
  if (this_00 != (GamePassesTextBubble *)0x0) {
    GamePassesTextBubble::GamePassesTextBubble_Activate
              (this_00,StringLiteral_The_Power_of_the_Class_will_be_t,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateSkillCallback(KogamaSettingValueWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSkillCallback
               (SpawnRoleSkillsEditor *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  this_00 = (this->fields).attributeSettingsManager;
  if (this_00 != (AttributeSettingsManager *)0x0) {
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
    ::AttributeSettingsManager::AttributeSettingsManager_UpdateSetting
              (this_00,attributeSetting,(MethodInfo *)0x0);
    this_01 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).updateSkillCostCallback;
    if (this_01 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
      AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                (this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateSpawnRoleCost(Int32) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSpawnRoleCost
               (SpawnRoleSkillsEditor *this,int32_t newSpawnRoleCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  (this->fields).spawnRoleCost = newSpawnRoleCost;
  pLVar1 = (this->fields).skillSettingList;
  while (pLVar1 != (List_1_SkillSettingBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).skillSettingList;
    if ((pLVar1 == (List_1_SkillSettingBase_ *)0x0) ||
       (this_00 = (SkillSettingBase *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                            ), this_00 == (SkillSettingBase *)0x0)) break;
    SkillSettingBase::SkillSettingBase_UpdateSpawnRoleCost
              (this_00,newSpawnRoleCost,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).skillSettingList;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSpawnRoleTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSpawnRoleTier
               (SpawnRoleSkillsEditor *this,GamePassTier__Enum newSpawnRoleTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  (this->fields).spawnRoleTier = (uint8_t)newSpawnRoleTier;
  pLVar1 = (this->fields).skillSettingList;
  while (pLVar1 != (List_1_SkillSettingBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).skillSettingList;
    if ((pLVar1 == (List_1_SkillSettingBase_ *)0x0) ||
       (this_00 = (SkillSettingBase *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                            ), this_00 == (SkillSettingBase *)0x0)) break;
    SkillSettingBase::SkillSettingBase_UpdateSpawnRoleTier
              (this_00,newSpawnRoleTier,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).skillSettingList;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SpawnRoleSkillsEditor() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor__ctor
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<SkillSettingBase>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<SkillSettingBase>__List__);
  (this->fields).skillSettingList = (List_1_SkillSettingBase_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

