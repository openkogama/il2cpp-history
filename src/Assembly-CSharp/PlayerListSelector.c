
/* Void SetActiveTeam(MVTeam) */

void Assembly-CSharp.dll::PlayerListSelector::PlayerListSelector_SetActiveTeam
               (PlayerListSelector *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_PlayerList>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  message = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).playerLists;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
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
    uStack_7 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_8 = 2;
    uStack_9 = 0;
    uStack_10 = 0;
    DStack_11._version = (undefined4)uStack_7;
    DStack_11._index = uStack_7._4_4_;
    DStack_11._current.key = 0;
    DStack_11._current._4_4_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_3 = pDVar1;
    DStack_11._dictionary = pDVar1;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_11,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__MoveNext__
                             ), pOVar13 = DStack_11._current.value, bVar12 != 0) {
      if (DStack_11._current.value == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar14 = pOVar13[1].klass;
      message = pOVar13;
      if (pOVar14 == (Object__Class *)0x0) goto code_?;
      pcVar15 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar15;
      pvVar16 = (void *)(*pcRam_?)(pOVar14);
      message = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar16,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                          );
      if (message == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar14 = message[1].klass;
      if (pOVar14 == (Object__Class *)0x0) goto code_?;
      pcVar15 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar15;
      (*pcRam_?)(pOVar14,0);
    }
    pDVar17 = (this->fields).playerLists;
    if (pDVar17 != (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) {
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar17,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                          );
      message = (Object *)0x0;
      if (pOVar13 != (Object *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar14 = pOVar13[1].klass;
        if (pOVar14 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar13,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar18 = func_?(&UNK_?);
          FUN_?(uVar18,0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pcRam_? = pcVar15;
        pvVar16 = (void *)(*pcRam_?)(pOVar14);
        message = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar16,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
        if (message != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar14 = message[1].klass;
          if (pOVar14 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(message,(MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pcRam_? = pcVar15;
          (*pcRam_?)(pOVar14);
          pDVar17 = (this->fields).playerLists;
          if (pDVar17 != (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) {
            pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar17,team,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                                );
            message = (Object *)0x0;
            if (pOVar13 != (Object *)0x0) {
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
              pOVar14 = pOVar13[1].klass;
              if (pOVar14 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar13,(MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pcVar15 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                uVar18 = func_?(&UNK_?);
                FUN_?(uVar18,0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pcRam_? = pcVar15;
              pvVar16 = (void *)(*pcRam_?)(pOVar14);
              pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar16,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              message = (Object *)0x0;
              if (pOVar13 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar14 = pOVar13[1].klass;
                if (pOVar14 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar13,(MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcVar15 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                  uVar18 = func_?(&UNK_?);
                  FUN_?(uVar18,0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcRam_? = pcVar15;
                (*pcRam_?)(pOVar14);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
code_?:
  uVar18 = func_?(&UNK_?);
  FUN_?(uVar18);
code_?:
  uVar18 = func_?(&UNK_?);
  FUN_?(uVar18);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(message,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(message,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Setup(Dictionary`2[MV.WorldObject.MVTeam,PlayerList]) */

void Assembly-CSharp.dll::PlayerListSelector::PlayerListSelector_Setup
               (PlayerListSelector *this,Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *playerLists
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PlayerListSelectorButton_MethodInfo__UnityEngine__Object__Instantiate<PlayerListSelectorButton>_PlayerListSelectorButton__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListSelector____c__DisplayClass2_0___Setup_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListSelector____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).playerLists = playerLists;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).playerLists >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  this_00 = (UnityEvent *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 == (MVGameControllerBase *)0x0) ||
      (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
     (pMVar8 = (pMVar7->fields).teamManager, pMVar8 == (MVTeamManager *)0x0)) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = 
  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
  ;
  pDVar11 = (pMVar8->fields).teams;
  if (pDVar11 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
  goto code_?;
  if ((pDVar11->fields)._count - (pDVar11->fields)._freeCount == 1) {
    if (this_00 == (UnityEvent *)0x0) goto code_?;
    piVar12 = (int *)((longlong)&(this_00->fields)._.m_PersistentCalls + 4);
    *piVar12 = *piVar12 + 1;
    pIVar13 = (this_00->fields)._.m_Calls;
    uVar1 = *(uint *)&(this_00->fields)._.m_PersistentCalls;
    if (pIVar13 == (InvokableCallList *)0x0) goto code_?;
    if (uVar1 < *(uint *)&(pIVar13->fields).m_RuntimeCalls) {
      *(uint *)&(this_00->fields)._.m_PersistentCalls = uVar1 + 1;
      if (*(uint *)&(pIVar13->fields).m_RuntimeCalls <= uVar1) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14);
code_?:
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14);
code_?:
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
code_?:
        FUN_?();
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RSI,(MethodInfo *)0x0);
code_?:
        FUN_?();
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
code_?:
        FUN_?();
        goto code_?;
      }
      *(undefined4 *)((longlong)&(pIVar13->fields).m_ExecutingCalls + (longlong)(int)uVar1 * 4) = 5;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize
                ((List_1_System_UInt32Enum_ *)this_00,5,pMVar10->klass->rgctx_data[0xe].method);
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
    if (((pMVar6 == (MVGameControllerBase *)0x0) ||
        (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
       ((pMVar8 = (pMVar7->fields).teamManager, pMVar8 == (MVTeamManager *)0x0 ||
        (this_00 = (UnityEvent *)MVTeamManager::MVTeamManager_GetTeamList(pMVar8,(MethodInfo *)0x0),
        this_00 == (UnityEvent *)0x0)))) goto code_?;
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_15 >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  ppUStack_16 = (UnityEvent **)
                ((ulonglong)*(uint *)((longlong)&(this_00->fields)._.m_PersistentCalls + 4) << 0x20)
  ;
  uStack_17 = 0;
  uStack_18 = (longlong)ppUStack_16;
  uStack_19 = 0;
  uStack_15 = 0;
  ppUStack_16 = &pUStack_20;
  pUStack_20 = this_00;
  while (pUStack_20 != (UnityEvent *)0x0) {
    if (uStack_18._4_4_ != *(int *)((longlong)&(pUStack_20->fields)._.m_PersistentCalls + 4)) {
code_?:
      if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (pUStack_20 == (UnityEvent *)0x0) goto code_?;
      if (uStack_18._4_4_ == *(int *)((longlong)&(pUStack_20->fields)._.m_PersistentCalls + 4)) {
        return;
      }
      goto code_?;
    }
    if (*(uint *)&(pUStack_20->fields)._.m_PersistentCalls <= (uint)uStack_18)
    goto code_?;
    pIVar13 = (pUStack_20->fields)._.m_Calls;
    if (pIVar13 == (InvokableCallList *)0x0) goto code_?;
    if (*(uint *)&(pIVar13->fields).m_RuntimeCalls <= (uint)uStack_18) goto code_?;
    team = *(MVTeam__Enum *)
            ((longlong)&(pIVar13->fields).m_ExecutingCalls + (longlong)(int)(uint)uStack_18 * 4);
    uStack_19 = CONCAT44(uStack_19._4_4_,team);
    uStack_18 = CONCAT44(uStack_18._4_4_,(uint)uStack_18 + 1);
    object = (Object *)FUN_?();
    if (object == (Object *)0x0) goto code_?;
    object[1].monitor = (MonitorData *)this;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    original = (this->fields).teamSelectButtonPrefab;
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
    this_00 = (this->fields)._._._._.m_CachedPtr;
    if (this_00 == (UnityEvent *)0x0) goto code_?;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar9;
    pvVar21 = (void *)(*pcRam_?)(this_00);
    parent = (Transform *)
             UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (pvVar21,
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    unaff_RSI = (PlayerListSelectorButton *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)original,parent,0,
                           PlayerListSelectorButton_MethodInfo__UnityEngine__Object__Instantiate<PlayerListSelectorButton>_PlayerListSelectorButton__UnityEngine__Transform__bool_
                          );
    if (unaff_RSI == (PlayerListSelectorButton *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (unaff_RSI->fields)._._._._.m_CachedPtr;
    if (this_00 == (UnityEvent *)0x0) goto code_?;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar9;
    pvVar21 = (void *)(*pcRam_?)(this_00);
    this_00 = (UnityEvent *)
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar21,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                        );
    if (this_00 == (UnityEvent *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar13 = (this_00->fields)._.m_Calls;
    if (pIVar13 == (InvokableCallList *)0x0) goto code_?;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar9;
    (*pcRam_?)(pIVar13,1);
    PlayerListSelectorButton::PlayerListSelectorButton_Initialize(unaff_RSI,team,(MethodInfo *)0x0);
    if (team != MVTeam__Enum_None) {
      *(MVTeam__Enum *)&object[1].klass = team;
      pBVar22 = (unaff_RSI->fields).button;
      this_00 = (UnityEvent *)0x0;
      if (pBVar22 == (Button *)0x0) goto code_?;
      this_00 = (UnityEvent *)(pBVar22->fields).m_OnClick;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,object,MethodInfo__PlayerListSelector____c__DisplayClass2_0___Setup_b__0__,
                 (MethodInfo *)0x0);
      if (this_00 == (UnityEvent *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
    }
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

