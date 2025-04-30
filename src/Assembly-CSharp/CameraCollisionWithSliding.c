
/* Boolean CollideWithSliding(Vector3 ByRef, Single, Single, Vector3, Vector3,
   HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_CollideWithSliding
               (CameraCollisionWithSliding *this,Vector3 *newCameraPosition,float cameraRadius,
               float distanceToAvatar,Vector3 targetPosition,Vector3 cameraPosition,
               HashSet_1_System_Int32_ *ignoreAvatarId,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (1 < iVar1 - (this->fields).prevFrameCount) {
    (this->fields).slideDir = 0.0;
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  (this->fields).prevFrameCount = iVar1;
  bVar2 = CameraCollisionWithSliding_DoCollideWithSliding
                    (this,newCameraPosition,cameraRadius,
                     (this->fields).checkDistanceFactor * distanceToAvatar,targetPosition,
                     cameraPosition,ignoreAvatarId,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    (this->fields).slideDir = 0.0;
    return 0;
  }
  return 1;
}


/* Boolean DoCollideWithSliding(Vector3 ByRef, Single, Single, Vector3, Vector3,
   HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollisionWithSliding::
     CameraCollisionWithSliding_DoCollideWithSliding
               (CameraCollisionWithSliding *this,Vector3 *newPos,float cameraRadius,
               float baseDistance,Vector3 targetPosition,Vector3 cameraPosition,
               HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

{
  func_?((undefined1 *)((int)register0x00000010 + -0x50),0,0x48);
  bVar1 = CameraCollision::CameraCollision_Collide_1
                    ((CameraCollision *)this,(VoxelHit *)((int)register0x00000010 + -0x50),newPos,
                     cameraRadius,baseDistance,targetPosition,cameraPosition,ignoreIDs,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    uStack_2 = cameraPosition._0_8_;
    puStack_3 = (undefined *)(targetPosition.x - cameraPosition.x);
    uStack_4 = targetPosition._0_8_;
    auStack_5._20_4_ = pCStack_6;
    uVar7 = newPos->x;
    uVar8 = newPos->y;
    fVar9 = newPos->z;
    fVar10 = fStack_11;
    auStack_5._8_4_ = uVar7;
    auStack_5._12_4_ = uVar8;
    puVar12 = (undefined8 *)func_?(&stack0xffffff9c,&puStack_3,0);
    puStack_3 = (undefined *)*puVar12;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    uVar13 = uStack_2;
    uStack_2 = uStack_2 & 0xffffffff;
    uStack_4 = uStack_4 & 0xffffffff;
    auStack_5._24_4_ = 0;
    auStack_5._12_4_ = 0.0;
    newPos_00.y = 0.0;
    newPos_00.x = (float)auStack_5._8_4_;
    newPos_00.z = fVar9;
    hitPoint.z = fVar10;
    hitPoint.x = (float)auStack_5._20_4_;
    hitPoint.y = 0.0;
    targetPosition_00.z = targetPosition.z;
    targetPosition_00.x = (float)method_00;
    targetPosition_00.y = (float)uStack_4._4_4_;
    cameraPosition_00.z = cameraPosition.z;
    cameraPosition_00.x = (float)(int)(uVar13 & 0xffffffff);
    cameraPosition_00.y = (float)(int)((uVar13 & 0xffffffff) >> 0x20);
    pVVar14 = CameraCollisionWithSliding_GetSlideDir
                        ((Vector3 *)((undefined1 *)((int)register0x00000010 + -0x50) + 0x14),this,
                         newPos_00,hitPoint,targetPosition_00,cameraPosition_00,(MethodInfo *)0x0);
    uVar15 = pVVar14->x;
    uVar16 = pVVar14->y;
    auStack_5._20_4_ = pVVar14->z;
    uStack_4 = uStack_4 & 0xffffffff00000000;
    dVar17 = (double)(fStack_18 * fStack_18 + 0.0 +
                     (float)auStack_5._24_4_ * (float)auStack_5._24_4_);
    auStack_5._12_4_ = uVar15;
    auStack_5._16_4_ = uVar16;
    if (dVar17 < 0.0) {
      func_?();
    }
    else {
      dVar17 = SQRT(dVar17);
    }
    targetPosition_01.y = fStack_11;
    targetPosition_01.x = (float)pTStack_19;
    newPos_01.y = (float)uStack_20;
    newPos_01.x = (float)uStack_21;
    newPos_01.z = fStack_22;
    targetPosition_01.z = targetPosition.z;
    fVar10 = CameraCollisionWithSliding_GetSlideVectorLength
                       (*pVVar14,newPos_01,targetPosition_01,(float)dVar17,method_00);
    uVar23 = newPos->x;
    uVar24 = newPos->y;
    fVar9 = newPos->z;
    newPos->x = (float)uVar23 + (float)pTStack_19 * fVar10;
    newPos->y = (float)uVar24 + fStack_11 * fVar10;
    newPos->z = fVar9 + fStack_25 * fVar10;
    return 1;
  }
  return 0;
}


/* Vector3 GetSlideDir(Vector3, Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_GetSlideDir
                    (Vector3 *__return_storage_ptr__,CameraCollisionWithSliding *this,Vector3 newPos
                    ,Vector3 hitPoint,Vector3 targetPosition,Vector3 cameraPosition,
                    MethodInfo *method)

{
  hitPoint.x = newPos.x - hitPoint.x;
  hitPoint.y = newPos.y - hitPoint.y;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  hitPoint.z = newPos.z - hitPoint.z;
  __return_storage_ptr__->z = 0.0;
  puVar1 = (undefined8 *)func_?(auStack_2,&hitPoint,0);
  hitPoint.x = targetPosition.x - cameraPosition.x;
  fVar3 = *(float *)(puVar1 + 1);
  hitPoint.y = targetPosition.y - cameraPosition.y;
  newPos.x = (float)*puVar1;
  newPos.y = (float)((ulonglong)*puVar1 >> 0x20);
  hitPoint.z = targetPosition.z - cameraPosition.z;
  targetPosition.z = hitPoint.z;
  puVar1 = (undefined8 *)func_?(&targetPosition,&hitPoint,0);
  hitPoint.z = *(float *)(puVar1 + 1);
  hitPoint.x = (float)*puVar1;
  hitPoint.y = (float)((ulonglong)*puVar1 >> 0x20);
  fVar4 = fVar3 * hitPoint.x - newPos.x * hitPoint.z;
  if (fVar4 != 0.0) {
    if (((this->fields).slideDir == 0.0) && ((this->fields).slideDir = 1.0, fVar4 < 0.0)) {
      (this->fields).slideDir = -1.0;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6 = (pVVar5->upVector).x;
    uVar7 = (pVVar5->upVector).y;
    hitPoint.z = (pVVar5->upVector).z;
    __return_storage_ptr__->x = newPos.y * hitPoint.z - fVar3 * (float)uVar7;
    __return_storage_ptr__->y = fVar3 * (float)uVar6 - newPos.x * hitPoint.z;
    __return_storage_ptr__->z = newPos.x * (float)uVar7 - newPos.y * (float)uVar6;
    hitPoint.x = (float)uVar6;
    hitPoint.y = (float)uVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (__return_storage_ptr__,(MethodInfo *)0x0);
    uVar8 = __return_storage_ptr__->x;
    uVar9 = __return_storage_ptr__->y;
    fVar4 = __return_storage_ptr__->z;
    fVar3 = (this->fields).slideDir;
    __return_storage_ptr__->x = (float)uVar8 * fVar3;
    __return_storage_ptr__->y = (float)uVar9 * fVar3;
    __return_storage_ptr__->z = fVar4 * fVar3;
    return __return_storage_ptr__;
  }
  uVar10 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar10);
  mscorlib.dll::System::Exception::Exception__ctor(this_00,(MethodInfo *)0x0);
  uVar10 = func_?(&
                          MethodInfo__CameraCollisionWithSliding__GetSlideDir_UnityEngine__Vector3__UnityEngine__Vector3__UnityEngine__Vector3__UnityEngine__Vector3_
                         );
  func_?(this_00,uVar10);
  pcVar11 = (code *)swi(3);
  pVVar12 = (Vector3 *)(*pcVar11)();
  return pVVar12;
}


/* Vector3 GetSlideVector(Vector3, Vector3, Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_GetSlideVector
                    (Vector3 *__return_storage_ptr__,CameraCollisionWithSliding *this,Vector3 newPos
                    ,Vector3 hitPoint,Vector3 targetPosition,Vector3 cameraPosition,
                    float baseDistance,MethodInfo *method)

{
  func_?(&stack0xffffffe8,&stack0xffffffdc,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  targetPosition_00.y = 0.0;
  targetPosition_00.x = targetPosition.x;
  hitPoint_00.y = 0.0;
  hitPoint_00.x = hitPoint.x;
  newPos_00.y = 0.0;
  newPos_00.x = newPos.x;
  newPos_00.z = newPos.z;
  hitPoint_00.z = hitPoint.z;
  targetPosition_00.z = targetPosition.z;
  cameraPosition_00.y = 0.0;
  cameraPosition_00.x = cameraPosition.x;
  cameraPosition_00.z = cameraPosition.z;
  pVVar1 = CameraCollisionWithSliding_GetSlideDir
                     ((Vector3 *)&stack0xffffffe8,this,newPos_00,hitPoint_00,targetPosition_00,
                      cameraPosition_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  dVar2 = (double)(newPos.z * newPos.z + 0.0);
  if (dVar2 < 0.0) {
    func_?();
  }
  else {
    dVar2 = SQRT(dVar2);
  }
  newPos_01.y = 0.0;
  newPos_01.x = newPos.x;
  newPos_01.z = newPos.z;
  targetPosition_01.y = 0.0;
  targetPosition_01.x = targetPosition.x;
  targetPosition_01.z = targetPosition.z;
  fVar3 = CameraCollisionWithSliding_GetSlideVectorLength
                    (*pVVar1,newPos_01,targetPosition_01,(float)dVar2,method_00);
  __return_storage_ptr__->x = in_stack_4 * fVar3;
  __return_storage_ptr__->y = in_stack_5 * fVar3;
  __return_storage_ptr__->z = in_stack_6 * fVar3;
  return __return_storage_ptr__;
}


/* Single GetSlideVectorLength(Vector3, Vector3, Vector3, Single) */

