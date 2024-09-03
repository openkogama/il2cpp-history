
/* Void Enter(GhostEye) */

void Assembly-CSharp.dll::GhostEye+DieRollback::GhostEye_DieRollback_Enter
               (GhostEye_DieRollback *this,GhostEye *ghostEye,MethodInfo *method)

{
  (this->fields).currentRollbackTime = 0.0;
  return;
}


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+DieRollback::GhostEye_DieRollback_Update
          (Quaternion *__return_storage_ptr__,GhostEye_DieRollback *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  fVar1 = (this->fields).currentRollbackTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (this->fields).currentRollbackTime = fVar2 + fVar1;
  if (ghostEye != (GhostEye *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)ghostEye,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffec,*pQVar3,(this->fields).rollbackRotation,
                          (this->fields).currentRollbackTime,(MethodInfo *)0x0);
      fVar1 = pQVar3->y;
      fVar2 = pQVar3->z;
      fVar4 = pQVar3->w;
      __return_storage_ptr__->x = pQVar3->x;
      __return_storage_ptr__->y = fVar1;
      __return_storage_ptr__->z = fVar2;
      __return_storage_ptr__->w = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pQVar3 = (Quaternion *)(*pcVar5)();
  return pQVar3;
}


/* GhostEye+DieRollback() */

void Assembly-CSharp.dll::GhostEye+DieRollback::GhostEye_DieRollback__ctor
               (GhostEye_DieRollback *this,MethodInfo *method)

{
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = (float)_UNK_?;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields).rollbackRotation.x = pQVar1->x;
  (this->fields).rollbackRotation.y = fVar2;
  (this->fields).rollbackRotation.z = fVar3;
  (this->fields).rollbackRotation.w = fVar4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_5);
  return;
}

