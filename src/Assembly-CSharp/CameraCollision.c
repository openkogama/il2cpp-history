
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
    func_?(&StringLiteral_u___0_0f);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_u___1_0f);
    cRam_? = '\x01';
  }
  newPos->x = (float)(int)cameraPosition._0_8_;
  newPos->y = (float)(int)((ulonglong)cameraPosition._0_8_ >> 0x20);
  fStack_1 = cameraPosition.x;
  fStack_2 = 0.0;
  puStack_3 = (undefined *)0x0;
  fStack_4 = targetPosition.x;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  newPos->z = cameraPosition.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffff7c,(MethodInfo *)0x0);
  fStack_1 = fStack_7;
  fStack_7 = targetPosition.y;
  fStack_2 = 0.0;
  puVar8 = (undefined8 *)func_?(auStack_9,&stack0xffffff9c,0);
  uVar10 = *(undefined4 *)(puVar8 + 1);
  fStack_11 = (float)*puVar8;
  uStack_12 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  iVar13 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  ray.m_Origin.y = fStack_11;
  ray.m_Origin.x = targetPosition.z;
  ray.m_Origin.z = (float)uStack_12;
  ray.m_Direction.x = (float)uVar10;
  ray.m_Direction.y = (float)uStack_14;
  ray.m_Direction.z = unaff_EBP;
  bVar15 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,cameraRadius,hit,baseDistance,ignoreIDs,1 << ((byte)iVar13 & 0x1f),
                     (MethodInfo *)0x0);
  if ((bVar15 != 0) &&
     (fVar16 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,
     fVar16 < hit->distance || fVar16 == hit->distance)) {
    lineStart.y = (float)uVar10;
    lineStart.x = (float)uStack_12;
    lineStart.z = targetPosition.z;
    lineEnd.y = cameraPosition.y + fStack_1 * cameraRadius;
    lineEnd.x = unaff_retaddr + fStack_7 * cameraRadius;
    lineEnd.z = cameraPosition.z + fStack_2 * cameraRadius;
    MathFunctions::MathFunctions_DistancePointLine_2
              (hit->point,lineStart,lineEnd,&fStack_6,(Vector3 *)&puStack_3,&fStack_5,
               (MethodInfo *)0x0);
    if (targetPosition.z < 0.0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_u___0_0f,(MethodInfo *)0x0);
      newPos->x = cameraPosition.z;
      newPos->y = (float)ignoreIDs;
      newPos->z = targetPosition.z;
      return 1;
    }
    if (targetPosition.z <= _UNK_?) {
      if (cameraRadius <= fStack_11) {
        fVar16 = 0.0;
      }
      else {
        dVar17 = (double)(cameraRadius * cameraRadius - fStack_11 * fStack_11);
        if (dVar17 < 0.0) {
          func_?();
          fVar16 = (float)dVar17;
        }
        else {
          fVar16 = (float)SQRT(dVar17);
        }
      }
      fVar16 = fVar16 - _UNK_?;
      newPos->x = unaff_EBP - in_stack_18 * fVar16;
      newPos->y = unaff_retaddr - in_stack_19 * fVar16;
      newPos->z = (float)this - in_stack_20 * fVar16;
      return 1;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_u___1_0f,(MethodInfo *)0x0);
  }
  return 0;
}

