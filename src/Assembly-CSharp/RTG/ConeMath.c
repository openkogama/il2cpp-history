
/* List`1[UnityEngine.Vector3] CalcConeBaseExtentPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ConeMath::ConeMath_CalcConeBaseExtentPoints
          (Vector3 coneBaseCenter,float coneBaseRadius,Quaternion coneRotation,MethodInfo *method)

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
                     (&VStack_2,coneRotation,
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
                     ((Vector3 *)&stack0xffffffa0,coneRotation,
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
  fStack_9 = (float)pLStack_6 * coneBaseRadius;
  fStack_10 = fStack_7 * coneBaseRadius;
  fStack_11 = fStack_5 * coneBaseRadius;
  pLStack_6 = (List_1_UnityEngine_Vector3_ *)(coneBaseCenter.x + fStack_9);
  fStack_7 = coneBaseCenter.y + fStack_10;
  fStack_5 = coneBaseCenter.z + fStack_11;
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
    fStack_16 = VStack_2.x * coneBaseRadius;
    fStack_7 = coneBaseCenter.x - fStack_16;
    fStack_5 = coneBaseCenter.y - VStack_2.y * coneBaseRadius;
    VStack_2.z = coneBaseCenter.z - VStack_2.z * coneBaseRadius;
    pMStack_12 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar8;
    fStack_15 = VStack_2.z;
    func_?();
    VStack_2.z = coneBaseCenter.z - fStack_11;
    fStack_7 = coneBaseCenter.x - fStack_9;
    fStack_5 = coneBaseCenter.y - fStack_10;
    pMStack_12 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar8;
    fStack_15 = VStack_2.z;
    func_?();
    VStack_2.z = coneBaseCenter.z + fStack_15;
    fStack_7 = coneBaseCenter.x + fStack_16;
    fStack_5 = coneBaseCenter.y + (float)pMStack_12;
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


/* Boolean ContainsPoint(Vector3, Vector3, Single, Single, Quaternion, ConeEpsilon) */

