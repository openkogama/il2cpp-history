
/* List`1[UnityEngine.Vector3] CalcExtentPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_CalcExtentPoints
          (Vector3 center,float cylinderRadius,Quaternion cylinderRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,cylinderRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  pMStack_5 = (MethodInfo *)pVVar1->z;
  fStack_6 = (float)uVar3;
  fStack_7 = (float)uVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,cylinderRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  uStack_8._0_4_ = (undefined *)pVVar1->x;
  uStack_8._4_4_ = (List_1_UnityEngine_Vector3_ *)pVVar1->y;
  fStack_9 = pVVar1->z;
  pLVar10 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  VStack_2.x = center.x + fStack_6 * cylinderRadius;
  VStack_2.y = center.y + fStack_7 * cylinderRadius;
  VStack_2.z = center.z + (float)pMStack_5 * cylinderRadius;
  if (pLVar10 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_8._0_4_ = &UNK_?;
    fStack_9 = VStack_2.x;
    fStack_6 = VStack_2.y;
    fStack_7 = VStack_2.z;
    uStack_8._4_4_ = pLVar10;
    func_?();
    VStack_2.z = fStack_9 * cylinderRadius;
    fStack_9 = center.x - (float)(undefined *)uStack_8 * cylinderRadius;
    fStack_6 = center.y - (float)uStack_8._4_4_ * cylinderRadius;
    VStack_2.z = center.z - VStack_2.z;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_8 = CONCAT44(pLVar10,&UNK_?);
    fStack_7 = VStack_2.z;
    func_?();
    VStack_2.z = center.z - (float)pMStack_5 * cylinderRadius;
    fStack_9 = center.x - fStack_6 * cylinderRadius;
    fStack_6 = center.y - fStack_7 * cylinderRadius;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_8._0_4_ = &UNK_?;
    fStack_7 = VStack_2.z;
    uStack_8._4_4_ = pLVar10;
    func_?();
    VStack_2.z = fStack_9 * cylinderRadius;
    fStack_9 = center.x + (float)(undefined *)uStack_8 * cylinderRadius;
    fStack_6 = center.y + (float)uStack_8._4_4_ * cylinderRadius;
    VStack_2.z = center.z + VStack_2.z;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_8 = CONCAT44(pLVar10,&UNK_?);
    fStack_7 = VStack_2.z;
    func_?();
    return pLVar10;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
  return pLVar10;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_ContainsPoint
               (Vector3 point,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,float cylinderRadius,
               CylinderEpsilon epsilon,MethodInfo *method)

{
  VStack_1.z = cylinderAxisPt1.z - cylinderAxisPt0.z;
  uStack_2 = CONCAT44(cylinderAxisPt1.y - cylinderAxisPt0.y,cylinderAxisPt1.x - cylinderAxisPt0.x);
  fStack_3 = VStack_1.z;
  fVar4 = (float10)func_?(&uStack_2,0,cylinderAxisPt1.x,0,0,0,cylinderAxisPt0.x,0,0,0);
  VStack_1.z = cylinderAxisPt1.z - cylinderAxisPt0.z;
  fStack_5 = (float)fVar4;
  value.y = cylinderAxisPt1.y - cylinderAxisPt0.y;
  value.x = cylinderAxisPt1.x - cylinderAxisPt0.x;
  value.z = VStack_1.z;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_1,value,(MethodInfo *)0x0);
  uVar7 = pVVar6->x;
  uVar8 = pVVar6->y;
  fVar9 = (float)uVar7 * (point.x - cylinderAxisPt0.x) +
          (float)uVar8 * (point.y - cylinderAxisPt0.y) + pVVar6->z * (point.z - cylinderAxisPt0.z);
  if (((float)((uint)epsilon._vertEps ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <= fVar9) &&
     (fVar9 <= epsilon._vertEps + fStack_5)) {
    uVar10 = pVVar6->x;
    uVar11 = pVVar6->y;
    VStack_1.z = (cylinderAxisPt0.z + pVVar6->z * fVar9) - point.z;
    uStack_2 = CONCAT44((cylinderAxisPt0.y + (float)uVar11 * fVar9) - point.y,
                         (cylinderAxisPt0.x + (float)uVar10 * fVar9) - point.x);
    fStack_3 = VStack_1.z;
    fVar4 = (float10)func_?(&uStack_2,0);
    return (float)fVar4 <= epsilon._hrzEps + cylinderRadius;
  }
  return 0;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Single, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_ContainsPoint_1
               (Vector3 point,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,float cylinderRadius,
               float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

{
  fStack_1 = cylinderAxisPt1.z - cylinderAxisPt0.z;
  value.y = cylinderAxisPt1.y - cylinderAxisPt0.y;
  value.x = cylinderAxisPt1.x - cylinderAxisPt0.x;
  value.z = fStack_1;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_3,value,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = (float)uVar4 * (point.x - cylinderAxisPt0.x) +
          (float)uVar5 * (point.y - cylinderAxisPt0.y) + pVVar2->z * (point.z - cylinderAxisPt0.z);
  if (((float)((uint)epsilon._vertEps ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <= fVar6) &&
     (fVar6 <= epsilon._vertEps + cylinderHeight)) {
    uVar7 = pVVar2->x;
    uVar8 = pVVar2->y;
    VStack_3.z = (cylinderAxisPt0.z + pVVar2->z * fVar6) - point.z;
    uStack_9 = CONCAT44((cylinderAxisPt0.y + (float)uVar8 * fVar6) - point.y,
                         (cylinderAxisPt0.x + (float)uVar7 * fVar6) - point.x);
    fStack_1 = VStack_3.z;
    fVar10 = (float10)func_?(&uStack_9,0);
    return (float)fVar10 <= epsilon._hrzEps + cylinderRadius;
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_Raycast
               (Ray ray,float *t,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,
               float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

{
  fStack_1 = cylinderAxisPt1.z - cylinderAxisPt0.z;
  uStack_2 = CONCAT44(cylinderAxisPt1.y - cylinderAxisPt0.y,cylinderAxisPt1.x - cylinderAxisPt0.x);
  fVar3 = (float10)func_?(&uStack_2,0,cylinderAxisPt0.x,0,0,0,cylinderAxisPt1.x,0,0,0);
  fStack_4 = (float)fVar3;
  cylinderAxisPt1_00.y = cylinderAxisPt1.y;
  cylinderAxisPt1_00.x = cylinderAxisPt1.x;
  cylinderAxisPt0_00.y = cylinderAxisPt0.y;
  cylinderAxisPt0_00.x = cylinderAxisPt0.x;
  cylinderAxisPt0_00.z = cylinderAxisPt0.z;
  cylinderAxisPt1_00.z = cylinderAxisPt1.z;
  bVar5 = CylinderMath_Raycast_1
                    (ray,t,cylinderAxisPt0_00,cylinderAxisPt1_00,cylinderRadius,fStack_4,epsilon,
                     (MethodInfo *)0x0);
  return bVar5;
}


/* Boolean RaycastNoCaps(Ray, Single ByRef, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_RaycastNoCaps
               (Ray ray,float *t,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,
               float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

{
  fStack_1 = cylinderAxisPt1.z - cylinderAxisPt0.z;
  uStack_2 = CONCAT44(cylinderAxisPt1.y - cylinderAxisPt0.y,cylinderAxisPt1.x - cylinderAxisPt0.x);
  fVar3 = (float10)func_?(&uStack_2,0,cylinderAxisPt0.x,0,0,0,cylinderAxisPt1.x,0,0,0);
  fStack_4 = (float)fVar3;
  cylinderAxisPt1_00.y = cylinderAxisPt1.y;
  cylinderAxisPt1_00.x = cylinderAxisPt1.x;
  cylinderAxisPt0_00.y = cylinderAxisPt0.y;
  cylinderAxisPt0_00.x = cylinderAxisPt0.x;
  cylinderAxisPt0_00.z = cylinderAxisPt0.z;
  cylinderAxisPt1_00.z = cylinderAxisPt1.z;
  bVar5 = CylinderMath_RaycastNoCaps_1
                    (ray,t,cylinderAxisPt0_00,cylinderAxisPt1_00,cylinderRadius,fStack_4,epsilon,
                     (MethodInfo *)0x0);
  return bVar5;
}


/* Boolean RaycastNoCaps(Ray, Single ByRef, Vector3, Vector3, Single, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_RaycastNoCaps_1
               (Ray ray,float *t,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,
               float cylinderRadius,float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  *t = 0.0;
  value.y = cylinderAxisPt1.y - cylinderAxisPt0.y;
  value.x = cylinderAxisPt1.x - cylinderAxisPt0.x;
  value.z = cylinderAxisPt1.z - cylinderAxisPt0.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffc8,value,(MethodInfo *)0x0);
  uVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  fVar6 = epsilon._vertEps * _UNK_? + cylinderHeight;
  if (_UNK_? <= fVar6) {
    uVar7 = pVVar3->x;
    uVar8 = pVVar3->y;
    fVar9 = cylinderAxisPt0.z - epsilon._vertEps * fVar5;
    fVar10 = cylinderAxisPt0.x - epsilon._vertEps * (float)uVar7;
    fVar11 = cylinderAxisPt0.y - epsilon._vertEps * (float)uVar8;
    uVar12 = pVVar3->x;
    uVar13 = pVVar3->y;
    fVar14 = ray.m_Direction.y * fVar5 - ray.m_Direction.z * (float)uVar13;
    fVar15 = ray.m_Direction.z * (float)uVar12 - ray.m_Direction.x * fVar5;
    fVar16 = ray.m_Direction.x * (float)uVar13 - ray.m_Direction.y * (float)uVar12;
    fVar17 = ray.m_Origin.x - fVar10;
    fVar18 = ray.m_Origin.y - fVar11;
    fVar19 = ray.m_Origin.z - fVar9;
    uVar20 = pVVar3->x;
    uVar21 = pVVar3->y;
    fVar22 = fVar5 * fVar18 - (float)uVar21 * fVar19;
    fVar23 = (float)uVar21 * fVar17 - (float)uVar20 * fVar18;
    fVar18 = (float)uVar20 * fVar19 - fVar5 * fVar17;
    fVar19 = fVar14 * fVar22 + fVar15 * fVar18 + fVar16 * fVar23;
    bVar24 = MathEx::MathEx_SolveQuadratic
                      (fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16,fVar19 + fVar19,
                       (fVar22 * fVar22 + fVar18 * fVar18 + fVar23 * fVar23) -
                       (epsilon._hrzEps + cylinderRadius) * (epsilon._hrzEps + cylinderRadius),
                       &fStack_1,&fStack_2,(MethodInfo *)0x0);
    if ((bVar24 != 0) && ((0.0 <= fStack_1 || (fStack_1 = fStack_2, 0.0 <= fStack_2)))) {
      *t = fStack_1;
      fVar5 = ((ray.m_Origin.x + ray.m_Direction.x * fStack_1) - fVar10) * 0.0 +
               (float)uVar4 * ((ray.m_Origin.y + ray.m_Direction.y * fStack_1) - fVar11) +
               fVar5 * ((ray.m_Origin.z + ray.m_Direction.z * fStack_1) - fVar9);
      if ((0.0 <= fVar5) && (fVar5 <= fVar6)) {
        return 1;
      }
      *t = 0.0;
    }
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Single, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_Raycast_1
               (Ray ray,float *t,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,
               float cylinderRadius,float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

{
  pfVar1 = t;
  fVar2 = epsilon._hrzEps + cylinderRadius;
  *t = 0.0;
  value.y = cylinderAxisPt1.y - cylinderAxisPt0.y;
  value.x = cylinderAxisPt1.x - cylinderAxisPt0.x;
  value.z = cylinderAxisPt1.z - cylinderAxisPt0.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_4,value,(MethodInfo *)0x0);
  uVar5._0_4_ = pVVar3->x;
  uVar5._4_4_ = pVVar3->y;
  fVar6 = pVVar3->z;
  if (epsilon._vertEps * _UNK_? + cylinderHeight < _UNK_?) {
    return 0;
  }
  uStack_7._0_4_ = pVVar3->x;
  uStack_7._4_4_ = pVVar3->y;
  fVar8 = cylinderAxisPt0.x - epsilon._vertEps * (float)(undefined4)uStack_7;
  fVar9 = cylinderAxisPt0.y - epsilon._vertEps * (float)uStack_7._4_4_;
  fVar10 = cylinderAxisPt0.z - epsilon._vertEps * fVar6;
  uVar11 = pVVar3->x;
  uVar12 = pVVar3->y;
  uVar13 = pVVar3->x;
  uVar14 = pVVar3->y;
  value_00.y = (float)uVar14;
  value_00.x = (float)uVar13;
  t = (float *)0x0;
  fStack_15 = 0.0;
  bVar16 = false;
  cylinderAxisPt0.z = (float)((uint)fVar6 & 0xffffff00);
  value_00.z = fVar6;
  cylinderAxisPt0.x = (float)uVar11;
  cylinderAxisPt0.y = (float)uVar12;
  uVar17 = (undefined4)uVar5;
  uVar18 = uVar5._4_4_;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_4,value_00,(MethodInfo *)0x0);
  this = (Ray *)uVar5;
  uStack_7._0_4_ = pVVar3->x;
  uStack_7._4_4_ = pVVar3->y;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&stack0xffffffa0,ray_00,(float *)&t,
                     (MethodInfo *)
                     ((uint)(fVar9 * (float)uStack_7._4_4_ + fVar8 * (float)(undefined4)uStack_7
                            + fVar10 * pVVar3->z) ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field));
  if (bVar19 != 0) {
    this = &ray;
    uStack_7 = CONCAT44(&UNK_?,(undefined4)uStack_7);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       (&VStack_4,this,(float)t,(MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar3->x;
    uStack_7._4_4_ = pVVar3->y;
    fVar20 = pVVar3->z - fVar10;
    bVar16 = ((float)(undefined4)uStack_7 - fVar8) * ((float)(undefined4)uStack_7 - fVar8) +
            ((float)uStack_7._4_4_ - fVar9) * ((float)uStack_7._4_4_ - fVar9) + fVar20 * fVar20
            <= fVar2 * fVar2;
  }
  uVar5 = CONCAT44(&UNK_?,this);
  value_01.y = (float)uVar18;
  value_01.x = (float)uVar17;
  value_01.z = fVar6;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_4,value_01,(MethodInfo *)0x0);
  uStack_7._0_4_ = pVVar3->x;
  uStack_7._4_4_ = pVVar3->y;
  fVar21 = 0.0;
  puVar22 = &UNK_?;
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  fVar2 = ray.m_Origin.y;
  fVar20 = ray.m_Origin.z;
  fVar6 = ray.m_Direction.x;
  bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&stack0xffffff90,ray_01,&fStack_15,(MethodInfo *)0x0);
  if (bVar19 != 0) {
    ray.m_Direction.x = (float)&ray;
    ray.m_Direction.z = 0.0;
    ray.m_Direction.y = fStack_15;
    ray.m_Origin.z = (float)&VStack_4;
    ray.m_Origin.y = (float)&UNK_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)ray.m_Origin.z,(Ray *)ray.m_Direction.x,fStack_15,
                        (MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar3->x;
    uStack_7._4_4_ = pVVar3->y;
  }
  fVar23 = (float)((ulonglong)uVar5 >> 0x20);
  fVar24 = (float)uVar5;
  fVar25 = ray.m_Direction.y * (float)puVar22 - ray.m_Direction.z * fVar23;
  fVar26 = fVar24 * ray.m_Direction.z - ray.m_Direction.x * (float)puVar22;
  fVar27 = ray.m_Direction.x * fVar23 - fVar24 * ray.m_Direction.y;
  fVar28 = (float)puVar22 * (ray.m_Origin.y - fVar9) - fVar23 * (ray.m_Origin.z - fVar10);
  fVar29 = fVar24 * (ray.m_Origin.z - fVar10) - (float)puVar22 * (ray.m_Origin.x - fVar8);
  fVar23 = fVar23 * (ray.m_Origin.x - fVar8) - fVar24 * (ray.m_Origin.y - fVar9);
  cylinderAxisPt0.y = (float)&stack0xffffffe0;
  cylinderAxisPt0.z = 0.0;
  cylinderAxisPt0.x = (float)&stack0xffffffe4;
  fVar24 = fVar25 * fVar28 + fVar26 * fVar29 + fVar27 * fVar23;
  t = (float *)((fVar28 * fVar28 + fVar29 * fVar29 + fVar23 * fVar23) - fVar21 * fVar21);
  ray.m_Direction.z = fVar24 + fVar24;
  ray.m_Direction.y = fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27;
  ray.m_Direction.x = (float)&UNK_?;
  bVar19 = MathEx::MathEx_SolveQuadratic
                    (ray.m_Direction.y,ray.m_Direction.z,(float)t,(float *)cylinderAxisPt0.x,
                     (float *)cylinderAxisPt0.y,(MethodInfo *)0x0);
  if (bVar19 == 0) {
    return 0;
  }
  if ((fVar6 < 0.0) && (fVar6 = fVar20, fVar20 < 0.0)) {
    return 0;
  }
  *pfVar1 = fVar6;
  fVar6 = (float)uVar5 * ((ray.m_Origin.x + ray.m_Direction.x * fVar6) - fVar8) +
           (float)((ulonglong)uVar5 >> 0x20) *
           ((ray.m_Origin.y + ray.m_Direction.y * fVar6) - fVar9) +
           (float)puVar22 * ((ray.m_Origin.z + ray.m_Direction.z * fVar6) - fVar10);
  cVar30 = SUB41(cylinderAxisPt0.z,0);
  if (fVar6 < 0.0) {
    if (cVar30 == '\0' && !bVar16) goto code_?;
    *pfVar1 = 3.4028235e+38;
    if (cVar30 != '\0') {
      *pfVar1 = fStack_15;
    }
    if ((bVar16) && ((float)t < *pfVar1)) {
      *pfVar1 = (float)t;
    }
  }
  if (fVar6 <= fVar2) {
    return 1;
  }
  if (cVar30 != '\0' || bVar16) {
    *pfVar1 = 3.4028235e+38;
    if (cVar30 != '\0') {
      *pfVar1 = fStack_15;
    }
    if (!bVar16) {
      return 1;
    }
    if (*pfVar1 <= (float)t) {
      return 1;
    }
    *pfVar1 = (float)t;
    return 1;
  }
code_?:
  *pfVar1 = 0.0;
  return 0;
}

