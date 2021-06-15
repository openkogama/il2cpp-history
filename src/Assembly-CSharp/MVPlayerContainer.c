
/* Void Add(MVPlayer) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Add
               (MVPlayerContainer *this,MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (player != (MVPlayer *)0x0) {
    if ((player->fields)._IsReady_k__BackingField == 0) {
      this_00 = (this->fields).pendingPlayers;
    }
    else {
      this_00 = (this->fields).players;
    }
    if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                 (player->fields)._ActorNr_k__BackingField,(Object *)player,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                );
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Add(List`1[MVPlayer]) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Add_1
               (MVPlayerContainer *this,List_1_MVPlayer_ *playerList,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  uStack_7 = func_?();
  uStack_7 = uStack_7 & 0xffffff00;
  uStack_8 = 0;
  puStack_9 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if (playerList != (List_1_MVPlayer_ *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_11,
                        (List_1_UnityEngine_Color32_ *)playerList,
                        MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__);
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l;
    CStack_6.monitor = (MonitorData *)pLVar10->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar10->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_9 = 0x49;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                       );
        if (((char)uStack_7 != '\0') &&
           (pJVar13 = (JumpState_OnWallJumpDelegate *)(this->fields).OnPlayerListChanged,
           pJVar13 != (JumpState_OnWallJumpDelegate *)0x0)) {
          JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                    (pJVar13,(MethodInfo *)0x0);
        }
        pJVar13 = (JumpState_OnWallJumpDelegate *)(this->fields).OnPlayerListLoaded;
        if (pJVar13 != (JumpState_OnWallJumpDelegate *)0x0) {
          JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                    (pJVar13,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      player = (MVPlayer *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__get_Current__
                         );
      if (player == (MVPlayer *)0x0) break;
      uStack_7 = uStack_7 & 0xff;
      if ((player->fields)._IsReady_k__BackingField != 0) {
        uStack_7 = 1;
      }
      uStack_8 = (undefined1)uStack_7;
      MVPlayerContainer_Add(this,player,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  func_?(0,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean ContainsKey(Int32) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_ContainsKey
               (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* IEnumerator`1[KeyValuePair`2[System.Int32,MVPlayer]] GetEnumerator() */

IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_GetEnumerator
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_2,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    pDStack_3 = pDVar1->dictionary;
    iStack_4 = pDVar1->next;
    iStack_5 = pDVar1->stamp;
    iStack_6 = (pDVar1->current).key;
    pOStack_7 = (pDVar1->current).value;
    pIVar8 = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)
             func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                             ,&pDStack_3);
    return pIVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  pIVar8 = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)(*pcVar9)();
  return pIVar8;
}


/* MVPlayer GetPlayerUnsafe(Int32) */

MVPlayer *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
          (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingPlayers;
  if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).players;
      if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                        );
      if (bVar2 == 0) goto code_?;
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).players;
    }
    else {
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).pendingPlayers;
    }
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pMVar3 = (MVPlayer *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_00,actorNr,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                         );
      return pMVar3;
    }
  }
code_?:
  func_?();
code_?:
  this_01 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_Could_not_get_player_unsafe,(MethodInfo *)0x0);
  pMStack4 = MethodInfo__MVPlayerContainer__GetPlayerUnsafe_int_;
  uStack5 = 0;
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar3 = (MVPlayer *)(*pcVar6)();
  return pMVar3;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_MoveNext
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_2 = 0;
  iStack_3 = 0;
  iStack_4 = 0;
  pOStack_5 = (Object *)0x0;
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    pDStack_1 = pDVar6->dictionary;
    iStack_2 = pDVar6->next;
    iStack_3 = pDVar6->stamp;
    iStack_4 = (pDVar6->current).key;
    pOStack_5 = (pDVar6->current).value;
    bVar8 = func_?(&pDStack_1,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                           );
    return bVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Void Remove(Int32) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Remove
               (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).players;
  if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
code_?:
      pDVar1 = (this->fields).players;
      if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          pDVar1 = (this->fields).pendingPlayers;
          if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                            );
          if (bVar2 == 0) {
            pIStack3 = (IsolatedStorageException *)func_?();
            message = StringLiteral_Player_not_contained_in_either_p;
            goto code_?;
          }
        }
        pDVar1 = (this->fields).players;
        if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                            );
          if (bVar2 != 0) {
            pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).players;
            if (pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                      (pDVar4,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                      );
            this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnPlayerListChanged;
            if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
              JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                        (this_00,(MethodInfo *)0x0);
            }
          }
          pDVar1 = (this->fields).pendingPlayers;
          if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
            bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                              );
            if (bVar2 == 0) {
              return;
            }
            pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).pendingPlayers;
            if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                        (pDVar4,actorNr,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                        );
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pDVar1 = (this->fields).pendingPlayers;
    if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if (bVar2 == 0) goto code_?;
  }
  pIStack3 = (IsolatedStorageException *)func_?();
  message = StringLiteral_Player_contained_in_both_players;
