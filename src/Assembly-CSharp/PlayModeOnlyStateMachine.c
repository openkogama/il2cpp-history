
/* Void Update() */

void Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine_Update
               (PlayModeOnlyStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.currentState;
  if (pIVar1 == (IState *)0x0) {
    return;
  }
  pIVar2 = pIVar1->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__IState) {
        pVVar5 = &(pIVar2->vtable).Enter + (pIVar2->interfaceOffsets[uVar3].offset + 1);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(pIVar1,TypeInfo__IState,1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(pIVar1,this,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* PlayModeOnlyStateMachine(GameObject) */

void Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine__ctor
               (PlayModeOnlyStateMachine *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyStateTransitionTable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FSMEntity::FSMEntity__ctor((FSMEntity *)this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).gameObject = gameObject;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).weCamera = pMVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).weCamera >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (PlayModeOnlyStateTransitionTable *)
            FUN_?(TypeInfo__PlayModeOnlyStateTransitionTable);
  PlayModeOnlyStateTransitionTable::PlayModeOnlyStateTransitionTable__ctor
            (this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.transitionTable >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* PlayModeOnlyEvent get_CurEvent() */

PlayModeOnlyEvent__Enum
Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine_get_CurEvent
          (PlayModeOnlyStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.curEvent;
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class == (TypeInfo__PlayModeOnlyEvent->_0).element_class) {
      return *(PlayModeOnlyEvent__Enum *)&pOVar1[1].klass;
    }
    FUN_?(pOVar1,TypeInfo__PlayModeOnlyEvent);
    pcVar2 = (code *)swi(3);
    PVar3 = (*pcVar2)();
    return PVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  PVar3 = (*pcVar2)();
  return PVar3;
}


/* PlayModeOnlyEvent get_NextEvent() */

PlayModeOnlyEvent__Enum
Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine_get_NextEvent
          (PlayModeOnlyStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.nextEvent;
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class == (TypeInfo__PlayModeOnlyEvent->_0).element_class) {
      return *(PlayModeOnlyEvent__Enum *)&pOVar1[1].klass;
    }
    FUN_?(pOVar1,TypeInfo__PlayModeOnlyEvent);
    pcVar2 = (code *)swi(3);
    PVar3 = (*pcVar2)();
    return PVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  PVar3 = (*pcVar2)();
  return PVar3;
}


/* PlayModeOnlyEvent get_PrevEvent() */

PlayModeOnlyEvent__Enum
Assembly-CSharp.dll::PlayModeOnlyStateMachine::PlayModeOnlyStateMachine_get_PrevEvent
          (PlayModeOnlyStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.prevEvent;
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class == (TypeInfo__PlayModeOnlyEvent->_0).element_class) {
      return *(PlayModeOnlyEvent__Enum *)&pOVar1[1].klass;
    }
    FUN_?(pOVar1,TypeInfo__PlayModeOnlyEvent);
    pcVar2 = (code *)swi(3);
    PVar3 = (*pcVar2)();
    return PVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  PVar3 = (*pcVar2)();
  return PVar3;
}

