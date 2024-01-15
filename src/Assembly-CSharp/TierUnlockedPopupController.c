
/* Void Initialize(GamePassTier, Boolean, Boolean) */

void Assembly-CSharp.dll::TierUnlockedPopupController::TierUnlockedPopupController_Initialize
               (TierUnlockedPopupController *this,GamePassTier__Enum unlockedTier,bool wasPurchased,
               bool wasTempUnlocked,MethodInfo *method)

{
  bVar1 = wasTempUnlocked;
  _wasTempUnlocked = (TierUnlockedPopupContentXP *)(uint)wasTempUnlocked;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>);
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&
                    GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo_
                   );
    func_?(&
                    TierTempUnlockedInformationPopupContent_MethodInfo__UnityEngine__Object__Instantiate<TierTempUnlockedInformationPopupContent>_TierTempUnlockedInformationPopupContent_
                   );
    func_?(&
                    TierUnlockedPopupContentBase_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentBase>_TierUnlockedPopupContentBase_
                   );
    func_?(&
                    TierUnlockedPopupContentSpawnRole_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentSpawnRole>_TierUnlockedPopupContentSpawnRole_
                   );
    func_?(&
                    TierUnlockedPopupContentTierTempUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierTempUnlocked>_TierUnlockedPopupContentTierTempUnlocked_
                   );
    func_?(&
                    TierUnlockedPopupContentTierUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierUnlocked>_TierUnlockedPopupContentTierUnlocked_
                   );
    func_?(&
                    TierUnlockedPopupContentXP_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentXP>_TierUnlockedPopupContentXP_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__TierUnlockedPopupController);
    cRam_? = '\x01';
  }
  (this->fields).unlockedTier = (uint8_t)unlockedTier;
  pLVar2 = (List_1_TierUnlockedPopupContentBase_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>
                          );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__List__);
  (this->fields).popupContentList = pLVar2;
  func_?(&(this->fields).popupContentList,pLVar2);
  if (bVar1 == 0) {
    original_00 = (this->fields).PopupContentTierUnlockedPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pCVar3 = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_00,
                        TierUnlockedPopupContentTierUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierUnlocked>_TierUnlockedPopupContentTierUnlocked_
                       );
    if (pCVar3 == (Component *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (pCVar3,(MethodInfo *)0x0);
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar4,pTVar5,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).popupContentList;
    if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    unlockedTier = (GamePassTier__Enum)&UNK_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar2,(Object *)pCVar3,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
    _wasTempUnlocked = (this->fields).PopupContentXPPrefab;
    wasPurchased = 0x24;
    pCVar3 = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)_wasTempUnlocked,
                        TierUnlockedPopupContentXP_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentXP>_TierUnlockedPopupContentXP_
                       );
    if (pCVar3 == (Component *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (pCVar3,(MethodInfo *)0x0);
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar4,pTVar5,0,(MethodInfo *)0x0);
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (pCVar3,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
  }
  else {
    original = (this->fields).popupContentTierTempUnlockPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pCVar3 = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        TierUnlockedPopupContentTierTempUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierTempUnlocked>_TierUnlockedPopupContentTierTempUnlocked_
                       );
    if (pCVar3 == (Component *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (pCVar3,(MethodInfo *)0x0);
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar4,pTVar5,0,(MethodInfo *)0x0);
  }
  pLVar2 = (this->fields).popupContentList;
  if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
            ((List_1_System_Object_ *)pLVar2,(Object *)pCVar3,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
            );
  if (wasPurchased != 0) {
    original_01 = (this->fields).PopupContentCreatorSupportPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    _wasTempUnlocked =
         (TierUnlockedPopupContentXP *)
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                   ((Object *)original_01,
                    TierUnlockedPopupContentBase_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentBase>_TierUnlockedPopupContentBase_
                   );
    if (_wasTempUnlocked == (TierUnlockedPopupContentXP *)0x0) goto code_?;
    unlockedTier = (GamePassTier__Enum)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)_wasTempUnlocked,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((Transform *)unlockedTier == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              ((Transform *)unlockedTier,pTVar4,0,(MethodInfo *)0x0);
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)_wasTempUnlocked,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).popupContentList;
    if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar2,(Object *)_wasTempUnlocked,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
  }
  if (wasTempUnlocked != 0) {
    original_02 = (this->fields).popupContentTempUnlockInformationPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar3 = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_02,
                        TierTempUnlockedInformationPopupContent_MethodInfo__UnityEngine__Object__Instantiate<TierTempUnlockedInformationPopupContent>_TierTempUnlockedInformationPopupContent_
                       );
    if (pCVar3 == (Component *)0x0) goto code_?;
    unlockedTier = (GamePassTier__Enum)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (pCVar3,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((Transform *)unlockedTier == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              ((Transform *)unlockedTier,pTVar4,0,(MethodInfo *)0x0);
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (pCVar3,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).popupContentList;
    if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar2,(Object *)pCVar3,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 == (MVNetworkGame *)0x0) ||
      (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                           (this_00,(MethodInfo *)0x0), this_01 == (MVWorldObjectClientManager *)0x0
      )) || (pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                                (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,
                                 (MethodInfo *)0x0),
            pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
  goto code_?;
  if (0 < (pLVar7->fields)._size) {
    for (iVar8 = 0; iVar8 < (pLVar7->fields)._size; iVar8 = iVar8 + 1) {
      RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar7,iVar8,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (((RVar9 != (RegexCharClass_SingleRange)0x0) &&
          ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <=
           *(byte *)(*(int *)RVar9 + 0xb8))) &&
         (*(MVAvatarSpawnRoleCreator__Class **)
           (*(int *)(*(int *)RVar9 + 100) + -4 +
           (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) ==
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar7,iVar8,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                           );
        if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
        iVar10 = func_?();
        if (iVar10 == 0) goto code_?;
        pMVar11 = (MVAvatarSpawnRoleCreator *)func_?();
        if (pMVar11 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
        GVar12 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                           (pMVar11,(MethodInfo *)0x0);
        if ((char)GVar12 == (undefined1)unlockedTier) {
          pTVar13 = (this->fields).popupContentSpawnRolePrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar13 = (TierUnlockedPopupContentSpawnRole *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pTVar13,
                               TierUnlockedPopupContentSpawnRole_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentSpawnRole>_TierUnlockedPopupContentSpawnRole_
                              );
          if (pTVar13 == (TierUnlockedPopupContentSpawnRole *)0x0) goto code_?;
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar13,(MethodInfo *)0x0);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar4 == (Transform *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar4,pTVar5,0,(MethodInfo *)0x0);
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar13,(MethodInfo *)0x0);
          if (pGVar6 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,0,(MethodInfo *)0x0);
          this_02 = (GamePassesSpawnRoleRewardInfo *)0x0;
          goto code_?;
        }
      }
    }
  }
