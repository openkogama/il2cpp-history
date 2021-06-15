
/* Void Exit(AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die_Exit
               (AdvancedGhostVisualizaton_Die *this,AdvancedGhostVisualizaton *ghost,
               MethodInfo *method)

{
  if ((ghost != (AdvancedGhostVisualizaton *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)ghost,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,(ghost->fields).baseScale,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)ghost,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      pcVar2 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar2 = (code *)func_?();
        if (pcVar2 == (code *)0x0) {
          puStack3 = (undefined *)0x0;
          puStack4 = (undefined *)0x0;
          puStack5 = (undefined *)func_?();
          func_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pcRam_? = pcVar2;
      (*pcRam_?)();
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateEffect(AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die_UpdateEffect
               (AdvancedGhostVisualizaton_Die *this,AdvancedGhostVisualizaton *ghostVisualizaton,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ghostVisualizaton != (AdvancedGhostVisualizaton *)0x0) {
    uVar1 = (ghostVisualizaton->fields).baseScale.x;
    uVar2 = (ghostVisualizaton->fields).baseScale.y;
    fVar3 = (ghostVisualizaton->fields).baseScale.z;
    fVar4 = (this->fields)._.timeLeft;
    fVar5 = (this->fields)._.duration;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.y = (float)uVar2;
    a.x = (float)uVar1;
    a.z = fVar3;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&puStack_7,a,fVar4 / fVar5,(MethodInfo *)0x0);
    uVar8 = pVVar6->x;
    uVar9 = pVVar6->y;
    fVar4 = pVVar6->z;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)ghostVisualizaton,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      value.y = (float)uVar9;
      value.x = (float)uVar8;
      value.z = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Vector3 UpdateScale(AdvancedGhostVisualizaton) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::
          AdvancedGhostVisualizaton_Die_UpdateScale
                    (Vector3 *__return_storage_ptr__,AdvancedGhostVisualizaton_Die *this,
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
    fVar3 = (this->fields)._.timeLeft;
    fVar4 = (this->fields)._.duration;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar2;
    a.x = VStack_1.y;
    a.y = VStack_1.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_1,a,fVar3 / fVar4,(MethodInfo *)0x0);
    fVar4 = pVVar5->y;
    fVar3 = pVVar5->z;
    __return_storage_ptr__->x = pVVar5->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar6)();
  return pVVar5;
}


/* AdvancedGhostVisualizaton+Die(Single, AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die__ctor
               (AdvancedGhostVisualizaton_Die *this,float duration,
               AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._.duration = duration;
  (this->fields)._.timeLeft = duration;
  return;
}

