
/* Void Exit(AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die_Exit
               (AdvancedGhostVisualizaton_Die *this,AdvancedGhostVisualizaton *ghost,
               MethodInfo *method)

{
  if (ghost != (AdvancedGhostVisualizaton *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)ghost,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,(ghost->fields).baseScale,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)ghost,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        (*pcRam_?)();
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateEffect(AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die_UpdateEffect
               (AdvancedGhostVisualizaton_Die *this,AdvancedGhostVisualizaton *ghostVisualizaton,
               MethodInfo *method)

{
  if (ghostVisualizaton != (AdvancedGhostVisualizaton *)0x0) {
    fVar1 = (ghostVisualizaton->fields).baseScale.z;
    uVar2 = (ghostVisualizaton->fields).baseScale.x;
    uVar3 = (ghostVisualizaton->fields).baseScale.y;
    fVar4 = (this->fields)._.timeLeft / (this->fields)._.duration;
    fVar5 = (float)uVar2 * fVar4;
    fVar6 = (float)uVar3 * fVar4;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)ghostVisualizaton,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      value.y = fVar6;
      value.x = fVar5;
      value.z = fVar1 * fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Vector3 UpdateScale(AdvancedGhostVisualizaton) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::
          AdvancedGhostVisualizaton_Die_UpdateScale
                    (Vector3 *__return_storage_ptr__,AdvancedGhostVisualizaton_Die *this,
                    AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  if (ghostVisualizaton != (AdvancedGhostVisualizaton *)0x0) {
    uVar1 = (ghostVisualizaton->fields).baseScale.x;
    uVar2 = (ghostVisualizaton->fields).baseScale.y;
    fVar3 = (ghostVisualizaton->fields).baseScale.z;
    fVar4 = (this->fields)._.timeLeft / (this->fields)._.duration;
    __return_storage_ptr__->x = (float)uVar1 * fVar4;
    __return_storage_ptr__->y = (float)uVar2 * fVar4;
    __return_storage_ptr__->z = fVar3 * fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* AdvancedGhostVisualizaton+Die(Single, AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die__ctor
               (AdvancedGhostVisualizaton_Die *this,float duration,
               AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.duration = duration;
  (this->fields)._.timeLeft = duration;
  return;
}

