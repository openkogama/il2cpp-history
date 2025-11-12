
/* Void AddSkillCallback(KogamaSettingValueWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_AddSkillCallback
               (SpawnRoleSkillsEditor *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pAVar1 = (this->fields).attributeSettingsManager;
  if ((pAVar1 != (AttributeSettingsManager *)0x0) &&
     (pSVar2 = (pAVar1->fields).settingsManager, pSVar2 != (SettingsManager *)0x0)) {
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
    ::SettingsManager_UpdateSetting
              (pSVar2,(KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
    pAVar1 = (this->fields).attributeSettingsManager;
    if ((pAVar1 != (AttributeSettingsManager *)0x0) &&
       (pSVar2 = (pAVar1->fields).settingsManager, pSVar2 != (SettingsManager *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
      SettingsManager::SettingsManager_Submit(pSVar2,(MethodInfo *)0x0);
      if (attributeSetting != (KogamaSettingValueWrapperBase *)0x0) {
        SpawnRoleSkillsEditor_CreateSkillSetting
                  (this,(attributeSetting->fields)._.key,
                   (KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
        pUVar3 = (this->fields).updateSkillCostCallback;
        if (pUVar3 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pUVar3->fields)._._.invoke_impl)
                    ((pUVar3->fields)._._.method_code,(pUVar3->fields)._._.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateSkillSetting(String, KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_CreateSkillSetting
               (SpawnRoleSkillsEditor *this,String *skillKey,
               KogamaSettingWrapperBase *skillSettingData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkillSettingBase>__Add_SkillSettingBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSkillsEditor__CantRemoveSkillCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSkillsEditor__CantUpdateSkillCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillsEditor__RemoveSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillsEditor__UpdateSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).skillDataManagerPrefab;
  if (pSVar1 != (SpawnRolesSkillDataManager *)0x0) {
    this_01 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsSettingsClone
                        (pSVar1,skillKey,(MethodInfo *)0x0);
    pIVar2 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    pSVar1 = (this->fields).skillDataManagerPrefab;
    if (skillSettingData != (KogamaSettingWrapperBase *)0x0) {
      lVar3 = FUN_?(skillSettingData,
                             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            );
      pIVar4 = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      if (lVar3 == 0) {
        FUN_?(skillSettingData,pIVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = FUN_?(skillSettingData,
                             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            );
      if (lVar3 == 0) {
        FUN_?(skillSettingData,pIVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6 = FUN_?(0,
                             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                             ,lVar3);
      iVar7 = (this->fields).spawnRoleCost;
      uVar8 = (this->fields).spawnRoleTier;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__RemoveSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_03 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_03,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__UpdateSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_04 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_04,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantUpdateSkillCallback__
                 ,(MethodInfo *)0x0);
      this_05 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_05,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantRemoveSkillCallback__
                 ,(MethodInfo *)0x0);
      if (this_01 != (SkillSettingBase *)0x0) {
        bVar9 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                ->_1).naturalAligment;
        if (((skillSettingData->klass->_1).naturalAligment < bVar9) ||
           ((skillSettingData->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )) {
          FUN_?(skillSettingData);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*(this_01->klass->vtable).Initialize.methodPtr)
                  (this_01,skillKey,pSVar1,(ulonglong)uVar6,iVar7,uVar8,skillSettingData,this_02,
                   this_03,this_04,this_05,(this_01->klass->vtable).Initialize.method);
        pMVar10 = 
        MethodInfo__System__Collections__Generic__List<SkillSettingBase>__Add_SkillSettingBase_;
        this_00 = (this->fields).skillSettingList;
        if (this_00 != (List_1_SkillSettingBase_ *)0x0) {
          piVar11 = &(this_00->fields)._version;
          *piVar11 = *piVar11 + 1;
          pSVar12 = (this_00->fields)._items;
          if (pSVar12 != (SkillSettingBase__Array *)0x0) {
            uVar6 = (this_00->fields)._size;
            if (uVar6 < (uint)pSVar12->max_length) {
              (this_00->fields)._size = uVar6 + 1;
              FUN_?(pSVar12);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)this_00,(Object *)this_01,
                         pMVar10->klass->rgctx_data[0xe].method);
            }
            pSVar1 = (this->fields).skillDataManagerPrefab;
            if (pSVar1 != (SpawnRolesSkillDataManager *)0x0) {
              SVar13 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
                                 (pSVar1,skillKey,(MethodInfo *)0x0);
              if (SVar13 != SkillCategory__Enum_Defence) {
                if (SVar13 == SkillCategory__Enum_Offence) {
                  this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                  if (this_06 == (Transform *)0x0) goto code_?;
                  parent = (this->fields).offenceSkillsContainer;
                }
                else {
                  if (SVar13 != SkillCategory__Enum_Tactical) {
                    return;
                  }
                  this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                  if (this_06 == (Transform *)0x0) goto code_?;
                  parent = (this->fields).tacticalSkillsContainer;
                }
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_06,parent,0,(MethodInfo *)0x0);
                return;
              }
              this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_01,(MethodInfo *)0x0);
              if (this_06 != (Transform *)0x0) {
                parent = (this->fields).defenceSkillsContainer;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CreateSkillSettings() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_CreateSkillSettings
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).attributeSettingsManager;
  if (this_00 == (AttributeSettingsManager *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                     (this_00,(MethodInfo *)0x0);
  if (pKVar2 != (KogamaSettingWrapperBase *)0x0) {
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKVar2->klass->_1).naturalAligment < bVar3) ||
       ((pKVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      FUN_?(pKVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pKStack_4 = pKVar2[1].klass;
    if (pKStack_4 == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
    uStack_5 = 0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pKStack_4 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    uStack_11 = (ulonglong)*(uint *)&(pKStack_4->_0).byval_arg.field_0xc;
    uStack_12 = 2;
    DStack_13._version = (undefined4)uStack_11;
    DStack_13._index = uStack_11._4_4_;
    DStack_13._current.key = (Object *)0x0;
    DStack_13._current.value = (Object *)0x0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._36_4_ = 0;
    DStack_13._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKStack_4;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_13,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                             ), bVar14 != 0) {
      SpawnRoleSkillsEditor_CreateSkillSetting
                (this,(String *)DStack_13._current.key,
                 (KogamaSettingWrapperBase *)DStack_13._current.value,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize(Int32, GamePassTier, AttributeSettingsManager, UnityAction) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_Initialize
               (SpawnRoleSkillsEditor *this,int32_t spawnRoleCost,GamePassTier__Enum spawnRoleTier,
               AttributeSettingsManager *spawnRoleAttributeSettingsManager,
               UnityAction *updateSkillCost,MethodInfo *method)

{
  (this->fields).attributeSettingsManager = spawnRoleAttributeSettingsManager;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (uint8_t)spawnRoleTier;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).attributeSettingsManager >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).updateSkillCostCallback = updateSkillCost;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).updateSkillCostCallback >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).attributeSettingsManager;
  if (this_00 == (AttributeSettingsManager *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pKVar8 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                     (this_00,(MethodInfo *)0x0);
  if (pKVar8 != (KogamaSettingWrapperBase *)0x0) {
    bVar9 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKVar8->klass->_1).naturalAligment < bVar9) ||
       ((pKVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      FUN_?(pKVar8);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pKStack_10 = pKVar8[1].klass;
    if (pKStack_10 == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
    uStack_11 = 0;
    uStack_12 = 0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pKStack_10 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar13 = *puVar4;
        LOCK();
        uVar3 = *puVar4;
        if (uVar13 == uVar3) {
          *puVar4 = uVar13 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar13 != uVar3);
    }
    uStack_14 = (ulonglong)*(uint *)&(pKStack_10->_0).byval_arg.field_0xc;
    uStack_15 = 2;
    DStack_16._version = (undefined4)uStack_14;
    DStack_16._index = uStack_14._4_4_;
    DStack_16._current.key = (Object *)0x0;
    DStack_16._current.value = (Object *)0x0;
    DStack_16._getEnumeratorRetType = 2;
    DStack_16._36_4_ = 0;
    DStack_16._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKStack_10;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_16,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                             ), bVar17 != 0) {
      SpawnRoleSkillsEditor_CreateSkillSetting
                (this,(String *)DStack_16._current.key,
                 (KogamaSettingWrapperBase *)DStack_16._current.value,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnAddDefenceSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddDefenceSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0___OnAddDefenceSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0);
  original = (this->fields).skillSelectionMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                      );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    this_00 = (this->fields).attributeSettingsManager;
    pOVar1 = object[1].klass;
    skillDataManager = (this->fields).skillDataManagerPrefab;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      uVar7 = (this->fields).spawnRoleTier;
      spawnRoleCost = (this->fields).spawnRoleCost;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_03 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  ((SpawnRoleSkillSelectionMenu *)pOVar1,skillDataManager,notAppliedSettings,
                   SkillCategory__Enum_Defence,spawnRoleCost,
                   (GamePassTier__Enum)
                   CONCAT71((int7)((ulonglong)in_stack_8 >> 8),uVar7),
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_04,object,
                   MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass17_0___OnAddDefenceSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar10 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar10);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar9,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar12 = (longlong)(pLVar11->fields)._size;
          uVar3 = 0;
          if (0 < lVar12) {
            lVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar11->fields)._size <= uVar3) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar16 = (pLVar11->fields)._items;
              if (pTVar16 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar16->max_length <= uVar3) {
                FUN_?();
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar9,(BaseEventData *)0x0,this_04,
                                 (pMVar10->field7_0x38).rgctx_data[1].method);
              if (bVar17 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar3 = uVar3 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 8;
            } while (lVar13 < lVar12);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnAddOffenceSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddOffenceSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0___OnAddOffenceSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0);
  original = (this->fields).skillSelectionMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                      );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    this_00 = (this->fields).attributeSettingsManager;
    pOVar1 = object[1].klass;
    skillDataManager = (this->fields).skillDataManagerPrefab;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      uVar7 = (this->fields).spawnRoleTier;
      spawnRoleCost = (this->fields).spawnRoleCost;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_03 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  ((SpawnRoleSkillSelectionMenu *)pOVar1,skillDataManager,notAppliedSettings,
                   SkillCategory__Enum_Offence,spawnRoleCost,
                   (GamePassTier__Enum)
                   CONCAT71((int7)((ulonglong)in_stack_8 >> 8),uVar7),
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_04,object,
                   MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass18_0___OnAddOffenceSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar10 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar10);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar9,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar12 = (longlong)(pLVar11->fields)._size;
          uVar3 = 0;
          if (0 < lVar12) {
            lVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar11->fields)._size <= uVar3) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar16 = (pLVar11->fields)._items;
              if (pTVar16 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar16->max_length <= uVar3) {
                FUN_?();
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar9,(BaseEventData *)0x0,this_04,
                                 (pMVar10->field7_0x38).rgctx_data[1].method);
              if (bVar17 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar3 = uVar3 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 8;
            } while (lVar13 < lVar12);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnAddTacticalSkillPressed() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnAddTacticalSkillPressed
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0___OnAddTacticalSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0);
  original = (this->fields).skillSelectionMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       SpawnRoleSkillSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionMenu>_SpawnRoleSkillSelectionMenu_
                      );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    this_00 = (this->fields).attributeSettingsManager;
    pOVar1 = object[1].klass;
    skillDataManager = (this->fields).skillDataManagerPrefab;
    if (this_00 != (AttributeSettingsManager *)0x0) {
      notAppliedSettings =
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::
           AttributeSettingsManager_get_AvailableAttributeSettings(this_00,(MethodInfo *)0x0);
      uVar7 = (this->fields).spawnRoleTier;
      spawnRoleCost = (this->fields).spawnRoleCost;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__SpawnRoleSkillsEditor__AddSkillCallback_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 ,(MethodInfo *)0x0);
      this_03 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__SpawnRoleSkillsEditor__CantAddSkillCallback__,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        SpawnRoleSkillSelectionMenu::SpawnRoleSkillSelectionMenu_Initialize
                  ((SpawnRoleSkillSelectionMenu *)pOVar1,skillDataManager,notAppliedSettings,
                   SkillCategory__Enum_Tactical,spawnRoleCost,
                   (GamePassTier__Enum)
                   CONCAT71((int7)((ulonglong)in_stack_8 >> 8),uVar7),
                   (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                    *)this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_04,object,
                   MethodInfo__SpawnRoleSkillsEditor____c__DisplayClass19_0___OnAddTacticalSkillPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar10 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar10);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar9,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar12 = (longlong)(pLVar11->fields)._size;
          uVar3 = 0;
          if (0 < lVar12) {
            lVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar11->fields)._size <= uVar3) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar16 = (pLVar11->fields)._items;
              if (pTVar16 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar16->max_length <= uVar3) {
                FUN_?();
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar9,(BaseEventData *)0x0,this_04,
                                 (pMVar10->field7_0x38).rgctx_data[1].method);
              if (bVar17 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar3 = uVar3 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 8;
            } while (lVar13 < lVar12);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_OnDestroy
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  pAVar1 = (this->fields).attributeSettingsManager;
  if ((pAVar1 == (AttributeSettingsManager *)0x0) ||
     (pSVar2 = (pAVar1->fields).settingsManager, pSVar2 == (SettingsManager *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (pSVar2->fields).settingsReporter;
  if (pSVar4 == (SettingsReporter *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pSVar4->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar5 = (pSVar4->fields).worldObject;
    if ((pMVar5 == (MVWorldObject *)0x0) ||
       (pAVar6 = (pSVar4->fields).partialDataUpdate,
       pAVar6 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar6->fields)._._.invoke_impl)
              ((pAVar6->fields)._._.method_code,(pMVar5->fields).id,(pSVar4->fields).DeltaData,
               (pAVar6->fields)._._.method);
    bVar7 = iRam_? != 0;
    (pSVar4->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(pSVar4->fields).DeltaData >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if ((pSVar4->fields).DeltaRemovalData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar5 = (pSVar4->fields).worldObject;
    if ((pMVar5 == (MVWorldObject *)0x0) ||
       (pAVar6 = (pSVar4->fields).partialDataRemove,
       pAVar6 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar6->fields)._._.invoke_impl)
              ((pAVar6->fields)._._.method_code,(pMVar5->fields).id,
               (pSVar4->fields).DeltaRemovalData,(pAVar6->fields)._._.method);
    bVar7 = iRam_? != 0;
    (pSVar4->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(pSVar4->fields).DeltaRemovalData >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  return;
}


/* Void RemoveSkillCallback(KogamaSettingValueWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_RemoveSkillCallback
               (SpawnRoleSkillsEditor *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pAVar1 = (this->fields).attributeSettingsManager;
  if ((pAVar1 != (AttributeSettingsManager *)0x0) &&
     (pSVar2 = (pAVar1->fields).settingsManager, pSVar2 != (SettingsManager *)0x0)) {
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
    ::SettingsManager_RemoveSetting
              (pSVar2,(KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
    pAVar1 = (this->fields).attributeSettingsManager;
    if ((pAVar1 != (AttributeSettingsManager *)0x0) &&
       (pSVar2 = (pAVar1->fields).settingsManager, pSVar2 != (SettingsManager *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
      SettingsManager::SettingsManager_Submit(pSVar2,(MethodInfo *)0x0);
      pUVar3 = (this->fields).updateSkillCostCallback;
      if (pUVar3 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar3->fields)._._.invoke_impl)
                  ((pUVar3->fields)._._.method_code,(pUVar3->fields)._._.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowPowerErrorTipBubble() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_ShowPowerErrorTipBubble
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_The_Power_of_the_Class_will_be_t);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_The_Power_of_the_Class_will_be_t;
  pGVar2 = (this->fields).cantAddSkillInfoTextBubble;
  if (pGVar2 != (GamePassesTextBubble *)0x0) {
    pNVar3 = (pGVar2->fields).fader;
    if (pNVar3 != (NotificationFade *)0x0) {
      this_00 = (pNVar3->fields).group;
      (pNVar3->fields).playing = 1;
      (pNVar3->fields).pauseAt = (pNVar3->fields).duration;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        (pNVar3->fields).currentTime = 0.0;
        pTVar4 = (pGVar2->fields).text;
        if (pTVar4 != (Text *)0x0) {
          (*(pTVar4->klass->vtable).set_text.methodPtr)
                    (pTVar4,pSVar1,(pTVar4->klass->vtable).set_text.method);
          (pGVar2->fields).isActive = 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSkillCallback(KogamaSettingValueWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSkillCallback
               (SpawnRoleSkillsEditor *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pAVar1 = (this->fields).attributeSettingsManager;
  if ((pAVar1 != (AttributeSettingsManager *)0x0) &&
     (this_00 = (pAVar1->fields).settingsManager, this_00 != (SettingsManager *)0x0)) {
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
    ::SettingsManager_UpdateSetting
              (this_00,(KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
    pUVar2 = (this->fields).updateSkillCostCallback;
    if (pUVar2 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar2->fields)._._.invoke_impl)
                ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSpawnRoleCost(Int32) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSpawnRoleCost
               (SpawnRoleSkillsEditor *this,int32_t newSpawnRoleCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).skillSettingList;
  (this->fields).spawnRoleCost = newSpawnRoleCost;
  uVar2 = 0;
  if (pLVar1 != (List_1_SkillSettingBase_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).skillSettingList;
      if (pLVar1 == (List_1_SkillSettingBase_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (SkillSettingBase__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      uVar2 = uVar2 + 1;
      *(int32_t *)(lVar6 + 0x8c) = newSpawnRoleCost;
      pLVar1 = (this->fields).skillSettingList;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_SkillSettingBase_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateSpawnRoleTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSpawnRoleTier
               (SpawnRoleSkillsEditor *this,GamePassTier__Enum newSpawnRoleTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).skillSettingList;
  (this->fields).spawnRoleTier = (uint8_t)newSpawnRoleTier;
  uVar2 = 0;
  if (pLVar1 != (List_1_SkillSettingBase_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).skillSettingList;
      if (pLVar1 == (List_1_SkillSettingBase_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (SkillSettingBase__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      uVar2 = uVar2 + 1;
      *(uint8_t *)(lVar6 + 0x90) = (uint8_t)newSpawnRoleTier;
      pLVar1 = (this->fields).skillSettingList;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_SkillSettingBase_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SpawnRoleSkillsEditor() */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor::SpawnRoleSkillsEditor__ctor
               (SpawnRoleSkillsEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SkillSettingBase>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<SkillSettingBase>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_SkillSettingBase_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<SkillSettingBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<SkillSettingBase>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).skillSettingList = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).skillSettingList >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

