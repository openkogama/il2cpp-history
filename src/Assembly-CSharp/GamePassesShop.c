
/* Void ActivateBar() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ActivateBar
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lockedTierIcon;
  if (this_00 != (Image *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        if ((pGVar2->fields).gameMode != 0) {
          pGVar1 = (this->fields).unlockedText;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar1,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            pGVar1 = (this->fields).unlockedText;
            if (pGVar1 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,1,(MethodInfo *)0x0);
          }
        }
        pTVar4 = (this->fields).progressHeader;
        if (pTVar4 != (Text *)0x0) {
          (*(code *)(pTVar4->klass->vtable).set_text.method)();
          pPVar5 = (ProgressBarAndroid *)(this->fields).progressBar;
          if (pPVar5 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar5,1.0,(MethodInfo *)0x0);
            pPVar5 = (ProgressBarAndroid *)(this->fields).disabledProgressBar;
            if (pPVar5 != (ProgressBarAndroid *)0x0) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar5,1.0,(MethodInfo *)0x0);
              pGVar1 = (this->fields).purchaseButtonObject;
              if (pGVar1 != (GameObject *)0x0) {
                bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar1,(MethodInfo *)0x0);
                if (bVar3 != 0) {
                  pGVar1 = (this->fields).purchaseButtonObject;
                  if (pGVar1 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,0,(MethodInfo *)0x0);
                }
                pGVar1 = (this->fields).freeTryUI;
                if (pGVar1 != (GameObject *)0x0) {
                  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar1,(MethodInfo *)0x0);
                  if (bVar3 != 0) {
                    pGVar1 = (this->fields).freeTryUI;
                    if (pGVar1 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,0,(MethodInfo *)0x0);
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
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddTierContent(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_AddTierContent
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  tierRequirment =
       (Object_1__Class **)
       CONCAT31((int3)((uint)in_stack_1 >> 8),(this->fields).gamePassTierDisplayed);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            GamePassesShop_GetSortedSpawnRoles
                      (this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  index = 0;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    for (; index < (this_00->fields)._size; index = index + 1) {
      this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                          );
      this_00 = unaff_EBX;
      if (cRam_? == '\0') {
        func_?(&
                        GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                       );
        tierRequirment = &TypeInfo__UnityEngine__Object;
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?
        ;
        func_?();
        cRam_? = '\x01';
      }
      pRVar2 = (this->fields).tierListContainer;
      pGVar3 = (this->fields).spawnRoleRewardInfoPrefab;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?
        ;
        tierRequirment = (Object_1__Class **)TypeInfo__UnityEngine__Object;
        func_?();
      }
      pGVar3 = (GamePassesSpawnRoleRewardInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pGVar3,pTVar4,0,
                          GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                         );
      if ((this_01 == (RegexCharClass_SingleRange)0x0) ||
         (spawnRolePreviewObject =
               MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                         ((MVAvatarSpawnRoleCreator *)this_01,(MethodInfo *)0x0),
         pGVar3 == (GamePassesSpawnRoleRewardInfo *)0x0)) goto code_?;
      GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                (pGVar3,index,spawnRolePreviewObject,(MVAvatarSpawnRoleCreator *)this_01,
                 (GamePassTier__Enum)tierRequirment,(MethodInfo *)0x0);
      pGVar5 = (this->fields).contentCuller;
      if (pGVar5 == (GamePassesShopContentCuller *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                       );
        cRam_? = '\x01';
      }
      pLVar6 = (List_1_System_Object_ *)(pGVar5->fields).gamePassShopContentList;
      if (pLVar6 == (List_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (pLVar6,(Object *)pGVar3,
                 MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                );
      unaff_EBX = this_00;
    }
    if (cRam_? == '\0') {
      func_?(&
                      GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pRVar2 = (this->fields).tierListContainer;
    pGVar7 = (this->fields).xpRewardInfoPrefab;
    if (pRVar2 != (RectTransform *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar7 = (GamePassesXpRewardInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pGVar7,pTVar4,0,
                          GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                         );
      if (pGVar7 != (GamePassesXpRewardInfo *)0x0) {
        GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
                  (pGVar7,gamePassTierToDisplay,(MethodInfo *)0x0);
        pGVar5 = (this->fields).contentCuller;
        if (pGVar5 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                           );
            cRam_? = '\x01';
          }
          pLVar6 = (List_1_System_Object_ *)(pGVar5->fields).gamePassShopContentList;
          if (pLVar6 != (List_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (pLVar6,(Object *)pGVar7,
                       MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Int32 CalculateTotalSpawnRoleCost(MVAvatarSpawnRoleCreator) */

