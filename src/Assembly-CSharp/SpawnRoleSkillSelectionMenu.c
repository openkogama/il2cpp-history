
/* Void CreateSkillSelectionElement(String, KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionMenu::
     SpawnRoleSkillSelectionMenu_CreateSkillSelectionElement
               (SpawnRoleSkillSelectionMenu *this,String *skillKey,
               KogamaSettingWrapperBase *skillSetting,MethodInfo *method)

{
  skillSetting_00 = skillSetting;
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
  skillCost = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  skillDataManager = (this->fields).skillDataManager;
  if (skillSetting == (KogamaSettingWrapperBase *)0x0) goto code_?;
  iVar1 = func_?(skillSetting,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                         );
  pIVar2 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  if ((iVar1 == 0) ||
     (piVar3 = (int *)func_?(skillSetting,
                                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                     ), skillCost = pIVar2, piVar3 == (int *)0x0))
  goto code_?;
  iVar1 = *piVar3;
  uVar4 = 0;
  if (*(ushort *)(iVar1 + 0xb6) != 0) {
    do {
      if (*(IAttributeSetting__Class **)(*(int *)(iVar1 + 0x58) + (uint)uVar4 * 8) ==
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
         ) {
        puVar5 = (undefined4 *)
                 (iVar1 + (*(int *)(*(int *)(iVar1 + 0x58) + 4 + (uint)uVar4 * 8) + 0x18) * 8);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(iVar1 + 0xb6));
  }
  puVar5 = (undefined4 *)
           func_?(piVar3,
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           ,0);
code_?:
  skillCost = (IAttributeSetting__Class *)(*(code *)*puVar5)(piVar3,puVar5[1]);
  skillSetting = (KogamaSettingWrapperBase *)
                 CONCAT31(skillSetting._1_3_,(this->fields).spawnRoleTier);
  if (this_00 == (IAttributeSetting__Class *)0x0) {
code_?:
    func_?();
    pKVar6 = extraout_EDX;
  }
  else {
    bVar7 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    pKVar6 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    if ((bVar7 <= (skillSetting_00->klass->_1).naturalAligment) &&
       ((skillSetting_00->klass->_1).typeHierarchy[bVar7 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_Initialize
                ((SpawnRoleSkillSelectionElement *)this_00,skillKey,skillDataManager,
                 (int32_t)skillCost,(this->fields).spawnRoleCost,(GamePassTier__Enum)skillSetting,
                 (KogamaSettingValueWrapperBase *)skillSetting_00,(this->fields).addSkillCallback,
                 (this->fields).cantAddSkillCallback,(MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      skillCost = this_00;
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,(this->fields).skillSelectionElementContainer,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(skillSetting_00,pKVar6);
code_?:
  func_?(skillSetting_00,skillCost);
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
  if (notAppliedSettings == (KogamaSettingWrapperBase *)0x0) {
    this_00 = (this->fields).noSkillsText;
    if (this_00 != (GameObject *)0x0) {
      bVar7 = 1;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,bVar7,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
  }
  else {
    (this->fields).spawnRoleCost = spawnRoleCost;
    (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
    method_00 = (MethodInfo *)&(this->fields).skillDataManager;
    *(SpawnRolesSkillDataManager **)method_00 = skillDataManager;
    func_?(method_00,skillDataManager);
    ppUVar8 = &(this->fields).addSkillCallback;
    *ppUVar8 = addSkillCallback;
    func_?(ppUVar8,addSkillCallback);
    ppUVar9 = &(this->fields).cantAddSkillCallback;
    *ppUVar9 = cantAddSkillCallback;
    func_?(ppUVar9,cantAddSkillCallback);
    notAppliedSettings = (KogamaSettingWrapperBase *)0x0;
    bVar7 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    pKVar10 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (((((KogamaSettingWrapperBase *)pMVar1)->klass->_1).naturalAligment < bVar7) ||
       ((((KogamaSettingWrapperBase *)pMVar1)->klass->_1).typeHierarchy[bVar7 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    if (((KogamaSettingWrapperBase *)((int)pMVar1 + 0x10))->klass !=
        (KogamaSettingWrapperBase__Class *)0x0) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_12,
                          (Dictionary_2_System_UInt32_System_Object_ *)
                          ((KogamaSettingWrapperBase *)((int)pMVar1 + 0x10))->klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      uStack_13 = 0;
      DStack_14._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar11->_dictionary;
      DStack_14._version = pDVar11->_version;
      DStack_14._index = pDVar11->_index;
      DStack_14._current.key = (Object *)(pDVar11->_current).key;
      DStack_14._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
      uStack_2 = 1;
      pDStack_15 = &DStack_14;
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_14,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        skillKey = DStack_14._current.key;
        if (bVar16 == 0) break;
        pKStack_17 = (KogamaSettingWrapperBase *)DStack_14._current.value;
        pMVar1 = (MethodInfo *)DStack_14._current.key;
        if (skillDataManager == (SpawnRolesSkillDataManager *)0x0) goto code_?;
        SVar18 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
                          (skillDataManager,(String *)DStack_14._current.key,(MethodInfo *)0x0);
        pMVar1 = (MethodInfo *)skillKey;
        if (SVar18 == skillCategory) {
          method_00 = (MethodInfo *)skillKey;
          SpawnRoleSkillSelectionMenu_CreateSkillSelectionElement
                    (this,(String *)skillKey,pKStack_17,(MethodInfo *)0x0);
          notAppliedSettings = (KogamaSettingWrapperBase *)0x1000000;
        }
      }
      uStack_2 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_14,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,method_00);
      uStack_2 = 0xffffffff;
      this_00 = (this->fields).noSkillsText;
      if (this_00 != (GameObject *)0x0) {
        bVar7 = notAppliedSettings._3_1_ ^ 1;
        goto code_?;
      }
    }
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pKVar10 = extraout_EDX;
code_?:
  func_?(pMVar1,pKVar10);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

