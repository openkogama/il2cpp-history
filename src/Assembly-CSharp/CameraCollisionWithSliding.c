
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x48);
  fVar2 = cameraPosition.z;
  VVar3.y = cameraPosition.y;
  VVar3.x = cameraPosition.x;
  VVar3.z = cameraPosition.z;
  bVar4 = CameraCollision::CameraCollision_Collide_1
                    ((CameraCollision *)this,(VoxelHit *)&fStack_1,newPos,cameraRadius,baseDistance
                     ,targetPosition,VVar3,ignoreIDs,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    fVar5 = targetPosition.x;
    puStack_6 = (undefined *)fStack_1;
    uVar7 = newPos->x;
    fVar8 = newPos->z;
    fVar9 = cameraPosition.x;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    b.y = cameraPosition.y;
    b.x = cameraPosition.x;
    b.z = fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              (&VStack_10,targetPosition,b,(MethodInfo *)0x0);
    pVVar11 = (Vector3 *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
              ((Vector3 *)&stack0xffffff90,*pVVar11,baseDistance,(MethodInfo *)0x0);
    uVar12 = 0;
    fVar13 = 0.0;
    uVar14 = 0;
    fVar15 = 0.0;
    fVar16 = (float10)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    cameraPosition_00.y = fVar15;
    cameraPosition_00.x = fVar9;
    newPos_00.y = (float)uVar12;
    newPos_00.x = (float)uVar7;
    newPos_00.z = fVar8;
    hitPoint.y = fVar13;
    hitPoint.x = (float)puStack_6;
    hitPoint.z = in_stack_17;
    targetPosition_00.y = (float)uVar14;
    targetPosition_00.x = fVar5;
    targetPosition_00.z = targetPosition.z;
    cameraPosition_00.z = fVar2;
    pVVar11 = CameraCollisionWithSliding_GetSlideDir
                       ((Vector3 *)&puStack_6,this,newPos_00,hitPoint,targetPosition_00,
                        cameraPosition_00,(MethodInfo *)0x0);
    uVar18 = pVVar11->x;
    uVar19 = pVVar11->y;
    this = (CameraCollisionWithSliding *)pVVar11->z;
    newPos_01.y = fVar5;
    newPos_01.x = (float)uVar7;
    newPos_01.z = fVar8;
    targetPosition_01.y = (float)fVar16;
    targetPosition_01.x = fVar5;
    targetPosition_01.z = targetPosition.z;
    cameraPosition.y = (float)uVar18;
    cameraPosition.z = (float)uVar19;
    fVar2 = CameraCollisionWithSliding_GetSlideVectorLength
                      (*pVVar11,newPos_01,targetPosition_01,(float)fVar16,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    fVar20 = cameraPosition.z;
    VVar3.x = cameraPosition.y;
    VVar3 = (Vector3)CONCAT84(uVar21,VVar3.x);
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffc0,VVar3,fVar2,(MethodInfo *)0x0);
    uVar22._0_4_ = newPos->x;
    uVar22._4_4_ = newPos->y;
    fVar2 = newPos->z;
    fVar8 = pVVar11->z;
    VVar3 = *pVVar11;
    cameraPosition.z = (float)uVar22._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      cameraPosition.y = (float)TypeInfo__UnityEngine__Vector3;
      cameraPosition.x = (float)&UNK_?;
      func_?();
      uVar22 = CONCAT44(cameraPosition.z,cameraPosition.y);
    }
    cameraPosition.y = 0.0;
    a.z = fVar2;
    a.x = (float)(int)uVar22;
    a.y = (float)(int)((ulonglong)uVar22 >> 0x20);
    cameraPosition.x = fVar8;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&cameraPosition,a,VVar3,(MethodInfo *)0x0);
    fVar8 = pVVar11->y;
    fVar2 = pVVar11->z;
    newPos->x = pVVar11->x;
    newPos->y = fVar8;
    newPos->z = fVar2;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.y = newPos.y;
  a_00.x = newPos.x;
  a_00.z = newPos.z;
  b.y = hitPoint.y;
  b.x = hitPoint.x;
  b.z = hitPoint.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            (&hitPoint,a_00,b,(MethodInfo *)0x0);
  puVar1 = (undefined8 *)func_?(&newPos,&stack0xffffffe4,0);
  fVar2 = *(float *)(puVar1 + 1);
  hitPoint.y = (float)*puVar1;
  hitPoint.z = (float)((ulonglong)*puVar1 >> 0x20);
  b_00.y = cameraPosition.y;
  b_00.x = cameraPosition.x;
  b_00.z = cameraPosition.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            (&newPos,targetPosition,b_00,(MethodInfo *)0x0);
  pVVar3 = (Vector3 *)func_?();
  uVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  newPos.x = 0.0;
  lhs_00.y = hitPoint.z;
  lhs_00.x = hitPoint.y;
  lhs_00.z = fVar2;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                     (&cameraPosition,lhs_00,*pVVar3,(MethodInfo *)0x0);
  uVar6 = pVVar3->x;
  uVar7 = pVVar3->y;
  newPos.z = pVVar3->z;
  newPos.x = (float)uVar6;
  newPos.y = (float)uVar7;
  if ((float)uVar7 != 0.0) {
    if ((*(float *)((int)fVar5 + 8) == 0.0) &&
       (*(undefined4 *)((int)fVar5 + 8) = 0x3f800000, (float)uVar7 < 0.0)) {
      *(undefined4 *)((int)fVar5 + 8) = 0xbf800000;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       (&newPos,(MethodInfo *)0x0);
    cameraPosition.x = pVVar3->z;
    cameraPosition.y = 0.0;
    hitPoint.x = (float)&hitPoint;
    newPos.z = (float)&UNK_?;
    lhs.y = hitPoint.z;
    lhs.x = hitPoint.y;
    lhs.z = fVar2;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                       ((Vector3 *)hitPoint.x,lhs,*pVVar3,(MethodInfo *)0x0);
    cameraPosition.y = 0.0;
    uVar8 = pVVar3->x;
    uVar9 = pVVar3->y;
    fVar2 = pVVar3->z;
    cameraPosition.x = (float)&stack0xfffffff0;
    func_?();
    a.y = (float)uVar9;
    a.x = (float)uVar8;
    a.z = fVar2;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&hitPoint,a,*(float *)((int)fVar5 + 8),(MethodInfo *)0x0);
    fVar2 = pVVar3->z;
    *(undefined8 *)uVar4 = *(undefined8 *)pVVar3;
    *(float *)(uVar4 + 8) = fVar2;
    return (Vector3 *)uVar4;
  }
  this_00 = (Exception *)func_?();
  hitPoint.z = (float)&UNK_?;
  mscorlib.dll::System::Exception::Exception__ctor(this_00,(MethodInfo *)0x0);
  cameraPosition.y =
       (float)
       MethodInfo__CameraCollisionWithSliding__GetSlideDir_UnityEngine__Vector3__UnityEngine__Vector3__UnityEngine__Vector3__UnityEngine__Vector3_
  ;
  cameraPosition.x = 0.0;
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar10)();
  return pVVar3;
}


