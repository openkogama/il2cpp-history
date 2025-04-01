
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
  fStack_5 = pVVar1->z;
  pLStack_6 = (List_1_UnityEngine_Vector3_ *)uVar3;
  fStack_7 = (float)uVar4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffa0,cylinderRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  VStack_2.x = pVVar1->x;
  VStack_2.y = pVVar1->y;
  VStack_2.z = pVVar1->z;
  pLVar8 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  fStack_9 = (float)pLStack_6 * cylinderRadius;
  fStack_10 = fStack_7 * cylinderRadius;
  fStack_11 = fStack_5 * cylinderRadius;
  pLStack_6 = (List_1_UnityEngine_Vector3_ *)(center.x + fStack_9);
  fStack_7 = center.y + fStack_10;
  fStack_5 = center.z + fStack_11;
  if (pLVar8 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_12 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar13 = (float)pLStack_6;
    pLStack_6 = pLVar8;
    fVar14 = fStack_7;
    fStack_7 = fVar13;
    fStack_15 = fStack_5;
    fStack_5 = fVar14;
    func_?();
    fStack_16 = VStack_2.x * cylinderRadius;
    fStack_7 = center.x - fStack_16;
    fStack_5 = center.y - VStack_2.y * cylinderRadius;
    VStack_2.z = center.z - VStack_2.z * cylinderRadius;
    pMStack_12 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar8;
    fStack_15 = VStack_2.z;
    func_?();
    VStack_2.z = center.z - fStack_11;
    fStack_7 = center.x - fStack_9;
    fStack_5 = center.y - fStack_10;
    pMStack_12 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar8;
    fStack_15 = VStack_2.z;
    func_?();
    VStack_2.z = center.z + fStack_15;
    fStack_7 = center.x + fStack_16;
    fStack_5 = center.y + (float)pMStack_12;
    pMStack_12 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar8;
    fStack_15 = VStack_2.z;
    func_?();
    return pLVar8;
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar8 = (List_1_UnityEngine_Vector3_ *)(*pcVar17)();
  return pLVar8;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_ContainsPoint
               (Vector3 point,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,float cylinderRadius,
               CylinderEpsilon epsilon,MethodInfo *method)

{
  fStack_1 = cylinderAxisPt0.x;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fVar5 = cylinderAxisPt1.z - cylinderAxisPt0.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  value.y = cylinderAxisPt1.y - cylinderAxisPt0.y;
  value.x = cylinderAxisPt1.x - cylinderAxisPt0.x;
  value.z = fVar5;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)auStack_7,value,(MethodInfo *)0x0);
  uStack_8._0_4_ = pVVar6->x;
  uStack_8._4_4_ = pVVar6->y;
  fStack_1 = pVVar6->z;
  auStack_7._4_4_ =
       (float)uStack_8._4_4_ * (point.y - cylinderAxisPt0.y) +
       (float)(undefined4)uStack_8 * (point.x - fStack_9) +
       fStack_1 * (point.z - cylinderAxisPt0.z);
  if ((float)((uint)epsilon._vertEps ^
             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <=
      (float)auStack_7._4_4_) {
    dVar10 = (double)(fStack_11 * fStack_11 + fVar5 * fVar5 +
                    (float)auStack_7._0_4_ * (float)auStack_7._0_4_);
    if (dVar10 < 0.0) {
      func_?();
    }
    else {
      dVar10 = SQRT(dVar10);
    }
    if ((float)auStack_7._4_4_ <= (float)dVar10 + epsilon._vertEps) {
      uVar12 = pVVar6->x;
      uVar13 = pVVar6->y;
      fStack_1 = (cylinderAxisPt0.z + pVVar6->z * (float)auStack_7._4_4_) - point.z;
      uStack_8 = CONCAT44((cylinderAxisPt0.y + (float)uVar13 * (float)auStack_7._4_4_) - point.y,
                           (fStack_9 + (float)uVar12 * (float)auStack_7._4_4_) - point.x);
      fStack_4 = fStack_1;
      fVar14 = (float10)func_?(&uStack_8,0);
      return (float)fVar14 <= epsilon._hrzEps + cylinderRadius;
    }
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
  fVar6 = (float)uVar5 * (point.y - cylinderAxisPt0.y) +
          (float)uVar4 * (point.x - cylinderAxisPt0.x) + pVVar2->z * (point.z - cylinderAxisPt0.z);
  if (((float)((uint)epsilon._vertEps ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <= fVar6) &&
     (fVar6 <= epsilon._vertEps + cylinderHeight)) {
    uVar7 = pVVar2->x;
    uVar8 = pVVar2->y;
    VStack_3.z = (cylinderAxisPt0.z + pVVar2->z * fVar6) - point.z;
    VStack_3.x = 0.0;
    uStack_9 = CONCAT44((cylinderAxisPt0.y + (float)uVar8 * fVar6) - point.y,
                         (cylinderAxisPt0.x + (float)uVar7 * fVar6) - point.x);
    fStack_1 = VStack_3.z;
    fVar10 = (float10)func_?(&uStack_9);
    return (float)fVar10 <= epsilon._hrzEps + cylinderRadius;
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_Raycast
               (Ray ray,float *t,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,
               float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  method_00 = (MethodInfo *)0x0;
  dVar1 = (double)((cylinderAxisPt1.y - cylinderAxisPt0.y) * (cylinderAxisPt1.y - cylinderAxisPt0.y)
                   + (cylinderAxisPt1.x - cylinderAxisPt0.x) *
                     (cylinderAxisPt1.x - cylinderAxisPt0.x) +
                  (cylinderAxisPt1.z - cylinderAxisPt0.z) * (cylinderAxisPt1.z - cylinderAxisPt0.z))
  ;
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  epsilon_00._vertEps = epsilon._vertEps;
  epsilon_00._hrzEps = epsilon._hrzEps;
  bVar2 = CylinderMath_Raycast_1
                    (ray,t,cylinderAxisPt0,cylinderAxisPt1,cylinderRadius,(float)dVar1,epsilon_00,
                     method_00);
  return bVar2;
}


/* Boolean RaycastNoCaps(Ray, Single ByRef, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_RaycastNoCaps
               (Ray ray,float *t,Vector3 cylinderAxisPt0,Vector3 cylinderAxisPt1,
               float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  method_00 = (MethodInfo *)0x0;
  dVar1 = (double)((cylinderAxisPt1.y - cylinderAxisPt0.y) * (cylinderAxisPt1.y - cylinderAxisPt0.y)
                   + (cylinderAxisPt1.x - cylinderAxisPt0.x) *
                     (cylinderAxisPt1.x - cylinderAxisPt0.x) +
                  (cylinderAxisPt1.z - cylinderAxisPt0.z) * (cylinderAxisPt1.z - cylinderAxisPt0.z))
  ;
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  epsilon_00._vertEps = epsilon._vertEps;
  epsilon_00._hrzEps = epsilon._hrzEps;
  bVar2 = CylinderMath_RaycastNoCaps_1
                    (ray,t,cylinderAxisPt0,cylinderAxisPt1,cylinderRadius,(float)dVar1,epsilon_00,
                     method_00);
  return bVar2;
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
    fVar19 = fVar18 * fVar15 + fVar22 * fVar14 + fVar23 * fVar16;
    bVar24 = MathEx::MathEx_SolveQuadratic
                      (fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16,fVar19 + fVar19,
                       (fVar18 * fVar18 + fVar22 * fVar22 + fVar23 * fVar23) -
                       (epsilon._hrzEps + cylinderRadius) * (epsilon._hrzEps + cylinderRadius),
                       &fStack_1,&fStack_2,(MethodInfo *)0x0);
    if ((bVar24 != 0) && ((0.0 <= fStack_1 || (fStack_1 = fStack_2, 0.0 <= fStack_2)))) {
      *t = fStack_1;
      fVar5 = (float)uVar4 * ((ray.m_Origin.y + ray.m_Direction.y * fStack_1) - fVar11) +
               ((ray.m_Origin.x + ray.m_Direction.x * fStack_1) - fVar10) * 0.0 +
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
  *t = 0.0;
  value.y = cylinderAxisPt1.y - cylinderAxisPt0.y;
  value.x = cylinderAxisPt1.x - cylinderAxisPt0.x;
  value.z = cylinderAxisPt1.z - cylinderAxisPt0.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffb0,value,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar2->x;
  uVar3._4_4_ = pVVar2->y;
  puVar4 = (undefined *)pVVar2->z;
  if (epsilon._vertEps * _UNK_? + cylinderHeight < _UNK_?) {
    return 0;
  }
  uVar5 = pVVar2->x;
  uVar6 = pVVar2->y;
  fVar7 = cylinderAxisPt0.x - epsilon._vertEps * (float)uVar5;
  fVar8 = cylinderAxisPt0.y - epsilon._vertEps * (float)uVar6;
  fVar9 = cylinderAxisPt0.z - epsilon._vertEps * (float)puVar4;
  uVar10 = pVVar2->x;
  uVar11 = pVVar2->y;
  uVar12 = pVVar2->x;
  uVar13 = pVVar2->y;
  value_00.y = (float)uVar13;
  value_00.x = (float)uVar12;
  t = (float *)0x0;
  cylinderAxisPt0.z = (float)((uint)puVar4 & 0xffffff00);
  value_00.z = (float)puVar4;
  cylinderAxisPt0.x = (float)uVar10;
  cylinderAxisPt0.y = (float)uVar11;
  uVar14 = uVar3;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffb0,value_00,(MethodInfo *)0x0);
  uVar15 = pVVar2->x;
  uVar16 = pVVar2->y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x =
       (float)((uint)((float)uVar16 * fVar8 + (float)uVar15 * fVar7 + pVVar2->z * fVar9) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffa0,ray_00,(float *)&t,(MethodInfo *)0x0);
  puStack_18 = puVar4;
  if (bVar17 != 0) {
    uVar14 = CONCAT44(&ray,(Vector3 *)&stack0xffffffb0);
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
              ((Vector3 *)&stack0xffffffb0,&ray,(float)t,(MethodInfo *)0x0);
  }
  puVar19 = &UNK_?;
  value_01.z = (float)puVar4;
  value_01.x = (float)(int)uVar14;
  value_01.y = (float)(int)((ulonglong)uVar14 >> 0x20);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffffb0,value_01,(MethodInfo *)0x0);
  ray.m_Origin.x = 0.0;
  this = (Plane *)&stack0xffffffa0;
  pPVar20 = (Plane *)&UNK_?;
  auVar21._4_4_ = ray.m_Origin.z;
  auVar21._0_4_ = ray.m_Origin.y;
  auVar21._8_4_ = ray.m_Direction.x;
  auVar21._12_4_ = ray.m_Direction.y;
  auVar21._16_4_ = ray.m_Direction.z;
  auVar21._20_4_ = 0;
  fVar22 = ray.m_Direction.x;
  fVar23 = ray.m_Direction.y;
  bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     (this,(Ray)(auVar21 << 0x20),(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  cylinderAxisPt0.y = fVar23;
  fVar23 = cylinderAxisPt0.y;
  if (bVar17 != 0) {
    cylinderAxisPt0.x = (float)&ray;
    cylinderAxisPt0.z = 0.0;
    t = (float *)&stack0xffffffb0;
    ray.m_Direction.z = (float)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
              ((Vector3 *)t,(Ray *)cylinderAxisPt0.x,cylinderAxisPt0.y,(MethodInfo *)0x0);
    fVar23 = cylinderAxisPt0.y;
  }
  fVar24 = ray.m_Direction.y * (float)puStack_18 - ray.m_Direction.z * (float)uVar3._4_4_;
  fVar25 = (float)(undefined4)uVar3 * ray.m_Direction.z - ray.m_Direction.x * (float)puStack_18;
  fVar26 = ray.m_Direction.x * (float)uVar3._4_4_ - (float)(undefined4)uVar3 * ray.m_Direction.y;
  fVar7 = ray.m_Origin.x - fVar7;
  fVar27 = (float)puStack_18 * (ray.m_Origin.y - fVar8) -
           (float)uVar3._4_4_ * (ray.m_Origin.z - fVar9);
  fVar28 = (float)(undefined4)uVar3 * (ray.m_Origin.z - fVar9) - (float)puStack_18 * fVar7;
  fVar29 = (float)uVar3._4_4_ * fVar7 - (float)(undefined4)uVar3 * (ray.m_Origin.y - fVar8);
  fVar7 = fVar28 * fVar25 + fVar27 * fVar24 + fVar29 * fVar26;
  cylinderAxisPt0.z = fVar7 + fVar7;
  cylinderAxisPt0.y = fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26;
  cylinderAxisPt0.x = (float)&UNK_?;
  bVar17 = MathEx::MathEx_SolveQuadratic
                     (cylinderAxisPt0.y,cylinderAxisPt0.z,
                      (fVar28 * fVar28 + fVar27 * fVar27 + fVar29 * fVar29) - fVar22 * fVar22,
                      (float *)&stack0xffffffe4,(float *)&stack0xffffffe0,(MethodInfo *)0x0);
  if (bVar17 == 0) {
    return 0;
  }
  if (((float)this < 0.0) && (this = pPVar20, (float)pPVar20 < 0.0)) {
    return 0;
  }
  *pfVar1 = (float)this;
  fVar8 = (float)uVar3._4_4_ * ((ray.m_Origin.y + ray.m_Direction.y * (float)this) - fVar8) +
           (float)(undefined4)uVar3 * ((ray.m_Origin.x + ray.m_Direction.x * (float)this) - 0.0) +
           (float)puStack_18 * ((ray.m_Origin.z + ray.m_Direction.z * (float)this) - fVar9);
  cVar30 = SUB41(cylinderAxisPt0.z,0);
  cVar31 = (char)&stack0xffffffe0;
  if (fVar8 < 0.0) {
    if (cVar30 == '\0' && cVar31 == '\0') goto code_?;
    *pfVar1 = 3.4028235e+38;
    if (cVar30 != '\0') {
      *pfVar1 = fVar23;
    }
    if ((cVar31 != '\0') && ((float)t < *pfVar1)) {
      *pfVar1 = (float)t;
    }
  }
  if (fVar8 <= (float)puVar19) {
    return 1;
  }
  if (cVar30 != '\0' || cVar31 != '\0') {
    *pfVar1 = 3.4028235e+38;
    if (cVar30 != '\0') {
      *pfVar1 = fVar23;
    }
    if (cVar31 == '\0') {
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

