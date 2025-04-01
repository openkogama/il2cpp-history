
/* Matrix4x4 GetInverse(Matrix4x4) */

Matrix4x4 *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetInverse
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 mtx,MethodInfo *method)

{
  fVar1 = mtx.m22 * mtx.m33 - mtx.m23 * mtx.m32;
  fVar2 = mtx.m21 * mtx.m33 - mtx.m23 * mtx.m31;
  fVar3 = mtx.m21 * mtx.m32 - mtx.m22 * mtx.m31;
  fVar4 = mtx.m20 * mtx.m33 - mtx.m30 * mtx.m23;
  fVar5 = mtx.m20 * mtx.m32 - mtx.m30 * mtx.m22;
  fVar6 = mtx.m20 * mtx.m31 - mtx.m30 * mtx.m21;
  fVar4 = ((((fVar1 * mtx.m11 - mtx.m12 * fVar2) + mtx.m13 * fVar3) * mtx.m00 -
           ((fVar1 * mtx.m10 - mtx.m12 * fVar4) + mtx.m13 * fVar5) * mtx.m01) +
          ((((mtx.m21 * mtx.m33 - mtx.m23) - mtx.m31) * mtx.m10 - mtx.m11 * fVar4) + mtx.m13 * fVar6
          ) * mtx.m02) - ((mtx.m10 * fVar3 - mtx.m11 * fVar5) + mtx.m12 * fVar6) * mtx.m03;
  if (_UNK_? <= (float)((uint)fVar4 & _UNK_?)) {
    fVar4 = _UNK_? / fVar4;
    fVar6 = mtx.m12 * mtx.m33 - mtx.m13 * mtx.m32;
    fVar7 = mtx.m03 * mtx.m32;
    fVar8 = mtx.m23 * mtx.m02;
    fVar9 = mtx.m02 * mtx.m33 - fVar7;
    fVar10 = mtx.m23 * mtx.m12 - mtx.m22 * mtx.m13;
    fVar11 = (float)((uint)fVar4 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    fVar12 = mtx.m12 * mtx.m03;
    fVar13 = mtx.m13 * mtx.m02;
    fVar14 = mtx.m02 * mtx.m33 - fVar7;
    fVar5 = fVar8 - mtx.m22 * mtx.m03;
    fVar15 = mtx.m33 * mtx.m11 - mtx.m13 * mtx.m31;
    fVar3 = mtx.m33 * mtx.m01 - mtx.m31 * mtx.m03;
    mtx.m21 = ((fVar2 * mtx.m00 - fVar3 * mtx.m20) +
              (mtx.m23 * mtx.m01 - mtx.m21 * mtx.m03) * mtx.m30) * fVar11;
    fVar1 = mtx.m13 * mtx.m01 - mtx.m03 * mtx.m11;
    mtx.m22 = ((fVar15 * mtx.m00 - fVar3 * mtx.m10) + mtx.m30 * fVar1) * fVar4;
    mtx.m23 = (((mtx.m23 * mtx.m11 - mtx.m21 * mtx.m13) * mtx.m00 -
               (mtx.m23 * mtx.m01 - mtx.m21 * mtx.m03) * mtx.m10) + fVar1 * mtx.m20) * fVar11;
    fVar1 = mtx.m22 * mtx.m11 - mtx.m12 * mtx.m21;
    fVar1 = mtx.m31 * mtx.m12;
    mtx.m30 = (((mtx.m32 * mtx.m21 - mtx.m32 * mtx.m12) * mtx.m10 -
               (mtx.m32 * mtx.m11 - fVar1) * mtx.m20) + mtx.m30 * fVar1) * fVar11;
    fVar1 = mtx.m22 * mtx.m01 - mtx.m02 * mtx.m21;
    mtx.m31 = (((mtx.m32 * mtx.m21 - fVar1) * mtx.m00 -
               (mtx.m32 * mtx.m01 - mtx.m31 * mtx.m02) * mtx.m20) + fVar1 * mtx.m30) * fVar4;
    fVar1 = mtx.m12 * mtx.m01 - mtx.m02 * mtx.m11;
    mtx.m32 = (((mtx.m32 * mtx.m11 - fVar1) * mtx.m00 -
               (mtx.m32 * mtx.m01 - mtx.m31 * mtx.m02) * mtx.m10) + fVar1 * mtx.m30) * fVar11;
    mtx.m33 = ((fVar1 * mtx.m00 - fVar1 * mtx.m10) + fVar1 * mtx.m20) * fVar4;
    mtx.m00 = ((fVar1 * mtx.m11 - mtx.m21 * fVar6) + fVar10 * mtx.m31) * fVar4;
    mtx.m10 = ((fVar1 * mtx.m10 - mtx.m20 * fVar6) + mtx.m30 * fVar10) * fVar11;
    mtx.m20 = ((fVar2 * mtx.m10 - mtx.m20 * fVar15) +
              (mtx.m23 * mtx.m11 - mtx.m21 * mtx.m13) * mtx.m30) * fVar4;
    mtx.m01 = ((fVar1 * mtx.m01 - mtx.m21 * fVar9) + (fVar8 - fVar7) * mtx.m31) * fVar11;
    mtx.m11 = ((fVar1 * mtx.m00 - mtx.m20 * fVar14) + mtx.m30 * fVar5) * fVar4;
    mtx.m02 = ((fVar6 * mtx.m01 - mtx.m11 * fVar9) + (fVar13 - fVar12) * mtx.m31) * fVar4;
    mtx.m12 = ((fVar6 * mtx.m00 - fVar14 * mtx.m10) + (fVar13 - fVar12) * mtx.m30) * fVar11;
    mtx.m03 = ((fVar10 * mtx.m01 - (fVar8 - mtx.m22 * mtx.m03) * mtx.m11) +
              (fVar13 - fVar12) * mtx.m21) * fVar11;
    mtx.m13 = (((mtx.m23 * mtx.m12 - mtx.m22 * mtx.m13) * mtx.m00 - fVar5 * mtx.m10) +
              (fVar13 - mtx.m03 * mtx.m12) * mtx.m20) * fVar4;
  }
  __return_storage_ptr__->m00 = mtx.m00;
  __return_storage_ptr__->m10 = mtx.m10;
  __return_storage_ptr__->m20 = mtx.m20;
  __return_storage_ptr__->m30 = mtx.m30;
  __return_storage_ptr__->m01 = mtx.m01;
  __return_storage_ptr__->m11 = mtx.m11;
  __return_storage_ptr__->m21 = mtx.m21;
  __return_storage_ptr__->m31 = mtx.m31;
  __return_storage_ptr__->m02 = mtx.m02;
  __return_storage_ptr__->m12 = mtx.m12;
  __return_storage_ptr__->m22 = mtx.m22;
  __return_storage_ptr__->m32 = mtx.m32;
  __return_storage_ptr__->m03 = mtx.m03;
  __return_storage_ptr__->m13 = mtx.m13;
  __return_storage_ptr__->m23 = mtx.m23;
  __return_storage_ptr__->m33 = mtx.m33;
  return __return_storage_ptr__;
}


/* Vector3[] GetNormalizedAxes(Matrix4x4) */

Vector3__Array *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxes
          (Matrix4x4 matrix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     ((Vector4 *)&stack0xffffffe0,(Matrix4x4 *)&stack0xffffffa0,0,(MethodInfo *)0x0)
  ;
  value.x = pVVar2->x;
  value.y = pVVar2->y;
  value.z = pVVar2->z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xfffffff0,value,(MethodInfo *)0x0);
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    if (pVVar1->max_length != 0) {
      pVVar1->vector[0].x = pVVar3->x;
      pVVar1->vector[0].y = fVar4;
      pVVar1->vector[0].z = fVar5;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                         ((Vector4 *)&stack0xffffffe0,(Matrix4x4 *)matrix.m11,(int32_t)matrix.m21,
                          (MethodInfo *)matrix.m31);
      value_00.x = pVVar2->x;
      value_00.y = pVVar2->y;
      value_00.z = pVVar2->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         ((Vector3 *)&stack0xfffffff0,value_00,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      if (1 < pVVar1->max_length) {
        pVVar1->vector[1].x = pVVar3->x;
        pVVar1->vector[1].y = fVar4;
        pVVar1->vector[1].z = fVar5;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                           ((Vector4 *)matrix.m13,(Matrix4x4 *)matrix.m23,(int32_t)matrix.m33,
                            (MethodInfo *)0x0);
        matrix.m33 = pVVar2->z;
        value_01.x = pVVar2->x;
        value_01.y = pVVar2->y;
        value_01.z = pVVar2->z;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                           ((Vector3 *)&matrix.m13,value_01,(MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        fVar5 = pVVar3->z;
        if (2 < pVVar1->max_length) {
          pVVar1->vector[2].x = pVVar3->x;
          pVVar1->vector[2].y = fVar4;
          pVVar1->vector[2].z = fVar5;
          return pVVar1;
        }
      }
    }
  }
  matrix.m00 = (float)&UNK_?;
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar6)();
  return pVVar1;
}


/* Vector3 GetNormalizedAxis(Matrix4x4, Int32) */

Vector3 * Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxis
                    (Vector3 *__return_storage_ptr__,Matrix4x4 matrix,int32_t axisIndex,
                    MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     ((Vector4 *)&stack0xffffffec,&matrix,axisIndex,(MethodInfo *)0x0);
  value.x = pVVar1->x;
  value.y = pVVar1->y;
  value.z = pVVar1->z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xfffffff0,value,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Matrix4x4 GetRelativeTransform(Matrix4x4, Matrix4x4) */

Matrix4x4 *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetRelativeTransform
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 matrix,Matrix4x4 referenceTransform,
          MethodInfo *method)

{
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffffbc,&referenceTransform,(MethodInfo *)0x0);
  rhs.m10 = matrix.m10;
  rhs.m00 = matrix.m00;
  rhs.m20 = matrix.m20;
  rhs.m30 = matrix.m30;
  rhs.m01 = matrix.m01;
  rhs.m11 = matrix.m11;
  rhs.m21 = matrix.m21;
  rhs.m31 = matrix.m31;
  rhs.m02 = matrix.m02;
  rhs.m12 = matrix.m12;
  rhs.m22 = matrix.m22;
  rhs.m32 = matrix.m32;
  rhs.m03 = matrix.m03;
  rhs.m13 = matrix.m13;
  rhs.m23 = matrix.m23;
  rhs.m33 = matrix.m33;
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                     (&matrix,*pMVar1,rhs,(MethodInfo *)0x0);
  fVar2 = pMVar1->m10;
  fVar3 = pMVar1->m20;
  fVar4 = pMVar1->m30;
  __return_storage_ptr__->m00 = pMVar1->m00;
  __return_storage_ptr__->m10 = fVar2;
  __return_storage_ptr__->m20 = fVar3;
  __return_storage_ptr__->m30 = fVar4;
  fVar2 = pMVar1->m11;
  fVar3 = pMVar1->m21;
  fVar4 = pMVar1->m31;
  __return_storage_ptr__->m01 = pMVar1->m01;
  __return_storage_ptr__->m11 = fVar2;
  __return_storage_ptr__->m21 = fVar3;
  __return_storage_ptr__->m31 = fVar4;
  fVar2 = pMVar1->m12;
  fVar3 = pMVar1->m22;
  fVar4 = pMVar1->m32;
  __return_storage_ptr__->m02 = pMVar1->m02;
  __return_storage_ptr__->m12 = fVar2;
  __return_storage_ptr__->m22 = fVar3;
  __return_storage_ptr__->m32 = fVar4;
  fVar2 = pMVar1->m13;
  fVar3 = pMVar1->m23;
  fVar4 = pMVar1->m33;
  __return_storage_ptr__->m03 = pMVar1->m03;
  __return_storage_ptr__->m13 = fVar2;
  __return_storage_ptr__->m23 = fVar3;
  __return_storage_ptr__->m33 = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 GetScale(Matrix4x4) */

Vector3 * Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetScale
                    (Vector3 *__return_storage_ptr__,Matrix4x4 matrix,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
            (&VStack_1,&matrix,0,(MethodInfo *)0x0);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     ((Vector4 *)&fStack_3,&matrix,1,(MethodInfo *)0x0);
  fStack_3 = pVVar2->x;
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  pVVar6 = (Vector3 *)pVVar2->w;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     ((Vector4 *)&matrix,&matrix,2,(MethodInfo *)0x0);
  matrix.m01 = pVVar2->x;
  matrix.m11 = pVVar2->y;
  matrix.m21 = pVVar2->z;
  matrix.m31 = pVVar2->w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  cVar7 = cRam_?;
  dVar8 = (double)(fVar4 * fVar4 + fStack_3 * fStack_3 + fVar5 * fVar5);
  if (dVar8 < 0.0) {
    func_?();
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  VStack_1.z = (float)dVar8;
  if (cVar7 == '\0') {
    func_?(&TypeInfo__System__Math);
    cVar7 = '\x01';
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
    cVar7 = cRam_?;
  }
  dVar8 = (double)(matrix.m10 * matrix.m10 + matrix.m00 * matrix.m00 + matrix.m20 * matrix.m20);
  if (dVar8 < 0.0) {
    func_?();
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  VStack_1.w = (float)dVar8;
  if (cVar7 == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  pVVar6->x = VStack_1.z;
  pVVar6->y = VStack_1.w;
  dVar8 = (double)(matrix.m11 * matrix.m11 + matrix.m01 * matrix.m01 + matrix.m21 * matrix.m21);
  if (0.0 <= dVar8) {
    pVVar6->z = (float)SQRT(dVar8);
    return pVVar6;
  }
  func_?();
  pVVar6->z = (float)dVar8;
  return pVVar6;
}


/* Vector3 GetTranslation(Matrix4x4) */

Vector3 * Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetTranslation
                    (Vector3 *__return_storage_ptr__,Matrix4x4 matrix,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     (&VStack_2,&matrix,3,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Matrix4x4 RotationMatrixFromRightUp(Vector3, Vector3) */

Matrix4x4 *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_RotationMatrixFromRightUp
          (Matrix4x4 *__return_storage_ptr__,Vector3 right,Vector3 up,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x40);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&right,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&up,(MethodInfo *)0x0);
  value.y = up.z * right.x - up.x * right.z;
  value.x = up.y * right.z - up.z * right.y;
  value.z = up.x * right.y - up.y * right.x;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffffe4,value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__UnityEngine__Matrix4x4->static_fields;
  fVar2 = (pMVar1->identityMatrix).m10;
  fVar3 = (pMVar1->identityMatrix).m20;
  fVar4 = (pMVar1->identityMatrix).m30;
  fVar5 = (pMVar1->identityMatrix).m01;
  fVar6 = (pMVar1->identityMatrix).m11;
  fVar7 = (pMVar1->identityMatrix).m21;
  fVar8 = (pMVar1->identityMatrix).m31;
  fVar9 = (pMVar1->identityMatrix).m02;
  fVar10 = (pMVar1->identityMatrix).m12;
  fVar11 = (pMVar1->identityMatrix).m22;
  fVar12 = (pMVar1->identityMatrix).m32;
  fVar13 = (pMVar1->identityMatrix).m03;
  fVar14 = (pMVar1->identityMatrix).m13;
  fVar15 = (pMVar1->identityMatrix).m23;
  fVar16 = (pMVar1->identityMatrix).m33;
  __return_storage_ptr__->m00 = (pMVar1->identityMatrix).m00;
  __return_storage_ptr__->m10 = fVar2;
  __return_storage_ptr__->m20 = fVar3;
  __return_storage_ptr__->m30 = fVar4;
  __return_storage_ptr__->m01 = fVar5;
  __return_storage_ptr__->m11 = fVar6;
  __return_storage_ptr__->m21 = fVar7;
  __return_storage_ptr__->m31 = fVar8;
  fVar3 = 0.0;
  __return_storage_ptr__->m02 = fVar9;
  __return_storage_ptr__->m12 = fVar10;
  __return_storage_ptr__->m22 = fVar11;
  __return_storage_ptr__->m32 = fVar12;
  __return_storage_ptr__->m03 = fVar13;
  __return_storage_ptr__->m13 = fVar14;
  __return_storage_ptr__->m23 = fVar15;
  __return_storage_ptr__->m33 = fVar16;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0,right.x,(MethodInfo *)0x0);
  right.z = 0.0;
  right.x = 1.4013e-45;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,1,right.y,(MethodInfo *)0x0);
  fVar2 = right.z;
  up.z = right.z;
  up.y = 2.8026e-45;
  up.x = (float)__return_storage_ptr__;
  right.z = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,2,fVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,4,up.x,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,5,up.y,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,6,up.z,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,8,4.334551e-29,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,9,(float)__return_storage_ptr__,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,10,fVar3,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] TransformPoints(Matrix4x4, List`1[UnityEngine.Vector3]) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_TransformPoints
          (Matrix4x4 matrix,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    capacity = (points->fields)._size;
    if (capacity == 0) {
      pLVar7 = (List_1_UnityEngine_Vector3_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar7;
    }
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    pLStack_8 = this;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                        (&LStack_10,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                        );
    uStack_11 = 0;
    LStack_12._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar9->_list;
    LStack_12._index = pLVar9->_index;
    LStack_12._version = pLVar9->_version;
    LStack_12._current.Quadrant = (int32_t)(pLVar9->_current).alias;
    uVar13 = (pLVar9->_current).path;
    uVar14 = (pLVar9->_current).asset;
    uStack_1 = 1;
    LStack_12._current.FirstAxisSign = uVar13;
    LStack_12._current.SecondAxisSign = uVar14;
    pLStack_15 = &LStack_12;
    while( true ) {
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                 PlaneIdHelper+PlaneQuadrantInfo]::
                 List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                           (&LStack_12,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                           );
        if (bVar16 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_12,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        point.y = (float)LStack_12._current.FirstAxisSign;
        point.x = (float)LStack_12._current.Quadrant;
        point.z = (float)LStack_12._current.SecondAxisSign;
        pPVar17 = (PlaneIdHelper_PlaneQuadrantInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)&LStack_10._current,&matrix,point,(MethodInfo *)0x0);
        pMVar18 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        uVar19 = *(undefined8 *)pPVar17;
        fVar20 = (float)pPVar17->SecondAxisSign;
        item = *pPVar17;
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar21 = &(this->fields)._version;
        *piVar21 = *piVar21 + 1;
        pMVar22 = (this->fields)._items;
        uVar23 = (this->fields)._size;
        if (pMVar22 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        if (uVar23 < pMVar22->max_length) break;
        in_stack_6 = (MethodInfo **)&UNK_?;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,item,
                   pMVar18->klass->rgctx_data[0xe].method);
      }
      (this->fields)._size = uVar23 + 1;
      if (pMVar22->max_length <= uVar23) break;
      *(undefined8 *)(&pMVar22->vector[0].index + uVar23 * 3) = uVar19;
      (&pMVar22->vector[0].actualWidth)[uVar23 * 3] = fVar20;
    }
    func_?();
  }
code_?:
  uVar24 = func_?();
  func_?(uVar24);
  pcVar25 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar25)();
  return pLVar7;
}


/* Matrix4x4 Translation(Vector3) */

Matrix4x4 *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_Translation
          (Matrix4x4 *__return_storage_ptr__,Vector3 translation,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x40);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Matrix4x4);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__UnityEngine__Matrix4x4->static_fields;
  fVar2 = (pMVar1->identityMatrix).m10;
  fVar3 = (pMVar1->identityMatrix).m20;
  fVar4 = (pMVar1->identityMatrix).m30;
  fVar5 = (pMVar1->identityMatrix).m01;
  fVar6 = (pMVar1->identityMatrix).m11;
  fVar7 = (pMVar1->identityMatrix).m21;
  fVar8 = (pMVar1->identityMatrix).m31;
  fVar9 = (pMVar1->identityMatrix).m02;
  fVar10 = (pMVar1->identityMatrix).m12;
  fVar11 = (pMVar1->identityMatrix).m22;
  fVar12 = (pMVar1->identityMatrix).m32;
  fVar13 = (pMVar1->identityMatrix).m03;
  fVar14 = (pMVar1->identityMatrix).m13;
  fVar15 = (pMVar1->identityMatrix).m23;
  fVar16 = (pMVar1->identityMatrix).m33;
  __return_storage_ptr__->m00 = (pMVar1->identityMatrix).m00;
  __return_storage_ptr__->m10 = fVar2;
  __return_storage_ptr__->m20 = fVar3;
  __return_storage_ptr__->m30 = fVar4;
  __return_storage_ptr__->m01 = fVar5;
  __return_storage_ptr__->m11 = fVar6;
  __return_storage_ptr__->m21 = fVar7;
  __return_storage_ptr__->m31 = fVar8;
  __return_storage_ptr__->m02 = fVar9;
  __return_storage_ptr__->m12 = fVar10;
  __return_storage_ptr__->m22 = fVar11;
  __return_storage_ptr__->m32 = fVar12;
  __return_storage_ptr__->m03 = fVar13;
  __return_storage_ptr__->m13 = fVar14;
  __return_storage_ptr__->m23 = fVar15;
  __return_storage_ptr__->m33 = fVar16;
  UnityEngine.TextCoreTextEngineModule.dll::UnityEngine::TextCore::Text::Offset::Offset__ctor
            ((Offset *)&stack0xffffffec,translation.x,translation.y,translation.z,1.0,
             (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_SetColumn
            (__return_storage_ptr__,3,*extraout_EAX,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}

