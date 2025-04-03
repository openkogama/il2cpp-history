
/* Void Add(MVPlayer) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Add
               (MVPlayerContainer *this,MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (player != (MVPlayer *)0x0) {
    uVar1 = (player->fields).playerState;
    if ((uVar1 == 1) || (uVar1 == 2)) {
      this_00 = (this->fields).players;
    }
    else {
      this_00 = (this->fields).pendingPlayers;
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
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  cStack_6 = '\0';
  if (playerList != (List_1_MVPlayer_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        playerList,
                        MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__);
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                   ,unaff_EDI);
        uStack_1 = 0xffffffff;
        if ((cStack_6 != '\0') &&
           (pAVar11 = (this->fields).OnPlayerListChanged, pAVar11 != (Action *)0x0)) {
          (*(pAVar11->fields)._._.invoke_impl)();
        }
        pAVar11 = (this->fields).OnPlayerListLoaded;
        if (pAVar11 != (Action *)0x0) {
          (*(pAVar11->fields)._._.invoke_impl)();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0) break;
      cVar12 = *(char *)((int)LStack_9._current + 0x44);
      if ((cVar12 == '\x01') || (cVar12 == '\x02')) {
        cStack_6 = '\x01';
      }
      if (cVar12 == '\x03') {
        this_00 = (this->fields).players;
        if (this_00 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                   *(int32_t *)((int)LStack_9._current + 0x30),LStack_9._current,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                  );
      }
      else {
        MVPlayerContainer_Add(this,(MVPlayer *)LStack_9._current,(MethodInfo *)0x0);
      }
    }
  }
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean ContainsKey(Int32) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_ContainsKey
               (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* IEnumerator`1[KeyValuePair`2[System.Int32,MVPlayer]] GetEnumerator() */

IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_GetEnumerator
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_2,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    pDStack_3 = pDVar1->_dictionary;
    iStack_4 = pDVar1->_version;
    iStack_5 = pDVar1->_index;
    uStack_6 = (pDVar1->_current).key;
    uStack_7 = *(undefined8 *)&(pDVar1->_current).value;
    pIVar8 = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)
             func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                             ,&pDStack_3);
    return pIVar8;
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (MVPlayer *)0x0;
  pDVar2 = (this->fields).pendingPlayers;
  if (pDVar2 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,actorNr,
                       (Object **)&stack0xfffffff4,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                      );
    if (bVar3 != 0) {
      return pMVar1;
    }
    pDVar2 = (this->fields).players;
    if (pDVar2 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      value = (MVPlayer__Class *)&stack0xfffffff8;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,actorNr,(Object **)value
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar3 != 0) {
        return (MVPlayer *)value;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  this_00 = (Exception *)func_?();
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uStack4 = func_?();
  pEStack5 = this_00;
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar1 = (MVPlayer *)(*pcVar6)();
  return pMVar1;
}


