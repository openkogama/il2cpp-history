
/* Void ActivateBar() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ActivateBar
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lockedTierIcon;
  if (this_00 != (Image *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
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
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        if (pTVar4 != (Text *)0x0) {
          (*(code *)(pTVar4->klass->vtable).set_text.method)();
          pPVar5 = (this->fields).progressBar;
          if (pPVar5 != (ProgressBar *)0x0) {
            ProgressBar::ProgressBar_set_Progress(pPVar5,1.0,(MethodInfo *)0x0);
            pPVar5 = (this->fields).disabledProgressBar;
            if (pPVar5 != (ProgressBar *)0x0) {
              ProgressBar::ProgressBar_set_Progress(pPVar5,1.0,(MethodInfo *)0x0);
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
  GamePassesShop_CreateSpawnRoleContent
            (this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).xpRewardInfoPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GamePassesXpRewardInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo_
                     );
  if (pGVar1 != (GamePassesXpRewardInfo *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pGVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).tierListContainer;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,parent,0,(MethodInfo *)0x0);
        GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
                  (pGVar1,(GamePassTier__Enum)parent,(MethodInfo *)0x0);
        pGVar2 = (this->fields).contentCuller;
        if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (pGVar2->fields).gamePassShopContentList;
          if (this_01 != (List_1_IGamePassShopContent_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pGVar1,
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


/* Int32 CalculateTotalSpawnRoleCost(MVAvatarSpawnRoleCreator) */

