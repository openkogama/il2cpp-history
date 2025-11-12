
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Enter
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_IsNewPrototype);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(e->fields)._.data;
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_01,(Object *)StringLiteral_IsNewPrototype,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      (this->fields).isNewPrototype = (byte)((uint)iVar1 >> 0x1f) ^ 1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Execute
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if (e == (EditorStateMachine *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    if ((this->fields).useESInsert != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__EditorEvent);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((e->fields)._.lockState == 0) {
        this_00 = (Stack_1_System_Int32Enum_ *)(e->fields)._.stateStack;
        if ((this_00 == (Stack_1_System_Int32Enum_ *)0x0) ||
           (pIVar3 = (this_00->fields)._array, pIVar3 == (Int32Enum__Enum__Array *)0x0)) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = (this_00->fields)._size;
        if (uVar4 < (uint)pIVar3->max_length) {
          pIVar3->vector[(int)uVar4] = 0xc;
          (this_00->fields)._size = uVar4 + 1;
          piVar5 = &(this_00->fields)._version;
          *piVar5 = *piVar5 + 1;
        }
        else {
          mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
          Stack_1_System_Int32Enum__PushWithResize
                    (this_00,0xc,
                     MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_
                     ->klass->rgctx_data[0xc].method);
        }
        (e->fields)._.clearStack = 0;
        value = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000008);
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
      }
      return;
    }
    FSMEntity::FSMEntity_PushState_1
              ((FSMEntity *)e,EditorEvent__Enum_ESTranslate,EditorEvent__Enum_ObjectSelected,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Exit
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_IsNewPrototype);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isNewPrototype == 0) {
    return;
  }
  if (e != (EditorStateMachine *)0x0) {
    this_00 = (e->fields)._.data;
    auStackX_8[0] = 1;
    value = (Object *)FUN_?(uRam_?,auStackX_8);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)StringLiteral_IsNewPrototype,value,
                 CONCAT31((int3)((uint)in_R9D >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ESWaitForSelected() */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected__ctor
               (ESWaitForSelected *this,MethodInfo *method)

{
  (this->fields).useESInsert = 1;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar8 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.logger = pIVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

