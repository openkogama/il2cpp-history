
/* Void CreateSkillSelectionElement(String, KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionMenu::
     SpawnRoleSkillSelectionMenu_CreateSkillSelectionElement
               (SpawnRoleSkillSelectionMenu *this,String *skillKey,
               KogamaSettingWrapperBase *skillSetting,MethodInfo *method)

{
  pKVar1 = skillSetting;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  original = (this->fields).skillSelectionElementPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (IAttributeSetting__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)original,
                       SpawnRoleSkillSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionElement>_SpawnRoleSkillSelectionElement_
                      );
  pIVar2 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  skillDataManager = (this->fields).skillDataManager;
  if (skillSetting == (KogamaSettingWrapperBase *)0x0) goto code_?;
  iVar3 = func_?(skillSetting,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                         );
  pIVar4 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  if (iVar3 == 0) goto code_?;
  iVar3 = func_?(skillSetting,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                         );
  pIVar2 = pIVar4;
  if (iVar3 == 0) goto code_?;
  skillCost = func_?(0,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,iVar3);
  skillSetting = (KogamaSettingWrapperBase *)
                 CONCAT31(skillSetting._1_3_,(this->fields).spawnRoleTier);
  pIVar2 = this_00;
  if (this_00 == (IAttributeSetting__Class *)0x0) {
code_?:
    func_?(0);
    pKVar5 = extraout_EDX;
  }
  else {
    bVar6 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if (((pKVar1->klass->_1).naturalAligment < bVar6) ||
       ((pKVar1->klass->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    skillSetting_00 = (KogamaSettingValueWrapperBase *)0x0;
    if (bVar7) {
      skillSetting_00 = (KogamaSettingValueWrapperBase *)pKVar1;
    }
    pKVar5 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    if (skillSetting_00 != (KogamaSettingValueWrapperBase *)0x0) {
      SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_Initialize
                ((SpawnRoleSkillSelectionElement *)this_00,skillKey,skillDataManager,skillCost,
                 (this->fields).spawnRoleCost,(GamePassTier__Enum)skillSetting,skillSetting_00,
                 (this->fields).addSkillCallback,(this->fields).cantAddSkillCallback,
                 (MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,(this->fields).skillSelectionElementContainer,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(pKVar1,pKVar5);
code_?:
  func_?(pKVar1,pIVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(SpawnRolesSkillDataManager, KogamaSettingWrapperBase, SkillCategory, Int32,
   GamePassTier,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
               (SpawnRoleSkillSelectionMenu *this,SpawnRolesSkillDataManager *skillDataManager,
               KogamaSettingWrapperBase *notAppliedSettings,SkillCategory__Enum skillCategory,
               int32_t spawnRoleCost,GamePassTier__Enum spawnRoleTier,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *addSkillCallback,UnityAction *cantAddSkillCallback,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  if (notAppliedSettings == (KogamaSettingWrapperBase *)0x0) {
    this_02 = (this->fields).noSkillsText;
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    if (this_02 != (GameObject *)0x0) {
      bVar9 = 1;
      pLStack_8 = (Link__Array *)&stack0xffffffa8;
      pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,bVar9,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pOStack_3;
      return;
    }
  }
  else {
    (this->fields).spawnRoleCost = spawnRoleCost;
    (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
    (this->fields).addSkillCallback = addSkillCallback;
    (this->fields).skillDataManager = skillDataManager;
    (this->fields).cantAddSkillCallback = cantAddSkillCallback;
    bVar9 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((notAppliedSettings->klass->_1).naturalAligment < bVar9) ||
       ((notAppliedSettings->klass->_1).typeHierarchy[bVar9 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)0x0;
    if (bVar10) {
      this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)notAppliedSettings;
    }
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    if (this_01 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) goto code_?;
    notAppliedSettings = (KogamaSettingWrapperBase *)0x0;
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_01,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_12,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar11->dictionary;
      auStack_6._4_4_ = pDVar11->next;
      auStack_6._8_4_ = pDVar11->stamp;
      auStack_6._12_4_ = (pDVar11->current).key;
      auStack_6._16_4_ = (pDVar11->current).value;
      iStack_1 = 0;
      while (cVar13 = func_?(), cVar13 != '\0') {
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                              );
        DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_12.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Key__
        ;
        pSVar14 = (String *)func_?();
        if (skillDataManager == (SpawnRolesSkillDataManager *)0x0) goto code_?;
        SVar15 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
                          (skillDataManager,pSVar14,(MethodInfo *)0x0);
        if (SVar15 == skillCategory) {
          pSVar14 = (String *)func_?();
          skillSetting = (KogamaSettingWrapperBase *)func_?();
          SpawnRoleSkillSelectionMenu_CreateSkillSelectionElement
                    (this,pSVar14,skillSetting,(MethodInfo *)0x0);
          notAppliedSettings = (KogamaSettingWrapperBase *)0x1000000;
        }
      }
      pLStack_8->klass = (Link__Array__Class *)0xa4;
      iStack_1 = -1;
      func_?();
      this_02 = (this->fields).noSkillsText;
      if (this_02 != (GameObject *)0x0) {
        bVar9 = notAppliedSettings._3_1_ ^ 1;
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  notAppliedSettings = extraout_EDX;
code_?:
  func_?(notAppliedSettings,
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

