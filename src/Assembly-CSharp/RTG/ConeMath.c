
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
  pMStack_5 = (MethodInfo *)pVVar1->z;
  fStack_6 = (float)uVar3;
  fStack_7 = (float)uVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,coneRotation,
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
  VStack_2.x = coneBaseCenter.x + fStack_6 * coneBaseRadius;
  VStack_2.y = coneBaseCenter.y + fStack_7 * coneBaseRadius;
  VStack_2.z = coneBaseCenter.z + (float)pMStack_5 * coneBaseRadius;
  if (pLVar10 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_8._0_4_ = &UNK_?;
    fStack_9 = VStack_2.x;
    fStack_6 = VStack_2.y;
    fStack_7 = VStack_2.z;
    uStack_8._4_4_ = pLVar10;
    func_?();
    VStack_2.z = fStack_9 * coneBaseRadius;
    fStack_9 = coneBaseCenter.x - (float)(undefined *)uStack_8 * coneBaseRadius;
    fStack_6 = coneBaseCenter.y - (float)uStack_8._4_4_ * coneBaseRadius;
    VStack_2.z = coneBaseCenter.z - VStack_2.z;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_8 = CONCAT44(pLVar10,&UNK_?);
    fStack_7 = VStack_2.z;
    func_?();
    VStack_2.z = coneBaseCenter.z - (float)pMStack_5 * coneBaseRadius;
    fStack_9 = coneBaseCenter.x - fStack_6 * coneBaseRadius;
    fStack_6 = coneBaseCenter.y - fStack_7 * coneBaseRadius;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_8._0_4_ = &UNK_?;
    fStack_7 = VStack_2.z;
    uStack_8._4_4_ = pLVar10;
    func_?();
    VStack_2.z = fStack_9 * coneBaseRadius;
    fStack_9 = coneBaseCenter.x + (float)(undefined *)uStack_8 * coneBaseRadius;
    fStack_6 = coneBaseCenter.y + (float)uStack_8._4_4_ * coneBaseRadius;
    VStack_2.z = coneBaseCenter.z + VStack_2.z;
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


/* Boolean ContainsPoint(Vector3, Vector3, Single, Single, Quaternion, ConeEpsilon) */

bool Assembly-CSharp.dll::RTG::ConeMath::ConeMath_ContainsPoint
               (Vector3 point,Vector3 coneBaseCenter,float coneBaseRadius,float coneHeight,
               Quaternion coneRotation,ConeEpsilon epsilon,MethodInfo *method)

{
  func_?(&MStack_1,0,0x40);
  func_?(&stack0xffffff70,0,0x40);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  VVar2.y = coneBaseCenter.y;
  VVar2.x = coneBaseCenter.x;
  VVar2.z = coneBaseCenter.z;
  pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff30,VVar2,coneRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  MStack_1.m00 = pMVar3->m00;
  MStack_1.m10 = pMVar3->m10;
  MStack_1.m20 = pMVar3->m20;
  MStack_1.m30 = pMVar3->m30;
  MStack_1.m01 = pMVar3->m01;
  MStack_1.m11 = pMVar3->m11;
  MStack_1.m21 = pMVar3->m21;
  MStack_1.m31 = pMVar3->m31;
  MStack_1.m02 = pMVar3->m02;
  MStack_1.m12 = pMVar3->m12;
  MStack_1.m22 = pMVar3->m22;
  MStack_1.m32 = pMVar3->m32;
  MStack_1.m03 = pMVar3->m03;
  MStack_1.m13 = pMVar3->m13;
  MStack_1.m23 = pMVar3->m23;
  MStack_1.m33 = pMVar3->m33;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
            ((Matrix4x4 *)&stack0xffffff30,&MStack_1,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                      (&coneBaseCenter,(Matrix4x4 *)&stack0xffffff70,point,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  fVar7 = pVVar4->z;
  VVar2 = *pVVar4;
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
              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field) <= fVar7)
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
    fVar13 = Vector3Ex::Vector3Ex_GetDistanceToSegment(VVar2,point0,point1,(MethodInfo *)0x0);
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
  *t = 0.0;
  fStack_3 = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff4c,coneBaseCenter,coneRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  pRVar5 = RayEx::RayEx_InverseTransform(&ray,ray_01,*pMVar4,(MethodInfo *)0x0);
  fVar6 = (pRVar5->m_Origin).x;
  fVar7 = (pRVar5->m_Origin).y;
  fVar8 = (pRVar5->m_Origin).z;
  fVar9 = (pRVar5->m_Direction).x;
  uVar10 = (pRVar5->m_Direction).y;
  uVar11 = (pRVar5->m_Direction).z;
  fVar12 = (pRVar5->m_Origin).x;
  fVar13 = (pRVar5->m_Direction).x;
  fVar14 = (pRVar5->m_Direction).y;
  uVar15 = (pRVar5->m_Direction).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar17 = (pVVar16->upVector).x;
  uVar18 = (pVVar16->upVector).y;
  ray.m_Direction.x = (float)uVar17 * coneHeight * _UNK_?;
  ray.m_Direction.y = (float)uVar18 * coneHeight * _UNK_?;
  ray.m_Direction.z = (pVVar16->upVector).z * coneHeight * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar20 = (pQVar19->identityQuaternion).x;
  fVar21 = (pQVar19->identityQuaternion).y;
  fVar22 = (pQVar19->identityQuaternion).z;
  fVar23 = (pQVar19->identityQuaternion).w;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  ray_02.m_Origin.y = ray.m_Direction.x;
  ray_02.m_Origin.x = fVar12;
  ray_02.m_Origin.z = ray.m_Direction.y;
  ray_02.m_Direction.x = fVar13;
  ray_02.m_Direction.y = fVar14;
  ray_02.m_Direction.z = (float)uVar15;
  boxCenter.y = ray.m_Direction.y;
  boxCenter.x = ray.m_Direction.x;
  boxCenter.z = ray.m_Direction.z;
  boxRotation.y = fVar21;
  boxRotation.x = fVar20;
  boxRotation.z = fVar22;
  boxRotation.w = fVar23;
  fVar12 = ray.m_Direction.x;
  fVar20 = ray.m_Direction.y;
  bVar24 = BoxMath::BoxMath_Raycast
                     (ray_02,boxCenter,(Vector3)ZEXT412(0),boxRotation,(BoxEpsilon)ZEXT812(0),
                      (MethodInfo *)0x0);
  if (bVar24 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar25 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
    coneBaseCenter.x =
         (float)(uVar25 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    fVar21 = (float)((uint)(TypeInfo__UnityEngine__Vector3->static_fields->upVector).z ^
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    if (cRam_? == '\0') {
      coneBaseCenter.x = (float)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    ray.m_Direction.z = coneBaseCenter.x;
    ray.m_Direction.y = (float)&stack0xffffffcc;
    ray.m_Direction.x = (float)&UNK_?;
    value.y = 0.0;
    value.x = coneBaseCenter.x;
    value.z = fVar21;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
              ((Vector3 *)ray.m_Direction.y,value,(MethodInfo *)0x0);
    ray.m_Direction.z = (float)&stack0xffffffbc;
    ray.m_Direction.y = (float)&UNK_?;
    ray_00.m_Origin.y = fVar20;
    ray_00.m_Origin.x = fVar12;
    ray_00.m_Origin.z = fVar13;
    ray_00.m_Direction.x = fVar14;
    ray_00.m_Direction.y = (float)uVar10;
    ray_00.m_Direction.z = (float)uVar11;
    bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                       ((Plane *)ray.m_Direction.z,ray_00,&fStack_1,(MethodInfo *)0x0);
    if ((bVar24 != 0) && (fVar26 = (float10)func_?(), (float)fVar26 <= (float)uVar10)) {
      *t = fStack_1;
      return 1;
    }
    fVar14 = ((float)uVar10 / (float)uVar11) * ((float)uVar10 / (float)uVar11);
    fVar12 = (fVar8 * (float)uVar11 + fVar6 * fVar9) -
             (float)uVar10 * fVar14 * (fVar7 - (float)uVar11);
    fVar9 = ((float)uVar11 * (float)uVar11 + fVar9 * fVar9) - (float)uVar10 * fVar14 * (float)uVar10;
    bVar24 = MathEx::MathEx_SolveQuadratic
                       (fVar9,fVar12 + fVar12,
                        (fVar8 * fVar8 + fVar6 * fVar6) -
                        (fVar7 - (float)uVar11) * fVar14 * (fVar7 - (float)uVar11),&fStack_2,
                        &fStack_3,(MethodInfo *)0x0);
    if ((bVar24 != 0) && ((0.0 <= fStack_2 || (fStack_2 = fStack_3, 0.0 <= fStack_3)))) {
      *t = fStack_2;
      fVar7 = fVar7 + (float)uVar10 * fStack_2;
      if (((float)((uint)fVar9 ^
                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field) <=
           fVar7) && (fVar7 <= fVar9 + (float)uVar11)) {
        return 1;
      }
      *t = 0.0;
    }
  }
  return 0;
}

