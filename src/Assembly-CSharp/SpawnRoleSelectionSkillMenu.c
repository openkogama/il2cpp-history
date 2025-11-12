
/* Int32 CalculateTotalCostOfSkills(KogamaSettingsCollectionBase) */

int32_t Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::
        SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                  (SpawnRoleSelectionSkillMenu *this,KogamaSettingsCollectionBase *subSettingData,
                  MethodInfo *method)

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
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if ((subSettingData == (KogamaSettingsCollectionBase *)0x0) ||
     (pDVar2 = (subSettingData->fields).children,
     pDVar2 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)0x0)) {
    FUN_?();
  }
  else {
    uStack_3 = 0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    uStack_10 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_11 = 2;
    DStack_12._version = (undefined4)uStack_10;
    DStack_12._index = uStack_10._4_4_;
    DStack_12._current.key = (Object *)0x0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_6 = pDVar2;
    DStack_12._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar2;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                        );
      subSettingData = (KogamaSettingsCollectionBase *)DStack_12._current.value;
      unaff_RSI = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      if (bVar13 == 0) {
        return iVar1;
      }
      if ((KogamaSettingsCollectionBase *)DStack_12._current.value ==
          (KogamaSettingsCollectionBase *)0x0) break;
      lVar14 = FUN_?(DStack_12._current.value,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
      unaff_R14 = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      uVar15 = extraout_XMM0_Da;
      if (lVar14 == 0) goto code_?;
      plVar16 = (longlong *)
                FUN_?(subSettingData,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                             );
      unaff_RSI = (IAttributeSetting__Class *)0x0;
      if (plVar16 == (longlong *)0x0) goto code_?;
      lVar14 = *plVar16;
      uVar17 = 0;
      if (*(ushort *)(lVar14 + 0x12e) != 0) {
        do {
          if (*(IAttributeSetting__Class **)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar17 * 0x10)
              == 
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
             ) {
            puVar18 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10) * 0x10 +
                       0x138 + lVar14);
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
      }
      puVar18 = (undefined8 *)
                FUN_?(plVar16,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,0);
code_?:
      iVar19 = (*(code *)*puVar18)(plVar16,puVar18[1]);
      iVar1 = iVar1 + iVar19;
    }
  }
  FUN_?();
code_?:
  uVar15 = FUN_?(subSettingData,unaff_R14);
code_?:
  FUN_?(uVar15,unaff_RSI);
  FUN_?();
  pcVar20 = (code *)swi(3);
  iVar21 = (*pcVar20)();
  return iVar21;
}


