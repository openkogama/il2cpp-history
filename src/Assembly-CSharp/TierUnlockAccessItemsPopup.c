
/* TierUnlockAccessItemsPopup+AccessItemData CreateAccessItemData(MVTeam,
   MVWorldObjectDocumentationType) */

TierUnlockAccessItemsPopup_AccessItemData *
Assembly-CSharp.dll::TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_CreateAccessItemData
          (TierUnlockAccessItemsPopup_AccessItemData *__return_storage_ptr__,
          TierUnlockAccessItemsPopup *this,MVTeam__Enum teamRequirement,
          MVWorldObjectDocumentationType__Enum objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  __return_storage_ptr__->type = objectType;
  __return_storage_ptr__->worldObjects = (List_1_MVWorldObjectClient_ *)this_00;
  __return_storage_ptr__->teamRequirement = teamRequirement;
  return __return_storage_ptr__;
}


/* List`1[TierUnlockAccessItemsPopup+AccessItemData]
   GetSortedData(Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

List_1_TierUnlockAccessItemsPopup_AccessItemData_ *
Assembly-CSharp.dll::TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_GetSortedData
          (TierUnlockAccessItemsPopup *this,
          Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff54;
  puVar5 = &stack0xffffff54;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6.fields._NextReward_k__BackingField.value = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  LStack_6.klass = (LevelRewardsManager__Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  LStack_6.fields._NextReward_k__BackingField.key = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffff54;
  puStack_4 = &stack0xffffff54;
  this_01 = (Action *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__List__
            );
  LStack_6.fields.OnRewardsReturned = this_01;
  if (tierShopData == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
code_?:
    func_?();
    func_?();
    pcVar9 = (code *)swi(3);
    pLVar10 = (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)(*pcVar9)();
    return pLVar10;
  }
  pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                      &stack0xffffff90,
                      (Dictionary_2_WinningConditionType_System_Object_ *)tierShopData,
                      MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                     );
  LStack_6.klass = (LevelRewardsManager__Class *)pDVar11->dictionary;
  LStack_6.monitor = (MonitorData *)pDVar11->next;
  LStack_6.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)pDVar11->stamp;
  LStack_6.fields._NextReward_k__BackingField.key = (pDVar11->current).key;
  LStack_6.fields._NextReward_k__BackingField.value = (int32_t)(pDVar11->current).value;
  uStack_1 = 0;
  do {
    cVar12 = func_?();
    if (cVar12 == '\0') {
      *puStack_8 = 0x135;
      uStack_1 = 0xffffffff;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)this_01;
    }
    KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                          );
    pLStack_13 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)func_?();
    tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
    while( true ) {
      this_00 = pLStack_13;
      if (pLStack_13 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)
      goto code_?;
      pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLStack_13,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if ((int)pOVar14 <= (int)tierShopData) break;
      MStack_15 = MVTeam__Enum_None;
      pPVar16 = (PrefabPool *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (this_00,(int32_t)tierShopData,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if ((pPVar16 == (PrefabPool *)0x0) ||
         (this_02 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar16,(MethodInfo *)0x0),
         this_02 ==
         (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
          *)0x0)) goto code_?;
      bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_02,StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar17 != 0) {
        pPVar16 = (PrefabPool *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_00,(int32_t)tierShopData,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                           );
        if ((pPVar16 == (PrefabPool *)0x0) ||
           (this_03 = (Dictionary_2_System_Type_Pool_ *)
                      PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar16,(MethodInfo *)0x0),
           this_03 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  (this_03,(Type *)StringLiteral_team,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar18 = (MVTeam__Enum *)func_?();
        MStack_15 = *pMVar18;
      }
      teamRequirement = MStack_15;
      MVar19 = func_?();
      bVar17 = TierUnlockAccessItemsPopup_HasAccessItemDataTeamAndObjectType
                        (this,teamRequirement,MVar19,
                         (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)this_01,
                         (MethodInfo *)0x0);
      if (bVar17 == 0) {
        MVar19 = func_?();
        pUVar20 = (UnitySynchronizationContext_WorkRequest *)
                  TierUnlockAccessItemsPopup_CreateAccessItemData
                            ((TierUnlockAccessItemsPopup_AccessItemData *)&stack0xffffff84,this,
                             teamRequirement,MVar19,(MethodInfo *)0x0);
        if (this_01 == (Action *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                  ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_01,*pUVar20,
                   MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__Add_TierUnlockAccessItemsPopup__AccessItemData_
                  );
      }
      iVar21 = 0;
      while( true ) {
        if (this_01 == (Action *)0x0) goto code_?;
        pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                           );
        if ((int)pOVar14 <= iVar21) break;
        iVar22 = func_?();
        if (*(MVTeam__Enum *)(iVar22 + 8) == MStack_15) {
          puVar23 = (undefined8 *)func_?();
          uVar24 = *puVar23;
          iVar22 = func_?();
          iStack_25 = (int)uVar24;
          if (iStack_25 == iVar22) {
            puVar23 = (undefined8 *)func_?();
            uVar24 = *puVar23;
            if (pLStack_13 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)
            goto code_?;
            item = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (pLStack_13,(int32_t)tierShopData,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                             );
            pLStack_26 = (List_1_UIPushOption_ *)((ulonglong)uVar24 >> 0x20);
            if (pLStack_26 == (List_1_UIPushOption_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      (pLStack_26,(UIPushOption__Enum)item,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      );
          }
        }
        iVar21 = iVar21 + 1;
      }
      tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                     ((int)&tierShopData->klass + 1);
    }
  } while( true );
}


/* Boolean HasAccessItemDataTeamAndObjectType(MVTeam, MVWorldObjectDocumentationType,
   List`1[TierUnlockAccessItemsPopup+AccessItemData]) */

