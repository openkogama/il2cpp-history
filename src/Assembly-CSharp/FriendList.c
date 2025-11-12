
/* Void AddFriend(Int32, Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::FriendList::FriendList_AddFriend
               (FriendList *this,int32_t friendID,int32_t profileID,int32_t friendProfileID,
               FriendStatus__Enum status,MethodInfo *method)

{
  uVar1 = (ulonglong)(uint)friendProfileID;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Friend);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_2 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  uStack_3 = 0;
  iStack_4 = 0;
  pMStack_5 = (MVPlayer *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
      (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) &&
     (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
     pMVar9 != (MVLocalPlayer *)0x0)) {
    if (profileID == (pMVar9->fields)._._ProfileID_k__BackingField) {
      pDVar10 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).friends;
      if (pDVar10 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (pDVar10,friendID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (-1 < iVar11) {
code_?:
          if ((this->fields).OnFriendListUpdated != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            pFVar12 = (this->fields).OnFriendListUpdated;
            (*(pFVar12->fields)._._.invoke_impl)
                      ((pFVar12->fields)._._.method_code,(pFVar12->fields)._._.method);
          }
          return;
        }
        pOVar13 = (Object *)FUN_?(TypeInfo__Friend);
        *(int32_t *)((longlong)&pOVar13[1].klass + 4) = friendID;
        *(int32_t *)&pOVar13[1].klass = friendProfileID;
        *(FriendStatus__Enum *)&pOVar13[1].monitor = status;
        pDVar14 = (this->fields).friends;
        if (pDVar14 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,friendID,pOVar13,
                     (InsertionBehavior__Enum)CONCAT71((int7)(uVar1 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                     ->klass->rgctx_data[0x22].method);
          goto code_?;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         ((pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0 &&
          (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
          pMVar9 != (MVLocalPlayer *)0x0)))) {
        if (friendProfileID != (pMVar9->fields)._._ProfileID_k__BackingField)
        goto code_?;
        pDVar10 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pending;
        if (pDVar10 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          iVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Vector3]::
                   Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                             (pDVar10,friendID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                              ->klass->rgctx_data[0x21].method);
          if (-1 < iVar11) goto code_?;
          pOVar13 = (Object *)FUN_?(TypeInfo__Friend);
          *(int32_t *)((longlong)&pOVar13[1].klass + 4) = friendID;
          *(int32_t *)&pOVar13[1].klass = profileID;
          *(FriendStatus__Enum *)&pOVar13[1].monitor = status;
          pDVar14 = (this->fields).pending;
          if (pDVar14 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,friendID,pOVar13,
                       (InsertionBehavior__Enum)CONCAT71((int7)(uVar1 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                       ->klass->rgctx_data[0x22].method);
            pLVar15 = (this->fields).pendingNotifications;
            if (pLVar15 != (List_1_System_Int32_ *)0x0) {
              FUN_?(pLVar15,profileID,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar7 != (MVNetworkGame *)0x0) &&
                  (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0))
                 && (pDVar16 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                         (pMVar8,(MethodInfo *)0x0),
                    pDVar16 !=
                    (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
                pDVar17 = (pDVar16->fields)._dictionary;
                ppDStack_18 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
                uStack_19 = 0;
                if (iRam_? != 0) {
                  uVar20 = (uint)((ulonglong)&pDStack_21 >> 0xc);
                  puVar22 = (ulonglong *)((ulonglong)((uVar20 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar23 = *puVar22;
                    LOCK();
                    uVar1 = *puVar22;
                    if (uVar23 == uVar1) {
                      *puVar22 = uVar23 | 1L << (uVar20 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar23 != uVar1);
                }
                if (pDVar17 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
                  pDStack_21 = pDVar17;
                  FUN_?();
                  pcVar24 = (code *)swi(3);
                  (*pcVar24)();
                  return;
                }
                iStack_4 = (pDVar17->fields)._version;
                uStack_19 = 0;
                uStack_3 = 0;
                pMStack_5 = (MVPlayer *)0x0;
                pDStack_21 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
                ppDStack_18 = &pDStack_2;
                pDStack_2 = pDVar17;
                while (pDStack_2 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
                  if (iStack_4 != (pDStack_2->fields)._version) goto code_?;
                  do {
                    if (pDStack_2 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)
                    goto code_?;
                    if ((uint)(pDStack_2->fields)._count <= uStack_3) {
                      uStack_3 = (pDStack_2->fields)._count + 1;
                      pMStack_5 = (MVPlayer *)0x0;
                      goto code_?;
                    }
                    pDVar25 = (pDStack_2->fields)._entries;
                    lVar26 = (longlong)(int)uStack_3;
                    uVar20 = uStack_3 + 1;
                    if (pDVar25 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)
                                  0x0) goto code_?;
                    bVar27 = (uint)pDVar25->max_length <= uStack_3;
                    uStack_3 = uVar20;
                    if (bVar27) goto code_?;
                  } while (pDVar25->vector[lVar26].hashCode < 0);
                  pMStack_5 = pDVar25->vector[lVar26].value;
                  func_?();
                  if (pMStack_5 == (MVPlayer *)0x0) goto code_?;
                  if (((pMStack_5->fields)._ProfileID_k__BackingField == profileID) &&
                     ((this->fields).OnFriendRequestReceived != (UnityAction *)0x0)) {
                    pUVar28 = (this->fields).OnFriendRequestReceived;
                    (*(pUVar28->fields)._._.invoke_impl)
                              ((pUVar28->fields)._._.method_code,(pUVar28->fields)._._.method);
                  }
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar20 = uStack_3;
code_?:
  uStack_3 = uVar20;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Friend GetFriendByProfileID(Int32) */