/* Vector3 GetSlideVector(Vector3, Vector3, Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::CameraCollisionWithSliding::CameraCollisionWithSliding_GetSlideVector
                    (Vector3 *__return_storage_ptr__,CameraCollisionWithSliding *this,Vector3 newPos
                    ,Vector3 hitPoint,Vector3 targetPosition,Vector3 cameraPosition,
                    float baseDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar1 = targetPosition.z;
  a_00.y = targetPosition.y;
  a_00.x = targetPosition.x;
  a_00.z = targetPosition.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffd8,a_00,cameraPosition,(MethodInfo *)0x0);
  pVVar2 = (Vector3 *)func_?(&stack0xffffffd8,&stack0xffffffe4,0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
            ((Vector3 *)&stack0xffffffd8,*pVVar2,baseDistance,(MethodInfo *)0x0);
  hitPoint.y = 0.0;
  targetPosition.y = 0.0;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  newPos_01.y = 0.0;
  newPos_01.x = newPos.x;
  newPos_01.z = newPos.z;
  hitPoint_00.y = hitPoint.y;
  hitPoint_00.x = hitPoint.x;
  hitPoint_00.z = hitPoint.z;
  targetPosition_01.y = targetPosition.y;
  targetPosition_01.x = targetPosition.x;
  targetPosition_01.z = fVar1;
  cameraPosition_00.y = 0.0;
  cameraPosition_00.x = cameraPosition.x;
  cameraPosition_00.z = cameraPosition.z;
  pVVar2 = CameraCollisionWithSliding_GetSlideDir
                     (&hitPoint,this,newPos_01,hitPoint_00,targetPosition_01,cameraPosition_00,
                      (MethodInfo *)0x0);
  fVar3 = targetPosition.y;
  fVar4 = targetPosition.x;
  fVar5 = pVVar2->z;
  targetPosition.z = targetPosition.x;
  hitPoint.z = newPos.x;
  targetPosition.x = 0.0;
  uVar6 = pVVar2->y;
  targetPosition.y = newPos.z;
  newPos_00.y = 0.0;
  newPos_00.x = newPos.x;
  newPos_00.z = newPos.z;
  targetPosition_00.y = fVar3;
  targetPosition_00.x = fVar4;
  targetPosition_00.z = fVar1;
  hitPoint.x = (float)uVar6;
  hitPoint.y = fVar5;
  fVar4 = CameraCollisionWithSliding_GetSlideVectorLength
                    (*pVVar2,newPos_00,targetPosition_00,0.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.y = 0.0;
  a.x = fVar1;
  a.z = fVar5;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&targetPosition,a,fVar4,(MethodInfo *)0x0);
  fVar5 = pVVar2->y;
  fVar1 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Single GetSlideVectorLength(Vector3, Vector3, Vector3, Single) */

