
/* Void Add(MVPlayer) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Add
               (MVPlayerContainer *this,MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (player != (MVPlayer *)0x0) {
    if (((player->fields).playerState == 1) || ((player->fields).playerState == 2)) {
      this_00 = (this->fields).players;
    }
    else {
      this_00 = (this->fields).pendingPlayers;
    }
    if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                 (player->fields)._ActorNr_k__BackingField,(Object *)player,
                 CONCAT31((int3)((uint)in_R9D >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Add(List`1[MVPlayer]) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Add_1
               (MVPlayerContainer *this,List_1_MVPlayer_ *playerList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = false;
  if (playerList == (List_1_MVPlayer_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(playerList->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)playerList;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                        );
      if (bVar10 == 0) {
        if ((bVar1) && ((this->fields).OnPlayerListChanged != (Action *)0x0)) {
          pAVar11 = (this->fields).OnPlayerListChanged;
          (*(pAVar11->fields)._._.invoke_impl)
                    ((pAVar11->fields)._._.method_code,(pAVar11->fields)._._.method);
        }
        pAVar11 = (this->fields).OnPlayerListLoaded;
        if (pAVar11 != (Action *)0x0) {
          (*(pAVar11->fields)._._.invoke_impl)
                    ((pAVar11->fields)._._.method_code,(pAVar11->fields)._._.method);
        }
        return;
      }
      if ((MVPlayer *)LStack_9._current == (MVPlayer *)0x0) break;
      if ((((MVPlayer__Fields *)((longlong)LStack_9._current + 0x10))->playerState == 1) ||
         (((MVPlayer__Fields *)((longlong)LStack_9._current + 0x10))->playerState == 2)) {
        bVar1 = true;
      }
      if (((MVPlayer__Fields *)((longlong)LStack_9._current + 0x10))->playerState == 3) {
        this_00 = (this->fields).players;
        if (this_00 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                   ((MVPlayer__Fields *)((longlong)LStack_9._current + 0x10))->
                   _ActorNr_k__BackingField,LStack_9._current,in_R9D,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                   ->klass->rgctx_data[0x22].method);
      }
      else {
        MVPlayerContainer_Add(this,(MVPlayer *)LStack_9._current,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean ContainsKey(Int32) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_ContainsKey
               (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).players;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* IEnumerator`1[KeyValuePair`2[System.Int32,MVPlayer]] GetEnumerator() */

IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_GetEnumerator
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).players;
  if (pDStack_1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)(*pcVar2)();
    return pIVar3;
  }
  uStack_4 = 0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_11 = 2;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = uStack_10;
  uStack_15 = 2;
  pDStack_16 = pDStack_1;
  pIVar3 = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                         ,&pDStack_16);
  return pIVar3;
}


/* MVPlayer GetPlayerUnsafe(Int32) */

MVPlayer *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
          (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingPlayers;
  pMStackX_20 = (MVPlayer *)0x0;
  pMStackX_8 = (MVPlayer *)0x0;
  if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                       (Object **)&pMStackX_20,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                      );
    if (bVar2 != 0) {
      return pMStackX_20;
    }
    pDVar1 = (this->fields).players;
    if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                         (Object **)&pMStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar2 != 0) {
        return pMStackX_8;
      }
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar3);
      message = (String *)func_?(&StringLiteral_Could_not_get_player_unsafe);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar3 = func_?(&MethodInfo__MVPlayerContainer__GetPlayerUnsafe_int_);
      FUN_?(this_00,uVar3);
      pcVar4 = (code *)swi(3);
      pMVar5 = (MVPlayer *)(*pcVar4)();
      return pMVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVPlayer *)(*pcVar4)();
  return pMVar5;
}


