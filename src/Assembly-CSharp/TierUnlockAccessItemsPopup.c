
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
  if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    __return_storage_ptr__->worldObjects = this_00;
    func_?(&__return_storage_ptr__->worldObjects,this_00);
    __return_storage_ptr__->teamRequirement = teamRequirement;
    __return_storage_ptr__->type = objectType;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pTVar2 = (TierUnlockAccessItemsPopup_AccessItemData *)(*pcVar1)();
  return pTVar2;
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
  puStack_4 = &stack0xffffff60;
  puVar5 = &stack0xffffff60;
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
  if ((pLVar6 != (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar6,
                 MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__List__
                ), pLStack_8 = pLVar6,
     tierShopData != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0)
     ) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffff84,(Dictionary_2_System_Object_System_Object_ *)tierShopData,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                       );
    uStack_10 = 0;
    pMVar11 = (MethodInfo *)(pDVar9->_current).key;
    uVar12 = *(ulonglong *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pOStack_13 = (Object *)&stack0xffffff6c;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                         &stack0xffffff6c,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                        );
      method_00 = (MethodInfo *)uVar12;
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffff6c,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return pLVar6;
      }
      iStack_15 = 0;
      pMStack_16 = method_00;
      pMStack_17 = method_00;
      pMStack_18 = pMVar11;
      if (method_00 == (MethodInfo *)0x0) break;
      for (; iStack_15 < (int)pMStack_17->name; iStack_15 = iStack_15 + 1) {
        MStack_19 = MVTeam__Enum_None;
        RVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           pMStack_17,iStack_15,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        if ((RVar20 == (RegexCharClass_SingleRange)0x0) ||
           (*(Dictionary_2_System_Object_GUILoginHandler_PlanetData_ **)((int)RVar20 + 0x58) ==
            (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) goto code_?;
        uVar12 = ZEXT48(
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
        pMVar11 = (MethodInfo *)StringLiteral_team;
        bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (*(Dictionary_2_System_Object_GUILoginHandler_PlanetData_ **)
                            ((int)RVar20 + 0x58),(Object *)StringLiteral_team,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar14 != 0) {
          uVar12 = CONCAT44(pMStack_17,&UNK_?);
          RVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             pMStack_17,iStack_15,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                            );
          if (((RVar20 == (RegexCharClass_SingleRange)0x0) ||
              (*(Dictionary_2_System_Object_System_Object_ **)((int)RVar20 + 0x58) ==
               (Dictionary_2_System_Object_System_Object_ *)0x0)) ||
             (pMVar21 = (MVTeam__Enum__Class *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (*(Dictionary_2_System_Object_System_Object_ **)((int)RVar20 + 0x58)
                                  ,(Object *)StringLiteral_team,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pMVar21 == (MVTeam__Enum__Class *)0x0)) goto code_?;
          if ((Il2CppClass *)((pMVar21->_0).image)->codeGenModule !=
              (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
            auStack_22._4_4_ = TypeInfo__MV__WorldObject__MVTeam;
            auStack_22._0_4_ = pMVar21;
            func_?();
            goto code_?;
          }
          auStack_22._0_4_ = &UNK_?;
          auStack_22._4_4_ = pMVar21;
          pMVar23 = (MVTeam__Enum *)func_?();
          MStack_19 = *pMVar23;
        }
        bVar14 = TierUnlockAccessItemsPopup_HasAccessItemDataTeamAndObjectType
                          (this,MStack_19,(MVWorldObjectDocumentationType__Enum)pMStack_18,pLVar6,
                           (MethodInfo *)0x0);
        if (bVar14 == 0) {
          uVar12 = CONCAT44(pMStack_18,MStack_19);
          pMVar11 = (MethodInfo *)this;
          TierUnlockAccessItemsPopup_CreateAccessItemData
                    (&TStack_24,this,MStack_19,(MVWorldObjectDocumentationType__Enum)pMStack_18,
                     (MethodInfo *)0x0);
          func_?();
        }
        for (iVar25 = 0; iVar25 < (pLStack_7->fields)._size; iVar25 = iVar25 + 1) {
          uVar12 = CONCAT44(iVar25,pLStack_7);
          pMVar11 = (MethodInfo *)(auStack_22 + 0xc);
          iVar26 = func_?();
          if (*(MVTeam__Enum *)(iVar26 + 8) == MStack_19) {
            pMVar11 = (MethodInfo *)auStack_22;
            uVar12 = CONCAT44(iVar25,pLStack_7);
            piVar27 = (int *)func_?();
            if ((MethodInfo *)*piVar27 == pMStack_18) {
              uVar12 = CONCAT44(iVar25,pLStack_7);
              iVar26 = func_?();
              pMStack_16 = *(MethodInfo **)(iVar26 + 4);
              if ((pMStack_17 == (MethodInfo *)0x0) ||
                 (RVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)pMStack_17,iStack_15,
                                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                    ), pMStack_16 == (MethodInfo *)0x0)) goto code_?;
              pMVar11 = 
              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              ;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pMStack_16,(Object *)RVar20,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                        );
            }
          }
        }
        pLVar6 = pLStack_7;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar28 = (code *)swi(3);
  pLVar6 = (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)(*pcVar28)();
  return pLVar6;
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
    pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                       (&UStack_4,
                        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                        accessItemsData,index,
                        MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                       );
    uStack_5._0_4_ = pUVar3->m_DelagateCallback;
    uStack_5._4_4_ = pUVar3->m_DelagateState;
    if (pUVar3->m_WaitHandle == (ManualResetEvent *)teamRequirement) {
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
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            TierUnlockAccessItemsPopup_GetSortedData(this,tierShopData,(MethodInfo *)0x0);
  tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
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
      pUVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
               UnitySynchronizationContext+WorkRequest]::
               List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                         (&UStack_3,this_00,(int32_t)tierShopData,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
      uStack_4._0_4_ = pUVar2->m_DelagateCallback;
      uStack_4._4_4_ = pUVar2->m_DelagateState;
      TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
                (pTVar1,(MVTeam__Enum)pUVar2->m_WaitHandle,(MethodInfo *)0x0);
      pUVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
               UnitySynchronizationContext+WorkRequest]::
               List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                         (&UStack_5,this_00,(int32_t)tierShopData,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
      uStack_6._0_4_ = pUVar2->m_DelagateCallback;
      uStack_6._4_4_ = pUVar2->m_DelagateState;
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

