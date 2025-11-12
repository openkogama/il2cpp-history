
/* Boolean Is2DPointOnSegment(Vector2, Vector2, Vector2, SegmentEpsilon) */

bool Assembly-CSharp.dll::RTG::SegmentMath::SegmentMath_Is2DPointOnSegment
               (Vector2 point,Vector2 startPoint,Vector2 endPoint,SegmentEpsilon epsilon,
               MethodInfo *method)

{
  fVar1 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,startPoint,endPoint,(MethodInfo *)0x0);
  uStack_2 = epsilon._ptOnSegmentEps;
  return fVar1 <= uStack_2;
}


/* Boolean Is3DPointOnSegment(Vector3, Vector3, Vector3, SegmentEpsilon) */

bool Assembly-CSharp.dll::RTG::SegmentMath::SegmentMath_Is3DPointOnSegment
               (Vector3 *point,Vector3 *startPoint,Vector3 *endPoint,SegmentEpsilon epsilon,
               MethodInfo *method)

{
  VStack_1.x = endPoint->x;
  VStack_1.y = endPoint->y;
  VStack_1.z = endPoint->z;
  VStack_2.x = startPoint->x;
  VStack_2.y = startPoint->y;
  VStack_2.z = startPoint->z;
  aVStack_3[0].x = point->x;
  aVStack_3[0].y = point->y;
  aVStack_3[0].z = point->z;
  fVar4 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                    (aVStack_3,&VStack_2,&VStack_1,(MethodInfo *)0x0);
  fStack_5 = epsilon._ptOnSegmentEps;
  return fVar4 <= fStack_5;
}


/* Vector3 ProjectPtOnSegment(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::SegmentMath::SegmentMath_ProjectPtOnSegment
                    (Vector3 *__return_storage_ptr__,Vector3 *point,Vector3 *startPoint,
                    Vector3 *endPoint,MethodInfo *method)

{
  uVar1 = endPoint->x;
  uVar2 = endPoint->y;
  uVar3 = startPoint->x;
  uVar4 = startPoint->y;
  fVar5 = endPoint->z - startPoint->z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  if (_UNK_? < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,
                         ((float)uVar1 - (float)uVar3) / fVar8);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar9->zeroVector).x;
    uStack_6._4_4_ = (pVVar9->zeroVector).y;
    fVar5 = (pVVar9->zeroVector).z;
  }
  uVar10 = startPoint->x;
  uVar11 = startPoint->y;
  uVar12 = point->x;
  uVar13 = point->y;
  fVar14 = ((float)uVar13 - (float)uVar11) * uStack_6._4_4_ +
           ((float)uVar12 - (float)uVar10) * (float)uStack_6 + (point->z - startPoint->z) * fVar5;
  uVar15 = startPoint->x;
  uVar16 = startPoint->y;
  fVar8 = startPoint->z;
  __return_storage_ptr__->x = fVar14 * (float)uStack_6 + (float)uVar15;
  __return_storage_ptr__->y = fVar14 * uStack_6._4_4_ + (float)uVar16;
  __return_storage_ptr__->z = fVar14 * fVar5 + fVar8;
  return __return_storage_ptr__;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, SegmentEpsilon) */

bool Assembly-CSharp.dll::RTG::SegmentMath::SegmentMath_Raycast
               (Ray *ray,float *t,Vector3 *startPoint,Vector3 *endPoint,SegmentEpsilon epsilon,
               MethodInfo *method)

{
  VStack_1.x = startPoint->x;
  VStack_1.y = startPoint->y;
  uVar2 = endPoint->x;
  uVar3 = endPoint->y;
  VStack_4.z = endPoint->z - startPoint->z;
  VStack_4.y = (float)uVar3 - VStack_1.y;
  VStack_4.x = (float)uVar2 - VStack_1.x;
  cylinderHeight = (float)FUN_?(&VStack_4);
  VStack_4.x = endPoint->x;
  VStack_4.y = endPoint->y;
  VStack_4.z = endPoint->z;
  aRStack_5[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_5[0].m_Direction.z = (ray->m_Direction).z;
  VStack_1.x = startPoint->x;
  VStack_1.y = startPoint->y;
  aRStack_5[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_5[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_5[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_1.z = startPoint->z;
  bVar6 = CylinderMath::CylinderMath_Raycast_1
                    (aRStack_5,t,&VStack_1,&VStack_4,epsilon._raycastEps,cylinderHeight,
                     (CylinderEpsilon)0x0,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    VStack_1.x = startPoint->x;
    VStack_1.y = startPoint->y;
    aRStack_5[0].m_Direction.y = (ray->m_Direction).y;
    aRStack_5[0].m_Direction.z = (ray->m_Direction).z;
    aRStack_5[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_5[0].m_Origin.y = (ray->m_Origin).y;
    aRStack_5[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    VStack_1.z = startPoint->z;
    bVar6 = SphereMath::SphereMath_Raycast_1
                      (aRStack_5,t,&VStack_1,epsilon._raycastEps,(SphereEpsilon)0x0,
                       (MethodInfo *)0x0);
    if (bVar6 == 0) {
      VStack_1.x = endPoint->x;
      VStack_1.y = endPoint->y;
      aRStack_5[0].m_Direction.y = (ray->m_Direction).y;
      aRStack_5[0].m_Direction.z = (ray->m_Direction).z;
      VStack_1.z = endPoint->z;
      aRStack_5[0].m_Origin.x = (ray->m_Origin).x;
      aRStack_5[0].m_Origin.y = (ray->m_Origin).y;
      aRStack_5[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      bVar6 = SphereMath::SphereMath_Raycast_1
                        (aRStack_5,t,&VStack_1,epsilon._raycastEps,(SphereEpsilon)0x0,
                         (MethodInfo *)0x0);
      return bVar6;
    }
  }
  return 1;
}