/* Boolean IsPendingPlayer(Int32) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_IsPendingPlayer
               (MVPlayerContainer *this,int32_t actorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pendingPlayers;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,actorId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_MoveNext
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
  if (pDStack_1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uStack_4 = 0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_11 = 2;
  DStack_12._current.key = 0;
  DStack_12._current._4_4_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._version = (undefined4)uStack_10;
  DStack_12._index = uStack_10._4_4_;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = pDStack_1;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          UInt32,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                    (&DStack_12,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                    );
  return bVar3;
}


/* Void Remove(Int32) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Remove
               (MVPlayerContainer *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).players;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pendingPlayers;
      if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,actorNr,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar2) {
        uVar3 = func_?(&TypeInfo__System__Exception);
        pEVar4 = (Exception *)func_?(uVar3);
        pSVar5 = (String *)func_?(&StringLiteral_Player_contained_in_both_players);
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__MVPlayerContainer__Remove_int_);
        FUN_?(pEVar4,uVar3);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).players;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,actorNr,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pendingPlayers;
        if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
        goto code_?;
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (pDVar1,actorNr,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar2 < 0) {
          uVar3 = func_?(&TypeInfo__System__Exception);
          pEVar4 = (Exception *)func_?(uVar3);
          pSVar5 = (String *)func_?(&StringLiteral_Player_not_contained_in_either_p);
          mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
          uVar3 = func_?(&MethodInfo__MVPlayerContainer__Remove_int_);
          FUN_?(pEVar4,uVar3);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).players;
      if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (pDVar1,actorNr,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (-1 < iVar2) {
          pDVar7 = (this->fields).players;
          if (pDVar7 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,actorNr,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                    );
          if ((this->fields).OnPlayerListChanged != (Action *)0x0) {
            pAVar8 = (this->fields).OnPlayerListChanged;
            (*(pAVar8->fields)._._.invoke_impl)
                      ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
          }
        }
        pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pendingPlayers;
        if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                            (pDVar1,actorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                             ->klass->rgctx_data[0x21].method);
          if (-1 < iVar2) {
            pDVar7 = (this->fields).pendingPlayers;
            if (pDVar7 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_
                      );
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_Reset
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__System_Collections_IEnumerator_Reset__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = uStack_8;
    uStack_13 = 2;
    uStack_14 = 0;
    uStack_15 = 0;
    pDStack_3 = pDVar1;
    pDStack_16 = pDVar1;
    plVar17 = (longlong *)
             FUN_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                           ,&pDStack_16);
    if (plVar17 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar17 + 0x40) !=
          (
          TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
          ->_0).element_class) {
        FUN_?(plVar17);
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      if (plVar17[2] != 0) {
        if ((int)plVar17[3] != *(int *)(plVar17[2] + 0x2c)) {
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        *(undefined4 *)((longlong)plVar17 + 0x1c) = 0;
        plVar17[4] = 0;
        plVar17[5] = 0;
        DStack_19._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
        if (DStack_19._dictionary != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          uStack_11 = 0;
          uStack_10 = 0;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
            lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          uStack_8 = (ulonglong)(uint)((DStack_19._dictionary)->fields)._version;
          uStack_9 = 2;
          DStack_19._current.key = 0;
          DStack_19._current._4_4_ = 0;
          DStack_19._current.value = (Object *)0x0;
          DStack_19._version = (undefined4)uStack_8;
          DStack_19._index = uStack_8._4_4_;
          DStack_19._getEnumeratorRetType = 2;
          DStack_19._36_4_ = 0;
          pDStack_3 = DStack_19._dictionary;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          UInt32,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                    (&DStack_19,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                    );
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SetPlayerReady(Int32, Boolean) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_SetPlayerReady
               (MVPlayerContainer *this,int32_t actorNr,bool observer,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                  ,CONCAT44(in_register_00000014,actorNr),CONCAT71(in_register_00000081,observer),
                  uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pendingPlayers;
  if (pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (pDVar2,actorNr,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar4 < 0) {
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).players;
    if (pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar2,actorNr,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if ((-1 < iVar4) && (observer == 0)) {
      uVar5 = func_?(&TypeInfo__System__Exception);
      pEVar6 = (Exception *)func_?(uVar5);
      pSVar7 = (String *)func_?(&StringLiteral_Player_already_added_to_players_);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar7,(MethodInfo *)0x0);
      uVar5 = func_?(&MethodInfo__MVPlayerContainer__SetPlayerReady_int__bool_);
      FUN_?(pEVar6,uVar5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).pendingPlayers;
  if (pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
  iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (pDVar2,actorNr,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar4 < 0) {
    if (observer != 0) {
      return;
    }
    uVar5 = func_?(&TypeInfo__System__Exception);
    pEVar6 = (Exception *)func_?(uVar5);
    pSVar7 = (String *)func_?(&StringLiteral_Pending_player_not_found);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar7,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__MVPlayerContainer__SetPlayerReady_int__bool_);
    FUN_?(pEVar6,uVar5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pDVar8 = (this->fields).pendingPlayers;
  if (pDVar8 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
  value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__get_Item
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,actorNr,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                    );
  pDVar8 = (this->fields).pendingPlayers;
  if (((pDVar8 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) ||
      (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
       Dictionary_2_System_Int32_System_Object__Remove
                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,actorNr,
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Remove_int_),
      value == (Object *)0x0)) ||
     (pDVar8 = (this->fields).players, pDVar8 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0))
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,
             *(int32_t *)((longlong)&value[5].monitor + 4),value,
             CONCAT31((int3)((uint)uVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
             ->klass->rgctx_data[0x22].method);
  if (observer == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Player_already_ready);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(char *)&value[8].klass == '\x01') {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Player_already_ready,(MethodInfo *)0x0);
      if (*(char *)&value[8].klass == '\x01') goto code_?;
    }
    *(undefined1 *)&value[8].klass = 1;
    if (value[4].monitor == (MonitorData *)0x0) goto code_?;
    pOVar9 = (Object__Class *)value[4].monitor;
  }
  else {
    if ((*(char *)&value[8].klass == '\x03') ||
       (*(undefined1 *)&value[8].klass = 3, value[5].klass == (Object__Class *)0x0))
    goto code_?;
    pOVar9 = value[5].klass;
  }
  uVar5._0_2_ = (pOVar9->_0).byval_arg.attrs;
  uVar5._2_1_ = (pOVar9->_0).byval_arg.type;
  uVar5._3_5_ = *(undefined5 *)&(pOVar9->_0).byval_arg.field_0xb;
  (*(code *)(pOVar9->_0).namespaze)((pOVar9->_0).element_class,uVar5);
code_?:
  if ((this->fields).OnPlayerListChanged != (Action *)0x0) {
    pAVar10 = (this->fields).OnPlayerListChanged;
    (*(pAVar10->fields)._._.invoke_impl)
              ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
  }
  if ((actorNr == (this->fields).localPlayerActorNumber) &&
     ((this->fields).OnLocalPlayerReady != (Action *)0x0)) {
    pAVar10 = (this->fields).OnLocalPlayerReady;
    (*(pAVar10->fields)._._.invoke_impl)
              ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
    (this->fields).OnLocalPlayerReady = (Action *)0x0;
    func_?(&(this->fields).OnLocalPlayerReady);
  }
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::MVPlayerContainer::
MVPlayerContainer_System_Collections_IEnumerable_GetEnumerator
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).players;
  if (pDStack_1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  uStack_4 = 0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_11 = 2;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = uStack_10;
  uStack_15 = 2;
  pDStack_16 = pDStack_1;
  pIVar3 = (IEnumerator *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>
                         ,&pDStack_16);
  return pIVar3;
}


/* Boolean TryGetForStateChange(Int32, MVPlayer ByRef) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
               (MVPlayerContainer *this,int32_t actorNr,MVPlayer **player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).players;
  pMStackX_8 = (MVPlayer *)0x0;
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
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNr,
                         (Object **)&pMStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar2 != 0) {
        if (pMStackX_8 == (MVPlayer *)0x0) goto code_?;
        if ((pMStackX_8->fields).playerState == 3) {
          *player = pMStackX_8;
          func_?(player);
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean TryGetPlayerByProfileId(Int32, MVPlayer ByRef) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_TryGetPlayerByProfileId
               (MVPlayerContainer *this,int32_t profileId,MVPlayer **player,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  if (profileId < 1) {
    *player = (MVPlayer *)0x0;
    func_?(player);
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar1);
    message = (String *)func_?(&StringLiteral_Trying_to_get_tourist_profile_by);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                MethodInfo__MVPlayerContainer__TryGetPlayerByProfileId_int__MVPlayer__
                               );
    FUN_?(this_00,uVar1);
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar2 = uStack_3;
code_?:
    uStack_3 = uVar2;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDVar4 = MVPlayerContainer_get_ActivePlayers(this,(MethodInfo *)0x0);
    if (pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    uStack_7 = (pDVar4->fields)._dictionary;
    puStack_8 = (undefined4 *)0x0;
    uStack_9 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_7 >> 0xc);
      lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    if (uStack_7 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    iStack_14 = (uStack_7->fields)._version;
    pMVar15 = (MVPlayer *)0x0;
    uStack_9 = 0;
    uStack_7._4_4_ = (undefined4)((ulonglong)uStack_7 >> 0x20);
    uStack_16 = (undefined4)uStack_7;
    uStack_17 = uStack_7._4_4_;
    uStack_3 = 0;
    pMStack_18 = (MVPlayer *)0x0;
    uStack_7 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
    puStack_8 = &uStack_16;
    while (lVar10 = CONCAT44(uStack_17,uStack_16), lVar10 != 0) {
      if (iStack_14 != *(int *)(lVar10 + 0x2c)) goto code_?;
      do {
        if (lVar10 == 0) goto code_?;
        if (*(uint *)(lVar10 + 0x20) <= uStack_3) {
          *player = pMVar15;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)player >> 0xc);
            lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          return 0;
        }
        lVar19 = *(longlong *)(lVar10 + 0x18);
        lVar20 = (longlong)(int)uStack_3;
        uVar2 = uStack_3 + 1;
        if (lVar19 == 0) goto code_?;
        bVar13 = *(uint *)(lVar19 + 0x18) <= uStack_3;
        uStack_3 = uVar2;
        if (bVar13) goto code_?;
      } while (*(int *)(lVar19 + 0x20 + lVar20 * 0x18) < 0);
      pMStack_18 = *(MVPlayer **)(lVar19 + (lVar20 + 2) * 0x18);
      func_?();
      if (pMStack_18 == (MVPlayer *)0x0) goto code_?;
      if ((pMStack_18->fields)._ProfileID_k__BackingField == profileId) {
        *player = pMStack_18;
        func_?(player);
        return 1;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean TryGetValue(Int32, MVPlayer ByRef) */