code_?:
  TierUnlockedPopupController_StartNewPopupContent(this,0,(MethodInfo *)0x0);
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).popupContentList;
  pIVar14 = (this->fields).Background;
  if (((pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
      (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar7,0,
                           MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                          ), RVar9 != (RegexCharClass_SingleRange)0x0)) && (pIVar14 != (Image *)0x0)
     ) {
    (*(code *)(pIVar14->klass->vtable).set_color.method)();
    TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown =
         (uint8_t)unlockedTier;
    return;
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
code_?:
  GVar12 = unlockedTier;
  if ((pLVar7->fields)._size <= (int)this_02) goto code_?;
  RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (pLVar7,(int32_t)this_02,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
  if (((RVar9 != (RegexCharClass_SingleRange)0x0) &&
      ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <= *(byte *)(*(int *)RVar9 + 0xb8))
      ) && (*(MVAvatarSpawnRoleCreator__Class **)
             (*(int *)(*(int *)RVar9 + 100) + -4 +
             (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) ==
            TypeInfo__MVAvatarSpawnRoleCreator)) {
    RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar7,(int32_t)this_02,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                       );
    if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
    iVar8 = func_?();
    if (iVar8 == 0) goto code_?;
    pMVar11 = (MVAvatarSpawnRoleCreator *)func_?();
    if (pMVar11 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    GVar16 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(pMVar11,(MethodInfo *)0x0);
    if ((char)GVar16 == (undefined1)unlockedTier) {
      original_03 = (this->fields).spawnRoleInfoPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_03,
                           GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo_
                          );
      RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar7,(int32_t)this_02,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
      iVar8 = func_?();
      if (iVar8 == 0) goto code_?;
      pMVar11 = (MVAvatarSpawnRoleCreator *)func_?();
      if (pMVar11 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
      pGVar6 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                         (pMVar11,(MethodInfo *)0x0);
      RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar7,(int32_t)this_02,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar17 == (Object *)0x0) goto code_?;
      pMVar11 = (MVAvatarSpawnRoleCreator *)0x0;
      if ((RVar9 != (RegexCharClass_SingleRange)0x0) &&
         (pMVar11 = (MVAvatarSpawnRoleCreator *)func_?(),
         pMVar11 == (MVAvatarSpawnRoleCreator *)0x0)) goto code_?;
      unlockedTier = (GamePassTier__Enum)&UNK_?;
      GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                (this_02,(int32_t)this_02,pGVar6,pMVar11,GVar12,(MethodInfo *)0x0);
      TierUnlockedPopupContentSpawnRole::TierUnlockedPopupContentSpawnRole_AddSpawnRoleRewardInfo
                (pTVar13,this_02,(MethodInfo *)0x0);
    }
  }
  this_02 = (GamePassesSpawnRoleRewardInfo *)((int)&this_02->klass + 1);
  goto code_?;
code_?:
  pLVar2 = (this->fields).popupContentList;
  if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
            ((List_1_System_Object_ *)pLVar2,(Object *)pTVar13,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
            );
  goto code_?;
}


