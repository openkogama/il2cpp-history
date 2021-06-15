
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).currentRollbackTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (this->fields).currentRollbackTime = fVar2 + fVar1;
  if (ghostEye != (GhostEye *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)ghostEye,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
      fVar2 = (this->fields).rollbackRotation.x;
      fVar4 = (this->fields).rollbackRotation.y;
      fVar5 = (this->fields).rollbackRotation.z;
      puVar6 = (undefined *)(this->fields).rollbackRotation.w;
      fVar1 = (this->fields).currentRollbackTime;
      pQVar7 = (Quaternion__Class *)pQVar3->x;
      fVar8 = pQVar3->y;
      fVar9 = pQVar3->z;
      fVar10 = pQVar3->w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        puVar6 = &UNK_?;
        pQVar7 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      a.y = fVar8;
      a.x = (float)pQVar7;
      a.z = fVar9;
      a.w = fVar10;
      b.y = fVar4;
      b.x = fVar2;
      b.z = fVar5;
      b.w = (float)puVar6;
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffdc,a,b,fVar1,(MethodInfo *)0x0);
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
  pcVar11 = (code *)swi(3);
  pQVar3 = (Quaternion *)(*pcVar11)();
  return pQVar3;
}


/* GhostEye+DieRollback() */

void Assembly-CSharp.dll::GhostEye+DieRollback::GhostEye_DieRollback__ctor
               (GhostEye_DieRollback *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                     ((Quaternion *)&stack0xffffffec,-90.0,0.0,0.0,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields).rollbackRotation.x = pQVar1->x;
  (this->fields).rollbackRotation.y = fVar2;
  (this->fields).rollbackRotation.z = fVar3;
  (this->fields).rollbackRotation.w = fVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_5);
  return;
}

