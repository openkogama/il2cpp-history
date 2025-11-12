
/* TierUnlockAccessItemsPopup+AccessItemData CreateAccessItemData(MVTeam,
   MVWorldObjectDocumentationType) */

TierUnlockAccessItemsPopup_AccessItemData *
Assembly-CSharp.dll::TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_CreateAccessItemData
          (TierUnlockAccessItemsPopup_AccessItemData *__return_storage_ptr__,
          TierUnlockAccessItemsPopup *this,MVTeam__Enum teamRequirement,
          MVWorldObjectDocumentationType__Enum objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  __return_storage_ptr__->worldObjects = (List_1_MVWorldObjectClient_ *)0x0;
  *(undefined8 *)&__return_storage_ptr__->teamRequirement = 0;
  this_00 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  bVar1 = iRam_? != 0;
  __return_storage_ptr__->worldObjects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&__return_storage_ptr__->worldObjects >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  __return_storage_ptr__->teamRequirement = teamRequirement;
  __return_storage_ptr__->type = objectType;
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
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__Add_TierUnlockAccessItemsPopup__AccessItemData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>
                         );
  FUN_?(pLVar1,
                MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__List__
               );
  if (tierShopData == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    TStack_2.teamRequirement = 0;
    TStack_2._20_4_ = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TStack_2 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    TStack_2.worldObjects =
         (List_1_MVWorldObjectClient_ *)(ulonglong)(uint)(tierShopData->fields)._version;
    uStack_8 = 2;
    auStack_9._8_8_ = TStack_2.worldObjects;
    KStack_10.key = 0;
    KStack_10._4_4_ = 0;
    KStack_10.value = (Object *)0x0;
    uStack_11._0_4_ = 2;
    uStack_11._4_4_ = 0;
    uStack_12 = 0;
    puStack_13 = auStack_9;
    TStack_2._0_8_ = tierShopData;
    auStack_9._0_8_ = tierShopData;
    while( true ) {
      iVar14 = 0;
      bVar15 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         auStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                        );
      pOVar16 = KStack_10.value;
      if (bVar15 == 0) {
        return pLVar1;
      }
      KStack_17.key = KStack_10.key;
      KStack_17._4_4_ = KStack_10._4_4_;
      uVar18 = KStack_17._0_8_;
      KStack_17.value = KStack_10.value;
      if ((List_1_MVWorldObjectClient_ *)KStack_10.value == (List_1_MVWorldObjectClient_ *)0x0)
      break;
      KStack_17.key = KStack_10.key;
      objectType = KStack_17.key;
      KStack_17._0_8_ = uVar18;
      for (; uVar4 = 0,
          iVar14 < ((List_1_MVWorldObjectClient___Fields *)((longlong)pOVar16 + 0x10))->_size;
          iVar14 = iVar14 + 1) {
        teamRequirement = MVTeam__Enum_None;
        lVar19 = FUN_?(pOVar16,iVar14);
        if (lVar19 == 0) goto code_?;
        if (*(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              **)(lVar19 + 0x70) ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
        iVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (*(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              **)(lVar19 + 0x70),(Object *)StringLiteral_team,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        if (-1 < iVar20) {
          lVar19 = FUN_?(pOVar16,iVar14);
          if (lVar19 == 0) goto code_?;
          if (*(Dictionary_2_System_Object_System_Object_ **)(lVar19 + 0x70) ==
              (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (*(Dictionary_2_System_Object_System_Object_ **)(lVar19 + 0x70),
                               (Object *)StringLiteral_team,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pOVar21 == (Object *)0x0) goto code_?;
          if ((pOVar21->klass->_0).element_class !=
              (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) goto code_?;
          teamRequirement = *(MVTeam__Enum *)&pOVar21[1].klass;
        }
        bVar15 = TierUnlockAccessItemsPopup_HasAccessItemDataTeamAndObjectType
                          (this,teamRequirement,objectType,pLVar1,(MethodInfo *)0x0);
        if (bVar15 == 0) {
          pTVar22 = TierUnlockAccessItemsPopup_CreateAccessItemData
                              (&TStack_2,this,teamRequirement,objectType,(MethodInfo *)0x0);
          if (pLVar1 == (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0)
          goto code_?;
          KStack_17.key = pTVar22->type;
          KStack_17._4_4_ = *(undefined4 *)&pTVar22->field_0x4;
          KStack_17.value = (Object *)pTVar22->worldObjects;
          uStack_23 = *(undefined8 *)&pTVar22->teamRequirement;
          FUN_?(pLVar1,&KStack_17);
        }
        if (pLVar1 == (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0)
        goto code_?;
        for (; uVar24 = (pLVar1->fields)._size, (int)uVar4 < (int)uVar24; uVar4 = uVar4 + 1) {
          if (uVar24 <= uVar4) goto code_?;
          pTVar25 = (pLVar1->fields)._items;
          if (pTVar25 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0)
          goto code_?;
          if ((uint)pTVar25->max_length <= uVar4) goto code_?;
          pTVar22 = pTVar25->vector + (int)uVar4;
          KStack_17.key = pTVar22->type;
          KStack_17._4_4_ = *(undefined4 *)&pTVar22->field_0x4;
          KStack_17.value = (Object *)pTVar22->worldObjects;
          uStack_23 = *(undefined8 *)&pTVar25->vector[(int)uVar4].teamRequirement;
          if ((MVTeam__Enum)uStack_23 == teamRequirement) {
            if ((uint)(pLVar1->fields)._size <= uVar4) goto code_?;
            if (pTVar25 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0)
            goto code_?;
            if ((uint)pTVar25->max_length <= uVar4) goto code_?;
            TStack_2.teamRequirement = pTVar25->vector[(int)uVar4].teamRequirement;
            TStack_2._20_4_ = *(undefined4 *)&pTVar25->vector[(int)uVar4].field_0x14;
            if (pTVar25->vector[(int)uVar4].type == objectType) {
              if ((uint)(pLVar1->fields)._size <= uVar4) goto code_?;
              if (pTVar25 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0)
              goto code_?;
              if ((uint)pTVar25->max_length <= uVar4) goto code_?;
              pLVar26 = pTVar25->vector[(int)uVar4].worldObjects;
              TStack_2.teamRequirement = pTVar25->vector[(int)uVar4].teamRequirement;
              TStack_2._20_4_ = *(undefined4 *)&pTVar25->vector[(int)uVar4].field_0x14;
              if ((List_1_MVWorldObjectClient_ *)pOVar16 == (List_1_MVWorldObjectClient_ *)0x0)
              goto code_?;
              uVar18 = FUN_?(pOVar16,iVar14);
              if (pLVar26 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
              FUN_?(pLVar26,uVar18);
            }
          }
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar27 = (code *)swi(3);
  pLVar1 = (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)(*pcVar27)();
  return pLVar1;
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (accessItemsData != (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0) {
    uVar2 = (accessItemsData->fields)._size;
    lVar3 = 0;
    do {
      if ((int)uVar2 <= (int)uVar1) {
        return 0;
      }
      if (uVar2 <= uVar1) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      pTVar6 = (accessItemsData->fields)._items;
      if (pTVar6 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0) break;
      if ((uint)pTVar6->max_length <= uVar1) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      MStack_7 = (MVTeam__Enum)
                  *(undefined8 *)((longlong)&pTVar6->vector[0].teamRequirement + lVar3);
      if (MStack_7 == teamRequirement) {
        if (uVar2 <= uVar1) goto code_?;
        if (pTVar6 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0) break;
        if ((uint)pTVar6->max_length <= uVar1) goto code_?;
        if (*(MVWorldObjectDocumentationType__Enum *)((longlong)&pTVar6->vector[0].type + lVar3) ==
            objectType) {
          return 1;
        }
      }
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 0x18;
    } while( true );
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Initialize(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_Initialize
               (TierUnlockAccessItemsPopup *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                  ,CONCAT44(in_register_00000014,tier));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = TierUnlockAccessItemsPopup_GetSortedData(this,tierShopData,(MethodInfo *)0x0);
  itemIndex = 0;
  if (pLVar1 != (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0) {
    lVar2 = 0;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)itemIndex) {
        return;
      }
      pTVar3 = (this->fields).tierUnlockedItemElementPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar3 = (TierUnlockedItemElement *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pTVar3,
                          TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                         );
      if (pTVar3 == (TierUnlockedItemElement *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pTVar3->fields)._._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      pvVar4 = (void *)(*pcRam_?)(pvVar4);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar4,
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                      );
      pTVar7 = (this->fields).itemElementContainer;
      if (obj == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar8 = obj[1].klass;
      if (pOVar8 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pTVar7 == (Transform *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (pTVar7->fields)._._.m_CachedPtr;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pOVar8,pvVar4);
      if ((uint)(pLVar1->fields)._size <= itemIndex) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar9 = (pLVar1->fields)._items;
      if (pTVar9 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0) break;
      if ((uint)pTVar9->max_length <= itemIndex) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      MStack_10 = (MVTeam__Enum)
                  *(undefined8 *)((longlong)&pTVar9->vector[0].teamRequirement + lVar2);
      TierUnlockedItemElement::TierUnlockedItemElement_SetTeam(pTVar3,MStack_10,(MethodInfo *)0x0);
      if ((uint)(pLVar1->fields)._size <= itemIndex) goto code_?;
      pTVar9 = (pLVar1->fields)._items;
      if (pTVar9 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0) break;
      if ((uint)pTVar9->max_length <= itemIndex) goto code_?;
      TierUnlockedItemElement::TierUnlockedItemElement_Initialize
                (pTVar3,*(List_1_MVWorldObjectClient_ **)
                         ((longlong)&pTVar9->vector[0].worldObjects + lVar2),itemIndex,
                 (MethodInfo *)0x0);
      itemIndex = itemIndex + 1;
      lVar2 = lVar2 + 0x18;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

