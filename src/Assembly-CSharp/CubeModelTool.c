
/* Void Enter(FSMEntity) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Enter_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__CubeModelingStateMachine->_1).naturalAligment)
       || ((e->klass->_1).typeHierarchy
           [(TypeInfo__CubeModelingStateMachine->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__CubeModelingStateMachine)) {
      func_?(e,TypeInfo__CubeModelingStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Enter_1.method)(this,e,(this->klass->vtable).Execute_1.methodPtr);
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Execute
               (CubeModelTool *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar1->cubeChange != 0) &&
     (pCVar1->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    pAVar2 = pCVar1->OnEditCubeChange;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,pCVar1->cubeCount,pCVar1->cubeChange,
               (pAVar2->fields)._._.method);
    pCVar1 = TypeInfo__CubeModelTool->static_fields;
  }
  pCVar1->cubeChange = 0;
  return;
}


/* Void Execute(FSMEntity) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Execute_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__CubeModelingStateMachine->_1).naturalAligment)
       || ((e->klass->_1).typeHierarchy
           [(TypeInfo__CubeModelingStateMachine->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__CubeModelingStateMachine)) {
      func_?(e,TypeInfo__CubeModelingStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Execute_1.method)(this,e,(this->klass->vtable).Exit_1.methodPtr);
  return;
}


/* Void Exit(FSMEntity) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Exit_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__CubeModelingStateMachine->_1).naturalAligment)
       || ((e->klass->_1).typeHierarchy
           [(TypeInfo__CubeModelingStateMachine->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__CubeModelingStateMachine)) {
      func_?(e,TypeInfo__CubeModelingStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Exit_1.method)(this,e,(this->klass->vtable).HideCursor.methodPtr);
  return;
}


/* Void SendCubeEvent(Int32, EditCubeChange) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_SendCubeEvent
               (int32_t cubeCount,EditCubeChange__Enum cubeChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  TypeInfo__CubeModelTool->static_fields->cubeCount = cubeCount;
  TypeInfo__CubeModelTool->static_fields->cubeChange = cubeChange;
  return;
}

