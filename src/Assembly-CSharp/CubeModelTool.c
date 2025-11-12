
/* Void Enter(FSMEntity) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Enter_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelingStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__CubeModelingStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__CubeModelingStateMachine)) {
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


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Execute
               (CubeModelTool *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar1->cubeChange != 0) &&
     (pCVar1->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    pAVar2 = pCVar1->OnEditCubeChange;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,pCVar1->cubeCount,pCVar1->cubeChange,
               (pAVar2->fields)._._.method);
    TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
    return;
  }
  pCVar1->cubeChange = 0;
  return;
}


/* Void Execute(FSMEntity) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Execute_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelingStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__CubeModelingStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__CubeModelingStateMachine)) {
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

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Exit_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelingStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__CubeModelingStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__CubeModelingStateMachine)) {
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


/* Void SendCubeEvent(Int32, EditCubeChange) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_SendCubeEvent
               (int32_t cubeCount,EditCubeChange__Enum cubeChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__CubeModelTool->static_fields->cubeCount = cubeCount;
  TypeInfo__CubeModelTool->static_fields->cubeChange = cubeChange;
  return;
}

