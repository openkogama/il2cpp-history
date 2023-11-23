
/* Vector3 Clamp(Vector3) */

Vector3 * Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_Clamp
                    (Vector3 *__return_storage_ptr__,UIElipsoidHelper *this,Vector3 deltaDir,
                    MethodInfo *method)

{
  auStack_1._0_4_ = (this->fields).worldToElipsoidSpace.m00;
  auStack_1._4_4_ = (this->fields).worldToElipsoidSpace.m10;
  auStack_1._8_4_ = (this->fields).worldToElipsoidSpace.m20;
  fStack_2 = (this->fields).worldToElipsoidSpace.m30;
  fStack_3 = (this->fields).worldToElipsoidSpace.m01;
  fStack_4 = (this->fields).worldToElipsoidSpace.m11;
  fStack_5 = (this->fields).worldToElipsoidSpace.m21;
  fStack_6 = (this->fields).worldToElipsoidSpace.m31;
  fStack_7 = (this->fields).worldToElipsoidSpace.m02;
  fStack_8 = (this->fields).worldToElipsoidSpace.m12;
  fStack_9 = (this->fields).worldToElipsoidSpace.m22;
  fStack_10 = (this->fields).worldToElipsoidSpace.m32;
  fStack_11 = (this->fields).worldToElipsoidSpace.m03;
  fStack_12 = (this->fields).worldToElipsoidSpace.m13;
  fStack_13 = (this->fields).worldToElipsoidSpace.m23;
  fStack_14 = (this->fields).worldToElipsoidSpace.m33;
  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     ((Vector3 *)auStack_16,(Matrix4x4 *)auStack_1,deltaDir,(MethodInfo *)0x0);
  auStack_16._0_4_ = pVVar15->x;
  auStack_16._4_4_ = pVVar15->y;
  fVar17 = pVVar15->z;
  unique0x10000557 = auStack_16._0_8_;
  auStack_1._0_4_ = fVar17;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  uVar18 = auStack_16._0_8_;
  fVar19 = fStack_20 * fStack_20 + (float)auStack_16._8_4_ * (float)auStack_16._8_4_ +
          (float)auStack_1._0_4_ * (float)auStack_1._0_4_;
  auStack_16._0_4_ = fVar19;
  if (_UNK_? < fVar19) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
      fVar19 = (float)auStack_16._0_4_;
    }
    dVar21 = (double)fVar19;
    if (dVar21 < 0.0) {
      func_?();
    }
    else {
      dVar21 = SQRT(dVar21);
    }
    fVar19 = (float)dVar21;
    fVar17 = (float)auStack_1._0_4_ / fVar19;
    fStack_20 = fStack_20 / fVar19;
    auStack_16._8_4_ = (float)auStack_16._8_4_ / fVar19;
    uVar18 = stack0xffffffb0;
    auStack_1._0_4_ = fVar17;
  }
  fStack_5 = (this->fields).elipsoidSpaceToWorld.m00;
  fStack_6 = (this->fields).elipsoidSpaceToWorld.m10;
  fStack_7 = (this->fields).elipsoidSpaceToWorld.m20;
  fStack_8 = (this->fields).elipsoidSpaceToWorld.m30;
  fStack_9 = (this->fields).elipsoidSpaceToWorld.m01;
  fStack_10 = (this->fields).elipsoidSpaceToWorld.m11;
  fStack_11 = (this->fields).elipsoidSpaceToWorld.m21;
  fStack_12 = (this->fields).elipsoidSpaceToWorld.m31;
  fStack_13 = (this->fields).elipsoidSpaceToWorld.m02;
  fStack_14 = (this->fields).elipsoidSpaceToWorld.m12;
  fStack_22 = (this->fields).elipsoidSpaceToWorld.m22;
  pVVar15 = (Vector3 *)(this->fields).elipsoidSpaceToWorld.m13;
  vector.z = fVar17;
  vector.x = (float)uVar18;
  vector.y = SUB84(uVar18,4);
  pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     ((Vector3 *)(auStack_1 + 8),(Matrix4x4 *)&fStack_5,vector,(MethodInfo *)0x0);
  fVar19 = pVVar23->y;
  fVar17 = pVVar23->z;
  pVVar15->x = pVVar23->x;
  pVVar15->y = fVar19;
  pVVar15->z = fVar17;
  return pVVar15;
}


