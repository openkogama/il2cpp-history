
/* Void Initialize(GamePassTier, Boolean, Boolean) */

void Assembly-CSharp.dll::TierUnlockedPopupController::TierUnlockedPopupController_Initialize
               (TierUnlockedPopupController *this,GamePassTier__Enum unlockedTier,bool wasPurchased,
               bool wasTempUnlocked,MethodInfo *method)

{
  this_00 = this;
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
  uVar1 = (uint8_t)unlockedTier;
  (this->fields).unlockedTier = uVar1;
  pLVar2 = (List_1_TierUnlockedPopupContentBase_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>
                          );
  if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__List__);
  (this->fields).popupContentList = pLVar2;
  func_?(&(this->fields).popupContentList,pLVar2);
  if (wasTempUnlocked == 0) {
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
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar2,(Object *)pCVar3,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
    pCVar3 = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)(this->fields).PopupContentXPPrefab,
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
    RVar7 = in_stack_8;
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
    RVar7 = in_stack_8;
  }
  pLVar2 = (this->fields).popupContentList;
  in_stack_8 = RVar7;
  if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
            ((List_1_System_Object_ *)pLVar2,(Object *)pCVar3,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
            );
  if (wasPurchased != 0) {
    original_01 = (this->fields).PopupContentCreatorSupportPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pCVar3 = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_01,
                        TierUnlockedPopupContentBase_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentBase>_TierUnlockedPopupContentBase_
                       );
    in_stack_8 = RVar7;
    if (pCVar3 == (Component *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (pCVar3,(MethodInfo *)0x0);
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    in_stack_8 = RVar7;
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar4,pTVar5,0,(MethodInfo *)0x0);
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (pCVar3,(MethodInfo *)0x0);
    in_stack_8 = RVar7;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).popupContentList;
    in_stack_8 = RVar7;
    if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar2,(Object *)pCVar3,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
  }
  if (wasTempUnlocked != 0) {
    original_02 = (this->fields).popupContentTempUnlockInformationPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pCVar3 = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_02,
                        TierTempUnlockedInformationPopupContent_MethodInfo__UnityEngine__Object__Instantiate<TierTempUnlockedInformationPopupContent>_TierTempUnlockedInformationPopupContent_
                       );
    in_stack_8 = RVar7;
    if (pCVar3 == (Component *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (pCVar3,(MethodInfo *)0x0);
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    in_stack_8 = RVar7;
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar4,pTVar5,0,(MethodInfo *)0x0);
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (pCVar3,(MethodInfo *)0x0);
    in_stack_8 = RVar7;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).popupContentList;
    in_stack_8 = RVar7;
    if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar2,(Object *)pCVar3,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  in_stack_8 = RVar7;
  if (((this_01 == (MVNetworkGame *)0x0) ||
      (this_02 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                           (this_01,(MethodInfo *)0x0), in_stack_8 = RVar7,
      this_02 == (MVWorldObjectClientManager *)0x0)) ||
     (pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (this_02,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
     in_stack_8 = RVar7,
     pLVar9 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
  goto code_?;
  if (0 < (pLVar9->fields)._size) {
    for (iVar10 = 0; in_stack_8 = RVar7, iVar10 < (pLVar9->fields)._size;
        iVar10 = iVar10 + 1) {
      RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar9,iVar10,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (((RVar11 != (RegexCharClass_SingleRange)0x0) &&
          (this = *(TierUnlockedPopupController **)RVar11,
          (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth <= this[1].fields.unlockedTier
          )) && (*(MVAvatarSpawnRoleCreator__Class **)
                  ((int)(this->fields).bounceEffectStartTime + -4 +
                  (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth * 4) ==
                 TypeInfo__MVAvatarSpawnRoleCreator)) {
        this = (TierUnlockedPopupController *)
               mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar9,iVar10,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
        in_stack_8 = RVar7;
        if ((RegexCharClass_SingleRange)this == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        iVar12 = func_?(this,TypeInfo__MVAvatarSpawnRoleCreator);
        in_stack_8 = (RegexCharClass_SingleRange)this;
        if (iVar12 == 0) goto code_?;
        pMVar13 = (MVAvatarSpawnRoleCreator *)
                  func_?(this,TypeInfo__MVAvatarSpawnRoleCreator);
        if (pMVar13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
        GVar14 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                           (pMVar13,(MethodInfo *)0x0);
        if ((uint8_t)GVar14 == uVar1) {
          original_03 = (this_00->fields).popupContentSpawnRolePrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pCVar3 = (Component *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)original_03,
                              TierUnlockedPopupContentSpawnRole_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentSpawnRole>_TierUnlockedPopupContentSpawnRole_
                             );
          in_stack_8 = RVar7;
          if (pCVar3 == (Component *)0x0) goto code_?;
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (pCVar3,(MethodInfo *)0x0);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          in_stack_8 = RVar7;
          if (pTVar4 == (Transform *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar4,pTVar5,0,(MethodInfo *)0x0);
          RVar11 = (RegexCharClass_SingleRange)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (pCVar3,(MethodInfo *)0x0);
          in_stack_8 = RVar7;
          if (RVar11 == (RegexCharClass_SingleRange)0x0) goto code_?;
          in_stack_15.First = 0;
          in_stack_15.Last = 0;
          RVar7.First = 0;
          RVar7.Last = 0;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)RVar11,0,(MethodInfo *)0x0);
          iVar10 = 0;
          goto code_?;
        }
      }
    }
  }
code_?:
  TierUnlockedPopupController_StartNewPopupContent(this_00,0,(MethodInfo *)0x0);
  pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this_00->fields).popupContentList;
  pIVar16 = (this_00->fields).Background;
  if (((pLVar9 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
      (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar9,0,
                           MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                          ), RVar7 != (RegexCharClass_SingleRange)0x0)) && (pIVar16 != (Image *)0x0)
     ) {
    (*(pIVar16->klass->vtable).set_color.methodPtr)
              (pIVar16,*(undefined4 *)((int)RVar7 + 0xc),*(undefined4 *)((int)RVar7 + 0x10),
               *(undefined4 *)((int)RVar7 + 0x14),*(undefined4 *)((int)RVar7 + 0x18),
               (pIVar16->klass->vtable).set_color.method);
    TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown = uVar1;
    return;
  }
code_?:
  func_?();
code_?:
  func_?(in_stack_8,TypeInfo__MVAvatarSpawnRoleCreator);
code_?:
  func_?(in_stack_15,TypeInfo__MVAvatarSpawnRoleCreator);
code_?:
  func_?(this,TypeInfo__MVAvatarSpawnRoleCreator);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
code_?:
  if ((pLVar9->fields)._size <= iVar10) goto code_?;
  RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (pLVar9,iVar10,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
  if (((RVar18 != (RegexCharClass_SingleRange)0x0) &&
      (this = *(TierUnlockedPopupController **)RVar18,
      (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth <= this[1].fields.unlockedTier))
     && (*(MVAvatarSpawnRoleCreator__Class **)
          ((int)(this->fields).bounceEffectStartTime + -4 +
          (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth * 4) ==
         TypeInfo__MVAvatarSpawnRoleCreator)) {
    this = (TierUnlockedPopupController *)
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (pLVar9,iVar10,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
    in_stack_8 = RVar11;
    if ((RegexCharClass_SingleRange)this == (RegexCharClass_SingleRange)0x0) goto code_?;
    RVar11 = (RegexCharClass_SingleRange)&UNK_?;
    RVar7 = (RegexCharClass_SingleRange)this;
    in_stack_15 = (RegexCharClass_SingleRange)TypeInfo__MVAvatarSpawnRoleCreator;
    iVar12 = func_?(this,TypeInfo__MVAvatarSpawnRoleCreator);
    in_stack_8 = (RegexCharClass_SingleRange)this;
    if (iVar12 == 0) goto code_?;
    pMVar13 = (MVAvatarSpawnRoleCreator *)func_?(this,TypeInfo__MVAvatarSpawnRoleCreator);
    if (pMVar13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    GVar14 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(pMVar13,(MethodInfo *)0x0);
    if ((uint8_t)GVar14 == uVar1) {
      original_04 = (this_00->fields).spawnRoleInfoPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this = (TierUnlockedPopupController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_04,
                        GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo_
                       );
      in_stack_15 =
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (pLVar9,iVar10,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
      in_stack_8 = RVar11;
      if (in_stack_15 == (RegexCharClass_SingleRange)0x0) goto code_?;
      in_stack_8 = in_stack_15;
      iVar12 = func_?(in_stack_15,TypeInfo__MVAvatarSpawnRoleCreator);
      in_stack_15 = in_stack_8;
      if (iVar12 == 0) goto code_?;
      pMVar13 = (MVAvatarSpawnRoleCreator *)
                func_?(in_stack_8,TypeInfo__MVAvatarSpawnRoleCreator);
      in_stack_15 = in_stack_8;
      if (pMVar13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
      in_stack_15 =
           (RegexCharClass_SingleRange)
           MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                     (pMVar13,(MethodInfo *)0x0);
      in_stack_8 =
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (pLVar9,iVar10,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
      if ((GamePassesSpawnRoleRewardInfo *)this == (GamePassesSpawnRoleRewardInfo *)0x0)
      goto code_?;
      pMVar13 = (MVAvatarSpawnRoleCreator *)0x0;
      RVar11 = in_stack_8;
      if ((in_stack_8 != (RegexCharClass_SingleRange)0x0) &&
         (pMVar13 = (MVAvatarSpawnRoleCreator *)
                    func_?(in_stack_8,TypeInfo__MVAvatarSpawnRoleCreator),
         RVar11 = in_stack_8, pMVar13 == (MVAvatarSpawnRoleCreator *)0x0))
      goto code_?;
      GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                ((GamePassesSpawnRoleRewardInfo *)this,iVar10,(GameObject *)in_stack_15,
                 pMVar13,unlockedTier,(MethodInfo *)0x0);
      TierUnlockedPopupContentSpawnRole::TierUnlockedPopupContentSpawnRole_AddSpawnRoleRewardInfo
                ((TierUnlockedPopupContentSpawnRole *)RVar7,(GamePassesSpawnRoleRewardInfo *)this,
                 (MethodInfo *)0x0);
    }
  }
  iVar10 = iVar10 + 1;
  goto code_?;
code_?:
  pLVar2 = (this_00->fields).popupContentList;
  in_stack_8 = RVar11;
  if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
            ((List_1_System_Object_ *)pLVar2,(Object *)RVar7,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
            );
  in_stack_8 = RVar11;
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
          if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_01,(Object *)this,
                       MethodInfo__TierUnlockedPopupController__OnStartingToDissappear__,
                       (MethodInfo *)0x0);
            if (RVar2 != (RegexCharClass_SingleRange)0x0) {
              (**(code **)(*(int *)RVar2 + 0xdc))
                        (RVar2,index,this_01,*(undefined4 *)(*(int *)RVar2 + 0xe0));
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
              if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (pLVar1,index_00,
                                   MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                  );
                if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                  pAVar4 = (this->fields).bounceEffect;
                  (this->fields).fadeEffectStartTime =
                       (*(float *)((int)RVar2 + 0x1c) - (this->fields).fadeDuration) + fVar3;
                  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                    ((MethodInfo *)0x0);
                  if (pAVar4 != (AnimationCurve *)0x0) {
                    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                            AnimationCurve_Evaluate
                                      (pAVar4,(fVar3 - (this->fields).bounceEffectStartTime) /
                                              (this->fields).bounceEffectDuration,(MethodInfo *)0x0)
                    ;
                    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).popupContentList;
                    if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) {
                      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (pLVar1,(this->fields).currentContentBeingShowed,
                                         MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                        );
                      if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                        if (*(Transform **)((int)RVar2 + 0x28) != (Transform *)0x0) {
                          value.y = fVar3;
                          value.x = fVar3;
                          value.z = 1.0;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localScale
                                    (*(Transform **)((int)RVar2 + 0x28),value,(MethodInfo *)0x0);
                          pAVar4 = (this->fields).fadeEffect;
                          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                            ((MethodInfo *)0x0);
                          if (pAVar4 != (AnimationCurve *)0x0) {
                            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                    AnimationCurve_Evaluate
                                              (pAVar4,(fVar3 - (this->fields).fadeEffectStartTime) /
                                                      (this->fields).fadeDuration,(MethodInfo *)0x0)
                            ;
                            pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)(this->fields).popupContentList;
                            if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                           *)0x0) {
                              RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Text::RegularExpressions::RegexCharClass+SingleRange]::
                                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                (pLVar1,(this->fields).currentContentBeingShowed,
                                                 MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                                );
                              if ((RVar2 != (RegexCharClass_SingleRange)0x0) &&
                                 (*(CanvasGroup **)((int)RVar2 + 0x2c) != (CanvasGroup *)0x0)) {
                                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                                CanvasGroup_set_alpha
                                          (*(CanvasGroup **)((int)RVar2 + 0x2c),fVar3,
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
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
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
    fVar9 = *(float *)((int)RVar8 + 0x10);
    fVar10 = *(float *)((int)RVar8 + 0x14);
    fVar11 = *(float *)((int)RVar8 + 0x18);
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
    (*(pIVar6->klass->vtable).set_color.methodPtr)
              (pIVar6,(*(float *)((int)RVar8 + 0xc) - (float)pMVar12) * fVar7 + (float)pMVar12,
               (*(float *)((int)RVar8 + 0x10) - fVar9) * fVar7 + fVar9,
               (*(float *)((int)RVar8 + 0x14) - fVar10) * fVar7 + fVar10,
               (*(float *)((int)RVar8 + 0x18) - fVar11) * fVar7 + fVar11,
               (pIVar6->klass->vtable).set_color.method);
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
       (*(Transform **)((int)RVar8 + 0x28) != (Transform *)0x0)) {
      value.y = fVar1;
      value.x = fVar1;
      value.z = 1.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (*(Transform **)((int)RVar8 + 0x28),value,(MethodInfo *)0x0);
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
           (*(CanvasGroup **)((int)RVar8 + 0x2c) != (CanvasGroup *)0x0)) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (*(CanvasGroup **)((int)RVar8 + 0x2c),(float)pMVar12,(MethodInfo *)0x0);
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

