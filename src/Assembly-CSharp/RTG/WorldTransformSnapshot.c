
/* Boolean SameAs(Transform) */

bool Assembly-CSharp.dll::RTG::WorldTransformSnapshot::WorldTransformSnapshot_SameAs
               (WorldTransformSnapshot *this,Transform *transform,MethodInfo *method)

{
  uStack_1._0_4_ = (this->fields)._worldPosition.x;
  uStack_1._4_4_ = (this->fields)._worldPosition.y;
  fStack_2 = (this->fields)._worldPosition.z;
  if (transform == (Transform *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&stack0xffffffd4,transform,(MethodInfo *)0x0);
  QStack_6.y = pVVar5->x;
  QStack_6.z = pVVar5->y;
  QStack_6.w = pVVar5->z;
  if ((uStack_1._4_4_ - QStack_6.z) * (uStack_1._4_4_ - QStack_6.z) +
      ((float)uStack_1 - QStack_6.y) * ((float)uStack_1 - QStack_6.y) +
      (fStack_2 - QStack_6.w) * (fStack_2 - QStack_6.w) < _UNK_?) {
    method_00 = (MethodInfo *)(this->fields)._worldRotation.x;
    fVar7 = (this->fields)._worldRotation.y;
    fVar8 = (this->fields)._worldRotation.z;
    fVar9 = (this->fields)._worldRotation.w;
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_6,transform,method_00);
    if (_UNK_? <
        pQVar10->y * fVar7 + pQVar10->x * (float)method_00 + pQVar10->z * fVar8 + pQVar10->w * fVar9) {
      QStack_6.w = (this->fields)._worldScale.z;
      QStack_6.y = (this->fields)._worldScale.x;
      QStack_6.z = (this->fields)._worldScale.y;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xffffffd4,transform,(MethodInfo *)0x0);
      uVar11 = pVVar5->x;
      uVar12 = pVVar5->y;
      QStack_6.w = QStack_6.w - pVVar5->z;
      return (QStack_6.z - (float)uVar12) * (QStack_6.z - (float)uVar12) +
             (QStack_6.y - (float)uVar11) * (QStack_6.y - (float)uVar11) + QStack_6.w * QStack_6.w
             < _UNK_?;
    }
  }
  return 0;
}


/* Void Snaphot(Transform) */

void Assembly-CSharp.dll::RTG::WorldTransformSnapshot::WorldTransformSnapshot_Snaphot
               (WorldTransformSnapshot *this,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)transform,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (transform == (Transform *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,transform,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._worldPosition.x = pVVar3->x;
    (this->fields)._worldPosition.y = fVar4;
    (this->fields)._worldPosition.z = fVar5;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffec,transform,(MethodInfo *)0x0);
    fVar5 = pQVar6->y;
    fVar4 = pQVar6->z;
    fVar7 = pQVar6->w;
    (this->fields)._worldRotation.x = pQVar6->x;
    (this->fields)._worldRotation.y = fVar5;
    (this->fields)._worldRotation.z = fVar4;
    (this->fields)._worldRotation.w = fVar7;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&stack0xfffffff0,transform,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._worldScale.x = pVVar3->x;
    (this->fields)._worldScale.y = fVar4;
    (this->fields)._worldScale.z = fVar5;
  }
  return;
}


/* Vector3 get_WorldScale() */

Vector3 * Assembly-CSharp.dll::RTG::WorldTransformSnapshot::WorldTransformSnapshot_get_WorldScale
                    (Vector3 *__return_storage_ptr__,WorldTransformSnapshot *this,MethodInfo *method
                    )

{
  fVar1 = (this->fields)._worldScale.y;
  fVar2 = (this->fields)._worldScale.z;
  __return_storage_ptr__->x = (this->fields)._worldScale.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}