int32_t Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CalculateTotalSpawnRoleCost
                  (GamePassesShop *this,MVAvatarSpawnRoleCreator *spawnRoleCreator,
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if ((spawnRoleCreator != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_00 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (spawnRoleCreator,(MethodInfo *)0x0),
     this_00 != (AttributeSettingsManager *)0x0)) {
    pKVar7 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_00,(MethodInfo *)0x0);
    if (pKVar7 == (KogamaSettingWrapperBase *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    unaff_EDI = pKVar7->klass;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?();
    }
    else {
      unaff_EDI = (KogamaSettingWrapperBase__Class *)0x0;
      spawnRoleCreator = (MVAvatarSpawnRoleCreator *)0x0;
      if (pKVar7[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa0,
                            (Dictionary_2_System_UInt32_System_Object_ *)pKVar7[1].klass,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                           );
        pDStack_9 = &DStack_6;
        uStack_10 = 0;
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
        DStack_6._version = pDVar8->_version;
        DStack_6._index = pDVar8->_index;
        DStack_6._current.key = (Object *)(pDVar8->_current).key;
        DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
        uStack_1 = 1;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                            );
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = uStack_3;
            return (int32_t)spawnRoleCreator;
          }
          unaff_EDI = (KogamaSettingWrapperBase__Class *)DStack_6._current.value;
          pIStack_12 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          if ((KogamaSettingWrapperBase__Class *)DStack_6._current.value ==
              (KogamaSettingWrapperBase__Class *)0x0) break;
          iVar13 = func_?(DStack_6._current.value,
                                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 );
          if (iVar13 == 0) goto code_?;
          pIStack_12 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          piStack_14 = (int *)func_?(unaff_EDI,
                                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                             );
          if (piStack_14 == (int *)0x0) goto code_?;
          iStack_15 = *piStack_14;
          uVar16 = 0;
          uStack_17 = 0;
          uVar18 = *(ushort *)(iStack_15 + 0xb6);
          pIStack_12 = (IAttributeSetting__Class *)(uint)uVar18;
          if (uVar18 != 0) {
            do {
              if (*(IAttributeSetting__Class **)(*(int *)(iStack_15 + 0x58) + (uint)uVar16 * 8) ==
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 ) {
                puVar19 = (undefined4 *)
                         (iStack_15 +
                         (*(int *)(*(int *)(iStack_15 + 0x58) + 4 + (uint)uVar16 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar18);
          }
          puVar19 = (undefined4 *)
                   func_?(piStack_14,
                                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                   ,0);
code_?:
          iVar13 = (*(code *)*puVar19)(piStack_14,puVar19[1]);
          spawnRoleCreator = (MVAvatarSpawnRoleCreator *)((int)&spawnRoleCreator->klass + iVar13);
        }
      }
    }
  }
  func_?();
code_?:
  uVar20 = func_?(unaff_EDI,pIStack_12);
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  iVar22 = (*pcVar21)();
  return iVar22;
}


/* Void CreateSpawnPointInfo(MVTeam) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnPointInfo
               (GamePassesShop *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SpawnPointInfo_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointInfo>_SpawnPointInfo__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierListContainer;
  pSVar1 = (this->fields).spawnPointInfoPrefab;
  if (this_00 != (RectTransform *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar1 = (SpawnPointInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pSVar1,parent,0,
                        SpawnPointInfo_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointInfo>_SpawnPointInfo__UnityEngine__Transform__bool_
                       );
    if (pSVar1 != (SpawnPointInfo *)0x0) {
      SpawnPointInfo::SpawnPointInfo_Initialize(pSVar1,MVTeam__Enum_Blue,(MethodInfo *)0x0);
      pGVar2 = (this->fields).contentCuller;
      if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (List_1_System_Object_ *)(pGVar2->fields).gamePassShopContentList;
        if (this_01 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_01,(Object *)pSVar1,
                     MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateSpawnRoleContent(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnRoleContent
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              GamePassesShop_GetSortedSpawnRoles
                        (this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  index = 0;
  if (pLStack_1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while( true ) {
      if ((pLStack_1->fields)._size <= index) {
        return;
      }
      this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLStack_1,index,
                           MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                          );
      if (cRam_? == '\0') {
        func_?(&
                        GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                       );
        pLStack_1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    &UNK_?;
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      original = (Object_1__Class *)(this->fields).spawnRoleRewardInfoPrefab;
      this_00 = (this->fields).tierListContainer;
      if (this_00 == (RectTransform *)0x0) break;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pLStack_1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    &UNK_?;
        original = TypeInfo__UnityEngine__Object;
        func_?();
      }
      this_03 = (GamePassesSpawnRoleRewardInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)original,parent,0,
                           GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                          );
      if (this_02 == (RegexCharClass_SingleRange)0x0) break;
      spawnRolePreviewObject =
           MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                     ((MVAvatarSpawnRoleCreator *)this_02,(MethodInfo *)0x0);
      if (this_03 == (GamePassesSpawnRoleRewardInfo *)0x0) break;
      GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                (this_03,index,spawnRolePreviewObject,(MVAvatarSpawnRoleCreator *)this_02,
                 gamePassTierToDisplay,(MethodInfo *)0x0);
      pGVar2 = (this->fields).contentCuller;
      if (pGVar2 == (GamePassesShopContentCuller *)0x0) break;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                       );
        cRam_? = '\x01';
      }
      this_01 = (List_1_System_Object_ *)(pGVar2->fields).gamePassShopContentList;
      if (this_01 == (List_1_System_Object_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_01,(Object *)this_03,
                 MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                );
      index = index + 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateSpawnRoleInfo(Int32, MVAvatarSpawnRoleCreator, GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnRoleInfo
               (GamePassesShop *this,int32_t spawnRoleIndex,MVAvatarSpawnRoleCreator *spawnRole,
               GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierListContainer;
  pGVar1 = (this->fields).spawnRoleRewardInfoPrefab;
  if (this_00 != (RectTransform *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar1 = (GamePassesSpawnRoleRewardInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar1,parent,0,
                        GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                       );
    if (spawnRole != (MVAvatarSpawnRoleCreator *)0x0) {
      spawnRolePreviewObject =
           MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                     (spawnRole,(MethodInfo *)0x0);
      if (pGVar1 != (GamePassesSpawnRoleRewardInfo *)0x0) {
        GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                  (pGVar1,tier,spawnRolePreviewObject,spawnRole,tier,(MethodInfo *)0x0);
        pGVar2 = (this->fields).contentCuller;
        if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (List_1_System_Object_ *)(pGVar2->fields).gamePassShopContentList;
          if (this_01 != (List_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this_01,(Object *)pGVar1,
                       MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                      );
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


/* Void CreateUnlockedAccessItemsInfo(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateUnlockedAccessItemsInfo
               (GamePassesShop *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                   );
    func_?(&
                    TierUnlockedAccessItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedAccessItemsRewardInfo>_TierUnlockedAccessItemsRewardInfo__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)GamePassesShop_SortOutNonAccessItemsInShopData(this,tierShopData,(MethodInfo *)0x0);
  if (this_02 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                      );
    if (iVar1 < 1) {
      return;
    }
    this_00 = (this->fields).tierListContainer;
    pTVar2 = (this->fields).tierUnlockedAccessItemsRewardInfoPrefab;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      tier_00 = 
      TierUnlockedAccessItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedAccessItemsRewardInfo>_TierUnlockedAccessItemsRewardInfo__UnityEngine__Transform__bool_
      ;
      pTVar2 = (TierUnlockedAccessItemsRewardInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pTVar2,parent,0,
                          TierUnlockedAccessItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedAccessItemsRewardInfo>_TierUnlockedAccessItemsRewardInfo__UnityEngine__Transform__bool_
                         );
      if (pTVar2 != (TierUnlockedAccessItemsRewardInfo *)0x0) {
        TierUnlockedAccessItemsRewardInfo::TierUnlockedAccessItemsRewardInfo_Initialize
                  (pTVar2,(GamePassTier__Enum)tier_00,
                   (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                   this_02,(MethodInfo *)0x0);
        pGVar3 = (this->fields).contentCuller;
        if (pGVar3 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (List_1_System_Object_ *)(pGVar3->fields).gamePassShopContentList;
          if (this_01 != (List_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this_01,(Object *)pTVar2,
                       MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                      );
            return;
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


/* Void CreateUnlockedItemsInfo(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateUnlockedItemsInfo
               (GamePassesShop *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                   );
    func_?(&
                    TierUnlockedItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemsRewardInfo>_TierUnlockedItemsRewardInfo__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)GamePassesShop_SortOutNonLootItemsInShopData(this,tierShopData,(MethodInfo *)0x0);
  if (this_02 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                      );
    if (iVar1 < 1) {
      return;
    }
    this_00 = (this->fields).tierListContainer;
    pTVar2 = (this->fields).tierUnlockedItemsRewardInfoPrefab;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      tier_00 = 
      TierUnlockedItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemsRewardInfo>_TierUnlockedItemsRewardInfo__UnityEngine__Transform__bool_
      ;
      pTVar2 = (TierUnlockedItemsRewardInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pTVar2,parent,0,
                          TierUnlockedItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemsRewardInfo>_TierUnlockedItemsRewardInfo__UnityEngine__Transform__bool_
                         );
      if (pTVar2 != (TierUnlockedItemsRewardInfo *)0x0) {
        TierUnlockedItemsRewardInfo::TierUnlockedItemsRewardInfo_Initialize
                  (pTVar2,(GamePassTier__Enum)tier_00,
                   (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                   this_02,(MethodInfo *)0x0);
        pGVar3 = (this->fields).contentCuller;
        if (pGVar3 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (List_1_System_Object_ *)(pGVar3->fields).gamePassShopContentList;
          if (this_01 != (List_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this_01,(Object *)pTVar2,
                       MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                      );
            return;
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


/* Void CreateXPRewardInfo(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateXPRewardInfo
               (GamePassesShop *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierListContainer;
  pGVar1 = (this->fields).xpRewardInfoPrefab;
  if (this_00 != (RectTransform *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar1 = (GamePassesXpRewardInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar1,parent,0,
                        GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                       );
    if (pGVar1 != (GamePassesXpRewardInfo *)0x0) {
      GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
                (pGVar1,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
      pGVar2 = (this->fields).contentCuller;
      if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (List_1_System_Object_ *)(pGVar2->fields).gamePassShopContentList;
        if (this_01 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_01,(Object *)pGVar1,
                     MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DeactivateBar() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_DeactivateBar
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Progress_Locked);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
       (PlayerTierStateCalculator *)0x0) ||
     ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
      gamePassRewardsActivated == 0)) {
    pTVar1 = (this->fields).progressHeader;
    if (pTVar1 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral_Progress_Locked,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pPVar2 = (this->fields).progressBar;
    if (pPVar2 == (ProgressBar *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar2,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pPVar2 = (this->fields).progressBar;
      if (pPVar2 == (ProgressBar *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pPVar2,(MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
    }
    pPVar2 = (this->fields).disabledProgressBar;
    if (pPVar2 == (ProgressBar *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar2,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pPVar2 = (this->fields).disabledProgressBar;
      if (pPVar2 == (ProgressBar *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pPVar2,(MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar5 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar5->fields).gameMode != 0) {
      pGVar3 = (this->fields).unlockedText;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pGVar3 = (this->fields).unlockedText;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
    }
  }
  this_00 = (this->fields).lockedTierIcon;
  if (this_00 != (Image *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DelayedInitialize() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_DelayedInitialize
               (GamePassesShop *this,MethodInfo *method)

{
  this_04 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointAmountManager);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).crystalAmount;
  if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  IStack_2.m_value =
       GamePointAmountManager::GamePointAmountManager_GetTotalGamePointAmount((MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
  if (pTVar1 == (Text *)0x0) goto code_?;
  (*(code *)(pTVar1->klass->vtable).set_text.method)
            (pTVar1,pSVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
  GamePassesShop_UpdateProgressBar
            (this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  GamePassesShop_AddTierContent(this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  this_00 = (this->fields).contentCuller;
  if (this_00 == (GamePassesShopContentCuller *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar4 = (this_00->fields).gamePassShopContentList;
  if (pLVar4 == (List_1_IGamePassShopContent_ *)0x0) goto code_?;
  GamePassesShopContentCuller::GamePassesShopContentCuller_HideElements
            (this_00,0,(pLVar4->fields)._size,0,(MethodInfo *)0x0);
  GamePassesShopContentCuller::GamePassesShopContentCuller_ShowElements(this_00,0,(MethodInfo *)0x0)
  ;
  pGVar5 = (this->fields).purchaseButton;
  if (pGVar5 == (GamePassesPurchaseButton *)0x0) goto code_?;
  this = (GamePassesShop *)CONCAT31(this._1_3_,(this->fields).gamePassTierDisplayed);
  bVar6 = GamePassesPurchaseButton::GamePassesPurchaseButton_Initialize
                    (pGVar5,(GamePassTier__Enum)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    IStack_2.m_value = (int32_t)&TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar7->fields).gameMode == 0) {
    pGVar8 = (this_04->fields).purchaseButtonObject;
    if ((pGVar8 == (GameObject *)0x0) ||
       (pGVar8 = (GameObject *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)pGVar8,(MethodInfo *)0x0),
       pGVar8 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    pGVar8 = (this_04->fields).freeTryUI;
    if ((pGVar8 == (GameObject *)0x0) ||
       (pGVar8 = (GameObject *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)pGVar8,(MethodInfo *)0x0),
       pGVar8 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    GamePassesShop_UpdateTierCostTets(this_04,(MethodInfo *)0x0);
  }
  GamePassesShop_UpdateFreeTryUI(this_04,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar7->fields).gameMode == 0) {
    pGVar8 = (this_04->fields).editModeInformationObject;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,1,(MethodInfo *)0x0);
    pGVar8 = (this_04->fields).gameTierProgressObject;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
  }
  else {
    bVar9 = (this_04->fields).gamePassTierDisplayed;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__TierUnlockedPopupController);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar7 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar7->fields).gameMode != 0) {
      bVar10 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar11 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar11 == (PlayerPlanetData *)0x0) goto code_?;
      if ((bVar10 < (pPVar11->fields).gamePassTier) &&
         (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar9)) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar11 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar11 == (PlayerPlanetData *)0x0) goto code_?;
        if (bVar9 <= (pPVar11->fields).gamePassTier) {
          GamePassesShop_ShowTierUnlockedPopup(this_04,0,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    this_01 = (this_04->fields).embeddedPlayerConfig;
    if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar12 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        ((EmbeddedSiteConfigData *)&stack0xffffffd0,this_01,(MethodInfo *)0x0);
    uVar13._0_1_ = pEVar12->showTouristPromotion;
    uVar13._1_1_ = pEVar12->allowsOpenInNewTab;
    uVar13._2_1_ = pEVar12->allowsRedirectToWebpage;
    uVar13._3_1_ = pEVar12->allowsModals;
    if ((bVar6 == 0) || (pEVar12->hideGoldShop != 0)) {
code_?:
      uVar13 = 0;
    }
    else {
      pGVar5 = (this_04->fields).purchaseButton;
      if ((pGVar5 == (GamePassesPurchaseButton *)0x0) ||
         (pGVar8 = (pGVar5->fields).disabledPurchaseButton, pGVar8 == (GameObject *)0x0))
      goto code_?;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar8,(MethodInfo *)0x0);
      if (bVar6 != 0) goto code_?;
      if (((char)(uVar13 >> 0x18) == '\0') && ((char)(uVar13 >> 8) == '\0')) {
        uVar13 = uVar13 >> 0x10 & 0xff;
      }
      else {
        uVar13 = 1;
      }
    }
    pGVar8 = (this_04->fields).purchaseButtonObject;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,uVar13 != 0,(MethodInfo *)0x0);
    bVar6 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if ((uVar13 != 0 & bVar6) != 0) {
      GamePassesShop_ShowTouristInformationPopup(this_04,(MethodInfo *)0x0);
      return;
    }
    bVar6 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    this_02 = (this_04->fields).buttonIcon;
    (this_04->fields).isSubscribed = bVar6;
    if (bVar6 == 0) {
      pTVar14 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
      if (pTVar14 == (TogglePreviewState *)0x0) goto code_?;
      value = (pTVar14->fields).freeTry == 0;
    }
    else {
      value = true;
    }
    if (this_02 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_02,value,(MethodInfo *)0x0);
  }
  this_03 = (this_04->fields).statusFooterObject;
  if ((this_03 != (GamePassesShopStatusFooter *)0x0) &&
     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_03,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Exit
               (GamePassesShop *this,MethodInfo *method)

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
                    MethodInfo__GamePassesShop____c___Exit_b__87_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePassesShop____c);
  }
  callbackFunction = TypeInfo__GamePassesShop____c->static_fields->__9__87_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesShop____c);
    }
    object = TypeInfo__GamePassesShop____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GamePassesShop____c___Exit_b__87_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesShop____c->static_fields->__9__87_0 = callbackFunction;
    func_?(&TypeInfo__GamePassesShop____c->static_fields->__9__87_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* List`1[MVAvatarSpawnRoleCreator] GetSortedSpawnRoles(GamePassTier) */

List_1_MVAvatarSpawnRoleCreator_ *
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_GetSortedSpawnRoles
          (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Add_MVAvatarSpawnRoleCreator_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Insert_int__MVAvatarSpawnRoleCreator_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>);
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0)
     , this_01 != (MVWorldObjectClientManager *)0x0)) {
    RVar1 = (RegexCharClass_SingleRange)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                      (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
    this_02 = (RegexCharClass_SingleRange)
              func_?(TypeInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>
                             );
    RVar2 = this_02;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__List__);
    this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              func_?(TypeInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>
                             );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__List__);
    index.First = 0;
    index.Last = 0;
    in_stack_3 = unaff_ESI;
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      for (; (int)index < (int)*(char **)((int)RVar1 + 0xc);
          index = (RegexCharClass_SingleRange)((int)index + 1)) {
        in_stack_3 = index;
        this_07 = (RegexCharClass_SingleRange)
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
        ;
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           RVar1,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        RVar1 = this_07;
        if (((RVar4 != (RegexCharClass_SingleRange)0x0) &&
            (in_stack_3 = *(RegexCharClass_SingleRange *)RVar4,
            (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <=
            *(byte *)((int)in_stack_3 + 0xb8))) &&
           (*(MVAvatarSpawnRoleCreator__Class **)
             (*(int *)((int)in_stack_3 + 100) + -4 +
             (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) ==
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          RVar1 = (RegexCharClass_SingleRange)&UNK_?;
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             this_07,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                            );
          in_stack_3 = RVar2;
          if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
          this = (GamePassesShop *)&UNK_?;
          iVar5 = func_?();
          if ((iVar5 == 0) ||
             (this_04 = (MVAvatarSpawnRoleCreator *)
                        func_?(in_stack_3,TypeInfo__MVAvatarSpawnRoleCreator),
             this_04 == (MVAvatarSpawnRoleCreator *)0x0)) goto code_?;
          GVar6 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                            (this_04,(MethodInfo *)0x0);
          gamePassTierToDisplay._0_1_ = (undefined1)RVar2.First;
          RVar2 = this_07;
          if ((char)GVar6 == (undefined1)gamePassTierToDisplay) {
            in_stack_3 =
                 mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            RVar1,(int32_t)index,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                           );
            if (this_02 == (RegexCharClass_SingleRange)0x0) goto code_?;
            item = (Object *)0x0;
            RVar2 = this_07;
            if (in_stack_3 != (RegexCharClass_SingleRange)0x0) {
              RVar1 = (RegexCharClass_SingleRange)&UNK_?;
              RVar2 = in_stack_3;
              item = (Object *)func_?(in_stack_3,TypeInfo__MVAvatarSpawnRoleCreator)
              ;
              if (item == (Object *)0x0) goto code_?;
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_02,item,
                       MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Add_MVAvatarSpawnRoleCreator_
                      );
          }
        }
        unaff_ESI = in_stack_3;
      }
      this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
      in_stack_3 = unaff_ESI;
      if (RVar2 != (RegexCharClass_SingleRange)0x0) {
code_?:
        do {
          if ((int)*(char **)((int)RVar2 + 0xc) <= (int)this_05) {
            return (List_1_MVAvatarSpawnRoleCreator_ *)this_03;
          }
          iVar5 = 0;
          in_stack_3 = unaff_ESI;
          if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          for (; iVar5 < (this_03->fields)._size; iVar5 = iVar5 + 1) {
            RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               RVar2,(int32_t)this_05,
                               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                              );
            in_stack_3 = unaff_ESI;
            if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
            unaff_ESI = (RegexCharClass_SingleRange)
                        MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                                  ((MVAvatarSpawnRoleCreator *)RVar1,(MethodInfo *)0x0);
            RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_03,iVar5,
                               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                              );
            in_stack_3 = unaff_ESI;
            if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
            MVar7 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                              ((MVAvatarSpawnRoleCreator *)RVar1,(MethodInfo *)0x0);
            if ((int)unaff_ESI < (int)MVar7) {
              RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)RVar2,(int32_t)this_05,
                                 MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                                );
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Insert
                        ((List_1_System_Object_ *)this_03,iVar5,(Object *)RVar1,
                         MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Insert_int__MVAvatarSpawnRoleCreator_
                        );
              this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        ((int)&this_05->klass + 1);
              goto code_?;
            }
            RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               RVar2,(int32_t)this_05,
                               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                              );
            in_stack_3 = unaff_ESI;
            if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
            in_stack_3 =
                 (RegexCharClass_SingleRange)
                 MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                           ((MVAvatarSpawnRoleCreator *)RVar1,(MethodInfo *)0x0);
            unaff_ESI = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_03,iVar5,
                                   MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                                  );
            if (unaff_ESI == (RegexCharClass_SingleRange)0x0) goto code_?;
            this_06 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      &UNK_?;
            RVar1 = (RegexCharClass_SingleRange)
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                              ((MVAvatarSpawnRoleCreator *)unaff_ESI,(MethodInfo *)0x0);
            if (unaff_ESI == RVar1) {
              RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_05,(int32_t)this_05,
                                 MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                                );
              iVar8 = GamePassesShop_CalculateTotalSpawnRoleCost
                                (this,(MVAvatarSpawnRoleCreator *)RVar1,(MethodInfo *)0x0);
              RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_06,iVar5,
                                 MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                                );
              unaff_ESI = (RegexCharClass_SingleRange)&UNK_?;
              this_03 = this_06;
              iVar9 = GamePassesShop_CalculateTotalSpawnRoleCost
                                (this,(MVAvatarSpawnRoleCreator *)RVar2,(MethodInfo *)0x0);
              if (iVar9 < iVar8) {
                RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)RVar2,(int32_t)this_05,
                                   MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                                  );
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Insert
                          ((List_1_System_Object_ *)this_03,iVar5,(Object *)RVar1,
                           MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Insert_int__MVAvatarSpawnRoleCreator_
                          );
                this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          ((int)&this_05->klass + 1);
                goto code_?;
              }
            }
          }
          RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             RVar2,(int32_t)this_05,
                             MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                            );
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_03,(Object *)RVar1,
                     MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Add_MVAvatarSpawnRoleCreator_
                    );
          this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    ((int)&this_05->klass + 1);
        } while( true );
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(in_stack_3,TypeInfo__MVAvatarSpawnRoleCreator);
  pcVar10 = (code *)swi(3);
  pLVar11 = (List_1_MVAvatarSpawnRoleCreator_ *)(*pcVar10)();
  return pLVar11;
}


