
/* Void Execute() */

void Assembly-CSharp.dll::RTG::CapsuleCollider3DChangedAction::
     CapsuleCollider3DChangedAction_Execute(CapsuleCollider3DChangedAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (RTUndoRedo *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  if (this_00 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_RecordAction(this_00,(IUndoRedoAction *)this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::CapsuleCollider3DChangedAction::CapsuleCollider3DChangedAction_Redo
               (CapsuleCollider3DChangedAction *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._postChangeSnapshot;
  if (pCVar1 != (CapsuleCollider3DSnapshot *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pCVar2 = (pCVar1->fields)._capsuleCollider;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pCVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pCVar2 = (pCVar1->fields)._capsuleCollider;
    if (pCVar2 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_center
                (pCVar2,(pCVar1->fields)._localCenter,(MethodInfo *)0x0);
      pCVar2 = (pCVar1->fields)._capsuleCollider;
      if (pCVar2 != (CapsuleCollider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_radius
                  (pCVar2,(pCVar1->fields)._localRadius,(MethodInfo *)0x0);
        pCVar2 = (pCVar1->fields)._capsuleCollider;
        if (pCVar2 != (CapsuleCollider *)0x0) {
          UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_height
                    (pCVar2,(pCVar1->fields)._localHeight,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::CapsuleCollider3DChangedAction::CapsuleCollider3DChangedAction_Undo
               (CapsuleCollider3DChangedAction *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._preChangeSnapshot;
  if (pCVar1 != (CapsuleCollider3DSnapshot *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pCVar2 = (pCVar1->fields)._capsuleCollider;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pCVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pCVar2 = (pCVar1->fields)._capsuleCollider;
    if (pCVar2 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_center
                (pCVar2,(pCVar1->fields)._localCenter,(MethodInfo *)0x0);
      pCVar2 = (pCVar1->fields)._capsuleCollider;
      if (pCVar2 != (CapsuleCollider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_radius
                  (pCVar2,(pCVar1->fields)._localRadius,(MethodInfo *)0x0);
        pCVar2 = (pCVar1->fields)._capsuleCollider;
        if (pCVar2 != (CapsuleCollider *)0x0) {
          UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_height
                    (pCVar2,(pCVar1->fields)._localHeight,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* CapsuleCollider3DChangedAction(CapsuleCollider3DSnapshot, CapsuleCollider3DSnapshot) */

void Assembly-CSharp.dll::RTG::CapsuleCollider3DChangedAction::CapsuleCollider3DChangedAction__ctor
               (CapsuleCollider3DChangedAction *this,CapsuleCollider3DSnapshot *preChangeSnapshot,
               CapsuleCollider3DSnapshot *postChangeSnapshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CapsuleCollider3DSnapshot);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  method_01 = TypeInfo__RTG__CapsuleCollider3DSnapshot;
  value = (MethodInfo *)func_?();
  method_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (preChangeSnapshot != (CapsuleCollider3DSnapshot *)0x0) {
    pCVar1 = (preChangeSnapshot->fields)._capsuleCollider;
    ((CapsuleCollider3DSnapshot__Fields *)&value->invoker_method)->_capsuleCollider = pCVar1;
    func_?((CapsuleCollider3DSnapshot__Fields *)&value->invoker_method,pCVar1);
    fVar2 = (preChangeSnapshot->fields)._localCenter.y;
    pIVar3 = (Il2CppType *)(preChangeSnapshot->fields)._localCenter.z;
    value->name = (char *)(preChangeSnapshot->fields)._localCenter.x;
    value->klass = (Il2CppClass *)fVar2;
    value->return_type = pIVar3;
    value->parameters = (Il2CppType **)(preChangeSnapshot->fields)._localRadius;
    value->field7_0x1c = (_union_154)(preChangeSnapshot->fields)._localHeight;
    (this->fields)._preChangeSnapshot = (CapsuleCollider3DSnapshot *)value;
    func_?(&this->fields,value);
    value_00 = (CapsuleCollider3DSnapshot *)
               func_?(TypeInfo__RTG__CapsuleCollider3DSnapshot);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_00);
    if (postChangeSnapshot != (CapsuleCollider3DSnapshot *)0x0) {
      pCVar1 = (postChangeSnapshot->fields)._capsuleCollider;
      (value_00->fields)._capsuleCollider = pCVar1;
      func_?(&value_00->fields,pCVar1);
      fVar4 = (postChangeSnapshot->fields)._localCenter.y;
      fVar2 = (postChangeSnapshot->fields)._localCenter.z;
      (value_00->fields)._localCenter.x = (postChangeSnapshot->fields)._localCenter.x;
      (value_00->fields)._localCenter.y = fVar4;
      (value_00->fields)._localCenter.z = fVar2;
      (value_00->fields)._localRadius = (postChangeSnapshot->fields)._localRadius;
      (value_00->fields)._localHeight = (postChangeSnapshot->fields)._localHeight;
      ppCVar5 = &(this->fields)._postChangeSnapshot;
      *ppCVar5 = value_00;
      func_?(ppCVar5,value_00);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

