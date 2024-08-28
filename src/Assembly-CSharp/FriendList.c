
/* Void AddFriend(Int32, Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::FriendList::FriendList_AddFriend
               (FriendList *this,int32_t friendID,int32_t profileID,int32_t friendProfileID,
               FriendStatus__Enum status,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&TypeInfo__Friend);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  FStack_6.klass = (Friend__Class *)0x0;
  FStack_6.monitor = (MonitorData *)0x0;
  FStack_6.fields.profileID = 0;
  FStack_6.fields.friendID = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar7 != (MVGameControllerBase *)0x0) &&
     (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
    method_00 = (MethodInfo *)&UNK_?;
    pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0);
    if (pMVar9 != (MVLocalPlayer *)0x0) {
      if (profileID == (pMVar9->fields)._._ProfileID_k__BackingField) {
        pDVar10 = (this->fields).friends;
        if (pDVar10 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
          bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pDVar10,friendID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            );
          if (bVar11 == 0) {
            FStack_6.monitor = (MonitorData *)TypeInfo__Friend;
            FStack_6.klass = (Friend__Class *)&UNK_?;
            value = (Object *)func_?();
            value[1].klass = (Object__Class *)0xffffffff;
            value[1].monitor = (MonitorData *)0xffffffff;
            value[2].klass = (Object__Class *)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (value,ExceptionArgument__Enum_obj,method_00);
            value[1].klass = (Object__Class *)friendProfileID;
            value[1].monitor = (MonitorData *)friendID;
            value[2].klass = (Object__Class *)status;
            pDVar10 = (this->fields).friends;
            if (pDVar10 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,friendID,value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                      );
          }
code_?:
          pFVar12 = (this->fields).OnFriendListUpdated;
          if (pFVar12 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FStack_6.klass = (pFVar12->fields)._._.method;
            (*(pFVar12->fields)._._.invoke_impl)();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar7 != (MVGameControllerBase *)0x0) &&
            (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
           (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
           pMVar9 != (MVLocalPlayer *)0x0)) {
          if (friendProfileID != (pMVar9->fields)._._ProfileID_k__BackingField)
          goto code_?;
          pDVar10 = (this->fields).pending;
          if (pDVar10 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
            bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar10,friendID,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                              );
            if (bVar11 != 0) goto code_?;
            FStack_6.monitor = (MonitorData *)TypeInfo__Friend;
            FStack_6.klass = (Friend__Class *)&UNK_?;
            DStack_13._currentValue = (Object *)func_?();
            Friend::Friend__ctor
                      ((Friend *)DStack_13._currentValue,friendID,profileID,status,(MethodInfo *)0x0
                      );
            pDVar10 = (this->fields).pending;
            if (pDVar10 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,friendID,
                         DStack_13._currentValue,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                        );
              pLVar14 = (this->fields).pendingNotifications;
              if (pLVar14 != (List_1_System_Int32_ *)0x0) {
                func_?(pLVar14,profileID,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar8 != (MVNetworkGame *)0x0) &&
                    (this_00 = (pMVar8->fields).playerContainer,
                    this_00 != (MVPlayerContainer *)0x0)) &&
                   (this_01 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                           (this_00,(MethodInfo *)0x0),
                   this_01 !=
                   (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)0x0)) {
                  pDVar15 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
                            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                      (&DStack_13,this_01,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                      );
                  FStack_6.klass = (Friend__Class *)pDVar15->_dictionary;
                  FStack_6.monitor = (MonitorData *)pDVar15->_index;
                  FStack_6.fields.profileID = pDVar15->_version;
                  FStack_6.fields.friendID = (int32_t)pDVar15->_currentValue;
                  DStack_13._version = 0;
                  uStack_1 = 1;
                  DStack_13._currentValue = (Object *)&FStack_6;
                  while (bVar11 = mscorlib.dll::System::Collections::Generic::
                                 Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                                 ::UInt32,System::Object]::
                                 Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                             *)&FStack_6,
                                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                           ), bVar11 != 0) {
                    if ((Object *)FStack_6.fields.friendID == (Object *)0x0) goto code_?;
                    if ((((Object *)(FStack_6.fields.friendID + 0x28))->monitor ==
                         (MonitorData *)profileID) &&
                       (pUVar16 = (this->fields).OnFriendRequestReceived,
                       pUVar16 != (UnityAction *)0x0)) {
                      (*(pUVar16->fields)._._.invoke_impl)();
                    }
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&FStack_6,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                             ,unaff_EBX);
                  uStack_1 = 0xffffffff;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Friend GetFriendByProfileID(Int32) */

