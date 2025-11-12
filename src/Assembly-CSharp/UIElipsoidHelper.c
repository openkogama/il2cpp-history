
/* Vector3 Clamp(Vector3) */

Vector3 * Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_Clamp
                    (Vector3 *__return_storage_ptr__,UIElipsoidHelper *this,Vector3 *deltaDir,
                    MethodInfo *method)

{
  uVar1 = deltaDir->x;
  uVar2 = deltaDir->y;
  fVar3 = deltaDir->z;
  fStack_4 = (float)uVar1 * (this->fields).worldToElipsoidSpace.m20 +
              (float)uVar2 * (this->fields).worldToElipsoidSpace.m21 +
              fVar3 * (this->fields).worldToElipsoidSpace.m22;
  uStack_5 = CONCAT44((float)uVar1 * (this->fields).worldToElipsoidSpace.m10 +
                       (float)uVar2 * (this->fields).worldToElipsoidSpace.m11 +
                       fVar3 * (this->fields).worldToElipsoidSpace.m12,
                       (float)uVar2 * (this->fields).worldToElipsoidSpace.m01 +
                       (float)uVar1 * (this->fields).worldToElipsoidSpace.m00 +
                       fVar3 * (this->fields).worldToElipsoidSpace.m02);
  puVar6 = (undefined8 *)FUN_?(auStack_7,&uStack_5,_UNK_?);
  fVar8 = (this->fields).elipsoidSpaceToWorld.m10;
  fVar9 = (this->fields).elipsoidSpaceToWorld.m20;
  fVar10 = (this->fields).elipsoidSpaceToWorld.m11;
  fVar11 = (this->fields).elipsoidSpaceToWorld.m21;
  fVar12 = (this->fields).elipsoidSpaceToWorld.m12;
  fVar13 = (this->fields).elipsoidSpaceToWorld.m22;
  fVar3 = *(float *)(puVar6 + 1);
  fVar14 = (float)((ulonglong)*puVar6 >> 0x20);
  uStack_5._0_4_ = (float)*puVar6;
  __return_storage_ptr__->x =
       fVar14 * (this->fields).elipsoidSpaceToWorld.m01 +
       (float)uStack_5 * (this->fields).elipsoidSpaceToWorld.m00 +
       fVar3 * (this->fields).elipsoidSpaceToWorld.m02;
  __return_storage_ptr__->y = (float)uStack_5 * fVar8 + fVar14 * fVar10 + fVar3 * fVar12;
  __return_storage_ptr__->z = (float)uStack_5 * fVar9 + fVar14 * fVar11 + fVar3 * fVar13;
  return __return_storage_ptr__;
}


/* Boolean IsIdentical(Single, Single) */

bool Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_IsIdentical
               (UIElipsoidHelper *this,float width,float height,MethodInfo *method)

{
  cVar1 = FUN_?();
  if (cVar1 == '\0') {
    return 0;
  }
  fVar2 = (this->fields).height;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar3 = (float)((uint)fVar2 & _UNK_?);
  if (fVar3 <= (float)((uint)height & _UNK_?)) {
    fVar3 = (float)((uint)height & _UNK_?);
  }
  fVar4 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar5 = fVar3 * _UNK_?;
  if (fVar3 * _UNK_? <= fVar4) {
    fVar5 = fVar4;
  }
  return (float)((uint)(height - fVar2) & _UNK_?) < fVar5;
}


/* Single NormalizedDistance(Vector3) */

float Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                (UIElipsoidHelper *this,Vector3 *deltaDir,MethodInfo *method)

{
  uVar1 = deltaDir->x;
  uVar2 = deltaDir->y;
  fVar3 = deltaDir->z;
  fStack_4 = (float)uVar1 * (this->fields).worldToElipsoidSpace.m20 +
              (float)uVar2 * (this->fields).worldToElipsoidSpace.m21 +
              fVar3 * (this->fields).worldToElipsoidSpace.m22;
  uStack_5 = CONCAT44((float)uVar1 * (this->fields).worldToElipsoidSpace.m10 +
                       (float)uVar2 * (this->fields).worldToElipsoidSpace.m11 +
                       fVar3 * (this->fields).worldToElipsoidSpace.m12,
                       (float)uVar2 * (this->fields).worldToElipsoidSpace.m01 +
                       (float)uVar1 * (this->fields).worldToElipsoidSpace.m00 +
                       fVar3 * (this->fields).worldToElipsoidSpace.m02);
  fVar3 = (float)FUN_?(&uStack_5);
  return fVar3;
}


/* UIElipsoidHelper(Single, Single) */

void Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper__ctor
               (UIElipsoidHelper *this,float width,float height,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).height = height;
  (this->fields).width = width;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3._0_4_ = (pVVar2->zeroVector).x;
  uVar3._4_4_ = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = CONCAT44(height,width);
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uStack_7 = _UNK_?;
  uStack_8._0_4_ = (pQVar6->identityQuaternion).x;
  uStack_8._4_4_ = (pQVar6->identityQuaternion).y;
  uStack_9._0_4_ = (pQVar6->identityQuaternion).z;
  uStack_9._4_4_ = (pQVar6->identityQuaternion).w;
  MStack_10.m00 = 0.0;
  MStack_10.m10 = 0.0;
  MStack_10.m20 = 0.0;
  MStack_10.m30 = 0.0;
  MStack_10.m01 = 0.0;
  MStack_10.m11 = 0.0;
  MStack_10.m21 = 0.0;
  MStack_10.m31 = 0.0;
  MStack_10.m02 = 0.0;
  MStack_10.m12 = 0.0;
  MStack_10.m22 = 0.0;
  MStack_10.m32 = 0.0;
  MStack_10.m03 = 0.0;
  MStack_10.m13 = 0.0;
  MStack_10.m23 = 0.0;
  MStack_10.m33 = 0.0;
  pcVar11 = pcRam_?;
  uStack_12 = uVar3;
  fStack_13 = fVar4;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(&uStack_12,&uStack_8,&uStack_5,&MStack_10);
  (this->fields).elipsoidSpaceToWorld.m00 = MStack_10.m00;
  (this->fields).elipsoidSpaceToWorld.m10 = MStack_10.m10;
  (this->fields).elipsoidSpaceToWorld.m20 = MStack_10.m20;
  (this->fields).elipsoidSpaceToWorld.m30 = MStack_10.m30;
  (this->fields).elipsoidSpaceToWorld.m01 = MStack_10.m01;
  (this->fields).elipsoidSpaceToWorld.m11 = MStack_10.m11;
  (this->fields).elipsoidSpaceToWorld.m21 = MStack_10.m21;
  (this->fields).elipsoidSpaceToWorld.m31 = MStack_10.m31;
  (this->fields).elipsoidSpaceToWorld.m02 = MStack_10.m02;
  (this->fields).elipsoidSpaceToWorld.m12 = MStack_10.m12;
  (this->fields).elipsoidSpaceToWorld.m22 = MStack_10.m22;
  (this->fields).elipsoidSpaceToWorld.m32 = MStack_10.m32;
  (this->fields).elipsoidSpaceToWorld.m03 = MStack_10.m03;
  (this->fields).elipsoidSpaceToWorld.m13 = MStack_10.m13;
  (this->fields).elipsoidSpaceToWorld.m23 = MStack_10.m23;
  (this->fields).elipsoidSpaceToWorld.m33 = MStack_10.m33;
  pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                      (&MStack_10,&(this->fields).elipsoidSpaceToWorld,(MethodInfo *)0x0);
  fVar4 = pMVar14->m10;
  fVar15 = pMVar14->m20;
  fVar16 = pMVar14->m30;
  fVar17 = pMVar14->m01;
  fVar18 = pMVar14->m11;
  fVar19 = pMVar14->m21;
  fVar20 = pMVar14->m31;
  fVar21 = pMVar14->m02;
  fVar22 = pMVar14->m12;
  fVar23 = pMVar14->m22;
  fVar24 = pMVar14->m32;
  fVar25 = pMVar14->m03;
  fVar26 = pMVar14->m13;
  fVar27 = pMVar14->m23;
  fVar28 = pMVar14->m33;
  (this->fields).worldToElipsoidSpace.m00 = pMVar14->m00;
  (this->fields).worldToElipsoidSpace.m10 = fVar4;
  (this->fields).worldToElipsoidSpace.m20 = fVar15;
  (this->fields).worldToElipsoidSpace.m30 = fVar16;
  (this->fields).worldToElipsoidSpace.m01 = fVar17;
  (this->fields).worldToElipsoidSpace.m11 = fVar18;
  (this->fields).worldToElipsoidSpace.m21 = fVar19;
  (this->fields).worldToElipsoidSpace.m31 = fVar20;
  (this->fields).worldToElipsoidSpace.m02 = fVar21;
  (this->fields).worldToElipsoidSpace.m12 = fVar22;
  (this->fields).worldToElipsoidSpace.m22 = fVar23;
  (this->fields).worldToElipsoidSpace.m32 = fVar24;
  (this->fields).worldToElipsoidSpace.m03 = fVar25;
  (this->fields).worldToElipsoidSpace.m13 = fVar26;
  (this->fields).worldToElipsoidSpace.m23 = fVar27;
  (this->fields).worldToElipsoidSpace.m33 = fVar28;
  return;
}

