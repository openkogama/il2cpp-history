
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
  pOStack_7 = (Object *)0x0;
  if ((subSettingData != (KogamaSettingsCollectionBase *)0x0) &&
     (this_00 = (subSettingData->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                       );
    pDStack_10 = &DStack_11;
    uStack_12 = 0;
    DStack_11._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
    DStack_11._version = pDVar8->_version;
    DStack_11._index = pDVar8->_index;
    DStack_11._current.key = (Object *)(pDVar8->_current).key;
    DStack_11._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_11,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_11,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (int32_t)pOVar6;
      }
      pOVar6 = DStack_11._current.value;
      subSettingData =
           (KogamaSettingsCollectionBase *)
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      if (DStack_11._current.value == (Object *)0x0) break;
      iVar14 = func_?(DStack_11._current.value,
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
      pOVar6 = (Object *)((int)&pOStack_7->klass + iVar14);
      pOStack_7 = pOVar6;
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
                  (pGVar1,2,(MethodInfo *)0x0);
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
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
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
  iStack_7 = CONCAT31(iStack_7._1_3_,(undefined1)tierRequirement == GamePassTier__Enum_Tier2);
  pGVar8 = (this->fields).backgroundTier1;
  pMStack_9 = (MethodInfo *)
               CONCAT31(pMStack_9._1_3_,(undefined1)tierRequirement == GamePassTier__Enum_Tier3);
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                     (pGVar8,(MethodInfo *)0x0);
  if ((bool)bVar10 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier1)) {
    pGVar8 = (this->fields).backgroundTier1;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(undefined1)tierRequirement == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  }
  pGVar8 = (this->fields).backgroundTier2;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                     (pGVar8,(MethodInfo *)0x0);
  if (bVar10 != (bool)iStack_7) {
    pGVar8 = (this->fields).backgroundTier2;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(bool)iStack_7,(MethodInfo *)0x0);
  }
  pGVar8 = (this->fields).backgroundTier3;
  if (pGVar8 == (GameObject *)0x0) goto code_?;
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
  ppSVar12 = &(this->fields).spawnRolePreviewer;
  *ppSVar12 = pSVar11;
  func_?(ppSVar12,pSVar11);
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
  pMStack_13 = (MVAvatarSpawnRoleCreator *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)spawnRolePreviewObject,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
  if (pMStack_13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      ((GameObject *)pMStack_13,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (pTVar14 == (Transform *)0x0) goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
            (pTVar14,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
             (MethodInfo *)0x0);
  pGVar8 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar8,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
  if (pGVar8 == (GameObject *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar8,(MethodInfo *)0x0);
  CStack_15.g = 500.0;
  CStack_15.b = 500.0;
  CStack_15.a = 0.0;
  pOStack_16 = (Object *)0x0;
  pOStack_17 = (Object *)0x3fc00000;
  pOStack_18 = (Object *)0xc0c00000;
  if (*ppSVar12 == (SpawnRolePreviewer *)0x0) goto code_?;
  cameraOffset.z = -6.0;
  cameraOffset.x = 0.0;
  cameraOffset.y = 1.5;
  SpawnRolePreviewer::SpawnRolePreviewer_Initialize
            (*ppSVar12,(this->fields).previewWidth,(this->fields).previewHeight,
             CameraClearFlags__Enum_Color,LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,
             cameraOffset,pTVar14,(Vector3)ZEXT812(0x43fa000043fa0000),StringLiteral_SpawnRole,0,
             (GameObject *)pMStack_13,(MethodInfo *)0x0);
  this_00 = (this->fields).spawnRolePreviewImage;
  if ((*ppSVar12 == (SpawnRolePreviewer *)0x0) || (this_00 == (RawImage *)0x0))
  goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
            (this_00,(Texture *)((*ppSVar12)->fields).previewTexture,(MethodInfo *)0x0);
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
     (this_03 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,spawnRoleId,(MethodInfo *)0x0),
     this_03 == (MVAvatarSpawnRoleCreator *)0x0)) goto code_?;
  bVar19 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
  pMVar20 = TypeInfo__MVAvatarSpawnRoleCreator;
  if (((this_03->klass->_1).naturalAligment < bVar19) ||
     ((MVAvatarSpawnRoleCreator__Class *)(this_03->klass->_1).typeHierarchy[bVar19 - 1] !=
      TypeInfo__MVAvatarSpawnRoleCreator)) {
code_?:
    func_?(this_03,pMVar20);
  }
  else {
    this_04 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                        (this_03,(MethodInfo *)0x0);
    if (this_04 == (AttributeSettingsManager *)0x0) goto code_?;
    this_03 = (MVAvatarSpawnRoleCreator *)
              MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                        (this_04,(MethodInfo *)0x0);
    if (this_03 == (MVAvatarSpawnRoleCreator *)0x0) {
      iStack_7 = (uint)iStack_7._1_3_ << 8;
    }
    else {
      bVar19 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      pMVar20 = (MVAvatarSpawnRoleCreator__Class *)
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
      ;
      if (((this_03->klass->_1).naturalAligment < bVar19) ||
         ((this_03->klass->_1).typeHierarchy[bVar19 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) goto code_?;
      iStack_7 = (uint)iStack_7._1_3_ << 8;
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this_03->fields)._._._._.itemId;
      pMStack_13 = this_03;
      if (this_01 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
      pDVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           auStack_22,this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                          );
      CStack_15.a = (float)&stack0xffffff7c;
      CStack_15.b = 0.0;
      pSVar23 = (String *)(pDVar21->_current).key;
      uVar24 = *(undefined8 *)&(pDVar21->_current).value;
      uStack_1 = 1;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffff7c,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                           );
        if (bVar10 == 0) break;
        pMStack_25 = (MethodInfo *)uVar24;
        pMStack_9 = pMStack_25;
        original = (this->fields).skillElementPrefab;
        iStack_7 = CONCAT31(iStack_7._1_3_,1);
        pSStack_26 = pSVar23;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pSStack_27 = (SpawnRoleSelectionSkillElement *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)original,
                                SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                               );
        if (pSStack_27 == (SpawnRoleSelectionSkillElement *)0x0) goto code_?;
        if (pMStack_9 != (MethodInfo *)0x0) {
          pIStack_28 = pMStack_9->methodPointer;
          cVar29 = (code)(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                        ->_1).naturalAligment;
          if ((((byte)pMStack_9->methodPointer[0xb8] < (byte)cVar29) ||
              (*(KogamaSettingValueWrapperBase__Class **)
                (*(int *)(pIStack_28 + 100) + -4 + (uint)(byte)cVar29 * 4) !=
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
              )) || (pMStack_9 == (MethodInfo *)0x0)) goto code_?;
        }
        method_00 = pMStack_9;
        SpawnRoleSelectionSkillElement::SpawnRoleSelectionSkillElement_Initialize
                  (pSStack_27,pSStack_26,(this->fields).skillDataManagerPrefab,
                   (KogamaSettingValueWrapperBase *)pMStack_9,(MethodInfo *)0x0);
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSStack_27,(MethodInfo *)0x0);
        if (pTVar14 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar14,(this->fields).skillElementContainer,0,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffff7c,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      IStack_6.m_value =
           SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                     (this,(KogamaSettingsCollectionBase *)pMStack_13,(MethodInfo *)0x0);
      pTVar30 = (this->fields).spawnRoleCost;
      pSVar23 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
      if (pTVar30 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar30->klass->vtable).set_text.method)
                (pTVar30,pSVar23,(pTVar30->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      IVar31.m_value = IStack_6.m_value;
      pTVar30 = (this->fields).spawnRoleCost;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Styles);
        cRam_? = '\x01';
      }
      if (IVar31.m_value < 0) {
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        colorStyle = ColorStyle__Enum_NegativeRed;
        pCVar32 = &CStack_15;
      }
      else {
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        colorStyle = ColorStyle__Enum_OffWhite;
        pCVar32 = (Color *)(auStack_22 + 8);
      }
      pCVar32 = Styles::Styles_GetColor(pCVar32,colorStyle,(MethodInfo *)0x0);
      if (pTVar30 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar30->klass->vtable).set_color.method)
                (pTVar30,pCVar32->r,pCVar32->g,pCVar32->b,pCVar32->a,
                 (pTVar30->klass->vtable).get_raycastTarget.methodPtr);
    }
    pGVar8 = (this->fields).leftBorder;
    if ((pGVar8 != (GameObject *)0x0) &&
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0), pTVar14 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar14,(MethodInfo *)0x0);
      pGVar8 = (this->fields).leftBorder;
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,(bool)iStack_7,(MethodInfo *)0x0);
        pGVar8 = (this->fields).noSkillsText;
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,(bool)iStack_7 == '\0',(MethodInfo *)0x0);
          pRVar33 = (this->fields).contentRectTransform;
          if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
            RStack_34.m_XMin = (float)TypeInfo__UnityEngine__UI__LayoutRebuilder;
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
          LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar33,(MethodInfo *)0x0);
          pRVar33 = (this->fields).contentScrollRect;
          if (pRVar33 != (RectTransform *)0x0) {
            pRVar35 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                                ((Rect *)(auStack_22 + 8),pRVar33,(MethodInfo *)0x0);
            auStack_22._8_4_ = pRVar35->m_Width;
            pRVar33 = (this->fields).contentRectTransform;
            pOStack_16 = (Object *)auStack_22._8_4_;
            pOStack_17 = (Object *)auStack_22._8_4_;
            pOStack_18 = (Object *)auStack_22._8_4_;
            if (pRVar33 != (RectTransform *)0x0) {
              pRVar35 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_rect(&RStack_34,pRVar33,(MethodInfo *)0x0);
              if ((float)auStack_22._8_4_ < pRVar35->m_Width) {
                pRVar33 = (this->fields).contentRectTransform;
                CStack_15.b = 0.0;
                CStack_15.a = 0.0;
                if (pRVar33 == (RectTransform *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                          (pRVar33,(Vector2)0x0,(MethodInfo *)0x0);
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
  func_?();
code_?:
  uVar36 = func_?(pMStack_9,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                          );
  func_?(uVar36);
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
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

