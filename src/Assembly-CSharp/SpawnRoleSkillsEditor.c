
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
    bVar8 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    pKVar3 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    if ((bVar8 <= (skillSettingData->klass->_1).naturalAligment) &&
       ((skillSettingData->klass->_1).typeHierarchy[bVar8 - 1] ==
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
          SVar9 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
                            (pSVar1,(String *)&UNK_?,(MethodInfo *)0x0);
          if (SVar9 == SkillCategory__Enum_Defence) {
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar10,(object->fields).defenceSkillsContainer,0,(MethodInfo *)0x0);
              return;
            }
          }
          else if (SVar9 == SkillCategory__Enum_Offence) {
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar10,(object->fields).offenceSkillsContainer,0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (SVar9 != SkillCategory__Enum_Tactical) {
              return;
            }
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar10,(object->fields).tacticalSkillsContainer,0,(MethodInfo *)0x0);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  this_00 = (this->fields).attributeSettingsManager;
  if (this_00 != (AttributeSettingsManager *)0x0) {
    pKVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_00,(MethodInfo *)0x0);
    if (pKVar6 == (KogamaSettingWrapperBase *)0x0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    bVar7 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKVar6->klass->_1).naturalAligment < bVar7) ||
       ((pKVar6->klass->_1).typeHierarchy[bVar7 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    if (pKVar6[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffb0,
                          (Dictionary_2_System_UInt32_System_Object_ *)pKVar6[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      uStack_9 = 0;
      DStack_10._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
      DStack_10._version = pDVar8->_version;
      DStack_10._index = pDVar8->_index;
      DStack_10._current.key = (Object *)(pDVar8->_current).key;
      DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_10;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_10,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar12 == 0) break;
        SpawnRoleSkillsEditor_CreateSkillSetting
                  (this,(String *)DStack_10._current.key,
                   (KogamaSettingWrapperBase *)DStack_10._current.value,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_10,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,in_stack_13);
      goto code_?;
    }
  }
  uVar14 = func_?();
  func_?(uVar14);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Initialize(Int32, GamePassTier, AttributeSettingsManager, UnityAction) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_Initialize
               (SpawnRoleSkillsEditor *this,int32_t spawnRoleCost,GamePassTier__Enum spawnRoleTier,
               AttributeSettingsManager *spawnRoleAttributeSettingsManager,
               UnityAction *updateSkillCost,MethodInfo *method)

{
  ppAVar1 = &(this->fields).attributeSettingsManager;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  *ppAVar1 = spawnRoleAttributeSettingsManager;
  func_?(ppAVar1,spawnRoleAttributeSettingsManager);
  ppUVar2 = &(this->fields).updateSkillCostCallback;
  *ppUVar2 = updateSkillCost;
  func_?(ppUVar2,updateSkillCost);
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
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  pSVar1 = (this->fields).skillSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar2 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    pUVar3 = &this_01->fields;
    (pUVar3->_)._defaultValue_k__BackingField = pLVar2;
    func_?(pUVar3,pLVar2);
    pSVar1 = (SpawnRoleSkillSelectionMenu *)(pUVar3->_)._defaultValue_k__BackingField;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_4 = CONCAT31(GStack_4._1_3_,(this->fields).spawnRoleTier);
      this_02 = (UnityAction_1_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_03 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleSkillSelectionMenu *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  (pSVar1,(SpawnRolesSkillDataManager *)0x0,notAppliedSettings,
                   SkillCategory__Enum_Defence,spawnRoleCost,GStack_4,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_01,
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  pSVar1 = (this->fields).skillSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar2 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    pUVar3 = &this_01->fields;
    (pUVar3->_)._defaultValue_k__BackingField = pLVar2;
    func_?(pUVar3,pLVar2);
    pSVar1 = (SpawnRoleSkillSelectionMenu *)(pUVar3->_)._defaultValue_k__BackingField;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_4 = CONCAT31(GStack_4._1_3_,(this->fields).spawnRoleTier);
      this_02 = (UnityAction_1_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_03 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleSkillSelectionMenu *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  (pSVar1,(SpawnRolesSkillDataManager *)0x0,notAppliedSettings,
                   SkillCategory__Enum_Offence,spawnRoleCost,GStack_4,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_01,
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  pSVar1 = (this->fields).skillSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar2 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                     );
  if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    pUVar3 = &this_01->fields;
    (pUVar3->_)._defaultValue_k__BackingField = pLVar2;
    func_?(pUVar3,pLVar2);
    pSVar1 = (SpawnRoleSkillSelectionMenu *)(pUVar3->_)._defaultValue_k__BackingField;
    this_00 = (this->fields).attributeSettingsManager;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      spawnRoleCost = (this->fields).spawnRoleCost;
      GStack_4 = CONCAT31(GStack_4._1_3_,(this->fields).spawnRoleTier);
      this_02 = (UnityAction_1_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_03 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleSkillSelectionMenu *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  (pSVar1,(SpawnRolesSkillDataManager *)0x0,notAppliedSettings,
                   SkillCategory__Enum_Tactical,spawnRoleCost,GStack_4,
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_01,
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    pDStack_4 = (pSVar3->fields).DeltaData;
    ppDVar5 = &(pSVar3->fields).DeltaData;
    if (pDStack_4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar6 = (pSVar3->fields).worldObject;
      if ((pMVar6 == (MVWorldObject *)0x0) ||
         (pAVar7 = (pSVar3->fields).partialDataUpdate,
         pAVar7 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0)) goto code_?;
      puStack_8 = (pAVar7->fields)._._.method;
      iStack_9 = (pMVar6->fields).id;
      pvStack_10 = (pAVar7->fields)._._.method_code;
      (*(pAVar7->fields)._._.invoke_impl)();
      *ppDVar5 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(ppDVar5,0);
    }
    pDStack_4 = (pSVar3->fields).DeltaRemovalData;
    ppDVar5 = &(pSVar3->fields).DeltaRemovalData;
    if (pDStack_4 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return;
    }
    pMVar6 = (pSVar3->fields).worldObject;
    if ((pMVar6 != (MVWorldObject *)0x0) &&
       (pAVar7 = (pSVar3->fields).partialDataRemove,
       pAVar7 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) {
      puStack_8 = (pAVar7->fields)._._.method;
      iStack_9 = (pMVar6->fields).id;
      pvStack_10 = (pAVar7->fields)._._.method_code;
      (*(pAVar7->fields)._._.invoke_impl)();
      *ppDVar5 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(ppDVar5,0);
      return;
    }
  }
code_?:
code_?:
  pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)&stack0xfffffffc;
  uVar11 = func_?(&pvStack_10);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  ppLVar1 = &(this->fields).skillSettingList;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

