
/* Void Execute() */

void Assembly-CSharp.dll::RTG::BoxCollider3DChangedAction::BoxCollider3DChangedAction_Execute
               (BoxCollider3DChangedAction *this,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::BoxCollider3DChangedAction::BoxCollider3DChangedAction_Redo
               (BoxCollider3DChangedAction *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._postChangeSnapshot;
  if (pBVar1 != (BoxCollider3DSnapshot *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pBVar2 = (pBVar1->fields)._boxCollider;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pBVar2 = (pBVar1->fields)._boxCollider;
    if (pBVar2 != (BoxCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                (pBVar2,(pBVar1->fields)._localCenter,(MethodInfo *)0x0);
      pBVar2 = (pBVar1->fields)._boxCollider;
      if (pBVar2 != (BoxCollider *)0x0) {
        puStack4 = (undefined1 *)(pBVar1->fields)._localSize.z;
        UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                  (pBVar2,(pBVar1->fields)._localSize,(MethodInfo *)0x0);
        return;
      }
    }
  }
  puStack4 = &stack0xfffffffc;
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::BoxCollider3DChangedAction::BoxCollider3DChangedAction_Undo
               (BoxCollider3DChangedAction *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._preChangeSnapshot;
  if (pBVar1 != (BoxCollider3DSnapshot *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pBVar2 = (pBVar1->fields)._boxCollider;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pBVar2 = (pBVar1->fields)._boxCollider;
    if (pBVar2 != (BoxCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                (pBVar2,(pBVar1->fields)._localCenter,(MethodInfo *)0x0);
      pBVar2 = (pBVar1->fields)._boxCollider;
      if (pBVar2 != (BoxCollider *)0x0) {
        puStack4 = (undefined1 *)(pBVar1->fields)._localSize.z;
        UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                  (pBVar2,(pBVar1->fields)._localSize,(MethodInfo *)0x0);
        return;
      }
    }
  }
  puStack4 = &stack0xfffffffc;
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* BoxCollider3DChangedAction(BoxCollider3DSnapshot, BoxCollider3DSnapshot) */

void Assembly-CSharp.dll::RTG::BoxCollider3DChangedAction::BoxCollider3DChangedAction__ctor
               (BoxCollider3DChangedAction *this,BoxCollider3DSnapshot *preChangeSnapshot,
               BoxCollider3DSnapshot *postChangeSnapshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxCollider3DSnapshot);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  method_01 = TypeInfo__RTG__BoxCollider3DSnapshot;
  value = (MethodInfo *)func_?();
  method_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (preChangeSnapshot != (BoxCollider3DSnapshot *)0x0) {
    pBVar1 = (preChangeSnapshot->fields)._boxCollider;
    ((BoxCollider3DSnapshot__Fields *)&value->invoker_method)->_boxCollider = pBVar1;
    func_?((BoxCollider3DSnapshot__Fields *)&value->invoker_method,pBVar1);
    fVar2 = (preChangeSnapshot->fields)._localCenter.y;
    pIVar3 = (Il2CppType *)(preChangeSnapshot->fields)._localCenter.z;
    value->name = (char *)(preChangeSnapshot->fields)._localCenter.x;
    value->klass = (Il2CppClass *)fVar2;
    value->return_type = pIVar3;
    fVar2 = (preChangeSnapshot->fields)._localSize.y;
    _Var3 = (_union_155)(preChangeSnapshot->fields)._localSize.z;
    value->parameters = (Il2CppType **)(preChangeSnapshot->fields)._localSize.x;
    value->field7_0x1c = (_union_154)fVar2;
    value->field8_0x20 = _Var3;
    (this->fields)._preChangeSnapshot = (BoxCollider3DSnapshot *)value;
    func_?(&this->fields,value);
    value_00 = (BoxCollider3DSnapshot *)func_?(TypeInfo__RTG__BoxCollider3DSnapshot);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_00);
    if (postChangeSnapshot != (BoxCollider3DSnapshot *)0x0) {
      pBVar1 = (postChangeSnapshot->fields)._boxCollider;
      (value_00->fields)._boxCollider = pBVar1;
      func_?(&value_00->fields,pBVar1);
      fVar4 = (postChangeSnapshot->fields)._localCenter.y;
      fVar2 = (postChangeSnapshot->fields)._localCenter.z;
      (value_00->fields)._localCenter.x = (postChangeSnapshot->fields)._localCenter.x;
      (value_00->fields)._localCenter.y = fVar4;
      (value_00->fields)._localCenter.z = fVar2;
      fVar4 = (postChangeSnapshot->fields)._localSize.y;
      fVar2 = (postChangeSnapshot->fields)._localSize.z;
      (value_00->fields)._localSize.x = (postChangeSnapshot->fields)._localSize.x;
      (value_00->fields)._localSize.y = fVar4;
      (value_00->fields)._localSize.z = fVar2;
      (this->fields)._postChangeSnapshot = value_00;
      func_?(&(this->fields)._postChangeSnapshot,value_00);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