/* TierLockState GetTierLockState(GamePassTier) */

TierLockState__Enum
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_GetTierLockState
          (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_2 = CONCAT31((int3)((uint)in_ECX >> 8),(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,GStack_2,(MethodInfo *)0x0);
      if (this_01 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                            (ByteEnum__Enum)
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          return (TierLockState__Enum)pOVar3[1].klass;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  TVar5 = (*pcVar4)();
  return TVar5;
}


/* Int32 GetTotalGamePointRequirementForTier(GamePassTier) */

int32_t Assembly-CSharp.dll::GamePassesShop::GamePassesShop_GetTotalGamePointRequirementForTier
                  (GamePassesShop *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_3 = CONCAT31((int3)((uint)in_ECX >> 8),(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,iVar2,GStack_3,(MethodInfo *)0x0);
      key = tier & 0xff;
      iVar4 = 0;
      if (key != 0) {
        if (this_01 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
        do {
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar5 == (Object *)0x0) goto code_?;
          iVar4 = (int)&((pOVar5[3].klass)->_0).image + iVar4;
          key = key - 1;
        } while (0 < (int)key);
      }
      return iVar4;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  iVar2 = (*pcVar6)();
  return iVar2;
}


/* Void HandleEditModeUI() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_HandleEditModeUI
               (GamePassesShop *this,MethodInfo *method)

{
  pGVar1 = (this->fields).editModeInformationObject;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gameTierProgressObject;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).statusFooterObject;
      if (this_00 != (GamePassesShopStatusFooter *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandlePurchase() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_HandlePurchase
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      BStack_2 = CONCAT31(BStack_2._1_3_,(pPVar1->fields).gamePassTier);
      method_00 = (MethodInfo *)&UNK_?;
      this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,BStack_2,(MethodInfo *)0x0);
      if (this_02 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        BStack_2 = CONCAT31(BStack_2._1_3_,(this->fields).gamePassTierDisplayed);
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,BStack_2,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          pOVar4 = pOVar3[2].klass;
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((this_03 != (MVNetworkGame *)0x0) &&
              (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
              pMVar5 != (MVLocalPlayer *)0x0)) &&
             (pUVar6 = (pMVar5->fields)._._UserProfileData_k__BackingField,
             pUVar6 != (UserProfileData *)0x0)) {
            if ((pUVar6->fields).Gold < (int)pOVar4) {
              bVar7 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                ((MethodInfo *)0x0);
              if (bVar7 == 0) {
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  func_?();
                  func_?(&
                                  TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                                 );
                  func_?(&TypeInfo__UnityEngine__Object);
                  func_?(&
                                  MethodInfo__GamePassesShop____c__DisplayClass76_0___ShowPurchaseGoldErrorPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                 );
                  func_?(&TypeInfo__GamePassesShop____c__DisplayClass76_0);
                  cRam_? = '\x01';
                }
                pOVar3 = (Object *)func_?(TypeInfo__GamePassesShop____c__DisplayClass76_0);
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          (pOVar3,ExceptionArgument__Enum_obj,method_00);
                original = (this->fields).tierPurchaseGoldErrorPopupPrefab;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                pOVar4 = (Object__Class *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                   ((Object *)original,
                                    TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                                   );
                if (pOVar3 != (Object *)0x0) {
                  pOVar3[1].klass = pOVar4;
                  func_?(pOVar3 + 1,pOVar4);
                  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            func_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)pEVar9,pOVar3,
                             MethodInfo__GamePassesShop____c__DisplayClass76_0___ShowPurchaseGoldErrorPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar8,(BaseEventData *)0x0,pEVar9,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  if (pOVar3[1].klass != (Object__Class *)0x0) {
                    TierPurchaseNotEnoughGoldErrorPopup::
                    TierPurchaseNotEnoughGoldErrorPopup_Initialize
                              ((TierPurchaseNotEnoughGoldErrorPopup *)pOVar3[1].klass,
                               (uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                this_01 = (this->fields).embeddedPlayerConfig;
                if (this_01 != (EmbeddedPlayerConfig *)0x0) {
                  pEVar10 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                      ((EmbeddedSiteConfigData *)&stack0xffffffe0,this_01,
                                       (MethodInfo *)0x0);
                  uVar11 = pEVar10->hideSignUp;
                  if (uVar11 != '\0') {
                    return;
                  }
                  GamePassesShop_ShowTouristInformationPopup(this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                func_?(&MethodInfo__GamePassesShop__OnSuccessfulPurchase__);
                func_?(&
                                TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                               );
                func_?(&TypeInfo__UnityEngine__Object);
                func_?(&
                                MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               );
                func_?(&TypeInfo__GamePassesShop____c__DisplayClass75_0);
                func_?(&TypeInfo__UnityEngine__Events__UnityAction);
                cRam_? = '\x01';
              }
              pOVar3 = (Object *)func_?(TypeInfo__GamePassesShop____c__DisplayClass75_0);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        (pOVar3,ExceptionArgument__Enum_obj,method_00);
              original_00 = (this->fields).tierPurchasePopupPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pOVar12 = (Object__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original_00,
                                   TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                                  );
              if (pOVar3 != (Object *)0x0) {
                pOVar3[1].klass = pOVar12;
                func_?(pOVar3 + 1,pOVar12);
                pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          func_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)pEVar9,pOVar3,
                           MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar8,(BaseEventData *)0x0,pEVar9,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pOVar12 = pOVar3[1].klass;
                BStack_2._1_3_ = (undefined3)((uint)pEVar9 >> 8);
                BStack_2 = CONCAT31(BStack_2._1_3_,(this->fields).gamePassTierDisplayed);
                this_04 = (NavMesh_OnNavMeshPreUpdate *)
                          func_?(TypeInfo__UnityEngine__Events__UnityAction);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_04,(Object *)this,MethodInfo__GamePassesShop__OnSuccessfulPurchase__
                           ,(MethodInfo *)0x0);
                if (pOVar12 != (Object__Class *)0x0) {
                  TierPurchasePopup::TierPurchasePopup_Initialize
                            ((TierPurchasePopup *)pOVar12,BStack_2,(int32_t)pOVar4,
                             (UnityAction *)this_04,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void HandlePurchaseButtonVisibility(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_HandlePurchaseButtonVisibility
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      return;
    }
    pGVar2 = (this->fields).purchaseButtonObject;
    if ((pGVar2 != (GameObject *)0x0) &&
       (pGVar2 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar2,(MethodInfo *)0x0),
       pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields).freeTryUI;
      if ((pGVar2 != (GameObject *)0x0) &&
         (pGVar2 = (GameObject *)
                   UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_AsRef_1((Void *)pGVar2,(MethodInfo *)0x0),
         pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        GamePassesShop_UpdateTierCostTets(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Initialize
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Game_Tier_);
    cRam_? = '\x01';
  }
  IStack_1.m_value = gamePassTierToDisplay & 0xff;
  pTVar2 = (this->fields).headerText;
  (this->fields).delayedInit = 1;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Game_Tier_,pSVar3,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    IStack_1.m_value = (int32_t)pSVar3;
    (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
    (this->fields).gamePassTierDisplayed = (undefined1)gamePassTierToDisplay;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsProgressBarEnabled() */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsProgressBarEnabled
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
      (PlayerTierStateCalculator *)0x0) {
    return 0;
  }
  return (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
         gamePassRewardsActivated;
}


/* Boolean IsTierItemALootItem(MVWorldObjectClient) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsTierItemALootItem
               (GamePassesShop *this,MVWorldObjectClient *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPickupItemBase);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    cRam_? = '\x01';
  }
  if (item == (MVWorldObjectClient *)0x0) {
    return 0;
  }
  pMVar1 = item->klass;
  if (((TypeInfo__MVPickupItemBase->_1).naturalAligment <= (pMVar1->_1).naturalAligment) &&
     ((MVPickupItemBase__Class *)
      (pMVar1->_1).typeHierarchy[(TypeInfo__MVPickupItemBase->_1).naturalAligment - 1] ==
      TypeInfo__MVPickupItemBase)) {
    return 1;
  }
  if (((TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment <= (pMVar1->_1).naturalAligment)
     && ((MVWorldObjectSpawnerVehicle__Class *)
         (pMVar1->_1).typeHierarchy[(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment - 1]
         == TypeInfo__MVWorldObjectSpawnerVehicle)) {
    return item != (MVWorldObjectClient *)0x0;
  }
  return 0;
}


/* Boolean IsTierItemAnAccessItem(MVWorldObjectDocumentationType, MVWorldObjectClient) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsTierItemAnAccessItem
               (GamePassesShop *this,MVWorldObjectDocumentationType__Enum worldObjectType,
               MVWorldObjectClient *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVTeleporter);
    cRam_? = '\x01';
  }
  if ((worldObjectType == MVWorldObjectDocumentationType__Enum_Lever) ||
     (worldObjectType == MVWorldObjectDocumentationType__Enum_PressurePlate)) {
    return 1;
  }
  if (item == (MVWorldObjectClient *)0x0) {
    return 0;
  }
  if (((TypeInfo__MVTeleporter->_1).naturalAligment <= (item->klass->_1).naturalAligment) &&
     ((MVTeleporter__Class *)
      (item->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).naturalAligment - 1] ==
      TypeInfo__MVTeleporter)) {
    return item != (MVWorldObjectClient *)0x0;
  }
  return 0;
}


/* Void OnButtonPress() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnButtonPress
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      BStack_2._1_3_ = (undefined3)((uint)in_ECX >> 8);
      BStack_2 = CONCAT31(BStack_2._1_3_,(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,BStack_2,(MethodInfo *)0x0);
      if (this_01 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        BStack_2 = CONCAT31(BStack_2._1_3_,(this->fields).gamePassTierDisplayed);
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BStack_2,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          pOVar4 = pOVar3[1].klass;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
              (IEditModeUI *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVGameControllerBase);
              cRam_? = '\x01';
            }
            pIVar5 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
            if (pIVar5 == (IEditModeUI *)0x0) goto code_?;
            cVar6 = func_?(1,TypeInfo__IEditModeUI,pIVar5);
            if (cVar6 != '\0') {
              GamePassesShop_TestTier(this,(MethodInfo *)0x0);
              return;
            }
          }
          if (pOVar4 != (Object__Class *)0x1) {
            return;
          }
          GamePassesShop_HandlePurchase(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnClickFreeTryAd() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnClickFreeTryAd
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__GamePassesShop____c___ShowAd_b__83_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c);
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__GamePassesShop____c->static_fields->__9__83_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__GamePassesShop____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GamePassesShop____c___ShowAd_b__83_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesShop____c->static_fields->__9__83_0 = callbackFunction;
        func_?(&TypeInfo__GamePassesShop____c->static_fields->__9__83_0,callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar3 != (IAdManager *)0x0) {
          puStack4 = (undefined *)0x6;
          func_?(6);
          return;
        }
      }
      else {
        GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
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


/* Void OnClickFreeTrySubcribed() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnClickFreeTrySubcribed
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__GamePassesShop____c___PreviewTier_b__85_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GamePassesShop____c___PreviewTier_b__85_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c);
    cRam_? = '\x01';
  }
  this_00 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_00 == (TogglePreviewState *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesShop____c);
      }
      pEVar3 = TypeInfo__GamePassesShop____c->static_fields->__9__85_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GamePassesShop____c);
        }
        pGVar4 = TypeInfo__GamePassesShop____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pGVar4,
                   MethodInfo__GamePassesShop____c___PreviewTier_b__85_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesShop____c->static_fields->__9__85_1 = pEVar3;
        func_?(&TypeInfo__GamePassesShop____c->static_fields->__9__85_1,pEVar3);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_01,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar6 = pGVar2;
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__GamePassesShop____c->static_fields->__9__85_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pGVar2 = pGVar6;
        if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pGVar2 = pGVar6;
        }
        pGVar4 = TypeInfo__GamePassesShop____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pGVar4,
                   MethodInfo__GamePassesShop____c___PreviewTier_b__85_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesShop____c->static_fields->__9__85_0 = pEVar3;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).isWaitingForFreeTryTier = 1;
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnDestroy
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesShop__UpdateTierCostTets__);
    func_?(&MethodInfo__GamePassesShop__UpdateUI__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GamePassesShop__UpdateUI__,(MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    pAVar2 = (Action *)0x0;
code_?:
    pAStack3 = (Action__Class *)pAVar2;
    func_?();
    return;
  }
  pAVar2 = (Action *)0x0;
  if (pAVar1->klass == TypeInfo__System__Action) {
    pAVar2 = pAVar1;
  }
  if (pAVar2 == (Action *)0x0) {
    pAStack3 = TypeInfo__System__Action;
    func_?();
    pAStack3 = extraout_EDX;
  }
  else {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar2 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnPlayerPlanetDataUpdated
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__GamePassesShop____c___OnPlayerPlanetDataUpdated_b__86_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesShop____c);
    }
    callbackFunction = TypeInfo__GamePassesShop____c->static_fields->__9__86_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesShop____c);
      }
      object = TypeInfo__GamePassesShop____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__GamePassesShop____c___OnPlayerPlanetDataUpdated_b__86_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__86_0 = callbackFunction;
      func_?(&TypeInfo__GamePassesShop____c->static_fields->__9__86_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) {
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    if ((pPVar1->fields).previewGamePassTier < (this->fields).gamePassTierDisplayed) {
      return;
    }
    if ((this->fields).haveShownFreeTryUnlock != 0) {
      return;
    }
    pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAStack2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAStack2 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
      pAVar4 = (Action *)0x0;
code_?:
      pAStack2 =
           (Action *)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pAStack3 = (Action__Class *)pAVar4;
      func_?();
      GamePassesShop_ShowTierUnlockedPopup(this,0,1,(MethodInfo *)0x0);
      (this->fields).haveShownFreeTryUnlock = 1;
      return;
    }
    pAVar4 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar4 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar4 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar4 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar4 != (Action *)0x0) goto code_?;
  }
  pAStack3 = (Action__Class *)func_?();
  pAStack2 = extraout_ECX_00;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSuccessfulPurchase() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnSuccessfulPurchase
               (GamePassesShop *this,MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  GamePassesShop_ShowTierUnlockedPopup(this,1,0,(MethodInfo *)0x0);
  pGVar2 = (this->fields).purchaseButtonObject;
  if (pGVar2 != (GameObject *)0x0) {
    pGVar2 = (GameObject *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      this_00 = (this->fields).freeTryUI;
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        pPVar3 = (ProgressBarAndroid *)(this->fields).progressBar;
        if (pPVar3 != (ProgressBarAndroid *)0x0) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar3,1.0,(MethodInfo *)0x0);
          pPVar3 = (ProgressBarAndroid *)(this->fields).disabledProgressBar;
          if (pPVar3 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar3,1.0,(MethodInfo *)0x0);
            GamePassesShop_ActivateBar(this,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if ((pPVar4 != (PlayerPlanetData *)0x0) &&
               (pPVar5 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
               pPVar5 != (PlayerTierStateCalculator *)0x0)) {
              this = (GamePassesShop *)(uint)(pPVar4->fields).gamePassTier;
              pDVar6 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                       ::PlayerTierStateCalculator_GetTierPricingState
                                 (pPVar5,0,(GamePassTier__Enum)this,(MethodInfo *)0x0);
              if (pDVar6 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                             *)0x0) {
                this = (GamePassesShop *)(uint)(pGVar1->fields).gamePassTierDisplayed;
                pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                                     (ByteEnum__Enum)this,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    );
                if (pOVar7 != (Object *)0x0) {
                  str0 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                  str2 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                  mscorlib.dll::System::String::String_Concat_4
                            (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
                  pTVar8 = (pGVar1->fields).progressText;
                  if (pTVar8 != (Text *)0x0) {
                    (*(code *)(pTVar8->klass->vtable).set_text.method)();
                    bVar9 = (pGVar1->fields).gamePassTierDisplayed;
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                    if (pPVar4 != (PlayerPlanetData *)0x0) {
                      playerGamePoints = (pPVar4->fields).progressionGamePoints;
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                      if ((pPVar4 != (PlayerPlanetData *)0x0) &&
                         (pPVar5 = TypeInfo__GamePassesManager->static_fields->
                                   playerTierStateCalculator,
                         pPVar5 != (PlayerTierStateCalculator *)0x0)) {
                        pDVar6 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                 PlayerTierStateCalculator::
                                 PlayerTierStateCalculator_GetTierPricingState
                                           (pPVar5,playerGamePoints,
                                            CONCAT31((int3)((uint)pGVar2 >> 8),
                                                     (pPVar4->fields).gamePassTier),
                                            (MethodInfo *)0x0);
                        gamePointAmountShown = 0;
                        key = (ByteEnum__Enum)bVar9;
                        if (bVar9 != 0) {
                          if (pDVar6 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                                         *)0x0) goto code_?;
                          do {
                            pOVar7 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::ByteEnum,System::Object]::
                                      Dictionary_2_System_ByteEnum_System_Object__get_Item
                                                ((Dictionary_2_System_ByteEnum_System_Object_ *)
                                                 pDVar6,key,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                                );
                            if (pOVar7 == (Object *)0x0) goto code_?;
                            gamePointAmountShown =
                                 (int)&((pOVar7[3].klass)->_0).image + gamePointAmountShown;
                            key = key - 1;
                          } while (0 < (int)key);
                        }
                        GamePointGainEffectManager::
                        GamePointGainEffectManager_HaveShownGamePointGainEffect
                                  (gamePointAmountShown,(MethodInfo *)0x0);
                        return;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnTestTierPress() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnTestTierPress
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,(pPVar1->fields).progressionGamePoints,CONCAT31(uStack_3,uVar2),
                           (MethodInfo *)0x0);
      ppMVar4 = (Math__Class **)0x0;
      iVar5 = 0;
      key = 1;
      if ((this->fields).gamePassTierDisplayed != 0) {
        do {
          if (key == (this->fields).gamePassTierDisplayed) {
            if (this_01 ==
                (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)0x0) goto code_?;
          }
          else {
            if (this_01 ==
                (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)0x0) goto code_?;
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar6 == (Object *)0x0) goto code_?;
            iVar5 = (int)&((pOVar6[3].klass)->_0).image + iVar5;
          }
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar6 == (Object *)0x0) goto code_?;
          key = key + 1;
          ppMVar4 = (Math__Class **)((int)ppMVar4 + (int)pOVar6[3].klass);
        } while ((int)key <= (int)(uint)(this->fields).gamePassTierDisplayed);
      }
      if (uVar2 == (this->fields).gamePassTierDisplayed) {
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar7 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                  (pMVar7,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
        (this->fields).newGamePointValue = iVar5;
      }
      else {
        (this->fields).newGamePointValue = (int32_t)ppMVar4;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar7 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                  (pMVar7,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
      }
      (this->fields).shouldLerp = 1;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pPVar9 = (this->fields).progressBar;
      (this->fields).lerpStartTime = fVar8;
      if (pPVar9 != (ProgressBar *)0x0) {
        fVar8 = (pPVar9->fields).progress;
        if (cRam_? == '\0') {
          ppMVar4 = &TypeInfo__System__Math;
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        func_?((double)((float)((int)ppMVar4 - iVar5) * fVar8 + (float)iVar5));
        iVar10 = func_?();
        (this->fields).oldGamePointValue = iVar10;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_PreviewTier
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__GamePassesShop____c___PreviewTier_b__85_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GamePassesShop____c___PreviewTier_b__85_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c);
    cRam_? = '\x01';
  }
  this_00 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_00 == (TogglePreviewState *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesShop____c);
      }
      pEVar3 = TypeInfo__GamePassesShop____c->static_fields->__9__85_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GamePassesShop____c);
        }
        pGVar4 = TypeInfo__GamePassesShop____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pGVar4,
                   MethodInfo__GamePassesShop____c___PreviewTier_b__85_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesShop____c->static_fields->__9__85_1 = pEVar3;
        func_?(&TypeInfo__GamePassesShop____c->static_fields->__9__85_1,pEVar3);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_01,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar6 = pGVar2;
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__GamePassesShop____c->static_fields->__9__85_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pGVar2 = pGVar6;
        if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pGVar2 = pGVar6;
        }
        pGVar4 = TypeInfo__GamePassesShop____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pGVar4,
                   MethodInfo__GamePassesShop____c___PreviewTier_b__85_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesShop____c->static_fields->__9__85_0 = pEVar3;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).isWaitingForFreeTryTier = 1;
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::GamePassesShop::
        GamePassesShop_ReduceGamePointsWithPreviousTierRequirements
                  (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,int32_t gamePoints,
                  Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *gameTierShopStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    cRam_? = '\x01';
  }
  key = (gamePassTierToDisplay & 0xff) - 1;
  if (0 < (int)key) {
    if (gameTierShopStatus ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    do {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      gamePoints = gamePoints - (int)pOVar3[3].klass;
      key = key - 1;
    } while (0 < (int)key);
  }
  return gamePoints;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_RewardedAdCallback
               (GamePassesShop *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesShop____c___RewardedAdCallback_b__84_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GamePassesShop____c___RewardedAdCallback_b__84_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  RVar1 = RewardedAdResult__Enum_RewardUnlocked;
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    RVar1 = result;
  }
  switch(RVar1) {
  case RewardedAdResult__Enum_ErrorClient:
  case RewardedAdResult__Enum_ErrorInternal:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesShop____c);
    }
    callbackFunction = TypeInfo__GamePassesShop____c->static_fields->__9__84_1;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesShop____c);
      }
      pGVar2 = TypeInfo__GamePassesShop____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pGVar2,
                 MethodInfo__GamePassesShop____c___RewardedAdCallback_b__84_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__84_1 = callbackFunction;
      ppEVar3 = &TypeInfo__GamePassesShop____c->static_fields->__9__84_1;
code_?:
      func_?(ppEVar3,callbackFunction);
    }
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  case RewardedAdResult__Enum_RewardUnlocked:
    GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesShop____c);
    }
    callbackFunction = TypeInfo__GamePassesShop____c->static_fields->__9__84_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePassesShop____c);
      }
      pGVar2 = TypeInfo__GamePassesShop____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pGVar2,
                 MethodInfo__GamePassesShop____c___RewardedAdCallback_b__84_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__84_0 = callbackFunction;
      ppEVar3 = &TypeInfo__GamePassesShop____c->static_fields->__9__84_0;
      goto code_?;
    }
    break;
  default:
    goto code_?;
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
code_?:
code_?:
  return;
}


/* Boolean ShouldShowTierReward(GamePassTier) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShouldShowTierReward
               (GamePassesShop *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TierUnlockedPopupController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return 0;
    }
    bVar2 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      if (((pPVar3->fields).gamePassTier <= bVar2) ||
         ((byte)(undefined1)tierToShow <=
          TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown)) {
        return 0;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        return (byte)(undefined1)tierToShow <= (pPVar3->fields).gamePassTier;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowAd
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__GamePassesShop____c___ShowAd_b__83_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c);
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__GamePassesShop____c->static_fields->__9__83_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__GamePassesShop____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__GamePassesShop____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GamePassesShop____c___ShowAd_b__83_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesShop____c->static_fields->__9__83_0 = callbackFunction;
        func_?(&TypeInfo__GamePassesShop____c->static_fields->__9__83_0,callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar3 != (IAdManager *)0x0) {
          puStack4 = (undefined *)0x6;
          func_?(6);
          return;
        }
      }
      else {
        GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
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


/* Void ShowGamePassShopInformationPopup() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowGamePassShopInformationPopup
               (GamePassesShop *this,MethodInfo *method)

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
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesShop____c__DisplayClass92_0___ShowGamePassShopInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c__DisplayClass92_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop____c__DisplayClass92_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pGVar1 = (this->fields).gamePassesShopInformationPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GamePassesShop____c__DisplayClass92_0___ShowGamePassShopInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowPurchaseConfirmPopup(Int32) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowPurchaseConfirmPopup
               (GamePassesShop *this,int32_t price,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__GamePassesShop__OnSuccessfulPurchase__);
    func_?(&
                    TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c__DisplayClass75_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop____c__DisplayClass75_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).tierPurchasePopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = value[1].klass;
    this = (GamePassesShop *)CONCAT31(0x104200,(this->fields).gamePassTierDisplayed);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)object,MethodInfo__GamePassesShop__OnSuccessfulPurchase__,
               (MethodInfo *)0x0);
    if (pOVar1 != (Object__Class *)0x0) {
      TierPurchasePopup::TierPurchasePopup_Initialize
                ((TierPurchasePopup *)pOVar1,(GamePassTier__Enum)this,(int32_t)root,
                 (UnityAction *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowPurchaseGoldErrorPopup() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowPurchaseGoldErrorPopup
               (GamePassesShop *this,MethodInfo *method)

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
                    TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesShop____c__DisplayClass76_0___ShowPurchaseGoldErrorPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c__DisplayClass76_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop____c__DisplayClass76_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).tierPurchaseGoldErrorPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GamePassesShop____c__DisplayClass76_0___ShowPurchaseGoldErrorPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (value[1].klass != (Object__Class *)0x0) {
      TierPurchaseNotEnoughGoldErrorPopup::TierPurchaseNotEnoughGoldErrorPopup_Initialize
                ((TierPurchaseNotEnoughGoldErrorPopup *)value[1].klass,
                 (uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowTierUnlockedPopup(Boolean, Boolean) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowTierUnlockedPopup
               (GamePassesShop *this,bool wasPurchased,bool wasTempUnlocked,MethodInfo *method)

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
                    TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesShop____c__DisplayClass73_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShop____c__DisplayClass73_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop____c__DisplayClass73_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).TierUnlockedPopupControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GamePassesShop____c__DisplayClass73_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (value[1].klass != (Object__Class *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)value[1].klass,
                 (uint)(this->fields).gamePassTierDisplayed,wasPurchased,wasTempUnlocked,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowTouristInformationPopup() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowTouristInformationPopup
               (GamePassesShop *this,MethodInfo *method)

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
                    GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    in_stack_1 =
         &
         MethodInfo__GamePassesShop____c__DisplayClass74_0___ShowTouristInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
    ;
    func_?();
    func_?(&TypeInfo__GamePassesShop____c__DisplayClass74_0);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar2 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       (&EStack_3,this_00,(MethodInfo *)0x0);
    uVar4 = pEVar2->hideSignUp;
    if (uVar4 == '\0') {
      value = (Object *)func_?(TypeInfo__GamePassesShop____c__DisplayClass74_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
      original = (this->fields).touristInformationPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar5 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                         );
      if (value == (Object *)0x0) goto code_?;
      value[1].klass = pOVar5;
      func_?(value + 1,pOVar5);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__GamePassesShop____c__DisplayClass74_0___ShowTouristInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]
   SortOutNonAccessItemsInShopData(Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]])
    */

Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_SortOutNonAccessItemsInShopData
          (GamePassesShop *this,
          Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                           );
  pDStack_7 = this_00;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
            );
  pDStack_8 = this_00;
  if (tierShopData == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
code_?:
    func_?();
    func_?();
    pcVar9 = (code *)swi(3);
    pDVar10 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar9)();
    return pDVar10;
  }
  pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]::
           Dictionary_2_System_UInt32_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                      &stack0xffffff9c,(Dictionary_2_System_UInt32_System_Object_ *)tierShopData,
                      MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                     );
  uStack_12 = 0;
  DStack_6._dictionary = pDVar11->_dictionary;
  DStack_6._version = pDVar11->_version;
  DStack_6._index = pDVar11->_index;
  DStack_6._current.key = (pDVar11->_current).key;
  DStack_6._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
  uStack_1 = 1;
  pDStack_13 = &DStack_6;
