
/* List`1[AccessoryDataClient] GetAccessoriesByCategoryId(AccessoryCategory) */

List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
          (AccessoryCategory__Enum category,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_AccessoryDataClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pLVar4 = (List_1_AccessoryDataClient_ *)
           func_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
  pAVar5 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar5 != (AccessoryShopDataClient *)0x0) &&
     (this = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(pAVar5->fields).accessoryDatas,
     this != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Values__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
      StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)&stack0xffffffd4,this_00,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_AccessoryDataClient>__GetEnumerator__
                );
      method_00 = (MethodInfo *)0x0;
      uStack_1 = 1;
      while( true ) {
        do {
          item = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
          ;
          bVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                            );
          if (bVar6 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffc4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = uStack_3;
            return pLVar4;
          }
          if (item == (MethodInfo *)0x0) goto code_?;
        } while (item->token != category);
        if (pLVar4 == (List_1_AccessoryDataClient_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar4,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                  );
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pLVar4 = (List_1_AccessoryDataClient_ *)(*pcVar7)();
  return pLVar4;
}


/* Dictionary`2[MV.Common.AccessoryCategory,List`1[AccessoryDataClient]] GetAccessoriesCategoryMap()
    */

Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap
          (MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Add_MV__Common__AccessoryCategory__System__Collections__Generic__List<AccessoryDataClient>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__ContainsKey_MV__Common__AccessoryCategory_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Item_MV__Common__AccessoryCategory_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_AccessoryDataClient>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    cRam_? = '\x01';
  }
  this_00 = (MethodInfo *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dictionary__
            );
  pAVar4 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar4 != (AccessoryShopDataClient *)0x0) &&
     (this = (Dictionary_2_System_UInt32_System_Object_ *)(pAVar4->fields).accessoryDatas,
     this != (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,this,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__GetEnumerator__
                       );
    uVar6 = *(undefined8 *)&(pDVar5->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffffb8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffb8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                   ,in_stack_8);
        *unaff_FS_OFFSET = uStack_3;
        return (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)this_00;
      }
      pOStack_9 = (Object *)uVar6;
      if ((pOStack_9 == (Object *)0x0) || (this_00 == (MethodInfo *)0x0)) break;
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,
                         (Int32Enum__Enum)pOStack_9[4].monitor,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__ContainsKey_MV__Common__AccessoryCategory_
                        );
      if (bVar7 == 0) {
        key = pOStack_9[4].monitor;
        this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  func_?();
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(Int32Enum__Enum)key,
                   (Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Add_MV__Common__AccessoryCategory__System__Collections__Generic__List<AccessoryDataClient>_
                  );
      }
      in_stack_8 = this_00;
      this_02 = (List_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                           (Int32Enum__Enum)pOStack_9[4].monitor,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Item_MV__Common__AccessoryCategory_
                          );
      if (this_02 == (List_1_System_Object_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_02,pOStack_9,
                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                );
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pDVar11 = (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)(*pcVar10)();
  return pDVar11;
}


/* AccessoryDataClient GetAccessoryDataByMetaDataId(Int32) */

AccessoryDataClient *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
          (int32_t id,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_AccessoryDataClient>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pAVar6 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar6 != (AccessoryShopDataClient *)0x0) &&
     (this = (Dictionary_2_System_UInt32_System_Object_ *)(pAVar6->fields).accessoryDatas,
     this != (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,this,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_10._dictionary = pDVar7->_dictionary;
    DStack_10._version = pDVar7->_version;
    DStack_10._index = pDVar7->_index;
    DStack_10._current.key = (pDVar7->_current).key;
    DStack_10._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_10;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_10,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                        );
      if (bVar12 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_10,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (AccessoryDataClient *)0x0;
      }
      pOVar13 = DStack_10._current.value;
      if ((AccessoryDataClient *)DStack_10._current.value == (AccessoryDataClient *)0x0) break;
      if ((((AccessoryDataClient__Fields *)((int)DStack_10._current.value + 8))->_).aMDID == id) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_10,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (AccessoryDataClient *)pOVar13;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pAVar15 = (AccessoryDataClient *)(*pcVar14)();
  return pAVar15;
}


