
/* Void Update() */

void Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine_Update
               (PlayModeOnlyStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IState);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.currentState;
  if (pIVar1 != (IState *)0x0) {
    func_?(1,TypeInfo__IState,pIVar1,this);
  }
  return;
}


/* PlayModeOnlyStateMachine(GameObject) */

void Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine__ctor
               (PlayModeOnlyStateMachine *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayModeOnlyStateTransitionTable);
    cRam_? = '\x01';
  }
  FSMEntity::FSMEntity__ctor((FSMEntity *)this,(MethodInfo *)0x0);
  ppGVar1 = &(this->fields).gameObject;
  *ppGVar1 = gameObject;
  func_?(ppGVar1,gameObject);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  ppMVar3 = &(this->fields).weCamera;
  *ppMVar3 = pMVar2;
  func_?(ppMVar3,pMVar2);
  this_00 = (PlayModeOnlyStateTransitionTable *)
            func_?(TypeInfo__PlayModeOnlyStateTransitionTable);
  PlayModeOnlyStateTransitionTable::PlayModeOnlyStateTransitionTable__ctor
            (this_00,(MethodInfo *)0x0);
  ppSVar4 = &(this->fields)._.transitionTable;
  *ppSVar4 = (StateTransitionTable *)this_00;
  func_?(ppSVar4,this_00);
  return;
}


/* PlayModeOnlyEvent get_CurEvent() */

PlayModeOnlyEvent__Enum
Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine_get_CurEvent
          (PlayModeOnlyStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)&TypeInfo__PlayModeOnlyEvent;
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields)._.curEvent;
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__PlayModeOnlyEvent->_0).element_class) {
      pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)pOVar2;
      pPVar3 = (PlayModeOnlyEvent__Enum *)func_?();
      return *pPVar3;
    }
    pPStack_1 = TypeInfo__PlayModeOnlyEvent;
    pOStack_4 = pOVar2;
    func_?();
    pcVar5 = (code *)swi(3);
    PVar6 = (*pcVar5)();
    return PVar6;
  }
  pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  PVar6 = (*pcVar5)();
  return PVar6;
}


/* PlayModeOnlyEvent get_NextEvent() */

PlayModeOnlyEvent__Enum
Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine_get_NextEvent
          (PlayModeOnlyStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)&TypeInfo__PlayModeOnlyEvent;
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields)._.nextEvent;
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__PlayModeOnlyEvent->_0).element_class) {
      pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)pOVar2;
      pPVar3 = (PlayModeOnlyEvent__Enum *)func_?();
      return *pPVar3;
    }
    pPStack_1 = TypeInfo__PlayModeOnlyEvent;
    pOStack_4 = pOVar2;
    func_?();
    pcVar5 = (code *)swi(3);
    PVar6 = (*pcVar5)();
    return PVar6;
  }
  pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  PVar6 = (*pcVar5)();
  return PVar6;
}


/* PlayModeOnlyEvent get_PrevEvent() */

PlayModeOnlyEvent__Enum
Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine_get_PrevEvent
          (PlayModeOnlyStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)&TypeInfo__PlayModeOnlyEvent;
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields)._.prevEvent;
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__PlayModeOnlyEvent->_0).element_class) {
      pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)pOVar2;
      pPVar3 = (PlayModeOnlyEvent__Enum *)func_?();
      return *pPVar3;
    }
    pPStack_1 = TypeInfo__PlayModeOnlyEvent;
    pOStack_4 = pOVar2;
    func_?();
    pcVar5 = (code *)swi(3);
    PVar6 = (*pcVar5)();
    return PVar6;
  }
  pPStack_1 = (PlayModeOnlyEvent__Enum__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  PVar6 = (*pcVar5)();
  return PVar6;
}

