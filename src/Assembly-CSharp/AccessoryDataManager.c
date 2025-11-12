
/* List`1[AccessoryDataClient] GetAccessoriesByCategoryId(AccessoryCategory) */

List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
          (AccessoryCategory__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_AccessoryDataClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_AccessoryDataClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_AccessoryDataClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
  pAVar2 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if (((pAVar2 == (AccessoryShopDataClient *)0x0) ||
      (this = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(pAVar2->fields).accessoryDatas,
      this == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0)) ||
     (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                         (this,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Values__
                         ),
     pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar4 = uStack_5;
code_?:
    uStack_5 = uVar4;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_6 = (pDVar3->fields)._dictionary;
    puStack_7 = (undefined4 *)0x0;
    uStack_8 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    if (uStack_6 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      pLVar1 = (List_1_AccessoryDataClient_ *)(*pcVar12)();
      return pLVar1;
    }
    iStack_13 = (uStack_6->fields)._version;
    uStack_8 = 0;
    uStack_6._4_4_ = (undefined4)((ulonglong)uStack_6 >> 0x20);
    uStack_14 = (undefined4)uStack_6;
    uStack_15 = uStack_6._4_4_;
    uStack_5 = 0;
    lStack_16 = 0;
    uStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_7 = &uStack_14;
    while (lVar17 = CONCAT44(uStack_15,uStack_14), lVar17 != 0) {
      if (iStack_13 != *(int *)(lVar17 + 0x2c)) goto code_?;
      do {
        if (lVar17 == 0) goto code_?;
        if (*(uint *)(lVar17 + 0x20) <= uStack_5) {
          return pLVar1;
        }
        lVar18 = *(longlong *)(lVar17 + 0x18);
        lVar19 = (longlong)(int)uStack_5;
        uVar4 = uStack_5 + 1;
        if (lVar18 == 0) goto code_?;
        bVar20 = *(uint *)(lVar18 + 0x18) <= uStack_5;
        uStack_5 = uVar4;
        if (bVar20) goto code_?;
      } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
      lStack_16 = *(longlong *)(lVar18 + (lVar19 + 2) * 0x18);
      func_?();
      if (lStack_16 == 0) goto code_?;
      if (*(AccessoryCategory__Enum *)(lStack_16 + 0x30) == category) {
        if (pLVar1 == (List_1_AccessoryDataClient_ *)0x0) goto code_?;
        FUN_?();
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  pLVar1 = (List_1_AccessoryDataClient_ *)(*pcVar12)();
  return pLVar1;
}


/* Dictionary`2[MV.Common.AccessoryCategory,List`1[AccessoryDataClient]] GetAccessoriesCategoryMap()
    */

Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Add_MV__Common__AccessoryCategory__System__Collections__Generic__List<AccessoryDataClient>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__ContainsKey_MV__Common__AccessoryCategory_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Item_MV__Common__AccessoryCategory_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_AccessoryDataClient>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dictionary__
            );
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 == (AccessoryShopDataClient *)0x0) ||
     (pDVar2 = (Dictionary_2_System_UInt32_System_Object_ *)(pAVar1->fields).accessoryDatas,
     pDVar2 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    uStack_3 = 0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    uStack_10 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_11 = 2;
    DStack_12._version = (undefined4)uStack_10;
    DStack_12._index = uStack_10._4_4_;
    DStack_12._current.key = 0;
    DStack_12._current._4_4_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_6 = pDVar2;
    DStack_12._dictionary = pDVar2;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                        );
      pOVar14 = DStack_12._current.value;
      if (bVar13 == 0) {
        return (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)this;
      }
      if (DStack_12._current.value == (Object *)0x0) break;
      if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
      goto code_?;
      iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this,
                         *(Int32Enum__Enum *)&DStack_12._current.value[3].klass,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__ContainsKey_MV__Common__AccessoryCategory_
                         ->klass->rgctx_data[0x21].method);
      if (iVar15 < 0) {
        key = *(Int32Enum__Enum *)&pOVar14[3].klass;
        this_00 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
        pDVar2 = (Dictionary_2_System_UInt32_System_Object_ *)
                  CONCAT71((int7)((ulonglong)pDVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this,key,(Object *)this_00,
                   (InsertionBehavior__Enum)pDVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Add_MV__Common__AccessoryCategory__System__Collections__Generic__List<AccessoryDataClient>_
                   ->klass->rgctx_data[0x22].method);
      }
      pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                          *(Int32Enum__Enum *)&pOVar14[3].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Item_MV__Common__AccessoryCategory_
                         );
      if (pOVar16 == (Object *)0x0) goto code_?;
      FUN_?(pOVar16,pOVar14);
    }
  }
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  pDVar18 = (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)(*pcVar17)();
  return pDVar18;
}


/* AccessoryDataClient GetAccessoryDataByMetaDataId(Int32) */

