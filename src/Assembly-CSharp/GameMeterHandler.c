
/* Void Awake() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_Awake
               (GameMeterHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__get_Current__
                   );
    func_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                   );
    func_?(&
                    MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                   );
    func_?(&
                    MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                   );
    func_?(&MethodInfo__GameMeterHandler__UpdateValue__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__GetEnumerator__)
    ;
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  bStack_6 = 0;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  bStack_8 = 0;
  bStack_9 = 0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).gameMeters;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_11,this_00,
                        MethodInfo__System__Collections__Generic__List<GameMeterBase>__GetEnumerator__
                       );
    unaff_ESI = (RegexCharClass_SingleRange)&LStack_7;
    LStack_7._list = (List_1_System_Object_ *)pLVar10->_list;
    LStack_7._index = pLVar10->_index;
    LStack_7._version = pLVar10->_version;
    LStack_7._current = *(Object **)&pLVar10->_current;
    LStack_11._version = 0;
    uStack_1 = 1;
    LStack_11._current = unaff_ESI;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__MoveNext__
                        );
      pOVar13 = LStack_7._current;
      if (bVar12 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      (**(code **)(*(int *)LStack_7._current + 0xe8))
                (LStack_7._current,*(undefined4 *)(*(int *)LStack_7._current + 0xec));
      if ((RegexCharClass_SingleRange)pOVar13 == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      cVar14 = (**(code **)(*(int *)pOVar13 + 0x100))(pOVar13,*(undefined4 *)(*(int *)pOVar13 + 0x104));
      if (cVar14 != '\0') {
        iVar15 = func_?(4,pOVar13);
        if ((iVar15 == 4) || (iVar15 == 10)) {
          bStack_8 = 1;
        }
        else if ((iVar15 == 3) || (iVar15 == 8)) {
          bStack_9 = 1;
        }
        else if ((((iVar15 == 6) || (iVar15 == 2)) || (iVar15 == 0)) || (iVar15 == 1)) {
          bStack_6 = 1;
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)unaff_ESI,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<GameMeterBase>__Dispose__
               ,in_stack_16);
    uStack_1 = 0xffffffff;
    pGVar17 = (this->fields).collectiblesAndTimersSpacer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (bVar12 != 0) {
      pGVar17 = (this->fields).collectiblesAndTimersSpacer;
      if (pGVar17 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar17,bStack_9 & bStack_8,(MethodInfo *)0x0);
    }
    pGVar17 = (this->fields).timersAndWinConditionsSpacer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar12 != 0) {
      pGVar17 = (this->fields).timersAndWinConditionsSpacer;
      if (pGVar17 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar17,bStack_6 & bStack_9,(MethodInfo *)0x0);
    }
    pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pGVar19 = (pMVar18->fields).gameStatCounterManager;
      LStack_11._current =
           (RegexCharClass_SingleRange)
           func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                ((EventHandler_1_Object_ *)LStack_11._current,(Object *)this,
                 MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                 ,(MethodInfo *)0x0);
      if (pGVar19 != (GameStatCounterManager *)0x0) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
                  (pGVar19,(EventHandler_1_OnCounterTypeChangedArgs_ *)LStack_11._current,
                   (MethodInfo *)0x0);
        pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pGVar19 = (pMVar18->fields).gameStatCounterManager;
          LStack_11._current =
               (RegexCharClass_SingleRange)
               func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    ((EventHandler_1_Object_ *)LStack_11._current,(Object *)this,
                     MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                     ,(MethodInfo *)0x0);
          if (pGVar19 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_add_OnCounterTypeChanged
                      (pGVar19,(EventHandler_1_OnCounterTypeChangedArgs_ *)LStack_11._current,
                       (MethodInfo *)0x0);
            pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar18 != (MVNetworkGame *)0x0) {
              this_01 = (pMVar18->fields)._WinningConditionManager_k__BackingField;
              LStack_11._current =
                   (RegexCharClass_SingleRange)
                   func_?(TypeInfo__System__EventHandler<System::EventArgs>);
              mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                        ((EventHandler_1_Object_ *)LStack_11._current,(Object *)this,
                         MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (this_01 != (WinningConditionManager *)0x0) {
                MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_add_OnWinningConditionAddedOrRemoved
                          (this_01,(EventHandler_1_EventArgs_ *)LStack_11._current,(MethodInfo *)0x0
                          );
                pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar18 != (MVNetworkGame *)0x0) {
                  LStack_11._current = (RegexCharClass_SingleRange)(pMVar18->fields).playerContainer
                  ;
                  if (LStack_11._current != (RegexCharClass_SingleRange)0x0) {
                    a = *(Delegate **)((int)LStack_11._current + 0x14);
                    unaff_ESI = (RegexCharClass_SingleRange)
                                func_?(TypeInfo__System__Action);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              ((NavMesh_OnNavMeshPreUpdate *)unaff_ESI,(Object *)this,
                               MethodInfo__GameMeterHandler__UpdateValue__,(MethodInfo *)0x0);
                    LStack_7._version =
                         (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                            (a,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
                    LStack_7._current = (Object *)0x0;
                    if ((Delegate *)LStack_7._version == (Delegate *)0x0) {
                      *(MonitorData **)((int)LStack_11._current + 0x14) = (MonitorData *)0x0;
code_?:
                      LStack_7._version = (int)LStack_11._current + 0x14;
                      LStack_7._index = (int32_t)&UNK_?;
                      func_?();
                      *unaff_FS_OFFSET = uStack_3;
                      return;
                    }
                    if ((Action__Class *)((Delegate *)LStack_7._version)->klass ==
                        TypeInfo__System__Action) {
                      LStack_7._current = (Object *)LStack_7._version;
                    }
                    if ((Delegate *)LStack_7._current != (Delegate *)0x0) {
                      *(Object **)((int)LStack_11._current + 0x14) = LStack_7._current;
                      LStack_7._current = (Object *)(Delegate *)0x0;
                      if ((Action__Class *)((Delegate *)LStack_7._version)->klass ==
                          TypeInfo__System__Action) {
                        LStack_7._current = (Object *)LStack_7._version;
                      }
                      unaff_ESI = (RegexCharClass_SingleRange)TypeInfo__System__Action;
                      if ((Delegate *)LStack_7._current != (Delegate *)0x0) goto code_?;
                      goto code_?;
                    }
                    LStack_7._current = (Object *)TypeInfo__System__Action;
                    LStack_7._index = (int32_t)&UNK_?;
                    func_?();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar20 = func_?();
  LStack_7._version = func_?(uVar20);
code_?:
  LStack_7._index = (int32_t)&UNK_?;
  LStack_7._current = (Object *)unaff_ESI;
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void ConditionCountChanged(Object, EventArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_ConditionCountChanged
               (GameMeterHandler *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar2 + 0x100))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0x104));
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CounterChanged(Object, OnCounterTypeChangedArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_CounterChanged
               (GameMeterHandler *this,Object *sender,OnCounterTypeChangedArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (this_00 = (pMVar1->fields).gameStatCounterManager, this_00 != (GameStatCounterManager *)0x0))
     && (pHVar2 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (this_00,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
    if (1 < (pHVar2->fields)._count) {
code_?:
      GameMeterHandler_UpdateValue(this,(MethodInfo *)0x0);
      return;
    }
    if (args != (OnCounterTypeChangedArgs *)0x0) {
      iVar3 = (args->fields).actorNumber;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar4 != (MVLocalPlayer *)0x0) {
        this = unaff_ESI;
        if (iVar3 != (pMVar4->fields)._._ActorNr_k__BackingField) {
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnDestroy
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                   );
    func_?(&
                    MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                   );
    func_?(&
                    MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                   );
    func_?(&MethodInfo__GameMeterHandler__UpdateValue__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pGVar3 = (pMVar2->fields).gameStatCounterManager;
    pEVar4 = (EventHandler_1_Object_ *)
             func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar4,unaff_EBX,
               MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
               ,(MethodInfo *)0x0);
    if (pGVar3 != (GameStatCounterManager *)0x0) {
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_remove_OnCounterTypeChanged
                (pGVar3,(EventHandler_1_OnCounterTypeChangedArgs_ *)pEVar4,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pGVar3 = (pMVar2->fields).gameStatCounterManager;
        pEVar4 = (EventHandler_1_Object_ *)func_?();
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar4,unaff_EBX,
                   MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                   ,(MethodInfo *)0x0);
        if (pGVar3 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_remove_OnCounterTypeChanged
                    (pGVar3,(EventHandler_1_OnCounterTypeChangedArgs_ *)pEVar4,(MethodInfo *)0x0);
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 != (MVNetworkGame *)0x0) {
            this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
            pEVar4 = (EventHandler_1_Object_ *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar4,unaff_EBX,
                       MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                       ,(MethodInfo *)0x0);
            if (this_00 != (WinningConditionManager *)0x0) {
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_remove_OnWinningConditionAddedOrRemoved
                        (this_00,(EventHandler_1_EventArgs_ *)pEVar4,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              object = TypeInfo__System__Action;
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) {
                pAVar6 = (pMVar5->fields).OnPlayerListChanged;
                this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,(Object *)object,MethodInfo__GameMeterHandler__UpdateValue__,
                           (MethodInfo *)0x0);
                pAVar6 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Remove
                                   ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
                uVar7 = CONCAT44(TypeInfo__System__Action,pAVar6);
                if (pAVar6 == (Action *)0x0) {
                  (pMVar5->fields).OnPlayerListChanged = (Action *)0x0;
                  ppAStack8 = &(pMVar5->fields).OnPlayerListChanged;
                  pAStack9 = (Action *)0x0;
                  func_?();
                  return;
                }
                pAVar10 = (Action *)0x0;
                if (pAVar6->klass == TypeInfo__System__Action) {
                  pAVar10 = pAVar6;
                }
                if (pAVar10 != (Action *)0x0) {
                  (pMVar5->fields).OnPlayerListChanged = pAVar10;
                  uVar7 = CONCAT44(TypeInfo__System__Action,pAVar6);
                  pAStack9 = (Action *)0x0;
                  if (pAVar6->klass == TypeInfo__System__Action) {
                    pAStack9 = pAVar6;
                  }
                  if (pAStack9 != (Action *)0x0) {
                    ppAStack8 = &(pMVar5->fields).OnPlayerListChanged;
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
    }
  }
  uVar7 = func_?();
code_?:
  _ppAStack0000001c = uVar7;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnEnable
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar2 + 0xf8))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0xfc));
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGameStatUpdated(Object, OnCounterTypeChangedArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnGameStatUpdated
               (GameMeterHandler *this,Object *sender,OnCounterTypeChangedArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_Score__1);
    cRam_? = '\x01';
  }
  if (args != (OnCounterTypeChangedArgs *)0x0) {
    WinningConditionNotificationManager::WinningConditionNotificationManager_UpdateNotification
              ((args->fields).actorNumber,(uint)(args->fields).counterType,(args->fields).count,
               (MethodInfo *)0x0);
    iVar1 = (args->fields).actorNumber;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      if ((iVar1 == (pMVar2->fields)._._ActorNr_k__BackingField) &&
         ((args->fields).counterType == 1)) {
        uVar3 = 0x10;
        WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                  ((GameStatCounterType__Enum *)&stack0xfffffffb,(MethodInfo *)0x0);
        if (uVar3 == GameStatCounterType__Enum_Kill) {
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          key = (Object *)func_?();
          value = TM::TM__(StringLiteral_Score__1,(MethodInfo *)0x0);
          if (this_00 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,key,(Object *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_UpdateValue
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar2 + 0xf8))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0xfc));
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