/* Void OnStartingToDissappear() */

void Assembly-CSharp.dll::TierUnlockedPopupController::
     TierUnlockedPopupController_OnStartingToDissappear
               (TierUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).popupContentList;
  index = (this->fields).currentContentBeingShowed + 1;
  (this->fields).currentContentBeingShowed = index;
  if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      (this->fields).isPoppingCountdownStarted = 1;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).popTime = fVar2 + (this->fields).fadeDuration;
      return;
    }
    TierUnlockedPopupController_StartNewPopupContent(this,index,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartNewPopupContent(Int32) */

void Assembly-CSharp.dll::TierUnlockedPopupController::
     TierUnlockedPopupController_StartNewPopupContent
               (TierUnlockedPopupController *this,int32_t index,MethodInfo *method)

{
  index_00 = index;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                   );
    func_?(&MethodInfo__TierUnlockedPopupController__OnStartingToDissappear__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).popupContentList;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                      );
    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)RVar2,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).popupContentList;
        if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                            );
          index = (int32_t)(this->fields).unlockedTier;
          this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,
                     MethodInfo__TierUnlockedPopupController__OnStartingToDissappear__,
                     (MethodInfo *)0x0);
          if (RVar2 != (RegexCharClass_SingleRange)0x0) {
            (**(code **)(*(int *)RVar2 + 0xe0))
                      (RVar2,index,this_01,*(undefined4 *)(*(int *)RVar2 + 0xe4));
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).interpolateColorStartTime = fVar3;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).bounceEffectStartTime = fVar3;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).popupContentList;
            if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (pLVar1,index_00,
                                 MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                );
              if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                pAVar4 = (this->fields).bounceEffect;
                (this->fields).fadeEffectStartTime =
                     (*(float *)((int)RVar2 + 0x20) - (this->fields).fadeDuration) + fVar3;
                fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0);
                if (pAVar4 != (AnimationCurve *)0x0) {
                  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                          AnimationCurve_Evaluate
                                    (pAVar4,(fVar3 - (this->fields).bounceEffectStartTime) /
                                            (this->fields).bounceEffectDuration,(MethodInfo *)0x0);
                  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields).popupContentList;
                  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar1,(this->fields).currentContentBeingShowed,
                                       MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                      );
                    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                      if (*(Transform **)((int)RVar2 + 0x2c) != (Transform *)0x0) {
                        value.y = fVar3;
                        value.x = fVar3;
                        value.z = 1.0;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                  (*(Transform **)((int)RVar2 + 0x2c),value,(MethodInfo *)0x0);
                        pAVar4 = (this->fields).fadeEffect;
                        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                          ((MethodInfo *)0x0);
                        if (pAVar4 != (AnimationCurve *)0x0) {
                          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                  AnimationCurve_Evaluate
                                            (pAVar4,(fVar3 - (this->fields).fadeEffectStartTime) /
                                                    (this->fields).fadeDuration,(MethodInfo *)0x0);
                          pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)(this->fields).popupContentList;
                          if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)0x0) {
                            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                    ::RegularExpressions::RegexCharClass+SingleRange]::
                                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                              (pLVar1,(this->fields).currentContentBeingShowed,
                                               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                              );
                            if ((RVar2 != (RegexCharClass_SingleRange)0x0) &&
                               (*(CanvasGroup **)((int)RVar2 + 0x30) != (CanvasGroup *)0x0)) {
                              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                              CanvasGroup_set_alpha
                                        (*(CanvasGroup **)((int)RVar2 + 0x30),fVar3,
                                         (MethodInfo *)0x0);
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
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TierUnlockedPopupController::TierUnlockedPopupController_Update
               (TierUnlockedPopupController *this,MethodInfo *method)

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
                    MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__TierUnlockedPopupController____c___Update_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockedPopupController____c);
    cRam_? = '\x01';
  }
  if (((this->fields).isPoppingCountdownStarted != 0) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     (this->fields).popTime <= fVar1)) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__TierUnlockedPopupController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TierUnlockedPopupController____c);
    }
    callbackFunction = TypeInfo__TierUnlockedPopupController____c->static_fields->__9__24_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__TierUnlockedPopupController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierUnlockedPopupController____c);
      }
      object = TypeInfo__TierUnlockedPopupController____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__TierUnlockedPopupController____c___Update_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockedPopupController____c->static_fields->__9__24_0 = callbackFunction;
      func_?(&TypeInfo__TierUnlockedPopupController____c->static_fields->__9__24_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  pLVar2 = (this->fields).popupContentList;
  if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  iVar3 = (this->fields).currentContentBeingShowed;
  if ((pLVar2->fields)._size <= iVar3) {
    return;
  }
  if (0 < iVar3) {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar1 = (this->fields).interpolateColorStartTime;
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).popupContentList;
    pIVar6 = (this->fields).Background;
    fVar7 = (this->fields).colorInterpolationDuration;
    if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar5,(this->fields).currentContentBeingShowed + -1,
                           MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                          ), RVar8 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    fVar9 = *(float *)((int)RVar8 + 0x14);
    fVar10 = *(float *)((int)RVar8 + 0x18);
    fVar11 = *(float *)((int)RVar8 + 0x1c);
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).popupContentList;
    if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (pMVar12 = 
        MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_,
       RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar5,(this->fields).currentContentBeingShowed,
                          MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                         ), RVar8 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    fVar7 = (fVar4 - fVar1) / fVar7;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (_UNK_? < fVar7) {
      fVar7 = _UNK_?;
    }
    if (pIVar6 == (Image *)0x0) goto code_?;
    (*(code *)(pIVar6->klass->vtable).set_color.method)
              (pIVar6,(*(float *)((int)RVar8 + 0x10) - (float)pMVar12) * fVar7 + (float)pMVar12,
               (*(float *)((int)RVar8 + 0x14) - fVar9) * fVar7 + fVar9,
               (*(float *)((int)RVar8 + 0x18) - fVar10) * fVar7 + fVar10,
               (*(float *)((int)RVar8 + 0x1c) - fVar11) * fVar7 + fVar11,
               (pIVar6->klass->vtable).get_raycastTarget.methodPtr);
  }
  pAVar13 = (this->fields).bounceEffect;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pAVar13 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar13,(fVar1 - (this->fields).bounceEffectStartTime) /
                              (this->fields).bounceEffectDuration,(MethodInfo *)0x0);
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).popupContentList;
    if (((pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
        (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar5,(this->fields).currentContentBeingShowed,
                            MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                           ), RVar8 != (RegexCharClass_SingleRange)0x0)) &&
       (*(Transform **)((int)RVar8 + 0x2c) != (Transform *)0x0)) {
      value.y = fVar1;
      value.x = fVar1;
      value.z = 1.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (*(Transform **)((int)RVar8 + 0x2c),value,(MethodInfo *)0x0);
      pAVar13 = (this->fields).fadeEffect;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (pAVar13 != (AnimationCurve *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                  (pAVar13,(fVar1 - (this->fields).fadeEffectStartTime) / (this->fields).fadeDuration
                   ,(MethodInfo *)0x0);
        pMVar12 = 
        MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_;
        pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).popupContentList;
        if (((pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
            (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar5,(this->fields).currentContentBeingShowed,
                                MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                               ), RVar8 != (RegexCharClass_SingleRange)0x0)) &&
           (*(CanvasGroup **)((int)RVar8 + 0x30) != (CanvasGroup *)0x0)) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (*(CanvasGroup **)((int)RVar8 + 0x30),(float)pMVar12,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

