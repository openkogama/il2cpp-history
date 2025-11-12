
/* Boolean CollideWithSliding(Vector3 ByRef, Single, Single, Vector3, Vector3,
   HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_CollideWithSliding
               (CameraCollisionWithSliding *this,Vector3 *newCameraPosition,float cameraRadius,
               float distanceToAvatar,Vector3 *targetPosition,Vector3 *cameraPosition,
               HashSet_1_System_Int32_ *ignoreAvatarId,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (1 < iVar4 - (this->fields).prevFrameCount) {
    (this->fields).slideDir = 0.0;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar5 = (*pcRam_?)();
  fVar6 = distanceToAvatar * (this->fields).checkDistanceFactor;
  (this->fields).prevFrameCount = iVar5;
  VStack_7.interactionFlags = 0;
  VStack_8.z = cameraPosition->z;
  VStack_9.z = targetPosition->z;
  VStack_7.point.x = 0.0;
  VStack_7.point.y = 0.0;
  VStack_7.point.z = 0.0;
  VStack_7.normal.x = 0.0;
  VStack_7.normal.y = 0.0;
  VStack_7.normal.z = 0.0;
  VStack_7.cubePos.x = 0;
  VStack_7.cubePos.y = 0;
  VStack_7.cubePos.z = 0;
  VStack_7._30_2_ = 0;
  VStack_7.face = 0;
  VStack_7.isCubeHit = 0;
  VStack_7._37_3_ = 0;
  VStack_7.woId = 0;
  VStack_7._44_4_ = 0;
  VStack_7.cube = (Cube *)0x0;
  VStack_7.distance = 0.0;
  VStack_7._60_4_ = 0;
  VStack_7.collider = (Collider *)0x0;
  VStack_7.transform = (Transform *)0x0;
  VStack_8.x = cameraPosition->x;
  VStack_8.y = cameraPosition->y;
  VStack_9.x = targetPosition->x;
  VStack_9.y = targetPosition->y;
  bVar3 = CameraCollision::CameraCollision_Collide_1
                    ((CameraCollision *)this,&VStack_7,newCameraPosition,cameraRadius,fVar6,
                     &VStack_9,&VStack_8,ignoreAvatarId,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    (this->fields).slideDir = 0.0;
  }
  else {
    VStack_9.x = cameraPosition->x;
    VStack_9.y = cameraPosition->y;
    VStack_9.z = cameraPosition->z;
    VStack_8.x = targetPosition->x;
    VStack_8.y = targetPosition->y;
    VStack_8.z = targetPosition->z;
    VStack_10.z = newCameraPosition->z;
    VStack_11.x = VStack_7.point.x;
    VStack_11.y = VStack_7.point.y;
    VStack_11.z = VStack_7.point.z;
    VStack_10.x = newCameraPosition->x;
    VStack_10.y = newCameraPosition->y;
    pVVar12 = CameraCollisionWithSliding_GetSlideVector
                       (aVStack_13,this,&VStack_10,&VStack_11,&VStack_8,&VStack_9,fVar6,
                        (MethodInfo *)0x0);
    uVar14 = newCameraPosition->x;
    uVar15 = newCameraPosition->y;
    uVar16 = pVVar12->x;
    fVar6 = pVVar12->y;
    fVar17 = pVVar12->z;
    newCameraPosition->x = (float)uVar16 + (float)uVar14;
    newCameraPosition->y = fVar6 + (float)uVar15;
    newCameraPosition->z = fVar17 + newCameraPosition->z;
  }
  return bVar3 != 0;
}


/* Boolean DoCollideWithSliding(Vector3 ByRef, Single, Single, Vector3, Vector3,
   HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollisionWithSliding::
     CameraCollisionWithSliding_DoCollideWithSliding
               (CameraCollisionWithSliding *this,Vector3 *newPos,float cameraRadius,
               float baseDistance,Vector3 *targetPosition,Vector3 *cameraPosition,
               HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

{
  VStack_1.interactionFlags = 0;
  VStack_2.z = cameraPosition->z;
  VStack_3.z = targetPosition->z;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  VStack_2.x = cameraPosition->x;
  VStack_2.y = cameraPosition->y;
  VStack_3.x = targetPosition->x;
  VStack_3.y = targetPosition->y;
  bVar4 = CameraCollision::CameraCollision_Collide_1
                    ((CameraCollision *)this,&VStack_1,newPos,cameraRadius,baseDistance,&VStack_3,
                     &VStack_2,ignoreIDs,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    VStack_3.x = cameraPosition->x;
    VStack_3.y = cameraPosition->y;
    VStack_3.z = cameraPosition->z;
    VStack_2.x = targetPosition->x;
    VStack_2.y = targetPosition->y;
    VStack_2.z = targetPosition->z;
    VStack_5.z = newPos->z;
    VStack_6.x = VStack_1.point.x;
    VStack_6.y = VStack_1.point.y;
    VStack_6.z = VStack_1.point.z;
    VStack_5.x = newPos->x;
    VStack_5.y = newPos->y;
    pVVar7 = CameraCollisionWithSliding_GetSlideVector
                       (aVStack_8,this,&VStack_5,&VStack_6,&VStack_2,&VStack_3,baseDistance,
                        (MethodInfo *)0x0);
    uVar9 = newPos->x;
    uVar10 = newPos->y;
    uVar11 = pVVar7->x;
    fVar12 = pVVar7->y;
    fVar13 = pVVar7->z;
    newPos->x = (float)uVar11 + (float)uVar9;
    newPos->y = fVar12 + (float)uVar10;
    newPos->z = fVar13 + newPos->z;
  }
  return bVar4 != 0;
}


/* Vector3 GetSlideDir(Vector3, Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_GetSlideDir
                    (Vector3 *__return_storage_ptr__,CameraCollisionWithSliding *this,
                    Vector3 *newPos,Vector3 *hitPoint,Vector3 *targetPosition,
                    Vector3 *cameraPosition,MethodInfo *method)

{
  uVar1 = newPos->x;
  uVar2 = newPos->y;
  uStack_3._0_4_ = hitPoint->x;
  uStack_3._4_4_ = hitPoint->y;
  fVar4 = (float)uVar1 - (float)uStack_3;
  fVar5 = newPos->z - hitPoint->z;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  fVar6 = (float)uVar2 - (float)uStack_3._4_4_;
  __return_storage_ptr__->z = 0.0;
  uStack_7 = CONCAT44(fVar6,fVar4);
  method_00 = (MethodInfo *)this;
  fStack_8 = fVar5;
  fVar9 = (float)FUN_?(&uStack_7);
  if (_UNK_? < fVar9) {
    fVar5 = fVar5 / fVar9;
    uStack_7 = CONCAT44(fVar6 / fVar9,fVar4 / fVar9);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_7._0_4_ = (pVVar10->zeroVector).x;
    uStack_7._4_4_ = (pVVar10->zeroVector).y;
    fVar5 = (pVVar10->zeroVector).z;
  }
  uVar11 = cameraPosition->x;
  uVar12 = cameraPosition->y;
  uVar13 = targetPosition->x;
  uVar14 = targetPosition->y;
  fVar9 = targetPosition->z - cameraPosition->z;
  uStack_3 = CONCAT44((float)uVar14 - (float)uVar12,(float)uVar13 - (float)uVar11);
  fStack_15 = fVar9;
  fVar6 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar6) {
    fVar9 = fVar9 / fVar6;
    uStack_3 = CONCAT44(((float)uVar14 - (float)uVar12) / fVar6,
                         ((float)uVar13 - (float)uVar11) / fVar6);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar10->zeroVector).x;
    uStack_3._4_4_ = (pVVar10->zeroVector).y;
    fVar9 = (pVVar10->zeroVector).z;
  }
  fVar6 = (float)uStack_7;
  fVar9 = (float)uStack_3 * fVar5 - fVar9 * (float)uStack_7;
  if (fVar9 != 0.0) {
    if (((this->fields).slideDir == 0.0) && ((this->fields).slideDir = 1.0, fVar9 < 0.0)) {
      (this->fields).slideDir = -1.0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar10->upVector).x;
    uStack_3._4_4_ = (pVVar10->upVector).y;
    fVar9 = (pVVar10->upVector).z;
    __return_storage_ptr__->x =
         uStack_7._4_4_ * (pVVar10->upVector).z - fVar5 * (float)uStack_3._4_4_;
    __return_storage_ptr__->y = fVar5 * (float)uStack_3 - fVar6 * fVar9;
    __return_storage_ptr__->z = fVar6 * (float)uStack_3._4_4_ - uStack_7._4_4_ * (float)uStack_3
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (__return_storage_ptr__,method_00);
    fVar5 = (this->fields).slideDir;
    uVar16 = __return_storage_ptr__->x;
    __return_storage_ptr__->x = (float)uVar16 * fVar5;
    __return_storage_ptr__->y = __return_storage_ptr__->y * fVar5;
    __return_storage_ptr__->z = __return_storage_ptr__->z * fVar5;
    return __return_storage_ptr__;
  }
  uVar17 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar17);
  mscorlib.dll::System::Exception::Exception__ctor(this_00,(MethodInfo *)0x0);
  uVar17 = func_?(&
                               MethodInfo__CameraCollisionWithSliding__GetSlideDir_UnityEngine__Vector3__UnityEngine__Vector3__UnityEngine__Vector3__UnityEngine__Vector3_
                              );
  FUN_?(this_00,uVar17);
  pcVar18 = (code *)swi(3);
  pVVar19 = (Vector3 *)(*pcVar18)();
  return pVVar19;
}


/* Vector3 GetSlideVector(Vector3, Vector3, Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_GetSlideVector
                    (Vector3 *__return_storage_ptr__,CameraCollisionWithSliding *this,
                    Vector3 *newPos,Vector3 *hitPoint,Vector3 *targetPosition,
                    Vector3 *cameraPosition,float baseDistance,MethodInfo *method)

{
  uVar1 = targetPosition->x;
  uVar2 = targetPosition->y;
  VStack_3.x = cameraPosition->x;
  VStack_3.y = cameraPosition->y;
  fVar4 = (float)uVar1 - VStack_3.x;
  fVar5 = targetPosition->z - cameraPosition->z;
  fVar6 = (float)uVar2 - VStack_3.y;
  VStack_7.x = 0.0;
  VStack_7.y = 0.0;
  VStack_7.z = 0.0;
  VStack_8.y = fVar6;
  VStack_8.x = fVar4;
  VStack_8.z = fVar5;
  fVar9 = (float)FUN_?(&VStack_8);
  if (_UNK_? < fVar9) {
    VStack_7.z = fVar5 / fVar9;
    VStack_8.y = fVar6 / fVar9;
    VStack_8.x = fVar4 / fVar9;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_8.x = (pVVar10->zeroVector).x;
    VStack_8.y = (pVVar10->zeroVector).y;
    VStack_7.z = (pVVar10->zeroVector).z;
  }
  VStack_7.z = VStack_7.z * baseDistance;
  newPos->y = 0.0;
  VStack_7.y = 0.0;
  VStack_7.x = VStack_8.x * baseDistance;
  hitPoint->y = 0.0;
  targetPosition->y = 0.0;
  cameraPosition->y = 0.0;
  fVar6 = (float)FUN_?(&VStack_7);
  VStack_8.z = cameraPosition->z;
  VStack_8.x = cameraPosition->x;
  VStack_8.y = cameraPosition->y;
  VStack_7.z = targetPosition->z;
  VStack_3.x = newPos->x;
  VStack_3.y = newPos->y;
  VStack_11.z = hitPoint->z;
  VStack_3.z = newPos->z;
  VStack_7.x = targetPosition->x;
  VStack_7.y = targetPosition->y;
  VStack_11.x = hitPoint->x;
  VStack_11.y = hitPoint->y;
  pVVar12 = CameraCollisionWithSliding_GetSlideDir
                     (aVStack_13,this,&VStack_3,&VStack_11,&VStack_7,&VStack_8,(MethodInfo *)0x0)
  ;
  VStack_3.z = targetPosition->z;
  VStack_3.x = targetPosition->x;
  VStack_3.y = targetPosition->y;
  VStack_11.z = newPos->z;
  uVar14._0_4_ = pVVar12->x;
  uVar14._4_4_ = pVVar12->y;
  fVar9 = pVVar12->z;
  VStack_11.x = newPos->x;
  VStack_11.y = newPos->y;
  VStack_8._0_8_ = uVar14;
  VStack_8.z = fVar9;
  fVar6 = CameraCollisionWithSliding_GetSlideVectorLength
                    (&VStack_8,&VStack_11,&VStack_3,fVar6,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (float)uVar14 * fVar6;
  __return_storage_ptr__->y = uVar14._4_4_ * fVar6;
  __return_storage_ptr__->z = fVar9 * fVar6;
  return __return_storage_ptr__;
}


/* Single GetSlideVectorLength(Vector3, Vector3, Vector3, Single) */

