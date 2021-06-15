
/* Vector3 Clamp(Vector3) */

Vector3 * Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_Clamp
                    (Vector3 *__return_storage_ptr__,UIElipsoidHelper *this,Vector3 deltaDir,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x40);
  uStack_2._0_4_ = (this->fields).worldToElipsoidSpace.m00;
  uStack_2._4_4_ = (this->fields).worldToElipsoidSpace.m10;
  fStack_3 = (this->fields).worldToElipsoidSpace.m20;
  fStack_4 = (this->fields).worldToElipsoidSpace.m30;
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
  puVar17 = (undefined8 *)func_?(auStack_18,&uStack_2,deltaDir.x,deltaDir.y,deltaDir.z,0);
  uVar19 = *puVar17;
  fVar20 = *(float *)(puVar17 + 1);
  deltaDir.y = (float)uVar19;
  deltaDir.z = (float)((ulonglong)uVar19 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
    uVar19 = CONCAT44(deltaDir.z,deltaDir.y);
  }
  vector.z = fVar20;
  vector.x = (float)(int)uVar19;
  vector.y = (float)(int)((ulonglong)uVar19 >> 0x20);
  pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_ClampMagnitude
                     (&deltaDir,vector,1.0,(MethodInfo *)0x0);
  fStack_1 = (this->fields).elipsoidSpaceToWorld.m00;
  fStack_22 = (this->fields).elipsoidSpaceToWorld.m10;
  fStack_23 = (this->fields).elipsoidSpaceToWorld.m20;
  fStack_24 = (this->fields).elipsoidSpaceToWorld.m30;
  uStack_2._0_4_ = pVVar21->x;
  uStack_2._4_4_ = pVVar21->y;
  fStack_3 = pVVar21->z;
  fStack_4 = 0.0;
  fStack_25 = (this->fields).elipsoidSpaceToWorld.m01;
  fStack_26 = (this->fields).elipsoidSpaceToWorld.m11;
  fStack_27 = (this->fields).elipsoidSpaceToWorld.m21;
  fStack_28 = (this->fields).elipsoidSpaceToWorld.m31;
  fStack_29 = (this->fields).elipsoidSpaceToWorld.m02;
  fStack_30 = (this->fields).elipsoidSpaceToWorld.m12;
  fStack_31 = (this->fields).elipsoidSpaceToWorld.m22;
  fStack_32 = (this->fields).elipsoidSpaceToWorld.m32;
  fStack_33 = (this->fields).elipsoidSpaceToWorld.m03;
  fStack_34 = (this->fields).elipsoidSpaceToWorld.m13;
  fStack_35 = (this->fields).elipsoidSpaceToWorld.m23;
  fStack_36 = (this->fields).elipsoidSpaceToWorld.m33;
  puVar17 = (undefined8 *)func_?(&deltaDir,&fStack_1);
  uVar19 = *puVar17;
  fVar20 = *(float *)(puVar17 + 1);
  __return_storage_ptr__->x = (float)(int)uVar19;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar19 >> 0x20);
  __return_storage_ptr__->z = fVar20;
  return __return_storage_ptr__;
}


/* Boolean IsIdentical(Single, Single) */

bool Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_IsIdentical
               (UIElipsoidHelper *this,float width,float height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).width;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                    (fVar1,width,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  fVar1 = (this->fields).height;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                    (fVar1,height,(MethodInfo *)0x0);
  return bVar2;
}


/* Single NormalizedDistance(Vector3) */

float Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                (UIElipsoidHelper *this,Vector3 deltaDir,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  fStack_3 = (this->fields).worldToElipsoidSpace.m00;
  fStack_4 = (this->fields).worldToElipsoidSpace.m10;
  fStack_5 = (this->fields).worldToElipsoidSpace.m20;
  fStack_6 = (this->fields).worldToElipsoidSpace.m30;
  fStack_7 = (this->fields).worldToElipsoidSpace.m01;
  fStack_8 = (this->fields).worldToElipsoidSpace.m11;
  fStack_9 = (this->fields).worldToElipsoidSpace.m21;
  fStack_10 = (this->fields).worldToElipsoidSpace.m31;
  fStack_11 = (this->fields).worldToElipsoidSpace.m02;
  fStack_12 = (this->fields).worldToElipsoidSpace.m12;
  fStack_13 = (this->fields).worldToElipsoidSpace.m22;
  fStack_14 = (this->fields).worldToElipsoidSpace.m32;
  fStack_15 = (this->fields).worldToElipsoidSpace.m03;
  fStack_16 = (this->fields).worldToElipsoidSpace.m13;
  fStack_17 = (this->fields).worldToElipsoidSpace.m23;
  fStack_18 = (this->fields).worldToElipsoidSpace.m33;
  puVar19 = (undefined8 *)func_?(&deltaDir,&fStack_3,deltaDir._0_8_,deltaDir.z,0);
  uStack_1 = *puVar19;
  uStack_2 = *(undefined4 *)(puVar19 + 1);
  fVar20 = (float10)func_?(&uStack_1,0);
  return (float)fVar20;
}


/* UIElipsoidHelper(Single, Single) */

void Assembly-CSharp.dll::UIElipsoidHelper::UIElipsoidHelper__ctor
               (UIElipsoidHelper *this,float width,float height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).width = width;
  (this->fields).height = height;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      ((Vector3 *)(auStack_2 + 4),(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                      ((Quaternion *)auStack_2,(MethodInfo *)0x0);
  auStack_2._0_4_ = pQVar5->x;
  auStack_2._4_4_ = pQVar5->y;
  fStack_6 = pQVar5->z;
  fStack_7 = pQVar5->w;
  fStack_8 = 0.0;
  uStack_9 = 0;
  func_?(&uStack_9);
  if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
    func_?();
  }
  pos.z = fVar4;
  pos.x = (float)(undefined4)uStack_3;
  pos.y = (float)uStack_3._4_4_;
  q.y = (float)auStack_2._4_4_;
  q.x = (float)auStack_2._0_4_;
  q.z = fStack_6;
  q.w = fStack_7;
  s.z = fStack_8;
  s.x = (float)(undefined4)uStack_9;
  s.y = (float)uStack_9._4_4_;
  pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff98,pos,q,s,(MethodInfo *)0x0);
  fVar4 = pMVar10->m10;
  fVar11 = pMVar10->m20;
  fVar12 = pMVar10->m30;
  fVar13 = pMVar10->m01;
  fVar14 = pMVar10->m11;
  fVar15 = pMVar10->m21;
  fVar16 = pMVar10->m31;
  fVar17 = pMVar10->m02;
  fVar18 = pMVar10->m12;
  fVar19 = pMVar10->m22;
  fVar20 = pMVar10->m32;
  fVar21 = pMVar10->m03;
  fVar22 = pMVar10->m13;
  fVar23 = pMVar10->m23;
  fVar24 = pMVar10->m33;
  (this->fields).elipsoidSpaceToWorld.m00 = pMVar10->m00;
  (this->fields).elipsoidSpaceToWorld.m10 = fVar4;
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
  pfVar25 = (float *)func_?();
  fVar4 = pfVar25[1];
  fVar11 = pfVar25[2];
  fVar12 = pfVar25[3];
  fVar13 = pfVar25[4];
  fVar14 = pfVar25[5];
  fVar15 = pfVar25[6];
  fVar16 = pfVar25[7];
  fVar17 = pfVar25[8];
  fVar18 = pfVar25[9];
  fVar19 = pfVar25[10];
  fVar20 = pfVar25[0xb];
  fVar21 = pfVar25[0xc];
  fVar22 = pfVar25[0xd];
  fVar23 = pfVar25[0xe];
  fVar24 = pfVar25[0xf];
  (this->fields).worldToElipsoidSpace.m00 = *pfVar25;
  (this->fields).worldToElipsoidSpace.m10 = fVar4;
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

