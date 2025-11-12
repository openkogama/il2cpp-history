
/* Void Awake() */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_Awake
               (MoveAnimations *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MoveAnimations__OnMoveAnimationDone_float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).moveAnimations;
  if ((List_1_MoveAnimationBase_ *)LStack_1._list == (List_1_MoveAnimationBase_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MoveAnimationBase_ *)LStack_1._list)->fields)._version
               << 0x20);
  uStack_10 = 0;
  LStack_1._8_8_ = pLStack_9;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_9 = &LStack_1;
  while( true ) {
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__MoveNext__
                      );
    pOVar12 = LStack_1._current;
    if (bVar11 == 0) {
      return;
    }
    if ((MoveAnimationBase *)LStack_1._current == (MoveAnimationBase *)0x0)
    goto code_?;
    MoveAnimationBase::MoveAnimationBase_SetTarget
              ((MoveAnimationBase *)LStack_1._current,(this->fields)._.target,(MethodInfo *)0x0);
    pMVar13 = ((MoveAnimationBase__Fields *)((longlong)pOVar12 + 0x10))->OnMoveAnimationStopped;
    b = (Delegate *)FUN_?(TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate);
    pMVar14 = MethodInfo__MoveAnimations__OnMoveAnimationDone_float_;
    (b->fields).method_ptr =
         MethodInfo__MoveAnimations__OnMoveAnimationDone_float_->virtualMethodPointer;
    (b->fields).method = pMVar14;
    (b->fields).m_target = (Object *)this;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    uVar15 = pMVar14->parameters_count;
    (b->fields).method_code = b;
    if (((pMVar14->flags & 0x10) == 0) || (uVar15 != 1)) {
      (b->fields).method_code = (b->fields).m_target;
      puVar16 = (b->fields).method_ptr;
    }
    else {
      puVar16 = &UNK_?;
    }
    (b->fields).invoke_impl = puVar16;
    (b->fields).extra_arg = FUN_?;
    pMVar13 = (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar13,b,(MethodInfo *)0x0);
    if (pMVar13 != (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) break;
    ((MoveAnimationBase__Fields *)((longlong)pOVar12 + 0x10))->OnMoveAnimationStopped =
         (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0;
code_?:
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)
                      &((MoveAnimationBase__Fields *)((longlong)pOVar12 + 0x10))->
                       OnMoveAnimationStopped >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  pMVar17 = (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0;
  if (pMVar13->klass == TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate) {
    pMVar17 = pMVar13;
  }
  if (pMVar17 != (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
    ((MoveAnimationBase__Fields *)((longlong)pOVar12 + 0x10))->OnMoveAnimationStopped = pMVar17;
    pMVar17 = (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0;
    if (pMVar13->klass == TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate) {
      pMVar17 = pMVar13;
    }
    if (pMVar17 != (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0)
    goto code_?;
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnMoveAnimationDone(Single) */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_OnMoveAnimationDone
               (MoveAnimations *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).moveAnimations;
  iVar2 = (this->fields).index + 1;
  (this->fields).index = iVar2;
  if (pLVar1 != (List_1_MoveAnimationBase_ *)0x0) {
    if (iVar2 < (pLVar1->fields)._size) {
      (*(this->klass->vtable).Play.methodPtr)(this,0,(this->klass->vtable).Play.method);
      if ((this->fields).OnIntermediateMoveAnimationStopped !=
          (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
        pMVar3 = (this->fields).OnIntermediateMoveAnimationStopped;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar3->fields)._._.invoke_impl)
                  ((pMVar3->fields)._._.method_code,extraTime,(pMVar3->fields)._._.method);
        return;
      }
    }
    else {
      if ((this->fields)._.OnMoveAnimationStopped !=
          (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
        pMVar3 = (this->fields)._.OnMoveAnimationStopped;
        (*(pMVar3->fields)._._.invoke_impl)
                  ((pMVar3->fields)._._.method_code,extraTime,(pMVar3->fields)._._.method);
      }
      (this->fields).index = 0;
    }
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_Play
               (MoveAnimations *this,float offsetTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).moveAnimations;
  if (pLVar1 != (List_1_MoveAnimationBase_ *)0x0) {
    uVar2 = (this->fields).index;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pMVar4 = (pLVar1->fields)._items;
    if (pMVar4 != (MoveAnimationBase__Array *)0x0) {
      if ((uint)pMVar4->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar5 = pMVar4->vector[(int)uVar2];
      if (pMVar5 != (MoveAnimationBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar5->klass->vtable).Play.methodPtr)(pMVar5,0,(pMVar5->klass->vtable).Play.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_Update
               (MoveAnimations *this,MethodInfo *method)

{
  if ((this->fields)._.testState == 2) {
    (*(this->klass->vtable).Play.methodPtr)(this,0,(this->klass->vtable).Play.method);
    (this->fields)._.testState = 0;
  }
  return;
}

