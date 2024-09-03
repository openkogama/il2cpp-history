
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
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
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
      subSettingData =
           (KogamaSettingsCollectionBase *)
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      piStack_15 = (int *)func_?(pOVar6,
                                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                         );
      if (piStack_15 == (int *)0x0) goto code_?;
      iVar14 = *piStack_15;
      uVar16 = 0;
      uStack_17 = 0;
      uVar18 = *(ushort *)(iVar14 + 0xb6);
      uStack_19 = (uint)uVar18;
      if (uVar18 != 0) {
        do {
          if (*(IAttributeSetting__Class **)(*(int *)(iVar14 + 0x58) + (uint)uVar16 * 8) ==
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
             ) {
            puVar20 = (undefined4 *)
                     (iVar14 + (*(int *)(*(int *)(iVar14 + 0x58) + 4 + (uint)uVar16 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar18);
      }
      puVar20 = (undefined4 *)
               func_?(piStack_15,
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                               ,0);
code_?:
      iVar14 = (*(code *)*puVar20)(piStack_15,puVar20[1]);
      pOVar6 = (Object *)((int)&pOStack_8->klass + iVar14);
      pOStack_8 = pOVar6;
    }
  }
  func_?();
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
                  (pGVar1,0xb2,(MethodInfo *)0x0);
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
  pvStack_1 = (void *)0xffffffff;
  ppIStack_2 = (Il2CppClass **)&DAT_?;
  pIStack_3 = (Il2CppRGCTXData *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pMStack_4 = (MVAvatarSpawnRoleCreator__StaticFields *)&stack0xffffff84;
  pMVar5 = (MVAvatarSpawnRoleCreator__StaticFields *)&stack0xffffff84;
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
    pMVar5 = pMStack_4;
  }
  pMStack_4 = pMVar5;
  IStack_6.m_value = 0;
  _Stack_1c.__klassIndex._0_1_ = (undefined1)tierRequirement == GamePassTier__Enum_Tier2;
  pGVar7 = (this->fields).backgroundTier1;
  pSStack_8 = (SpawnRoleSelectionSkillElement *)
               CONCAT31(pSStack_8._1_3_,(undefined1)tierRequirement == GamePassTier__Enum_Tier3);
  if (pGVar7 != (GameObject *)0x0) {
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar7,(MethodInfo *)0x0);
    if ((bool)bVar9 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier1)) {
      pGVar7 = (this->fields).backgroundTier1;
      if (pGVar7 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,(undefined1)tierRequirement == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar7 = (this->fields).backgroundTier2;
    if (pGVar7 != (GameObject *)0x0) {
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar7,(MethodInfo *)0x0);
      if (bVar9 != _Stack_1c._0_1_) {
        pGVar7 = (this->fields).backgroundTier2;
        if (pGVar7 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,_Stack_1c._0_1_,(MethodInfo *)0x0);
      }
      pGVar7 = (this->fields).backgroundTier3;
      if (pGVar7 != (GameObject *)0x0) {
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar7,(MethodInfo *)0x0);
        if (bVar9 != (bool)pSStack_8) {
          pGVar7 = (this->fields).backgroundTier3;
          if (pGVar7 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,(bool)pSStack_8,(MethodInfo *)0x0);
        }
        pSVar10 = (this->fields).spawnRolePreviewerPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pSVar10 = (SpawnRolePreviewer *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pSVar10,
                            SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                           );
        (this->fields).spawnRolePreviewer = pSVar10;
        func_?(&(this->fields).spawnRolePreviewer,pSVar10);
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
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)unaff_ESI,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Quaternion);
            cRam_? = '\x01';
          }
          if (pTVar11 != (Transform *)0x0) {
            _Var18.dummy = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar11,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            pGVar7 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (pGVar7,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
            if (pGVar7 != (GameObject *)0x0) {
              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
              pSVar10 = (this->fields).spawnRolePreviewer;
              RStack_12.m_YMin = 500.0;
              RStack_12.m_Width = 500.0;
              RStack_12.m_Height = 0.0;
              RStack_13.m_YMin = 0.0;
              RStack_13.m_Width = 1.5;
              RStack_13.m_Height = -6.0;
              if (pSVar10 != (SpawnRolePreviewer *)0x0) {
                cameraOffset.z = -6.0;
                cameraOffset.x = 0.0;
                cameraOffset.y = 1.5;
                SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                          (pSVar10,(this->fields).previewWidth,(this->fields).previewHeight,
                           CameraClearFlags__Enum_Color,
                           LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,
                           pTVar11,(Vector3)ZEXT812(0x43fa000043fa0000),StringLiteral_SpawnRole,0,
                           (GameObject *)unaff_ESI,(MethodInfo *)0x0);
                pSVar10 = (this->fields).spawnRolePreviewer;
                this_00 = (this->fields).spawnRolePreviewImage;
                if ((pSVar10 != (SpawnRolePreviewer *)0x0) && (this_00 != (RawImage *)0x0)) {
                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                            (this_00,(Texture *)(pSVar10->fields).previewTexture,(MethodInfo *)0x0);
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
                        pMStack_14 = unaff_ESI;
                        if (unaff_ESI == (MVAvatarSpawnRoleCreator__Class *)0x0) {
                          tierRequirement._0_1_ = GamePassTier__Enum_Tier0;
code_?:
                          pGVar7 = (this->fields).leftBorder;
                          if ((pGVar7 != (GameObject *)0x0) &&
                             (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
                             pTVar11 != (Transform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_SetAsFirstSibling(pTVar11,(MethodInfo *)0x0);
                            pGVar7 = (this->fields).leftBorder;
                            if (pGVar7 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive
                                        (pGVar7,(undefined1)tierRequirement,(MethodInfo *)0x0);
                              pGVar7 = (this->fields).noSkillsText;
                              if (pGVar7 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive
                                          (pGVar7,(undefined1)tierRequirement ==
                                                   GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
                                unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)
                                            (this->fields).contentRectTransform;
                                if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  a_Stack_58[0].typeHandle =
                                       (Il2CppMetadataTypeHandle)
                                       TypeInfo__UnityEngine__UI__LayoutRebuilder;
                                  func_?();
                                }
                                UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
                                LayoutRebuilder_ForceRebuildLayoutImmediate
                                          ((RectTransform *)unaff_ESI,(MethodInfo *)0x0);
                                pRVar15 = (this->fields).contentScrollRect;
                                if (pRVar15 != (RectTransform *)0x0) {
                                  pRVar16 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                            RectTransform_get_rect
                                                      (&RStack_13,pRVar15,(MethodInfo *)0x0);
                                  RStack_13.m_XMin = pRVar16->m_Width;
                                  pRVar15 = (this->fields).contentRectTransform;
                                  RStack_13.m_YMin = RStack_13.m_XMin;
                                  RStack_13.m_Width = RStack_13.m_XMin;
                                  RStack_13.m_Height = RStack_13.m_XMin;
                                  if (pRVar15 != (RectTransform *)0x0) {
                                    pRVar16 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform
                                              ::RectTransform_get_rect
                                                        (&RStack_12,pRVar15,(MethodInfo *)0x0);
                                    if (pRVar16->m_Width <= RStack_13.m_XMin) {
code_?:
                                      *unaff_FS_OFFSET = pIStack_3;
                                      return;
                                    }
                                    pRVar15 = (this->fields).contentRectTransform;
                                    RStack_12.m_Width = 0.0;
                                    RStack_12.m_Height = 0.0;
                                    if (pRVar15 != (RectTransform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                      RectTransform_set_pivot(pRVar15,(Vector2)0x0,(MethodInfo *)0x0)
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
                          pKVar17 = 
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                          ;
                          if ((*(byte *)&((Dictionary_2_System_Object_System_Object_ *)
                                         (unaff_ESI->_0).image)[3].fields._values <
                               (
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                               ->_1).naturalAligment) ||
                             (*(KogamaSettingsCollectionBase__Class **)
                               (((Dictionary_2_System_Object_System_Object_ *)(unaff_ESI->_0).image)
                                [2].monitor +
                               (uint)(
                                     TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                                     ->_1).naturalAligment * 4 + -4) !=
                              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                             )) goto code_?;
                          this_01 = (Dictionary_2_System_UInt32_System_Object_ *)
                                    (unaff_ESI->_0).byval_arg.data.typeHandle;
                          tierRequirement = GamePassTier__Enum_Tier0;
                          pMStack_18 = unaff_ESI;
                          if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
                            pDVar19 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::UInt32,System::Object]::
                                      Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                                  *)a_Stack_58,this_01,
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                                                );
                            RStack_12.m_Height = (float)&stack0xffffff90;
                            RStack_12.m_Width = 0.0;
                            pSVar20 = (String *)(pDVar19->_current).key;
                            uVar21 = *(undefined8 *)&(pDVar19->_current).value;
                            pvStack_1 = (void *)0x1;
                            while( true ) {
                              unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)&stack0xffffff90;
                              bVar9 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::
                                      Object]::
                                      Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                                ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                                  *)unaff_ESI,
                                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                                                );
                              if (bVar9 == 0) break;
                              _Stack_60.__klassIndex = (TypeDefinitionIndex)uVar21;
                              _Stack_1c.dummy = _Stack_60.dummy;
                              pSStack_8 = (this->fields).skillElementPrefab;
                              tierRequirement = GamePassTier__Enum_Tier1;
                              pSStack_22 = pSVar20;
                              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor ==
                                  0) {
                                func_?(TypeInfo__UnityEngine__Object);
                              }
                              pSStack_8 = (SpawnRoleSelectionSkillElement *)
                                           UnityEngine.CoreModule.dll::UnityEngine::Object::
                                           Object_1_Instantiate_4
                                                     ((Object *)pSStack_8,
                                                                                                            
                                                  SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                                                  );
                              if (pSStack_8 == (SpawnRoleSelectionSkillElement *)0x0)
                              goto code_?;
                              if ((_Stack_1c.dummy != (MethodInfo *)0x0) &&
                                 (((_Var18 = _Stack_1c,
                                   (byte)*(code *)&(_Stack_1c.array)->etype[0x17].data <
                                   (
                                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                                   ->_1).naturalAligment ||
                                   (unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)&stack0xffffff90,
                                   *(KogamaSettingValueWrapperBase__Class **)
                                    (*(int *)&(_Stack_1c.array)->etype[0xc].attrs + -4 +
                                    (uint)(
                                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                                          ->_1).naturalAligment * 4) !=
                                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                                   )) || (_Stack_1c.dummy == (MethodInfo *)0x0))))
                              goto code_?;
                              unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)&stack0xffffff90;
                              _Var18 = _Stack_1c;
                              SpawnRoleSelectionSkillElement::
                              SpawnRoleSelectionSkillElement_Initialize
                                        (pSStack_8,pSStack_22,(this->fields).skillDataManagerPrefab
                                         ,(KogamaSettingValueWrapperBase *)_Stack_1c.typeHandle,
                                         (MethodInfo *)0x0);
                              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pSStack_8,(MethodInfo *)0x0);
                              if (pTVar11 == (Transform *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_SetParent_1
                                        (pTVar11,(this->fields).skillElementContainer,0,
                                         (MethodInfo *)0x0);
                            }
                            pvStack_1 = (void *)0xffffffff;
                            mscorlib.dll::System::ThrowHelper::
                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                      ((Object *)unaff_ESI,
                                       (ExceptionArgument__Enum)
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                                       ,(MethodInfo *)_Var18.typeHandle);
                            pvStack_1 = (void *)0xffffffff;
                            IStack_6.m_value =
                                 SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                                           (this,(KogamaSettingsCollectionBase *)pMStack_14,
                                            (MethodInfo *)0x0);
                            pTVar23 = (this->fields).spawnRoleCost;
                            pSVar20 = mscorlib.dll::System::Int32::Int32_ToString
                                                (&IStack_6,(MethodInfo *)0x0);
                            unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)0x0;
                            if (pTVar23 != (Text *)0x0) {
                              (*(code *)(pTVar23->klass->vtable).set_text.method)
                                        (pTVar23,pSVar20,
                                         (pTVar23->klass->vtable).CalculateLayoutInputHorizontal_1.
                                         methodPtr);
                              IVar24.m_value = IStack_6.m_value;
                              unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)
                                          (this->fields).spawnRoleCost;
                              if (cRam_? == '\0') {
                                func_?(&TypeInfo__Styles);
                                cRam_? = '\x01';
                              }
                              if (IVar24.m_value < 0) {
                                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__Styles);
                                }
                                colorStyle = ColorStyle__Enum_NegativeRed;
                                pRVar16 = &RStack_12;
                              }
                              else {
                                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__Styles);
                                }
                                colorStyle = ColorStyle__Enum_OffWhite;
                                pRVar16 = &RStack_13;
                              }
                              pCVar25 = Styles::Styles_GetColor
                                                  ((Color *)pRVar16,colorStyle,(MethodInfo *)0x0);
                              if (unaff_ESI != (MVAvatarSpawnRoleCreator__Class *)0x0) {
                                pDVar26 = (Dictionary_2_System_Object_System_Object_ *)
                                         (unaff_ESI->_0).image;
                                (*(code *)pDVar26[7].fields._values)
                                          (unaff_ESI,pCVar25->r,pCVar25->g,pCVar25->b,pCVar25->a,
                                           pDVar26[7].fields._syncRoot);
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
  _Var18 = extraout_EDX;
code_?:
  uVar27 = func_?(_Var18.dummy,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                          );
  func_?(uVar27);
  pKVar17 = extraout_EDX_00;
code_?:
  func_?(unaff_ESI,pKVar17);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
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