/* Boolean IsPendingPlayer(Int32) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_IsPendingPlayer
               (MVPlayerContainer *this,int32_t actorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).pendingPlayers;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,actorId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_MoveNext
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_2,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    DStack_3._dictionary = pDVar1->_dictionary;
    DStack_3._version = pDVar1->_version;
    DStack_3._index = pDVar1->_index;
    DStack_3._current.key = (pDVar1->_current).key;
    DStack_3._16_8_ = *(undefined8 *)&(pDVar1->_current).value;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_3,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                      );
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void Remove(Int32) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Remove
               (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).players;
  if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
code_?:
      pDVar1 = (this->fields).players;
      if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          pDVar1 = (this->fields).pendingPlayers;
          if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                            );
          if (bVar2 == 0) goto code_?;
        }
        pDVar1 = (this->fields).players;
        if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                            );
          if (bVar2 != 0) {
            pDVar1 = (this->fields).players;
            if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                      );
            pAVar3 = (this->fields).OnPlayerListChanged;
            if (pAVar3 != (Action *)0x0) {
              (*(pAVar3->fields)._._.invoke_impl)();
            }
          }
          pDVar1 = (this->fields).pendingPlayers;
          if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
            bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                              );
            if (bVar2 == 0) {
              return;
            }
            pDVar1 = (this->fields).pendingPlayers;
            if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
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
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if (bVar2 == 0) goto code_?;
  }
  func_?();
  pEVar4 = (Exception *)func_?();
  pSVar5 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  pEVar4 = (Exception *)func_?();
  pSVar5 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
  uStack6 = func_?();
  pEStack7 = pEVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Reset
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__System_Collections_IEnumerator_Reset__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_3,pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    pDStack_4 = pDVar2->_dictionary;
    iStack_5 = pDVar2->_version;
    iStack_6 = pDVar2->_index;
    uStack_7 = (pDVar2->_current).key;
    uStack_8 = *(undefined8 *)&(pDVar2->_current).value;
    piVar9 = (int *)func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                                    ,&pDStack_4);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__System_Collections_IEnumerator_Reset__
    ;
    uVar10 = CONCAT44(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                     ,piVar9);
    if (piVar9 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar9 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
          ->_0).element_class) goto code_?;
      pDVar2 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
               func_?(piVar9);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
      UInt32,System::Object]::
      Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__System_Collections_IEnumerator_Reset
                (pDVar2,method_00);
      pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
      if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           (&DStack_3,pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                           );
        DStack_11._dictionary = pDVar2->_dictionary;
        DStack_11._version = pDVar2->_version;
        DStack_11._index = pDVar2->_index;
        DStack_11._current.key = (pDVar2->_current).key;
        DStack_11._16_8_ = *(undefined8 *)&(pDVar2->_current).value;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
        UInt32,System::Object]::
        Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                  (&DStack_11,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                  );
        return;
      }
    }
  }
  uVar10 = func_?();
code_?:
  func_?(uVar10);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetPlayerReady(Int32, Boolean) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_SetPlayerReady
               (MVPlayerContainer *this,int32_t actorNr,bool observer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingPlayers;
  if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if (bVar2 != 0) {
code_?:
      pDVar1 = (this->fields).pendingPlayers;
      if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          if (observer != 0) {
            return;
          }
          goto code_?;
        }
        pDVar1 = (this->fields).pendingPlayers;
        if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                            );
          pDVar1 = (this->fields).pendingPlayers;
          if (((pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) &&
              (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__Remove
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                         ), value != (Object *)0x0)) &&
             (pDVar1 = (this->fields).players, pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0)
             ) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(int32_t)value[6].klass,
                       value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                      );
            if (*(char *)&value[8].monitor != '\x03') {
              *(undefined1 *)&value[8].monitor = 3;
              if (value[5].klass != (Object__Class *)0x0) {
                (*(code *)((value[5].klass)->_0).namespaze)();
              }
            }
            pAVar3 = (this->fields).OnPlayerListChanged;
            if (pAVar3 != (Action *)0x0) {
              (*(pAVar3->fields)._._.invoke_impl)();
            }
            if (actorNr != (this->fields).localPlayerActorNumber) {
              return;
            }
            pAVar3 = (this->fields).OnLocalPlayerReady;
            if (pAVar3 == (Action *)0x0) {
              return;
            }
            (*(pAVar3->fields)._._.invoke_impl)();
            (this->fields).OnLocalPlayerReady = (Action *)0x0;
            func_?();
            return;
          }
        }
      }
      goto code_?;
    }
    pDVar1 = (this->fields).players;
    if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                      );
    if ((bVar2 == 0) || (observer != 0)) goto code_?;
  }
  func_?();
  pEVar4 = (Exception *)func_?();
  pSVar5 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  uVar6 = func_?(&TypeInfo__System__Exception);
  pEVar4 = (Exception *)func_?(uVar6);
  method_00 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_Pending_player_not_found);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,method_00);
  func_?(&MethodInfo__MVPlayerContainer__SetPlayerReady_int__bool_);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::MVPlayerContainer::
MVPlayerContainer_System_Collections_IEnumerable_GetEnumerator
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_2,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    pDStack_3 = pDVar1->_dictionary;
    iStack_4 = pDVar1->_version;
    iStack_5 = pDVar1->_index;
    uStack_6 = (pDVar1->_current).key;
    uStack_7 = *(undefined8 *)&(pDVar1->_current).value;
    pIVar8 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                             ,&pDStack_3);
    return pIVar8;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pIVar8 = (IEnumerator *)(*pcVar9)();
  return pIVar8;
}


/* Boolean TryGetForStateChange(Int32, MVPlayer ByRef) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
               (MVPlayerContainer *this,int32_t actorNr,MVPlayer **player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).players;
  if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,(Object **)player,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                      );
    if (bVar2 != 0) {
      return 1;
    }
    pDVar1 = (this->fields).pendingPlayers;
    if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      value = (MVPlayer__Class *)&stack0xfffffff8;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,(Object **)value
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar2 != 0) {
        if (value == (MVPlayer__Class *)0x0) goto code_?;
        if (*(uint8_t *)&(value->_0).events == 3) {
          *player = (MVPlayer *)value;
          func_?();
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean TryGetPlayerByProfileId(Int32, MVPlayer ByRef) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_TryGetPlayerByProfileId
               (MVPlayerContainer *this,int32_t profileId,MVPlayer **player,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
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
  }
  if (profileId < 1) {
    *player = (MVPlayer *)0x0;
    func_?(player);
    uVar4 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar4);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Trying_to_get_tourist_profile_by);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
    func_?(&MethodInfo__MVPlayerContainer__TryGetPlayerByProfileId_int__MVPlayer__);
    func_?();
  }
  else {
    this_00 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer_get_ActivePlayers(this,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      pMVar6 = (MVPlayer *)pDVar5->_currentValue;
      uStack_1 = 1;
      while( true ) {
        bVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                          );
        if (bVar7 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_8);
          uStack_1 = 0xffffffff;
          *player = (MVPlayer *)0x0;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        if (pMVar6 == (MVPlayer *)0x0) break;
        if ((pMVar6->fields)._ProfileID_k__BackingField == profileId) {
          *player = pMVar6;
          func_?();
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_8);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
}


/* Boolean TryGetValue(Int32, MVPlayer ByRef) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_TryGetValue
               (MVPlayerContainer *this,int32_t actorNr,MVPlayer **player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,actorNr,(Object **)player
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void UpdateTeam(Int32, MVTeam) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_UpdateTeam
               (MVPlayerContainer *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  pMVar1 = MVPlayerContainer_GetPlayerUnsafe(this,actorNr,(MethodInfo *)0x0);
  if (pMVar1 != (MVPlayer *)0x0) {
    (pMVar1->fields)._Team_k__BackingField = team;
    if ((pMVar1->fields).playerState == 1) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVLocalPlayer);
        cRam_? = '\x01';
      }
      pMVar2 = MVPlayerContainer_GetPlayerUnsafe
                         (this,(this->fields).localPlayerActorNumber,(MethodInfo *)0x0);
      if (pMVar2 != (MVPlayer *)0x0) {
        bVar3 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           ((pMVar2->klass->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayer))
        goto code_?;
        if ((pMVar1 == pMVar2) &&
           (pAVar4 = (this->fields).OnLocalPlayerTeamChanged, pAVar4 != (Action *)0x0)) {
          (*(pAVar4->fields)._._.invoke_impl)();
        }
      }
      pAVar4 = (this->fields).OnPlayerListChanged;
      if (pAVar4 != (Action *)0x0) {
        (*(pAVar4->fields)._._.invoke_impl)();
      }
    }
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pDVar6 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).pendingPlayers;
  if (pDVar6 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,pDVar6,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                        );
      if (bVar12 == 0) break;
      if (DStack_10._current.value == (Object *)0x0) goto code_?;
      if (DStack_10._current.value[9].klass == (Object__Class *)removedTeam) {
        MVPlayerContainer_UpdateTeam
                  (this,(int32_t)DStack_10._current.value[6].klass,defaultTeam,(MethodInfo *)0x0);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
               ,in_stack_13);
    uStack_1 = 0xffffffff;
    pDVar6 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
    if (pDVar6 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_8,pDVar6,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                         );
      uStack_9 = 0;
      DStack_10._dictionary = pDVar7->_dictionary;
      DStack_10._version = pDVar7->_version;
      DStack_10._index = pDVar7->_index;
      DStack_10._current.key = (pDVar7->_current).key;
      DStack_10._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
      uStack_1 = 4;
      pDStack_11 = &DStack_10;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_10,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_10,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (DStack_10._current.value == (Object *)0x0) break;
        if (DStack_10._current.value[9].klass == (Object__Class *)removedTeam) {
          MVPlayerContainer_UpdateTeam
                    (this,(int32_t)DStack_10._current.value[6].klass,defaultTeam,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MVPlayerContainer() */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer__ctor
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  (this->fields).players = (Dictionary_2_System_Int32_MVPlayer_ *)pDVar1;
  func_?(&this->fields,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  method_00 = (MethodInfo *)&(this->fields).pendingPlayers;
  *(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ **)
   method_00 = pDVar1;
  func_?(method_00,pDVar1);
  (this->fields).localPlayerActorNumber = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[System.Int32,MVPlayer] get_ActivePlayers() */

Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                   );
    func_?(&
                    System__Collections__Generic__Dictionary<int,_MVPlayer>_MethodInfo__System__Linq__Enumerable__ToDictionary<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                   );
    func_?(&TypeInfo__System__Func<MVPlayer,_bool>);
    func_?(&TypeInfo__System__Func<MVPlayer,_int>);
    func_?(&MethodInfo__MVPlayerContainer____c___get_ActivePlayers_b__28_0_MVPlayer_);
    func_?(&MethodInfo__MVPlayerContainer____c___get_ActivePlayers_b__28_1_MVPlayer_);
    func_?(&TypeInfo__MVPlayerContainer____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields).players;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       (pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                       );
    if ((TypeInfo__MVPlayerContainer____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVPlayerContainer____c);
    }
    this_00 = TypeInfo__MVPlayerContainer____c->static_fields->__9__28_0;
    if (this_00 == (Func_2_MVPlayer_Boolean_ *)0x0) {
      if ((TypeInfo__MVPlayerContainer____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVPlayerContainer____c);
      }
      pMVar3 = TypeInfo__MVPlayerContainer____c->static_fields->__9;
      this_00 = (Func_2_MVPlayer_Boolean_ *)func_?(TypeInfo__System__Func<MVPlayer,_bool>);
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_00,(Object *)pMVar3,
                 MethodInfo__MVPlayerContainer____c___get_ActivePlayers_b__28_0_MVPlayer_,
                 (MethodInfo *)0x0);
      TypeInfo__MVPlayerContainer____c->static_fields->__9__28_0 = this_00;
      func_?(&TypeInfo__MVPlayerContainer____c->static_fields->__9__28_0,this_00);
    }
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_2
                       ((IEnumerable_1_System_Object_ *)pDVar2,(Func_2_Object_Boolean_ *)this_00,
                        System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                       );
    if ((TypeInfo__MVPlayerContainer____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVPlayerContainer____c);
    }
    this_01 = TypeInfo__MVPlayerContainer____c->static_fields->__9__28_1;
    if (this_01 == (Func_2_MVPlayer_Int32_ *)0x0) {
      if ((TypeInfo__MVPlayerContainer____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVPlayerContainer____c);
      }
      pMVar3 = TypeInfo__MVPlayerContainer____c->static_fields->__9;
      this_01 = (Func_2_MVPlayer_Int32_ *)func_?(TypeInfo__System__Func<MVPlayer,_int>);
      Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
      Metadata::__Il2CppFullySharedGenericType]::
      ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                 (Object *)pMVar3,
                 MethodInfo__MVPlayerContainer____c___get_ActivePlayers_b__28_1_MVPlayer_,
                 (MethodInfo *)0x0);
      TypeInfo__MVPlayerContainer____c->static_fields->__9__28_1 = this_01;
      func_?(&TypeInfo__MVPlayerContainer____c->static_fields->__9__28_1,this_01);
    }
    pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary
                          (source,(Func_2_Object_Int32_ *)this_01,
                           System__Collections__Generic__Dictionary<int,_MVPlayer>_MethodInfo__System__Linq__Enumerable__ToDictionary<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                          );
    if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                         (pDVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                         );
      return (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)pDVar2;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)(*pcVar4)();
  return pDVar5;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Count
                  (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).players;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                      );
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Object get_Current() */

