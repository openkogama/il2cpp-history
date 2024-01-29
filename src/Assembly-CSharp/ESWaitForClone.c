
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
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data,
     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)StringLiteral_goToInsert,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    (this->fields).goToInsert = bVar1;
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar2 == (MVWorldObjectClient *)0x0) || ((this->fields).goToInsert != 0)) {
code_?:
      EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
      return;
    }
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      puVar3 = (undefined8 *)(*(code *)(pMVar2->klass->vtable).get_WorldPosition_1.method)();
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
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
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
  this_00 = e;
  if (e != (EditorStateMachine *)0x0) {
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      return;
    }
    uVar1 = ZEXT48(this_00);
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(this_00,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      uVar1._0_4_ = (this->fields).pos.x;
      uVar1._4_4_ = (this->fields).pos.y;
      (*(code *)(pMVar2->klass->vtable).set_WorldPosition.method)(pMVar2,uVar1,(this->fields).pos.z)
      ;
      pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                         (this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                  (pMVar2,(this->fields).rot,(MethodInfo *)0x0);
        if ((this->fields).goToInsert != 0) {
          FSMEntity::FSMEntity_PushState_1
                    ((FSMEntity *)this_00,EditorEvent__Enum_ESInsert,
                     EditorEvent__Enum_ObjectSelected,(MethodInfo *)0x0);
          return;
        }
        pDVar3 = (this_00->fields)._.data;
        pOVar4 = (Object *)func_?();
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar3,(Object *)StringLiteral_translateMode,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pDVar3 = (this_00->fields)._.data;
          e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
          pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,(int)&e + 3);
          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar3,(Object *)StringLiteral_moveWithAvatar,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            FSMEntity::FSMEntity_PushState_1
                      ((FSMEntity *)this_00,EditorEvent__Enum_ESTranslate,
                       EditorEvent__Enum_ObjectSelected,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(uVar1);
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

