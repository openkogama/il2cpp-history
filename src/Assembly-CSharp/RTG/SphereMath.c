
/* List`1[UnityEngine.Vector3] CalcRightUpExtents(Vector3, Single, Vector3, Vector3) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::SphereMath::SphereMath_CalcRightUpExtents
          (Vector3 sphereCenter,float sphereRadius,Vector3 right,Vector3 up,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,4,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_)
  ;
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    func_?(this,CONCAT44(sphereCenter.y - right.y * sphereRadius,
                                  sphereCenter.x - right.x * sphereRadius),
                    sphereCenter.z - right.z * sphereRadius,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(sphereCenter.y + up.y * sphereRadius,
                                  sphereCenter.x + up.x * sphereRadius),
                    sphereCenter.z + up.z * sphereRadius,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(sphereCenter.y + right.y * sphereRadius,
                                  sphereCenter.x + right.x * sphereRadius),
                    sphereCenter.z + right.z * sphereRadius,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(sphereCenter.y - up.y * sphereRadius,
                                  sphereCenter.x - up.x * sphereRadius),
                    sphereCenter.z - up.z * sphereRadius,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    return (List_1_UnityEngine_Vector3_ *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_UnityEngine_Vector3_ *)(*pcVar1)();
  return pLVar2;
}


/* Boolean ContainsPoint(Vector3, Vector3, Single, SphereEpsilon) */

bool Assembly-CSharp.dll::RTG::SphereMath::SphereMath_ContainsPoint
               (Vector3 point,Vector3 sphereCenter,float sphereRadius,SphereEpsilon epsilon,
               MethodInfo *method)

{
  return (point.x - sphereCenter.x) * (point.x - sphereCenter.x) +
         (point.y - sphereCenter.y) * (point.y - sphereCenter.y) +
         (point.z - sphereCenter.z) * (point.z - sphereCenter.z) <=
         (epsilon._radiusEps + sphereRadius) * (epsilon._radiusEps + sphereRadius);
}


/* Boolean Raycast(Ray, Vector3, Single, SphereEpsilon) */

bool Assembly-CSharp.dll::RTG::SphereMath::SphereMath_Raycast
               (Ray ray,Vector3 sphereCenter,float sphereRadius,SphereEpsilon epsilon,
               MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fVar3 = ray.m_Origin.x - sphereCenter.x;
  fVar4 = ray.m_Origin.y - sphereCenter.y;
  fVar5 = ray.m_Origin.z - sphereCenter.z;
  fVar6 = ray.m_Direction.x * fVar3 + ray.m_Direction.y * fVar4 + ray.m_Direction.z * fVar5;
  bVar7 = MathEx::MathEx_SolveQuadratic
                    (ray.m_Direction.x * ray.m_Direction.x + ray.m_Direction.y * ray.m_Direction.y +
                     ray.m_Direction.z * ray.m_Direction.z,fVar6 + fVar6,
                     (fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) -
                     (epsilon._radiusEps + sphereRadius) * (epsilon._radiusEps + sphereRadius),
                     &fStack_1,&fStack_2,(MethodInfo *)0x0);
  if ((bVar7 != 0) && ((0.0 <= fStack_1 || (0.0 <= fStack_2)))) {
    return 1;
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, SphereEpsilon) */

bool Assembly-CSharp.dll::RTG::SphereMath::SphereMath_Raycast_1
               (Ray ray,float *t,Vector3 sphereCenter,float sphereRadius,SphereEpsilon epsilon,
               MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  *t = 0.0;
  fVar3 = ray.m_Origin.x - sphereCenter.x;
  fVar4 = ray.m_Origin.y - sphereCenter.y;
  fVar5 = ray.m_Origin.z - sphereCenter.z;
  fVar6 = ray.m_Direction.x * fVar3 + ray.m_Direction.y * fVar4 + ray.m_Direction.z * fVar5;
  bVar7 = MathEx::MathEx_SolveQuadratic
                    (ray.m_Direction.x * ray.m_Direction.x + ray.m_Direction.y * ray.m_Direction.y +
                     ray.m_Direction.z * ray.m_Direction.z,fVar6 + fVar6,
                     (fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) -
                     (epsilon._radiusEps + sphereRadius) * (epsilon._radiusEps + sphereRadius),
                     &fStack_1,&fStack_2,(MethodInfo *)0x0);
  if ((bVar7 != 0) && ((0.0 <= fStack_1 || (fStack_1 = fStack_2, 0.0 <= fStack_2)))) {
    *t = fStack_1;
    return 1;
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Single ByRef, Vector3, Single, SphereEpsilon) */

bool Assembly-CSharp.dll::RTG::SphereMath::SphereMath_Raycast_2
               (Ray ray,float *t0,float *t1,Vector3 sphereCenter,float sphereRadius,
               SphereEpsilon epsilon,MethodInfo *method)

{
  *t1 = 0.0;
  *t0 = 0.0;
  fVar1 = ray.m_Origin.x - sphereCenter.x;
  fVar2 = ray.m_Origin.y - sphereCenter.y;
  fVar3 = ray.m_Origin.z - sphereCenter.z;
  fVar4 = ray.m_Direction.x * fVar1 + ray.m_Direction.y * fVar2 + ray.m_Direction.z * fVar3;
  bVar5 = MathEx::MathEx_SolveQuadratic
                    (ray.m_Direction.x * ray.m_Direction.x + ray.m_Direction.y * ray.m_Direction.y +
                     ray.m_Direction.z * ray.m_Direction.z,fVar4 + fVar4,
                     (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) -
                     (epsilon._radiusEps + sphereRadius) * (epsilon._radiusEps + sphereRadius),t0,t1
                     ,(MethodInfo *)0x0);
  if ((bVar5 != 0) && ((0.0 < *t0 || *t0 == 0.0 || (0.0 < *t1 || *t1 == 0.0)))) {
    fVar4 = *t0;
    if (*t1 <= fVar4 && fVar4 != *t1) {
      *t0 = *t1;
      *t1 = fVar4;
    }
    if (*t0 <= 0.0 && *t0 != 0.0) {
      *t0 = *t1;
    }
    return 1;
  }
  return 0;
}