/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_ChangeBackground
               (SpawnRoleSelectionSkillMenu *this,GamePassTier__Enum tier,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  cVar2 = (char)tier;
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    cVar6 = (*pcRam_?)(pvVar3);
    if ((bool)cVar6 != (cVar2 == '\x01')) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,cVar2 == '\x01',(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      cVar6 = (*pcRam_?)(pvVar3);
      if ((bool)cVar6 != (cVar2 == '\x02')) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,cVar2 == '\x02',(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        cVar6 = (*pcRam_?)(pvVar3);
        if ((bool)cVar6 != (cVar2 == '\x03')) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,cVar2 == '\x03',(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Int32, GamePassTier, GameObject) */

void Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_Initialize
               (SpawnRoleSelectionSkillMenu *this,int32_t spawnRoleId,
               GamePassTier__Enum tierRequirement,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  apSStackX_8[0] = this;
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
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = (Object *)0x0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  SpawnRoleSelectionSkillMenu_ChangeBackground(this,tierRequirement & 0xff,(MethodInfo *)0x0);
  pSVar2 = (this->fields).spawnRolePreviewerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = (SpawnRolePreviewer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pSVar2,
                       SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                      );
  (this->fields).spawnRolePreviewer = pSVar2;
  pKVar3 = (KogamaSettingsCollectionBase__Class *)0xADDR;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).spawnRolePreviewer >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  this_01 = (KogamaSettingsCollectionBase__Class *)0x0;
  SpawnRoleSelectionSkillMenu_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (this_01 = (KogamaSettingsCollectionBase__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_00,spawnRoleId,(MethodInfo *)0x0),
     this_01 != (KogamaSettingsCollectionBase__Class *)0x0)) {
    pMVar9 = (MVAvatarSpawnRoleCreator__Class *)(this_01->_0).image;
    bVar10 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((pMVar9->_1).naturalAligment < bVar10) ||
       ((MVAvatarSpawnRoleCreator__Class *)(pMVar9->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      FUN_?(this_01);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    this_02 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                        ((MVAvatarSpawnRoleCreator *)this_01,(MethodInfo *)0x0);
    if (this_02 != (AttributeSettingsManager *)0x0) {
      subSettingData =
           (KogamaSettingsCollectionBase *)
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                     (this_02,(MethodInfo *)0x0);
      if (subSettingData != (KogamaSettingsCollectionBase *)0x0) {
        this_01 = subSettingData->klass;
        bVar10 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                ->_1).naturalAligment;
        if (((this_01->_1).naturalAligment < bVar10) ||
           (*(KogamaSettingsCollectionBase__Class **)
             ((longlong)(this_01->_1).typeHierarchy + (ulonglong)bVar10 * 8 + -8) !=
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           )) {
          FUN_?(subSettingData);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uStackX_18 = 0;
        pDVar12 = (subSettingData->fields).children;
        pKStackX_20 = subSettingData;
        if (pDVar12 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                       *)0x0) goto code_?;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&pDStack_13 >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        uStack_14 = (ulonglong)(uint)(pDVar12->fields)._version;
        uStack_15 = 2;
        uStack_16 = 0;
        uStack_17 = 0;
        DStack_1._version = (undefined4)uStack_14;
        DStack_1._index = uStack_14._4_4_;
        DStack_1._current.key = (Object *)0x0;
        DStack_1._current.value = (Object *)0x0;
        DStack_1._getEnumeratorRetType = 2;
        DStack_1._36_4_ = 0;
        uStack_18 = 0;
        pDStack_19 = &DStack_1;
        pDStack_13 = pDVar12;
        DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar12;
        while (bVar20 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                  (&DStack_1,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                                  ),
              this_01 = (KogamaSettingsCollectionBase__Class *)DStack_1._current.value,
              skill = DStack_1._current.key, bVar20 != 0) {
          uStackX_18 = 1;
          pSVar21 = (this->fields).skillElementPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar21 = (SpawnRoleSelectionSkillElement *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pSVar21,
                               SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                              );
          if (pSVar21 == (SpawnRoleSelectionSkillElement *)0x0) goto code_?;
          pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
          if (this_01 != (KogamaSettingsCollectionBase__Class *)0x0) {
            pMVar9 = (MVAvatarSpawnRoleCreator__Class *)
                     ((Il2CppClass_0 *)&((Object *)this_01)->klass)->image;
            bVar10 = (
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                    ->_1).naturalAligment;
            if ((((pMVar9->_1).naturalAligment < bVar10) ||
                ((pMVar9->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                 (Il2CppClass *)
                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                )) || (pKVar3 = this_01, this_01 == (KogamaSettingsCollectionBase__Class *)0x0))
            goto code_?;
          }
          this_01 = (KogamaSettingsCollectionBase__Class *)(this->fields).skillDataManagerPrefab;
          SpawnRoleSelectionSkillElement::SpawnRoleSelectionSkillElement_Initialize
                    (pSVar21,(String *)skill,(SpawnRolesSkillDataManager *)this_01,
                     (KogamaSettingValueWrapperBase *)pKVar3,(MethodInfo *)0x0);
          pKVar3 = (KogamaSettingsCollectionBase__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar21,(MethodInfo *)0x0);
          pTVar22 = (this->fields).skillElementContainer;
          if (pKVar3 == (KogamaSettingsCollectionBase__Class *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          OVar23.m_CachedPtr =
               *(void **)&(((MVAvatarSpawnRoleCreator__Fields *)&(pKVar3->_0).name)->_)._._._;
          if (OVar23.m_CachedPtr == (void *)0x0) goto code_?;
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
          if (pTVar22 != (Transform *)0x0) {
            pKVar3 = (pTVar22->fields)._._.m_CachedPtr;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar11;
          (*pcRam_?)(OVar23.m_CachedPtr,pKVar3);
        }
        value = SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                          (this,subSettingData,(MethodInfo *)0x0);
        pTVar24 = (this->fields).spawnRoleCost;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        CStack_25.r = 0.0;
        CStack_25.g = 0.0;
        CStack_25.b = 0.0;
        CStack_25.a = 0.0;
        this_01 = (KogamaSettingsCollectionBase__Class *)0x0;
        pSVar26 = mscorlib.dll::System::Number::Number_FormatInt32
                            (value,(ReadOnlySpan_1_Char_ *)&CStack_25,(IFormatProvider *)0x0,
                             (MethodInfo *)0x0);
        pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
        if (pTVar24 == (Text *)0x0) goto code_?;
        (*(pTVar24->klass->vtable).set_text.methodPtr)(pTVar24,pSVar26);
        pKVar3 = (KogamaSettingsCollectionBase__Class *)(this->fields).spawnRoleCost;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Styles);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (value < 0) {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          colorStyle = ColorStyle__Enum_NegativeRed;
        }
        else {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          colorStyle = ColorStyle__Enum_OffWhite;
        }
        this_01 = (KogamaSettingsCollectionBase__Class *)0x0;
        pCVar27 = Styles::Styles_GetColor(&CStack_25,colorStyle,(MethodInfo *)0x0);
        uVar28._0_4_ = pCVar27->r;
        uVar28._4_4_ = pCVar27->g;
        uVar29._0_4_ = pCVar27->b;
        uVar29._4_4_ = pCVar27->a;
        if (pKVar3 == (KogamaSettingsCollectionBase__Class *)0x0) goto code_?;
        pMVar9 = (MVAvatarSpawnRoleCreator__Class *)(pKVar3->_0).image;
        this_01 = (KogamaSettingsCollectionBase__Class *)(pMVar9->vtable).PartialUpdateWOData.method
        ;
        CStack_25._0_8_ = uVar28;
        CStack_25._8_8_ = uVar29;
        (*(pMVar9->vtable).PartialUpdateWOData.methodPtr)(pKVar3,&CStack_25,this_01);
      }
      pGVar30 = (this->fields).leftBorder;
      if (pGVar30 != (GameObject *)0x0) {
        pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar30,(MethodInfo *)0x0);
        pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
        if (pTVar22 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar31 = (pTVar22->fields)._._.m_CachedPtr;
          if (pvVar31 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar22,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar28 = func_?(&UNK_?);
            FUN_?(uVar28,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar31);
          pGVar30 = (this->fields).leftBorder;
          pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
          if (pGVar30 != (GameObject *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar31 = (pGVar30->fields)._.m_CachedPtr;
            if (pvVar31 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar30,(MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar28 = func_?(&UNK_?);
              FUN_?(uVar28,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcRam_? = pcVar11;
            (*pcRam_?)(pvVar31);
            pGVar30 = (this->fields).noSkillsText;
            pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
            if (pGVar30 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar31 = (pGVar30->fields)._.m_CachedPtr;
              if (pvVar31 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar30,(MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcVar11 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                uVar28 = func_?(&UNK_?);
                FUN_?(uVar28,0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcRam_? = pcVar11;
              (*pcRam_?)(pvVar31);
              pRVar32 = (this->fields).contentRectTransform;
              if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
              LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar32,(MethodInfo *)0x0);
              pRVar32 = (this->fields).contentScrollRect;
              pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
              if (pRVar32 != (RectTransform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                CStack_25.r = 0.0;
                CStack_25.g = 0.0;
                CStack_25.b = 0.0;
                CStack_25.a = 0.0;
                pvVar31 = (pRVar32->fields)._._._.m_CachedPtr;
                if (pvVar31 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar32,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcVar11 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                  uVar28 = func_?(&UNK_?);
                  FUN_?(uVar28,0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcRam_? = pcVar11;
                (*pcRam_?)(pvVar31);
                pRVar32 = (this->fields).contentRectTransform;
                pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
                if (pRVar32 != (RectTransform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_18 = 0;
                  pDStack_19 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               0x0;
                  pvVar31 = (pRVar32->fields)._._._.m_CachedPtr;
                  if (pvVar31 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar32,(MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcVar11 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                    uVar28 = func_?(&UNK_?);
                    FUN_?(uVar28,0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcRam_? = pcVar11;
                  (*pcRam_?)(pvVar31);
                  if (CStack_25.b < pDStack_19._0_4_) {
                    pRVar32 = (this->fields).contentRectTransform;
                    pKVar3 = (KogamaSettingsCollectionBase__Class *)0x0;
                    if (pRVar32 == (RectTransform *)0x0) goto code_?;
                    apSStackX_8[0] = (SpawnRoleSelectionSkillMenu *)0x0;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar31 = (pRVar32->fields)._._._.m_CachedPtr;
                    if (pvVar31 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar32,(MethodInfo *)0x0)
                      ;
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pcVar11 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                      uVar28 = func_?(&UNK_?);
                      FUN_?(uVar28,0);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pcRam_? = pcVar11;
                    (*pcRam_?)(pvVar31,apSStackX_8);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  uVar28 = func_?(&UNK_?);
  FUN_?(uVar28);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pKVar3,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?(this_01);
code_?:
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_SetupPreviewImage
               (SpawnRoleSelectionSkillMenu *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___TierShopItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SpawnRole);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pTVar2 != (Transform *)0x0) {
    fStack_4 = (pQVar3->identityQuaternion).x;
    fStack_5 = (pQVar3->identityQuaternion).y;
    fStack_6 = (pQVar3->identityQuaternion).z;
    fStack_7 = (pQVar3->identityQuaternion).w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar8,&fStack_4);
    self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    name = StringLiteral_Preview_Root___TierShopItem;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (self,name,(MethodInfo *)0x0);
    if (self != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (self,(MethodInfo *)0x0);
      pSVar10 = (this->fields).spawnRolePreviewer;
      if (pSVar10 != (SpawnRolePreviewer *)0x0) {
        VStack_11.y = _UNK_?;
        VStack_11.x = _UNK_?;
        VStack_11.z = 0.0;
        VStack_12.z = _UNK_?;
        VStack_12._0_8_ = (ulonglong)_UNK_? << 0x20;
        SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                  (pSVar10,(this->fields).previewWidth,(this->fields).previewHeight,
                   CameraClearFlags__Enum_Color,
                   LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,&VStack_12,pTVar2,
                   &VStack_11,StringLiteral_SpawnRole,0,this_01,(MethodInfo *)0x0);
        pSVar10 = (this->fields).spawnRolePreviewer;
        if ((pSVar10 != (SpawnRolePreviewer *)0x0) &&
           (this_00 = (this->fields).spawnRolePreviewImage, this_00 != (RawImage *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(Texture *)(pSVar10->fields).previewTexture,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