code_?:
  bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          UInt32,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                    (&DStack_6,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                    );
  key = DStack_6._current.key;
  if (bVar14 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
               ,in_stack_15);
    *unaff_FS_OFFSET = uStack_3;
    return (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)this_00;
  }
  pLStack_16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               DStack_6._current.value;
  pLStack_17 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               DStack_6._current.value;
  if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)DStack_6._current.value
      != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       DStack_6._current.value,0,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                      );
    if (cRam_? == '\0') {
      DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)&TypeInfo__MVTeleporter;
      func_?();
      cRam_? = '\x01';
    }
    this_00 = pDStack_7;
    if ((key != 0x41) && (key != 0x3b)) goto code_?;
    goto code_?;
  }
  goto code_?;
code_?:
  if (RVar18 != (RegexCharClass_SingleRange)0x0) {
    pLStack_17 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)RVar18;
    if (((byte)pLStack_17[7].fields._version < (TypeInfo__MVTeleporter->_1).naturalAligment) ||
       (*(MVTeleporter__Class **)
         (pLStack_17[4].monitor + (uint)(TypeInfo__MVTeleporter->_1).naturalAligment * 4 + -4) !=
        TypeInfo__MVTeleporter)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    RVar20.First = 0;
    RVar20.Last = 0;
    if (bVar19) {
      RVar20 = RVar18;
    }
    if (RVar20 != (RegexCharClass_SingleRange)0x0) {
code_?:
      if (pDStack_7 ==
          (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_7,key,(Object *)pLStack_16
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                );
    }
  }
  goto code_?;
}


/* Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]
   SortOutNonLootItemsInShopData(Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]])
    */

Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_SortOutNonLootItemsInShopData
          (GamePassesShop *this,
          Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
            );
  if (tierShopData != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa8,(Dictionary_2_System_UInt32_System_Object_ *)tierShopData,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                       );
    uVar5 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 1;
    pMVar6 = (MethodInfo *)(pDVar4->_current).key;
    while( true ) {
      do {
        do {
          key = pMVar6;
          bVar7 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffffc0,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                            );
          if (bVar7 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&stack0xffffffc0,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                       ,(MethodInfo *)in_stack_8);
            *unaff_FS_OFFSET = uStack_3;
            return (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                   this_00;
          }
          pLStack_9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)uVar5;
          if (pLStack_9 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
             ) goto code_?;
          pMVar6 = key;
        } while ((pLStack_9->fields)._size < 1);
        item = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLStack_9,0,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
        in_stack_8 = this;
        bVar7 = GamePassesShop_IsTierItemALootItem
                          (this,(MVWorldObjectClient *)item,(MethodInfo *)0x0);
      } while (bVar7 == 0);
      if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
         ) break;
      pMVar6 = 
      MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(Int32Enum__Enum)key,
                 (Object *)pLStack_9,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                );
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pDVar11 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar10)();
  return pDVar11;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Start
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesShop__UpdateTierCostTets__);
    func_?(&MethodInfo__GamePassesShop__UpdateUI__);
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GamePassesShop__UpdateUI__,(MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
    func_?();
    pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__GamePassesShop__UpdateTierCostTets__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           (Action *)0x0;
    }
    else {
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar3
      ;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
    }
    func_?();
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    layoutRoot = (Transform *)0x0;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
      LayoutRebuilder_ForceRebuildLayoutImmediate((RectTransform *)layoutRoot,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
      LayoutRebuilder_ForceRebuildLayoutImmediate
                ((this->fields).tierListContainer,(MethodInfo *)0x0);
      pRVar5 = (this->fields).tierList;
      if (pRVar5 != (RectTransform *)0x0) {
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           ((Rect *)&stack0xffffffec,pRVar5,(MethodInfo *)0x0);
        fVar7 = pRVar6->m_Width;
        pRVar5 = (this->fields).tierListContainer;
        if (pRVar5 != (RectTransform *)0x0) {
          pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffdc,pRVar5,(MethodInfo *)0x0);
          if (fVar7 < pRVar6->m_Width || fVar7 == pRVar6->m_Width) {
            return;
          }
          pRVar5 = (this->fields).tierListContainer;
          if (pRVar5 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                      (pRVar5,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      layoutRoot = pTVar4;
    }
    if (layoutRoot != (Transform *)0x0) goto code_?;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      goto code_?;
    }
code_?:
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void TestTier() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_TestTier
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,(pPVar1->fields).progressionGamePoints,CONCAT31(uStack_3,uVar2),
                           (MethodInfo *)0x0);
      ppMVar4 = (Math__Class **)0x0;
      iVar5 = 0;
      key = 1;
      if ((this->fields).gamePassTierDisplayed != 0) {
        do {
          if (key == (this->fields).gamePassTierDisplayed) {
            if (this_01 ==
                (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)0x0) goto code_?;
          }
          else {
            if (this_01 ==
                (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)0x0) goto code_?;
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar6 == (Object *)0x0) goto code_?;
            iVar5 = (int)&((pOVar6[3].klass)->_0).image + iVar5;
          }
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar6 == (Object *)0x0) goto code_?;
          key = key + 1;
          ppMVar4 = (Math__Class **)((int)ppMVar4 + (int)pOVar6[3].klass);
        } while ((int)key <= (int)(uint)(this->fields).gamePassTierDisplayed);
      }
      if (uVar2 == (this->fields).gamePassTierDisplayed) {
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar7 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                  (pMVar7,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
        (this->fields).newGamePointValue = iVar5;
      }
      else {
        (this->fields).newGamePointValue = (int32_t)ppMVar4;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar7 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                  (pMVar7,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
      }
      (this->fields).shouldLerp = 1;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pPVar9 = (this->fields).progressBar;
      (this->fields).lerpStartTime = fVar8;
      if (pPVar9 != (ProgressBar *)0x0) {
        fVar8 = (pPVar9->fields).progress;
        if (cRam_? == '\0') {
          ppMVar4 = &TypeInfo__System__Math;
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        func_?((double)((float)((int)ppMVar4 - iVar5) * fVar8 + (float)iVar5));
        iVar10 = func_?();
        (this->fields).oldGamePointValue = iVar10;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Update
               (GamePassesShop *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  if ((this->fields).shouldLerp == 0) {
code_?:
    if ((this_01->fields).delayedInit != 0) {
      GamePassesShop_DelayedInitialize(this_01,(MethodInfo *)0x0);
      (this_01->fields).delayedInit = 0;
    }
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar2->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar2 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this._1_3_ = (undefined3)((uint)fVar1 >> 8);
      this = (GamePassesShop *)CONCAT31(this._1_3_,(pPVar2->fields).gamePassTier);
      this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,(GamePassTier__Enum)this,(MethodInfo *)0x0);
      if (this_02 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        this = (GamePassesShop *)CONCAT31(this._1_3_,(this_01->fields).gamePassTierDisplayed);
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                            (ByteEnum__Enum)this,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          IVar4.m_value = (int32_t)pOVar3[3].klass;
          bVar5 = (this_01->fields).gamePassTierDisplayed;
          iVar6 = (this_01->fields).oldGamePointValue;
          if (cRam_? == '\0') {
            IVar4.m_value = (int32_t)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          BVar7 = (ByteEnum__Enum)bVar5;
          while (BVar7 = BVar7 - 1, 0 < (int)BVar7) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,BVar7,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar3 == (Object *)0x0) goto code_?;
            iVar6 = iVar6 - (int)pOVar3[3].klass;
          }
          bVar5 = (this_01->fields).gamePassTierDisplayed;
          iVar8 = (this_01->fields).newGamePointValue;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
            cRam_? = '\x01';
          }
          BVar7 = (ByteEnum__Enum)bVar5;
          while (BVar7 = BVar7 - 1, 0 < (int)BVar7) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,BVar7,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar3 == (Object *)0x0) goto code_?;
            iVar8 = iVar8 - (int)pOVar3[3].klass;
          }
          if ((float)this < 0.0) {
            pGVar9 = (GamePassesShop *)0x0;
          }
          else {
            pGVar9 = _UNK_?;
            if ((float)this <= (float)_UNK_?) {
              pGVar9 = this;
            }
          }
          pPVar10 = (ProgressBarAndroid *)(this_01->fields).progressBar;
          fVar1 = ((float)iVar8 / (float)IVar4.m_value - (float)iVar6 / (float)IVar4.m_value) *
                   (float)pGVar9 + (float)iVar6 / (float)IVar4.m_value;
          if (pPVar10 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar10,fVar1,(MethodInfo *)0x0);
            pPVar10 = (ProgressBarAndroid *)(this_01->fields).disabledProgressBar;
            if (pPVar10 != (ProgressBarAndroid *)0x0) {
              pGVar11 = (GamePassesShop *)0x0;
              ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar10,fVar1,(MethodInfo *)0x0);
              pGVar9 = this_01;
              if ((float)_UNK_? <= fVar1) {
                GamePassesShop_ActivateBar(this_01,(MethodInfo *)0x0);
              }
              else {
                GamePassesShop_DeactivateBar(this_01,(MethodInfo *)0x0);
              }
              if ((this_01->fields).progressBar != (ProgressBar *)0x0) {
                IVar4.m_value = (int32_t)&UNK_?;
                func_?();
                pSVar12 = mscorlib.dll::System::Single::Single_ToString
                                    ((Single *)&stack0xffffffe8,(MethodInfo *)0x0);
                str2 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                pSVar12 = mscorlib.dll::System::String::String_Concat_4
                                    (pSVar12,::StringLiteral____,str2,(MethodInfo *)0x0);
                pTVar13 = (this_01->fields).progressText;
                if (pTVar13 != (Text *)0x0) {
                  (*(code *)(pTVar13->klass->vtable).set_text.method)
                            (pTVar13,pSVar12,
                             (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pPVar10 = (ProgressBarAndroid *)(this_01->fields).disabledProgressBar;
                  pGVar14 = (GamePassesShop *)0x0;
                  if ((0.0 <= (float)pGVar11) &&
                     (pGVar14 = _UNK_?, (float)pGVar11 <= (float)_UNK_?)) {
                    pGVar14 = pGVar11;
                  }
                  if (pPVar10 != (ProgressBarAndroid *)0x0) {
                    ProgressBarAndroid::ProgressBarAndroid_set_Progress
                              (pPVar10,((float)(int)pGVar9 / (float)IVar4.m_value -
                                      (float)iVar6 / (float)IVar4.m_value) * (float)pGVar14 +
                                      (float)iVar6 / (float)IVar4.m_value,(MethodInfo *)0x0);
                    pGVar15 = (this_01->fields).progressBarDivider;
                    if (pGVar15 != (GameObject *)0x0) {
                      bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_activeSelf(pGVar15,(MethodInfo *)0x0);
                      if ((bVar16 == 0) && (0.0 < fVar1)) {
                        pGVar15 = (this_01->fields).progressBarDivider;
                        if (pGVar15 == (GameObject *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar15,1,(MethodInfo *)0x0);
                      }
                      if ((float)_UNK_? < (float)pGVar11) {
                        (this_01->fields).shouldLerp = 0;
                      }
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
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateFreeTryUI() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateFreeTryUI
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).previewGamePassTier;
    pGVar3 = (this->fields).purchaseButton;
    if (pGVar3 != (GamePassesPurchaseButton *)0x0) {
      pGVar4 = (pGVar3->fields).freeTryButton;
      bVar5 = (this->fields).gamePassTierDisplayed;
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,bVar2 != bVar5,(MethodInfo *)0x0);
        pGVar4 = (pGVar3->fields).freeTryActivated;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,bVar2 == bVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar1 != (PlayerPlanetData *)0x0) {
            this_00 = (this->fields).lockedTierIcon;
            bVar5 = (pPVar1->fields).gamePassTier;
            if (this_00 != (Image *)0x0) {
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if (bVar2 < (this->fields).gamePassTierDisplayed) {
                value = bVar5 < (this->fields).gamePassTierDisplayed;
              }
              else {
                value = false;
              }
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,value,(MethodInfo *)0x0);
                MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar7 != (MVNetworkGame *)0x0) &&
                   (this_01 = (pMVar7->fields)._GameTierShopRepository_k__BackingField,
                   this_01 != (GameTierShopRepository *)0x0)) {
                  pDVar8 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                                      (this_01,(uint)(this->fields).gamePassTierDisplayed,
                                       (MethodInfo *)0x0);
                  if ((bVar5 < 3) &&
                     (((this->fields).gamePassTierDisplayed == (uint8_t)(bVar5 + 1) &&
                      (MVar6 != MVGameMode__Enum_Edit &&
                       pDVar8 !=
                       (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                       0x0)))) {
                    bVar9 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled
                                      ((MethodInfo *)0x0);
                    if (bVar9 == 0) {
                      bVar9 = (this->fields).isSubscribed;
                    }
                    else {
                      bVar9 = 1;
                    }
                  }
                  else {
                    bVar9 = 0;
                  }
                  pGVar4 = (this->fields).freeTryUI;
                  if (pGVar4 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,bVar9 != 0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateHighestTierRewardShown(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateHighestTierRewardShown
               (GamePassTier__Enum newHighestTierRewardShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesShop);
    func_?(&TypeInfo__TierUnlockedPopupController);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown == 0) {
    TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown =
         (undefined1)newHighestTierRewardShown;
    TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown = 1;
  }
  return;
}


/* Void UpdateProgressBar(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateProgressBar
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&StringLiteral_Progress_Locked);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_Unlock_Progress);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    IStack_2.m_value = gamePassTierToDisplay & 0xff;
    pTVar3 = (this->fields).gameTierIconText;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,pSVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
            (PlayerTierStateCalculator *)0x0) ||
          ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
           gamePassRewardsActivated == 0)) ||
         (bVar5 = GamePassProgressionController::
                  GamePassProgressionController_get_IsProgressionEnabled((MethodInfo *)0x0),
         bVar5 == 0)) {
        pTVar3 = (this->fields).progressHeader;
        if (pTVar3 == (Text *)0x0) goto code_?;
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,StringLiteral_Progress_Locked,
                   (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pPVar6 = (this->fields).progressBar;
        if ((pPVar6 == (ProgressBar *)0x0) ||
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pPVar6,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,0,(MethodInfo *)0x0);
        pPVar6 = (this->fields).disabledProgressBar;
        if ((pPVar6 == (ProgressBar *)0x0) ||
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pPVar6,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,1,(MethodInfo *)0x0);
        pTVar3 = (this->fields).progressText;
        if ((pTVar3 == (Text *)0x0) ||
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar3,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,0,(MethodInfo *)0x0);
      }
      else {
        pTVar3 = (this->fields).progressHeader;
        if (pTVar3 == (Text *)0x0) goto code_?;
        in_stack_8 = (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,StringLiteral_Unlock_Progress,in_stack_8);
      }
      if (cRam_? == '\0') {
        IStack_2.m_value = (int32_t)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar9 != (PlayerPlanetData *)0x0) {
        playerGamePoints = (pPVar9->fields).progressionGamePoints;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if ((pPVar9 != (PlayerPlanetData *)0x0) &&
           (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
           this_00 != (PlayerTierStateCalculator *)0x0)) {
          gameTierShopStatus =
               MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
               PlayerTierStateCalculator_GetTierPricingState
                         (this_00,playerGamePoints,
                          CONCAT31((int3)((uint)in_stack_8 >> 8),
                                   (pPVar9->fields).gamePassTier),(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            IStack_2.m_value = (int32_t)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
            if (gameTierShopStatus ==
                (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)0x0) goto code_?;
          }
          else {
            GamePassesShop_ReduceGamePointsWithPreviousTierRequirements
                      (this,gamePassTierToDisplay,playerGamePoints,gameTierShopStatus,
                       (MethodInfo *)0x0);
            if (gameTierShopStatus ==
                (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)0x0) goto code_?;
            IStack_2.m_value = (int32_t)&UNK_?;
            pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                                 gamePassTierToDisplay,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                );
            if (pOVar10 == (Object *)0x0) goto code_?;
            pOVar11 = pOVar10[3].klass;
            if ((int)pOVar11 < (int)gamePassTierToDisplay) {
              gamePassTierToDisplay = (GamePassTier__Enum)pOVar11;
            }
            pPVar12 = (ProgressBarAndroid *)(this->fields).progressBar;
            value = (float)(int)gamePassTierToDisplay / (float)(int)pOVar11;
            if (pPVar12 == (ProgressBarAndroid *)0x0) goto code_?;
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar12,value,(MethodInfo *)0x0);
            pPVar12 = (ProgressBarAndroid *)(this->fields).disabledProgressBar;
            if (pPVar12 == (ProgressBarAndroid *)0x0) goto code_?;
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar12,value,(MethodInfo *)0x0);
            gamePassTierToDisplay =
                 (GamePassTier__Enum)
                 mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
            mscorlib.dll::System::String::String_Concat_4
                      ((String *)gamePassTierToDisplay,::StringLiteral____,pSVar4,(MethodInfo *)0x0)
            ;
            pTVar3 = (this->fields).progressText;
            if (pTVar3 == (Text *)0x0) goto code_?;
            (*(code *)(pTVar3->klass->vtable).set_text.method)();
            pGVar7 = (this->fields).progressBarDivider;
            if (pGVar7 == (GameObject *)0x0) goto code_?;
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar7,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pPVar6 = (this->fields).progressBar;
              if (pPVar6 == (ProgressBar *)0x0) goto code_?;
              if ((pPVar6->fields).progress <= 0.0) {
                pGVar7 = (this->fields).progressBarDivider;
                if (pGVar7 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,0,(MethodInfo *)0x0);
              }
            }
          }
          pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                               gamePassTierToDisplay,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              );
          if (pOVar10 != (Object *)0x0) {
            if (pOVar10[1].klass != (Object__Class *)0x0) {
              return;
            }
            IStack_2.m_value = (int32_t)&UNK_?;
            GamePassesShop_ActivateBar(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateTierCostTets() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateTierCostTets
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&StringLiteral__min_);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).unlockPriceText;
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if ((pPVar2 != (PlayerTierStateCalculator *)0x0) &&
     (pDVar3 = (pPVar2->fields).progressionThresholds,
     pDVar3 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                *)0x0)) {
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                        CONCAT31(this._1_3_,(this->fields).gamePassTierDisplayed),
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                       );
    if (pOVar4 != (Object *)0x0) {
      mscorlib.dll::System::Int32::Int32_ToString((Int32 *)(pOVar4 + 1),(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
        pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if ((pPVar2 != (PlayerTierStateCalculator *)0x0) &&
           (pDVar3 = (pPVar2->fields).progressionThresholds,
           pDVar3 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0)) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                              CONCAT31(this._1_3_,(this->fields).gamePassTierDisplayed),
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar4 != (Object *)0x0) {
            if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes
                      ((TimeSpan *)(pOVar4 + 2),(MethodInfo *)0x0);
            pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
            if ((pPVar2 != (PlayerTierStateCalculator *)0x0) &&
               (pDVar3 = (pPVar2->fields).progressionThresholds,
               pDVar3 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                          *)0x0)) {
              pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                                  CONCAT31(this._1_3_,(this->fields).gamePassTierDisplayed),
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                 );
              if (pOVar4 != (Object *)0x0) {
                mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours
                          ((TimeSpan *)(pOVar4 + 2),(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                func_?();
                pTVar1 = (this->fields).unlockTimeText;
                str0 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                mscorlib.dll::System::String::String_Concat_3
                          (str0,StringLiteral__min_,(MethodInfo *)0x0);
                if (pTVar1 != (Text *)0x0) {
                  (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateUI() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateUI
               (GamePassesShop *this,MethodInfo *method)

{
  GamePassesShop_UpdateTierCostTets(this,(MethodInfo *)0x0);
  GamePassesShop_UpdateFreeTryUI(this,(MethodInfo *)0x0);
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    GamePassesShop_OnPlayerPlanetDataUpdated(this,(MethodInfo *)0x0);
  }
  return;
}

