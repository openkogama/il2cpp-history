
/* TierUnlockAccessItemsPopup+AccessItemData CreateAccessItemData(MVTeam,
   MVWorldObjectDocumentationType) */

TierUnlockAccessItemsPopup_AccessItemData *
Assembly-CSharp.dll::TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_CreateAccessItemData
          (TierUnlockAccessItemsPopup_AccessItemData *__return_storage_ptr__,
          TierUnlockAccessItemsPopup *this,MVTeam__Enum teamRequirement,
          MVWorldObjectDocumentationType__Enum objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->type = 0;
  __return_storage_ptr__->worldObjects = (List_1_MVWorldObjectClient_ *)0x0;
  __return_storage_ptr__->teamRequirement = 0;
  this_00 = (List_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  __return_storage_ptr__->worldObjects = this_00;
  func_?(&__return_storage_ptr__->worldObjects,this_00);
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
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
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__Add_TierUnlockAccessItemsPopup__AccessItemData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>
                          );
  pLStack_7 = pLVar6;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__List__
            );
  pLStack_8 = pLVar6;
  if (tierShopData == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
code_?:
    func_?();
    func_?();
    pcVar9 = (code *)swi(3);
    pLVar6 = (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)(*pcVar9)();
    return pLVar6;
  }
  pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]::
           Dictionary_2_System_UInt32_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                      &stack0xffffff88,(Dictionary_2_System_UInt32_System_Object_ *)tierShopData,
                      MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                     );
  uStack_11 = 0;
  pSVar12 = (String *)(pDVar10->_current).key;
  uVar13 = *(ulonglong *)&(pDVar10->_current).value;
  uStack_1 = 1;
  pOStack_14 = (Object *)&stack0xffffff70;
  do {
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                       &stack0xffffff70,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                      );
    method_00 = (MethodInfo *)uVar13;
    if (bVar15 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffff70,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                 ,method_00);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar6;
    }
    iStack_16 = 0;
    pMStack_17 = method_00;
    pMStack_18 = method_00;
    pSStack_19 = pSVar12;
    while( true ) {
      if (pMStack_18 == (MethodInfo *)0x0) goto code_?;
      if ((int)pMStack_18->name <= iStack_16) break;
      tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x5;
      RVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         pMStack_18,iStack_16,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                        );
      if ((RVar20 == (RegexCharClass_SingleRange)0x0) ||
         (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)((int)RVar20 + 0x58) ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))
      goto code_?;
      uVar13 = ZEXT48(
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      pSVar12 = StringLiteral_team;
      bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                          ((int)RVar20 + 0x58),(Object *)StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar15 != 0) {
        uVar13 = CONCAT44(pMStack_18,&UNK_?);
        RVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           pMStack_18,iStack_16,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        if (((RVar20 == (RegexCharClass_SingleRange)0x0) ||
            (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)((int)RVar20 + 0x58)
             == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) ||
           (TVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                                ((int)RVar20 + 0x58),(Object *)StringLiteral_team,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), TVar21.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar21.m_Index + 0x20) !=
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          func_?();
          goto code_?;
        }
        puVar22 = (undefined4 *)func_?();
        tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                       *puVar22;
      }
      bVar15 = TierUnlockAccessItemsPopup_HasAccessItemDataTeamAndObjectType
                        (this,(MVTeam__Enum)tierShopData,
                         (MVWorldObjectDocumentationType__Enum)pSStack_19,pLVar6,(MethodInfo *)0x0);
      if (bVar15 == 0) {
        TierUnlockAccessItemsPopup_CreateAccessItemData
                  (&TStack_23,this,(MVTeam__Enum)tierShopData,
                   (MVWorldObjectDocumentationType__Enum)pSStack_19,(MethodInfo *)0x0);
        if (pLVar6 == (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0)
        goto code_?;
        func_?();
      }
      pSVar24 = (String *)0x0;
      while( true ) {
        if (pLStack_7 == (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0)
        goto code_?;
        if ((pLStack_7->fields)._size <= (int)pSVar24) break;
        iVar25 = func_?();
        if (*(Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ **)(iVar25 + 8)
            == tierShopData) {
          uVar13 = ZEXT48(
                         MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
          pSVar12 = pSVar24;
          piVar26 = (int *)func_?();
          if ((String *)*piVar26 == pSStack_19) {
            uVar13 = ZEXT48(
                           MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                           );
            pSVar12 = pSVar24;
            iVar25 = func_?();
            pMStack_17 = *(MethodInfo **)(iVar25 + 4);
            RVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               pMStack_18,iStack_16,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
            if (pMStack_17 == (MethodInfo *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pMStack_17,(Object *)RVar20,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      );
          }
        }
        pSVar24 = (String *)((int)&pSVar24->klass + 1);
      }
      iStack_16 = iStack_16 + 1;
      pLVar6 = pLStack_7;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  if (accessItemsData == (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  do {
    if ((accessItemsData->fields)._size <= index) {
      return 0;
    }
    pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_4,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)accessItemsData
                        ,index,
                        MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                       );
    uStack_5._0_4_ = pVVar3->alias;
    uStack_5._4_4_ = pVVar3->path;
    if (pVVar3->asset == (VisualTreeAsset *)teamRequirement) {
      apMStack_6[0] =
           MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
      ;
      pMVar7 = (MVWorldObjectDocumentationType__Enum *)
               func_?(apMStack_6,accessItemsData,index);
      if (*pMVar7 == objectType) {
        return 1;
      }
    }
    index = index + 1;
  } while( true );
}


/* Void Initialize(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_Initialize
               (TierUnlockAccessItemsPopup *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                   );
    func_?(&
                    TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            TierUnlockAccessItemsPopup_GetSortedData(this,tierShopData,(MethodInfo *)0x0);
  tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    while( true ) {
      if ((this_00->fields)._size <= (int)tierShopData) {
        return;
      }
      pTVar1 = (this->fields).tierUnlockedItemElementPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pTVar1 = (TierUnlockedItemElement *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pTVar1,
                          TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                         );
      if ((pTVar1 == (TierUnlockedItemElement *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pTVar1,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
      break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(this->fields).itemElementContainer,0,(MethodInfo *)0x0);
      pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         (&VStack_3,this_00,(int32_t)tierShopData,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
      uStack_4._0_4_ = pVVar2->alias;
      uStack_4._4_4_ = pVVar2->path;
      TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
                (pTVar1,(MVTeam__Enum)pVVar2->asset,(MethodInfo *)0x0);
      pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         (&VStack_5,this_00,(int32_t)tierShopData,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
      uStack_6._0_4_ = pVVar2->alias;
      uStack_6._4_4_ = pVVar2->path;
      TierUnlockedItemElement::TierUnlockedItemElement_Initialize
                (pTVar1,(List_1_MVWorldObjectClient_ *)uStack_6._4_4_,(int32_t)tierShopData,
                 (MethodInfo *)0x0);
      tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                     ((int)&tierShopData->klass + 1);
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

