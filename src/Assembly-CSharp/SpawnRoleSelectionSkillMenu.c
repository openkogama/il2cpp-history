
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
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_System_Object_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                       );
    pDStack_11 = &DStack_7;
    uStack_12 = 0;
    DStack_7._dictionary = pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key = (pDVar9->_current).key;
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
      uVar18 = *(ushort *)(iVar14 + 0xb2);
      uStack_19 = (uint)uVar18;
      if (uVar18 != 0) {
        do {
          if (*(IAttributeSetting__Class **)(*(int *)(iVar14 + 0x58) + (uint)uVar16 * 8) ==
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
             ) {
            puVar20 = (undefined4 *)
                     (*(int *)(*(int *)(iVar14 + 0x58) + 4 + (uint)uVar16 * 8) * 8 + 0xbc + iVar14);
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff78;
  puVar5 = &stack0xffffff78;
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
  SStack_10.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_10.monitor = (MonitorData *)0x0;
  SStack_10.fields.value = 0.0;
  SStack_10.fields.OnChange = (Action_1_Single_ *)0x0;
  pMVar11 = pMStack_7;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar8,(MethodInfo *)0x0);
  if ((bool)bVar12 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier1)) {
    pGVar8 = (this->fields).backgroundTier1;
    pMVar11 = pMStack_7;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(undefined1)tierRequirement == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  }
  pGVar8 = (this->fields).backgroundTier2;
  pMVar11 = pMStack_7;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar8,(MethodInfo *)0x0);
  if (bVar12 != (bool)pMStack_7) {
    pGVar8 = (this->fields).backgroundTier2;
    pMVar11 = pMStack_7;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(bool)pMStack_7,(MethodInfo *)0x0);
  }
  pGVar8 = (this->fields).backgroundTier3;
  pMVar11 = pMStack_7;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar8,(MethodInfo *)0x0);
  if (bVar12 != (bool)pSStack_9) {
    pGVar8 = (this->fields).backgroundTier3;
    pMVar11 = pMStack_7;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(bool)pSStack_9,(MethodInfo *)0x0);
  }
  pSVar13 = (this->fields).spawnRolePreviewerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar13 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar13,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar13;
  func_?(&(this->fields).spawnRolePreviewer,pSVar13);
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
  pMVar11 = pMStack_7;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar8,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pMVar11 = pMStack_7;
  if (pTVar14 == (Transform *)0x0) goto code_?;
  pMVar15 = (MethodInfo *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
            (pTVar14,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
             (MethodInfo *)0x0);
  this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  pMVar11 = pMStack_7;
  if (this_02 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_02,(MethodInfo *)0x0);
  pSVar13 = (this->fields).spawnRolePreviewer;
  CStack_16.g = 500.0;
  CStack_16.b = 500.0;
  CStack_16.a = 0.0;
  pOStack_17 = (Object *)0x0;
  pOStack_18 = (Object *)0x3fc00000;
  iStack_19 = -0x3f400000;
  pMVar11 = pMStack_7;
  if (pSVar13 == (SpawnRolePreviewer *)0x0) goto code_?;
  cameraOffset.z = -6.0;
  cameraOffset.x = 0.0;
  cameraOffset.y = 1.5;
  SpawnRolePreviewer::SpawnRolePreviewer_Initialize
            (pSVar13,(this->fields).previewWidth,(this->fields).previewHeight,
             CameraClearFlags__Enum_Color,LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,
             cameraOffset,pTVar14,(Vector3)ZEXT812(0x43fa000043fa0000),StringLiteral_SpawnRole,0,
             pGVar8,(MethodInfo *)0x0);
  pSVar13 = (this->fields).spawnRolePreviewer;
  this_00 = (this->fields).spawnRolePreviewImage;
  pMVar11 = pMStack_7;
  if ((pSVar13 == (SpawnRolePreviewer *)0x0) || (this_00 == (RawImage *)0x0)) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
            (this_00,(Texture *)(pSVar13->fields).previewTexture,(MethodInfo *)0x0);
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pMVar11 = pMStack_7;
  if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
     (this_04 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,spawnRoleId,(MethodInfo *)0x0), pMVar11 = pMStack_7,
     this_04 == (MVAvatarSpawnRoleCreator *)0x0)) goto code_?;
  pMVar20 = TypeInfo__MVAvatarSpawnRoleCreator;
  if (((this_04->klass->_1).typeHierarchyDepth <
       (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth) ||
     ((MVAvatarSpawnRoleCreator__Class *)
      (this_04->klass->_1).typeHierarchy
      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1] !=
      TypeInfo__MVAvatarSpawnRoleCreator)) {
code_?:
    func_?(this_04,pMVar20);
    pMVar11 = pMStack_7;
  }
  else {
    this_05 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                        (this_04,(MethodInfo *)0x0);
    pMVar11 = pMStack_7;
    if (this_05 == (AttributeSettingsManager *)0x0) goto code_?;
    this_04 = (MVAvatarSpawnRoleCreator *)
              MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                        (this_05,(MethodInfo *)0x0);
    if (this_04 == (MVAvatarSpawnRoleCreator *)0x0) {
      tierRequirement._0_1_ = GamePassTier__Enum_Tier0;
    }
    else {
      pMVar20 = (MVAvatarSpawnRoleCreator__Class *)
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
      ;
      if (((this_04->klass->_1).typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).typeHierarchyDepth) ||
         ((this_04->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) goto code_?;
      tierRequirement = GamePassTier__Enum_Tier0;
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this_04->fields)._._._._.itemId;
      pMVar11 = this_04;
      if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pMStack_7 = this_04;
      pDVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                           auStack_22,this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                          );
      CStack_16.a = (float)&stack0xffffff84;
      CStack_16.b = 0.0;
      pSVar23 = (String *)(pDVar21->_current).key;
      uVar24 = *(undefined8 *)&(pDVar21->_current).value;
      uStack_1 = 1;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                           &stack0xffffff84,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar12 == 0) break;
        pMStack_25 = (MethodInfo *)uVar24;
        pMStack_26 = pMStack_25;
        pSStack_9 = (this->fields).skillElementPrefab;
        tierRequirement = GamePassTier__Enum_Tier1;
        pSStack_27 = pSVar23;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pSStack_9 = (SpawnRoleSelectionSkillElement *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pSStack_9,
                                SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                               );
        pMVar11 = pMStack_7;
        if (pSStack_9 == (SpawnRoleSelectionSkillElement *)0x0) goto code_?;
        if ((pMStack_26 != (MethodInfo *)0x0) &&
           (((pMVar15 = pMStack_26,
             (byte)pMStack_26->methodPointer[0xb4] <
             (
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             ->_1).typeHierarchyDepth ||
             (*(KogamaSettingValueWrapperBase__Class **)
               (*(int *)(pMStack_26->methodPointer + 100) + -4 +
               (uint)(
                     TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                     ->_1).typeHierarchyDepth * 4) !=
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             )) || (pMStack_26 == (MethodInfo *)0x0)))) goto code_?;
        pMVar15 = pMStack_26;
        SpawnRoleSelectionSkillElement::SpawnRoleSelectionSkillElement_Initialize
                  (pSStack_9,pSStack_27,(this->fields).skillDataManagerPrefab,
                   (KogamaSettingValueWrapperBase *)pMStack_26,(MethodInfo *)0x0);
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSStack_9,(MethodInfo *)0x0);
        pMVar11 = pMStack_7;
        if (pTVar14 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar14,(this->fields).skillElementContainer,0,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff84,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,pMVar15);
      uStack_1 = 0xffffffff;
      IStack_6.m_value =
           SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                     (this,(KogamaSettingsCollectionBase *)pMStack_7,(MethodInfo *)0x0);
      pTVar28 = (this->fields).spawnRoleCost;
      pSVar23 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
      pMVar11 = pMStack_7;
      if (pTVar28 == (Text *)0x0) goto code_?;
      (*(pTVar28->klass->vtable).set_text.methodPtr)
                (pTVar28,pSVar23,(pTVar28->klass->vtable).set_text.method);
      IVar29.m_value = IStack_6.m_value;
      pTVar28 = (this->fields).spawnRoleCost;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Styles);
        cRam_? = '\x01';
      }
      if (IVar29.m_value < 0) {
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        colorStyle = ColorStyle__Enum_NegativeRed;
        pCVar30 = &CStack_16;
      }
      else {
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        colorStyle = ColorStyle__Enum_OffWhite;
        pCVar30 = (Color *)(auStack_22 + 8);
      }
      pCVar30 = Styles::Styles_GetColor(pCVar30,colorStyle,(MethodInfo *)0x0);
      pMVar11 = pMStack_7;
      if (pTVar28 == (Text *)0x0) goto code_?;
      (*(pTVar28->klass->vtable).set_color.methodPtr)
                (pTVar28,pCVar30->r,pCVar30->g,pCVar30->b,pCVar30->a,
                 (pTVar28->klass->vtable).set_color.method);
    }
    pGVar8 = (this->fields).leftBorder;
    pMVar11 = pMStack_7;
    if ((pGVar8 != (GameObject *)0x0) &&
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0), pMVar11 = pMStack_7,
       pTVar14 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar14,(MethodInfo *)0x0);
      pGVar8 = (this->fields).leftBorder;
      pMVar11 = pMStack_7;
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,(undefined1)tierRequirement,(MethodInfo *)0x0);
        pGVar8 = (this->fields).noSkillsText;
        pMVar11 = pMStack_7;
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,(undefined1)tierRequirement == GamePassTier__Enum_Tier0,
                     (MethodInfo *)0x0);
          pRVar31 = (this->fields).contentRectTransform;
          if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
            SStack_10.klass =
                 (SubscribableVariableBase_1_System_Single___Class *)
                 TypeInfo__UnityEngine__UI__LayoutRebuilder;
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
          LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar31,(MethodInfo *)0x0);
          pRVar31 = (this->fields).contentScrollRect;
          pMVar11 = pMStack_7;
          if (pRVar31 != (RectTransform *)0x0) {
            pRVar32 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                                ((Rect *)(auStack_22 + 8),pRVar31,(MethodInfo *)0x0);
            SStack_10.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar32->m_XMin;
            SStack_10.monitor = (MonitorData *)pRVar32->m_YMin;
            SStack_10.fields.value = pRVar32->m_Width;
            SStack_10.fields.OnChange = (Action_1_Single_ *)pRVar32->m_Height;
            fVar33 = SubscribableVariableBase`1[System::Single]::
                     SubscribableVariableBase_1_System_Single__get_Value
                               (&SStack_10,(MethodInfo *)0x0);
            pRVar31 = (this->fields).contentRectTransform;
            pMVar11 = pMStack_7;
            if (pRVar31 != (RectTransform *)0x0) {
              pRVar32 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_rect((Rect *)(auStack_22 + 8),pRVar31,(MethodInfo *)0x0);
              SStack_10.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar32->m_XMin;
              SStack_10.monitor = (MonitorData *)pRVar32->m_YMin;
              SStack_10.fields.value = pRVar32->m_Width;
              SStack_10.fields.OnChange = (Action_1_Single_ *)pRVar32->m_Height;
              fVar34 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 (&SStack_10,(MethodInfo *)0x0);
              if (fVar33 < fVar34) {
                pRVar31 = (this->fields).contentRectTransform;
                CStack_16.b = 0.0;
                CStack_16.a = 0.0;
                pMVar11 = pMStack_7;
                if (pRVar31 == (RectTransform *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                          (pRVar31,(Vector2)0x0,(MethodInfo *)0x0);
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
  pMStack_7 = pMVar11;
  func_?();
  pMVar15 = extraout_EDX;
code_?:
  uVar35 = func_?(pMVar15,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                          );
  func_?(uVar35);
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
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

