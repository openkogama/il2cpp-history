
/* Void Initialize(GamePassTier, Boolean, Boolean) */

void Assembly-CSharp.dll::TierUnlockedPopupController::TierUnlockedPopupController_Initialize
               (TierUnlockedPopupController *this,GamePassTier__Enum unlockedTier,bool wasPurchased,
               bool wasTempUnlocked,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).unlockedTier = (uint8_t)unlockedTier;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__List__);
  (this->fields).popupContentList = (List_1_TierUnlockedPopupContentBase_ *)this_01;
  if (wasTempUnlocked == 0) {
    original_00 = (this->fields).PopupContentTierUnlockedPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)original_00,
                        TierUnlockedPopupContentTierUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierUnlocked>_TierUnlockedPopupContentTierUnlocked_
                       );
    if (pXVar1 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar2,pTVar3,0,(MethodInfo *)0x0);
    pLVar4 = (this->fields).popupContentList;
    if (pLVar4 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    wasPurchased = 0xe3;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar4,(UIPushOption__Enum)pXVar1,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
    wasTempUnlocked = 0xf1;
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)(this->fields).PopupContentXPPrefab,
                        TierUnlockedPopupContentXP_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentXP>_TierUnlockedPopupContentXP_
                       );
    if (pXVar1 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar2,pTVar3,0,(MethodInfo *)0x0);
    in_stack_5 =
         (MethodInfo *)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    if (in_stack_5 == (MethodInfo *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)in_stack_5,0,(MethodInfo *)0x0);
  }
  else {
    original = (this->fields).popupContentTierTempUnlockPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)original,
                        TierUnlockedPopupContentTierTempUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierTempUnlocked>_TierUnlockedPopupContentTierTempUnlocked_
                       );
    if (pXVar1 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar2,pTVar3,0,(MethodInfo *)0x0);
  }
  unlockedTier = GamePassTier__Enum_Tier0;
  pLVar4 = (this->fields).popupContentList;
  if (pLVar4 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
            ((List_1_UIPushOption_ *)pLVar4,(UIPushOption__Enum)pXVar1,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
            );
  if (wasPurchased != 0) {
    original_01 = (this->fields).PopupContentCreatorSupportPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)original_01,
                        TierUnlockedPopupContentBase_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentBase>_TierUnlockedPopupContentBase_
                       );
    if (pXVar1 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar2,pTVar3,0,(MethodInfo *)0x0);
    unlockedTier = (GamePassTier__Enum)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    if ((GameObject *)unlockedTier == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)unlockedTier,0,(MethodInfo *)0x0);
    pLVar4 = (this->fields).popupContentList;
    if (pLVar4 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    wasTempUnlocked = 4;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar4,(UIPushOption__Enum)pXVar1,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
  }
  if (wasTempUnlocked != 0) {
    original_02 = (this->fields).popupContentTempUnlockInformationPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)original_02,
                        TierTempUnlockedInformationPopupContent_MethodInfo__UnityEngine__Object__Instantiate<TierTempUnlockedInformationPopupContent>_TierTempUnlockedInformationPopupContent_
                       );
    if (pXVar1 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar2,pTVar3,0,(MethodInfo *)0x0);
    unlockedTier = (GamePassTier__Enum)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    if ((GameObject *)unlockedTier == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)unlockedTier,0,(MethodInfo *)0x0);
    pLVar4 = (this->fields).popupContentList;
    if (pLVar4 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar4,(UIPushOption__Enum)pXVar1,
               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
              );
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 == (MVNetworkGame *)0x0) goto code_?;
  this_03 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_02,(MethodInfo *)0x0);
  if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_04 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                      (this_03,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
  if (this_04 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
  pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                     );
  if (0 < (int)pOVar6) {
    iVar7 = 0;
    while( true ) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if ((int)pOVar6 <= iVar7) break;
      pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,iVar7,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      iVar9 = func_?(pIVar8);
      if (iVar9 != 0) {
        pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,iVar7,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                           );
        method_00 = (MethodInfo *)&UNK_?;
        iVar9 = func_?(pIVar8,TypeInfo__MVAvatarSpawnRoleCreator);
        if (iVar9 == 0) goto code_?;
        pMVar10 = (MVAvatarSpawnRoleCreator *)func_?();
        GVar11 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(pMVar10,method_00);
        if ((char)GVar11 == (undefined1)unlockedTier) {
          original_03 = (this->fields).popupContentSpawnRolePrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          _wasPurchased =
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)original_03,
                          TierUnlockedPopupContentSpawnRole_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentSpawnRole>_TierUnlockedPopupContentSpawnRole_
                         );
          if (_wasPurchased == (XpBoostParticlePreviewer *)0x0) goto code_?;
          this_05 = (TierUnlockedPopupController *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)_wasPurchased,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (this_05 == (TierUnlockedPopupController *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    ((Transform *)this_05,pTVar2,0,(MethodInfo *)0x0);
          unlockedTier = (GamePassTier__Enum)&UNK_?;
          this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)_wasPurchased,(MethodInfo *)0x0);
          if (this_06 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_06,0,(MethodInfo *)0x0);
          iVar7 = 0;
          this = this_05;
          goto code_?;
        }
      }
      iVar7 = iVar7 + 1;
    }
  }
