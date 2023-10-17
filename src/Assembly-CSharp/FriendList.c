
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
  if (((pMVar7 != (MVGameControllerBase *)0x0) &&
      (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
     (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
     pMVar9 != (MVLocalPlayer *)0x0)) {
    if (profileID == (pMVar9->fields)._._ProfileID_k__BackingField) {
      pDVar10 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).friends;
      if (pDVar10 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar10,(Object *)friendID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                          );
        if (bVar11 != 0) goto code_?;
        FStack_6.monitor = (MonitorData *)TypeInfo__Friend;
        FStack_6.klass = (Friend__Class *)&UNK_?;
        value = (Object *)func_?();
        if (value != (Object *)0x0) {
          value[1].klass = (Object__Class *)0xffffffff;
          value[1].monitor = (MonitorData *)0xffffffff;
          value[2].klass = (Object__Class *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,method_00);
          value[1].klass = (Object__Class *)friendProfileID;
          value[1].monitor = (MonitorData *)friendID;
          value[2].klass = (Object__Class *)status;
          pDVar12 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).friends;
          if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar12,(Object *)friendID,value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                      );
            goto code_?;
          }
        }
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
        if (friendProfileID != (pMVar9->fields)._._ProfileID_k__BackingField) {
code_?:
          if ((this->fields).OnFriendListUpdated != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            pFVar13 = (this->fields).OnFriendListUpdated;
            FStack_6.klass = (pFVar13->fields)._._.method;
            (*(pFVar13->fields)._._.invoke_impl)();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pDVar10 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).pending;
        if (pDVar10 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (pDVar10,(Object *)friendID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            );
          if (bVar11 != 0) goto code_?;
          FStack_6.monitor = (MonitorData *)TypeInfo__Friend;
          FStack_6.klass = (Friend__Class *)&UNK_?;
          DStack_14._currentValue = (Object *)func_?();
          if ((Friend *)DStack_14._currentValue != (Friend *)0x0) {
            Friend::Friend__ctor
                      ((Friend *)DStack_14._currentValue,friendID,profileID,status,(MethodInfo *)0x0
                      );
            pDVar12 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).pending;
            if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar12,(Object *)friendID,DStack_14._currentValue,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                        );
              pLVar15 = (this->fields).pendingNotifications;
              if (pLVar15 != (List_1_System_Int32_ *)0x0) {
                func_?(pLVar15,profileID,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar8 != (MVNetworkGame *)0x0) &&
                    (this_00 = (pMVar8->fields).playerContainer,
                    this_00 != (MVPlayerContainer *)0x0)) &&
                   (this_01 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                           (this_00,(MethodInfo *)0x0),
                   this_01 !=
                   (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)0x0)) {
                  pDVar16 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[System::Text::
                            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                      (&DStack_14,this_01,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                      );
                  FStack_6.klass = (Friend__Class *)pDVar16->_dictionary;
                  FStack_6.monitor = (MonitorData *)pDVar16->_index;
                  FStack_6.fields.profileID = pDVar16->_version;
                  FStack_6.fields.friendID = (int32_t)pDVar16->_currentValue;
                  DStack_14._version = 0;
                  uStack_1 = 1;
                  DStack_14._currentValue = (Object *)&FStack_6;
                  while (bVar11 = mscorlib.dll::System::Collections::Generic::
                                 Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                                 ::Object,System::Object]::
                                 Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                             *)&FStack_6,
                                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                           ), bVar11 != 0) {
                    if ((Object *)FStack_6.fields.friendID == (Object *)0x0) goto code_?;
                    if ((((Object *)(FStack_6.fields.friendID + 0x28))->monitor ==
                         (MonitorData *)profileID) &&
                       ((this->fields).OnFriendRequestReceived != (UnityAction *)0x0)) {
                      (*(((this->fields).OnFriendRequestReceived)->fields)._._.invoke_impl)();
                    }
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  value = (Object *)func_?(TypeInfo__FriendList____c__DisplayClass22_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)profileID;
    pDVar1 = (this->fields).friends;
    pPVar2 = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
             func_?(
                            TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                            );
    if (pPVar2 != (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
      mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
      Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                (pPVar2,value,
                 MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__0_System__Collections__Generic__KeyValuePair<int,_Friend>_
                 ,(MethodInfo *)0x0);
      bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_2
                        ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                          *)pPVar2,
                         bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                        );
      if (bVar3 == 0) {
        pDVar1 = (this->fields).pending;
        pPVar2 = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)func_?();
        if (pPVar2 == (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
        Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                  (pPVar2,value,
                   MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
                   ,(MethodInfo *)0x0);
        bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_2
                          ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                            *)pPVar2,
                           bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                          );
        if (bVar3 == 0) {
          return (Friend *)0x0;
        }
        pDVar1 = (this->fields).pending;
        pPVar2 = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)func_?();
        method_1 = 
        MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
        ;
      }
      else {
        pDVar1 = (this->fields).friends;
        pPVar2 = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)func_?();
        method_1 = 
        MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
        ;
      }
      if (pPVar2 != (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
        mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
        Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                  (pPVar2,value,method_1,(MethodInfo *)0x0);
        KVar4 = System.Core.dll::System::Linq::Enumerable::Enumerable_First_2
                          ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                            *)pPVar2,
                           System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                          );
        return (Friend *)KVar4.value;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pFVar6 = (Friend *)(*pcVar5)();
  return pFVar6;
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
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  pDStack_6 = this_01;
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
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
      this_02 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0)
      ;
      if (this_02 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        pDVar10 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
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
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                *)&stack0xffffffc0,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                              );
            if (bVar12 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&stack0xffffffc0,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,(MethodInfo *)method_00);
              *unaff_FS_OFFSET = uStack_3;
              return (Dictionary_2_System_Int32_MVPlayer_ *)this_01;
            }
            if (value == (Object *)0x0) goto code_?;
            pFVar13 = FriendList_GetFriendByProfileID
                               (this,(int32_t)value[5].monitor,(MethodInfo *)0x0);
            this_01 = pDStack_6;
          } while ((pFVar13 == (Friend *)0x0) || ((pFVar13->fields).status != 2));
          if (value == (Object *)0x0) break;
          method_00 = value[6].klass;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDStack_6,(Object *)method_00,value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                    );
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  pDVar15 = (Dictionary_2_System_Int32_MVPlayer_ *)(*pcVar14)();
  return pDVar15;
}