code_?:
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIStack3,message,(MethodInfo *)0x0);
  pMStack5 = MethodInfo__MVPlayerContainer__Remove_int_;
  uStack6 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Reset
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_2 = 0;
  iStack_3 = 0;
  iStack_4 = 0;
  pOStack_5 = (Object *)0x0;
  pDVar6 = (this->fields).players;
  if (pDVar6 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_8,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar6,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    pDStack_9 = pDVar7->dictionary;
    iStack_10 = pDVar7->next;
    iStack_11 = pDVar7->stamp;
    iStack_12 = (pDVar7->current).key;
    pOStack_13 = (pDVar7->current).value;
    piVar14 = (int *)func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                                    ,&pDStack_9);
    uVar15 = CONCAT44(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                     ,piVar14);
    if (piVar14 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar14 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
          ->_0).element_class) goto code_?;
      uVar16 = func_?(piVar14);
      func_?(uVar16,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__System_Collections_IEnumerator_Reset__
                     );
      pDVar6 = (this->fields).players;
      if (pDVar6 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        pDVar7 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           (&DStack_8,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar6,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                           );
        pDStack_1 = pDVar7->dictionary;
        iStack_2 = pDVar7->next;
        iStack_3 = pDVar7->stamp;
        iStack_4 = (pDVar7->current).key;
        pOStack_5 = (pDVar7->current).value;
        func_?(&pDStack_1,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                       );
        return;
      }
    }
  }
  uVar15 = func_?(0);
code_?:
  func_?(uVar15);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SetPlayerReady(Int32) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_SetPlayerReady
               (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingPlayers;
  if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if (bVar2 != 0) {
code_?:
      pDVar1 = (this->fields).pendingPlayers;
      if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          this_00 = (IsolatedStorageException *)func_?();
          method = (MethodInfo *)StringLiteral_Pending_player_not_found;
          goto code_?;
        }
        pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).pendingPlayers;
        if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar3,actorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                            );
          pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).pendingPlayers;
          if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                      (pDVar3,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                      );
            if ((value != (TerrainUtility_TerrainMap *)0x0) &&
               (pDVar1 = (this->fields).players,
               pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                         (int32_t)value[1].fields.m_patchSize.y,(Object *)value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                        );
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (*(char *)&value[2].monitor != '\0') {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Player_already_ready,(MethodInfo *)0x0);
              }
              *(undefined1 *)&value[2].monitor = 1;
              pJVar4 = (JumpState_OnWallJumpDelegate *)(this->fields).OnPlayerListChanged;
              if (pJVar4 != (JumpState_OnWallJumpDelegate *)0x0) {
                JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                          (pJVar4,(MethodInfo *)0x0);
              }
              if ((actorNr == (this->fields).localPlayerActorNumber) &&
                 (pJVar4 = (JumpState_OnWallJumpDelegate *)(this->fields).OnLocalPlayerReady,
                 pJVar4 != (JumpState_OnWallJumpDelegate *)0x0)) {
                JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                          (pJVar4,(MethodInfo *)0x0);
                (this->fields).OnLocalPlayerReady = (Action *)0x0;
              }
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pDVar1 = (this->fields).players;
    if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if (bVar2 == 0) goto code_?;
  }
  this_00 = (IsolatedStorageException *)func_?();
  method = (MethodInfo *)StringLiteral_Player_already_added_to_players_;
code_?:
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,(String *)method,(MethodInfo *)0x0);
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::MVPlayerContainer::
MVPlayerContainer_System_Collections_IEnumerable_GetEnumerator
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_2,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    pDStack_3 = pDVar1->dictionary;
    iStack_4 = pDVar1->next;
    iStack_5 = pDVar1->stamp;
    iStack_6 = (pDVar1->current).key;
    pOStack_7 = (pDVar1->current).value;
    pIVar8 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                             ,&pDStack_3);
    return pIVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  pIVar8 = (IEnumerator *)(*pcVar9)();
  return pIVar8;
}