Friend * Assembly-CSharp.dll::FriendList::FriendList_GetFriendByProfileID
                   (FriendList *this,int32_t profileID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_Friend>__get_Value__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__0_System__Collections__Generic__KeyValuePair<int,_Friend>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList____c__DisplayClass22_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__FriendList____c__DisplayClass22_0);
  if (object != (Object *)0x0) {
    *(int32_t *)&object[1].klass = profileID;
    pDVar1 = (this->fields).friends;
    pPVar2 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             FUN_?(
                          TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                          );
    mscorlib.dll::System::Predicate`1[System::Xml::Schema::
    XmlSchemaObjectTable+XmlSchemaObjectEntry]::
    Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
              (pPVar2,object,
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
               FUN_?(
                            TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                            );
      mscorlib.dll::System::Predicate`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                (pPVar2,object,
                 MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
                 ,(MethodInfo *)0x0);
      bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_4
                        ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                          *)pPVar2,
                         bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                        );
      if (bVar3 == 0) {
        return (Friend *)0x0;
      }
      pDVar1 = (this->fields).pending;
      pPVar2 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
               FUN_?(
                            TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                            );
      method_1 = 
      MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
      ;
    }
    else {
      pDVar1 = (this->fields).friends;
      pPVar2 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
               FUN_?(
                            TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                            );
      method_1 = 
      MethodInfo__FriendList____c__DisplayClass22_0___GetFriendByProfileID_b__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
      ;
    }
    mscorlib.dll::System::Predicate`1[System::Xml::Schema::
    XmlSchemaObjectTable+XmlSchemaObjectEntry]::
    Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
              (pPVar2,object,method_1,(MethodInfo *)0x0);
    System.Core.dll::System::Linq::Enumerable::Enumerable_First_3
              (&KStack_4,(IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                *)pPVar2,
               System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
              );
    return (Friend *)KStack_4.value;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pFVar6 = (Friend *)(*pcVar5)();
  return pFVar6;
}


/* Dictionary`2[System.Int32,MVPlayer] GetOnlineFriends() */