code_?:
  TierUnlockedPopupController_StartNewPopupContent(this_00,0,(MethodInfo *)0x0);
  pLVar4 = (this_00->fields).popupContentList;
  pIVar12 = (this_00->fields).Background;
  if (pLVar4 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,0,
                        MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                       );
    if ((pIVar8 != (IEventSystemHandler *)0x0) && (pIVar12 != (Image *)0x0)) {
      (*(code *)(pIVar12->klass->vtable).set_color.method)();
      if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown =
           (undefined1)unlockedTier;
      return;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
code_?:
  pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                     );
  if ((int)pOVar6 <= iVar7) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::IEventSystemHandler]
  ::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,iVar7,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_);
  iVar9 = func_?();
  if (iVar9 != 0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
    IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,iVar7,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_);
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    pMVar10 = (MVAvatarSpawnRoleCreator *)func_?();
    GVar11 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                       (pMVar10,(MethodInfo *)&UNK_?);
    if ((char)GVar11 == (undefined1)unlockedTier) {
      pGVar14 = (this_00->fields).spawnRoleInfoPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar14 = (GamePassesSpawnRoleRewardInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)pGVar14,
                           GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo_
                          );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
      IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,iVar7,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_)
      ;
      iVar9 = func_?();
      if (iVar9 == 0) goto code_?;
      pMVar10 = (MVAvatarSpawnRoleCreator *)func_?();
      unlockedTier = (GamePassTier__Enum)
                     MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                               (pMVar10,in_stack_5);
      in_stack_5 =
           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
      IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,iVar7,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_)
      ;
      if (pGVar14 == (GamePassesSpawnRoleRewardInfo *)0x0) goto code_?;
      pMVar10 = (MVAvatarSpawnRoleCreator *)func_?();
      GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                (pGVar14,iVar7,(GameObject *)unlockedTier,pMVar10,(GamePassTier__Enum)_wasPurchased
                 ,(MethodInfo *)pGVar14);
      _wasPurchased = (XpBoostParticlePreviewer *)0x0;
      this = (TierUnlockedPopupController *)&UNK_?;
      TierUnlockedPopupContentSpawnRole::TierUnlockedPopupContentSpawnRole_AddSpawnRoleRewardInfo
                ((TierUnlockedPopupContentSpawnRole *)unlockedTier,
                 (GamePassesSpawnRoleRewardInfo *)0x0,(MethodInfo *)0x0);
    }
  }
  iVar7 = iVar7 + 1;
  goto code_?;
