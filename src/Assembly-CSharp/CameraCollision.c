
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
  fVar4 = 0.0;
  fStack_5 = targetPosition.x;
  VStack_6.x = 0.0;
  VStack_6.y = 0.0;
  VStack_6.z = 0.0;
  newPos->z = cameraPosition.z;
  func_?(auStack_7,&stack0xffffff88,0);
  VStack_6.y = VStack_6.x;
  VStack_6.x = targetPosition.y;
  VStack_6.z = 0.0;
  puVar8 = (undefined8 *)func_?(auStack_7,&stack0xffffff94,0);
  fVar9 = *(float *)(puVar8 + 1);
  fStack_10 = (float)*puVar8;
  fStack_11 = (float)((ulonglong)*puVar8 >> 0x20);
  iVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  ray.m_Origin.y = fStack_10;
  ray.m_Origin.x = targetPosition.z;
  ray.m_Origin.z = fStack_11;
  ray.m_Direction.x = fVar9;
  ray.m_Direction.y = fStack_13;
  ray.m_Direction.z = fStack_14;
  bVar15 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,cameraRadius,hit,baseDistance,ignoreIDs,1 << ((byte)iVar12 & 0x1f),
                     (MethodInfo *)0x0);
  if ((bVar15 != 0) &&
     (fVar16 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,
     fVar16 < hit->distance || fVar16 == hit->distance)) {
    lineEnd.y = cameraPosition.y + fVar3 * cameraRadius;
    lineEnd.x = fStack_17 + (float)puStack_2 * cameraRadius;
    lineStart.y = fVar9;
    lineStart.x = fStack_11;
    lineStart.z = targetPosition.z;
    lineEnd.z = cameraPosition.z + fVar4 * cameraRadius;
    MathFunctions::MathFunctions_DistancePointLine_2
              (hit->point,lineStart,lineEnd,&fStack_5,&VStack_6,&fStack_18,(MethodInfo *)0x0);
    if (targetPosition.z < 0.0) {
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
    if (targetPosition.z <= _UNK_?) {
      if (cameraRadius <= fStack_10) {
        fVar3 = 0.0;
      }
      else {
        dVar19 = (double)(cameraRadius * cameraRadius - fStack_10 * fStack_10);
        if (dVar19 < 0.0) {
          func_?();
          fVar3 = (float)dVar19;
        }
        else {
          fVar3 = (float)SQRT(dVar19);
        }
      }
      fVar3 = fVar3 - _UNK_?;
      newPos->x = fStack_11 - in_stack_20 * fVar3;
      newPos->y = fVar9 - in_stack_21 * fVar3;
      newPos->z = fStack_13 - in_stack_22 * fVar3;
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

