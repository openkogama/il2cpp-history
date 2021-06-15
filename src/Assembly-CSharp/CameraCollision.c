
/* Boolean Collide(Vector3 ByRef, Single, Single, Vector3, Vector3, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollision::CameraCollision_Collide
               (CameraCollision *this,Vector3 *newPos,float cameraRadius,float baseDistance,
               Vector3 targetPosition,Vector3 cameraPosition,HashSet_1_System_Int32_ *ignoreIDs,
               MethodInfo *method)

{
  func_?(&VStack_1,0,0x48);
  bVar2 = CameraCollision_Collide_1
                    (this,&VStack_1,newPos,cameraRadius,baseDistance,targetPosition,cameraPosition,
                     ignoreIDs,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean Collide(VoxelHit ByRef, Vector3 ByRef, Single, Single, Vector3, Vector3,
   HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollision::CameraCollision_Collide_1
               (CameraCollision *this,VoxelHit *hit,Vector3 *newPos,float cameraRadius,
               float baseDistance,Vector3 targetPosition,Vector3 cameraPosition,
               HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

{
  VVar1 = cameraPosition;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar2 = newPos;
  pVVar2->x = cameraPosition.x;
  pVVar2->y = cameraPosition.y;
  newPos->z = cameraPosition.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar3 = targetPosition.z;
  b.y = targetPosition.y;
  b.x = targetPosition.x;
  b.z = targetPosition.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&VStack_5,VVar1,b,(MethodInfo *)0x0);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  fVar8 = pVVar4->z;
  func_?(&stack0xffffffd8,0);
  func_?(&stack0x00000000,targetPosition.x,targetPosition.y,fVar3,CONCAT44(uVar7,uVar6),
                  fVar8,0);
  iVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  pVVar10 = hit;
  ray.m_Origin.y = (float)newPos;
  ray.m_Origin.x = (float)hit;
  ray.m_Origin.z = cameraRadius;
  ray.m_Direction.x = baseDistance;
  ray.m_Direction.y = targetPosition.x;
  ray.m_Direction.z = targetPosition.y;
  bVar11 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,cameraRadius,hit,baseDistance,ignoreIDs,1 << ((byte)iVar9 & 0x1f),
                     (MethodInfo *)0x0);
  if (bVar11 != 0) {
    fVar8 = pVVar10->distance;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fVar8) {
      fVar8 = (pVVar10->point).z;
      fVar3 = targetPosition.x;
      fVar12 = cameraRadius;
      fVar13 = baseDistance;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_01.y = fVar13;
      a_01.x = fVar12;
      a_01.z = fVar3;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xfffffff0,a_01,cameraRadius,(MethodInfo *)0x0);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&hit,VVar1,*pVVar4,(MethodInfo *)0x0);
      fVar3 = targetPosition.z;
      VVar1.y = (float)in_stack_14;
      VVar1.x = (float)in_stack_15;
      VVar1.z = fVar8;
      lineStart.y = targetPosition.y;
      lineStart.x = targetPosition.x;
      lineStart.z = targetPosition.z;
      MathFunctions::MathFunctions_DistancePointLine_2
                (VVar1,lineStart,*pVVar4,&targetPosition.y,(Vector3 *)&stack0x00000054,
                 &targetPosition.x,(MethodInfo *)0x0);
      if (in_stack_16 < 0.0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_u___0_0f,(MethodInfo *)0x0);
        pVVar2->x = targetPosition.x;
        pVVar2->y = targetPosition.y;
        pVVar2->z = fVar3;
        return 1;
      }
      if (in_stack_16 <= _UNK_?) {
        if (in_stack_17 < cameraRadius) {
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          dVar18 = (double)(cameraRadius * cameraRadius - in_stack_17 * in_stack_17);
          func_?();
          in_stack_19 = (float)dVar18;
        }
        fStack20 = in_stack_21._4_4_;
        pVVar4 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           ((Vector3 *)&stack0x00000094,
                            (InputToPlayerMovementAndroid *)&stack0x000000a4,(MethodInfo *)0x0);
        uStack22 = pVVar4->x;
        uStack23 = pVVar4->y;
        fVar8 = pVVar4->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z = fVar8;
        a.x = (float)uStack22;
        a.y = (float)uStack23;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0x000000a0,a,fStack20 - _UNK_?,
                            (MethodInfo *)0x0);
        uVar24 = pVVar4->y;
        a_00.z = in_stack_25;
        a_00._0_8_ = in_stack_26;
        in_stack_19 = (float)uVar24;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&stack0x000000b8,a_00,*pVVar4,(MethodInfo *)0x0);
        fVar3 = pVVar4->y;
        fVar8 = pVVar4->z;
        pVVar2->x = pVVar4->x;
        pVVar2->y = fVar3;
        pVVar2->z = fVar8;
        return 1;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_u___1_0f,(MethodInfo *)0x0);
    }
  }
  return 0;
}

