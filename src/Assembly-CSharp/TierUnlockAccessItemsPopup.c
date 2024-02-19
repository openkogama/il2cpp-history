
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
  accessItemsData =
       (MethodInfo *)
       func_?(
                      TypeInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>
                      );
  pMStack_6 = accessItemsData;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)accessItemsData,
             MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__List__
            );
  pMStack_7 = accessItemsData;
  if (tierShopData != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff88,(Dictionary_2_System_UInt32_System_Object_ *)tierShopData,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                       );
    uStack_9 = 0;
    pMVar10 = (MethodInfo *)(pDVar8->_current).key;
    method_00 = (MethodInfo *)*(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pOStack_11 = (Object *)&stack0xffffff70;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffff70,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                        );
      if (bVar12 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffff70,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)accessItemsData;
      }
      iStack_13 = 0;
      pMStack_14 = method_00;
      pMStack_15 = method_00;
      pMStack_16 = pMVar10;
      if (method_00 == (MethodInfo *)0x0) break;
      for (; iStack_13 < (int)pMStack_15->name; iStack_13 = iStack_13 + 1) {
        tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                       0x5;
        RVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           pMStack_15,iStack_13,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        if ((RVar17 == (RegexCharClass_SingleRange)0x0) ||
           (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)((int)RVar17 + 0x58) ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))
        goto code_?;
        pMVar10 = (MethodInfo *)StringLiteral_team;
        method_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
        ;
        bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                            ((int)RVar17 + 0x58),(Object *)StringLiteral_team,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar12 != 0) {
          method_00 = (MethodInfo *)&UNK_?;
          RVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             pMStack_15,iStack_13,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                            );
          if (((RVar17 == (RegexCharClass_SingleRange)0x0) ||
              (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)((int)RVar17 + 0x58)
               == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) ||
             (TVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                                  ((int)RVar17 + 0x58),(Object *)StringLiteral_team,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ), TVar18.m_Index == 0)) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar18.m_Index + 0x20) !=
              (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
            auStack_19._4_4_ = TypeInfo__MV__WorldObject__MVTeam;
            auStack_19._0_4_ = TVar18;
            func_?();
            goto code_?;
          }
          auStack_19._0_4_ = &UNK_?;
          auStack_19._4_4_ = TVar18;
          puVar20 = (undefined4 *)func_?();
          tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                         *puVar20;
        }
        bVar12 = TierUnlockAccessItemsPopup_HasAccessItemDataTeamAndObjectType
                          (this,(MVTeam__Enum)tierShopData,
                           (MVWorldObjectDocumentationType__Enum)pMStack_16,
                           (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)accessItemsData,
                           (MethodInfo *)0x0);
        if (bVar12 == 0) {
          TierUnlockAccessItemsPopup_CreateAccessItemData
                    (&TStack_21,this,(MVTeam__Enum)tierShopData,
                     (MVWorldObjectDocumentationType__Enum)pMStack_16,(MethodInfo *)0x0);
          if (accessItemsData == (MethodInfo *)0x0) goto code_?;
          pMVar10 = (MethodInfo *)&UNK_?;
          func_?();
          method_00 = accessItemsData;
        }
        iVar22 = 0;
        if (pMStack_6 == (MethodInfo *)0x0) goto code_?;
        for (; iVar22 < (int)pMStack_6->name; iVar22 = iVar22 + 1) {
          pMVar10 = (MethodInfo *)(auStack_19 + 0xc);
          method_00 = pMStack_6;
          iVar23 = func_?();
          if (*(Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ **)
               (iVar23 + 8) == tierShopData) {
            pMVar10 = (MethodInfo *)auStack_19;
            method_00 = pMStack_6;
            puVar20 = (undefined4 *)func_?();
            if ((MethodInfo *)*puVar20 == pMStack_16) {
              method_00 = pMStack_6;
              iVar23 = func_?();
              pMStack_14 = *(MethodInfo **)(iVar23 + 4);
              if ((pMStack_15 == (MethodInfo *)0x0) ||
                 (RVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)pMStack_15,iStack_13,
                                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                    ), pMStack_14 == (MethodInfo *)0x0)) goto code_?;
              pMVar10 = 
              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              ;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pMStack_14,(Object *)RVar17,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                        );
            }
          }
        }
        accessItemsData = pMStack_6;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar24 = (code *)swi(3);
  pLVar25 = (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)(*pcVar24)();
  return pLVar25;
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
  pVVar1 = (VisualTreeAsset *)this;
  pLStack_2 = this_00;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    while( true ) {
      if ((this_00->fields)._size <= (int)tierShopData) {
        return;
      }
      original = (this->fields).tierUnlockedItemElementPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      unaff_ESI = (TierUnlockedItemElement *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                            );
      pVVar1 = (VisualTreeAsset *)this;
      if ((unaff_ESI == (TierUnlockedItemElement *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)unaff_ESI,(MethodInfo *)0x0),
         this_01 == (Transform *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(this->fields).itemElementContainer,0,(MethodInfo *)0x0);
      pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         (&VStack_4,this_00,(int32_t)tierShopData,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
      uStack_5._0_4_ = pVVar3->alias;
      uStack_5._4_4_ = pVVar3->path;
      pVVar1 = pVVar3->asset;
      pIVar6 = (unaff_ESI->fields).teamRequirementImage;
      (unaff_ESI->fields).team = (int32_t)pVVar1;
      if ((pIVar6 == (Image *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar6,(MethodInfo *)0x0), this_02 == (GameObject *)0x0)
         ) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
      pIVar6 = (unaff_ESI->fields).teamRequirementImage;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Styles);
        cRam_? = '\x01';
      }
      switch(pVVar1) {
      case (VisualTreeAsset *)0x0:
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        colorStyle = ColorStyle__Enum_TeamBlue;
        pCVar7 = &CStack_8;
        break;
      case (VisualTreeAsset *)0x1:
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        colorStyle = ColorStyle__Enum_TeamRed;
        pCVar7 = &CStack_9;
        break;
      case (VisualTreeAsset *)0x2:
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        colorStyle = ColorStyle__Enum_TeamGreen;
        pCVar7 = &CStack_10;
        break;
      case (VisualTreeAsset *)0x3:
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        colorStyle = ColorStyle__Enum_TeamYellow;
        pCVar7 = &CStack_11;
        break;
      default:
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pCVar7 = &CStack_12;
        goto code_?;
      case (VisualTreeAsset *)0x5:
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pCVar7 = &CStack_13;
code_?:
        colorStyle = ColorStyle__Enum_OffWhite;
      }
      pCVar7 = Styles::Styles_GetColor(pCVar7,colorStyle,(MethodInfo *)0x0);
      if (pIVar6 == (Image *)0x0) break;
      (*(code *)(pIVar6->klass->vtable).set_color.method)
                (pIVar6,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                 (pIVar6->klass->vtable).get_raycastTarget.methodPtr);
      this_00 = pLStack_2;
      pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         (&VStack_14,pLStack_2,(int32_t)tierShopData,
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
      uStack_15._0_4_ = pVVar3->alias;
      uStack_15._4_4_ = pVVar3->path;
      TierUnlockedItemElement::TierUnlockedItemElement_Initialize
                (unaff_ESI,(List_1_MVWorldObjectClient_ *)uStack_15._4_4_,(int32_t)tierShopData,
                 (MethodInfo *)0x0);
      tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                     ((int)&tierShopData->klass + 1);
    }
  }
  bVar16 = 0;
  pcRam_? = (char *)func_?();
  bVar17 = (byte)((int)pcRam_? >> 0x1f);
  bVar18 = CARRY1(bVar17,bVar17) || CARRY1(bVar17 * '\x02',bVar16);
  bVar19 = CARRY1(CStack_12.r._0_1_,extraout_CH);
  bVar16 = CStack_12.r._0_1_ + extraout_CH;
  CStack_12.r._0_1_ = bVar16 + bVar18;
  pcRam_? = pcRam_?;
  *pcRam_? = *pcRam_? + bVar17 + (bVar19 || CARRY1(bVar16,bVar18));
  *(undefined1 *)&pVVar1->klass = *(undefined1 *)&unaff_ESI->klass;
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