/* Boolean IsFriend(Int32) */

bool Assembly-CSharp.dll::FriendList::FriendList_IsFriend
               (FriendList *this,int32_t profileID,MethodInfo *method)

{
  pFVar1 = FriendList_GetFriendByProfileID(this,profileID,(MethodInfo *)0x0);
  if (pFVar1 == (Friend *)0x0) {
    return 0;
  }
  return (pFVar1->fields).status == 2;
}


/* Void OnPlayersLoaded() */

void Assembly-CSharp.dll::FriendList::FriendList_OnPlayersLoaded
               (FriendList *this,MethodInfo *method)

{
  pDStack_1 = (DelegateData *)0xffffffff;
  pMStack_2 = (MethodInfo_1 *)&DAT_?;
  pMStack_3 = (MethodInfo_1 *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pMStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar7 == (MVGameControllerBase *)0x0) ||
      (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
     (pMVar9 = (pMVar8->fields).playerContainer, pMVar9 == (MVPlayerContainer *)0x0))
  goto code_?;
  DStack_10._currentValue = (Object *)(pMVar9->fields).OnPlayerListLoaded;
  pNStack_11 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  if (pNStack_11 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNStack_11,(Object *)this,MethodInfo__FriendList__OnPlayersLoaded__,(MethodInfo *)0x0);
  DStack_6._version =
       (int32_t)mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)DStack_10._currentValue,(Delegate *)pNStack_11,
                           (MethodInfo *)0x0);
  DStack_6._currentValue = (Object *)0x0;
  if ((Action__Class *)DStack_6._version == (Action__Class *)0x0) {
    (pMVar9->fields).OnPlayerListLoaded = (Action *)0x0;
code_?:
    DStack_6._version = (int32_t)&(pMVar9->fields).OnPlayerListLoaded;
    DStack_6._index = (int32_t)&UNK_?;
    func_?();
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar7 != (MVGameControllerBase *)0x0) &&
        (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
       (pMVar9 = (pMVar8->fields).playerContainer, pMVar9 != (MVPlayerContainer *)0x0)) {
      method_00 = (MethodInfo *)
                  MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar9,(MethodInfo *)0x0);
      if (method_00 != (MethodInfo *)0x0) {
        pDVar12 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           (&DStack_10,
                            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)method_00,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar12->_dictionary;
        DStack_6._index = pDVar12->_index;
        DStack_6._version = pDVar12->_version;
        DStack_6._currentValue = pDVar12->_currentValue;
        DStack_10._version = 0;
        pDStack_1 = (DelegateData *)0x1;
        DStack_10._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar13 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar13 == 0) {
            pDStack_1 = (DelegateData *)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = pMStack_3;
            return;
          }
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).pendingNotifications;
          if (((Action__Class *)DStack_6._currentValue == (Action__Class *)0x0) ||
             (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
          break;
          bVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                            (this_00,(RegexCharClass_SingleRange)
                                     ((Il2CppClass_0 *)&(DStack_6._currentValue)->klass)->parent,
                             MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
          if ((bVar13 != 0) && ((this->fields).OnFriendRequestReceived != (UnityAction *)0x0)) {
            method_00 = (MethodInfo *)&UNK_?;
            (*(((this->fields).OnFriendRequestReceived)->fields)._._.invoke_impl)();
          }
        }
      }
    }
  }
  else {
    if ((Action__Class *)(((Action__Class *)DStack_6._version)->_0).image ==
        TypeInfo__System__Action) {
      DStack_6._currentValue = (Object *)DStack_6._version;
    }
    if ((Action__Class *)DStack_6._currentValue != (Action__Class *)0x0) {
      (pMVar9->fields).OnPlayerListLoaded = (Action *)DStack_6._currentValue;
      DStack_6._currentValue = (Object *)(Action__Class *)0x0;
      if ((Action__Class *)(((Action__Class *)DStack_6._version)->_0).image ==
          TypeInfo__System__Action) {
        DStack_6._currentValue = (Object *)DStack_6._version;
      }
      if ((Action__Class *)DStack_6._currentValue != (Action__Class *)0x0) goto code_?;
    }
    DStack_6._currentValue = (Object *)TypeInfo__System__Action;
    DStack_6._index = (int32_t)&UNK_?;
    func_?();
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
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
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
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
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__MoveNext__
    ;
    func_?();
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_7._index = 0;
  DStack_7._version = 0;
  DStack_7._currentKey = 0;
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  pLStack_9 = pLVar8;
  if (pLVar8 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pLStack_10 = pLVar8;
    pLStack_11 = pLVar8;
    pDVar12 = (Dictionary_2_System_Int32_Friend_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    pDStack_13 = pDVar12;
    if (pDVar12 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pDVar12,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(this->fields).pending;
      pDStack_14 = pDVar12;
      pDStack_15 = pDVar12;
      if (this_00 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Keys__
                            );
        if (this_01 !=
            (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
             *)0x0) {
          pDVar16 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             (&DStack_17,
                              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)this_01,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_Friend>__GetEnumerator__
                             );
          DStack_7._dictionary =
               (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar16->_dictionary;
          DStack_7._index = pDVar16->_index;
          DStack_7._version = pDVar16->_version;
          DStack_7._currentKey = (int32_t)pDVar16->_currentValue;
          DStack_17._version = 0;
          uStack_1 = 1;
          DStack_17._currentValue = (Object *)&DStack_7;
          do {
            bVar18 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                              (&DStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__MoveNext__
                              );
            if (bVar18 == 0) goto code_?;
            pDVar12 = (this->fields).pending;
            pMStack_19 = (MethodInfo *)DStack_7._currentKey;
            if (pDVar12 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
            in_stack_6 = (MethodInfo **)DStack_7._currentKey;
            pOVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar12,
                                DStack_7._currentKey,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                               );
            if (pOVar20 == (Object *)0x0) goto code_?;
          } while (pOVar20[1].klass != (Object__Class *)profileID);
          func_?(pLStack_9,pMStack_19,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(pDStack_13,profileID,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
code_?:
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          uStack_1 = 0xffffffff;
          for (iVar21 = 0; iVar21 < (pLStack_10->fields)._size; iVar21 = iVar21 + 1) {
            pDStack_15 = (this->fields).pending;
            RVar22 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLStack_9,iVar21,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
            if (pDStack_15 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDStack_15,(int32_t)RVar22,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                      );
          }
          iVar21 = 0;
          while( true ) {
            if ((int)(pDStack_14->fields)._entries <= iVar21) {
              if ((this->fields).OnFriendListUpdated !=
                  (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                pFVar23 = (this->fields).OnFriendListUpdated;
                (*(pFVar23->fields)._._.invoke_impl)
                          ((pFVar23->fields)._._.method_code,(pFVar23->fields)._._.method);
              }
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).pendingNotifications;
            RVar22 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               pDStack_13,iVar21,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
            if (pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                      (pLVar8,RVar22,MethodInfo__System__Collections__Generic__List<int>__Remove_int_
                      );
            iVar21 = iVar21 + 1;
          }
        }
      }
    }
  }
code_?:
  uVar24 = func_?();
  func_?(uVar24);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void UpdateFriend(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::FriendList::FriendList_UpdateFriend
               (FriendList *this,int32_t friendID,int32_t profileID,FriendStatus__Enum status,
               MethodInfo *method)

{
  _Stack_8 = (_union_155)0xffffffff;
  _Stack_c.rgctx_data = (Il2CppRGCTXData *)&DAT_?;
  pOStack_1 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_1;
  pDStack_2 = (Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ *)
               &stack0xffffffb8;
  pDVar3 = (Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ *)&stack0xffffffb8
  ;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                   );
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
    pDVar3 = pDStack_2;
  }
  pDStack_2 = pDVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 != (MVGameControllerBase *)0x0) &&
      (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
     (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
     pMVar6 != (MVLocalPlayer *)0x0)) {
    if (profileID == (pMVar6->fields)._._ProfileID_k__BackingField) {
      this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).friends;
      if (this_01 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_01,(Object *)friendID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                          );
        if (bVar7 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Tried_updating_friend_that_doesn,(MethodInfo *)0x0);
code_?:
          if ((this->fields).OnFriendListUpdated != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            pFVar8 = (this->fields).OnFriendListUpdated;
            pIStack_9 = (pFVar8->fields)._._.method;
            pIStack_10 = (pFVar8->fields)._._.method_code;
            (*(pFVar8->fields)._._.invoke_impl)();
          }
          *unaff_FS_OFFSET = pOStack_1;
          return;
        }
        if (status == FriendStatus__Enum_Deleted) {
          pDVar11 = (this->fields).friends;
          if (pDVar11 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                      );
            goto code_?;
          }
        }
        else {
          if ((this->fields).OnFriendRequestAccepted != (FriendList_OnFriendRequestUpdated *)0x0) {
            profileID = (int32_t)(this->fields).OnFriendRequestAccepted;
            pDVar11 = (this->fields).friends;
            if (pDVar11 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                      );
            (**(code **)(profileID + 0xc))();
          }
          pDVar11 = (this->fields).friends;
          if ((pDVar11 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
             (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ), pOVar12 != (Object *)0x0)) {
            pOVar12[2].klass = (Object__Class *)status;
            pDStack_13 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            if (pDStack_13 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)pDStack_13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              profileID = CONCAT13(10,(undefined3)profileID);
              pDStack_14 = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                           func_?(TypeInfo__System__Byte,(int)&profileID + 3);
              pDVar11 = (this->fields).friends;
              if (pDVar11 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
                pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11,friendID
                                     ,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                    );
                data = pDStack_13;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDStack_13,(Object *)pDStack_14,pOVar12,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                NotificationController::NotificationController_OnNotificationReceived
                          (NotificationType__Enum_FriendRequestAccepted,data,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
    else {
      FriendList_RemoveFromPendingByProfileID(this,profileID,(MethodInfo *)0x0);
      if (status == FriendStatus__Enum_Deleted) goto code_?;
      if ((this->fields).OnPendingCountChanged != (UnityAction_1_System_Int32_ *)0x0) {
        pUVar15 = (this->fields).OnPendingCountChanged;
        this_02 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)FriendList_GetOnlineFriends(this,(MethodInfo *)0x0);
        if (this_02 ==
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__)
        ;
        (*(pUVar15->fields)._._.invoke_impl)();
      }
      pDStack_14 = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar4 != (MVGameControllerBase *)0x0) &&
          (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
         ((this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
          (this_03 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                  (this_00,(MethodInfo *)0x0),
          this_03 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0)))) {
        method_00 = (MethodInfo *)&pIStack_10;
        pDVar16 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                  Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)method_00,this_03,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                            );
        pDVar17 = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                  pDVar16->_currentValue;
        pIStack_18 = (InvokerMethod)0x0;
        _Stack_8 = (_union_155)0x1;
        pDStack_13 = (Dictionary_2_System_Object_System_Object_ *)&stack0xffffffc4;
        do {
          bVar7 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar7 == 0) {
            _Stack_8 = (_union_155)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffc4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,method_00);
            _Stack_8 = (_union_155)0xffffffff;
            goto code_?;
          }
          if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0)
          goto code_?;
        } while ((Il2CppClass *)profileID != (Il2CppClass *)pDVar17->vector[1].value);
        _Stack_8 = (_union_155)0xffffffff;
        pDStack_14 = pDVar17;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   ,method_00);
        _Stack_8 = (_union_155)0xffffffff;
        if (pDVar17 != (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0) {
          pSVar19 = TM::TM__(StringLiteral_Accepted_friend_request_from__0_,(MethodInfo *)0x0);
          pIVar20 = (Il2CppClass *)pDVar17->vector[2].value;
          if (pIVar20 == (Il2CppClass *)0x0) goto code_?;
          pSVar19 = mscorlib.dll::System::String::String_Format
                              (pSVar19,(Object *)pIVar20->namespaze,(MethodInfo *)0x0);
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_PushNotification
                    (pSVar19,(Sprite *)0x0,3,(MethodInfo *)0x0);
        }
code_?:
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
           pMVar6 != (MVLocalPlayer *)0x0)) {
          FriendList_AddFriend
                    (this,friendID,(pMVar6->fields)._._ProfileID_k__BackingField,profileID,status,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar21 = func_?();
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  pDVar1 = (Dictionary_2_System_Int32_Friend_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
  if (pDVar1 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__);
    (this->fields).friends = pDVar1;
    func_?(&(this->fields).friends,pDVar1);
    method_00 = (MethodInfo *)&UNK_?;
    pDVar1 = (Dictionary_2_System_Int32_Friend_ *)
             func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
    if (pDVar1 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__);
      (this->fields).pending = pDVar1;
      func_?(&(this->fields).pending,pDVar1);
      this_00 = (List_1_System_Int32_ *)
                func_?(TypeInfo__System__Collections__Generic__List<int>);
      if (this_00 != (List_1_System_Int32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__List<int>__List__);
        (this->fields).pendingNotifications = this_00;
        func_?(&(this->fields).pendingNotifications,this_00);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
          pAVar5 = (pMVar4->fields).OnPlayerListLoaded;
          this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
          if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_01,(Object *)this,MethodInfo__FriendList__OnPlayersLoaded__,
                       (MethodInfo *)0x0);
            pAVar5 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
            uVar6 = CONCAT44(TypeInfo__System__Action,pAVar5);
            if (pAVar5 == (Action *)0x0) {
              (pMVar4->fields).OnPlayerListLoaded = (Action *)0x0;
              ppAStack7 = &(pMVar4->fields).OnPlayerListLoaded;
              pAStack8 = (Action *)0x0;
              func_?();
              return;
            }
            pAVar9 = (Action *)0x0;
            if (pAVar5->klass == TypeInfo__System__Action) {
              pAVar9 = pAVar5;
            }
            if (pAVar9 != (Action *)0x0) {
              (pMVar4->fields).OnPlayerListLoaded = pAVar9;
              uVar6 = CONCAT44(TypeInfo__System__Action,pAVar5);
              pAStack8 = (Action *)0x0;
              if (pAVar5->klass == TypeInfo__System__Action) {
                pAStack8 = pAVar5;
              }
              if (pAStack8 != (Action *)0x0) {
                ppAStack7 = &(pMVar4->fields).OnPlayerListLoaded;
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  uVar6 = func_?();
code_?:
  _ppAStack00000010 = uVar6;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).friends;
  if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).pending;
      if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
      goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar1,(Object *)friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        return (Friend *)0x0;
      }
      this_00 = (this->fields).pending;
    }
    else {
      this_00 = (this->fields).friends;
    }
    if (this_00 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
      pFVar3 = (Friend *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,friendID,
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

