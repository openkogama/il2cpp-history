
/* Void Exit(AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Respawn::AdvancedGhostVisualizaton_Respawn_Exit
               (AdvancedGhostVisualizaton_Respawn *this,AdvancedGhostVisualizaton *ghost,
               MethodInfo *method)

{
  if (ghost != (AdvancedGhostVisualizaton *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)ghost,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,(ghost->fields).baseScale,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateEffect(AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Respawn::
     AdvancedGhostVisualizaton_Respawn_UpdateEffect
               (AdvancedGhostVisualizaton_Respawn *this,AdvancedGhostVisualizaton *ghostVisualizaton
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ghostVisualizaton != (AdvancedGhostVisualizaton *)0x0) {
    uVar1 = (ghostVisualizaton->fields).baseScale.x;
    uVar2 = (ghostVisualizaton->fields).baseScale.y;
    fVar3 = (ghostVisualizaton->fields).baseScale.z;
    fVar4 = (this->fields)._.duration;
    fVar5 = (this->fields)._.timeLeft;
    fVar6 = (this->fields)._.duration;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.y = (float)uVar2;
    a.x = (float)uVar1;
    a.z = fVar3;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&puStack_8,a,(fVar4 - fVar5) / fVar6,(MethodInfo *)0x0);
    uVar9 = pVVar7->x;
    uVar10 = pVVar7->y;
    fVar4 = pVVar7->z;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)ghostVisualizaton,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      value.y = (float)uVar10;
      value.x = (float)uVar9;
      value.z = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Vector3 UpdateScale(AdvancedGhostVisualizaton) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostVisualizaton+Respawn::
          AdvancedGhostVisualizaton_Respawn_UpdateScale
                    (Vector3 *__return_storage_ptr__,AdvancedGhostVisualizaton_Respawn *this,
                    AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ghostVisualizaton != (AdvancedGhostVisualizaton *)0x0) {
    VStack_1.y = (ghostVisualizaton->fields).baseScale.x;
    VStack_1.z = (ghostVisualizaton->fields).baseScale.y;
    fVar2 = (ghostVisualizaton->fields).baseScale.z;
    fVar3 = (this->fields)._.duration;
    fVar4 = (this->fields)._.timeLeft;
    fVar5 = (this->fields)._.duration;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar2;
    a.x = VStack_1.y;
    a.y = VStack_1.z;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_1,a,(fVar3 - fVar4) / fVar5,(MethodInfo *)0x0);
    fVar4 = pVVar6->y;
    fVar3 = pVVar6->z;
    __return_storage_ptr__->x = pVVar6->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar7)();
  return pVVar6;
}


/* AdvancedGhostVisualizaton+Respawn(Single, AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Respawn::AdvancedGhostVisualizaton_Respawn__ctor
               (AdvancedGhostVisualizaton_Respawn *this,float duration,
               AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._.duration = duration;
  (this->fields)._.timeLeft = duration;
  if (ghostVisualizaton != (AdvancedGhostVisualizaton *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)ghostVisualizaton,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,*pVVar1,(MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)ghostVisualizaton,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