int32_t Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CalculateTotalSpawnRoleCost
                  (GamePassesShop *this,MVAvatarSpawnRoleCreator *spawnRoleCreator,
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
  func_?();
  if ((spawnRoleCreator != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_00 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (spawnRoleCreator,(MethodInfo *)0x0),
     this_00 != (AttributeSettingsManager *)0x0)) {
    pSVar4 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                          (this_00,(MethodInfo *)0x0);
    if (pSVar4 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    bVar5 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pSVar4->klass->_1).naturalAligment < bVar5) ||
       ((pSVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)0x0;
    if (bVar6) {
      this_01 = pSVar4;
    }
    if (this_01 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) goto code_?;
    spawnRoleCreator = (MVAvatarSpawnRoleCreator *)0x0;
    this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_01,(MethodInfo *)0x0);
    if (this_02 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                 &stack0xffffffac,this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                );
      uStack_1 = 0;
      while( true ) {
        cVar7 = func_?();
        if (cVar7 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return (int32_t)spawnRoleCreator;
        }
        LevelRewardsManager::LevelRewardsManager_get_NextReward
                  ((LevelRewardsManager *)&stack0xffffffc0,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                  );
        iVar8 = func_?();
        if (iVar8 == 0) goto code_?;
        iVar8 = func_?();
        if ((iVar8 == 0) || (piVar9 = (int *)func_?(), piVar9 == (int *)0x0)) break;
        iVar8 = *piVar9;
        uVar10 = 0;
        if (*(ushort *)(iVar8 + 0xb6) != 0) {
          do {
            if (*(IAttributeSetting__Class **)(*(int *)(iVar8 + 0x58) + (uint)uVar10 * 8) ==
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
               ) {
              puVar11 = (undefined4 *)
                       (iVar8 + 0xc0 + *(int *)(*(int *)(iVar8 + 0x58) + 4 + (uint)uVar10 * 8) * 8);
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(iVar8 + 0xb6));
        }
        puVar11 = (undefined4 *)func_?();
code_?:
        iVar8 = (*(code *)*puVar11)();
        spawnRoleCreator = (MVAvatarSpawnRoleCreator *)((int)&spawnRoleCreator->klass + iVar8);
      }
      func_?();
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  iVar13 = (*pcVar12)();
  return iVar13;
}


/* Void CreateSpawnPointInfo(MVTeam) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnPointInfo
               (GamePassesShop *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).spawnPointInfoPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      SpawnPointInfo_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointInfo>_SpawnPointInfo_
                     );
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).tierListContainer;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,parent,0,(MethodInfo *)0x0);
        SpawnPointInfo::SpawnPointInfo_Initialize((SpawnPointInfo *)pXVar1,team,(MethodInfo *)0x0);
        pGVar2 = (this->fields).contentCuller;
        if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (pGVar2->fields).gamePassShopContentList;
          if (this_01 != (List_1_IGamePassShopContent_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pXVar1,
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


/* Void CreateSpawnRoleContent(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnRoleContent
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = GamePassesShop_GetSortedSpawnRoles
                      (this,CONCAT31((int3)((uint)in_stack_1 >> 8),
                                     (this->fields).gamePassTierDisplayed),(MethodInfo *)0x0);
  index = (List_1_MVAvatarSpawnRoleCreator_ *)0x0;
  pLVar2 = (List_1_MVAvatarSpawnRoleCreator_ *)0x0;
  if (this_02 != (List_1_MVAvatarSpawnRoleCreator_ *)0x0) {
    while( true ) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                          MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__
                         );
      if ((int)pOVar3 <= (int)index) {
        return;
      }
      pLVar2 = index;
      this_03 = (MVAvatarSpawnRoleCreator *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                           (int32_t)index,
                           MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                          );
      this_02 = pLVar2;
      if (cRam_? == '\0') {
        this = _UNK_?;
        func_?();
        cRam_? = '\x01';
        this_02 = pLVar2;
      }
      pGVar4 = (this->fields).spawnRoleRewardInfoPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar4 = (GamePassesSpawnRoleRewardInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pGVar4,
                          GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo_
                         );
      pLVar2 = this_02;
      if (pGVar4 == (GamePassesSpawnRoleRewardInfo *)0x0) break;
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pGVar4,(MethodInfo *)0x0);
      this_00 = (this->fields).tierListContainer;
      pLVar2 = this_02;
      if (this_00 == (RectTransform *)0x0) break;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      pLVar2 = this_02;
      if (this_04 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_04,parent,0,(MethodInfo *)0x0);
      pLVar2 = this_02;
      if (this_03 == (MVAvatarSpawnRoleCreator *)0x0) break;
      spawnRolePreviewObject =
           MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                     (this_03,(MethodInfo *)0x0);
      GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                (pGVar4,(int32_t)index,spawnRolePreviewObject,this_03,gamePassTierToDisplay,
                 (MethodInfo *)0x0);
      pGVar5 = (this->fields).contentCuller;
      pLVar2 = this_02;
      if (pGVar5 == (GamePassesShopContentCuller *)0x0) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_01 = (pGVar5->fields).gamePassShopContentList;
      pLVar2 = this_02;
      if (this_01 == (List_1_IGamePassShopContent_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pGVar4,
                 MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                );
      index = (List_1_MVAvatarSpawnRoleCreator_ *)((int)&index->klass + 1);
    }
  }
  func_?(0,pLVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreateSpawnRoleInfo(Int32, MVAvatarSpawnRoleCreator, GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnRoleInfo
               (GamePassesShop *this,int32_t spawnRoleIndex,MVAvatarSpawnRoleCreator *spawnRole,
               GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).spawnRoleRewardInfoPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GamePassesSpawnRoleRewardInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo_
                     );
  if (pGVar1 != (GamePassesSpawnRoleRewardInfo *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pGVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).tierListContainer;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,parent,0,(MethodInfo *)0x0);
        if (spawnRole != (MVAvatarSpawnRoleCreator *)0x0) {
          spawnRolePreviewObject =
               MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                         (spawnRole,(MethodInfo *)0x0);
          GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                    (pGVar1,(int32_t)spawnRolePreviewObject,spawnRolePreviewObject,spawnRole,
                     (GamePassTier__Enum)spawnRole,(MethodInfo *)0x0);
          pGVar2 = (this->fields).contentCuller;
          if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_01 = (pGVar2->fields).gamePassShopContentList;
            if (this_01 != (List_1_IGamePassShopContent_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pGVar1,
                         MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                        );
              return;
            }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  tierShopData_00 =
       GamePassesShop_SortOutNonAccessItemsInShopData(this,tierShopData,(MethodInfo *)0x0);
  if (tierShopData_00 !=
      (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)tierShopData_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                       );
    if ((int)pOVar1 < 1) {
      return;
    }
    pTVar2 = (this->fields).tierUnlockedAccessItemsRewardInfoPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar2 = (TierUnlockedAccessItemsRewardInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pTVar2,
                        TierUnlockedAccessItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedAccessItemsRewardInfo>_TierUnlockedAccessItemsRewardInfo_
                       );
    if (pTVar2 != (TierUnlockedAccessItemsRewardInfo *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                ((Component_1 *)pTVar2,(MethodInfo *)0x0);
      this_00 = (Transform *)(this->fields).tierListContainer;
      if ((this_00 != (Transform *)0x0) &&
         (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_00,(MethodInfo *)0x0), this_00 != (Transform *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_00,parent,0,(MethodInfo *)0x0);
        TierUnlockedAccessItemsRewardInfo::TierUnlockedAccessItemsRewardInfo_Initialize
                  (pTVar2,0xADDR,tierShopData_00,(MethodInfo *)0x0);
        pGVar3 = (this->fields).contentCuller;
        if (pGVar3 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (pGVar3->fields).gamePassShopContentList;
          if (this_01 != (List_1_IGamePassShopContent_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pTVar2,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  tierShopData_00 =
       GamePassesShop_SortOutNonLootItemsInShopData(this,tierShopData,(MethodInfo *)0x0);
  if (tierShopData_00 !=
      (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)tierShopData_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                       );
    if ((int)pOVar1 < 1) {
      return;
    }
    pTVar2 = (this->fields).tierUnlockedItemsRewardInfoPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar2 = (TierUnlockedItemsRewardInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pTVar2,
                        TierUnlockedItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemsRewardInfo>_TierUnlockedItemsRewardInfo_
                       );
    if (pTVar2 != (TierUnlockedItemsRewardInfo *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                ((Component_1 *)pTVar2,(MethodInfo *)0x0);
      this_00 = (Transform *)(this->fields).tierListContainer;
      if ((this_00 != (Transform *)0x0) &&
         (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_00,(MethodInfo *)0x0), this_00 != (Transform *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_00,parent,0,(MethodInfo *)0x0);
        TierUnlockedItemsRewardInfo::TierUnlockedItemsRewardInfo_Initialize
                  (pTVar2,0xADDR,tierShopData_00,(MethodInfo *)0x0);
        pGVar3 = (this->fields).contentCuller;
        if (pGVar3 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (pGVar3->fields).gamePassShopContentList;
          if (this_01 != (List_1_IGamePassShopContent_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pTVar2,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).xpRewardInfoPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GamePassesXpRewardInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo_
                     );
  if (pGVar1 != (GamePassesXpRewardInfo *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pGVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).tierListContainer;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,parent,0,(MethodInfo *)0x0);
        GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize(pGVar1,tier,(MethodInfo *)0x0);
        pGVar2 = (this->fields).contentCuller;
        if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (pGVar2->fields).gamePassShopContentList;
          if (this_01 != (List_1_IGamePassShopContent_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pGVar1,
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


/* Void DeactivateBar() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_DeactivateBar
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = GamePassesShop_IsProgressBarEnabled(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pTVar2 = (this->fields).progressHeader;
    if (pTVar2 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,StringLiteral_Progress_Locked,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pPVar3 = (this->fields).progressBar;
    if (pPVar3 == (ProgressBar *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pPVar3,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar4,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pPVar3 = (this->fields).progressBar;
      if (pPVar3 == (ProgressBar *)0x0) goto code_?;
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pPVar3,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
    }
    pPVar3 = (this->fields).disabledProgressBar;
    if (pPVar3 == (ProgressBar *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pPVar3,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar4,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pPVar3 = (this->fields).disabledProgressBar;
      if (pPVar3 == (ProgressBar *)0x0) goto code_?;
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pPVar3,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,1,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar5 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar5->fields).gameMode != 0) {
      pGVar4 = (this->fields).unlockedText;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar4,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pGVar4 = (this->fields).unlockedText;
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
      }
    }
  }
  this_00 = (this->fields).lockedTierIcon;
  if (this_00 != (Image *)0x0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  pTVar2 = (this->fields).crystalAmount;
  if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  puStack_1 = (undefined *)
              GamePointAmountManager::GamePointAmountManager_GetTotalGamePointAmount
                        ((MethodInfo *)0x0);
  uVar3 = func_?(&puStack_1,0);
  if (pTVar2 == (Text *)0x0) goto code_?;
  (*(code *)(pTVar2->klass->vtable).set_text.method)
            (pTVar2,uVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
  GamePassesShop_UpdateProgressBar
            (this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  uVar4 = (this->fields).gamePassTierDisplayed;
  GamePassesShop_CreateSpawnRoleContent
            (this,CONCAT31((int3)((uint)unaff_EBX >> 8),uVar4),(MethodInfo *)0x0);
  this = (GamePassesShop *)CONCAT31(this._1_3_,uVar4);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar5 = (this_04->fields).xpRewardInfoPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar5 = (GamePassesXpRewardInfo *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)pGVar5,
                       GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo_
                      );
  if (pGVar5 == (GamePassesXpRewardInfo *)0x0) goto code_?;
  this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)pGVar5,(MethodInfo *)0x0);
  this_00 = (this_04->fields).tierListContainer;
  if (this_00 == (RectTransform *)0x0) goto code_?;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
  if (this_05 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (this_05,parent,0,(MethodInfo *)0x0);
  GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
            (pGVar5,(GamePassTier__Enum)this,(MethodInfo *)0x0);
  pGVar6 = (this_04->fields).contentCuller;
  if (pGVar6 == (GamePassesShopContentCuller *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar7 = (pGVar6->fields).gamePassShopContentList;
  if (pLVar7 == (List_1_IGamePassShopContent_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
            ((List_1_UIPushOption_ *)pLVar7,(UIPushOption__Enum)pGVar5,
             MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
            );
  pGVar6 = (this_04->fields).contentCuller;
  if (pGVar6 == (GamePassesShopContentCuller *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar7 = (pGVar6->fields).gamePassShopContentList;
  if (pLVar7 == (List_1_IGamePassShopContent_ *)0x0) goto code_?;
  amoutOfElements =
       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization
       ::JsonProperty]::
       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                  MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__)
  ;
  GamePassesShopContentCuller::GamePassesShopContentCuller_HideElements
            (pGVar6,0,(int32_t)amoutOfElements,0,(MethodInfo *)0x0);
  GamePassesShopContentCuller::GamePassesShopContentCuller_ShowElements(pGVar6,0,(MethodInfo *)0x0);
  this_01 = (this_04->fields).purchaseButton;
  if (this_01 == (GamePassesPurchaseButton *)0x0) goto code_?;
  GamePassesPurchaseButton::GamePassesPurchaseButton_Initialize
            (this_01,(uint)(this_04->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar8 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar8->fields).gameMode == 0) {
    pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this_04->fields).purchaseButtonObject;
    if (pDVar9 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) goto code_?;
    pGVar10 = (GameObject *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (pDVar9,(MethodInfo *)0x0);
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this_04->fields).freeTryUI;
    if (pDVar9 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) goto code_?;
    pGVar10 = (GameObject *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (pDVar9,(MethodInfo *)0x0);
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    GamePassesShop_UpdateTierCostTets(this_04,(MethodInfo *)0x0);
  }
  GamePassesShop_UpdateFreeTryUI(this_04,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar8 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar8->fields).gameMode == 0) {
    pGVar10 = (this_04->fields).editModeInformationObject;
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,1,(MethodInfo *)0x0);
    pGVar10 = (this_04->fields).gameTierProgressObject;
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pGVar10 = (this_04->fields).statusFooterObject;
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
  }
  bVar11 = (this_04->fields).gamePassTierDisplayed;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar8 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar8->fields).gameMode != 0) {
    if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
      func_?(TypeInfo__TierUnlockedPopupController);
    }
    bVar12 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar13 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar13 == (PlayerPlanetData *)0x0) goto code_?;
    if (bVar12 < (pPVar13->fields).gamePassTier) {
      if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
        func_?(TypeInfo__TierUnlockedPopupController);
      }
      if (bVar11 <= TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown)
      goto code_?;
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar13 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar13 == (PlayerPlanetData *)0x0) goto code_?;
      cVar14 = '\x01' - ((pPVar13->fields).gamePassTier < bVar11);
    }
    else {
code_?:
      cVar14 = '\0';
    }
    if (cVar14 != '\0') {
      GamePassesShop_ShowTierUnlockedPopup(this_04,0,0,(MethodInfo *)0x0);
      return;
    }
  }
  this_02 = (this_04->fields).embeddedPlayerConfig;
  if (this_02 != (EmbeddedPlayerConfig *)0x0) {
    pEVar15 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        ((EmbeddedSiteConfigData *)&stack0xffffffe8,this_02,(MethodInfo *)0x0);
    EVar16 = *pEVar15;
    if ((EVar16.allowsModals == 0) && (EVar16.allowsOpenInNewTab == 0)) {
      uVar17 = EVar16._8_4_ >> 0x10 & 0xff;
    }
    else {
      uVar17 = 1;
    }
    pGVar10 = (this_04->fields).purchaseButtonObject;
    if (pGVar10 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar10,uVar17 != 0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      bVar18 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if ((bVar18 != 0) && (uVar17 != 0)) {
        GamePassesShop_ShowTouristInformationPopup(this_04,(MethodInfo *)0x0);
        return;
      }
      this_03 = (this_04->fields).buttonAdImage;
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      this_06 = (GoldRewardManager *)
                GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
      if (this_06 != (GoldRewardManager *)0x0) {
        bVar18 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone
                           (this_06,(MethodInfo *)0x0);
        if (this_03 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_03,bVar18 == 0,(MethodInfo *)0x0);
          pGVar10 = (this_04->fields).statusFooterObject;
          if (pGVar10 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar10,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Exit
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesShop);
  }
  if (TypeInfo__GamePassesShop->static_fields->__f__am_cache6 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__GamePassesShop___Exit_m__6_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    TypeInfo__GamePassesShop->static_fields->__f__am_cache6 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesShop);
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GamePassesShop->static_fields->__f__am_cache6;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0)
     , this_01 != (MVWorldObjectClientManager *)0x0)) {
    this_02 = (MVAvatarSpawnRoleCreator__Class *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
    this_03 = (MethodInfo *)
              func_?(TypeInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_03,
               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__List__);
    this_04 = (GamePassesShop *)
              func_?(TypeInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_04,
               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__List__);
    this_05 = (MVAvatarSpawnRoleCreator__Class *)0x0;
    if (this_02 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
      while( true ) {
        pMVar1 = (MethodInfo *)&UNK_?;
        pMVar2 = MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__;
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        if ((int)pOVar3 <= (int)pMVar2) break;
        this_02 = this_05;
        pMVar2 = MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
        ;
        pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_05,
                            (int32_t)this_05,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                           );
        if (pIVar4 != (IEventSystemHandler *)0x0) {
          bVar5 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
          if (((pIVar4->klass->_1).naturalAligment < bVar5) ||
             (this_03 = pMVar2,
             (MVAvatarSpawnRoleCreator__Class *)(pIVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
             TypeInfo__MVAvatarSpawnRoleCreator)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pIVar7 = (IEventSystemHandler *)0x0;
          if (bVar6) {
            pIVar7 = pIVar4;
          }
          if (pIVar7 != (IEventSystemHandler *)0x0) {
            pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                (int32_t)this_05,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                               );
            iVar8 = func_?();
            if (iVar8 == 0) goto code_?;
            this_02 = TypeInfo__MVAvatarSpawnRoleCreator;
            pMVar9 = (MVAvatarSpawnRoleCreator *)
                     func_?(pIVar4,TypeInfo__MVAvatarSpawnRoleCreator,0);
            GVar10 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(pMVar9,pMVar1);
            if ((char)GVar10 == (undefined1)gamePassTierToDisplay) {
              pMVar1 = (MethodInfo *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                   (int32_t)this_05,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                  );
              pMVar2 = 
              MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Add_MVAvatarSpawnRoleCreator_
              ;
              if (this_03 == (MethodInfo *)0x0) goto code_?;
              this_02 = (MVAvatarSpawnRoleCreator__Class *)&UNK_?;
              this_03 = pMVar1;
              item_00 = func_?(pMVar1,TypeInfo__MVAvatarSpawnRoleCreator);
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add((List_1_UIPushOption_ *)this_03,item_00,pMVar2);
            }
          }
        }
        this_05 = (MVAvatarSpawnRoleCreator__Class *)((int)&(this_05->_0).image + 1);
      }
      pMVar2 = (MethodInfo *)0x0;
      if (this_03 != (MethodInfo *)0x0) {
code_?:
        do {
          pMVar1 = pMVar2;
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                              MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__
                             );
          if ((int)pOVar3 <= (int)pMVar1) {
            return (List_1_MVAvatarSpawnRoleCreator_ *)this_04;
          }
          iVar8 = 0;
          while( true ) {
            if (this_04 == (GamePassesShop *)0x0) goto code_?;
            this_03 = 
            MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__;
            pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                                MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__
                               );
            if ((int)pOVar3 <= iVar8) {
              pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                                  (int32_t)pMVar2,
                                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                                 );
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)this_04,(UIPushOption__Enum)pIVar4,
                         MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Add_MVAvatarSpawnRoleCreator_
                        );
              pMVar2 = (MethodInfo *)((int)&pMVar2->methodPointer + 1);
              goto code_?;
            }
            pMVar1 = (MethodInfo *)&UNK_?;
            method_01 = pMVar2;
            pMVar9 = (MVAvatarSpawnRoleCreator *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                                (int32_t)pMVar2,
                                MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                               );
            if (pMVar9 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            MVar11 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                               (pMVar9,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)&UNK_?;
            pMVar9 = (MVAvatarSpawnRoleCreator *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,
                                iVar8,
                                MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                               );
            if (pMVar9 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            MVar12 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                               (pMVar9,(MethodInfo *)0x0);
            if ((int)MVar11 < (int)MVar12) break;
            pMVar9 = (MVAvatarSpawnRoleCreator *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                                (int32_t)pMVar2,
                                MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                               );
            if (pMVar9 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            MVar11 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                               (pMVar9,(MethodInfo *)0x0);
            pMVar9 = (MVAvatarSpawnRoleCreator *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,
                                iVar8,
                                MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                               );
            if (pMVar9 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            MVar12 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                               (pMVar9,(MethodInfo *)0x0);
            if (MVar11 == MVar12) {
              pMVar9 = (MVAvatarSpawnRoleCreator *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                                  (int32_t)pMVar2,
                                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                                 );
              iVar13 = GamePassesShop_CalculateTotalSpawnRoleCost(this_04,pMVar9,(MethodInfo *)0x0);
              pMVar9 = (MVAvatarSpawnRoleCreator *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,
                                  iVar8,
                                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                                 );
              pMVar2 = pMVar1;
              iVar14 = GamePassesShop_CalculateTotalSpawnRoleCost(this_04,pMVar9,(MethodInfo *)0x0);
              pMVar1 = pMVar2;
              if (iVar14 < iVar13) break;
            }
            iVar8 = iVar8 + 1;
          }
          this_03 = (MethodInfo *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pMVar1,
                               (int32_t)this_03,method_01);
          item._4_4_ = 
          MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Insert_int__MVAvatarSpawnRoleCreator_
          ;
          item.rgba = (int32_t)this_03;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
          List_1_UnityEngine_Color32__Insert
                    ((List_1_UnityEngine_Color32_ *)this_04,iVar8,item,method_00);
          pMVar2 = (MethodInfo *)((int)&pMVar2->methodPointer + 1);
        } while( true );
      }
    }
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  pLVar16 = (List_1_MVAvatarSpawnRoleCreator_ *)(*pcVar15)();
  return pLVar16;
}


/* TierLockState GetTierLockState(GamePassTier) */

TierLockState__Enum
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_GetTierLockState
          (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
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
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                            (GamePassTier__Enum)
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  TVar5 = (*pcVar4)();
  return TVar5;
}


/* Int32 GetTotalGamePointRequirementForTier(GamePassTier) */

int32_t Assembly-CSharp.dll::GamePassesShop::GamePassesShop_GetTotalGamePointRequirementForTier
                  (GamePassesShop *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
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
      iVar2 = 0;
      if (key != GamePassTier__Enum_Tier0) {
        do {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                   GamePassTier,System::Object]::
                   Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                             ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar4 == (Object *)0x0) goto code_?;
          iVar2 = (int)&((pOVar4[3].klass)->_0).image + iVar2;
          key = key - GamePassTier__Enum_Tier1;
        } while (0 < (int)key);
      }
      return iVar2;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar2 = (*pcVar5)();
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
      pGVar1 = (this->fields).statusFooterObject;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      playerGamePassTier =
           CONCAT31((int3)((uint)in_stack_3 >> 8),(pPVar1->fields).gamePassTier);
      this_03 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,iVar2,playerGamePassTier,(MethodInfo *)0x0);
      if (this_03 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_03,
                            CONCAT31((int3)(playerGamePassTier >> 8),
                                     (this->fields).gamePassTierDisplayed),
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar4 != (Object *)0x0) {
          price = pOVar4[2].klass;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_04 != (MVNetworkGame *)0x0) {
            this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0);
            if (this_05 != (MVLocalPlayer *)0x0) {
              method_00 = (MethodInfo *)&UNK_?;
              iVar2 = GamePointGainEffect::GamePointGainEffect_get_ID
                                ((GamePointGainEffect *)this_05,(MethodInfo *)0x0);
              if (iVar2 != 0) {
                if (*(int *)(iVar2 + 0x10) < (int)price) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  bVar5 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                    ((MethodInfo *)0x0);
                  if (bVar5 != 0) {
                    GamePassesShop_ShowTouristInformationPopup(this,(MethodInfo *)0x0);
                    return;
                  }
                  if (cRam_? == '\0') {
                    func_?(_UNK_?);
                    cRam_? = '\x01';
                  }
                  pSVar6 = (ScaleAnimationBase *)
                           func_?(
                                          TypeInfo__GamePassesShop___ShowPurchaseGoldErrorPopup_c__AnonStorey3
                                          );
                  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,method_00);
                  pXVar7 = (XpBoostParticlePreviewer *)
                           (this->fields).tierPurchaseGoldErrorPopupPrefab;
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                     (pXVar7,
                                      TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                                     );
                  if (pSVar6 != (ScaleAnimationBase *)0x0) {
                    (pSVar6->fields)._._._._.m_CachedPtr = pXVar7;
                    root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(
                                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                               );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar8,(Object *)pSVar6,
                               MethodInfo__GamePassesShop___ShowPurchaseGoldErrorPopup_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,
                               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                              );
                    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                                methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)
                       ) {
                      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy_63
                              (root,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar8,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                              );
                    this_01 = (pSVar6->fields)._._._._.m_CachedPtr;
                    if (this_01 != (TierPurchaseNotEnoughGoldErrorPopup *)0x0) {
                      TierPurchaseNotEnoughGoldErrorPopup::
                      TierPurchaseNotEnoughGoldErrorPopup_Initialize
                                (this_01,(uint)(this->fields).gamePassTierDisplayed,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                else {
                  if (cRam_? == '\0') {
                    func_?(_UNK_?);
                    cRam_? = '\x01';
                  }
                  pSVar6 = (ScaleAnimationBase *)
                           func_?(
                                          TypeInfo__GamePassesShop___ShowPurchaseConfirmPopup_c__AnonStorey2
                                          );
                  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,method_00);
                  pXVar7 = (XpBoostParticlePreviewer *)(this->fields).tierPurchasePopupPrefab;
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                     (pXVar7,
                                      TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                                     );
                  if (pSVar6 != (ScaleAnimationBase *)0x0) {
                    (pSVar6->fields)._._._._.m_CachedPtr = pXVar7;
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
                    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(
                                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                               );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar8,(Object *)pSVar6,
                               MethodInfo__GamePassesShop___ShowPurchaseConfirmPopup_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,
                               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                              );
                    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                                methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)
                       ) {
                      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                *)&UNK_?;
                      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy_63
                              ((GameObject *)0x0,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar8,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                              );
                    this_02 = (pSVar6->fields)._._._._.m_CachedPtr;
                    tierToPurchase = &UNK_?;
                    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar8,(Object *)this,
                               MethodInfo__GamePassesShop__OnSuccessfulPurchase__,(MethodInfo *)0x0)
                    ;
                    if (this_02 != (TierPurchasePopup *)0x0) {
                      TierPurchasePopup::TierPurchasePopup_Initialize
                                (this_02,(GamePassTier__Enum)tierToPurchase,(int32_t)price,
                                 (UnityAction *)pUVar8,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandlePurchaseButtonVisibility(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_HandlePurchaseButtonVisibility
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      return;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).purchaseButtonObject;
    if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) &&
       (pGVar3 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (pDVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).freeTryUI;
      if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (pGVar3 = (GameObject *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (pDVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        GamePassesShop_UpdateTierCostTets(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Initialize
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (undefined1)gamePassTierToDisplay;
  gamePassTierToDisplay = gamePassTierToDisplay & 0xff;
  pTVar2 = (this->fields).headerText;
  (this->fields).delayedInit = 1;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&gamePassTierToDisplay);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Game_Tier_,arg1,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).gamePassTierDisplayed = uVar1;
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsProgressBarEnabled() */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsProgressBarEnabled
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
      (PlayerTierStateCalculator *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar1 == (PlayerTierStateCalculator *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((pPVar1->fields).gamePassRewardsActivated != 0) {
      return 1;
    }
  }
  return 0;
}


/* Boolean IsTierItemALootItem(MVWorldObjectClient) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsTierItemALootItem
               (GamePassesShop *this,MVWorldObjectClient *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (MVWorldObjectClient *)0x0) {
    pMVar1 = item->klass;
    bVar2 = (pMVar1->_1).naturalAligment;
    bVar3 = (TypeInfo__MVPickupItemBase->_1).naturalAligment;
    if ((bVar2 < bVar3) ||
       ((MVPickupItemBase__Class *)(pMVar1->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVPickupItemBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar5 = (MVWorldObjectClient *)0x0;
    if (bVar4) {
      pMVar5 = item;
    }
    if (pMVar5 == (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      if ((bVar3 <= bVar2) &&
         ((MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[bVar3 - 1] ==
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        return item != (MVWorldObjectClient *)0x0;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}


/* Boolean IsTierItemAnAccessItem(MVWorldObjectDocumentationType, MVWorldObjectClient) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsTierItemAnAccessItem
               (GamePassesShop *this,MVWorldObjectDocumentationType__Enum worldObjectType,
               MVWorldObjectClient *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((worldObjectType != MVWorldObjectDocumentationType__Enum_Lever) &&
     (worldObjectType != MVWorldObjectDocumentationType__Enum_PressurePlate)) {
    iVar1 = func_?(item,TypeInfo__MVTeleporter);
    return iVar1 != 0;
  }
  return 1;
}


/* Void OnButtonPress() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnButtonPress
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_2._1_3_ = (undefined3)((uint)in_ECX >> 8);
      GStack_2 = CONCAT31(GStack_2._1_3_,(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,GStack_2,(MethodInfo *)0x0);
      if (this_01 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        GStack_2 = CONCAT31(GStack_2._1_3_,(this->fields).gamePassTierDisplayed);
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,GStack_2,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          pOVar4 = pOVar3[1].klass;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pIVar5 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
          if (pIVar5 != (IEditModeUI *)0x0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pIVar5 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnDestroy
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__GamePassesShop__UpdateUI__,(MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) goto code_?;
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    pAStack4 = (Action__Class *)TypeInfo__GamePassProgressionController;
    func_?();
  }
  pAStack4 = TypeInfo__System__Action;
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__GamePassesShop__UpdateTierCostTets__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) {
code_?:
      pAStack4 = TypeInfo__System__Action;
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar1;
  return;
}


/* Void OnFreeTryPressed() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnFreeTryPressed
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?();
      }
      if (TypeInfo__GamePassesShop->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GamePassesShop___ShowAd_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__GamePassesShop->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?();
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__GamePassesShop->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    this_00 = (GoldRewardManager *)
              GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (this_00 != (GoldRewardManager *)0x0) {
      bVar2 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)&UNK_?,
                   MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                  );
        if (pIVar4 != (IAdManager *)0x0) {
          func_?();
          return;
        }
      }
      else {
        GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          Assets::Scripts::GamePasses::TogglePreviewState::
          TogglePreviewState_set_FreeTryWithoutAdAvailable(pTVar1,0,(MethodInfo *)0x0);
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


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnPlayerPlanetDataUpdated
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    if (TypeInfo__GamePassesShop->static_fields->__f__am_cache5 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)0x0,
                 MethodInfo__GamePassesShop___OnPlayerPlanetDataUpdated_m__5_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesShop);
      }
      TypeInfo__GamePassesShop->static_fields->__f__am_cache5 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar1;
    }
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__GamePassesShop->static_fields->__f__am_cache5;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    if (((this->fields).gamePassTierDisplayed <= (pPVar2->fields).previewGamePassTier) &&
       ((this->fields).haveShownFreeTryUnlock == 0)) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pAVar3 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pAVar3 = (Action *)0x0;
      if (pAVar4 != (Action *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar4;
        }
        if (pAVar3 == (Action *)0x0) goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
      GamePassesShop_ShowTierUnlockedPopup(this,0,1,(MethodInfo *)0x0);
      (this->fields).haveShownFreeTryUnlock = 1;
    }
    return;
  }
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GamePassesShop_ShowTierUnlockedPopup(this,1,0,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).purchaseButtonObject;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_03 = (GameObject *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (this_00,(MethodInfo *)0x0);
    if (this_03 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_03,0,(MethodInfo *)0x0);
      this_01 = (this->fields).freeTryUI;
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        pPVar2 = (this->fields).progressBar;
        if (pPVar2 != (ProgressBar *)0x0) {
          ProgressBar::ProgressBar_set_Progress(pPVar2,1.0,(MethodInfo *)0x0);
          pPVar2 = (this->fields).disabledProgressBar;
          if (pPVar2 != (ProgressBar *)0x0) {
            ProgressBar::ProgressBar_set_Progress(pPVar2,1.0,(MethodInfo *)0x0);
            GamePassesShop_ActivateBar(this,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
              func_?();
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
              func_?();
            }
            pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if ((pPVar3 != (PlayerPlanetData *)0x0) &&
               (pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
               pPVar4 != (PlayerTierStateCalculator *)0x0)) {
              this = (GamePassesShop *)CONCAT31(0x1039e9,(pPVar3->fields).gamePassTier);
              pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                       ::PlayerTierStateCalculator_GetTierPricingState
                                 (pPVar4,0,(GamePassTier__Enum)this,(MethodInfo *)0x0);
              if (pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                             *)0x0) {
                this = (GamePassesShop *)CONCAT31(0x1039e9,(pGVar1->fields).gamePassTierDisplayed);
                pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar5,
                                    (GamePassTier__Enum)this,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   );
                if (pOVar6 != (Object *)0x0) {
                  pOVar6 = (Object *)func_?();
                  arg2 = (Object *)func_?();
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?();
                  }
                  mscorlib.dll::System::String::String_Concat_1
                            (pOVar6,(Object *)StringLiteral____,arg2,(MethodInfo *)0x0);
                  pTVar7 = (pGVar1->fields).progressText;
                  if (pTVar7 != (Text *)0x0) {
                    (*(code *)(pTVar7->klass->vtable).set_text.method)();
                    bVar8 = (pGVar1->fields).gamePassTierDisplayed;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                      func_?();
                    }
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                    if (pPVar3 != (PlayerPlanetData *)0x0) {
                      playerGamePoints = (pPVar3->fields).progressionGamePoints;
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000
                           ) != 0) && ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                      if ((pPVar3 != (PlayerPlanetData *)0x0) &&
                         (pPVar4 = TypeInfo__GamePassesManager->static_fields->
                                   playerTierStateCalculator,
                         pPVar4 != (PlayerTierStateCalculator *)0x0)) {
                        pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                 PlayerTierStateCalculator::
                                 PlayerTierStateCalculator_GetTierPricingState
                                           (pPVar4,playerGamePoints,
                                            CONCAT31((int3)((uint)this_03 >> 8),
                                                     (pPVar3->fields).gamePassTier),
                                            (MethodInfo *)0x0);
                        obj = UIPushOption__Enum_None;
                        key = (GamePassTier__Enum)bVar8;
                        if (bVar8 != 0) {
                          do {
                            if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                                           *)0x0) goto code_?;
                            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                                     Common::GamePassTier,System::Object]::
                                     Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                               ((Dictionary_2_MV_Common_GamePassTier_System_Object_
                                                 *)pDVar5,key,
                                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                               );
                            if (pOVar6 == (Object *)0x0) goto code_?;
                            obj = (int)&((pOVar6[3].klass)->_0).image + obj;
                            key = key - GamePassTier__Enum_Tier1;
                          } while (0 < (int)key);
                        }
                        if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr
                             & 0x2000000) != 0) &&
                           ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
                          func_?();
                        }
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr
                             & 0x2000000) != 0) &&
                           ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
                          func_?();
                        }
                        TypeInfo__GamePointGainEffectManager->static_fields->
                        progressBarGamePointAmountShown = obj;
                        if (TypeInfo__GamePointGainEffectManager->static_fields->
                            OnGamePointGainEffectShown != (Action_1_Int32_ *)0x0) {
                          if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.
                                      methodPtr & 0x2000000) != 0) &&
                             ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
                            func_?();
                          }
                          this_02 = (Action_1_UIPushOption_ *)
                                    TypeInfo__GamePointGainEffectManager->static_fields->
                                    OnGamePointGainEffectShown;
                          if (this_02 == (Action_1_UIPushOption_ *)0x0) goto code_?;
                          mscorlib.dll::System::Action`1[UIPushOption]::
                          Action_1_UIPushOption__Invoke
                                    (this_02,obj,MethodInfo__System__Action<int>__Invoke_int_);
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
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnTestTierPress() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnTestTierPress
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier;
    GStack_3 = CONCAT31(GStack_3._1_3_,bVar2);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,(pPVar1->fields).progressionGamePoints,GStack_3,
                           (MethodInfo *)0x0);
      iVar4 = 0;
      iVar5 = 0;
      iVar6 = 0;
      bVar7 = (this->fields).gamePassTierDisplayed;
      GVar8 = GamePassTier__Enum_Tier1;
      bVar9 = 0;
      if (bVar7 != 0) {
        do {
          if (GVar8 != bVar7) {
            if ((this_01 ==
                 (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *)0x0) ||
               (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                                    GVar8 & 0xff,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar10 == (Object *)0x0)) goto code_?;
            iVar6 = (int)&((pOVar10[3].klass)->_0).image + iVar6;
          }
          if ((this_01 ==
               (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )0x0) ||
             (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                       GamePassTier,System::Object]::
                       Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                 ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                                  GVar8 & 0xff,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                 ), pOVar10 == (Object *)0x0)) goto code_?;
          GVar8 = GVar8 + GamePassTier__Enum_Tier1;
          iVar4 = (int)&((pOVar10[3].klass)->_0).image + iVar5;
          bVar9 = (this->fields).gamePassTierDisplayed;
          bVar7 = bVar9;
          iVar5 = iVar4;
        } while ((int)GVar8 <= (int)(uint)bVar9);
      }
      if (bVar2 == bVar9) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar11 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                  (pMVar11,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
        (this->fields).newGamePointValue = iVar6;
      }
      else {
        (this->fields).newGamePointValue = iVar4;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar11 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                  (pMVar11,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
      }
      (this->fields).shouldLerp = 1;
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_02 = (ProgressBarAndroid *)(this->fields).progressBar;
      (this->fields).lerpStartTime = fVar12;
      if (this_02 != (ProgressBarAndroid *)0x0) {
        fVar12 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(this_02,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                          ((float)((int)this_02 - iVar6) * fVar12 + (float)iVar6,(MethodInfo *)0x0
                          );
        (this->fields).oldGamePointValue = iVar13;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_PreviewTier
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  this_01 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_01 != (TogglePreviewState *)0x0) {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?();
      }
      if (TypeInfo__GamePassesShop->static_fields->__f__am_cache4 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GamePassesShop___PreviewTier_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__GamePassesShop->static_fields->__f__am_cache4 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?();
      }
      pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__GamePassesShop->static_fields->__f__am_cache4;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar2,(BaseEventData *)0x0,pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                (this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = TypeInfo__System__Action;
      pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_00,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
                 (MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar5 = (Action *)0x0;
      if (pAVar6 == (Action *)0x0) {
code_?:
        TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__GamePassesShop->static_fields->__f__am_cache3 ==
            (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)0x0,
                     MethodInfo__GamePassesShop___PreviewTier_m__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
            func_?();
          }
          TypeInfo__GamePassesShop->static_fields->__f__am_cache3 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
        }
        if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
          func_?();
        }
        pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__GamePassesShop->static_fields->__f__am_cache3;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar2,(BaseEventData *)0x0,pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        *(undefined1 *)((int)&(this_00->_1).method_count + 1) = 1;
        return;
      }
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar6;
      }
      if (pAVar5 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = gamePassTierToDisplay & 0xff;
  while( true ) {
    key = key - GamePassTier__Enum_Tier1;
    if ((int)key < 1) {
      return gamePoints;
    }
    if ((gameTierShopStatus ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    GamePassTier,System::Object]::
                    Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                              ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                               gameTierShopStatus,key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar1 == (Object *)0x0)) break;
    gamePoints = gamePoints - (int)pOVar1[3].klass;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_RewardedAdCallback
               (GamePassesShop *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if ((pIVar1 == (IEditModeUI *)0x0) && (RewardedAdResult__Enum_RewardNotUnlocked < result)) {
    return;
  }
  switch(result) {
  case RewardedAdResult__Enum_ErrorClient:
  case RewardedAdResult__Enum_ErrorInternal:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    if (TypeInfo__GamePassesShop->static_fields->__f__am_cache2 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__GamePassesShop___RewardedAdCallback_m__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesShop);
      }
      TypeInfo__GamePassesShop->static_fields->__f__am_cache2 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    callbackFunction = TypeInfo__GamePassesShop->static_fields->__f__am_cache2;
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  default:
    GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    if (TypeInfo__GamePassesShop->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__GamePassesShop___RewardedAdCallback_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesShop);
      }
      TypeInfo__GamePassesShop->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    callbackFunction = TypeInfo__GamePassesShop->static_fields->__f__am_cache1;
  }
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
code_?:
  return;
}


/* Boolean ShouldShowTierReward(GamePassTier) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShouldShowTierReward
               (GamePassesShop *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
      func_?(TypeInfo__TierUnlockedPopupController);
    }
    bVar2 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      if (bVar2 < (pPVar3->fields).gamePassTier) {
        if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
          func_?(TypeInfo__TierUnlockedPopupController);
        }
        if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown <
            (byte)(undefined1)tierToShow) {
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__GamePassesManager);
          }
          pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar3 != (PlayerPlanetData *)0x0) {
            return 1 - ((pPVar3->fields).gamePassTier < (byte)(undefined1)tierToShow);
          }
          goto code_?;
        }
      }
      return 0;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowAd
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?();
      }
      if (TypeInfo__GamePassesShop->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GamePassesShop___ShowAd_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__GamePassesShop->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?();
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__GamePassesShop->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    this_00 = (GoldRewardManager *)
              GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (this_00 != (GoldRewardManager *)0x0) {
      bVar2 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)&UNK_?,
                   MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                  );
        if (pIVar4 != (IAdManager *)0x0) {
          func_?();
          return;
        }
      }
      else {
        GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          Assets::Scripts::GamePasses::TogglePreviewState::
          TogglePreviewState_set_FreeTryWithoutAdAvailable(pTVar1,0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop___ShowGamePassShopInformationPopup_c__AnonStorey4;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).gamePassesShopInformationPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesShop___ShowGamePassShopInformationPopup_c__AnonStorey4____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowPurchaseConfirmPopup(Int32) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowPurchaseConfirmPopup
               (GamePassesShop *this,int32_t price,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop___ShowPurchaseConfirmPopup_c__AnonStorey2;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).tierPurchasePopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_01,
               MethodInfo__GamePassesShop___ShowPurchaseConfirmPopup_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = (this_01->fields)._._._._.m_CachedPtr;
    this = (GamePassesShop *)CONCAT31(0x1039f8,(this->fields).gamePassTierDisplayed);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)object,MethodInfo__GamePassesShop__OnSuccessfulPurchase__,
               (MethodInfo *)0x0);
    if (this_00 != (TierPurchasePopup *)0x0) {
      TierPurchasePopup::TierPurchasePopup_Initialize
                (this_00,(GamePassTier__Enum)this,(int32_t)root,(UnityAction *)pUVar2,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowPurchaseGoldErrorPopup() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowPurchaseGoldErrorPopup
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop___ShowPurchaseGoldErrorPopup_c__AnonStorey3;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).tierPurchaseGoldErrorPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__GamePassesShop___ShowPurchaseGoldErrorPopup_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = (this_01->fields)._._._._.m_CachedPtr;
    if (this_00 != (TierPurchaseNotEnoughGoldErrorPopup *)0x0) {
      TierPurchaseNotEnoughGoldErrorPopup::TierPurchaseNotEnoughGoldErrorPopup_Initialize
                (this_00,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowTierUnlockedPopup(Boolean, Boolean) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowTierUnlockedPopup
               (GamePassesShop *this,bool wasPurchased,bool wasTempUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop___ShowTierUnlockedPopup_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pTVar1 = (this->fields).TierUnlockedPopupControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pTVar1,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesShop___ShowTierUnlockedPopup_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pTVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if (pTVar1 != (TierUnlockedPopupController *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                (pTVar1,(uint)(this->fields).gamePassTierDisplayed,wasPurchased,wasTempUnlocked,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowTouristInformationPopup() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowTouristInformationPopup
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShop___ShowTouristInformationPopup_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).touristInformationPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesShop___ShowTouristInformationPopup_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  puStack_8 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  pDVar9 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                          );
  pDStack_10 = pDVar9;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
            );
  pDStack_11 = pDVar9;
  if (tierShopData != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffac,
                        (Dictionary_2_WinningConditionType_System_Object_ *)tierShopData,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar12->dictionary;
    auStack_6._4_4_ = pDVar12->next;
    auStack_6._8_4_ = pDVar12->stamp;
    auStack_6._12_4_ = (pDVar12->current).key;
    auStack_6._16_4_ = (pDVar12->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar13 = func_?();
      if (cVar13 == '\0') {
        *puStack_8 = 0x68;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return pDVar9;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                            );
      this_00 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)func_?();
      iVar14 = func_?();
      if (this_00 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) break;
      pIVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (this_00,0,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar9 = pDStack_10;
      if ((iVar14 == 0x41) || (iVar14 == 0x3b)) {
        bVar16 = true;
      }
      else if (pIVar15 == (IEventSystemHandler *)0x0) {
        bVar16 = false;
      }
      else {
        bVar17 = (TypeInfo__MVTeleporter->_1).naturalAligment;
        if (((pIVar15->klass->_1).naturalAligment < bVar17) ||
           ((MVTeleporter__Class *)(pIVar15->klass->_1).typeHierarchy[bVar17 - 1] !=
            TypeInfo__MVTeleporter)) {
          bVar16 = false;
        }
        else {
          bVar16 = pIVar15 != (IEventSystemHandler *)0x0;
        }
      }
      if (bVar16) {
        key = func_?();
        if (pDVar9 == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
           ) break;
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
        Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
                  ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)pDVar9,key,
                   (Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                  );
      }
    }
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pDVar9 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar18)();
  return pDVar9;
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
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
  puStack_8 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  pDVar9 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
            );
  pDStack_10 = pDVar9;
  if (tierShopData != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb0,
                        (Dictionary_2_WinningConditionType_System_Object_ *)tierShopData,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar11->dictionary;
    auStack_6._4_4_ = pDVar11->next;
    auStack_6._8_4_ = pDVar11->stamp;
    auStack_6._12_4_ = (pDVar11->current).key;
    auStack_6._16_4_ = (pDVar11->current).value;
    uStack_1 = 0;
    while( true ) {
      do {
        do {
          cVar12 = func_?();
          if (cVar12 == '\0') {
            *puStack_8 = 0x77;
            uStack_1 = 0xffffffff;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return pDVar9;
          }
          KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_6,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                                );
          this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
          if (this_00 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
          goto code_?;
          pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
        } while ((int)pOVar13 < 1);
        this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)func_?();
        if (this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)
        goto code_?;
        item = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (this_01,0,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
        bVar14 = GamePassesShop_IsTierItemALootItem(this,item,(MethodInfo *)0x0);
      } while (bVar14 == 0);
      key = func_?();
      pOVar13 = (Object *)func_?();
      if (pDVar9 == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System
      ::Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
                ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)pDVar9,key,pOVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                );
    }
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  pDVar9 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar15)();
  return pDVar9;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Start
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pMStack_2 = (MonitorData *)0x0;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar3 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this,MethodInfo__GamePassesShop__UpdateUI__,(MethodInfo *)0x0);
  pAVar5 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
  pAVar3 = (Action *)0x0;
  if (pAVar5 == (Action *)0x0) {
code_?:
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar3 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,MethodInfo__GamePassesShop__UpdateTierCostTets__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar5 != (Action *)0x0) {
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar5;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar3;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__UI__LayoutRebuilder->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_started == 0)) {
      func_?();
    }
    layoutRoot = (Transform *)0x0;
    if (pTVar6 != (Transform *)0x0) {
      if (pTVar6->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        layoutRoot = pTVar6;
      }
      if (layoutRoot == (Transform *)0x0) goto code_?;
    }
    UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
    LayoutRebuilder_ForceRebuildLayoutImmediate((RectTransform *)layoutRoot,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
    LayoutRebuilder_ForceRebuildLayoutImmediate((this->fields).tierListContainer,(MethodInfo *)0x0);
    pRVar7 = (this->fields).tierList;
    if (pRVar7 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffe8,pRVar7,(MethodInfo *)0x0);
      SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__get_Value
                ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd8,(MethodInfo *)0x0);
      pRVar7 = (this->fields).tierListContainer;
      if (pRVar7 != (RectTransform *)0x0) {
        pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           ((Rect *)&stack0xffffffe8,pRVar7,(MethodInfo *)0x0);
        pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
        pMStack_2 = (MonitorData *)pRVar8->m_YMin;
        puVar9 = &UNK_?;
        fVar10 = SubscribableVariableBase`1[System::Single]::
                SubscribableVariableBase_1_System_Single__get_Value
                          ((SubscribableVariableBase_1_System_Single_ *)&pSStack_1,
                           (MethodInfo *)0x0);
        if ((float)puVar9 <= fVar10) {
          return;
        }
        pRVar7 = (this->fields).tierListContainer;
        func_?();
        if (pRVar7 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                    (pRVar7,(Vector2)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar5;
    }
    if (pAVar3 != (Action *)0x0) goto code_?;
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void TestTier() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_TestTier
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier;
    GStack_3 = CONCAT31(GStack_3._1_3_,bVar2);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,(pPVar1->fields).progressionGamePoints,GStack_3,
                           (MethodInfo *)0x0);
      iVar4 = 0;
      iVar5 = 0;
      iVar6 = 0;
      bVar7 = (this->fields).gamePassTierDisplayed;
      GVar8 = GamePassTier__Enum_Tier1;
      bVar9 = 0;
      if (bVar7 != 0) {
        do {
          if (GVar8 != bVar7) {
            if ((this_01 ==
                 (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *)0x0) ||
               (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                                    GVar8 & 0xff,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar10 == (Object *)0x0)) goto code_?;
            iVar6 = (int)&((pOVar10[3].klass)->_0).image + iVar6;
          }
          if ((this_01 ==
               (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )0x0) ||
             (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                       GamePassTier,System::Object]::
                       Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                 ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                                  GVar8 & 0xff,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                 ), pOVar10 == (Object *)0x0)) goto code_?;
          GVar8 = GVar8 + GamePassTier__Enum_Tier1;
          iVar4 = (int)&((pOVar10[3].klass)->_0).image + iVar5;
          bVar9 = (this->fields).gamePassTierDisplayed;
          bVar7 = bVar9;
          iVar5 = iVar4;
        } while ((int)GVar8 <= (int)(uint)bVar9);
      }
      if (bVar2 == bVar9) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar11 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                  (pMVar11,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
        (this->fields).newGamePointValue = iVar6;
      }
      else {
        (this->fields).newGamePointValue = iVar4;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar11 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                  (pMVar11,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
      }
      (this->fields).shouldLerp = 1;
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_02 = (ProgressBarAndroid *)(this->fields).progressBar;
      (this->fields).lerpStartTime = fVar12;
      if (this_02 != (ProgressBarAndroid *)0x0) {
        fVar12 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(this_02,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                          ((float)((int)this_02 - iVar6) * fVar12 + (float)iVar6,(MethodInfo *)0x0
                          );
        (this->fields).oldGamePointValue = iVar13;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Update
               (GamePassesShop *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).shouldLerp != 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      iVar3 = (pPVar2->fields).progressionGamePoints;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if ((pPVar2 != (PlayerPlanetData *)0x0) &&
         (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
         this_00 != (PlayerTierStateCalculator *)0x0)) {
        this._1_3_ = (undefined3)((uint)fVar1 >> 8);
        this = (GamePassesShop *)CONCAT31(this._1_3_,(pPVar2->fields).gamePassTier);
        gameTierShopStatus =
             MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
             PlayerTierStateCalculator_GetTierPricingState
                       (this_00,iVar3,(GamePassTier__Enum)this,(MethodInfo *)0x0);
        if (gameTierShopStatus !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          this = (GamePassesShop *)CONCAT31(this._1_3_,(this_02->fields).gamePassTierDisplayed);
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                   GamePassTier,System::Object]::
                   Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                             ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                              gameTierShopStatus,(GamePassTier__Enum)this,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar4 != (Object *)0x0) {
            pOVar5 = pOVar4[3].klass;
            this = (GamePassesShop *)CONCAT31(this._1_3_,(this_02->fields).gamePassTierDisplayed);
            iVar3 = GamePassesShop_ReduceGamePointsWithPreviousTierRequirements
                              (this_02,(GamePassTier__Enum)this,(this_02->fields).oldGamePointValue,
                               gameTierShopStatus,(MethodInfo *)0x0);
            fVar1 = 0.0;
            this = (GamePassesShop *)CONCAT31(this._1_3_,(this_02->fields).gamePassTierDisplayed);
            iVar6 = GamePassesShop_ReduceGamePointsWithPreviousTierRequirements
                               (this_02,(GamePassTier__Enum)this,(this_02->fields).newGamePointValue
                                ,gameTierShopStatus,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              func_?();
            }
            value = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                              ((float)iVar3 / (float)(int)pOVar5,(float)iVar6 / (float)(int)pOVar5,
                               fVar1,(MethodInfo *)0x0);
            pPVar7 = (this_02->fields).progressBar;
            if (pPVar7 != (ProgressBar *)0x0) {
              ProgressBar::ProgressBar_set_Progress(pPVar7,value,(MethodInfo *)0x0);
              pPVar7 = (this_02->fields).disabledProgressBar;
              if (pPVar7 != (ProgressBar *)0x0) {
                ProgressBar::ProgressBar_set_Progress(pPVar7,value,(MethodInfo *)0x0);
                if (_UNK_? <= value) {
                  GamePassesShop_ActivateBar(this_02,(MethodInfo *)0x0);
                }
                else {
                  GamePassesShop_DeactivateBar(this_02,(MethodInfo *)0x0);
                }
                this_01 = (ProgressBarAndroid *)(this_02->fields).progressBar;
                if (this_01 != (ProgressBarAndroid *)0x0) {
                  fVar8 = ProgressBarAndroid::ProgressBarAndroid_get_Progress
                                     (this_01,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                    func_?();
                  }
                  func_?();
                  pSVar9 = (String *)func_?(&stack0xfffffff0,0);
                  str2 = (String *)func_?(&stack0xfffffff8,0);
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?(TypeInfo__System__String);
                  }
                  pSVar9 = mscorlib.dll::System::String::String_Concat_3
                                      (pSVar9,StringLiteral____,str2,(MethodInfo *)0x0);
                  pTVar10 = (this_02->fields).progressText;
                  if (pTVar10 != (Text *)0x0) {
                    (*(code *)(pTVar10->klass->vtable).set_text.method)
                              (pTVar10,pSVar9,
                               (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                    pPVar7 = (this_02->fields).disabledProgressBar;
                    iStack_11 = SUB84((double)((float)(int)pOVar5 * fVar8),0);
                    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                                       ((float)iStack_11 / (float)(int)pOVar5,
                                        (float)(int)((ulonglong)
                                                     (double)((float)(int)pOVar5 * fVar8) >> 0x20)
                                        / (float)(int)pOVar5,fVar1,(MethodInfo *)0x0);
                    if (pPVar7 != (ProgressBar *)0x0) {
                      ProgressBar::ProgressBar_set_Progress(pPVar7,fVar8,(MethodInfo *)0x0);
                      pGVar12 = (this_02->fields).progressBarDivider;
                      if (pGVar12 != (GameObject *)0x0) {
                        bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_activeSelf(pGVar12,(MethodInfo *)0x0);
                        if ((bVar13 == 0) && (0.0 < value)) {
                          pGVar12 = (this_02->fields).progressBarDivider;
                          if (pGVar12 == (GameObject *)0x0) goto code_?;
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar12,1,(MethodInfo *)0x0);
                        }
                        if (_UNK_? < fVar1) {
                          (this_02->fields).shouldLerp = 0;
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
    func_?(0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
code_?:
  if ((this_02->fields).delayedInit != 0) {
    GamePassesShop_DelayedInitialize(this_02,(MethodInfo *)0x0);
    (this_02->fields).delayedInit = 0;
  }
  return;
}


/* Void UpdateFreeTryUI() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateFreeTryUI
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
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
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__GamePassesManager);
          }
          pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar1 != (PlayerPlanetData *)0x0) {
            bVar5 = (pPVar1->fields).gamePassTier;
            this_00 = (this->fields).lockedTierIcon;
            if (this_00 != (Image *)0x0) {
              method_00 = (MethodInfo *)&UNK_?;
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
              bVar6 = (this->fields).gamePassTierDisplayed;
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,bVar2 < bVar6 && bVar5 < bVar6,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((this_01 != (MVNetworkGame *)0x0) &&
                   (this_02 = (GameTierShopRepository *)
                              HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                                        ((HoverCraftMotor *)this_01,(MethodInfo *)0x0),
                   this_02 != (GameTierShopRepository *)0x0)) {
                  pDVar8 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                                     (this_02,(uint)(this->fields).gamePassTierDisplayed,
                                      (MethodInfo *)0x0);
                  if ((bVar5 < 3) &&
                     ((((this->fields).gamePassTierDisplayed == (uint8_t)(bVar5 + 1) &&
                       (MVar7 != MVGameMode__Enum_Edit)) &&
                      (pDVar8 != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                                  *)0x0)))) {
                    if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVClientSettings);
                    }
                    value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                            ::
                            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                                      ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                        *)0x0,method_00);
                  }
                  else {
                    value = 0;
                  }
                  pGVar4 = (this->fields).freeTryUI;
                  if (pGVar4 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,value,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateHighestTierRewardShown(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateHighestTierRewardShown
               (GamePassTier__Enum newHighestTierRewardShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesShop);
  }
  if (TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown == 0) {
    if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
      func_?(TypeInfo__TierUnlockedPopupController);
    }
    TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown =
         (undefined1)newHighestTierRewardShown;
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown = 1;
  }
  return;
}


/* Void UpdateProgressBar(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateProgressBar
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar1->fields).gameMode == 0) {
    return;
  }
  pTVar2 = (this->fields).gameTierIconText;
  uVar3 = func_?(&stack0xfffffff4,0);
  if (pTVar2 == (Text *)0x0) goto code_?;
  (*(code *)(pTVar2->klass->vtable).set_text.method)
            (pTVar2,uVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
  bVar4 = GamePassesShop_IsProgressBarEnabled(this,(MethodInfo *)0x0);
  if (bVar4 == 0) {
code_?:
    pTVar2 = (this->fields).progressHeader;
    if (pTVar2 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,StringLiteral_Progress_Locked,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pPVar5 = (this->fields).progressBar;
    if ((pPVar5 == (ProgressBar *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pPVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    pPVar5 = (this->fields).disabledProgressBar;
    if ((pPVar5 == (ProgressBar *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pPVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,1,(MethodInfo *)0x0);
    pTVar2 = (this->fields).progressText;
    if ((pTVar2 == (Text *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar2,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    bVar4 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    pTVar2 = (this->fields).progressHeader;
    if (pTVar2 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,StringLiteral_Unlock_Progress);
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    in_stack_7 = TypeInfo__GamePassesManager;
    func_?();
  }
  if (cRam_? == '\0') {
    in_stack_7 = _UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    in_stack_7 = TypeInfo__GamePassesManager;
    func_?();
  }
  pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar8 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar8->fields).progressionGamePoints;
    gamePoints = playerGamePoints;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar8 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      gameTierShopStatus =
           MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
           PlayerTierStateCalculator_GetTierPricingState
                     (this_00,playerGamePoints,
                      CONCAT31((int3)((uint)in_stack_7 >> 8),(pPVar8->fields).gamePassTier),
                      (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
        GamePassesShop_ReduceGamePointsWithPreviousTierRequirements
                  (this,gamePassTierToDisplay,gamePoints,gameTierShopStatus,(MethodInfo *)0x0);
        if ((gameTierShopStatus ==
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) || (pOVar9 = (Object__Class *)
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                     , pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common
                                 ::GamePassTier,System::Object]::
                                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                            gameTierShopStatus,gamePassTierToDisplay,
                                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                           ), pOVar10 == (Object *)0x0)) goto code_?;
        pOVar11 = pOVar10[3].klass;
        if ((int)pOVar11 < (int)pOVar9) {
          pOVar9 = pOVar11;
        }
        pPVar5 = (this->fields).progressBar;
        fVar12 = (float)(int)pOVar9 / (float)(int)pOVar11;
        if (pPVar5 == (ProgressBar *)0x0) goto code_?;
        ProgressBar::ProgressBar_set_Progress(pPVar5,fVar12,(MethodInfo *)0x0);
        pPVar5 = (this->fields).disabledProgressBar;
        if (pPVar5 == (ProgressBar *)0x0) goto code_?;
        ProgressBar::ProgressBar_set_Progress(pPVar5,fVar12,(MethodInfo *)0x0);
        pOVar10 = (Object *)func_?();
        arg2 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar13 = mscorlib.dll::System::String::String_Concat_1
                            (pOVar10,(Object *)StringLiteral____,arg2,(MethodInfo *)0x0);
        pTVar2 = (this->fields).progressText;
        if (pTVar2 == (Text *)0x0) goto code_?;
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,pSVar13,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                  );
        pGVar6 = (this->fields).progressBarDivider;
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar6,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          this_01 = (ProgressBarAndroid *)(this->fields).progressBar;
          if (this_01 == (ProgressBarAndroid *)0x0) goto code_?;
          fVar12 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(this_01,(MethodInfo *)0x0);
          if (fVar12 <= 0.0) {
            pGVar6 = (this->fields).progressBarDivider;
            if (pGVar6 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,0,(MethodInfo *)0x0);
          }
        }
      }
      if ((gameTierShopStatus !=
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) && (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                          GamePassTier,System::Object]::
                          Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                    ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                     gameTierShopStatus,gamePassTierToDisplay,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar10 != (Object *)0x0)) {
        if (pOVar10[1].klass == (Object__Class *)0x0) {
          GamePassesShop_ActivateBar(this,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateTierCostTets() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateTierCostTets
               (GamePassesShop *this,MethodInfo *method)

{
  pGVar1 = this;
  iStack_2 = in_ECX;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar3 = (this->fields).unlockPriceText;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if ((pPVar4 != (PlayerTierStateCalculator *)0x0) &&
     (pDVar5 = (pPVar4->fields).progressionThresholds,
     pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                *)0x0)) {
    this = (GamePassesShop *)CONCAT31(this._1_3_,(this->fields).gamePassTierDisplayed);
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
             GamePassTier,System::Object]::
             Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                       ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar5,
                        (GamePassTier__Enum)this,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                       );
    if (pOVar6 != (Object *)0x0) {
      iStack_2 = 0;
      uVar7 = func_?(pOVar6 + 1);
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,uVar7,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if ((pPVar4 != (PlayerTierStateCalculator *)0x0) &&
           (pDVar5 = (pPVar4->fields).progressionThresholds,
           pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0)) {
          this = (GamePassesShop *)CONCAT31(this._1_3_,(pGVar1->fields).gamePassTierDisplayed);
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                   GamePassTier,System::Object]::
                   Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                             ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar5,
                              (GamePassTier__Enum)this,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar6 != (Object *)0x0) {
            iVar8 = func_?(pOVar6 + 2,0);
            pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
            if ((pPVar4 != (PlayerTierStateCalculator *)0x0) &&
               (pDVar5 = (pPVar4->fields).progressionThresholds,
               pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                          *)0x0)) {
              this = (GamePassesShop *)CONCAT31(this._1_3_,(pGVar1->fields).gamePassTierDisplayed);
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                       GamePassTier,System::Object]::
                       Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                 ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar5,
                                  (GamePassTier__Enum)this,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                 );
              if (pOVar6 != (Object *)0x0) {
                iVar9 = func_?(pOVar6 + 2,0);
                if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Mathf);
                }
                iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                                   ((float)iVar9 * _UNK_?,(MethodInfo *)0x0);
                pTVar3 = (pGVar1->fields).unlockTimeText;
                iStack_2 = iVar10 + iVar8;
                pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__String);
                }
                pSVar11 = mscorlib.dll::System::String::String_Concat
                                    (pOVar6,(Object *)StringLiteral__min_,(MethodInfo *)0x0);
                if (pTVar3 != (Text *)0x0) {
                  (*(code *)(pTVar3->klass->vtable).set_text.method)
                            (pTVar3,pSVar11,
                             (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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


/* Void <Exit>m__6(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop__Exit_m__6
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPlayerPlanetDataUpdated>m__5(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop__OnPlayerPlanetDataUpdated_m__5
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PreviewTier>m__3(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop__PreviewTier_m__3
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PreviewTier>m__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop__PreviewTier_m__4
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>m__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop__RewardedAdCallback_m__1
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_The_video_was_canceled__Your_Fre,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Video_canceled,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>m__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop__RewardedAdCallback_m__2
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    uVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    pSVar3 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar2,pSVar3);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <ShowAd>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop__ShowAd_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

