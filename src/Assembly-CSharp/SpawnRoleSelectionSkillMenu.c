
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
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  iVar8 = 0;
  iStack_9 = 0;
  puStack_10 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if ((subSettingData != (KogamaSettingsCollectionBase *)0x0) &&
     (puStack_10 = (undefined4 *)&stack0xffffffa0, puStack_4 = &stack0xffffffa0,
     this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
               System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)subSettingData,(MethodInfo *)0x0),
     this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffac,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar11->dictionary;
    auStack_6._4_4_ = pDVar11->next;
    auStack_6._8_4_ = pDVar11->stamp;
    auStack_6._12_4_ = (pDVar11->current).key;
    auStack_6._16_4_ = (pDVar11->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_10 = 0x4e;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return iVar8;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                            );
      iVar13 = func_?();
      if (iVar13 == 0) goto code_?;
      iVar13 = func_?();
      if ((iVar13 == 0) || (piVar14 = (int *)func_?(), piVar14 == (int *)0x0)) break;
      iStack_15 = *piVar14;
      uVar16 = 0;
      if (*(ushort *)(iStack_15 + 0xb6) != 0) {
        do {
          if (*(IAttributeSetting__Class **)(*(int *)(iStack_15 + 0x58) + (uint)uVar16 * 8) ==
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
             ) {
            puVar17 = (undefined4 *)
                     (iStack_15 + 0xc0 +
                     *(int *)(*(int *)(iStack_15 + 0x58) + 4 + (uint)uVar16 * 8) * 8);
            goto code_?;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(ushort *)(iStack_15 + 0xb6));
      }
      puVar17 = (undefined4 *)func_?(piVar14);
code_?:
      iVar13 = (*(code *)*puVar17)();
      iVar8 = iStack_9 + iVar13;
      iStack_9 = iVar8;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  iVar8 = (*pcVar18)();
  return iVar8;
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
                  (pGVar1,0xe2,(MethodInfo *)0x0);
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
  func_?(0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLStack_4 = (LevelRewardsManager__Class *)0x0;
  method_00 = (Action_1_Single_ *)0x0;
  func_?();
  bVar5 = (undefined1)tierRequirement == GamePassTier__Enum_Tier2;
  pMStack_6 = (MethodInfo *)CONCAT31(pMStack_6._1_3_,bVar5);
  value = (undefined1)tierRequirement == GamePassTier__Enum_Tier3;
  pGVar7 = (this->fields).backgroundTier1;
  pAStack_8 = (Action_1_Single_ *)CONCAT31(pAStack_8._1_3_,value);
  if (pGVar7 == (GameObject *)0x0) goto code_?;
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar7,(MethodInfo *)0x0);
  if ((bool)bVar9 != ((undefined1)tierRequirement == GamePassTier__Enum_Tier1)) {
    pGVar7 = (this->fields).backgroundTier1;
    if (pGVar7 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,(undefined1)tierRequirement == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  }
  method_01 = (MethodInfo *)(this->fields).backgroundTier2;
  if (method_01 == (MethodInfo *)0x0) goto code_?;
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    ((GameObject *)method_01,(MethodInfo *)0x0);
  if ((bool)bVar9 != bVar5) {
    pGVar7 = (this->fields).backgroundTier2;
    if (pGVar7 == (GameObject *)0x0) goto code_?;
    method_01 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,bVar5,(MethodInfo *)0x0);
    in_stack_10 = pMStack_6;
  }
  pGVar7 = (this->fields).backgroundTier3;
  if (pGVar7 == (GameObject *)0x0) goto code_?;
  method_02 = (SubscribableVariableBase_1_System_Single___Class *)&UNK_?;
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar7,(MethodInfo *)0x0);
  if ((bool)bVar9 != value) {
    pGVar7 = (this->fields).backgroundTier3;
    if (pGVar7 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,value,(MethodInfo *)0x0);
    method_00 = pAStack_8;
  }
  pSVar11 = (this->fields).spawnRolePreviewerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar11 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar11,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar11;
  SpawnRoleSelectionSkillMenu_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar12 = (MVAvatarSpawnRoleCreator *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,spawnRoleId,(MethodInfo *)0x0),
     pMVar12 == (MVAvatarSpawnRoleCreator *)0x0)) goto code_?;
  bVar13 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
  if (((pMVar12->klass->_1).naturalAligment < bVar13) ||
     ((MVAvatarSpawnRoleCreator__Class *)(pMVar12->klass->_1).typeHierarchy[bVar13 - 1] !=
      TypeInfo__MVAvatarSpawnRoleCreator)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  this_01 = (MVAvatarSpawnRoleCreator *)0x0;
  if (bVar5) {
    this_01 = pMVar12;
  }
  if (this_01 == (MVAvatarSpawnRoleCreator *)0x0) {
code_?:
    func_?();
  }
  else {
    this_02 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                        (this_01,(MethodInfo *)0x0);
    if (this_02 == (AttributeSettingsManager *)0x0) goto code_?;
    pSVar14 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                 AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                           (this_02,(MethodInfo *)0x0);
    if (pSVar14 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      tierRequirement._0_1_ = GamePassTier__Enum_Tier0;
    }
    else {
      bVar13 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((pSVar14->klass->_1).naturalAligment < bVar13) ||
         ((pSVar14->klass->_1).typeHierarchy[bVar13 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)0x0;
      if (bVar5) {
        this_03 = pSVar14;
      }
      if (this_03 ==
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) goto code_?;
      tierRequirement = GamePassTier__Enum_Tier0;
      this_04 = (Dictionary_2_WinningConditionType_System_Object_ *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          (this_03,(MethodInfo *)0x0);
      if (this_04 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) goto code_?;
      __return_storage_ptr___00 =
           (Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
           &stack0xffffff98;
      pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                          (__return_storage_ptr___00,this_04,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                          );
      pLStack_4 = (LevelRewardsManager__Class *)pDVar15->dictionary;
      uStack_1 = 0;
      while( true ) {
        cVar16 = func_?();
        if (cVar16 == '\0') break;
        LevelRewardsManager::LevelRewardsManager_get_NextReward
                  ((LevelRewardsManager *)&pLStack_4,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                  );
        pSVar17 = (this->fields).skillElementPrefab;
        tierRequirement = GamePassTier__Enum_Tier1;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar17 = (SpawnRoleSelectionSkillElement *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)pSVar17,
                             SpawnRoleSelectionSkillElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillElement>_SpawnRoleSelectionSkillElement_
                            );
        method_00 = (Action_1_Single_ *)func_?();
        skillDataManager = (this->fields).skillDataManagerPrefab;
        __return_storage_ptr___00 =
             (Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
             &stack0xffffffcc;
        func_?();
        if (pSVar17 == (SpawnRoleSelectionSkillElement *)0x0) goto code_?;
        skillSetting = (KogamaSettingValueWrapperBase *)func_?();
        SpawnRoleSelectionSkillElement::SpawnRoleSelectionSkillElement_Initialize
                  (pSVar17,(String *)method_00,skillDataManager,skillSetting,(MethodInfo *)0x0);
        pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pSVar17,(MethodInfo *)0x0);
        if (pTVar18 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar18,(this->fields).skillElementContainer,0,(MethodInfo *)0x0);
      }
      __return_storage_ptr___00->dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)0xc7;
      uStack_1 = 0xffffffff;
      func_?();
      iVar19 = SpawnRoleSelectionSkillMenu_CalculateTotalCostOfSkills
                         (this,(KogamaSettingsCollectionBase *)this_03,(MethodInfo *)0x0);
      pTVar20 = (this->fields).spawnRoleCost;
      func_?();
      if (pTVar20 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar20->klass->vtable).set_text.method)();
      in_stack_21 = (this->fields).spawnRoleCost;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (iVar19 < 0) {
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        fVar22 = 8.82818e-44;
        __return_storage_ptr__ = (Color *)&stack0xffffff9c;
      }
      else {
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        fVar22 = 3.64338e-44;
        __return_storage_ptr__ = (Color *)&stack0xffffff68;
      }
      Styles::Styles_GetColor(__return_storage_ptr__,(ColorStyle__Enum)fVar22,(MethodInfo *)0x0);
      if (in_stack_21 == (Text *)0x0) goto code_?;
      (*(code *)(in_stack_21->klass->vtable).set_color.method)();
    }
    pGVar7 = (this->fields).leftBorder;
    if ((pGVar7 != (GameObject *)0x0) &&
       (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar7,method_01), pTVar18 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar18,in_stack_10);
      pGVar7 = (this->fields).leftBorder;
      if (pGVar7 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,(undefined1)tierRequirement,(MethodInfo *)method_02);
        pGVar7 = (this->fields).noSkillsText;
        if (pGVar7 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,(undefined1)tierRequirement == GamePassTier__Enum_Tier0,
                     (MethodInfo *)method_00);
          pRVar23 = (this->fields).contentRectTransform;
          if ((((uint)(TypeInfo__UnityEngine__UI__LayoutRebuilder->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
          LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar23,(MethodInfo *)0x0);
          pRVar23 = (this->fields).contentScrollRect;
          if (pRVar23 != (RectTransform *)0x0) {
            pRVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                                ((Rect *)&stack0xffffff9c,pRVar23,(MethodInfo *)in_stack_21);
            fVar22 = SubscribableVariableBase`1[System::Single]::
                     SubscribableVariableBase_1_System_Single__get_Value
                               ((SubscribableVariableBase_1_System_Single_ *)pRVar24->m_Height,
                                (MethodInfo *)0x0);
            pRVar23 = (this->fields).contentRectTransform;
            if (pRVar23 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffff9c,pRVar23,(MethodInfo *)0x0);
              fVar25 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffff78,
                                  (MethodInfo *)0x0);
              if (fVar22 < fVar25) {
                pRVar23 = (this->fields).contentRectTransform;
                func_?();
                if (pRVar23 == (RectTransform *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                          (pRVar23,(Vector2)0x0,(MethodInfo *)0x0);
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
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_SetupPreviewImage
               (SpawnRoleSelectionSkillMenu *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (XpBoostParticlePreviewer *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffd4,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,*pQVar2,(MethodInfo *)0x0);
      this_02 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        func_?();
        func_?();
        pSVar3 = (this->fields).spawnRolePreviewer;
        if (pSVar3 != (SpawnRolePreviewer *)0x0) {
          SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                    (pSVar3,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,
                     LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,(Vector3)ZEXT812(0),
                     pTVar1,(Vector3)ZEXT812(0),StringLiteral_SpawnRole,0,(GameObject *)this_01,
                     (MethodInfo *)0x0);
          pSVar3 = (this->fields).spawnRolePreviewer;
          this_00 = (this->fields).spawnRolePreviewImage;
          if (pSVar3 != (SpawnRolePreviewer *)0x0) {
            value = (Texture *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pSVar3,
                               (MethodInfo *)0x0);
            if (this_00 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

