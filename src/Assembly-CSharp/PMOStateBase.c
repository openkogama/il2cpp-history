
/* Void Enter(PlayModeOnlyStateMachine) */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase_Enter
               (PMOStateBase *this,PlayModeOnlyStateMachine *psm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ILogger);
    func_?(&TypeInfo__PlayModeOnlyEvent);
    func_?(&StringLiteral_Enter_);
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__PlayModeOnlyEvent;
  pIStack_2 = (ILogger *)(this->fields).stateType;
  pIVar3 = (this->fields).logger;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3(StringLiteral_Enter_,str1,(MethodInfo *)0x0);
  if (pIVar3 != (ILogger *)0x0) {
    EStack_1.monitor = (MonitorData *)TypeInfo__ILogger;
    EStack_1.klass = (Enum__Class *)0x0;
    pIStack_2 = pIVar3;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Enter(FSMEntity) */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase_Enter_1
               (PMOStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayModeOnlyStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment)
       || ((e->klass->_1).typeHierarchy
           [(TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__PlayModeOnlyStateMachine)) {
      func_?(e,TypeInfo__PlayModeOnlyStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Enter_1.method)(this,e,(this->klass->vtable).Execute_1.methodPtr);
  return;
}


/* Void Execute(FSMEntity) */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase_Execute_1
               (PMOStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayModeOnlyStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment)
       || ((e->klass->_1).typeHierarchy
           [(TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__PlayModeOnlyStateMachine)) {
      func_?(e,TypeInfo__PlayModeOnlyStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Execute_1.method)(this,e,(this->klass->vtable).Exit_1.methodPtr);
  return;
}


/* Void Exit(FSMEntity) */

void Assembly-CSharp.dll::PMOStateBase::PMOStateBase_Exit_1
               (PMOStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayModeOnlyStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment)
       || ((e->klass->_1).typeHierarchy
           [(TypeInfo__PlayModeOnlyStateMachine->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__PlayModeOnlyStateMachine)) {
      func_?(e,TypeInfo__PlayModeOnlyStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Exit_1.method)(this,e,this->klass[1]._0.image);
  return;
}