Friend * Assembly-CSharp.dll::FriendList::FriendList_GetFriendByProfileID
                   (FriendList *this,int32_t profileID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                   );
    func_?(&
                    System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_Friend>__get_Value__
                   );
    func_?(&
                    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__0_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   );
    func_?(&
                    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   );
    func_?(&
                    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   );
    func_?(&
                    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   );
    func_?(&TypeInfo__FriendList____c__DisplayClass22_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FriendList____c__DisplayClass22_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)profileID;
    pDVar1 = (this->fields).friends;
    pPVar2 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             func_?(
                            TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                            );
    mscorlib.dll::System::Predicate`1[System::Xml::Schema::
    XmlSchemaObjectTable+XmlSchemaObjectEntry]::
    Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
              (pPVar2,value,
               MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__0_System__Collections__Generic__KeyValuePair<int,_Friend>_
               ,(MethodInfo *)0x0);
    bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_4
                      ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                       (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                        *)pPVar2,
                       bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                      );
    if (bVar3 == 0) {
      pDVar1 = (this->fields).pending;
      pPVar2 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
               func_?();
      mscorlib.dll::System::Predicate`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                (pPVar2,value,
                 MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
                 ,(MethodInfo *)0x0);
      pMVar4 = 
      bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
      ;
      bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_4
                        ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                          *)pPVar2,
                         bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                        );
      if (bVar3 == 0) {
        return (Friend *)0x0;
      }
      pDVar1 = (Dictionary_2_System_Int32_Friend_ *)(pMVar4->field7_0x1c).methodMetadataHandle;
      pPVar2 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
               func_?();
      pMVar4 = 
      MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
      ;
    }
    else {
      pDVar1 = (this->fields).friends;
      pPVar2 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
               func_?();
      pMVar4 = 
      MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
      ;
    }
    mscorlib.dll::System::Predicate`1[System::Xml::Schema::
    XmlSchemaObjectTable+XmlSchemaObjectEntry]::
    Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
              (pPVar2,value,pMVar4,(MethodInfo *)0x0);
    KVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_First_3
                      ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                       (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                        *)pPVar2,
                       System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                      );
    return (Friend *)KVar5.value;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pFVar7 = (Friend *)(*pcVar6)();
  return pFVar7;
}


/* Dictionary`2[System.Int32,MVPlayer] GetOnlineFriends() */

Dictionary_2_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::FriendList::FriendList_GetOnlineFriends(FriendList *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  pDStack_6 = this_01;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  pDStack_7 = this_01;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar8 != (MVGameControllerBase *)0x0) &&
      (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar9->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    method_00 = (Object__Class *)&UNK_?;
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_11,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      value = pDVar10->_currentValue;
      DStack_11._version = 0;
      uStack_1 = 1;
      DStack_11._currentValue = (Object *)&stack0xffffffc0;
      while( true ) {
        do {
          bVar12 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&stack0xffffffc0,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar12 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&stack0xffffffc0,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,(MethodInfo *)method_00);
            *unaff_FS_OFFSET = uStack_3;
            return (Dictionary_2_System_Int32_MVPlayer_ *)this_01;
          }
          if (value == (Object *)0x0) goto code_?;
          bVar12 = FriendList_IsFriend(this,(int32_t)value[5].monitor,(MethodInfo *)0x0);
          this_01 = pDStack_6;
        } while (bVar12 == 0);
        if (pDStack_6 ==
            (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )0x0) break;
        method_00 = value[6].klass;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDStack_6,(int32_t)method_00,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                  );
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  pDVar14 = (Dictionary_2_System_Int32_MVPlayer_ *)(*pcVar13)();
  return pDVar14;
}