Object * Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Current
                   (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&TypeInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_2,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                       );
    uStack_3 = (pDVar1->_current).key;
    DStack_2._16_8_ = *(undefined8 *)&(pDVar1->_current).value;
    pOStack_4 = DStack_2._current.value;
    pOVar5 = (Object *)
             func_?(TypeInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>,
                             &uStack_3);
    return pOVar5;
  }
  func_?();
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
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pMVar1 = (MVPlayer *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,actorNumber,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
    return pMVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVPlayer *)(*pcVar3)();
  return pMVar1;
}


/* MVLocalPlayer get_LocalPlayer() */

MVLocalPlayer *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayer);
    cRam_? = '\x01';
  }
  pMVar1 = (MVLocalPlayer *)
           MVPlayerContainer_GetPlayerUnsafe
                     (this,(this->fields).localPlayerActorNumber,(MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayer *)0x0) {
    return (MVLocalPlayer *)0x0;
  }
  bVar2 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
  if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
     ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] == (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
    return pMVar1;
  }
  func_?(pMVar1);
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVLocalPlayer *)(*pcVar3)();
  return pMVar1;
}


/* Int32 get_PendingPlayersCount() */

int32_t Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_PendingPlayersCount
                  (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).pendingPlayers;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                      );
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[System.Int32,MVPlayer] get_Values() */

Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Values
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).players;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                       );
    return (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)pDVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)(*pcVar4)();
  return pDVar5;
}