AccessoryDataClient *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
          (int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_AccessoryDataClient>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 == (AccessoryShopDataClient *)0x0) ||
     (pDVar2 = (Dictionary_2_System_UInt32_System_Object_ *)(pAVar1->fields).accessoryDatas,
     pDVar2 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
    FUN_?();
  }
  else {
    uStack_3 = 0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    uStack_10 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_11 = 2;
    DStack_12._version = (undefined4)uStack_10;
    DStack_12._index = uStack_10._4_4_;
    DStack_12._current.key = 0;
    DStack_12._current._4_4_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_6 = pDVar2;
    DStack_12._dictionary = pDVar2;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                        );
      if (bVar13 == 0) {
        return (AccessoryDataClient *)0x0;
      }
      if ((AccessoryDataClient *)DStack_12._current.value == (AccessoryDataClient *)0x0) break;
      if ((((AccessoryDataClient__Fields *)((longlong)DStack_12._current.value + 0x10))->_).aMDID ==
          id) {
        return (AccessoryDataClient *)DStack_12._current.value;
      }
    }
  }
  FUN_?();
  FUN_?();
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
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pAVar1->fields).accessoryDatas,
     pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar2,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar4 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_;
    if (iVar3 < 0) {
      return (AccessoryDataClient *)0x0;
    }
    pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
    if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
       (pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pAVar1->fields).accessoryDatas,
       pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
      uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar2,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar5 < 0) {
        uVar6 = func_?(pMVar4->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar6);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pAVar8 = (AccessoryDataClient *)(*pcVar7)();
        return pAVar8;
      }
      pDVar9 = (pDVar2->fields)._entries;
      if (pDVar9 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar5 < (uint)pDVar9->max_length) {
          return *(AccessoryDataClient **)&pDVar9->vector[(int)uVar5].value.y;
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        pAVar8 = (AccessoryDataClient *)(*pcVar7)();
        return pAVar8;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      pAVar8 = (AccessoryDataClient *)(*pcVar7)();
      return pAVar8;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pAVar8 = (AccessoryDataClient *)(*pcVar7)();
  return pAVar8;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 0;
  TypeInfo__AccessoryDataManager->static_fields->accessoriesReady = 0;
  TypeInfo__AccessoryDataManager->static_fields->accessoryShopData = (AccessoryShopDataClient *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__AccessoryDataManager->static_fields->accessoryShopData >>
                  0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Void SetAccessoryData(String) */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetAccessoryData
               (String *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AccessoryShopDataClient_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AccessoryShopDataClient>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).game;
    this = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this,(Object *)0x0,MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_
               ,(MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<System::String>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar3 = &(pMVar2->fields).ReceivedAccessoryData;
      source = (pMVar2->fields).ReceivedAccessoryData;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)source,(Delegate *)this,(MethodInfo *)0x0);
        pAVar5 = TypeInfo__System__Action<System::String>;
        if (pDVar4 == (Delegate *)0x0) {
          pAVar6 = (Action_1_String_ *)0x0;
        }
        else {
          pAVar6 = (Action_1_String_ *)
                    FUN_?(pDVar4,TypeInfo__System__Action<System::String>);
          if (pAVar6 == (Action_1_String_ *)0x0) {
            FUN_?(pDVar4,pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pAVar8 = *ppAVar3;
        bVar9 = source == pAVar8;
        if (bVar9) {
          *ppAVar3 = pAVar6;
          pAVar8 = source;
        }
        UNLOCK();
        pAVar6 = source;
        if (!bVar9) {
          pAVar6 = pAVar8;
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)ppAVar3 >> 0xc);
          lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar13 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        bVar9 = pAVar6 != source;
        source = pAVar6;
      } while (bVar9);
      if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar14 = (AccessoryShopDataClient *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (accessoryData,
                           AccessoryShopDataClient_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AccessoryShopDataClient>_System__String_
                          );
      TypeInfo__AccessoryDataManager->static_fields->accessoryShopData = pAVar14;
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&TypeInfo__AccessoryDataManager->static_fields->accessoryShopData
                       >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar9 = uVar12 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      TypeInfo__AccessoryDataManager->static_fields->accessoriesReady = 1;
      if (TypeInfo__AccessoryDataManager->static_fields->readyCallback != (UnityAction *)0x0) {
        pUVar15 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
        (*(pUVar15->fields)._._.invoke_impl)
                  ((pUVar15->fields)._._.method_code,(pUVar15->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetReady() */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
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
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (pAVar1->readyCallback != (UnityAction *)0x0) {
    pUVar3 = pAVar1->readyCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar3->fields)._._.invoke_impl)
              ((pUVar3->fields)._._.method_code,(pUVar3->fields)._._.method);
    return;
  }
  return;
}


/* Void SetToOwns(Int32) */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetToOwns
               (int32_t streamingAssetId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
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
      *(undefined1 *)&pOVar2[4].klass = 1;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AccessoryBundleClient get_AccessoryBundleClient() */

AccessoryBundleClient *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if (pAVar1 != (AccessoryShopDataClient *)0x0) {
    return (pAVar1->fields).accessoryBundle;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AccessoryBundleClient *)(*pcVar2)();
  return pAVar3;
}


/* Int32 get_AccessoryBundleId() */

int32_t Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleId
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (pAVar2 = (pAVar1->fields).accessoryBundle, pAVar2 != (AccessoryBundleClient *)0x0)) {
    return (pAVar2->fields)._.accessoryBundleID;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

