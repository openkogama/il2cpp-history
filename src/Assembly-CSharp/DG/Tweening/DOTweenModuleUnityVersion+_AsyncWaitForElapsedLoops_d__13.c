
/* Void MoveNext() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion+<AsyncWaitForElapsedLoops>d__13::
     DOTweenModuleUnityVersion_AsyncWaitForElapsedLoops_d_13_MoveNext
               (DOTweenModuleUnityVersion_AsyncWaitForElapsedLoops_d_13 *this,MethodInfo *method)

{
  pDStackX_20 = this;
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted<System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter,_DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForElapsedLoops_d__13>_System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter___DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForElapsedLoops_d__13__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Threading__Tasks__Task);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->__1__state == 0) {
    this->field_0x2c = 0;
    this->__1__state = -1;
    if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
  }
  else {
    if (this->t == (Tween *)0x0) goto code_?;
    if ((this->t->fields)._active_k__BackingField == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_This_Tween_has_been_killed_and_i);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogWarning
                  ((Object *)StringLiteral_This_Tween_has_been_killed_and_i,(Tween *)0x0,
                   (MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
  pTVar1 = this->t;
  if (pTVar1 != (Tween *)0x0) {
    if (((pTVar1->fields)._active_k__BackingField != 0) &&
       ((pTVar1->fields).completedLoops < this->elapsedLoops)) {
      if (*(int *)&(TypeInfo__System__Threading__Tasks__Task->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStackX_18[0] = 0;
      if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      this->__1__state = 0;
      this->field_0x2c = 0;
      if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      FUN_?(&this->__t__builder,auStackX_18,this,
                    void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted<System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter,_DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForElapsedLoops_d__13>_System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter___DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForElapsedLoops_d__13__
                   );
      return;
    }
code_?:
    this->__1__state = -2;
    if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::
    AsyncTaskMethodBuilder_SetResult(&this->__t__builder,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStateMachine(IAsyncStateMachine) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion+<AsyncWaitForElapsedLoops>d__13::
     DOTweenModuleUnityVersion_AsyncWaitForElapsedLoops_d_13_SetStateMachine
               (DOTweenModuleUnityVersion_AsyncWaitForElapsedLoops_d_13 *this,
               IAsyncStateMachine *stateMachine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  pAVar1 = &this->__t__builder;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__SetStateMachine_System__Runtime__CompilerServices__IAsyncStateMachine_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (stateMachine == (IAsyncStateMachine *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_stateMachine);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__System__Runtime__CompilerServices__AsyncMethodBuilderCore__SetStateMachine_System__Runtime__CompilerServices__IAsyncStateMachine_
                               );
    FUN_?(this_00,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pAVar1->m_builder).m_coreState.m_stateMachine != (IAsyncStateMachine *)0x0) {
    ptr = (Void *)func_?(&StringLiteral_The_builder_was_not_properly_ini);
    pSVar3 = (String *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_2(ptr,(MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__InvalidOperationException);
    this_01 = (ProtocolViolationException *)func_?(uVar2);
    System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
              (this_01,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__System__Runtime__CompilerServices__AsyncMethodBuilderCore__SetStateMachine_System__Runtime__CompilerServices__IAsyncStateMachine_
                               );
    FUN_?(this_01,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = iRam_? != 0;
  (pAVar1->m_builder).m_coreState.m_stateMachine = stateMachine;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)pAVar1 >> 0xc);
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
  return;
}