float Assembly-CSharp.dll::CameraCollisionWithSliding::
      CameraCollisionWithSliding_GetSlideVectorLength
                (Vector3 *slideVector,Vector3 *newPos,Vector3 *targetPosition,float baseDistance,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = targetPosition->x;
  uVar2 = targetPosition->y;
  VStack_3.x = newPos->x;
  VStack_3.y = newPos->y;
  fVar4 = (float)uVar1 - VStack_3.x;
  fVar5 = targetPosition->z - newPos->z;
  fVar6 = (float)uVar2 - VStack_3.y;
  aVStack_7[0].y = fVar6;
  aVStack_7[0].x = fVar4;
  fVar8 = fVar4 + VStack_3.x;
  fVar9 = newPos->z;
  fVar10 = fVar6 + VStack_3.y;
  aVStack_7[0].z = fVar5;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_3.x = newPos->x;
  VStack_3.y = newPos->y;
  VStack_3.z = newPos->z;
  VStack_11.y = fVar10;
  VStack_11.x = fVar8;
  VStack_11.z = fVar5 + fVar9;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_2
            (&VStack_3,&VStack_11,(MethodInfo *)0x0);
  VStack_3.x = slideVector->x;
  VStack_3.y = slideVector->y;
  VStack_3.z = slideVector->z;
  VStack_11.y = fVar6;
  VStack_11.x = fVar4;
  VStack_11.z = fVar5;
  fVar9 = (float)FUN_?(&VStack_11,&VStack_3);
  fVar6 = (float)FUN_?(fVar9 * _UNK_?);
  fVar10 = (float)FUN_?(aVStack_7);
  fVar10 = (float)func_?(fVar10 / (baseDistance / fVar6));
  fVar9 = (float)FUN_?((_UNK_? - (fVar10 * _UNK_? + fVar9)) * _UNK_?)
  ;
  uVar12 = slideVector->x;
  uVar13 = slideVector->y;
  fVar9 = fVar9 * (baseDistance / fVar6);
  uVar14 = newPos->x;
  uVar15 = newPos->y;
  aVStack_7[0].z = fVar9 * slideVector->z + newPos->z;
  VStack_3.x = newPos->x;
  VStack_3.y = newPos->y;
  VStack_3.z = newPos->z;
  aVStack_7[0].y = fVar9 * (float)uVar13 + (float)uVar15;
  aVStack_7[0].x = fVar9 * (float)uVar12 + (float)uVar14;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_2
            (&VStack_3,aVStack_7,(MethodInfo *)0x0);
  return fVar9;
}


