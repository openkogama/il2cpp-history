
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Enter
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&StringLiteral_goToInsert);
    cRam_? = '\x01';
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(e->fields)._.data,
     this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_goToInsert,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    (this->fields).goToInsert = bVar1 != 0;
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar2 == (MVWorldObjectClient *)0x0) || ((this->fields).goToInsert != 0)) {
code_?:
      EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
      return;
    }
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      puVar3 = (undefined8 *)(*(pMVar2->klass->vtable).get_WorldPosition_1.methodPtr)();
      uVar4 = *puVar3;
      fVar5 = *(float *)(puVar3 + 1);
      (this->fields).pos.x = (float)(int)uVar4;
      (this->fields).pos.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      (this->fields).pos.z = fVar5;
      pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        pQVar6 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                           ((Quaternion *)&puStack_7,pMVar2,(MethodInfo *)0x0);
        fVar5 = pQVar6->y;
        fVar8 = pQVar6->z;
        fVar9 = pQVar6->w;
        (this->fields).rot.x = pQVar6->x;
        (this->fields).rot.y = fVar5;
        (this->fields).rot.z = fVar8;
        (this->fields).rot.w = fVar9;
        goto code_?;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Execute
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&TypeInfo__TranslateMode);
    func_?(&StringLiteral_moveWithAvatar);
    func_?(&StringLiteral_translateMode);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,(ExceptionArgument__Enum)e,(MethodInfo *)0x0);
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      uVar2 = (this->fields).pos.x;
      (*(pMVar1->klass->vtable).set_WorldPosition.methodPtr)(pMVar1,uVar2);
      pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                  (pMVar1,(this->fields).rot,(MethodInfo *)0x0);
        if ((this->fields).goToInsert != 0) {
          FSMEntity::FSMEntity_PushState_1
                    ((FSMEntity *)e,EditorEvent__Enum_ESInsert,EditorEvent__Enum_ObjectSelected,
                     (MethodInfo *)0x0);
          return;
        }
        pDVar3 = (e->fields)._.data;
        pOVar4 = (Object *)func_?();
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar3,(Object *)StringLiteral_translateMode,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pDVar3 = (e->fields)._.data;
          pOVar4 = (Object *)func_?();
          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar3,(Object *)StringLiteral_moveWithAvatar,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            FSMEntity::FSMEntity_PushState_1
                      ((FSMEntity *)e,EditorEvent__Enum_ESTranslate,EditorEvent__Enum_ObjectSelected
                       ,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Exit
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).pos.x = (pVVar1->zeroVector).x;
  (this->fields).pos.y = fVar2;
  (this->fields).pos.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar4->identityQuaternion).y;
  fVar2 = (pQVar4->identityQuaternion).z;
  fVar5 = (pQVar4->identityQuaternion).w;
  (this->fields).rot.x = (pQVar4->identityQuaternion).x;
  (this->fields).rot.y = fVar3;
  (this->fields).rot.z = fVar2;
  (this->fields).rot.w = fVar5;
  return;
}


/* ESWaitForClone() */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone__ctor
               (ESWaitForClone *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).pos.x = (pVVar1->zeroVector).x;
  (this->fields).pos.y = fVar2;
  (this->fields).pos.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar4->identityQuaternion).y;
  fVar2 = (pQVar4->identityQuaternion).z;
  fVar5 = (pQVar4->identityQuaternion).w;
  (this->fields).rot.x = (pQVar4->identityQuaternion).x;
  (this->fields).rot.y = fVar3;
  (this->fields).rot.z = fVar2;
  (this->fields).rot.w = fVar5;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

