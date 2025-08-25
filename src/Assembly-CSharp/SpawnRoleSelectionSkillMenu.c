
/* Int32 CalculateTotalCostOfSkills(KogamaSettingsCollectionBase) */

int32_t Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::
        SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                  (SpawnRoleSelectionSkillMenu *this,KogamaSettingsCollectionBase *subSettingData,
                  MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOVar6 = (Object *)0x0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  pOStack_8 = (Object *)0x0;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  if ((subSettingData != (KogamaSettingsCollectionBase *)0x0) &&
     (this_00 = (subSettingData->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                       );
    pDStack_11 = &DStack_7;
    uStack_12 = 0;
    DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key = (Object *)(pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (int32_t)pOVar6;
      }
      pOVar6 = DStack_7._current.value;
      subSettingData =
           (KogamaSettingsCollectionBase *)
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      if (DStack_7._current.value == (Object *)0x0) break;
      iVar14 = func_?(DStack_7._current.value,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                             );
      if (iVar14 == 0) goto code_?;
      pKStack_15 = (KogamaSettingsCollectionBase__Class *)
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      subSettingData =
           (KogamaSettingsCollectionBase *)
           func_?(pOVar6,
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                          );
      if (subSettingData == (KogamaSettingsCollectionBase *)0x0) goto code_?;
      pKStack_15 = subSettingData->klass;
      uVar16 = 0;
      uStack_17 = 0;
      sVar18._0_1_ = (pKStack_15->_1).rank;
      sVar18._1_1_ = (pKStack_15->_1).minimumAlignment;
      if (sVar18 != 0) {
        do {
          if (pKStack_15->interfaceOffsets[uVar16].interfaceType ==
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
             ) {
            ppMVar19 = &(&(subSettingData->klass->vtable).Equals)
                       [subSettingData->klass->interfaceOffsets[uVar16].offset].method;
            goto code_?;
          }
          uVar16 = uVar16 + 1;
          uVar20._0_1_ = (subSettingData->klass->_1).rank;
          uVar20._1_1_ = (subSettingData->klass->_1).minimumAlignment;
        } while (uVar16 < uVar20);
      }
      ppMVar19 = (MethodInfo **)
                func_?(subSettingData,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                ,0);
code_?:
      iVar14 = (*(code *)*ppMVar19)(subSettingData,ppMVar19[1]);
      pOVar6 = (Object *)((int)&pOStack_8->klass + iVar14);
      pOStack_8 = pOVar6;
    }
  }
  func_?();
code_?:
  func_?(pOVar6,pKStack_15);
code_?:
  uVar21 = func_?(pOVar6,subSettingData);
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  iVar23 = (*pcVar22)();
  return iVar23;
}


/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_ChangeBackground
               (SpawnRoleSelectionSkillMenu *this,GamePassTier__Enum tier,MethodInfo *method)

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
                  (pGVar1,0x12,(MethodInfo *)0x0);
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


/* Void Initialize(Int32, GamePassTier, GameObject) */

void Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_Initialize
               (SpawnRoleSelectionSkillMenu *this,int32_t spawnRoleId,
               GamePassTier__Enum tierRequirement,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pvStack_3 = (void *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pvStack_3;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff7c;
  ppIVar5 = (Il2CppClass **)&stack0xffffff7c;
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
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&
                    SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                   );
    func_?(&
                    SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    ppIVar5 = ppIStack_4;
  }
  ppIStack_4 = ppIVar5;
  IStack_6.m_value = 0;
  pMStack_7 = (MVAvatarSpawnRoleCreator__Class *)
               CONCAT31(pMStack_7._1_3_,(undefined1)tierRequirement == GamePassTier__Enum_Tier2);
  pGVar8 = (this->fields).backgroundTier1;
  pMStack_9 = (MVAvatarSpawnRoleCreator__StaticFields *)
               CONCAT31(pMStack_9._1_3_,(undefined1)tierRequirement == GamePassTier__Enum_Tier3);
  if (pGVar8 != (GameObject *)0x0) {
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar8,(MethodInfo *)0x0);
    if ((bool)bVar10 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier1)) {
      pGVar8 = (this->fields).backgroundTier1;
      if (pGVar8 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,(undefined1)tierRequirement == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar8 = (this->fields).backgroundTier2;
    if (pGVar8 != (GameObject *)0x0) {
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar8,(MethodInfo *)0x0);
      if (bVar10 != (bool)pMStack_7) {
        pGVar8 = (this->fields).backgroundTier2;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,(bool)pMStack_7,(MethodInfo *)0x0);
      }
      pGVar8 = (this->fields).backgroundTier3;
      if (pGVar8 != (GameObject *)0x0) {
        bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar8,(MethodInfo *)0x0);
        if (bVar10 != (bool)pMStack_9) {
          pGVar8 = (this->fields).backgroundTier3;
          if (pGVar8 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,(bool)pMStack_9,(MethodInfo *)0x0);
        }
        pSVar11 = (this->fields).spawnRolePreviewerPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pSVar11 = (SpawnRolePreviewer *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pSVar11,
                             SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                            );
        (this->fields).spawnRolePreviewer = pSVar11;
        func_?(&(this->fields).spawnRolePreviewer,pSVar11);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__GameObject);
          func_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          func_?(&StringLiteral_Preview_Root___TierShopItem);
          func_?(&StringLiteral_SpawnRole);
          cRam_? = '\x01';
        }
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)spawnRolePreviewObject,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                              );
        if (unaff_ESI != (MVAvatarSpawnRoleCreator__Class *)0x0) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)unaff_ESI,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Quaternion);
            cRam_? = '\x01';
          }
          if (pTVar12 != (Transform *)0x0) {
            method_00.dummy = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar12,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            pGVar8 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (pGVar8,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
            if (pGVar8 != (GameObject *)0x0) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
              pSVar11 = (this->fields).spawnRolePreviewer;
              RStack_13.m_YMin = 500.0;
              RStack_13.m_Width = 500.0;
              RStack_13.m_Height = 0.0;
              RStack_14.m_YMin = 0.0;
              RStack_14.m_Width = 1.5;
              RStack_14.m_Height = -6.0;
              if (pSVar11 != (SpawnRolePreviewer *)0x0) {
                cameraOffset.z = -6.0;
                cameraOffset.x = 0.0;
                cameraOffset.y = 1.5;
                SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                          (pSVar11,(this->fields).previewWidth,(this->fields).previewHeight,
                           CameraClearFlags__Enum_Color,
                           LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,
                           pTVar12,(Vector3)ZEXT812(0x43fa000043fa0000),StringLiteral_SpawnRole,0,
                           (GameObject *)unaff_ESI,(MethodInfo *)0x0);
                pSVar11 = (this->fields).spawnRolePreviewer;
                this_00 = (this->fields).spawnRolePreviewImage;
                if ((pSVar11 != (SpawnRolePreviewer *)0x0) && (this_00 != (RawImage *)0x0)) {
                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                            (this_00,(Texture *)(pSVar11->fields).previewTexture,(MethodInfo *)0x0);
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
                     (this_03 = (MVAvatarSpawnRoleCreator *)
                                MVWorldObjectClientManager::
                                MVWorldObjectClientManager_GetWorldObject
                                          (this_02,spawnRoleId,(MethodInfo *)0x0),
                     unaff_ESI = TypeInfo__MVAvatarSpawnRoleCreator,
                     this_03 != (MVAvatarSpawnRoleCreator *)0x0)) {
                    if (((this_03->klass->_1).naturalAligment <
                         (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                       ((MVAvatarSpawnRoleCreator__Class *)
                        (this_03->klass->_1).typeHierarchy
                        [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                        TypeInfo__MVAvatarSpawnRoleCreator)) {
                      func_?(this_03,TypeInfo__MVAvatarSpawnRoleCreator);
                    }
                    else {
                      this_04 = MVAvatarSpawnRoleCreator::
                                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                                          (this_03,(MethodInfo *)0x0);
                      if (this_04 != (AttributeSettingsManager *)0x0) {
                        unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)
                                    MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                    SpecializedSettingsTypes::AttributeSettings::
                                    AttributeSettingsManager::AttributeSettingsManager_get_Settings
                                              (this_04,(MethodInfo *)0x0);
                        pMStack_7 = unaff_ESI;
                        if (unaff_ESI == (MVAvatarSpawnRoleCreator__Class *)0x0) {
                          bVar15 = false;
                          pMStack_9 = (MVAvatarSpawnRoleCreator__StaticFields *)
                                       ((uint)pMStack_9 & 0xffffff00);
code_?:
                          pGVar8 = (this->fields).leftBorder;
                          if ((pGVar8 != (GameObject *)0x0) &&
                             (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar8,(MethodInfo *)0x0),
                             pTVar12 != (Transform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_SetAsFirstSibling(pTVar12,(MethodInfo *)0x0);
                            pGVar8 = (this->fields).leftBorder;
                            if (pGVar8 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar8,(bool)pMStack_9,(MethodInfo *)0x0);
                              pGVar8 = (this->fields).noSkillsText;
                              if (pGVar8 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar8,!bVar15,(MethodInfo *)0x0);
                                unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)
                                            (this->fields).contentRectTransform;
                                if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  a_Stack_60[0].typeHandle =
                                       (Il2CppMetadataTypeHandle)
                                       TypeInfo__UnityEngine__UI__LayoutRebuilder;
                                  func_?();
                                }
                                UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
                                LayoutRebuilder_ForceRebuildLayoutImmediate
                                          ((RectTransform *)unaff_ESI,(MethodInfo *)0x0);
                                pRVar16 = (this->fields).contentScrollRect;
                                if (pRVar16 != (RectTransform *)0x0) {
                                  pRVar17 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                            RectTransform_get_rect
                                                      (&RStack_14,pRVar16,(MethodInfo *)0x0);
                                  RStack_14.m_XMin = pRVar17->m_Width;
                                  pRVar16 = (this->fields).contentRectTransform;
                                  RStack_14.m_YMin = RStack_14.m_XMin;
                                  RStack_14.m_Width = RStack_14.m_XMin;
                                  RStack_14.m_Height = RStack_14.m_XMin;
                                  if (pRVar16 != (RectTransform *)0x0) {
                                    pRVar17 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform
                                              ::RectTransform_get_rect
                                                        (&RStack_13,pRVar16,(MethodInfo *)0x0);
                                    if (pRVar17->m_Width <= RStack_14.m_XMin) {
code_?:
                                      *unaff_FS_OFFSET = pvStack_3;
                                      return;
                                    }
                                    pRVar16 = (this->fields).contentRectTransform;
                                    RStack_13.m_Width = 0.0;
                                    RStack_13.m_Height = 0.0;
                                    if (pRVar16 != (RectTransform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                      RectTransform_set_pivot(pRVar16,(Vector2)0x0,(MethodInfo *)0x0)
                                      ;
                                      goto code_?;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pKVar18 = 
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                          ;
                          if ((*(byte *)&(unaff_ESI->_0).image[4].assembly <
                               (
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                               ->_1).naturalAligment) ||
                             (*(KogamaSettingsCollectionBase__Class **)
                               (((unaff_ESI->_0).image[2].typeCount - 4) +
                               (uint)(
                                     TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                                     ->_1).naturalAligment * 4) !=
                              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                             )) goto code_?;
                          this_01 = (Dictionary_2_System_UInt32_System_Object_ *)
                                    (unaff_ESI->_0).byval_arg.data.typeHandle;
                          bVar15 = false;
                          if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
                            pDVar19 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::UInt32,System::Object]::
                                      Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                                  *)a_Stack_60,this_01,
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                                                );
                            unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)&stack0xffffff88;
                            RStack_13.m_Width = 0.0;
                            pPVar20 = (PropertyInfo *)(pDVar19->_current).key;
                            uVar21 = *(undefined8 *)&(pDVar19->_current).value;
                            pMStack_22 = pMStack_7;
                            uStack_1 = 1;
                            pMStack_9 = (MVAvatarSpawnRoleCreator__StaticFields *)
                                         ((uint)pMStack_9 & 0xffffff00);
                            RStack_13.m_Height = (float)unaff_ESI;
                            while (bVar10 = mscorlib.dll::System::Collections::Generic::
                                           Dictionary`2[TKey,TValue]+Enumerator[System::
                                           Object,System::Object]::
                                           Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                                     ((
                                                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                                  *)&stack0xffffff88,
                                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                                                  ), bVar10 != 0) {
                              _Stack_68.__klassIndex = (TypeDefinitionIndex)uVar21;
                              bVar15 = true;
                              pMStack_9 = (MVAvatarSpawnRoleCreator__StaticFields *)
                                           CONCAT31(pMStack_9._1_3_,1);
                              pSStack_23 = (this->fields).skillElementPrefab;
                              _Stack_18.dummy = _Stack_68.dummy;
                              pPStack_24 = pPVar20;
                              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor ==
                                  0) {
                                func_?(TypeInfo__UnityEngine__Object);
                              }
                              pSStack_23 = (SpawnRoleSelectionSkillElement *)
                                           UnityEngine.CoreModule.dll::UnityEngine::Object::
                                           Object_1_Instantiate_4
                                                     ((Object *)pSStack_23,
                                                                                                            
                                                  SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                                                  );
                              if (pSStack_23 == (SpawnRoleSelectionSkillElement *)0x0)
                              goto code_?;
                              if ((_Stack_18.dummy != (MethodInfo *)0x0) &&
                                 (((pIStack_25 = (_Stack_18.array)->etype,
                                   pKVar26 = 
                                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                                   , (byte)*(code *)&pIStack_25[0x17].data <
                                     (
                                     TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                                     ->_1).naturalAligment ||
                                   (*(KogamaSettingValueWrapperBase__Class **)
                                     (*(int *)&pIStack_25[0xc].attrs +
                                     (uint)(
                                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                                           ->_1).naturalAligment * 4 + -4) !=
                                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                                   )) || (_Stack_18.dummy == (MethodInfo *)0x0))))
                              goto code_?;
                              method_00 = _Stack_18;
                              SpawnRoleSelectionSkillElement::
                              SpawnRoleSelectionSkillElement_Initialize
                                        (pSStack_23,(String *)pPStack_24,
                                         (this->fields).skillDataManagerPrefab,
                                         (KogamaSettingValueWrapperBase *)_Stack_18.typeHandle,
                                         (MethodInfo *)0x0);
                              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pSStack_23,(MethodInfo *)0x0);
                              if (pTVar12 == (Transform *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_SetParent_1
                                        (pTVar12,(this->fields).skillElementContainer,0,
                                         (MethodInfo *)0x0);
                            }
                            uStack_1 = 0xffffffff;
                            mscorlib.dll::System::ThrowHelper::
                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                      ((Object *)unaff_ESI,
                                       (ExceptionArgument__Enum)
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                                       ,(MethodInfo *)method_00.typeHandle);
                            uStack_1 = 0xffffffff;
                            IStack_6.m_value =
                                 SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                                           (this,(KogamaSettingsCollectionBase *)pMStack_7,
                                            (MethodInfo *)0x0);
                            pTVar27 = (this->fields).spawnRoleCost;
                            pSVar28 = mscorlib.dll::System::Int32::Int32_ToString
                                                (&IStack_6,(MethodInfo *)0x0);
                            unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)0x0;
                            if (pTVar27 != (Text *)0x0) {
                              (*(code *)(pTVar27->klass->vtable).set_text.method)
                                        (pTVar27,pSVar28,
                                         (pTVar27->klass->vtable).CalculateLayoutInputHorizontal_1.
                                         methodPtr);
                              IVar29.m_value = IStack_6.m_value;
                              unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)
                                          (this->fields).spawnRoleCost;
                              if (cRam_? == '\0') {
                                func_?(&TypeInfo__Styles);
                                cRam_? = '\x01';
                              }
                              if (IVar29.m_value < 0) {
                                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__Styles);
                                }
                                colorStyle = ColorStyle__Enum_NegativeRed;
                              }
                              else {
                                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__Styles);
                                }
                                colorStyle = ColorStyle__Enum_OffWhite;
                              }
                              pCVar30 = Styles::Styles_GetColor
                                                  ((Color *)&RStack_14,colorStyle,(MethodInfo *)0x0)
                              ;
                              if (unaff_ESI != (MVAvatarSpawnRoleCreator__Class *)0x0) {
                                pRVar31 = (RectTransform__Class *)(unaff_ESI->_0).image;
                                (*(code *)pRVar31[1]._1.thread_static_fields_size)
                                          (unaff_ESI,pCVar30->r,pCVar30->g,pCVar30->b,pCVar30->a,
                                           pRVar31[1]._1.thread_static_fields_offset);
                                goto code_?;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pKVar26 = extraout_EDX;
code_?:
  uVar32 = func_?(_Stack_18.dummy,pKVar26);
  func_?(uVar32);
  pKVar18 = extraout_EDX_00;
code_?:
  func_?(unaff_ESI,pKVar18);
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_SetupPreviewImage
               (SpawnRoleSelectionSkillMenu *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___TierShopItem);
    func_?(&StringLiteral_SpawnRole);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_01 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        pSVar2 = (this->fields).spawnRolePreviewer;
        if (pSVar2 != (SpawnRolePreviewer *)0x0) {
          cameraOffset.z = -6.0;
          cameraOffset.x = 0.0;
          cameraOffset.y = 1.5;
          SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                    (pSVar2,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,
                     LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar1,
                     (Vector3)ZEXT812(0x43fa000043fa0000),StringLiteral_SpawnRole,0,this_01,
                     (MethodInfo *)0x0);
          pSVar2 = (this->fields).spawnRolePreviewer;
          if ((pSVar2 != (SpawnRolePreviewer *)0x0) &&
             (this_00 = (this->fields).spawnRolePreviewImage, this_00 != (RawImage *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_00,(Texture *)(pSVar2->fields).previewTexture,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

