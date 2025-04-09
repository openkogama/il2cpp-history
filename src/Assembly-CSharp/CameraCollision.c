
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_pointOnLineScalar___0_0f);
    func_?(&StringLiteral_pointOnLineScalar___1_0f);
    cRam_? = '\x01';
  }
  uVar1 = cameraPosition._0_8_;
  newPos->x = (float)(int)uVar1;
  newPos->y = (float)(int)((ulonglong)uVar1 >> 0x20);
  puStack_2 = (undefined *)cameraPosition.x;
  fVar3 = 0.0;
  VStack_4.x = targetPosition.x;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  fStack_5 = 0.0;
  newPos->z = cameraPosition.z;
  func_?(auStack_6,&stack0xffffff84,0);
  VStack_4.z = VStack_4.y;
  VStack_4.y = targetPosition.y;
  fStack_5 = 0.0;
  puVar7 = (undefined8 *)func_?(auStack_6,&stack0xffffff90,0);
  fVar8 = *(float *)(puVar7 + 1);
  fStack_9 = (float)*puVar7;
  fStack_10 = (float)((ulonglong)*puVar7 >> 0x20);
  iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  ray.m_Origin.y = fStack_9;
  ray.m_Origin.x = targetPosition.z;
  ray.m_Origin.z = fStack_10;
  ray.m_Direction.x = fVar8;
  ray.m_Direction.y = (float)(int)uStack_12;
  ray.m_Direction.z = (float)((ulonglong)uStack_12 >> 0x20);
  bVar13 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,cameraRadius,hit,baseDistance,ignoreIDs,1 << ((byte)iVar11 & 0x1f),
                     (MethodInfo *)0x0);
  if ((bVar13 != 0) &&
     (fVar14 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,
     fVar14 < hit->distance || fVar14 == hit->distance)) {
    lineStart.y = fVar8;
    lineStart.x = fStack_10;
    lineStart.z = targetPosition.z;
    lineEnd.y = cameraPosition.y + (float)puStack_2 * cameraRadius;
    lineEnd.x = fStack_15 + fStack_5 * cameraRadius;
    lineEnd.z = cameraPosition.z + fVar3 * cameraRadius;
    MathFunctions::MathFunctions_DistancePointLine_2
              (hit->point,lineStart,lineEnd,&fStack_16,&VStack_4,&fStack_17,(MethodInfo *)0x0);
    if (targetPosition.y < 0.0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_pointOnLineScalar___0_0f,(MethodInfo *)0x0);
      newPos->x = (float)(int)uVar1;
      newPos->y = (float)(int)((ulonglong)uVar1 >> 0x20);
      newPos->z = targetPosition.z;
      return 1;
    }
    if (targetPosition.y <= _UNK_?) {
      if (cameraRadius <= targetPosition.z) {
        fVar3 = 0.0;
      }
      else {
        dVar18 = (double)(cameraRadius * cameraRadius - targetPosition.z * targetPosition.z);
        if (dVar18 < 0.0) {
          func_?();
          fVar3 = (float)dVar18;
        }
        else {
          fVar3 = (float)SQRT(dVar18);
        }
      }
      fVar3 = fVar3 - _UNK_?;
      newPos->x = fStack_9 - in_stack_19 * fVar3;
      newPos->y = fStack_10 - in_stack_20 * fVar3;
      newPos->z = fVar8 - in_stack_21 * fVar3;
      return 1;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_pointOnLineScalar___1_0f,(MethodInfo *)0x0);
  }
  return 0;
}