/* Boolean IsIdentical(Single, Single) */

bool Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_IsIdentical
               (UIElipsoidHelper *this,float width,float height,MethodInfo *method)

{
  fVar1 = (this->fields).width;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar2 = (float)((uint)fVar1 & _UNK_?);
  if (fVar2 <= (float)((uint)width & _UNK_?)) {
    fVar2 = (float)((uint)width & _UNK_?);
  }
  fVar3 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar4 = fVar2 * _UNK_?;
  if (fVar2 * _UNK_? <= fVar3) {
    fVar4 = fVar3;
  }
  if (fVar4 <= (float)((uint)(width - fVar1) & _UNK_?)) {
    return 0;
  }
  fVar1 = (this->fields).height;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar2 = (float)((uint)fVar1 & _UNK_?);
  if (fVar2 <= (float)((uint)height & _UNK_?)) {
    fVar2 = (float)((uint)height & _UNK_?);
  }
  fVar3 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar4 = fVar2 * _UNK_?;
  if (fVar2 * _UNK_? <= fVar3) {
    fVar4 = fVar3;
  }
  return (float)((uint)(height - fVar1) & _UNK_?) < fVar4;
}


/* Single NormalizedDistance(Vector3) */

float Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                (UIElipsoidHelper *this,Vector3 deltaDir,MethodInfo *method)

{
  fStack_1 = (this->fields).worldToElipsoidSpace.m10;
  fStack_2 = (this->fields).worldToElipsoidSpace.m20;
  fStack_3 = (this->fields).worldToElipsoidSpace.m30;
  auStack_4._4_4_ = (this->fields).worldToElipsoidSpace.m00;
  fStack_5 = (this->fields).worldToElipsoidSpace.m01;
  fStack_6 = (this->fields).worldToElipsoidSpace.m11;
  fStack_7 = (this->fields).worldToElipsoidSpace.m21;
  fStack_8 = (this->fields).worldToElipsoidSpace.m31;
  fStack_9 = (this->fields).worldToElipsoidSpace.m02;
  fStack_10 = (this->fields).worldToElipsoidSpace.m12;
  fStack_11 = (this->fields).worldToElipsoidSpace.m22;
  fStack_12 = (this->fields).worldToElipsoidSpace.m32;
  fStack_13 = (this->fields).worldToElipsoidSpace.m03;
  fStack_14 = (this->fields).worldToElipsoidSpace.m13;
  fStack_15 = (this->fields).worldToElipsoidSpace.m23;
  fStack_16 = (this->fields).worldToElipsoidSpace.m33;
  pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     (&VStack_18,(Matrix4x4 *)(auStack_4 + 4),deltaDir,(MethodInfo *)0x0);
  auStack_4._0_4_ = pVVar17->x;
  auStack_4._4_4_ = pVVar17->y;
  fStack_1 = pVVar17->z;
  if (cRam_? == '\0') {
    VStack_18.y = (float)&TypeInfo__System__Math;
    VStack_18.x = (float)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    VStack_18.y = (float)TypeInfo__System__Math;
    VStack_18.x = (float)&UNK_?;
    func_?();
  }
  dVar19 = (double)((float)auStack_4._4_4_ * (float)auStack_4._4_4_ +
                   (float)auStack_4._0_4_ * (float)auStack_4._0_4_ + fStack_1 * fStack_1);
  if (0.0 <= dVar19) {
    return (float)SQRT(dVar19);
  }
  VStack_18.y = (float)&UNK_?;
  func_?();
  return (float)dVar19;
}


/* UIElipsoidHelper(Single, Single) */

void Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper__ctor
               (UIElipsoidHelper *this,float width,float height,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).width = width;
  fStack_1 = width;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  (this->fields).height = height;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar5->zeroVector).x;
  uStack_6._4_4_ = (pVVar5->zeroVector).y;
  fVar7 = (pVVar5->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  uStack_8 = 0x3f800000;
  pos.z = fVar7;
  pos.x = (float)(undefined4)uStack_6;
  pos.y = (float)uStack_6._4_4_;
  s.y = height;
  s.x = fStack_1;
  s.z = 1.0;
  pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      (&MStack_10,pos,
                       TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s,
                       (MethodInfo *)0x0);
  fVar7 = pMVar9->m10;
  fVar11 = pMVar9->m20;
  fVar12 = pMVar9->m30;
  fVar13 = pMVar9->m01;
  fVar14 = pMVar9->m11;
  fVar15 = pMVar9->m21;
  fVar16 = pMVar9->m31;
  fVar17 = pMVar9->m02;
  fVar18 = pMVar9->m12;
  fVar19 = pMVar9->m22;
  fVar20 = pMVar9->m32;
  fVar21 = pMVar9->m03;
  fVar22 = pMVar9->m13;
  fVar23 = pMVar9->m23;
  fVar24 = pMVar9->m33;
  (this->fields).elipsoidSpaceToWorld.m00 = pMVar9->m00;
  (this->fields).elipsoidSpaceToWorld.m10 = fVar7;
  (this->fields).elipsoidSpaceToWorld.m20 = fVar11;
  (this->fields).elipsoidSpaceToWorld.m30 = fVar12;
  (this->fields).elipsoidSpaceToWorld.m01 = fVar13;
  (this->fields).elipsoidSpaceToWorld.m11 = fVar14;
  (this->fields).elipsoidSpaceToWorld.m21 = fVar15;
  (this->fields).elipsoidSpaceToWorld.m31 = fVar16;
  (this->fields).elipsoidSpaceToWorld.m02 = fVar17;
  (this->fields).elipsoidSpaceToWorld.m12 = fVar18;
  (this->fields).elipsoidSpaceToWorld.m22 = fVar19;
  (this->fields).elipsoidSpaceToWorld.m32 = fVar20;
  (this->fields).elipsoidSpaceToWorld.m03 = fVar21;
  (this->fields).elipsoidSpaceToWorld.m13 = fVar22;
  (this->fields).elipsoidSpaceToWorld.m23 = fVar23;
  (this->fields).elipsoidSpaceToWorld.m33 = fVar24;
  pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                      (&MStack_10,&(this->fields).elipsoidSpaceToWorld,(MethodInfo *)0x0);
  fVar7 = pMVar9->m10;
  fVar11 = pMVar9->m20;
  fVar12 = pMVar9->m30;
  fVar13 = pMVar9->m01;
  fVar14 = pMVar9->m11;
  fVar15 = pMVar9->m21;
  fVar16 = pMVar9->m31;
  fVar17 = pMVar9->m02;
  fVar18 = pMVar9->m12;
  fVar19 = pMVar9->m22;
  fVar20 = pMVar9->m32;
  fVar21 = pMVar9->m03;
  fVar22 = pMVar9->m13;
  fVar23 = pMVar9->m23;
  fVar24 = pMVar9->m33;
  (this->fields).worldToElipsoidSpace.m00 = pMVar9->m00;
  (this->fields).worldToElipsoidSpace.m10 = fVar7;
  (this->fields).worldToElipsoidSpace.m20 = fVar11;
  (this->fields).worldToElipsoidSpace.m30 = fVar12;
  (this->fields).worldToElipsoidSpace.m01 = fVar13;
  (this->fields).worldToElipsoidSpace.m11 = fVar14;
  (this->fields).worldToElipsoidSpace.m21 = fVar15;
  (this->fields).worldToElipsoidSpace.m31 = fVar16;
  (this->fields).worldToElipsoidSpace.m02 = fVar17;
  (this->fields).worldToElipsoidSpace.m12 = fVar18;
  (this->fields).worldToElipsoidSpace.m22 = fVar19;
  (this->fields).worldToElipsoidSpace.m32 = fVar20;
  (this->fields).worldToElipsoidSpace.m03 = fVar21;
  (this->fields).worldToElipsoidSpace.m13 = fVar22;
  (this->fields).worldToElipsoidSpace.m23 = fVar23;
  (this->fields).worldToElipsoidSpace.m33 = fVar24;
  return;
}