code_?:
  pLVar4 = (this_00->fields).popupContentList;
  if (pLVar4 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
            ((List_1_UIPushOption_ *)pLVar4,(UIPushOption__Enum)this,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popupContentList;
  iVar1 = (this->fields).currentContentBeingShowed + 1;
  (this->fields).currentContentBeingShowed = iVar1;
  if (this_00 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Count__
                       );
    if ((int)pOVar2 <= iVar1) {
      (this->fields).isPoppingCountdownStarted = 1;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).popTime = (this->fields).fadeDuration + fVar3;
      return;
    }
    TierUnlockedPopupController_StartNewPopupContent
              (this,(this->fields).currentContentBeingShowed,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartNewPopupContent(Int32) */

void Assembly-CSharp.dll::TierUnlockedPopupController::
     TierUnlockedPopupController_StartNewPopupContent
               (TierUnlockedPopupController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).popupContentList;
  if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    this_00 = (Component_1 *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                        );
    if (this_00 != (Component_1 *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        pLVar1 = (this->fields).popupContentList;
        if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
          pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                             );
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)this,
                     MethodInfo__TierUnlockedPopupController__OnStartingToDissappear__,
                     (MethodInfo *)0x0);
          if (pIVar2 != (IEventSystemHandler *)0x0) {
            (*(code *)pIVar2->klass[1]._0.castClass)();
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).interpolateColorStartTime = fVar3;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).bounceEffectStartTime = fVar3;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            pLVar1 = (this->fields).popupContentList;
            if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
              pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                 );
              if (pIVar2 != (IEventSystemHandler *)0x0) {
                pAVar4 = (this->fields).bounceEffect;
                (this->fields).fadeEffectStartTime =
                     ((float)pIVar2[3].monitor - (this->fields).fadeDuration) + fVar3;
                fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0);
                if (pAVar4 != (AnimationCurve *)0x0) {
                  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                          AnimationCurve_Evaluate
                                    (pAVar4,(fVar3 - (this->fields).bounceEffectStartTime) /
                                            (this->fields).bounceEffectDuration,(MethodInfo *)0x0);
                  pLVar1 = (this->fields).popupContentList;
                  if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                    this_03 = (TierUnlockedPopupContentBase *)
                              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                              EventSystems::IEventSystemHandler]::
                              List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                         pLVar1,(this->fields).currentContentBeingShowed,
                                         MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                        );
                    if (this_03 != (TierUnlockedPopupContentBase *)0x0) {
                      TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateScale
                                (this_03,fVar3,(MethodInfo *)0x0);
                      pAVar4 = (this->fields).fadeEffect;
                      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                        ((MethodInfo *)0x0);
                      if (pAVar4 != (AnimationCurve *)0x0) {
                        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                AnimationCurve_Evaluate
                                          (pAVar4,(fVar3 - (this->fields).fadeEffectStartTime) /
                                                  (this->fields).fadeDuration,(MethodInfo *)0x0);
                        pLVar1 = (this->fields).popupContentList;
                        if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                          pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                   EventSystems::IEventSystemHandler]::
                                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                               *)pLVar1,(this->fields).currentContentBeingShowed,
                                              MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                             );
                          if ((pIVar2 != (IEventSystemHandler *)0x0) &&
                             ((CanvasGroup *)pIVar2[5].monitor != (CanvasGroup *)0x0)) {
                            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                            CanvasGroup_set_alpha
                                      ((CanvasGroup *)pIVar2[5].monitor,fVar3,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).isPoppingCountdownStarted != 0) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     (this->fields).popTime <= fVar1)) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
      func_?(TypeInfo__TierUnlockedPopupController);
    }
    if (TypeInfo__TierUnlockedPopupController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__TierUnlockedPopupController___Update_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
        func_?(TypeInfo__TierUnlockedPopupController);
      }
      TypeInfo__TierUnlockedPopupController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    }
    if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
      func_?(TypeInfo__TierUnlockedPopupController);
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__TierUnlockedPopupController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  pLVar2 = (this->fields).popupContentList;
  iVar3 = (this->fields).currentContentBeingShowed;
  if (pLVar2 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Count__
                       );
    if ((int)pOVar4 <= iVar3) {
      return;
    }
    if (0 < (this->fields).currentContentBeingShowed) {
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar1 = (this->fields).interpolateColorStartTime;
      pLVar2 = (this->fields).popupContentList;
      pIVar6 = (this->fields).Background;
      fVar7 = (this->fields).colorInterpolationDuration;
      if ((((pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) ||
           (pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                (this->fields).currentContentBeingShowed + -1,
                                MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                               ), pIVar8 == (IEventSystemHandler *)0x0)) ||
          (pLVar2 = (this->fields).popupContentList,
          pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0)) ||
         ((pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                               (this->fields).currentContentBeingShowed,
                               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                              ), pIVar8 == (IEventSystemHandler *)0x0 ||
          (UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                     ((Color *)&stack0xffffffe4,*(Color *)&pIVar8[1].monitor,
                      *(Color *)&pIVar8[1].monitor,(fVar5 - fVar1) / fVar7,(MethodInfo *)0x0),
          pIVar6 == (Image *)0x0)))) goto code_?;
      (*(code *)(pIVar6->klass->vtable).set_color.method)();
    }
    pAVar9 = (this->fields).bounceEffect;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pAVar9 != (AnimationCurve *)0x0) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar9,(fVar1 - (this->fields).bounceEffectStartTime) /
                                (this->fields).bounceEffectDuration,(MethodInfo *)0x0);
      pLVar2 = (this->fields).popupContentList;
      if ((pLVar2 != (List_1_TierUnlockedPopupContentBase_ *)0x0) &&
         (this_01 = (TierUnlockedPopupContentBase *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                               (this->fields).currentContentBeingShowed,
                               MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                              ), this_01 != (TierUnlockedPopupContentBase *)0x0)) {
        TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateScale
                  (this_01,fVar1,(MethodInfo *)0x0);
        pAVar9 = (this->fields).fadeEffect;
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (pAVar9 != (AnimationCurve *)0x0) {
          fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (pAVar9,(fVar1 - (this->fields).fadeEffectStartTime) /
                                    (this->fields).fadeDuration,(MethodInfo *)0x0);
          pLVar2 = (this->fields).popupContentList;
          if (((pLVar2 != (List_1_TierUnlockedPopupContentBase_ *)0x0) &&
              (pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                   (this->fields).currentContentBeingShowed,
                                   MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                                  ), pIVar8 != (IEventSystemHandler *)0x0)) &&
             ((CanvasGroup *)pIVar8[5].monitor != (CanvasGroup *)0x0)) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      ((CanvasGroup *)pIVar8[5].monitor,fVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <Update>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockedPopupController::TierUnlockedPopupController__Update_m__0
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