float Assembly-CSharp.dll::CameraCollisionWithSliding::
      CameraCollisionWithSliding_GetSlideVectorLength
                (Vector3 slideVector,Vector3 newPos,Vector3 targetPosition,float baseDistance,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  fVar1 = newPos.z + (targetPosition.z - newPos.z);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  end.y = newPos.y + (targetPosition.y - newPos.y);
  end.x = newPos.x + (targetPosition.x - newPos.x);
  end.z = fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_2(newPos,end,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  fVar2 = newPos.x * newPos.x + fVar1 * fVar1 + 0.0;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar3 = (double)((slideVector.x * slideVector.x + slideVector.y * slideVector.y +
                   slideVector.z * slideVector.z) * fVar2);
  if (dVar3 < 0.0) {
    func_?();
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  if ((float)dVar3 < _UNK_?) {
    fVar1 = 0.0;
  }
  else {
    fStack_4 = (slideVector.y * fVar1 + slideVector.x * newPos.x + slideVector.z * 0.0) /
                (float)dVar3;
    fVar1 = _UNK_?;
    if ((fStack_4 < _UNK_?) || (fVar1 = _UNK_?, _UNK_? < fStack_4)) {
      fStack_4 = fVar1;
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    auVar5._0_8_ = (double)fStack_4;
    auVar5._8_8_ = 0;
    func_?();
    fVar1 = (float)auVar5._0_8_ * _UNK_?;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar3 = (double)(fVar1 * _UNK_?);
  func_?();
  dVar6 = (double)fVar2;
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  dVar6 = (double)((float)dVar6 / (baseDistance / (float)dVar3));
  func_?();
  dVar6 = (double)((_UNK_? - ((float)dVar6 * _UNK_? + fVar1)) * _UNK_?);
  func_?();
  fVar1 = (float)dVar6 * (baseDistance / (float)dVar3);
  start.y = (float)unaff_retaddr;
  start.x = (float)unaff_EBP;
  start.z = newPos.z;
  end_00.y = newPos.y + slideVector.y * fVar1;
  end_00.x = slideVector.x * fVar1 + 0.0;
  end_00.z = newPos.z + slideVector.z * fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_2(start,end_00,(MethodInfo *)0x0)
  ;
  return fStack_7;
}


/* Vector3 GetSlideVectorXZPlane(Vector3, Vector3, Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::CameraCollisionWithSliding::
          CameraCollisionWithSliding_GetSlideVectorXZPlane
                    (Vector3 *__return_storage_ptr__,CameraCollisionWithSliding *this,Vector3 newPos
                    ,Vector3 hitPoint,Vector3 targetPosition,Vector3 cameraPosition,
                    float baseDistance,MethodInfo *method)

{
  pVVar1 = CameraCollisionWithSliding_GetSlideDir
                     (&hitPoint,this,newPos,hitPoint,targetPosition,cameraPosition,(MethodInfo *)0x0
                     );
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  hitPoint.y = targetPosition.x;
  hitPoint.z = baseDistance;
  uVar5 = pVVar1->x;
  hitPoint.x = newPos.z;
  targetPosition_00.y = baseDistance;
  targetPosition_00.x = targetPosition.x;
  targetPosition_00.z = targetPosition.z;
  fVar6 = CameraCollisionWithSliding_GetSlideVectorLength
                    (*pVVar1,newPos,targetPosition_00,baseDistance,(MethodInfo *)0x0);
  *(ulonglong *)uVar5 = CONCAT44((float)uVar3 * fVar6,(float)uVar2 * fVar6);
  *(float *)(uVar5 + 8) = fVar4 * fVar6;
  return (Vector3 *)uVar5;
}


/* Void ResetIfNotUpdate() */

void Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_ResetIfNotUpdate
               (CameraCollisionWithSliding *this,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (1 < iVar1 - (this->fields).prevFrameCount) {
    (this->fields).slideDir = 0.0;
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  (this->fields).prevFrameCount = iVar1;
  return;
}


/* CameraCollisionWithSliding() */

void Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding__ctor
               (CameraCollisionWithSliding *this,MethodInfo *method)

{
  (this->fields).checkDistanceFactor = 0.5;
  return;
}