/* Vector3 GetSlideVectorXZPlane(Vector3, Vector3, Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::CameraCollisionWithSliding::
          CameraCollisionWithSliding_GetSlideVectorXZPlane
                    (Vector3 *__return_storage_ptr__,CameraCollisionWithSliding *this,
                    Vector3 *newPos,Vector3 *hitPoint,Vector3 *targetPosition,
                    Vector3 *cameraPosition,float baseDistance,MethodInfo *method)

{
  VStack_1.x = cameraPosition->x;
  VStack_1.y = cameraPosition->y;
  VStack_1.z = cameraPosition->z;
  VStack_2.z = targetPosition->z;
  VStack_3.z = hitPoint->z;
  VStack_2.x = targetPosition->x;
  VStack_2.y = targetPosition->y;
  VStack_4.z = newPos->z;
  VStack_3.x = hitPoint->x;
  VStack_3.y = hitPoint->y;
  VStack_4.x = newPos->x;
  VStack_4.y = newPos->y;
  pVVar5 = CameraCollisionWithSliding_GetSlideDir
                     (aVStack_6,this,&VStack_4,&VStack_3,&VStack_2,&VStack_1,(MethodInfo *)0x0)
  ;
  VStack_4.z = targetPosition->z;
  VStack_4.x = targetPosition->x;
  VStack_4.y = targetPosition->y;
  uVar7._0_4_ = pVVar5->x;
  uVar7._4_4_ = pVVar5->y;
  fVar8 = pVVar5->z;
  VStack_3.z = newPos->z;
  VStack_3.x = newPos->x;
  VStack_3.y = newPos->y;
  VStack_2._0_8_ = uVar7;
  VStack_2.z = fVar8;
  fVar9 = CameraCollisionWithSliding_GetSlideVectorLength
                    (&VStack_2,&VStack_3,&VStack_4,baseDistance,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (float)uVar7 * fVar9;
  __return_storage_ptr__->y = uVar7._4_4_ * fVar9;
  __return_storage_ptr__->z = fVar8 * fVar9;
  return __return_storage_ptr__;
}


/* Void ResetIfNotUpdate() */

void Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_ResetIfNotUpdate
               (CameraCollisionWithSliding *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  if (1 < iVar3 - (this->fields).prevFrameCount) {
    (this->fields).slideDir = 0.0;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  (this->fields).prevFrameCount = iVar4;
  return;
}


/* CameraCollisionWithSliding() */

void Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding__ctor
               (CameraCollisionWithSliding *this,MethodInfo *method)

{
  (this->fields).checkDistanceFactor = 0.5;
  return;
}

