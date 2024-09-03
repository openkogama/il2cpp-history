
/* Void Apply() */

void Assembly-CSharp.dll::RTG::CharacterController3DSnapshot::CharacterController3DSnapshot_Apply
               (CharacterController3DSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._characterController;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pCVar1 = (this->fields)._characterController;
  if (pCVar1 != (CharacterController *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::CharacterController_set_center
              (pCVar1,(this->fields)._localCenter,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._characterController;
    if (pCVar1 != (CharacterController *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
      CharacterController_set_radius(pCVar1,(this->fields)._localRadius,(MethodInfo *)0x0);
      pCVar1 = (this->fields)._characterController;
      if (pCVar1 != (CharacterController *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
        CharacterController_set_height(pCVar1,(this->fields)._localHeight,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Snapshot(CharacterController) */

void Assembly-CSharp.dll::RTG::CharacterController3DSnapshot::CharacterController3DSnapshot_Snapshot
               (CharacterController3DSnapshot *this,CharacterController *characterController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)characterController,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields)._characterController = characterController;
    func_?(&this->fields);
    if (characterController == (CharacterController *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
             CharacterController_get_center
                       ((Vector3 *)&stack0xfffffff0,characterController,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._localCenter.x = pVVar3->x;
    (this->fields)._localCenter.y = fVar4;
    (this->fields)._localCenter.z = fVar5;
    fVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
            CharacterController_get_radius(characterController,(MethodInfo *)0x0);
    (this->fields)._localRadius = fVar5;
    fVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
            CharacterController_get_height(characterController,(MethodInfo *)0x0);
    (this->fields)._localHeight = fVar5;
  }
  return;
}


/* CharacterController3DSnapshot(CharacterController3DSnapshot) */

void Assembly-CSharp.dll::RTG::CharacterController3DSnapshot::CharacterController3DSnapshot__ctor_1
               (CharacterController3DSnapshot *this,CharacterController3DSnapshot *src,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (src != (CharacterController3DSnapshot *)0x0) {
    pCVar1 = (src->fields)._characterController;
    (this->fields)._characterController = pCVar1;
    func_?(&this->fields,pCVar1);
    fVar2 = (src->fields)._localCenter.y;
    fVar3 = (src->fields)._localCenter.z;
    (this->fields)._localCenter.x = (src->fields)._localCenter.x;
    (this->fields)._localCenter.y = fVar2;
    (this->fields)._localCenter.z = fVar3;
    (this->fields)._localRadius = (src->fields)._localRadius;
    (this->fields)._localHeight = (src->fields)._localHeight;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

