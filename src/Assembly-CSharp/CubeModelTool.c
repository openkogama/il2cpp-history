
/* Void Enter(FSMEntity) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Enter_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e == (FSMEntity *)0x0) {
    pFVar1 = (FSMEntity *)0x0;
  }
  else {
    bVar2 = (TypeInfo__CubeModelingStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar2) ||
       ((e->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__CubeModelingStateMachine
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pFVar1 = (FSMEntity *)0x0;
    if (bVar3) {
      pFVar1 = e;
    }
    if (pFVar1 == (FSMEntity *)0x0) {
      func_?(e,TypeInfo__CubeModelingStateMachine);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Enter_1.method)
            (this,pFVar1,(this->klass->vtable).Execute_1.methodPtr);
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Execute
               (CubeModelTool *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  if (TypeInfo__CubeModelTool->static_fields->cubeChange != 0) {
    if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
      func_?(TypeInfo__CubeModelTool);
    }
    if (TypeInfo__CubeModelTool->static_fields->OnEditCubeChange !=
        (Action_2_Int32_EditCubeChange_ *)0x0) {
      if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
        func_?(TypeInfo__CubeModelTool);
      }
      pCVar1 = TypeInfo__CubeModelTool->static_fields;
      if ((Action_2_Int32_Object_ *)pCVar1->OnEditCubeChange == (Action_2_Int32_Object_ *)0x0) {
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                ((Action_2_Int32_Object_ *)pCVar1->OnEditCubeChange,pCVar1->cubeCount,
                 (Object *)pCVar1->cubeChange,
                 MethodInfo__System__Action<int,_EditCubeChange>__Invoke_int__EditCubeChange_);
    }
  }
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  return;
}


/* Void Execute(FSMEntity) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Execute_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e == (FSMEntity *)0x0) {
    pFVar1 = (FSMEntity *)0x0;
  }
  else {
    bVar2 = (TypeInfo__CubeModelingStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar2) ||
       ((e->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__CubeModelingStateMachine
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pFVar1 = (FSMEntity *)0x0;
    if (bVar3) {
      pFVar1 = e;
    }
    if (pFVar1 == (FSMEntity *)0x0) {
      func_?(e,TypeInfo__CubeModelingStateMachine);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Execute_1.method)
            (this,pFVar1,(this->klass->vtable).Exit_1.methodPtr);
  return;
}


/* Void Exit(FSMEntity) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_Exit_1
               (CubeModelTool *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e == (FSMEntity *)0x0) {
    pFVar1 = (FSMEntity *)0x0;
  }
  else {
    bVar2 = (TypeInfo__CubeModelingStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar2) ||
       ((e->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__CubeModelingStateMachine
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pFVar1 = (FSMEntity *)0x0;
    if (bVar3) {
      pFVar1 = e;
    }
    if (pFVar1 == (FSMEntity *)0x0) {
      func_?(e,TypeInfo__CubeModelingStateMachine);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Exit_1.method)
            (this,pFVar1,(this->klass->vtable).HideCursor.methodPtr);
  return;
}


/* Void SendCubeEvent(Int32, EditCubeChange) */

void Assembly-CSharp.dll::CubeModelTool::CubeModelTool_SendCubeEvent
               (int32_t cubeCount,EditCubeChange__Enum cubeChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  TypeInfo__CubeModelTool->static_fields->cubeCount = cubeCount;
  TypeInfo__CubeModelTool->static_fields->cubeChange = cubeChange;
  return;
}

