
/* Void AddUpdateObject(IGameStateControllerSubscriber) */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_AddUpdateObject
               (MVGameModeChangeNotifier *this,IGameStateControllerSubscriber *obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGameStateControllerSubscriber);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__Add_IGameStateControllerSubscriber_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__Add_IGameStateControllerSubscriber_
  ;
  this_00 = (List_1_System_Object_ *)(this->fields).UpdateList;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pOVar3 = (this_00->fields)._items;
    if (pOVar3 != (Object__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pOVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        FUN_?(pOVar3,(longlong)(int)uVar4,obj);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  (this_00,(Object *)obj,pMVar1->klass->rgctx_data[0xe].method);
      }
      UVar5 = MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
      if (obj != (IGameStateControllerSubscriber *)0x0) {
        uVar6 = 0;
        pIVar7 = obj->klass;
        uVar8._0_1_ = (pIVar7->_1).rank;
        uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
        if (uVar8 != 0) {
          do {
            if (pIVar7->interfaceOffsets[uVar6].interfaceType ==
                (Il2CppClass *)TypeInfo__IGameStateControllerSubscriber) {
              pIVar9 = &pIVar7->vtable + pIVar7->interfaceOffsets[uVar6].offset;
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
        pIVar9 = (IGameStateControllerSubscriber__VTable *)FUN_?(obj);
code_?:
        UNRECOVERED_JUMPTABLE = (pIVar9->GameStateChanged).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (obj,(ulonglong)UVar5,(pIVar9->GameStateChanged).method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* UpdateCondition GetPresentState() */

UpdateCondition__Enum
Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_GetPresentState
          (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar1->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 == (MVGameControllerBase *)0x0) || ((pMVar2->fields).game == (MVNetworkGame *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) goto code_?;
    cVar3 = (*(pMVar2->klass->vtable).__unknown_1.methodPtr)
                      (pMVar2,(pMVar2->klass->vtable).__unknown_1.method);
    if (cVar3 != '\0') {
      return UpdateCondition__Enum_EDITOR_PLAYMODE;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return UpdateCondition__Enum_EDITOR;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      return ((pGVar1->fields).gameMode == 1) + UpdateCondition__Enum_ALLWAYS;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  UVar5 = (*pcVar4)();
  return UVar5;
}


/* Void RemoveObject(IGameStateControllerSubscriber) */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_RemoveObject
               (MVGameModeChangeNotifier *this,IGameStateControllerSubscriber *obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<IGameStateControllerSubscriber>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGameModeChangeNotifier____c__DisplayClass4_0___RemoveObject_b__0_IGameStateControllerSubscriber_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameModeChangeNotifier____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVGameModeChangeNotifier____c__DisplayClass4_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)obj;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    pLVar6 = (this->fields).UpdateList;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<IGameStateControllerSubscriber>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,object,
               MethodInfo__MVGameModeChangeNotifier____c__DisplayClass4_0___RemoveObject_b__0_IGameStateControllerSubscriber_
               ,(MethodInfo *)0x0);
    if (pLVar6 != (List_1_IGameStateControllerSubscriber_ *)0x0) {
      if (this_00 == (Predicate_1_Object_ *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_match,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar2 = 0;
      if ((pLVar6->fields)._size < 1) {
DAT_?:
        if ((int)uVar2 < (pLVar6->fields)._size) {
          uVar8 = uVar2 + 1;
          if ((int)uVar8 < (pLVar6->fields)._size) {
            lVar9 = (longlong)(int)uVar8;
code_?:
            lVar10 = lVar9 * 8 + 0x20;
            uVar11 = uVar8;
            do {
              pIVar12 = (pLVar6->fields)._items;
              if (pIVar12 == (IGameStateControllerSubscriber__Array *)0x0) goto code_?;
              if ((uint)pIVar12->max_length <= uVar11) goto DAT_?;
              cVar13 = (*(this_00->fields)._._.invoke_impl)
                                ((this_00->fields)._._.method_code,
                                 *(undefined8 *)((longlong)pIVar12->vector + lVar10 + -0x20),
                                 (this_00->fields)._._.method);
              lVar14 = lVar9;
              if (cVar13 == '\0') break;
              uVar11 = uVar11 + 1;
              lVar9 = lVar9 + 1;
              lVar10 = lVar10 + 8;
              lVar14 = lVar9;
            } while ((int)uVar11 < (pLVar6->fields)._size);
            if ((int)uVar11 < (pLVar6->fields)._size) goto code_?;
          }
code_?:
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar6->fields)._items,uVar2,(pLVar6->fields)._size - uVar2,
                     (MethodInfo *)0x0);
          piVar15 = &(pLVar6->fields)._version;
          *piVar15 = *piVar15 + 1;
          (pLVar6->fields)._size = uVar2;
        }
      }
      else {
        lVar9 = 0x20;
        do {
          pIVar12 = (pLVar6->fields)._items;
          if (pIVar12 == (IGameStateControllerSubscriber__Array *)0x0) goto code_?;
          if ((uint)pIVar12->max_length <= uVar2) goto DAT_?;
          cVar13 = (*(this_00->fields)._._.invoke_impl)
                            ((this_00->fields)._._.method_code,
                             *(undefined8 *)((longlong)pIVar12->vector + lVar9 + -0x20),
                             (this_00->fields)._._.method);
          if (cVar13 != '\0') goto DAT_?;
          uVar2 = uVar2 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar2 < (pLVar6->fields)._size);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  pIVar12 = (pLVar6->fields)._items;
  lVar10 = (longlong)(int)uVar2;
  lVar9 = lVar14 + 1;
  uVar2 = uVar2 + 1;
  uVar8 = uVar11 + 1;
  if (pIVar12 == (IGameStateControllerSubscriber__Array *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((uint)pIVar12->max_length <= uVar11) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?((pLVar6->fields)._items,lVar10,pIVar12->vector[lVar14]);
  if ((pLVar6->fields)._size <= (int)uVar8) goto code_?;
  goto code_?;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_UpdateControllerUpdate
               (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IGameStateControllerSubscriber);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<IGameStateControllerSubscriber>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGameModeChangeNotifier____c___UpdateControllerUpdate_b__6_0_IGameStateControllerSubscriber_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameModeChangeNotifier____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UVar1 = MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
  this_00 = (List_1_System_Object_ *)(this->fields).UpdateList;
  if (*(int *)&(TypeInfo__MVGameModeChangeNotifier____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVGameModeChangeNotifier____c);
  }
  this_01 = TypeInfo__MVGameModeChangeNotifier____c->static_fields->__9__6_0;
  if (this_01 == (Predicate_1_IGameStateControllerSubscriber_ *)0x0) {
    if (*(int *)&(TypeInfo__MVGameModeChangeNotifier____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVGameModeChangeNotifier____c);
    }
    object = TypeInfo__MVGameModeChangeNotifier____c->static_fields->__9;
    this_01 = (Predicate_1_IGameStateControllerSubscriber_ *)
              FUN_?(TypeInfo__System__Predicate<IGameStateControllerSubscriber>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__MVGameModeChangeNotifier____c___UpdateControllerUpdate_b__6_0_IGameStateControllerSubscriber_
               ,(MethodInfo *)0x0);
    TypeInfo__MVGameModeChangeNotifier____c->static_fields->__9__6_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__MVGameModeChangeNotifier____c->static_fields->__9__6_0 >>
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
  if (this_00 == (List_1_System_Object_ *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
  List_1_System_Object__RemoveAll
            (this_00,(Predicate_1_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
            );
  if (UVar1 != (this->fields)._currentState) {
    LStack_8._list = (List_1_System_Object_ *)(this->fields).UpdateList;
    if (LStack_8._list == (List_1_System_Object_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_9 >> 0xc);
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
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)((LStack_8._list)->fields)._version << 0x20);
    uStack_11 = 0;
    LStack_8._8_8_ = pLStack_10;
    LStack_8._current = (Object *)0x0;
    uStack_9 = 0;
    pLStack_10 = &LStack_8;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__MoveNext__
                             ), bVar12 != 0) {
      if (LStack_8._current != (Object *)0x0) {
        FUN_?(0,TypeInfo__IGameStateControllerSubscriber,LStack_8._current,UVar1);
      }
    }
    (this->fields)._currentState = UVar1;
  }
  return;
}


/* MVGameModeChangeNotifier() */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier__ctor
               (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._currentState = 1;
  this_00 = (List_1_IGameStateControllerSubscriber_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__)
  ;
  bVar1 = iRam_? != 0;
  (this->fields).UpdateList = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).UpdateList >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  UVar6 = MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
  (this->fields)._currentState = UVar6;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                  ,2,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_7 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uStack_8 = 2;
  uStack_9 = 1;
  uStack_7 = this;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar10 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar10 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if ((uint)pLVar10->max_length < 3) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (pLVar10->vector[2] != (List_1_PriorityDataUpdate_ *)0x0) {
      uStack_12 = (undefined4)uStack_7;
      uStack_13 = uStack_7._4_4_;
      uStack_14 = uStack_8;
      uStack_15 = uStack_9;
      FUN_?(pLVar10->vector[2],&uStack_12,
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