Dictionary_2_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::FriendList::FriendList_GetOnlineFriends(FriendList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar3 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
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
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_4 = (pDVar3->fields)._dictionary;
    ppDStack_5 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    if (pDStack_4 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      pDStack_8 = pDStack_4;
      FUN_?();
      pcVar12 = (code *)swi(3);
      pDVar13 = (Dictionary_2_System_Int32_MVPlayer_ *)(*pcVar12)();
      return pDVar13;
    }
    ppDStack_5 = (Dictionary_2_System_Int32_MVPlayer_ **)
                  ((ulonglong)(uint)(pDStack_4->fields)._version << 0x20);
    uStack_6 = 0;
    uStack_14 = (ulonglong)ppDStack_5;
    pMStack_15 = (MVPlayer *)0x0;
    pDStack_8 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
    ppDStack_5 = &pDStack_4;
    while (pDStack_4 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      if (uStack_14._4_4_ != (pDStack_4->fields)._version) goto code_?;
      uVar11 = uStack_14 & 0xffffffff;
      do {
        if (pDStack_4 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        uVar7 = (uint)uVar11;
        if ((uint)(pDStack_4->fields)._count <= uVar7) {
          return (Dictionary_2_System_Int32_MVPlayer_ *)this_01;
        }
        pDVar16 = (pDStack_4->fields)._entries;
        uVar11 = (ulonglong)(uVar7 + 1);
        uStack_14 = CONCAT44(uStack_14._4_4_,uVar7 + 1);
        if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
        goto code_?;
        if ((uint)pDVar16->max_length <= uVar7) goto code_?;
      } while (pDVar16->vector[(int)uVar7].hashCode < 0);
      pMStack_15 = pDVar16->vector[(int)uVar7].value;
      func_?();
      value = pMStack_15;
      if (pMStack_15 == (MVPlayer *)0x0) goto code_?;
      pFVar17 = FriendList_GetFriendByProfileID
                         (this,(pMStack_15->fields)._ProfileID_k__BackingField,(MethodInfo *)0x0);
      if ((pFVar17 != (Friend *)0x0) && ((pFVar17->fields).status == 2)) {
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                   (value->fields)._ActorNr_k__BackingField,(Object *)value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pDVar16 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                   ->klass->rgctx_data[0x22].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  pDVar13 = (Dictionary_2_System_Int32_MVPlayer_ *)(*pcVar12)();
  return pDVar13;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FriendList__OnPlayersLoaded__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
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
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pAVar4 = (pMVar3->fields).OnPlayerListLoaded;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__FriendList__OnPlayersLoaded__,(MethodInfo *)0x0);
    pAVar4 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      (pMVar3->fields).OnPlayerListLoaded = (Action *)0x0;
    }
    else {
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar3->fields).OnPlayerListLoaded = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
        uVar7 = uStack_8;
code_?:
        uStack_8 = uVar7;
        FUN_?();
code_?:
        FUN_?();
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
        goto code_?;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar3->fields).OnPlayerListLoaded >> 0xc);
      lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
        (pDVar13 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0),
        pDVar13 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)))) {
      uStack_14 = (pDVar13->fields)._dictionary;
      puStack_15 = (undefined4 *)0x0;
      uStack_16 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&uStack_14 >> 0xc);
        lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      if (uStack_14 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iStack_17 = (uStack_14->fields)._version;
      uStack_16 = 0;
      uStack_14._4_4_ = (undefined4)((ulonglong)uStack_14 >> 0x20);
      uStack_18 = (undefined4)uStack_14;
      uStack_19 = uStack_14._4_4_;
      uStack_8 = 0;
      alStack_20[0] = 0;
      uStack_14 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
      puStack_15 = &uStack_18;
      while (lVar9 = CONCAT44(uStack_19,uStack_18), lVar9 != 0) {
        if (iStack_17 != *(int *)(lVar9 + 0x2c)) goto code_?;
        do {
          if (lVar9 == 0) goto code_?;
          if (*(uint *)(lVar9 + 0x20) <= uStack_8) {
            return;
          }
          lVar21 = *(longlong *)(lVar9 + 0x18);
          lVar22 = (longlong)(int)uStack_8;
          uVar7 = uStack_8 + 1;
          if (lVar21 == 0) goto code_?;
          if (*(uint *)(lVar21 + 0x18) <= uStack_8) {
            uStack_8 = uVar7;
            FUN_?();
            goto code_?;
          }
          uStack_8 = uVar7;
        } while (*(int *)(lVar21 + 0x20 + lVar22 * 0x18) < 0);
        alStack_20[0] = *(longlong *)(lVar21 + (lVar22 + 2) * 0x18);
        func_?(alStack_20);
        pLVar23 = (this->fields).pendingNotifications;
        if (alStack_20[0] == 0) goto code_?;
        if (pLVar23 == (List_1_System_Int32_ *)0x0) goto code_?;
        if ((((pLVar23->fields)._size != 0) &&
            (iVar24 = FUN_?(pLVar23,*(undefined4 *)(alStack_20[0] + 0x58),
                                    MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                    ->klass->rgctx_data[0x17].rgctxDataDummy), iVar24 != -1)) &&
           ((this->fields).OnFriendRequestReceived != (UnityAction *)0x0)) {
          pUVar25 = (this->fields).OnFriendRequestReceived;
          (*(pUVar25->fields)._._.invoke_impl)
                    ((pUVar25->fields)._._.method_code,(pUVar25->fields)._._.method);
        }
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveFromPendingByProfileID(Int32) */

void Assembly-CSharp.dll::FriendList::FriendList_RemoveFromPendingByProfileID
               (FriendList *this,int32_t profileID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Keys__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_Friend>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_Friend>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(lVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(lVar2,MethodInfo__System__Collections__Generic__List<int>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).pending;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Keys__
                             ),
        pDVar3 ==
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pDStack_4 = (pDVar3->fields)._dictionary;
    ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    if (pDStack_4 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_8 = pDStack_4;
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar7 = 0;
    ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_4->fields)._version << 0x20);
    uStack_6 = 0;
    uStack_13 = (longlong)ppDStack_5;
    uStack_14 = 0;
    pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_5 = &pDStack_4;
    do {
      if (pDStack_4 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto code_?;
      if (uStack_13._4_4_ != (pDStack_4->fields)._version) goto code_?;
      uVar15 = (uint)uStack_13;
      do {
        if (pDStack_4 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_4->fields)._count <= uVar15) {
          uStack_13 = CONCAT44(uStack_13._4_4_,(pDStack_4->fields)._count + 1);
          uStack_14 = (ulonglong)uStack_14._4_4_ << 0x20;
          if (lVar1 == 0) goto code_?;
          goto code_?;
        }
        pDVar16 = (pDStack_4->fields)._entries;
        lVar17 = (longlong)(int)uVar15;
        uStack_13 = CONCAT44(uStack_13._4_4_,uVar15 + 1);
        if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar16->max_length <= uVar15) goto code_?;
        uVar15 = uVar15 + 1;
      } while ((&pDVar16->vector[0].hashCode)[lVar17 * 6] < 0);
      key = *(int32_t *)((longlong)&pDVar16->vector[0].key + lVar17 * 0x18);
      uStack_14 = CONCAT44(uStack_14._4_4_,key);
      pDVar18 = (this->fields).pending;
      if (pDVar18 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
      pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar18,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                          );
      if (pOVar19 == (Object *)0x0) goto code_?;
    } while (*(int *)&pOVar19[1].klass != profileID);
    if (lVar1 == 0) goto code_?;
    FUN_?(lVar1,key,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    if (lVar2 != 0) {
      FUN_?(lVar2,profileID,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
code_?:
      lVar17 = 0x20;
      lVar20 = 0x20;
      for (uVar15 = uVar7; (int)uVar15 < *(int *)(lVar1 + 0x18); uVar15 = uVar15 + 1) {
        pDVar18 = (this->fields).pending;
        if (*(uint *)(lVar1 + 0x18) <= uVar15) goto code_?;
        lVar21 = *(longlong *)(lVar1 + 0x10);
        if (lVar21 == 0) goto code_?;
        if (*(uint *)(lVar21 + 0x18) <= uVar15) goto code_?;
        if (pDVar18 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar18,*(int32_t *)(lVar20 + lVar21),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_);
        lVar20 = lVar20 + 4;
      }
      if (lVar2 != 0) {
        do {
          if (*(int *)(lVar2 + 0x18) <= (int)uVar7) {
            if ((this->fields).OnFriendListUpdated != (FriendList_OnFriendListUpdatedDelegate *)0x0)
            {
              pFVar22 = (this->fields).OnFriendListUpdated;
              (*(pFVar22->fields)._._.invoke_impl)
                        ((pFVar22->fields)._._.method_code,(pFVar22->fields)._._.method);
            }
            return;
          }
          pLVar23 = (this->fields).pendingNotifications;
          if (*(uint *)(lVar2 + 0x18) <= uVar7) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar1 = *(longlong *)(lVar2 + 0x10);
          if (lVar1 == 0) break;
          if (*(uint *)(lVar1 + 0x18) <= uVar7) {
code_?:
            FUN_?();
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (pLVar23 == (List_1_System_Int32_ *)0x0) break;
          uVar15 = FUN_?(pLVar23,*(undefined4 *)(lVar1 + lVar17),
                                 MethodInfo__System__Collections__Generic__List<int>__Remove_int_->
                                 klass->rgctx_data[0x17].rgctxDataDummy);
          if (-1 < (int)uVar15) {
            if ((uint)(pLVar23->fields)._size <= uVar15) goto code_?;
            iVar24 = (pLVar23->fields)._size + -1;
            (pLVar23->fields)._size = iVar24;
            if ((int)uVar15 < iVar24) {
              sourceArray = (pLVar23->fields)._items;
              mscorlib.dll::System::Array::Array_Copy_3
                        ((Array *)sourceArray,uVar15 + 1,(Array *)sourceArray,uVar15,iVar24 - uVar15
                         ,(MethodInfo *)0x0);
            }
            piVar25 = &(pLVar23->fields)._version;
            *piVar25 = *piVar25 + 1;
          }
          uVar7 = uVar7 + 1;
          lVar17 = lVar17 + 4;
        } while( true );
      }
      goto code_?;
    }
  }
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
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateFriend(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::FriendList::FriendList_UpdateFriend
               (FriendList *this,int32_t friendID,int32_t profileID,FriendStatus__Enum status,
               MethodInfo *method)

{
  pcVar1 = (code *)(ulonglong)(uint)status;
  aiStackX_18[0] = profileID;
  FStackX_20 = status;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tried_updating_friend_that_doesn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Accepted_friend_request_from__0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_2 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  uStack_3 = 0;
  iStack_4 = 0;
  pMStack_5 = (MVPlayer *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
      (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) &&
     (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
     pMVar9 != (MVLocalPlayer *)0x0)) {
    if (profileID == (pMVar9->fields)._._ProfileID_k__BackingField) {
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).friends;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (this_00,friendID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (iVar10 < 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Tried_updating_friend_that_doesn,(MethodInfo *)0x0);
code_?:
          if ((this->fields).OnFriendListUpdated != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            pFVar11 = (this->fields).OnFriendListUpdated;
            (*(pFVar11->fields)._._.invoke_impl)
                      ((pFVar11->fields)._._.method_code,(pFVar11->fields)._._.method);
          }
          return;
        }
        if (status == FriendStatus__Enum_Deleted) {
          pDVar12 = (this->fields).friends;
          if (pDVar12 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                      );
            goto code_?;
          }
        }
        else {
          if ((this->fields).OnFriendRequestAccepted != (FriendList_OnFriendRequestUpdated *)0x0) {
            pFVar13 = (this->fields).OnFriendRequestAccepted;
            pDVar12 = (this->fields).friends;
            if (pDVar12 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
            pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,friendID,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                );
            pcVar1 = (pFVar13->fields)._._.invoke_impl;
            (*pcVar1)((pFVar13->fields)._._.method_code,pOVar14,(pFVar13->fields)._._.method);
          }
          pDVar12 = (this->fields).friends;
          if ((pDVar12 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
             (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ), pOVar14 != (Object *)0x0)) {
            *(FriendStatus__Enum *)&pOVar14[1].monitor = status;
            this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,10);
            pOVar14 = (Object *)FUN_?(uRam_?,aiStackX_18);
            pDVar12 = (this->fields).friends;
            if ((pDVar12 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
               (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ),
               this_01 !=
               (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar14,value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pcVar1 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0)
              {
                if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                  FUN_?();
                }
                NotificationController::NotificationController_FriendRequestAccepted
                          ((Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              }
              goto code_?;
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
        pDVar16 = FriendList_GetOnlineFriends(this,(MethodInfo *)0x0);
        if (pDVar16 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        (*(pUVar15->fields)._._.invoke_impl)
                  ((pUVar15->fields)._._.method_code,
                   (pDVar16->fields)._count - (pDVar16->fields)._freeCount,
                   (pUVar15->fields)._._.method);
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar7 != (MVNetworkGame *)0x0) &&
          (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) &&
         (pDVar17 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar8,(MethodInfo *)0x0)
         , pDVar17 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
        pDVar16 = (pDVar17->fields)._dictionary;
        ppDStack_18 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
        uStack_19 = 0;
        if (iRam_? != 0) {
          uVar20 = (uint)((ulonglong)&pDStack_21 >> 0xc);
          puVar22 = (ulonglong *)((ulonglong)((uVar20 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar23 = *puVar22;
            LOCK();
            uVar24 = *puVar22;
            if (uVar23 == uVar24) {
              *puVar22 = uVar23 | 1L << (uVar20 & 0x3f);
            }
            UNLOCK();
          } while (uVar23 != uVar24);
        }
        if (pDVar16 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pDStack_21 = pDVar16;
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_4 = (pDVar16->fields)._version;
        uStack_19 = 0;
        uStack_3 = 0;
        pMStack_5 = (MVPlayer *)0x0;
        pDStack_21 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
        ppDStack_18 = &pDStack_2;
        pDStack_2 = pDVar16;
        do {
          if (pDStack_2 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          if (iStack_4 != (pDStack_2->fields)._version) goto code_?;
          do {
            if (pDStack_2 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
            if ((uint)(pDStack_2->fields)._count <= uStack_3) {
              uStack_3 = (pDStack_2->fields)._count + 1;
              pMStack_5 = (MVPlayer *)0x0;
              goto code_?;
            }
            pDVar25 = (pDStack_2->fields)._entries;
            lVar26 = (longlong)(int)uStack_3;
            uVar20 = uStack_3 + 1;
            if (pDVar25 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
            goto code_?;
            bVar27 = (uint)pDVar25->max_length <= uStack_3;
            uStack_3 = uVar20;
            if (bVar27) goto code_?;
          } while (pDVar25->vector[lVar26].hashCode < 0);
          pMStack_5 = pDVar25->vector[lVar26].value;
          func_?();
          pMVar28 = pMStack_5;
          if (pMStack_5 == (MVPlayer *)0x0) goto code_?;
        } while (profileID != (pMStack_5->fields)._ProfileID_k__BackingField);
        if (pMStack_5 != (MVPlayer *)0x0) {
          pSVar29 = TM::TM__(StringLiteral_Accepted_friend_request_from__0_,(MethodInfo *)0x0);
          pUVar30 = (pMVar28->fields)._UserProfileData_k__BackingField;
          if (pUVar30 == (UserProfileData *)0x0) goto code_?;
          pSVar29 = mscorlib.dll::System::String::String_Format
                              (pSVar29,(Object *)(pUVar30->fields).UserName,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          NotificationController::NotificationController_PushNotification
                    (pSVar29,(Sprite *)0x0,3,(MethodInfo *)0x0);
        }
code_?:
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar7 != (MVNetworkGame *)0x0) &&
            (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) &&
           (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0)
           , pMVar9 != (MVLocalPlayer *)0x0)) {
          FriendList_AddFriend
                    (this,friendID,(pMVar9->fields)._._ProfileID_k__BackingField,profileID,status,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar20 = uStack_3;
code_?:
  uStack_3 = uVar20;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FriendList() */

void Assembly-CSharp.dll::FriendList::FriendList__ctor(FriendList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FriendList__OnPlayersLoaded__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields).friends = (Dictionary_2_System_Int32_Friend_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).friends >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields).pending = (Dictionary_2_System_Int32_Friend_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).pending >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar7 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar7,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).pendingNotifications = pLVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).pendingNotifications >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar8 != (MVGameControllerBase *)0x0) &&
      (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
     (pMVar10 = (pMVar9->fields).playerContainer, pMVar10 != (MVPlayerContainer *)0x0)) {
    pAVar11 = (pMVar10->fields).OnPlayerListLoaded;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__FriendList__OnPlayersLoaded__,(MethodInfo *)0x0);
    pAVar11 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar11,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      (pMVar10->fields).OnPlayerListLoaded = (Action *)0x0;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      (pMVar10->fields).OnPlayerListLoaded = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(pMVar10->fields).OnPlayerListLoaded >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    return;
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Friend get_Item(Int32) */

Friend * Assembly-CSharp.dll::FriendList::FriendList_get_Item
                   (FriendList *this,int32_t friendID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).friends;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pending;
      if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        return (Friend *)0x0;
      }
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pending;
    }
    else {
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).friends;
    }
    pMVar3 = MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pFVar7 = (Friend *)(*pcVar6)();
        return pFVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(Friend **)&pDVar8->vector[(int)uVar4].value.y;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pFVar7 = (Friend *)(*pcVar6)();
        return pFVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pFVar7 = (Friend *)(*pcVar6)();
      return pFVar7;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  pFVar7 = (Friend *)(*pcVar6)();
  return pFVar7;
}