/* AccessoryDataClient GetAccessoryDataByStreamingAssetId(Int32) */

AccessoryDataClient *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId
          (int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (pDVar2 = (pAVar1->fields).accessoryDatas,
     pDVar2 != (Dictionary_2_System_Int32_AccessoryDataClient_ *)0x0)) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__ContainsKey_int_
                      );
    if (bVar3 == 0) {
      return (AccessoryDataClient *)0x0;
    }
    pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
    if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
       (pDVar2 = (pAVar1->fields).accessoryDatas,
       pDVar2 != (Dictionary_2_System_Int32_AccessoryDataClient_ *)0x0)) {
      pAVar4 = (AccessoryDataClient *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,
                          (int32_t)
                          MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_
                         );
      return pAVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pAVar4 = (AccessoryDataClient *)(*pcVar6)();
  return pAVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    cRam_? = '\x01';
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  func_?(TypeInfo__AccessoryDataManager->static_fields,0);
  TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 0;
  TypeInfo__AccessoryDataManager->static_fields->accessoriesReady = 0;
  TypeInfo__AccessoryDataManager->static_fields->accessoryShopData = (AccessoryShopDataClient *)0x0;
  func_?(&TypeInfo__AccessoryDataManager->static_fields->accessoryShopData,0);
  return;
}


/* Void SetAccessoryData(String) */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetAccessoryData
               (String *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_);
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&
                    AccessoryShopDataClient_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AccessoryShopDataClient>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<System::String>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)0x0,
             MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_,(MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedAccessoryData
              (this,(Action_1_String_ *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar1 = (AccessoryShopDataClient *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)0x0,
                        AccessoryShopDataClient_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AccessoryShopDataClient>_System__String_
                       );
    TypeInfo__AccessoryDataManager->static_fields->accessoryShopData = pAVar1;
    func_?();
    TypeInfo__AccessoryDataManager->static_fields->accessoriesReady = 1;
    pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
    if (pUVar2 != (UnityAction *)0x0) {
      pvStack3 = (pUVar2->fields)._._.method;
      pvStack4 = (pUVar2->fields)._._.method_code;
      (*(pUVar2->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetReady() */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields;
  if (pAVar1->accessoriesReady == 0) {
    if (pAVar1->accessoriesRequested == 0) {
      this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                  (this,(MethodInfo *)0x0);
        TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
        return;
      }
      uVar2 = func_?(&puStack_3);
      func_?(uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar5 = pAVar1->readyCallback;
    if (pUVar5 != (UnityAction *)0x0) {
      puStack_3 = (pUVar5->fields)._._.method_code;
      (*(pUVar5->fields)._._.invoke_impl)();
    }
  }
  return;
}


/* Void SetToOwns(Int32) */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetToOwns
               (int32_t streamingAssetId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (this = (pAVar1->fields).accessoryDatas,
     this != (Dictionary_2_System_Int32_AccessoryDataClient_ *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this,streamingAssetId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_
                       );
    if (pOVar2 != (Object *)0x0) {
      *(undefined1 *)&pOVar2[6].klass = 1;
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* AccessoryBundleClient get_AccessoryBundleClient() */

AccessoryBundleClient *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if (pAVar1 != (AccessoryShopDataClient *)0x0) {
    return (pAVar1->fields).accessoryBundle;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pAVar5 = (AccessoryBundleClient *)(*pcVar4)();
  return pAVar5;
}


/* Int32 get_AccessoryBundleId() */

int32_t Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleId
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (pAVar2 = (pAVar1->fields).accessoryBundle, pAVar2 != (AccessoryBundleClient *)0x0)) {
    return (pAVar2->fields)._.accessoryBundleID;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