/* Boolean IsFriend(Int32) */

bool Assembly-CSharp.dll::FriendList::FriendList_IsFriend
               (FriendList *this,int32_t profileID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                   );
    func_?(&
                    System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_Friend>__get_Value__
                   );
    func_?(&
                    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__0_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   );
    func_?(&
                    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   );
    func_?(&
                    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   );
    func_?(&
                    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   );
    func_?(&TypeInfo__FriendList____c__DisplayClass22_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FriendList____c__DisplayClass22_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  value[1].klass = (Object__Class *)profileID;
  pDVar3 = (this->fields).friends;
  pPVar4 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
           func_?(
                          TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                          );
  mscorlib.dll::System::Predicate`1[System::Xml::Schema::XmlSchemaObjectTable+XmlSchemaObjectEntry]
  ::Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
            (pPVar4,value,
             MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__0_System__Collections__Generic__KeyValuePair<int,_Friend>_
             ,(MethodInfo *)0x0);
  bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_4
                    ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                     (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                      *)pPVar4,
                     bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                    );
  if (bVar2 == 0) {
    pDVar3 = (this->fields).pending;
    pPVar4 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             func_?();
    mscorlib.dll::System::Predicate`1[System::Xml::Schema::
    XmlSchemaObjectTable+XmlSchemaObjectEntry]::
    Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
              (pPVar4,value,
               MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
               ,(MethodInfo *)0x0);
    pMVar5 = 
    bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
    ;
    bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_4
                      ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                       (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                        *)pPVar4,
                       bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar3 = (Dictionary_2_System_Int32_Friend_ *)(pMVar5->field7_0x1c).methodMetadataHandle;
    pPVar4 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             func_?();
    pMVar5 = 
    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
    ;
  }
  else {
    pDVar3 = (this->fields).friends;
    pPVar4 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             func_?();
    pMVar5 = 
    MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
    ;
  }
  mscorlib.dll::System::Predicate`1[System::Xml::Schema::XmlSchemaObjectTable+XmlSchemaObjectEntry]
  ::Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
            (pPVar4,value,pMVar5,(MethodInfo *)0x0);
  KVar6 = System.Core.dll::System::Linq::Enumerable::Enumerable_First_3
                    ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                     (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                      *)pPVar4,
                     System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                    );
  if (KVar6.value == (Object *)0x0) {
    return 0;
  }
  return KVar6.value[2].klass == (Object__Class *)0x2;
}


/* Void OnPlayersLoaded() */

void Assembly-CSharp.dll::FriendList::FriendList_OnPlayersLoaded
               (FriendList *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppGenericClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffffbc;
  pIVar5 = (Il2CppClass *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&MethodInfo__FriendList__OnPlayersLoaded__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 != (MVGameControllerBase *)0x0) &&
     (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
    DStack_8._currentValue = (Object *)(pMVar7->fields).playerContainer;
    if ((Il2CppClass *)DStack_8._currentValue != (Il2CppClass *)0x0) {
      source = (Action *)(((Il2CppClass *)DStack_8._currentValue)->this_arg).data.typeHandle;
      unaff_ESI = (Il2CppClass *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)unaff_ESI,(Object *)this,
                 MethodInfo__FriendList__OnPlayersLoaded__,(MethodInfo *)0x0);
      DStack_9._version =
           (int32_t)mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)source,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
      if ((Action__Class *)DStack_9._version == (Action__Class *)0x0) {
        DStack_9._currentValue = (Object *)0x0;
        (((Il2CppType *)((int)DStack_8._currentValue + 0x18))->data).dummy = (Action *)0x0;
      }
      else {
        pAVar10 = (Action__Class *)0x0;
        if ((Action__Class *)(((Action__Class *)DStack_9._version)->_0).image ==
            TypeInfo__System__Action) {
          pAVar10 = (Action__Class *)DStack_9._version;
        }
        if (pAVar10 == (Action__Class *)0x0) {
          DStack_9._currentValue = (Object *)TypeInfo__System__Action;
          DStack_9._index = (int32_t)&UNK_?;
          func_?();
          goto code_?;
        }
        (((Il2CppType *)((int)DStack_8._currentValue + 0x18))->data).dummy = pAVar10;
        DStack_9._currentValue = (Object *)(Action__Class *)0x0;
        if ((Action__Class *)(((Action__Class *)DStack_9._version)->_0).image ==
            TypeInfo__System__Action) {
          DStack_9._currentValue = (Object *)DStack_9._version;
        }
        unaff_ESI = (Il2CppClass *)TypeInfo__System__Action;
        if ((Action__Class *)DStack_9._currentValue == (Action__Class *)0x0) goto code_?;
      }
      DStack_9._version = (int)DStack_8._currentValue + 0x18;
      DStack_9._index = (int32_t)&UNK_?;
      func_?();
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar7->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        method_00 = (MethodInfo *)
                    MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                              (this_00,(MethodInfo *)0x0);
        if (method_00 != (MethodInfo *)0x0) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_8,
                              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)method_00,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                             );
          unaff_ESI = (Il2CppClass *)&DStack_9;
          DStack_9._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar11->_dictionary;
          DStack_9._index = pDVar11->_index;
          DStack_9._version = pDVar11->_version;
          DStack_9._currentValue = pDVar11->_currentValue;
          DStack_8._version = 0;
          pIStack_1 = (Il2CppGenericClass *)0x1;
          DStack_8._currentValue = (Object *)unaff_ESI;
          while( true ) {
            bVar12 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_9,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                              );
            if (bVar12 == 0) {
              pIStack_1 = (Il2CppGenericClass *)0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)unaff_ESI,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = pIStack_3;
              return;
            }
            this_01 = (this->fields).pendingNotifications;
            if (((Action__Class *)DStack_9._currentValue == (Action__Class *)0x0) ||
               (this_01 == (List_1_System_Int32_ *)0x0)) break;
            bVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__Contains
                              (this_01,(int32_t)((Il2CppClass_0 *)&(DStack_9._currentValue)->klass)
                                                ->parent,
                               MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
            if ((bVar12 != 0) &&
               (pUVar13 = (this->fields).OnFriendRequestReceived, pUVar13 != (UnityAction *)0x0)) {
              method_00 = (MethodInfo *)&UNK_?;
              (*(pUVar13->fields)._._.invoke_impl)();
            }
          }
        }
      }
    }
  }
code_?:
  uVar14 = func_?();
  DStack_9._version = func_?(uVar14);
code_?:
  DStack_9._index = (int32_t)&UNK_?;
  DStack_9._currentValue = (Object *)unaff_ESI;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RemoveFromPendingByProfileID(Int32) */

void Assembly-CSharp.dll::FriendList::FriendList_RemoveFromPendingByProfileID
               (FriendList *this,int32_t profileID,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Keys__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_Friend>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_03 = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  this_06 = this_03;
  this_04 = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).pending;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pMVar4 = this_04;
    this_05 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Keys__
                        );
    if (this_05 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
      StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)&stack0xffffffbc,
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)this_05,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_Friend>__GetEnumerator__
                );
      uStack_1 = 1;
      do {
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&stack0xffffffac,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__MoveNext__
                          );
        if (bVar5 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffac,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__Dispose__
                     ,in_stack_6);
          uStack_1 = 0xffffffff;
          if (this_03 != (MethodInfo *)0x0) goto code_?;
          goto code_?;
        }
        this_01 = (this->fields).pending;
        if (this_01 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,0xADDR,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                           );
        if (pOVar7 == (Object *)0x0) goto code_?;
      } while (pOVar7[1].klass != (Object__Class *)profileID);
      if (this_03 != (MethodInfo *)0x0) {
        this_06 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        func_?();
        if (this_04 != (MethodInfo *)0x0) {
          pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          func_?();
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffac,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__Dispose__
                     ,(MethodInfo *)profileID);
code_?:
          uStack_1 = 0xffffffff;
          for (iVar8 = 0; iVar8 < (int)this_06->name; iVar8 = iVar8 + 1) {
            this_06 = (MethodInfo *)(this->fields).pending;
            RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_03,iVar8,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
            if (this_06 == (MethodInfo *)0x0) goto code_?;
            pMVar4 = (MethodInfo *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)this_06,(int32_t)RVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                      );
          }
          iVar8 = 0;
          if (this_04 != (MethodInfo *)0x0) {
            while( true ) {
              if ((int)pMVar4->name <= iVar8) {
                pFVar10 = (this->fields).OnFriendListUpdated;
                if (pFVar10 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                  (*(pFVar10->fields)._._.invoke_impl)();
                }
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              this_02 = (this->fields).pendingNotifications;
              RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)this_04,iVar8,
                                 MethodInfo__System__Collections__Generic__List<int>__get_Item_int_)
              ;
              if (this_02 == (List_1_System_Int32_ *)0x0) break;
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Remove_int_;
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__Remove
                        (this_02,(int32_t)RVar9,
                         MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
              iVar8 = iVar8 + 1;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateFriend(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::FriendList::FriendList_UpdateFriend
               (FriendList *this,int32_t friendID,int32_t profileID,FriendStatus__Enum status,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&StringLiteral_Tried_updating_friend_that_doesn);
    func_?(&StringLiteral_Accepted_friend_request_from__0_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar7 != (MVGameControllerBase *)0x0) &&
      (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
     (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
     pMVar9 != (MVLocalPlayer *)0x0)) {
    if (profileID == (pMVar9->fields)._._ProfileID_k__BackingField) {
      pDVar10 = (this->fields).friends;
      if (pDVar10 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar10,friendID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                          );
        if (bVar11 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Tried_updating_friend_that_doesn,(MethodInfo *)0x0);
code_?:
          pFVar12 = (this->fields).OnFriendListUpdated;
          if (pFVar12 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (*(pFVar12->fields)._._.invoke_impl)();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (status == FriendStatus__Enum_Deleted) {
          pDVar10 = (this->fields).friends;
          if (pDVar10 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                      );
            goto code_?;
          }
        }
        else {
          pFVar13 = (this->fields).OnFriendRequestAccepted;
          if (pFVar13 != (FriendList_OnFriendRequestUpdated *)0x0) {
            pDVar10 = (this->fields).friends;
            if (pDVar10 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__get_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                      );
            (*(pFVar13->fields)._._.invoke_impl)();
          }
          pDVar10 = (this->fields).friends;
          if ((pDVar10 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
             (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ), pOVar14 != (Object *)0x0)) {
            pOVar14[2].klass = (Object__Class *)status;
            pDStack_15 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                      (pDStack_15,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            DStack_16._currentValue = (Object *)func_?();
            pDVar10 = (this->fields).friends;
            if ((pDVar10 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
               (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,friendID,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                    ), pDVar17 = pDStack_15,
               pDStack_15 !=
               (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_15,
                         DStack_16._currentValue,pOVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_FriendRequestAccepted,
                         (Dictionary_2_System_Object_System_Object_ *)pDVar17,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
    else {
      FriendList_RemoveFromPendingByProfileID(this,profileID,(MethodInfo *)0x0);
      if (status == FriendStatus__Enum_Deleted) goto code_?;
      pUVar18 = (this->fields).OnPendingCountChanged;
      if (pUVar18 != (UnityAction_1_System_Int32_ *)0x0) {
        this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)FriendList_GetOnlineFriends(this,(MethodInfo *)0x0);
        if (this_01 ==
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__)
        ;
        (*(pUVar18->fields)._._.invoke_impl)();
      }
      pDStack_15 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)0x0;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar7 != (MVGameControllerBase *)0x0) &&
          (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
         ((this_00 = (pMVar8->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
          (this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                  (this_00,(MethodInfo *)0x0),
          this_02 !=
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0)))) {
        pDVar19 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                  StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                            (&DStack_16,this_02,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                            );
        pDVar17 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)pDVar19->_currentValue;
        DStack_16._version = 0;
        uStack_1 = 1;
        DStack_16._currentValue = (Object *)&stack0xffffffc4;
        do {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&stack0xffffffc4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,(MethodInfo *)in_stack_6);
            uStack_1 = 0xffffffff;
            goto code_?;
          }
          if (pDVar17 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
        } while ((Object *)profileID != (pDVar17->fields)._syncRoot);
        uStack_1 = 0xffffffff;
        pDStack_15 = pDVar17;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        if (pDVar17 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          pSVar20 = TM::TM__(StringLiteral_Accepted_friend_request_from__0_,(MethodInfo *)0x0);
          pDVar21 = pDVar17[1].fields._entries;
          if (pDVar21 == (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                         *)0x0) goto code_?;
          pSVar20 = mscorlib.dll::System::String::String_Format
                              (pSVar20,(Object *)pDVar21->max_length,(MethodInfo *)0x0);
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_PushNotification
                    (pSVar20,(Sprite *)0x0,3,(MethodInfo *)0x0);
        }
code_?:
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar8 != (MVNetworkGame *)0x0) &&
           (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
           pMVar9 != (MVLocalPlayer *)0x0)) {
          FriendList_AddFriend
                    (this,friendID,(pMVar9->fields)._._ProfileID_k__BackingField,profileID,status,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar22 = func_?();
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* FriendList() */

void Assembly-CSharp.dll::FriendList::FriendList__ctor(FriendList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
    func_?(&MethodInfo__FriendList__OnPlayersLoaded__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__)
  ;
  ppDVar2 = &(this->fields).friends;
  *ppDVar2 = (Dictionary_2_System_Int32_Friend_ *)pDVar1;
  func_?(ppDVar2,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__)
  ;
  ppDVar2 = &(this->fields).pending;
  *ppDVar2 = (Dictionary_2_System_Int32_Friend_ *)pDVar1;
  func_?(ppDVar2,pDVar1);
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  method_00 = (MethodInfo *)&(this->fields).pendingNotifications;
  *(List_1_System_Int32_ **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar3 == (MVGameControllerBase *)0x0) ||
      (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
     (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 == (MVPlayerContainer *)0x0)) {
    uVar6 = func_?();
  }
  else {
    pAVar7 = (pMVar5->fields).OnPlayerListLoaded;
    ppAVar8 = &(pMVar5->fields).OnPlayerListLoaded;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)MethodInfo__FriendList__OnPlayersLoaded__,
               MethodInfo__FriendList__OnPlayersLoaded__,(MethodInfo *)0x0);
    pAVar7 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar7,(Delegate *)this_01,(MethodInfo *)0x0);
    uVar6 = CONCAT44(TypeInfo__System__Action,pAVar7);
    ppAStack9 = ppAVar8;
    if (pAVar7 == (Action *)0x0) {
      pAStack10 = (Action *)0x0;
      *ppAVar8 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar11 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar7;
    }
    if (pAVar11 != (Action *)0x0) {
      *ppAVar8 = pAVar11;
      uVar6 = CONCAT44(TypeInfo__System__Action,pAVar7);
      pAStack10 = (Action *)0x0;
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAStack10 = pAVar7;
      }
      if (pAStack10 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  _ppAStack00000028 = uVar6;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Friend get_Item(Int32) */

Friend * Assembly-CSharp.dll::FriendList::FriendList_get_Item
                   (FriendList *this,int32_t friendID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).friends;
  if (pDVar1 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).pending;
      if (pDVar1 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        return (Friend *)0x0;
      }
      pDVar1 = (this->fields).pending;
    }
    else {
      pDVar1 = (this->fields).friends;
    }
    if (pDVar1 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
      pFVar3 = (Friend *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,friendID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                         );
      return pFVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pFVar3 = (Friend *)(*pcVar4)();
  return pFVar3;
}

