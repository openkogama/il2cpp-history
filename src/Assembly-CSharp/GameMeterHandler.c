
/* Void Awake() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_Awake
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterHandler__UpdateValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = 0;
  bVar2 = 0;
  pLVar3 = (this->fields).gameMeters;
  if (pLVar3 != (List_1_GameMeterBase_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pEVar10 = (EventHandler_1_EventArgs_ *)0x0;
    pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
    uStack_12 = 0;
    LStack_13._8_8_ = pLStack_11;
    LStack_13._current = (Object *)0x0;
    uStack_5 = 0;
    pLStack_11 = &LStack_13;
    LStack_13._list = (List_1_System_Object_ *)pLVar3;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_13,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__MoveNext__
                              ), pOVar15 = LStack_13._current, bVar14 != 0) {
      if (LStack_13._current == (Object *)0x0) goto code_?;
      (*(code *)(LStack_13._current)->klass[1]._0.name)
                (LStack_13._current,(LStack_13._current)->klass[1]._0.namespaze);
      cVar16 = (*(code *)pOVar15->klass[1]._0.element_class)(pOVar15,pOVar15->klass[1]._0.castClass)
      ;
      if (((cVar16 != '\0') &&
          (uVar4 = (*(code *)pOVar15->klass[1]._0.image)(pOVar15,pOVar15->klass[1]._0.gc_desc),
          uVar4 != 4)) && (uVar4 != 10)) {
        if ((uVar4 == 3) || (uVar4 == 8)) {
          bVar1 = 1;
        }
        else if ((((uVar4 & 0xfffffff9) == 0) && (uVar4 != 4)) || (uVar4 == 1)) {
          bVar2 = 1;
        }
      }
    }
    pGVar17 = (this->fields).collectiblesAndTimersSpacer;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar17 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar17->fields)._.m_CachedPtr != (void *)0x0) {
        pGVar17 = (this->fields).collectiblesAndTimersSpacer;
        if (pGVar17 == (GameObject *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar18 = (pGVar17->fields)._.m_CachedPtr;
        if (pvVar18 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar17,(MethodInfo *)0x0);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        pcVar19 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
          uVar20 = func_?(&UNK_?);
          FUN_?(uVar20,0);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        pcRam_? = pcVar19;
        (*pcRam_?)(pvVar18);
      }
    }
    pGVar17 = (this->fields).timersAndWinConditionsSpacer;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar17 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar17->fields)._.m_CachedPtr != (void *)0x0) {
        pGVar17 = (this->fields).timersAndWinConditionsSpacer;
        if (pGVar17 == (GameObject *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar18 = (pGVar17->fields)._.m_CachedPtr;
        if (pvVar18 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar17,(MethodInfo *)0x0);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        pcVar19 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
          uVar20 = func_?(&UNK_?);
          FUN_?(uVar20,0);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        pcRam_? = pcVar19;
        (*pcRam_?)(pvVar18,bVar2 & bVar1);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar21 != (MVGameControllerBase *)0x0) &&
       (pMVar22 = (pMVar21->fields).game, pMVar22 != (MVNetworkGame *)0x0)) {
      pGVar23 = (pMVar22->fields).gameStatCounterManager;
      pUVar24 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar24,(Object *)this,
                 MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                 ,(MethodInfo *)0x0);
      if (pGVar23 != (GameStatCounterManager *)0x0) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
                  (pGVar23,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar24,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar21 != (MVGameControllerBase *)0x0) &&
           (pMVar22 = (pMVar21->fields).game, pMVar22 != (MVNetworkGame *)0x0)) {
          pGVar23 = (pMVar22->fields).gameStatCounterManager;
          pUVar24 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar24,(Object *)this,
                     MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                     ,(MethodInfo *)0x0);
          if (pGVar23 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_add_OnCounterTypeChanged
                      (pGVar23,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar24,(MethodInfo *)0x0
                      );
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar21 != (MVGameControllerBase *)0x0) &&
               (pMVar22 = (pMVar21->fields).game, pMVar22 != (MVNetworkGame *)0x0)) {
              pWVar25 = (pMVar22->fields)._WinningConditionManager_k__BackingField;
              pUVar24 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar24,(Object *)this,
                         MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (pWVar25 != (WinningConditionManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                ppEVar26 = &(pWVar25->fields).OnWinningConditionAddedOrRemoved;
                pEVar27 = (pWVar25->fields).OnWinningConditionAddedOrRemoved;
                do {
                  pDVar28 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pEVar27,(Delegate *)pUVar24,(MethodInfo *)0x0);
                  pEVar29 = TypeInfo__System__EventHandler<System::EventArgs>;
                  pEVar30 = pEVar10;
                  if ((pDVar28 != (Delegate *)0x0) &&
                     (pEVar30 = (EventHandler_1_EventArgs_ *)
                                FUN_?(pDVar28,
                                              TypeInfo__System__EventHandler<System::EventArgs>),
                     pEVar30 == (EventHandler_1_EventArgs_ *)0x0)) {
                    FUN_?(pDVar28,pEVar29);
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                  LOCK();
                  pEVar31 = *ppEVar26;
                  bVar9 = pEVar27 == pEVar31;
                  if (bVar9) {
                    *ppEVar26 = pEVar30;
                    pEVar31 = pEVar27;
                  }
                  UNLOCK();
                  pEVar30 = pEVar27;
                  if (!bVar9) {
                    pEVar30 = pEVar31;
                  }
                  if (iRam_? != 0) {
                    uVar4 = (uint)((ulonglong)ppEVar26 >> 0xc);
                    lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                      LOCK();
                      bVar9 = uVar7 == *puVar8;
                      if (bVar9) {
                        *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar9);
                  }
                  bVar9 = pEVar30 != pEVar27;
                  pEVar27 = pEVar30;
                } while (bVar9);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar21 != (MVGameControllerBase *)0x0) &&
                    (pMVar22 = (pMVar21->fields).game, pMVar22 != (MVNetworkGame *)0x0)) &&
                   (pMVar32 = (pMVar22->fields).playerContainer, pMVar32 != (MVPlayerContainer *)0x0
                   )) {
                  a = (pMVar32->fields).OnPlayerListChanged;
                  pDVar28 = (Delegate *)FUN_?(TypeInfo__System__Action);
                  pMVar33 = MethodInfo__GameMeterHandler__UpdateValue__;
                  (pDVar28->fields).method_ptr =
                       MethodInfo__GameMeterHandler__UpdateValue__->virtualMethodPointer;
                  (pDVar28->fields).method = pMVar33;
                  (pDVar28->fields).m_target = (Object *)this;
                  if (iRam_? != 0) {
                    uVar4 = (uint)((ulonglong)&(pDVar28->fields).m_target >> 0xc);
                    lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                      LOCK();
                      bVar9 = uVar7 == *puVar8;
                      if (bVar9) {
                        *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar9);
                  }
                  uVar34 = pMVar33->parameters_count;
                  (pDVar28->fields).method_code = pDVar28;
                  if (((pMVar33->flags & 0x10) == 0) || (uVar34 != 0)) {
                    (pDVar28->fields).method_code = (pDVar28->fields).m_target;
                    puVar35 = (pDVar28->fields).method_ptr;
                  }
                  else {
                    puVar35 = &UNK_?;
                  }
                  (pDVar28->fields).invoke_impl = puVar35;
                  (pDVar28->fields).extra_arg = FUN_?;
                  pEVar27 = (EventHandler_1_EventArgs_ *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a,pDVar28,(MethodInfo *)0x0);
                  if (pEVar27 == (EventHandler_1_EventArgs_ *)0x0) {
                    (pMVar32->fields).OnPlayerListChanged = (Action *)0x0;
                  }
                  else {
                    pEVar30 = pEVar10;
                    if (pEVar27->klass ==
                        (EventHandler_1_EventArgs___Class *)TypeInfo__System__Action) {
                      pEVar30 = pEVar27;
                    }
                    if (pEVar30 == (EventHandler_1_EventArgs_ *)0x0) {
                      FUN_?(pEVar27);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    (pMVar32->fields).OnPlayerListChanged = (Action *)pEVar30;
                    if (pEVar27->klass ==
                        (EventHandler_1_EventArgs___Class *)TypeInfo__System__Action) {
                      pEVar10 = pEVar27;
                    }
                    if (pEVar10 == (EventHandler_1_EventArgs_ *)0x0) {
                      FUN_?(pEVar27);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar4 = (uint)((ulonglong)&(pMVar32->fields).OnPlayerListChanged >> 0xc);
                    lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                      LOCK();
                      bVar9 = uVar7 == *puVar8;
                      if (bVar9) {
                        *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar9);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void ConditionCountChanged(Object, EventArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_ConditionCountChanged
               (GameMeterHandler *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gameMeters;
  uVar2 = 0;
  if (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      if (pLVar1 == (List_1_GameMeterBase_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = (pLVar1->fields)._items;
      if (pGVar5 == (GameMeterBase__Array *)0x0) break;
      if ((uint)pGVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = *(longlong **)((longlong)pGVar5->vector + lVar3 + -0x20);
      if (plVar6 == (longlong *)0x0) break;
      (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      pLVar1 = (this->fields).gameMeters;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_GameMeterBase_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CounterChanged(Object, OnCounterTypeChangedArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_CounterChanged
               (GameMeterHandler *this,Object *sender,OnCounterTypeChangedArgs *args,
               MethodInfo *method)

{
  method_00 = (MethodInfo *)args;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
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
     (this_00 = (pMVar2->fields).gameStatCounterManager, this_00 != (GameStatCounterManager *)0x0))
  {
    player = (MVPlayer *)0x0;
    pHVar3 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                       (this_00,(MethodInfo *)0x0);
    if (pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
      if (1 < (pHVar3->fields)._count) {
code_?:
        GameMeterHandler_UpdateValue(this,(MethodInfo *)0x0);
        return;
      }
      if (args != (OnCounterTypeChangedArgs *)0x0) {
        iVar4 = (args->fields).actorNumber;
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
        if (extraout_RAX != 0) {
          if (iVar4 != *(int *)(extraout_RAX + 0x5c)) {
            return;
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnDestroy
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pGVar4 = (pMVar3->fields).gameStatCounterManager;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                 ,(MethodInfo *)0x0);
      if (pGVar4 != (GameStatCounterManager *)0x0) {
        MVWorldObject.dll::GameStatCounterManager::
        GameStatCounterManager_remove_OnCounterTypeChanged
                  (pGVar4,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar5,(MethodInfo *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 != (MVNetworkGame *)0x0) {
          pGVar4 = (pMVar3->fields).gameStatCounterManager;
          pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar5,(Object *)this,
                     MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                     ,(MethodInfo *)0x0);
          if (pGVar4 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_remove_OnCounterTypeChanged
                      (pGVar4,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar5,(MethodInfo *)0x0)
            ;
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame *)0x0) {
              pWVar6 = (pMVar3->fields)._WinningConditionManager_k__BackingField;
              pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar5,(Object *)this,
                         MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (pWVar6 != (WinningConditionManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                ppEVar7 = &(pWVar6->fields).OnWinningConditionAddedOrRemoved;
                pEVar8 = (EventHandler_1_EventArgs_ *)0x0;
                pEVar9 = (pWVar6->fields).OnWinningConditionAddedOrRemoved;
                do {
                  pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                                      ((Delegate *)pEVar9,(Delegate *)pUVar5,(MethodInfo *)0x0);
                  pEVar11 = TypeInfo__System__EventHandler<System::EventArgs>;
                  pEVar12 = pEVar8;
                  if ((pDVar10 != (Delegate *)0x0) &&
                     (pEVar12 = (EventHandler_1_EventArgs_ *)
                                FUN_?(pDVar10,
                                              TypeInfo__System__EventHandler<System::EventArgs>),
                     pEVar12 == (EventHandler_1_EventArgs_ *)0x0)) {
                    FUN_?(pDVar10,pEVar11);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  LOCK();
                  pEVar14 = *ppEVar7;
                  bVar15 = pEVar9 == pEVar14;
                  if (bVar15) {
                    *ppEVar7 = pEVar12;
                    pEVar14 = pEVar9;
                  }
                  UNLOCK();
                  pEVar12 = pEVar9;
                  if (!bVar15) {
                    pEVar12 = pEVar14;
                  }
                  if (iRam_? != 0) {
                    uVar16 = (uint)((ulonglong)ppEVar7 >> 0xc);
                    lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                      puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                      LOCK();
                      bVar15 = uVar18 == *puVar19;
                      if (bVar15) {
                        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar15);
                  }
                  bVar15 = pEVar12 != pEVar9;
                  pEVar9 = pEVar12;
                } while (bVar15);
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar3 != (MVNetworkGame *)0x0) &&
                   (pMVar20 = (pMVar3->fields).playerContainer, pMVar20 != (MVPlayerContainer *)0x0))
                {
                  source = (pMVar20->fields).OnPlayerListChanged;
                  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_00,(Object *)this,MethodInfo__GameMeterHandler__UpdateValue__,
                             (MethodInfo *)0x0);
                  pEVar9 = (EventHandler_1_EventArgs_ *)
                            mscorlib.dll::System::Delegate::Delegate_Remove
                                      ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
                  if (pEVar9 == (EventHandler_1_EventArgs_ *)0x0) {
                    (pMVar20->fields).OnPlayerListChanged = (Action *)0x0;
                  }
                  else {
                    pEVar12 = pEVar8;
                    if ((Action__Class *)pEVar9->klass == TypeInfo__System__Action) {
                      pEVar12 = pEVar9;
                    }
                    if (pEVar12 == (EventHandler_1_EventArgs_ *)0x0) {
                      FUN_?(pEVar9);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    (pMVar20->fields).OnPlayerListChanged = (Action *)pEVar12;
                    if ((Action__Class *)pEVar9->klass == TypeInfo__System__Action) {
                      pEVar8 = pEVar9;
                    }
                    if (pEVar8 == (EventHandler_1_EventArgs_ *)0x0) {
                      FUN_?(pEVar9);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                  }
                  if (iRam_? == 0) {
                    return;
                  }
                  uVar16 = (uint)((ulonglong)&(pMVar20->fields).OnPlayerListChanged >> 0xc);
                  lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                    puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                    LOCK();
                    bVar15 = uVar18 == *puVar19;
                    if (bVar15) {
                      *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar15);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnEnable
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gameMeters;
  uVar2 = 0;
  if (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      if (pLVar1 == (List_1_GameMeterBase_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = (pLVar1->fields)._items;
      if (pGVar5 == (GameMeterBase__Array *)0x0) break;
      if ((uint)pGVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = *(longlong **)((longlong)pGVar5->vector + lVar3 + -0x20);
      if (plVar6 == (longlong *)0x0) break;
      (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      pLVar1 = (this->fields).gameMeters;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_GameMeterBase_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGameStatUpdated(Object, OnCounterTypeChangedArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnGameStatUpdated
               (GameMeterHandler *this,Object *sender,OnCounterTypeChangedArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Score__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_18[0] = GameStatCounterType__Enum_None;
  if (args != (OnCounterTypeChangedArgs *)0x0) {
    scoreCount = (args->fields).count;
    method_00 = (MethodInfo *)(ulonglong)scoreCount;
    uVar1 = 0;
    bVar2 = (args->fields).counterType;
    player = (MVPlayer *)(ulonglong)bVar2;
    WinningConditionNotificationManager::WinningConditionNotificationManager_UpdateNotification
              ((args->fields).actorNumber,(uint)bVar2,scoreCount,(MethodInfo *)0x0);
    iVar3 = (args->fields).actorNumber;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (extraout_RAX != 0) {
      if ((iVar3 == *(int *)(extraout_RAX + 0x5c)) && ((args->fields).counterType == 1)) {
        WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                  ((GameStatCounterType__Enum *)auStackX_18,(MethodInfo *)0x0);
        if (auStackX_18[0] == GameStatCounterType__Enum_Kill) {
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          auStackX_18[0] = GameStatCounterType__Enum_Kill;
          key = (Object *)FUN_?(uRam_?);
          value = TM::TM__(StringLiteral_Score__1,(MethodInfo *)0x0);
          if (this_00 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,key,(Object *)value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          NotificationController::NotificationController_PushNotification_2
                    (NotificationType__Enum_KillPrimary,
                     (Dictionary_2_System_Object_System_Object_ *)this_00,
                     NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_UpdateValue
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gameMeters;
  uVar2 = 0;
  if (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      if (pLVar1 == (List_1_GameMeterBase_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = (pLVar1->fields)._items;
      if (pGVar5 == (GameMeterBase__Array *)0x0) break;
      if ((uint)pGVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = *(longlong **)((longlong)pGVar5->vector + lVar3 + -0x20);
      if (plVar6 == (longlong *)0x0) break;
      (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      pLVar1 = (this->fields).gameMeters;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_GameMeterBase_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

