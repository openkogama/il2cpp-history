
/* Void Execute() */

void Assembly-CSharp.dll::RTG::SphereColliderChangedAction::SphereColliderChangedAction_Execute
               (SphereColliderChangedAction *this,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::SphereColliderChangedAction::SphereColliderChangedAction_Redo
               (SphereColliderChangedAction *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._postChangeSnapshot;
  if (pSVar1 != (SphereColliderSnapshot *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pSVar2 = (pSVar1->fields)._sphereCollider;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pSVar2 = (pSVar1->fields)._sphereCollider;
    if (pSVar2 != (SphereCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_set_center
                (pSVar2,(pSVar1->fields)._localCenter,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields)._sphereCollider;
      if (pSVar2 != (SphereCollider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_set_radius
                  (pSVar2,(pSVar1->fields)._localRadius,(MethodInfo *)0x0);
        return;
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

void Assembly-CSharp.dll::RTG::SphereColliderChangedAction::SphereColliderChangedAction_Undo
               (SphereColliderChangedAction *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._preChangeSnapshot;
  if (pSVar1 != (SphereColliderSnapshot *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pSVar2 = (pSVar1->fields)._sphereCollider;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pSVar2 = (pSVar1->fields)._sphereCollider;
    if (pSVar2 != (SphereCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_set_center
                (pSVar2,(pSVar1->fields)._localCenter,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields)._sphereCollider;
      if (pSVar2 != (SphereCollider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_set_radius
                  (pSVar2,(pSVar1->fields)._localRadius,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SphereColliderChangedAction(SphereColliderSnapshot, SphereColliderSnapshot) */

void Assembly-CSharp.dll::RTG::SphereColliderChangedAction::SphereColliderChangedAction__ctor
               (SphereColliderChangedAction *this,SphereColliderSnapshot *preChangeSnapshot,
               SphereColliderSnapshot *postChangeSnapshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SphereColliderSnapshot);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  method_01 = TypeInfo__RTG__SphereColliderSnapshot;
  value = (MethodInfo *)func_?();
  method_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (preChangeSnapshot != (SphereColliderSnapshot *)0x0) {
    pSVar1 = (preChangeSnapshot->fields)._sphereCollider;
    ((SphereColliderSnapshot__Fields *)&value->invoker_method)->_sphereCollider = pSVar1;
    func_?((SphereColliderSnapshot__Fields *)&value->invoker_method,pSVar1);
    fVar2 = (preChangeSnapshot->fields)._localCenter.y;
    pIVar3 = (Il2CppType *)(preChangeSnapshot->fields)._localCenter.z;
    value->name = (char *)(preChangeSnapshot->fields)._localCenter.x;
    value->klass = (Il2CppClass *)fVar2;
    value->return_type = pIVar3;
    value->parameters = (Il2CppType **)(preChangeSnapshot->fields)._localRadius;
    (this->fields)._preChangeSnapshot = (SphereColliderSnapshot *)value;
    func_?(&this->fields,value);
    value_00 = (SphereColliderSnapshot *)func_?(TypeInfo__RTG__SphereColliderSnapshot);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_00);
    if (postChangeSnapshot != (SphereColliderSnapshot *)0x0) {
      pSVar1 = (postChangeSnapshot->fields)._sphereCollider;
      (value_00->fields)._sphereCollider = pSVar1;
      func_?(&value_00->fields,pSVar1);
      fVar4 = (postChangeSnapshot->fields)._localCenter.y;
      fVar2 = (postChangeSnapshot->fields)._localCenter.z;
      (value_00->fields)._localCenter.x = (postChangeSnapshot->fields)._localCenter.x;
      (value_00->fields)._localCenter.y = fVar4;
      (value_00->fields)._localCenter.z = fVar2;
      (value_00->fields)._localRadius = (postChangeSnapshot->fields)._localRadius;
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