bool Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_TryGetValue
               (MVPlayerContainer *this,int32_t actorNr,MVPlayer **player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).players;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,actorNr,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar3 < 0) {
    *player = (MVPlayer *)0x0;
    return 0;
  }
  pDVar4 = (this_00->fields)._entries;
  if (pDVar4 == (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((uint)pDVar4->max_length <= uVar3) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  bVar5 = iRam_? != 0;
  *player = *(MVPlayer **)&pDVar4->vector[(int)uVar3].value.y;
  if (bVar5) {
    uVar3 = (uint)((ulonglong)player >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return 1;
}


/* Void UpdateTeam(Int32, MVTeam) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_UpdateTeam
               (MVPlayerContainer *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  pMVar1 = (MVLocalPlayer *)MVPlayerContainer_GetPlayerUnsafe(this,actorNr,(MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    uVar2 = (pMVar1->fields)._.playerState;
    (pMVar1->fields)._._Team_k__BackingField = team;
    if (uVar2 == 1) {
      pMVar3 = MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
      if ((pMVar1 == pMVar3) && ((this->fields).OnLocalPlayerTeamChanged != (Action *)0x0)) {
        pAVar4 = (this->fields).OnLocalPlayerTeamChanged;
        (*(pAVar4->fields)._._.invoke_impl)
                  ((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
      }
      if ((this->fields).OnPlayerListChanged != (Action *)0x0) {
        pAVar4 = (this->fields).OnPlayerListChanged;
        (*(pAVar4->fields)._._.invoke_impl)
                  ((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
      }
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTeamForPlayersOnRemovedTeam(MVTeam, MVTeam) */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_UpdateTeamForPlayersOnRemovedTeam
               (MVPlayerContainer *this,MVTeam__Enum removedTeam,MVTeam__Enum defaultTeam,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).pendingPlayers;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    DStack_12._version = (undefined4)uStack_8;
    DStack_12._index = uStack_8._4_4_;
    DStack_12._current.key = 0;
    DStack_12._current._4_4_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_3 = pDVar1;
    DStack_12._dictionary = pDVar1;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_12,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                             ), bVar13 != 0) {
      if (DStack_12._current.value == (Object *)0x0) {
        FUN_?();
        FUN_?();
        goto code_?;
      }
      if (*(MVTeam__Enum *)((longlong)&DStack_12._current.value[8].klass + 4) == removedTeam) {
        MVPlayerContainer_UpdateTeam
                  (this,*(int32_t *)((longlong)&DStack_12._current.value[5].monitor + 4),defaultTeam
                   ,(MethodInfo *)0x0);
      }
    }
    pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).players;
    if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_10 = 0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
        lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
      uStack_9 = 2;
      DStack_12._version = (undefined4)uStack_8;
      DStack_12._index = uStack_8._4_4_;
      DStack_12._current.key = 0;
      DStack_12._current._4_4_ = 0;
      DStack_12._current.value = (Object *)0x0;
      DStack_12._getEnumeratorRetType = 2;
      DStack_12._36_4_ = 0;
      pDStack_3 = pDVar1;
      DStack_12._dictionary = pDVar1;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_12,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                          );
        if (bVar13 == 0) {
          return;
        }
        if (DStack_12._current.value == (Object *)0x0) break;
        if (*(MVTeam__Enum *)((longlong)&DStack_12._current.value[8].klass + 4) == removedTeam) {
          MVPlayerContainer_UpdateTeam
                    (this,*(int32_t *)((longlong)&DStack_12._current.value[5].monitor + 4),
                     defaultTeam,(MethodInfo *)0x0);
        }
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* MVPlayerContainer() */

void Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer__ctor
               (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  bVar2 = iRam_? != 0;
  (this->fields).players = (Dictionary_2_System_Int32_MVPlayer_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  bVar2 = iRam_? != 0;
  (this->fields).pendingPlayers = (Dictionary_2_System_Int32_MVPlayer_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).pendingPlayers >> 0xc);
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
  (this->fields).localPlayerActorNumber = -1;
  return;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[System.Int32,MVPlayer] get_ActivePlayers() */

Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__Dictionary<int,_MVPlayer>_MethodInfo__System__Linq__Enumerable__ToDictionary<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVPlayer,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVPlayer,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPlayerContainer____c___get_ActivePlayers_b__28_0_MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPlayerContainer____c___get_ActivePlayers_b__28_1_MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPlayerContainer____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).players;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             TypeConverterRegistry+ConverterKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                       );
    if (*(int *)&(TypeInfo__MVPlayerContainer____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVPlayerContainer____c);
    }
    this_01 = TypeInfo__MVPlayerContainer____c->static_fields->__9__28_0;
    if (this_01 == (Func_2_MVPlayer_Boolean_ *)0x0) {
      if (*(int *)&(TypeInfo__MVPlayerContainer____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVPlayerContainer____c);
      }
      pMVar1 = TypeInfo__MVPlayerContainer____c->static_fields->__9;
      this_01 = (Func_2_MVPlayer_Boolean_ *)FUN_?(TypeInfo__System__Func<MVPlayer,_bool>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                ((Predicate_1_Object_ *)this_01,(Object *)pMVar1,
                 MethodInfo__MVPlayerContainer____c___get_ActivePlayers_b__28_0_MVPlayer_,
                 (MethodInfo *)0x0);
      TypeInfo__MVPlayerContainer____c->static_fields->__9__28_0 = this_01;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__MVPlayerContainer____c->static_fields->__9__28_0 >>
                       0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                          ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_01,
                           System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                          );
    if (*(int *)&(TypeInfo__MVPlayerContainer____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVPlayerContainer____c);
    }
    this_02 = TypeInfo__MVPlayerContainer____c->static_fields->__9__28_1;
    if (this_02 == (Func_2_MVPlayer_Int32_ *)0x0) {
      if (*(int *)&(TypeInfo__MVPlayerContainer____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVPlayerContainer____c);
      }
      pMVar1 = TypeInfo__MVPlayerContainer____c->static_fields->__9;
      this_02 = (Func_2_MVPlayer_Int32_ *)FUN_?(TypeInfo__System__Func<MVPlayer,_int>);
      mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                ((Func_2_Object_Int32Enum_ *)this_02,(Object *)pMVar1,
                 MethodInfo__MVPlayerContainer____c___get_ActivePlayers_b__28_1_MVPlayer_,
                 (MethodInfo *)0x0);
      TypeInfo__MVPlayerContainer____c->static_fields->__9__28_1 = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__MVPlayerContainer____c->static_fields->__9__28_1 >>
                       0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
    pMVar7 = 
    System__Collections__Generic__Dictionary<int,_MVPlayer>_MethodInfo__System__Linq__Enumerable__ToDictionary<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
    ;
    if ((
        System__Collections__Generic__Dictionary<int,_MVPlayer>_MethodInfo__System__Linq__Enumerable__ToDictionary<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__Collections__Generic__Dictionary<int,_MVPlayer>_MethodInfo__System__Linq__Enumerable__ToDictionary<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                   );
    }
    elementSelector =
         System.Core.dll::System::Linq::IdentityFunction`1[System::Object]::
         IdentityFunction_1_System_Object__get_Instance((pMVar7->field7_0x38).rgctx_data[2].method);
    pDVar8 = (Dictionary_2_System_Int32_MVPlayer_ *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_9
                       (source_00,(Func_2_Object_Int32_ *)this_02,elementSelector,
                        (IEqualityComparer_1_System_Int32_ *)0x0,
                        (pMVar7->field7_0x38).rgctx_data[5].method);
    if (pDVar8 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      if ((pDVar8->fields)._values !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0) {
        return (pDVar8->fields)._values;
      }
      pvVar9 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__->
               klass->rgctx_data[0x1d].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
        pvVar9 = (void *)FUN_?(pvVar9);
      }
      pDVar10 = (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)
               FUN_?(pvVar9);
      iVar11 = iRam_?;
      (pDVar10->fields)._dictionary = pDVar8;
      if (iVar11 != 0) {
        uVar2 = (uint)((ulonglong)&pDVar10->fields >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
          iVar11 = iRam_?;
        } while (!bVar6);
      }
      (pDVar8->fields)._values = pDVar10;
      if (iVar11 == 0) {
        return pDVar10;
      }
      uVar2 = (uint)((ulonglong)&(pDVar8->fields)._values >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
      return (pDVar8->fields)._values;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pDVar10 = (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)(*pcVar12)();
  return pDVar10;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Count
                  (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).players;
  if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    return (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Object get_Current() */

Object * Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Current
                   (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).players;
  if (pDStack_1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pOVar3 = (Object *)(*pcVar2)();
    return pOVar3;
  }
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  uStack_12 = 0;
  uStack_13 = 0;
  pOVar3 = (Object *)
           FUN_?(TypeInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>,
                         &uStack_12);
  return pOVar3;
}


/* MVPlayer get_Item(Int32) */

MVPlayer *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_Item
          (MVPlayerContainer *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).players;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVPlayer *)(*pcVar2)();
    return pMVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,actorNumber,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVPlayer *)(*pcVar2)();
    return pMVar3;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(MVPlayer **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVPlayer *)(*pcVar2)();
    return pMVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVPlayer *)(*pcVar2)();
  return pMVar3;
}


/* MVLocalPlayer get_LocalPlayer() */

MVLocalPlayer *
Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
          (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVLocalPlayer *)
           MVPlayerContainer_GetPlayerUnsafe
                     (this,(this->fields).localPlayerActorNumber,(MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    bVar2 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
      FUN_?(pMVar1,TypeInfo__MVLocalPlayer);
      pcVar3 = (code *)swi(3);
      pMVar1 = (MVLocalPlayer *)(*pcVar3)();
      return pMVar1;
    }
  }
  return pMVar1;
}


/* Int32 get_PendingPlayersCount() */

int32_t Assembly-CSharp.dll::MVPlayerContainer::MVPlayerContainer_get_PendingPlayersCount
                  (MVPlayerContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingPlayers;
  if (pDVar1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    return (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
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
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).players;
  if (pDVar1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)(*pcVar2)();
    return pDVar3;
  }
  if ((pDVar1->fields)._values !=
      (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0) {
    return (pDVar1->fields)._values;
  }
  pvVar4 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__->klass
           ->rgctx_data[0x1d].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
    pvVar4 = (void *)FUN_?(pvVar4);
  }
  pDVar3 = (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)FUN_?(pvVar4);
  iVar5 = iRam_?;
  (pDVar3->fields)._dictionary = pDVar1;
  if (iVar5 != 0) {
    uVar6 = (uint)((ulonglong)&pDVar3->fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar5 = iRam_?;
    } while (!bVar10);
  }
  (pDVar1->fields)._values = pDVar3;
  if (iVar5 == 0) {
    return pDVar3;
  }
  uVar6 = (uint)((ulonglong)&(pDVar1->fields)._values >> 0xc);
  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
  do {
    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
    LOCK();
    bVar10 = uVar8 == *puVar9;
    if (bVar10) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar10);
  return (pDVar1->fields)._values;
}

