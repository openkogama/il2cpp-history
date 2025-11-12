
/* Void CreateSkillSelectionElement(String, KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionMenu::
     SpawnRoleSkillSelectionMenu_CreateSkillSelectionElement
               (SpawnRoleSkillSelectionMenu *this,String *skillKey,
               KogamaSettingWrapperBase *skillSetting,MethodInfo *method)

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
                  SpawnRoleSkillSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionElement>_SpawnRoleSkillSelectionElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).skillSelectionElementPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = (SpawnRoleSkillSelectionElement *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRoleSkillSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillSelectionElement>_SpawnRoleSkillSelectionElement_
                     );
  pIVar2 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  skillDataManager = (this->fields).skillDataManager;
  if (skillSetting != (KogamaSettingWrapperBase *)0x0) {
    lVar3 = FUN_?(skillSetting,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                         );
    pIVar4 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if (lVar3 == 0) {
      FUN_?(skillSetting,pIVar2);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = FUN_?(skillSetting,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                         );
    if (lVar3 == 0) {
      FUN_?(skillSetting,pIVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    skillCost = FUN_?(0,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,lVar3);
    if (pSVar1 != (SpawnRoleSkillSelectionElement *)0x0) {
      bVar6 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
              ->_1).naturalAligment;
      if (((skillSetting->klass->_1).naturalAligment < bVar6) ||
         ((skillSetting->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) {
        FUN_?(skillSetting);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_Initialize
                (pSVar1,skillKey,skillDataManager,skillCost,(this->fields).spawnRoleCost,
                 CONCAT31((int3)((uint)in_stack_7 >> 8),(this->fields).spawnRoleTier)
                 ,(KogamaSettingValueWrapperBase *)skillSetting,(this->fields).addSkillCallback,
                 (this->fields).cantAddSkillCallback,(MethodInfo *)0x0);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pSVar1,(MethodInfo *)0x0);
      if (obj != (Transform *)0x0) {
        pTVar8 = (this->fields).skillSelectionElementContainer;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                        ,pTVar8,0,0,unaff_RDI);
          LOCK();
          UNLOCK();
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (Transform *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar9 = (obj->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pTVar8 == (Transform *)0x0) {
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = (pTVar8->fields)._._.m_CachedPtr;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar9,pvVar10,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if (notAppliedSettings == (KogamaSettingWrapperBase *)0x0) {
    pGVar1 = (this->fields).noSkillsText;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    (this->fields).spawnRoleCost = spawnRoleCost;
    (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
    (this->fields).skillDataManager = skillDataManager;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).skillDataManager >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    (this->fields).addSkillCallback = addSkillCallback;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).addSkillCallback >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar7 = iRam_?;
      } while (!bVar6);
    }
    (this->fields).cantAddSkillCallback = cantAddSkillCallback;
    iVar8 = 0;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).cantAddSkillCallback >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar8 = iRam_?;
      } while (!bVar6);
    }
    bVar9 = 0;
    bVar10 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((notAppliedSettings->klass->_1).naturalAligment < bVar10) ||
       ((notAppliedSettings->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      FUN_?(notAppliedSettings,
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pKVar12 = notAppliedSettings[1].klass;
    if (pKVar12 != (KogamaSettingWrapperBase__Class *)0x0) {
      if (iVar8 != 0) {
        uVar2 = (uint)((ulonglong)&pKStack_13 >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      uStack_14 = (ulonglong)*(uint *)&(pKVar12->_0).byval_arg.field_0xc;
      uStack_15 = 2;
      uStack_16 = 0;
      uStack_17 = 0;
      DStack_18._version = (undefined4)uStack_14;
      DStack_18._index = uStack_14._4_4_;
      DStack_18._current.key = (Object *)0x0;
      DStack_18._current.value = (Object *)0x0;
      DStack_18._getEnumeratorRetType = 2;
      DStack_18._36_4_ = 0;
      pKStack_13 = pKVar12;
      DStack_18._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKVar12;
      while (bVar19 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_18,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                               ), skillSetting = DStack_18._current.value,
            skillKey = DStack_18._current.key, bVar19 != 0) {
        if (skillDataManager == (SpawnRolesSkillDataManager *)0x0) goto code_?;
        SVar20 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
                          (skillDataManager,(String *)DStack_18._current.key,(MethodInfo *)0x0);
        if (SVar20 == skillCategory) {
          SpawnRoleSkillSelectionMenu_CreateSkillSelectionElement
                    (this,(String *)skillKey,(KogamaSettingWrapperBase *)skillSetting,
                     (MethodInfo *)0x0);
          bVar9 = 1;
        }
      }
      pGVar1 = (this->fields).noSkillsText;
      if (pGVar1 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar21 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar21 != (void *)0x0) {
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar22 = func_?(&UNK_?);
            FUN_?(uVar22,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar21,bVar9 ^ 1);
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

