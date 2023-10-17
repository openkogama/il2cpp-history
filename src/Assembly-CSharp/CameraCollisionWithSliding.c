
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
  fVar2 = distanceToAvatar * (this->fields).checkDistanceFactor;
  (this->fields).prevFrameCount = iVar1;
  func_?(&stack0xffffff60,0,0x48);
  bVar3 = CameraCollision::CameraCollision_Collide_1
                    ((CameraCollision *)this,(VoxelHit *)&stack0xffffff60,newCameraPosition,
                     cameraRadius,fVar2,targetPosition,cameraPosition,ignoreAvatarId,
                     (MethodInfo *)0x0);
  if (bVar3 != 0) {
    uVar4._0_4_ = newCameraPosition->x;
    uVar4._4_4_ = newCameraPosition->y;
    fVar5 = newCameraPosition->z;
    VStack_6.z = targetPosition.z - cameraPosition.z;
    uStack_7 = CONCAT44(targetPosition.y - cameraPosition.y,targetPosition.x - cameraPosition.x);
    fStack_8 = VStack_6.z;
    puVar9 = (undefined8 *)func_?();
    uStack_7._0_4_ = (float)*puVar9;
    VStack_6.z = *(float *)(puVar9 + 1) * fVar2;
    uStack_7 = (ulonglong)(uint)((float)uStack_7 * fVar2);
    uStack_10 = uVar4 & 0xffffffff;
    uVar11 = 0;
    uVar12 = 0;
    fStack_8 = VStack_6.z;
    fVar13 = (float10)func_?();
    newPos.z = fVar5;
    newPos.x = (float)(int)(uVar4 & 0xffffffff);
    newPos.y = (float)(int)((uVar4 & 0xffffffff) >> 0x20);
    hitPoint.y = (float)uVar11;
    hitPoint.x = in_stack_14;
    hitPoint.z = in_stack_15;
    targetPosition_00.y = 0.0;
    targetPosition_00.x = targetPosition.x;
    targetPosition_00.z = targetPosition.z;
    cameraPosition_00.y = (float)uVar12;
    cameraPosition_00.x = cameraPosition.x;
    cameraPosition_00.z = cameraPosition.z;
    pVVar16 = CameraCollisionWithSliding_GetSlideDir
                        (&VStack_6,this,newPos,hitPoint,targetPosition_00,cameraPosition_00,
                         (MethodInfo *)0x0);
    uVar17 = pVVar16->x;
    uVar18 = pVVar16->y;
    fVar2 = pVVar16->z;
    newPos_00.z = fVar5;
    newPos_00.x = (float)(undefined4)uStack_10;
    newPos_00.y = (float)uStack_10._4_4_;
    targetPosition_01.y = 0.0;
    targetPosition_01.x = targetPosition.x;
    targetPosition_01.z = targetPosition.z;
    fVar19 = CameraCollisionWithSliding_GetSlideVectorLength
                       (*pVVar16,newPos_00,targetPosition_01,(float)fVar13,(MethodInfo *)0x0);
    uVar20 = newCameraPosition->x;
    uVar21 = newCameraPosition->y;
    fVar5 = newCameraPosition->z;
    newCameraPosition->x = (float)uVar20 + (float)uVar17 * fVar19;
    newCameraPosition->y = (float)uVar21 + (float)uVar18 * fVar19;
    newCameraPosition->z = fVar5 + fVar2 * fVar19;
    return 1;
  }
  (this->fields).slideDir = 0.0;
  return 0;
}


