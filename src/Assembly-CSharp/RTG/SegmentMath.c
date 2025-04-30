
/* Boolean Is2DPointOnSegment(Vector2, Vector2, Vector2, SegmentEpsilon) */

bool Assembly-CSharp.dll::RTG::SegmentMath::SegmentMath_Is2DPointOnSegment
               (Vector2 point,Vector2 startPoint,Vector2 endPoint,SegmentEpsilon epsilon,
               MethodInfo *method)

{
  fVar1 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,startPoint,endPoint,(MethodInfo *)0x0);
  return fVar1 <= epsilon._ptOnSegmentEps;
}


/* Boolean Is3DPointOnSegment(Vector3, Vector3, Vector3, SegmentEpsilon) */

bool Assembly-CSharp.dll::RTG::SegmentMath::SegmentMath_Is3DPointOnSegment
               (Vector3 point,Vector3 startPoint,Vector3 endPoint,SegmentEpsilon epsilon,
               MethodInfo *method)

{
  fVar1 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point,startPoint,endPoint,(MethodInfo *)0x0);
  return fVar1 <= epsilon._ptOnSegmentEps;
}


/* Vector3 ProjectPtOnSegment(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::SegmentMath::SegmentMath_ProjectPtOnSegment
                    (Vector3 *__return_storage_ptr__,Vector3 point,Vector3 startPoint,
                    Vector3 endPoint,MethodInfo *method)

{
  fStack_1 = endPoint.z - startPoint.z;
  value.y = endPoint.y - startPoint.y;
  value.x = endPoint.x - startPoint.x;
  value.z = fStack_1;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (aVStack_3,value,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  fVar7 = (float)uVar5 * (point.y - startPoint.y) + (float)uVar4 * (point.x - startPoint.x) +
          fVar6 * (point.z - startPoint.z);
  __return_storage_ptr__->x = startPoint.x + (float)uVar4 * fVar7;
  __return_storage_ptr__->y = startPoint.y + (float)uVar5 * fVar7;
  __return_storage_ptr__->z = startPoint.z + fVar6 * fVar7;
  return __return_storage_ptr__;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, SegmentEpsilon) */

bool Assembly-CSharp.dll::RTG::SegmentMath::SegmentMath_Raycast
               (Ray ray,float *t,Vector3 startPoint,Vector3 endPoint,SegmentEpsilon epsilon,
               MethodInfo *method)

{
  t_00 = t;
  bVar1 = CylinderMath::CylinderMath_Raycast
                    (ray,t,startPoint,endPoint,epsilon._raycastEps,(CylinderEpsilon)0x0,
                     (MethodInfo *)0x0);
  if (bVar1 == 0) {
    pfStack_2 = (float *)0x0;
    *t_00 = 0.0;
    fVar3 = ray.m_Origin.x - startPoint.x;
    fVar4 = ray.m_Origin.y - startPoint.y;
    fVar5 = ray.m_Origin.z - startPoint.z;
    startPoint.y = (float)&pfStack_2;
    startPoint.z = 0.0;
    startPoint.x = (float)&t;
    fVar6 = ray.m_Direction.y * fVar4 + ray.m_Direction.x * fVar3 + ray.m_Direction.z * fVar5;
    t = (float *)((fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) -
                 (epsilon._raycastEps + 0.0) * (epsilon._raycastEps + 0.0));
    bVar1 = MathEx::MathEx_SolveQuadratic
                      (ray.m_Direction.x * ray.m_Direction.x + ray.m_Direction.y * ray.m_Direction.y
                       + ray.m_Direction.z * ray.m_Direction.z,fVar6 + fVar6,(float)t,
                       (float *)startPoint.x,(float *)startPoint.y,(MethodInfo *)0x0);
    if ((bVar1 == 0) || (((float)t < 0.0 && (t = pfStack_2, (float)pfStack_2 < 0.0)))) {
      startPoint.z = (float)t_00;
      t = (float *)&UNK_?;
      startPoint.x = ray.m_Origin.y;
      startPoint.y = ray.m_Origin.z;
      ray_00.m_Direction.x = (float)&UNK_?;
      ray_00.m_Origin = ray.m_Origin;
      ray_00.m_Direction.y = ray.m_Origin.y;
      ray_00.m_Direction.z = ray.m_Origin.z;
      bVar1 = SphereMath::SphereMath_Raycast_1
                        (ray_00,t_00,endPoint,epsilon._raycastEps,(SphereEpsilon)0x0,
                         (MethodInfo *)0x0);
      return bVar1;
    }
    *t_00 = (float)t;
  }
  return 1;
}

