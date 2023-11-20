
/* Void CreateSkillSelectionElement(String, KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionMenu::
     SpawnRoleSkillSelectionMenu_CreateSkillSelectionElement
               (SpawnRoleSkillSelectionMenu *this,String *skillKey,
               KogamaSettingWrapperBase *skillSetting,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
    func_?(&
                    SpawnRoleSkillSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionElement>_SpawnRoleSkillSelectionElement_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).skillSelectionElementPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (IAttributeSetting__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
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
  this = (SpawnRoleSkillSelectionMenu *)CONCAT31(this._1_3_,(this->fields).spawnRoleTier);
  pIVar2 = this_00;
  if (this_00 == (IAttributeSetting__Class *)0x0) {
code_?:
    func_?();
    pKVar5 = extraout_EDX;
  }
  else {
    pKVar5 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).naturalAligment <= (skillSetting->klass->_1).naturalAligment) &&
       ((skillSetting->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_Initialize
                ((SpawnRoleSkillSelectionElement *)this_00,skillKey,skillDataManager,skillCost,
                 (pSVar1->fields).spawnRoleCost,(GamePassTier__Enum)this,
                 (KogamaSettingValueWrapperBase *)skillSetting,(pSVar1->fields).addSkillCallback,
                 (pSVar1->fields).cantAddSkillCallback,(MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,(pSVar1->fields).skillSelectionElementContainer,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(skillSetting,pKVar5);
code_?:
  func_?(skillSetting,pIVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  pMVar1 = (MethodInfo *)notAppliedSettings;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffa0;
  puVar6 = &stack0xffffffa0;
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
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  if (notAppliedSettings == (KogamaSettingWrapperBase *)0x0) {
    this_00 = (this->fields).noSkillsText;
    if (this_00 != (GameObject *)0x0) {
      value = 1;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,value,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
  }
  else {
    (this->fields).spawnRoleCost = spawnRoleCost;
    (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
    (this->fields).skillDataManager = skillDataManager;
    method_00 = (MethodInfo *)&(this->fields).skillDataManager;
    func_?(method_00,skillDataManager);
    (this->fields).addSkillCallback = addSkillCallback;
    func_?(&(this->fields).addSkillCallback,addSkillCallback);
    (this->fields).cantAddSkillCallback = cantAddSkillCallback;
    func_?(&(this->fields).cantAddSkillCallback,cantAddSkillCallback);
    ppKVar8 = &notAppliedSettings->klass;
    notAppliedSettings = (KogamaSettingWrapperBase *)0x0;
    pKVar9 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if ((((*ppKVar8)->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       (((*ppKVar8)->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    if (((KogamaSettingWrapperBase *)((int)pMVar1 + 0x10))->klass !=
        (KogamaSettingWrapperBase__Class *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_11,
                          (Dictionary_2_System_UInt32_System_Object_ *)
                          ((KogamaSettingWrapperBase *)((int)pMVar1 + 0x10))->klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      uStack_12 = 0;
      DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar10->_dictionary;
      DStack_7._version = pDVar10->_version;
      DStack_7._index = pDVar10->_index;
      DStack_7._current.key = (Object *)(pDVar10->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      uStack_2 = 1;
      pDStack_13 = &DStack_7;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        skillKey = DStack_7._current.key;
        if (bVar14 == 0) break;
        pKStack_15 = (KogamaSettingWrapperBase *)DStack_7._current.value;
        pMVar1 = (MethodInfo *)DStack_7._current.key;
        if (skillDataManager == (SpawnRolesSkillDataManager *)0x0) goto code_?;
        SVar16 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
                          (skillDataManager,(String *)DStack_7._current.key,(MethodInfo *)0x0);
        pMVar1 = (MethodInfo *)skillKey;
        if (SVar16 == skillCategory) {
          method_00 = (MethodInfo *)skillKey;
          SpawnRoleSkillSelectionMenu_CreateSkillSelectionElement
                    (this,(String *)skillKey,pKStack_15,(MethodInfo *)0x0);
          notAppliedSettings = (KogamaSettingWrapperBase *)0x1000000;
        }
      }
      uStack_2 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,method_00);
      uStack_2 = 0xffffffff;
      this_00 = (this->fields).noSkillsText;
      if (this_00 != (GameObject *)0x0) {
        value = notAppliedSettings._3_1_ ^ 1;
        goto code_?;
      }
    }
  }
code_?:
  uVar17 = func_?();
  func_?(uVar17);
  pKVar9 = extraout_EDX;
code_?:
  func_?(pMVar1,pKVar9);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