/* Boolean DoCollideWithSliding(Vector3 ByRef, Single, Single, Vector3, Vector3,
   HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollisionWithSliding::
     CameraCollisionWithSliding_DoCollideWithSliding
               (CameraCollisionWithSliding *this,Vector3 *newPos,float cameraRadius,
               float baseDistance,Vector3 targetPosition,Vector3 cameraPosition,
               HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

{
  func_?(&stack0xffffff60,0,0x48);
  bVar1 = CameraCollision::CameraCollision_Collide_1
                    ((CameraCollision *)this,(VoxelHit *)&stack0xffffff60,newPos,cameraRadius,
                     baseDistance,targetPosition,cameraPosition,ignoreIDs,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    fVar2 = newPos->z;
    uVar3._0_4_ = newPos->x;
    uVar3._4_4_ = newPos->y;
    VStack_4.z = targetPosition.z - cameraPosition.z;
    uStack_5 = CONCAT44(targetPosition.y - cameraPosition.y,targetPosition.x - cameraPosition.x);
    fStack_6 = VStack_4.z;
    puVar7 = (undefined8 *)func_?();
    uStack_5._0_4_ = (float)*puVar7;
    VStack_4.z = *(float *)(puVar7 + 1) * baseDistance;
    uStack_5 = (ulonglong)(uint)((float)uStack_5 * baseDistance);
    uStack_8 = uVar3 & 0xffffffff;
    uVar9 = 0;
    fStack_6 = VStack_4.z;
    fVar10 = (float10)func_?();
    hitPoint.y = (float)uVar9;
    hitPoint.x = in_stack_11;
    newPos_00.z = fVar2;
    newPos_00.x = (float)(int)(uVar3 & 0xffffffff);
    newPos_00.y = (float)(int)((uVar3 & 0xffffffff) >> 0x20);
    hitPoint.z = in_stack_12;
    targetPosition_00.y = 0.0;
    targetPosition_00.x = targetPosition.x;
    targetPosition_00.z = targetPosition.z;
    cameraPosition_00.y = 0.0;
    cameraPosition_00.x = cameraPosition.x;
    cameraPosition_00.z = cameraPosition.z;
    pVVar13 = CameraCollisionWithSliding_GetSlideDir
                        (&VStack_4,this,newPos_00,hitPoint,targetPosition_00,cameraPosition_00,
                         (MethodInfo *)0x0);
    uVar14 = pVVar13->x;
    uVar15 = pVVar13->y;
    fVar16 = pVVar13->z;
    newPos_01.z = fVar2;
    newPos_01.x = (float)(undefined4)uStack_8;
    newPos_01.y = (float)uStack_8._4_4_;
    targetPosition_01.y = 0.0;
    targetPosition_01.x = targetPosition.x;
    targetPosition_01.z = targetPosition.z;
    fVar17 = CameraCollisionWithSliding_GetSlideVectorLength
                       (*pVVar13,newPos_01,targetPosition_01,(float)fVar10,(MethodInfo *)0x0);
    uVar18 = newPos->x;
    uVar19 = newPos->y;
    fVar2 = newPos->z;
    newPos->x = (float)uVar18 + (float)uVar14 * fVar17;
    newPos->y = (float)uVar19 + (float)uVar15 * fVar17;
    newPos->z = fVar2 + fVar16 * fVar17;
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
  func_?(this_00);
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
  fStack_1 = targetPosition.z - cameraPosition.z;
  uStack_2 = CONCAT44(targetPosition.y - cameraPosition.y,targetPosition.x - cameraPosition.x);
  puVar3 = (undefined8 *)func_?(&stack0xffffffd0,&uStack_2,0);
  uStack_2._0_4_ = (float)*puVar3;
  fStack_1 = *(float *)(puVar3 + 1) * baseDistance;
  uStack_2 = (ulonglong)(uint)((float)uStack_2 * baseDistance);
  fVar4 = (float10)func_?(&uStack_2,0);
  fStack_5 = (float)fVar4;
  hitPoint_00.y = 0.0;
  hitPoint_00.x = hitPoint.x;
  newPos_00.y = 0.0;
  newPos_00.x = newPos.x;
  uVar6 = 0;
  newPos_00.z = newPos.z;
  hitPoint_00.z = hitPoint.z;
  targetPosition_00.y = 0.0;
  targetPosition_00.x = targetPosition.x;
  targetPosition_00.z = targetPosition.z;
  cameraPosition_00.y = 0.0;
  cameraPosition_00.x = cameraPosition.x;
  cameraPosition_00.z = cameraPosition.z;
  pVVar7 = CameraCollisionWithSliding_GetSlideDir
                     ((Vector3 *)&stack0xffffffd0,this,newPos_00,hitPoint_00,targetPosition_00,
                      cameraPosition_00,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar7->x;
  uStack_2._4_4_ = pVVar7->y;
  fStack_1 = pVVar7->z;
  newPos_01.y = 0.0;
  newPos_01.x = newPos.x;
  newPos_01.z = newPos.z;
  targetPosition_01.y = (float)uVar6;
  targetPosition_01.x = targetPosition.x;
  targetPosition_01.z = targetPosition.z;
  fVar8 = CameraCollisionWithSliding_GetSlideVectorLength
                    (*pVVar7,newPos_01,targetPosition_01,fStack_5,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (float)uStack_2 * fVar8;
  __return_storage_ptr__->y = uStack_2._4_4_ * fVar8;
  __return_storage_ptr__->z = fStack_1 * fVar8;
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
  fVar1 = targetPosition.x - newPos.x;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  end.y = newPos.y + (targetPosition.y - newPos.y);
  end.x = newPos.x + fVar1;
  fStack_2 = newPos.y;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  end.z = newPos.z + (targetPosition.z - newPos.z);
  fStack_5 = newPos.x;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_2(newPos,end,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  pMVar6 = TypeInfo__System__Math;
  dVar7 = (double)((slideVector.x * slideVector.x + slideVector.y * slideVector.y +
                   slideVector.z * slideVector.z) *
                  (fStack_8 * fStack_8 + fStack_9 * fStack_9 + fVar1 * fVar1));
  if (dVar7 < 0.0) {
    func_?();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  if ((float)dVar7 < _UNK_?) {
    fVar1 = 0.0;
  }
  else {
    fStack_8 = (slideVector.x * fStack_8 + slideVector.y * fStack_9 + slideVector.z * fVar1) /
                (float)dVar7;
    fVar1 = _UNK_?;
    if ((fStack_8 < _UNK_?) || (fVar1 = _UNK_?, _UNK_? < fStack_8)) {
      fStack_8 = fVar1;
    }
    if ((pMVar6->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pMVar6);
    }
    auVar10._0_8_ = (double)fStack_8;
    auVar10._8_8_ = 0;
    func_?();
    fVar1 = (float)auVar10._0_8_ * _UNK_?;
  }
  dVar11 = (double)(fVar1 * _UNK_?);
  func_?();
  fVar12 = (float10)func_?(&fStack_5,0);
  dVar7 = (double)(fVar12 / (float10)(baseDistance / (float)dVar11));
  func_?();
  dVar7 = (double)((_UNK_? - ((float)dVar7 * _UNK_? + fVar1)) * _UNK_?);
  func_?();
  fVar1 = (float)dVar7 * (baseDistance / (float)dVar11);
  fStack_3 = newPos.z + slideVector.z * fVar1;
  start.y = (float)unaff_retaddr;
  start.x = (float)unaff_EBP;
  start.z = newPos.z;
  end_00.y = newPos.y + slideVector.y * fVar1;
  end_00.x = fStack_4 + slideVector.x * fVar1;
  end_00.z = fStack_3;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_2(start,end_00,(MethodInfo *)0x0)
  ;
  return fStack_3;
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

