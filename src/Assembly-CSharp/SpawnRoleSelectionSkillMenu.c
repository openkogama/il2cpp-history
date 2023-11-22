
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
                  (pGVar1,0x62,(MethodInfo *)0x0);
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
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  IStack_6.m_value = 0;
  pMStack_7 = (MVAvatarSpawnRoleCreator *)
               CONCAT31(pMStack_7._1_3_,(undefined1)tierRequirement == GamePassTier__Enum_Tier2);
  pGVar8 = (this->fields).backgroundTier1;
  pSStack_9 = (SpawnRoleSelectionSkillElement *)
               CONCAT31(pSStack_9._1_3_,(undefined1)tierRequirement == GamePassTier__Enum_Tier3);
  pMVar10 = pMStack_7;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar8,(MethodInfo *)0x0);
  if ((bool)bVar11 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier1)) {
    pGVar8 = (this->fields).backgroundTier1;
    pMVar10 = pMStack_7;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(undefined1)tierRequirement == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  }
  pGVar8 = (this->fields).backgroundTier2;
  pMVar10 = pMStack_7;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar8,(MethodInfo *)0x0);
  if (bVar11 != (bool)pMStack_7) {
    pGVar8 = (this->fields).backgroundTier2;
    pMVar10 = pMStack_7;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(bool)pMStack_7,(MethodInfo *)0x0);
  }
  pGVar8 = (this->fields).backgroundTier3;
  pMVar10 = pMStack_7;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar8,(MethodInfo *)0x0);
  if (bVar11 != (bool)pSStack_9) {
    pGVar8 = (this->fields).backgroundTier3;
    pMVar10 = pMStack_7;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(bool)pSStack_9,(MethodInfo *)0x0);
  }
  pSVar12 = (this->fields).spawnRolePreviewerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar12 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar12,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar12;
  func_?(&(this->fields).spawnRolePreviewer,pSVar12);
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
  pGVar8 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)spawnRolePreviewObject,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  pMVar10 = pMStack_7;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar8,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pMVar10 = pMStack_7;
  if (pTVar13 == (Transform *)0x0) goto code_?;
  pMVar14 = (MethodInfo *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
            (pTVar13,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
             (MethodInfo *)0x0);
  this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
  pMVar10 = pMStack_7;
  if (this_02 == (GameObject *)0x0) goto code_?;
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_02,(MethodInfo *)0x0);
  pSVar12 = (this->fields).spawnRolePreviewer;
  RStack_15.m_YMin = 500.0;
  RStack_15.m_Width = 500.0;
  RStack_15.m_Height = 0.0;
  pOStack_16 = (Object *)0x0;
  pOStack_17 = (Object *)0x3fc00000;
  pOStack_18 = (Object *)0xc0c00000;
  pMVar10 = pMStack_7;
  if (pSVar12 == (SpawnRolePreviewer *)0x0) goto code_?;
  cameraOffset.z = -6.0;
  cameraOffset.x = 0.0;
  cameraOffset.y = 1.5;
  SpawnRolePreviewer::SpawnRolePreviewer_Initialize
            (pSVar12,(this->fields).previewWidth,(this->fields).previewHeight,
             CameraClearFlags__Enum_Color,LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,
             cameraOffset,pTVar13,(Vector3)ZEXT812(0x43fa000043fa0000),StringLiteral_SpawnRole,0,
             pGVar8,(MethodInfo *)0x0);
  pSVar12 = (this->fields).spawnRolePreviewer;
  this_00 = (this->fields).spawnRolePreviewImage;
  pMVar10 = pMStack_7;
  if ((pSVar12 == (SpawnRolePreviewer *)0x0) || (this_00 == (RawImage *)0x0)) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
            (this_00,(Texture *)(pSVar12->fields).previewTexture,(MethodInfo *)0x0);
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pMVar10 = pMStack_7;
  if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
     (this_04 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,spawnRoleId,(MethodInfo *)0x0), pMVar10 = pMStack_7,
     this_04 == (MVAvatarSpawnRoleCreator *)0x0)) goto code_?;
  pMVar19 = TypeInfo__MVAvatarSpawnRoleCreator;
  if (((this_04->klass->_1).naturalAligment <
       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
     ((MVAvatarSpawnRoleCreator__Class *)
      (this_04->klass->_1).typeHierarchy
      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
      TypeInfo__MVAvatarSpawnRoleCreator)) {
code_?:
    func_?(this_04,pMVar19);
    pMVar10 = pMStack_7;
  }
  else {
    this_05 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                        (this_04,(MethodInfo *)0x0);
    pMVar10 = pMStack_7;
    if (this_05 == (AttributeSettingsManager *)0x0) goto code_?;
    this_04 = (MVAvatarSpawnRoleCreator *)
              MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                        (this_05,(MethodInfo *)0x0);
    if (this_04 == (MVAvatarSpawnRoleCreator *)0x0) {
      tierRequirement._0_1_ = GamePassTier__Enum_Tier0;
    }
    else {
      pMVar19 = (MVAvatarSpawnRoleCreator__Class *)
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
      ;
      if (((this_04->klass->_1).naturalAligment <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).naturalAligment) ||
         ((this_04->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) goto code_?;
      tierRequirement = GamePassTier__Enum_Tier0;
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this_04->fields)._._._._.itemId;
      pMVar10 = this_04;
      if (this_01 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
      pMStack_7 = this_04;
      pDVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           auStack_21,this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                          );
      RStack_15.m_Height = (float)&stack0xffffff94;
      RStack_15.m_Width = 0.0;
      pSVar22 = (String *)(pDVar20->_current).key;
      uVar23 = *(undefined8 *)&(pDVar20->_current).value;
      uStack_1 = 1;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                           &stack0xffffff94,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar11 == 0) break;
        pMStack_24 = (MethodInfo *)uVar23;
        pMStack_25 = pMStack_24;
        pSStack_9 = (this->fields).skillElementPrefab;
        tierRequirement = GamePassTier__Enum_Tier1;
        pSStack_26 = pSVar22;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pSStack_9 = (SpawnRoleSelectionSkillElement *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pSStack_9,
                                SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                               );
        pMVar10 = pMStack_7;
        if (pSStack_9 == (SpawnRoleSelectionSkillElement *)0x0) goto code_?;
        if ((pMStack_25 != (MethodInfo *)0x0) &&
           (((pMVar14 = pMStack_25,
             (byte)pMStack_25->methodPointer[0xb8] <
             (
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             ->_1).naturalAligment ||
             (*(KogamaSettingValueWrapperBase__Class **)
               (*(int *)(pMStack_25->methodPointer + 100) + -4 +
               (uint)(
                     TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                     ->_1).naturalAligment * 4) !=
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             )) || (pMStack_25 == (MethodInfo *)0x0)))) goto code_?;
        pMVar14 = pMStack_25;
        SpawnRoleSelectionSkillElement::SpawnRoleSelectionSkillElement_Initialize
                  (pSStack_9,pSStack_26,(this->fields).skillDataManagerPrefab,
                   (KogamaSettingValueWrapperBase *)pMStack_25,(MethodInfo *)0x0);
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSStack_9,(MethodInfo *)0x0);
        pMVar10 = pMStack_7;
        if (pTVar13 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar13,(this->fields).skillElementContainer,0,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffff94,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,pMVar14);
      uStack_1 = 0xffffffff;
      IStack_6.m_value =
           SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                     (this,(KogamaSettingsCollectionBase *)pMStack_7,(MethodInfo *)0x0);
      pTVar27 = (this->fields).spawnRoleCost;
      pSVar22 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
      pMVar10 = pMStack_7;
      if (pTVar27 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar27->klass->vtable).set_text.method)
                (pTVar27,pSVar22,(pTVar27->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar27 = (this->fields).spawnRoleCost;
      pCVar28 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                          ((Color *)(auStack_21 + 8),IStack_6.m_value,(MethodInfo *)0x0);
      pMVar10 = pMStack_7;
      if (pTVar27 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar27->klass->vtable).set_color.method)
                (pTVar27,pCVar28->r,pCVar28->g,pCVar28->b,pCVar28->a,
                 (pTVar27->klass->vtable).get_raycastTarget.methodPtr);
    }
    pGVar8 = (this->fields).leftBorder;
    pMVar10 = pMStack_7;
    if ((pGVar8 != (GameObject *)0x0) &&
       (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0), pMVar10 = pMStack_7,
       pTVar13 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar13,(MethodInfo *)0x0);
      pGVar8 = (this->fields).leftBorder;
      pMVar10 = pMStack_7;
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,(undefined1)tierRequirement,(MethodInfo *)0x0);
        pGVar8 = (this->fields).noSkillsText;
        pMVar10 = pMStack_7;
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,(undefined1)tierRequirement == GamePassTier__Enum_Tier0,
                     (MethodInfo *)0x0);
          pRVar29 = (this->fields).contentRectTransform;
          if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
            auStack_21._0_4_ = TypeInfo__UnityEngine__UI__LayoutRebuilder;
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
          LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar29,(MethodInfo *)0x0);
          pRVar29 = (this->fields).contentScrollRect;
          pMVar10 = pMStack_7;
          if (pRVar29 != (RectTransform *)0x0) {
            pRVar30 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                                ((Rect *)(auStack_21 + 8),pRVar29,(MethodInfo *)0x0);
            auStack_21._8_4_ = pRVar30->m_Width;
            pRVar29 = (this->fields).contentRectTransform;
            pOStack_16 = (Object *)auStack_21._8_4_;
            pOStack_17 = (Object *)auStack_21._8_4_;
            pOStack_18 = (Object *)auStack_21._8_4_;
            pMVar10 = pMStack_7;
            if (pRVar29 != (RectTransform *)0x0) {
              pRVar30 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_rect(&RStack_15,pRVar29,(MethodInfo *)0x0);
              if ((float)auStack_21._8_4_ < pRVar30->m_Width) {
                pRVar29 = (this->fields).contentRectTransform;
                RStack_15.m_Width = 0.0;
                RStack_15.m_Height = 0.0;
                pMVar10 = pMStack_7;
                if (pRVar29 == (RectTransform *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                          (pRVar29,(Vector2)0x0,(MethodInfo *)0x0);
              }
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  pMStack_7 = pMVar10;
  func_?();
  pMVar14 = extraout_EDX;
code_?:
  uVar31 = func_?(pMVar14,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                          );
  func_?(uVar31);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
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