bool Assembly-CSharp.dll::TierUnlockAccessItemsPopup::
     TierUnlockAccessItemsPopup_HasAccessItemDataTeamAndObjectType
               (TierUnlockAccessItemsPopup *this,MVTeam__Enum teamRequirement,
               MVWorldObjectDocumentationType__Enum objectType,
               List_1_TierUnlockAccessItemsPopup_AccessItemData_ *accessItemsData,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  if (accessItemsData != (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0) {
    do {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          accessItemsData,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                         );
      if ((int)pOVar1 <= index) {
        return 0;
      }
      pTVar2 = mscorlib.dll::System::Collections::Generic::
               List`1[TierUnlockAccessItemsPopup+AccessItemData]::
               List_1_TierUnlockAccessItemsPopup_AccessItemData__get_Item
                         (&TStack_3,accessItemsData,index,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
      uStack_4._0_4_ = pTVar2->type;
      uStack_4._4_4_ = pTVar2->worldObjects;
      if (pTVar2->teamRequirement == teamRequirement) {
        pMStack_5 = 
        MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
        ;
        pLStack_6 = accessItemsData;
        iStack_7 = index;
        puVar8 = (undefined8 *)func_?(&pLStack_6);
        uStack_9 = *puVar8;
        if ((MVWorldObjectDocumentationType__Enum)uStack_9 == objectType) {
          return 1;
        }
      }
      index = index + 1;
    } while( true );
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void Initialize(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_Initialize
               (TierUnlockAccessItemsPopup *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = TierUnlockAccessItemsPopup_GetSortedData(this,tierShopData,(MethodInfo *)0x0);
  tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
  if (this_00 != (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0) {
    while( true ) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                         );
      if ((int)pOVar1 <= (int)tierShopData) {
        return;
      }
      pTVar2 = (this->fields).tierUnlockedItemElementPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        pOStack_3 = TypeInfo__UnityEngine__Object;
        func_?();
      }
      pTVar2 = (TierUnlockedItemElement *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pTVar2,
                          TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                         );
      if ((pTVar2 == (TierUnlockedItemElement *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pTVar2,(MethodInfo *)0x0), this_01 == (Transform *)0x0
         )) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(this->fields).itemElementContainer,0,(MethodInfo *)0x0);
      puVar4 = (undefined8 *)
               func_?(auStack_5,this_00,tierShopData,
                               MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                              );
      uStack_6 = *puVar4;
      TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
                (pTVar2,*(MVTeam__Enum *)(puVar4 + 1),(MethodInfo *)0x0);
      puVar4 = (undefined8 *)
               func_?(&puStack_7,this_00,tierShopData,
                               MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                              );
      uStack_8._4_4_ = (List_1_MVWorldObjectClient_ *)((ulonglong)*puVar4 >> 0x20);
      tierShopItemData = uStack_8._4_4_;
      uStack_8 = *puVar4;
      TierUnlockedItemElement::TierUnlockedItemElement_Initialize
                (pTVar2,tierShopItemData,(int32_t)tierShopData,(MethodInfo *)0x0);
      tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                     ((int)&tierShopData->klass + 1);
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