float Assembly-CSharp.dll::CameraCollisionWithSliding::
      CameraCollisionWithSliding_GetSlideVectorLength
                (Vector3 slideVector,Vector3 newPos,Vector3 targetPosition,float baseDistance,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar1.y = targetPosition.y;
  VVar1.x = targetPosition.x;
  VVar1.z = targetPosition.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&targetPosition,VVar1,newPos,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pVVar2->z;
  uVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffe0,newPos,*pVVar2,method_00);
  uVar5._0_4_ = pVVar2->x;
  uVar5._4_4_ = pVVar2->y;
  fVar6 = pVVar2->z;
  targetPosition.y = (float)(undefined4)uVar5;
  targetPosition.z = (float)uVar5._4_4_;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    newPos.x = (float)&UNK_?;
    func_?();
    uVar5 = CONCAT44(targetPosition.z,targetPosition.y);
  }
  slideVector.y = (float)uVar5;
  slideVector.z = (float)((ulonglong)uVar5 >> 0x20);
  fVar7 = (float)(int)((ulonglong)(uint)newPos.z << 0x20);
  slideVector.x = (float)(int)(((ulonglong)(uint)newPos.z << 0x20) >> 0x20);
  VVar1 = (Vector3)CONCAT84(CONCAT44(slideVector.x,fVar7),newPos.x);
  slideVector.x = newPos.z;
  end.z = fVar6;
  end.x = (float)(int)uVar5;
  end.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_2(VVar1,end,(MethodInfo *)0x0);
  targetPosition.y = (float)method_00;
  targetPosition.x = fVar4;
  fVar4 = slideVector.z;
  targetPosition.z = slideVector.x;
  from.y = targetPosition.x;
  from.x = (float)uVar3;
  from.z = targetPosition.y;
  to.y = slideVector.y;
  to.x = slideVector.x;
  to.z = slideVector.z;
  targetPosition.z =
       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle(from,to,(MethodInfo *)0x0);
  fVar8 = (float10)func_?();
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  dVar9 = (double)(targetPosition.z * _UNK_?);
  func_?();
  dVar10 = (double)((float)fVar8 / (3.4647853e-29 / (float)dVar9));
  func_?();
  dVar10 = (double)((_UNK_? - ((float)dVar10 * _UNK_? + targetPosition.z)) *
                  _UNK_?);
  func_?();
  d = (float)dVar10 * (3.4647853e-29 / (float)dVar9);
  a.y = slideVector.y;
  a.x = slideVector.x;
  a.z = fVar4;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&slideVector,a,d,(MethodInfo *)0x0);
  a_00.y = (float)&UNK_?;
  a_00.x = fVar6;
  a_00.z = newPos.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&slideVector,a_00,*pVVar2,(MethodInfo *)0x0);
  start.y = (float)&UNK_?;
  start.x = fVar6;
  start.z = newPos.z;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_2
            (start,*pVVar2,(MethodInfo *)0x0);
  return d;
}


/* Vector3 GetSlideVectorXZPlane(Vector3, Vector3, Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::CameraCollisionWithSliding::
          CameraCollisionWithSliding_GetSlideVectorXZPlane
                    (Vector3 *__return_storage_ptr__,CameraCollisionWithSliding *this,Vector3 newPos
                    ,Vector3 hitPoint,Vector3 targetPosition,Vector3 cameraPosition,
                    float baseDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = targetPosition.z;
  targetPosition_01.y = targetPosition.y;
  targetPosition_01.x = targetPosition.x;
  VVar2.z = hitPoint.z;
  VVar2.x = hitPoint.x;
  VVar2.y = hitPoint.y;
  targetPosition_01.z = targetPosition.z;
  pVVar3 = CameraCollisionWithSliding_GetSlideDir
                     (&hitPoint,this,newPos,VVar2,targetPosition_01,cameraPosition,(MethodInfo *)0x0
                     );
  VVar2 = *pVVar3;
  targetPosition.y = 0.0;
  targetPosition.x = baseDistance;
  hitPoint._0_8_ = CONCAT44(0.0,baseDistance);
  hitPoint.z = fVar1;
  uVar4 = pVVar3->y;
  targetPosition_00.z = fVar1;
  targetPosition_00.x = baseDistance;
  targetPosition_00.y = 0.0;
  fVar1 = CameraCollisionWithSliding_GetSlideVectorLength
                    (*pVVar3,newPos,targetPosition_00,baseDistance,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&targetPosition,VVar2,fVar1,(MethodInfo *)0x0);
  fVar1 = pVVar3->z;
  *(undefined8 *)uVar4 = *(undefined8 *)pVVar3;
  *(float *)(uVar4 + 8) = fVar1;
  return (Vector3 *)uVar4;
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

