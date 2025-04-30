
/* OBB InverseTransformOBB(OBB) */

OBB * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_InverseTransformOBB
                (OBB *__return_storage_ptr__,MeshTransform *this,OBB obb,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x2c);
  pVVar1 = Vector3Ex::Vector3Ex_GetInverse(&VStack_2,(this->fields)._scale,(MethodInfo *)0x0);
  fVar3 = pVVar1->x;
  fVar4 = pVVar1->y;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                      ((Quaternion *)&stack0xffffffa0,(this->fields)._rotation,(MethodInfo *)0x0);
  uVar6 = (this->fields)._position.x;
  uVar7 = (this->fields)._position.y;
  point.y = obb._center.y - (float)uVar7;
  point.x = obb._center.x - (float)uVar6;
  point.z = obb._center.z - (this->fields)._position.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffb0,*pQVar5,point,(MethodInfo *)0x0);
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  VStack_2.x = (float)uVar8 * fVar3;
  VStack_2.y = 0.0;
  fVar4 = (float)uVar9 * fVar4;
  VStack_2.z = (float)&UNK_?;
  pVVar1 = Vector3Ex::Vector3Ex_GetInverse
                      ((Vector3 *)&stack0xffffffb0,(this->fields)._scale,(MethodInfo *)0x0);
  uVar10 = pVVar1->x;
  uVar11 = pVVar1->y;
  center.y = fVar4;
  center.x = VStack_2.x;
  center.z = obb._size.x * (float)uVar10;
  size.y = obb._size.y * (float)uVar11;
  size.x = obb._size.x * (float)uVar10;
  size.z = obb._size.z * pVVar1->z;
  OBB::OBB__ctor(__return_storage_ptr__,center,size,(MethodInfo *)0x0);
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                      ((Quaternion *)&stack0xffffffa0,(this->fields)._rotation,(MethodInfo *)0x0);
  fVar4 = pQVar5->x;
  fVar12 = pQVar5->y;
  fVar13 = pQVar5->z;
  fVar14 = pQVar5->w;
  fVar15 = pQVar5->x;
  fVar3 = pQVar5->x;
  (__return_storage_ptr__->_rotation).x =
       (obb._rotation.w * fVar4 + obb._rotation.x * fVar14 + obb._rotation.z * fVar12) -
       obb._rotation.y * fVar13;
  (__return_storage_ptr__->_rotation).y =
       (obb._rotation.w * fVar12 + obb._rotation.y * fVar14 + obb._rotation.x * fVar13) -
       obb._rotation.z * fVar15;
  (__return_storage_ptr__->_rotation).z =
       (obb._rotation.w * fVar13 + obb._rotation.z * fVar14 + obb._rotation.y * fVar3) -
       obb._rotation.x * fVar12;
  (__return_storage_ptr__->_rotation).w =
       ((obb._rotation.w * fVar14 - obb._rotation.x * fVar4) - obb._rotation.y * fVar12) -
       obb._rotation.z * fVar13;
  return __return_storage_ptr__;
}


/* Vector3 InverseTransformPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_InverseTransformPoint
                    (Vector3 *__return_storage_ptr__,MeshTransform *this,Vector3 point,
                    MethodInfo *method)

{
  Vector3Ex::Vector3Ex_GetInverse
            ((Vector3 *)&stack0xfffffff0,(this->fields)._scale,(MethodInfo *)0x0);
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     ((Quaternion *)&stack0xffffffd4,(this->fields)._rotation,(MethodInfo *)0x0);
  uVar2 = (this->fields)._position.x;
  uVar3 = (this->fields)._position.y;
  fVar4 = point.x - (float)uVar2;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  point_00.y = point.y - (float)uVar3;
  point_00.x = fVar4;
  point_00.z = point.z - (this->fields)._position.z;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xfffffff0,*pQVar1,point_00,(MethodInfo *)0x0);
  uVar8 = pVVar7->x;
  uVar9 = pVVar7->y;
  fVar10 = pVVar7->z;
  __return_storage_ptr__->x = (float)uVar8 * fVar5;
  __return_storage_ptr__->y = (float)uVar9 * fVar6;
  __return_storage_ptr__->z = fVar10 * fVar4;
  return __return_storage_ptr__;
}


/* Vector3 TransformPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_TransformPoint
                    (Vector3 *__return_storage_ptr__,MeshTransform *this,Vector3 point,
                    MethodInfo *method)

{
  uVar1 = (this->fields)._scale.x;
  uVar2 = (this->fields)._scale.y;
  point.z = point.z * (this->fields)._scale.z;
  point_00.y = point.y * (float)uVar2;
  point_00.x = point.x * (float)uVar1;
  point_00.z = point.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&point,(this->fields)._rotation,point_00,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  uVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  uVar7 = (this->fields)._position.x;
  uVar8 = (this->fields)._position.y;
  fVar9 = (this->fields)._position.z;
  __return_storage_ptr__->x = (float)uVar7 + (float)uVar4;
  __return_storage_ptr__->y = (float)uVar8 + (float)uVar5;
  __return_storage_ptr__->z = fVar9 + fVar6;
  return __return_storage_ptr__;
}


/* MeshTransform(Vector3, Quaternion, Vector3) */

void Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform__ctor
               (MeshTransform *this,Vector3 position,Quaternion rotation,Vector3 scale,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._position.x = position.x;
  (this->fields)._position.y = position.y;
  (this->fields)._position.z = position.z;
  (this->fields)._rotation.x = rotation.x;
  (this->fields)._rotation.y = rotation.y;
  (this->fields)._rotation.z = rotation.z;
  (this->fields)._rotation.w = rotation.w;
  (this->fields)._scale.x = scale.x;
  (this->fields)._scale.y = scale.y;
  (this->fields)._scale.z = scale.z;
  return;
}


/* MeshTransform(Transform) */

void Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform__ctor_1
               (MeshTransform *this,Transform *transform,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (transform != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)(auStack_2 + 4),transform,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->fields)._position.x = pVVar1->x;
    (this->fields)._position.y = fVar3;
    (this->fields)._position.z = fVar4;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)auStack_2,transform,(MethodInfo *)0x0);
    fVar4 = pQVar5->y;
    fVar3 = pQVar5->z;
    fVar6 = pQVar5->w;
    (this->fields)._rotation.x = pQVar5->x;
    (this->fields)._rotation.y = fVar4;
    (this->fields)._rotation.z = fVar3;
    (this->fields)._rotation.w = fVar6;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)(auStack_2 + 4),transform,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->fields)._scale.x = pVVar1->x;
    (this->fields)._scale.y = fVar3;
    (this->fields)._scale.z = fVar4;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

