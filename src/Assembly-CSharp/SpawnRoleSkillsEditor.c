
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
        SpawnRoleSkillsEditor_CreateSkillSetting
                  (this,(attributeSetting->fields)._.key,
                   (KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
        pUVar2 = (this->fields).updateSkillCostCallback;
        if (pUVar2 != (UnityAction *)0x0) {
          pvStack3 = (pUVar2->fields)._._.method;
          pvStack4 = (pUVar2->fields)._._.method_code;
          (*(pUVar2->fields)._._.invoke_impl)();
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


/* Void CreateSkillSetting(String, KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_CreateSkillSetting
               (SpawnRoleSkillsEditor *this,String *skillKey,
               KogamaSettingWrapperBase *skillSettingData,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkillSettingBase>__Add_SkillSettingBase_
                   );
    func_?(&MethodInfo__SpawnRoleSkillsEditor__CantRemoveSkillCallback__);
    func_?(&MethodInfo__SpawnRoleSkillsEditor__CantUpdateSkillCallback__);
    func_?(&
                    MethodInfo__SpawnRoleSkillsEditor__RemoveSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                   );
    func_?(&
                    MethodInfo__SpawnRoleSkillsEditor__UpdateSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).skillDataManagerPrefab;
  pKVar2 = skillSettingData;
  if (pSVar1 == (SpawnRolesSkillDataManager *)0x0) {
code_?:
    func_?();
    pKVar3 = extraout_EDX;
  }
  else {
    this_01 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsSettingsClone
                        (pSVar1,skillKey,(MethodInfo *)0x0);
    pSVar1 = (this->fields).skillDataManagerPrefab;
    this = (SpawnRoleSkillsEditor *)
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if (skillSettingData == (KogamaSettingWrapperBase *)0x0) goto code_?;
    iVar4 = func_?(skillSettingData,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            ,pSVar1);
    if (iVar4 == 0) goto code_?;
    this = (SpawnRoleSkillsEditor *)
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    iVar4 = func_?(skillSettingData,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    if (iVar4 == 0) goto code_?;
    uVar5 = func_?(0,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            ,iVar4);
    uVar6 = (object->fields).spawnRoleTier;
    iVar7 = (object->fields).spawnRoleCost;
    this_02 = (UnityAction_1_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)object,
               MethodInfo__SpawnRoleSkillsEditor__RemoveSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
               ,(MethodInfo *)0x0);
    this_03 = (UnityAction_1_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)object,
               MethodInfo__SpawnRoleSkillsEditor__UpdateSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
               ,(MethodInfo *)0x0);
    this_04 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_04,(Object *)object,MethodInfo__SpawnRoleSkillsEditor__CantUpdateSkillCallback__
               ,(MethodInfo *)0x0);
    this = (SpawnRoleSkillsEditor *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this,(Object *)object,
               MethodInfo__SpawnRoleSkillsEditor__CantRemoveSkillCallback__,(MethodInfo *)0x0);
    if (this_01 == (SkillSettingBase *)0x0) goto code_?;
    pKVar3 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).naturalAligment <= (skillSettingData->klass->_1).naturalAligment) &&
       ((skillSettingData->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      pKVar2 = (KogamaSettingWrapperBase *)&UNK_?;
      (*(code *)(this_01->klass->vtable).Initialize.method)
                (this_01,&UNK_?,pSVar1,uVar5,iVar7,uVar6,skillSettingData,this_02,this_03,
                 this_04,this,(this_01->klass->vtable).UpdateSkillData.methodPtr);
      this_00 = (object->fields).skillSettingList;
      if (this_00 != (List_1_SkillSettingBase_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__List<SkillSettingBase>__Add_SkillSettingBase_
                  );
        pSVar1 = (object->fields).skillDataManagerPrefab;
        if (pSVar1 != (SpawnRolesSkillDataManager *)0x0) {
          SVar8 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
                            (pSVar1,(String *)&UNK_?,(MethodInfo *)0x0);
          if (SVar8 == SkillCategory__Enum_Defence) {
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar9,(object->fields).defenceSkillsContainer,0,(MethodInfo *)0x0);
              return;
            }
          }
          else if (SVar8 == SkillCategory__Enum_Offence) {
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar9,(object->fields).offenceSkillsContainer,0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (SVar8 != SkillCategory__Enum_Tactical) {
              return;
            }
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar9,(object->fields).tacticalSkillsContainer,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(pKVar2,pKVar3);
code_?:
  func_?(pKVar2,this);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (this->fields).attributeSettingsManager;
  if (this_00 != (AttributeSettingsManager *)0x0) {
    pKVar7 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_00,(MethodInfo *)0x0);
    if (pKVar7 == (KogamaSettingWrapperBase *)0x0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if (((pKVar7->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((pKVar7->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    if (pKVar7[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffb0,
                          (Dictionary_2_System_UInt32_System_Object_ *)pKVar7[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      uStack_9 = 0;
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
      DStack_6._version = pDVar8->_version;
      DStack_6._index = pDVar8->_index;
      DStack_6._current.key = (Object *)(pDVar8->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
      uStack_1 = 1;
      pDStack_10 = &DStack_6;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar11 == 0) break;
        SpawnRoleSkillsEditor_CreateSkillSetting
                  (this,(String *)DStack_6._current.key,
                   (KogamaSettingWrapperBase *)DStack_6._current.value,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,in_stack_12);
      goto code_?;
    }
  }
  uVar13 = func_?();
  func_?(uVar13);
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
  func_?(&(this->fields).attributeSettingsManager,spawnRoleAttributeSettingsManager);
  (this->fields).updateSkillCostCallback = updateSkillCost;
  func_?(&(this->fields).updateSkillCostCallback,updateSkillCost);
  SpawnRoleSkillsEditor_CreateSkillSettings(this,(MethodInfo *)0x0);
  return;
}


/* Void OnAddDefenceSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddDefenceSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

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
                    SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                   );
    func_?(&MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__);
    func_?(&
                    MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0___OnAddDefenceSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).skillSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_2 = CONCAT31(GStack_2._1_3_,(this->fields).spawnRoleTier);
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_02 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  ((SpawnRoleSkillSelectionMenu *)pOVar1,(SpawnRolesSkillDataManager *)0x0,
                   notAppliedSettings,SkillCategory__Enum_Defence,spawnRoleCost,GStack_2,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
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
                   MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0___OnAddDefenceSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAddOffenceSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddOffenceSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

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
                    SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                   );
    func_?(&MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__);
    func_?(&
                    MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0___OnAddOffenceSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).skillSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_2 = CONCAT31(GStack_2._1_3_,(this->fields).spawnRoleTier);
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_02 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  ((SpawnRoleSkillSelectionMenu *)pOVar1,(SpawnRolesSkillDataManager *)0x0,
                   notAppliedSettings,SkillCategory__Enum_Offence,spawnRoleCost,GStack_2,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
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
                   MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0___OnAddOffenceSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAddTacticalSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddTacticalSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

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
                    SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                   );
    func_?(&MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__);
    func_?(&
                    MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0___OnAddTacticalSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).skillSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_2 = CONCAT31(GStack_2._1_3_,(this->fields).spawnRoleTier);
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_02 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  ((SpawnRoleSkillSelectionMenu *)pOVar1,(SpawnRolesSkillDataManager *)0x0,
                   notAppliedSettings,SkillCategory__Enum_Tactical,spawnRoleCost,GStack_2,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
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
                   MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0___OnAddTacticalSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnDestroy
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  pAVar1 = (this->fields).attributeSettingsManager;
  if (pAVar1 == (AttributeSettingsManager *)0x0) goto code_?;
  pSVar2 = (pAVar1->fields).settingsManager;
  if ((pSVar2 != (SettingsManager *)0x0) &&
     (pSVar3 = (pSVar2->fields).settingsReporter, pSVar3 != (SettingsReporter *)0x0)) {
    if ((pSVar3->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar4 = (pSVar3->fields).worldObject;
      if ((pMVar4 == (MVWorldObject *)0x0) ||
         (pAVar5 = (pSVar3->fields).partialDataUpdate,
         pAVar5 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0)) goto code_?;
      puStack_6 = (pAVar5->fields)._._.method;
      pDStack_7 = (pSVar3->fields).DeltaData;
      iStack_8 = (pMVar4->fields).id;
      pvStack_9 = (pAVar5->fields)._._.method_code;
      (*(pAVar5->fields)._._.invoke_impl)();
      (pSVar3->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(&(pSVar3->fields).DeltaData,0);
    }
    if ((pSVar3->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return;
    }
    pMVar4 = (pSVar3->fields).worldObject;
    if ((pMVar4 != (MVWorldObject *)0x0) &&
       (pAVar5 = (pSVar3->fields).partialDataRemove,
       pAVar5 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) {
      puStack_6 = (pAVar5->fields)._._.method;
      pDStack_7 = (pSVar3->fields).DeltaRemovalData;
      iStack_8 = (pMVar4->fields).id;
      pvStack_9 = (pAVar5->fields)._._.method_code;
      (*(pAVar5->fields)._._.invoke_impl)();
      (pSVar3->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(&(pSVar3->fields).DeltaRemovalData,0);
      return;
    }
  }
code_?:
code_?:
  pDStack_7 = (Dictionary_2_System_Object_System_Object_ *)&stack0xfffffffc;
  uVar10 = func_?(&pvStack_9);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
      pUVar2 = (this->fields).updateSkillCostCallback;
      if (pUVar2 != (UnityAction *)0x0) {
        (*(pUVar2->fields)._._.invoke_impl)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowPowerErrorTipBubble() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_ShowPowerErrorTipBubble
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cantAddSkillInfoTextBubble;
  if (this_00 != (GamePassesTextBubble *)0x0) {
    GamePassesTextBubble::GamePassesTextBubble_Activate
              (this_00,StringLiteral_The_Power_of_the_Class_will_be_t,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    pUVar1 = (this->fields).updateSkillCostCallback;
    if (pUVar1 != (UnityAction *)0x0) {
      (*(pUVar1->fields)._._.invoke_impl)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSpawnRoleCost(Int32) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSpawnRoleCost
               (SpawnRoleSkillsEditor *this,int32_t newSpawnRoleCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).skillSettingList;
  (this->fields).spawnRoleCost = newSpawnRoleCost;
  while (pLVar1 != (List_1_SkillSettingBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).skillSettingList;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    *(int32_t *)((int)RVar2 + 0x50) = newSpawnRoleCost;
    index = index + 1;
    pLVar1 = (this->fields).skillSettingList;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSpawnRoleTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSpawnRoleTier
               (SpawnRoleSkillsEditor *this,GamePassTier__Enum newSpawnRoleTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).skillSettingList;
  (this->fields).spawnRoleTier = (undefined1)newSpawnRoleTier;
  while (pLVar1 != (List_1_SkillSettingBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).skillSettingList;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    *(undefined1 *)((int)RVar2 + 0x54) = (undefined1)newSpawnRoleTier;
    index = index + 1;
    pLVar1 = (this->fields).skillSettingList;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SpawnRoleSkillsEditor() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor__ctor
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<SkillSettingBase>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_SkillSettingBase_ *)
            func_?(TypeInfo__System__Collections__Generic__List<SkillSettingBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<SkillSettingBase>__List__);
  (this->fields).skillSettingList = this_00;
  func_?(&(this->fields).skillSettingList,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

