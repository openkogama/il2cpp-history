
/* Void Enter(PlayModeOnlyStateMachine) */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase_Enter
               (PMOStateBase *this,PlayModeOnlyStateMachine *psm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILogger);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Enter_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).logger;
  EStack_2.klass = (Enum__Class *)TypeInfo__PlayModeOnlyEvent;
  iStack_3 = (this->fields).stateType;
  EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Enter_,pSVar4,(MethodInfo *)0x0);
  if (pIVar1 == (ILogger *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = 0;
  pIVar7 = pIVar1->klass;
  uVar8._0_1_ = (pIVar7->_1).rank;
  uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (pIVar7->interfaceOffsets[uVar6].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
        pIVar9 = &pIVar7->vtable + pIVar7->interfaceOffsets[uVar6].offset;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pIVar9 = (ILogger__VTable *)FUN_?(pIVar1);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar9->Log).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,pSVar4,(pIVar9->Log).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void Enter(FSMEntity) */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase_Enter_1
               (PMOStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__PlayModeOnlyStateMachine)) {
      FUN_?(e);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).Enter_1.methodPtr)(this,e,(this->klass->vtable).Enter_1.method);
  return;
}


/* Void Execute(FSMEntity) */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase_Execute_1
               (PMOStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__PlayModeOnlyStateMachine)) {
      FUN_?(e);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).Execute_1.methodPtr)(this,e,(this->klass->vtable).Execute_1.method);
  return;
}


/* Void Exit(FSMEntity) */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase_Exit_1
               (PMOStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__PlayModeOnlyStateMachine)) {
      FUN_?(e);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).Exit_1.methodPtr)(this,e,(this->klass->vtable).Exit_1.method);
  return;
}


/* PMOStateBase() */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase__ctor(PMOStateBase *this,MethodInfo *method)

{
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).logger = pIVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).logger >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

