
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
  RStack_1.m_Origin.x = 0.0;
  RStack_1.m_Origin.y = 0.0;
  RStack_1.m_Origin.z = 0.0;
  RStack_1.m_Direction.x = 0.0;
  uVar2 = 0;
  fVar3 = 0.0;
  newPos->x = (float)(int)cameraPosition._0_8_;
  newPos->y = (float)(int)((ulonglong)cameraPosition._0_8_ >> 0x20);
  uVar4 = 0;
  fVar5 = cameraPosition.z - targetPosition.z;
  newPos->z = cameraPosition.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffff8c,(MethodInfo *)0x0);
  origin.y = targetPosition.y;
  origin.x = (float)uVar4;
  origin.z = targetPosition.z;
  direction.y = (float)uVar2;
  direction.x = fVar5;
  direction.z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
            (&RStack_1,origin,direction,(MethodInfo *)0x0);
  iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  ray.m_Origin.y = (float)newPos;
  ray.m_Origin.x = (float)hit;
  ray.m_Origin.z = cameraRadius;
  ray.m_Direction.x = baseDistance;
  ray.m_Direction.y = targetPosition.x;
  ray.m_Direction.z = targetPosition.y;
  bVar7 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,cameraRadius,hit,baseDistance,ignoreIDs,1 << ((byte)iVar6 & 0x1f),
                     (MethodInfo *)0x0);
  if ((bVar7 != 0) &&
     (fVar5 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,
     fVar5 < hit->distance || fVar5 == hit->distance)) {
    lineStart.y = baseDistance;
    lineStart.x = cameraRadius;
    lineStart.z = targetPosition.z;
    lineEnd.y = cameraPosition.y + RStack_1.m_Direction.y * cameraRadius;
    lineEnd.x = targetPosition.z + RStack_1.m_Direction.x * cameraRadius;
    lineEnd.z = cameraPosition.z + RStack_1.m_Direction.z * cameraRadius;
    MathFunctions::MathFunctions_DistancePointLine_2
              (hit->point,lineStart,lineEnd,&RStack_1.m_Origin.y,(Vector3 *)&stack0xfffffff8,
               (float *)&RStack_1,(MethodInfo *)0x0);
    if (baseDistance < 0.0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_u___0_0f,(MethodInfo *)0x0);
      newPos->x = (float)in_stack_8;
      newPos->y = (float)in_stack_9;
      newPos->z = targetPosition.z;
      return 1;
    }
    if (baseDistance <= _UNK_?) {
      if ((targetPosition.x < cameraRadius) &&
         (cameraRadius * cameraRadius - targetPosition.x * targetPosition.x < 0.0)) {
        func_?();
      }
      uStack10 = CONCAT44(ignoreIDs,cameraPosition.z);
      pMStack11 = method;
      RStack_1.m_Direction.z = (float)&UNK_?;
      pRVar12 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                         ((Regex_CachedCodeEntryKey *)&stack0x00000044,
                          (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0x0000006c,(MethodInfo *)0x0);
      fVar5 = cameraPosition.y - _UNK_?;
      uVar13 = pRVar12->_options;
      uVar14 = pRVar12->_cultureKey;
      pSVar15 = pRVar12->_pattern;
      newPos->x = in_stack_16 - (float)uVar13 * fVar5;
      newPos->y = (float)in_stack_17 - (float)uVar14 * fVar5;
      newPos->z = (float)in_stack_8 - (float)pSVar15 * fVar5;
      return 1;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_u___1_0f,(MethodInfo *)0x0);
  }
  return 0;
}