bool Assembly-CSharp.dll::RTG::ConeMath::ConeMath_ContainsPoint
               (Vector3 point,Vector3 coneBaseCenter,float coneBaseRadius,float coneHeight,
               Quaternion coneRotation,ConeEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  VVar1.y = coneBaseCenter.y;
  VVar1.x = coneBaseCenter.x;
  VVar1.z = coneBaseCenter.z;
  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff30,VVar1,coneRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  MStack_3.m00 = pMVar2->m00;
  MStack_3.m10 = pMVar2->m10;
  MStack_3.m20 = pMVar2->m20;
  MStack_3.m30 = pMVar2->m30;
  MStack_3.m01 = pMVar2->m01;
  MStack_3.m11 = pMVar2->m11;
  MStack_3.m21 = pMVar2->m21;
  MStack_3.m31 = pMVar2->m31;
  MStack_3.m02 = pMVar2->m02;
  MStack_3.m12 = pMVar2->m12;
  MStack_3.m22 = pMVar2->m22;
  MStack_3.m32 = pMVar2->m32;
  MStack_3.m03 = pMVar2->m03;
  MStack_3.m13 = pMVar2->m13;
  MStack_3.m23 = pMVar2->m23;
  MStack_3.m33 = pMVar2->m33;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
            ((Matrix4x4 *)&stack0xffffff30,&MStack_3,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                      (&coneBaseCenter,(Matrix4x4 *)&stack0xffffff70,point,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  fVar7 = pVVar4->z;
  VVar1 = *pVVar4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar8->upVector).x;
  uVar10 = (pVVar8->upVector).y;
  coneBaseCenter.z = (pVVar8->upVector).z;
  fVar7 = (float)uVar5 * (float)uVar9 + (float)uVar6 * (float)uVar10 + fVar7 * coneBaseCenter.z;
  if (((float)((uint)epsilon._vertEps ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <= fVar7)
     && (fVar7 <= epsilon._vertEps + coneHeight)) {
    coneBaseCenter.x = (float)uVar9;
    if (cRam_? == '\0') {
      coneBaseCenter.y = (float)uVar10;
      func_?();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar8->zeroVector).x;
    uVar12 = (pVVar8->zeroVector).y;
    fVar13 = (pVVar8->zeroVector).z;
    coneBaseCenter.y = (float)uVar11;
    coneBaseCenter.z = (float)uVar12;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_14._0_4_ = (pVVar8->upVector).x;
    uStack_14._4_4_ = (pVVar8->upVector).y;
    fStack_15 = (pVVar8->upVector).z * coneHeight;
    point0.y = coneBaseCenter.z;
    point0.x = coneBaseCenter.y;
    point0.z = fVar13;
    point1.y = (float)uStack_14._4_4_ * coneHeight;
    point1.x = (float)(undefined4)uStack_14 * coneHeight;
    point1.z = fStack_15;
    fVar13 = Vector3Ex::Vector3Ex_GetDistanceToSegment(VVar1,point0,point1,(MethodInfo *)0x0);
    return fVar13 <= epsilon._hrzEps + (coneHeight / coneBaseRadius) * fVar7;
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Single, Quaternion, ConeEpsilon) */

bool Assembly-CSharp.dll::RTG::ConeMath::ConeMath_Raycast
               (Ray ray,float *t,Vector3 coneBaseCenter,float coneBaseRadius,float coneHeight,
               Quaternion coneRotation,ConeEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  *t = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff5c,coneBaseCenter,coneRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  pRVar5 = RayEx::RayEx_InverseTransform(&ray,ray_01,*pMVar4,(MethodInfo *)0x0);
  uVar6 = (pRVar5->m_Direction).y;
  uVar7 = (pRVar5->m_Direction).z;
  fVar8 = (pRVar5->m_Origin).x;
  fVar9 = (pRVar5->m_Direction).x;
  fVar10 = (pRVar5->m_Direction).y;
  uVar11 = (pRVar5->m_Direction).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar13 = (pVVar12->upVector).x;
  uVar14 = (pVVar12->upVector).y;
  ray.m_Direction.x = (float)uVar13 * coneHeight * _UNK_?;
  ray.m_Direction.y = (float)uVar14 * coneHeight * _UNK_?;
  ray.m_Direction.z = (pVVar12->upVector).z * coneHeight * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar15 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar16 = (pQVar15->identityQuaternion).x;
  fVar17 = (pQVar15->identityQuaternion).y;
  fVar18 = (pQVar15->identityQuaternion).z;
  fVar19 = (pQVar15->identityQuaternion).w;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  ray_02.m_Origin.y = ray.m_Direction.x;
  ray_02.m_Origin.x = fVar8;
  ray_02.m_Origin.z = ray.m_Direction.y;
  ray_02.m_Direction.x = fVar9;
  ray_02.m_Direction.y = fVar10;
  ray_02.m_Direction.z = (float)uVar11;
  boxCenter.y = ray.m_Direction.y;
  boxCenter.x = ray.m_Direction.x;
  boxCenter.z = ray.m_Direction.z;
  boxSize.y = fVar18;
  boxSize.x = fVar17;
  boxSize.z = fVar19;
  boxRotation.y = fVar17;
  boxRotation.x = fVar16;
  boxRotation.z = fVar18;
  boxRotation.w = fVar19;
  fVar8 = ray.m_Direction.x;
  fVar16 = ray.m_Direction.y;
  bVar24 = BoxMath::BoxMath_Raycast
                     (ray_02,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0)
  ;
  if (bVar24 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar25 = (pVVar12->upVector).x;
    uVar26 = (pVVar12->upVector).y;
    ray.m_Direction.x =
         (float)(uVar25 ^ (uint)
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    ray.m_Direction.y =
         (float)(uVar26 ^ (uint)
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    ray.m_Direction.z =
         (float)((uint)(pVVar12->upVector).z ^
                (uint)__0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    value.y = ray.m_Direction.y;
    value.x = ray.m_Direction.x;
    value.z = ray.m_Direction.z;
    pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffcc,value,(MethodInfo *)0x0);
    uVar28 = pVVar27->x;
    uVar29 = pVVar27->y;
    ray.m_Direction.z = pVVar27->z;
    ray_00.m_Origin.y = fVar16;
    ray_00.m_Origin.x = fVar8;
    ray_00.m_Origin.z = fVar9;
    ray_00.m_Direction.x = fVar10;
    ray_00.m_Direction.y = (float)uVar6;
    ray_00.m_Direction.z = (float)uVar7;
    ray.m_Direction.x = (float)uVar28;
    ray.m_Direction.y = (float)uVar29;
    bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                       ((Plane *)&stack0xffffffbc,ray_00,&fStack_1,(MethodInfo *)0x0);
    if ((bVar24 != 0) && (fVar30 = (float10)func_?(), (float)fVar30 <= fVar8)) {
      *t = fStack_1;
      return 1;
    }
    fVar8 = (fVar8 / fVar16) * (fVar8 / fVar16);
    fVar10 = fVar22 - fVar16;
    fVar17 = (float)uVar6 * fVar8;
    fVar9 = (fVar23 * (float)uVar7 + fVar21 * fVar20) - fVar17 * fVar10;
    bVar24 = MathEx::MathEx_SolveQuadratic
                       (((float)uVar7 * (float)uVar7 + fVar20 * fVar20) - fVar17 * (float)uVar6,
                        fVar9 + fVar9,(fVar23 * fVar23 + fVar21 * fVar21) - fVar10 * fVar8 * fVar10
                        ,&fStack_2,&fStack_3,(MethodInfo *)0x0);
    if ((bVar24 != 0) && ((0.0 <= fStack_2 || (fStack_2 = fStack_3, 0.0 <= fStack_3)))) {
      *t = fStack_2;
      fVar22 = fVar22 + (float)uVar6 * fStack_2;
      if ((__0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field <= fVar22) &&
         (fVar22 <= fVar16 + 0.0)) {
        return 1;
      }
      *t = 0.0;
    }
  }
  return 0;
}