/* Boolean TryGetPlayerByProfileId(Int32, MVPlayer ByRef) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_TryGetPlayerByProfileId
               (MVPlayerContainer *this,int32_t profileId,MVPlayer **player,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  bStack_7 = 0;
  uStack_8 = 0;
  iStack_9 = 0;
  pDStack_10 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_11 = 0;
  iStack_12 = 0;
  iStack_13 = 0;
  func_?();
  uStack_14 = 0xffffffff;
  if (profileId < 1) {
    *player = (MVPlayer *)0x0;
    puStack_15 = &stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_02,StringLiteral_Trying_to_get_tourist_profile_by,(MethodInfo *)0x0);
    func_?();
  }
  else {
    puStack_15 = &stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    if (cRam_? == '\0') {
      puStack_15 = &stack0xffffffa4;
      puStack_4 = &stack0xffffffa4;
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (this->fields).players;
    if ((this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                            ),
       this_01 !=
       (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
      pDVar16 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_17,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      pDStack_10 = (pDVar16->host_enumerator).dictionary;
      iStack_11 = (pDVar16->host_enumerator).next;
      iStack_12 = (pDVar16->host_enumerator).stamp;
      iStack_13 = (pDVar16->host_enumerator).current.key;
      pOStack_6 = (pDVar16->host_enumerator).current.value;
      uStack_1 = 0;
      do {
        cVar18 = func_?(&pDStack_10,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                               );
        if (cVar18 == '\0') {
          iVar19 = 99;
          goto code_?;
        }
        pMVar20 = (MVPlayer *)
                 func_?(&pDStack_10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                                );
        if (pMVar20 == (MVPlayer *)0x0) goto code_?;
      } while ((pMVar20->fields)._ProfileID_k__BackingField != profileId);
      bStack_7 = 1;
      *player = pMVar20;
      iVar19 = 0x68;
code_?:
      uStack_1 = 0xffffffff;
      func_?(&pDStack_10,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     );
      iVar21 = iStack_9;
      if (iStack_9 == 0) {
        if (iVar19 != 0x68) {
          *player = (MVPlayer *)0x0;
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        *unaff_FS_OFFSET = uStack_3;
        return bStack_7;
      }
      goto code_?;
    }
  }
code_?:
  iVar21 = func_?(0);
code_?:
  func_?(iVar21,0,0);
  pcVar22 = (code *)swi(3);
  bVar23 = (*pcVar22)();
  return bVar23;
}


/* Boolean TryGetValue(Int32, MVPlayer ByRef) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_TryGetValue
               (MVPlayerContainer *this,int32_t actorNr,MVPlayer **player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).players;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                      (this_00,actorNr,(TerrainUtility_TerrainMap **)player,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void UpdateTeam(Int32, MVTeam) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_UpdateTeam
               (MVPlayerContainer *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  pMVar1 = MVPlayerContainer_GetPlayerUnsafe(this,actorNr,(MethodInfo *)0x0);
  if (pMVar1 != (MVPlayer *)0x0) {
    (pMVar1->fields).team = team;
    if ((pMVar1->fields)._IsReady_k__BackingField != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pMVar2 = MVPlayerContainer_GetPlayerUnsafe
                         (this,(this->fields).localPlayerActorNumber,(MethodInfo *)0x0);
      pMVar3 = pMVar2;
      if (pMVar2 != (MVPlayer *)0x0) {
        bVar4 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar4) ||
           ((pMVar2->klass->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayer))
        {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pMVar3 = (MVPlayer *)0x0;
        if (bVar5) {
          pMVar3 = pMVar2;
        }
        if (pMVar3 == (MVPlayer *)0x0) goto code_?;
      }
      if ((pMVar1 == pMVar3) &&
         (pJVar6 = (JumpState_OnWallJumpDelegate *)(this->fields).OnLocalPlayerTeamChanged,
         pJVar6 != (JumpState_OnWallJumpDelegate *)0x0)) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(pJVar6,(MethodInfo *)0x0);
      }
      pJVar6 = (JumpState_OnWallJumpDelegate *)(this->fields).OnPlayerListChanged;
      if (pJVar6 != (JumpState_OnWallJumpDelegate *)0x0) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(pJVar6,(MethodInfo *)0x0);
      }
    }
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTeamForPlayersOnRemovedTeam(MVTeam, MVTeam) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_UpdateTeamForPlayersOnRemovedTeam
               (MVPlayerContainer *this,MVTeam__Enum removedTeam,MVTeam__Enum defaultTeam,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  aKStack_7[0].key = 0;
  aKStack_7[0].value = 0;
  iStack_8 = 0;
  auStack_9._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_10 = 0;
  iStack_11 = 0;
  iStack_12 = 0;
  auStack_9._16_4_ = (Object *)0x0;
  KStack_13.key = 0;
  KStack_13.value = 0;
  auStack_9._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_9._4_4_ = (MonitorData *)0x0;
  auStack_9._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_9._12_4_ = 0;
  func_?();
  uStack_14 = 0xffffffff;
  pDVar15 = (this->fields).pendingPlayers;
  piStack_16 = (int *)&stack0xffffff80;
  puStack_4 = &stack0xffffff80;
  if (pDVar15 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
code_?:
    iVar17 = func_?(0);
  }
  else {
    piStack_16 = (int *)&stack0xffffff80;
    puStack_4 = &stack0xffffff80;
    pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffff8c,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar15,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    auStack_9._20_4_ = pDVar18->dictionary;
    iStack_10 = pDVar18->next;
    iStack_11 = pDVar18->stamp;
    iStack_12 = (pDVar18->current).key;
    pOStack_6 = (pDVar18->current).value;
    uStack_1 = 0;
    while (cVar19 = func_?(), cVar19 != '\0') {
      aKStack_7[0] =
           LevelRewardsManager::LevelRewardsManager_get_NextReward
                     ((LevelRewardsManager *)(auStack_9 + 0x14),
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                     );
      iVar17 = func_?();
      if (iVar17 == 0) goto code_?;
      if (*(MVTeam__Enum *)(iVar17 + 0x14) == removedTeam) {
        iVar17 = func_?(aKStack_7,
                                MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
                               );
        if (iVar17 == 0) goto code_?;
        MVPlayerContainer_UpdateTeam(this,*(int32_t *)(iVar17 + 0x28),defaultTeam,(MethodInfo *)0x0);
      }
    }
    iVar20 = 0;
    *piStack_16 = 0x5d;
    uStack_1 = 0xffffffff;
    func_?();
    iVar17 = iStack_8;
    if (iStack_8 == 0) {
      if (*piStack_16 == 0x5d) {
        iVar20 = -1;
      }
      pDVar15 = (this->fields).players;
      if (pDVar15 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        pDVar18 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffff8c,
                            (Dictionary_2_WinningConditionType_System_Object_ *)pDVar15,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                           );
        auStack_9._0_4_ = pDVar18->dictionary;
        auStack_9._4_4_ = pDVar18->next;
        auStack_9._8_4_ = pDVar18->stamp;
        auStack_9._12_4_ = (pDVar18->current).key;
        auStack_9._16_4_ = (pDVar18->current).value;
        uStack_1 = 2;
        while (cVar19 = func_?(), iVar17 = iStack_8, cVar19 != '\0') {
          KStack_13 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_9,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                                );
          iVar17 = func_?();
          if (iVar17 == 0) goto code_?;
          if (*(MVTeam__Enum *)(iVar17 + 0x14) == removedTeam) {
            iVar17 = func_?(&KStack_13,
                                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
                                   );
            if (iVar17 == 0) goto code_?;
            MVPlayerContainer_UpdateTeam
                      (this,*(int32_t *)(iVar17 + 0x28),defaultTeam,(MethodInfo *)0x0);
          }
        }
        piStack_16[iVar20 + 1] = 0xba;
        uStack_1 = 0xffffffff;
        func_?();
        if (iVar17 == 0) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(iVar17,0,0);
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* MVPlayerContainer() */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer__ctor
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_MVPlayer_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  (this->fields).players = pDVar1;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>;
  pDVar1 = (Dictionary_2_System_Int32_MVPlayer_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  (this->fields).pendingPlayers = pDVar1;
  (this->fields).localPlayerActorNumber = -1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Count
                  (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Object get_Current() */

Object * Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Current
                   (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_1._4_4_ = (MonitorData *)0x0;
  auStack_1._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_1._12_4_ = 0;
  auStack_1._16_4_ = 0;
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_3,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    auStack_1._0_4_ = pDVar2->dictionary;
    auStack_1._4_4_ = pDVar2->next;
    auStack_1._8_4_ = pDVar2->stamp;
    auStack_1._12_4_ = (pDVar2->current).key;
    auStack_1._16_4_ = (pDVar2->current).value;
    KStack_4 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                         ((LevelRewardsManager *)auStack_1,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                         );
    pOVar5 = (Object *)
             func_?(TypeInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>,
                             &KStack_4);
    return pOVar5;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar6)();
  return pOVar5;
}


/* MVPlayer get_Item(Int32) */

MVPlayer *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Item
          (MVPlayerContainer *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).players;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pMVar1 = (MVPlayer *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,actorNumber,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
    return pMVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVPlayer *)(*pcVar2)();
  return pMVar1;
}


/* MVLocalPlayer get_LocalPlayer() */

MVLocalPlayer *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVLocalPlayer *)
           MVPlayerContainer_GetPlayerUnsafe
                     (this,(this->fields).localPlayerActorNumber,(MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayer *)0x0) {
    return (MVLocalPlayer *)0x0;
  }
  bVar2 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
  if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
     ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pMVar4 = (MVLocalPlayer *)0x0;
  if (bVar3) {
    pMVar4 = pMVar1;
  }
  if (pMVar4 != (MVLocalPlayer *)0x0) {
    return pMVar4;
  }
  func_?(pMVar1);
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVLocalPlayer *)(*pcVar5)();
  return pMVar1;
}


/* Int32 get_PendingPlayersCount() */

int32_t Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_PendingPlayersCount
                  (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).pendingPlayers;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[System.Int32,MVPlayer] get_Values() */

Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Values
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pDVar1 = (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                       );
    return pDVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)(*pcVar2)();
  return pDVar1;
}

