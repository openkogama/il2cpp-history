
/* List`1[UnityEngine.Vector3] CalcBaseCornerPoints(Vector3, Single, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PyramidMath::PyramidMath_CalcBaseCornerPoints
          (Vector3 baseCenter,float baseWidth,float baseDepth,Quaternion rotation,MethodInfo *method
          )

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
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffc0,rotation,
             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffb0,rotation,
             TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    func_?();
    func_?();
    func_?();
    return pLVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar2)();
  return pLVar1;
}


/* Boolean ContainsPoint(Vector3, Vector3, Single, Single, Single, Quaternion, PyramidEpsilon) */

bool Assembly-CSharp.dll::RTG::PyramidMath::PyramidMath_ContainsPoint
               (Vector3 point,Vector3 baseCenter,float baseWidth,float baseDepth,float height,
               Quaternion rotation,PyramidEpsilon epsilon,MethodInfo *method)

{
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
            ((Matrix4x4 *)&stack0xfffffec0,baseCenter,rotation,
             TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
            ((Matrix4x4 *)&stack0xfffffec0,(Matrix4x4 *)&stack0xffffff40,(MethodInfo *)0x0);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                      ((Vector3 *)&stack0xffffffa0,(Matrix4x4 *)&stack0xffffff00,point,
                       (MethodInfo *)0x0);
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  fVar8 = pVVar5->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar10 = (pVVar9->upVector).x;
  uVar11 = (pVVar9->upVector).y;
  uVar12 = uVar10 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  uVar13 = uVar11 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  fVar14 = (float)((uint)(pVVar9->upVector).z ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar15 = (pVVar9->zeroVector).x;
  uVar16 = (pVVar9->zeroVector).y;
  fVar17 = (pVVar9->zeroVector).z;
  value.y = (float)uVar13;
  value.x = (float)uVar12;
  value.z = fVar14;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffa0,value,(MethodInfo *)0x0);
  uVar18 = pVVar5->x;
  uVar19 = pVVar5->y;
  uVar20 = pVVar5->x;
  uVar21 = pVVar5->y;
  if ((float)uVar7 * (float)uVar21 + (float)uVar6 * (float)uVar20 + fVar8 * pVVar5->z +
      (float)((uint)((float)uVar16 * (float)uVar19 + (float)uVar15 * (float)uVar18 +
                    fVar17 * pVVar5->z) ^
             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <=
      epsilon._ptContainEps) {
    fVar14 = baseWidth * _UNK_?;
    fVar17 = baseDepth * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar22 = (pVVar9->upVector).x;
    uVar23 = (pVVar9->upVector).y;
    fVar24 = (float)uVar22 * height;
    fVar25 = (float)uVar23 * height;
    fVar26 = (pVVar9->upVector).z * height;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27 = (pVVar9->rightVector).x;
    uVar28 = (pVVar9->rightVector).y;
    fVar29 = (float)uVar27 * fVar14;
    fVar30 = (float)uVar28 * fVar14;
    fVar31 = (pVVar9->rightVector).z * fVar14;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar32 = (pVVar9->forwardVector).x;
    uVar33 = (pVVar9->forwardVector).y;
    fVar31 = fVar31 - (pVVar9->forwardVector).z * fVar17;
    fVar29 = fVar29 - (float)uVar32 * fVar17;
    fVar30 = fVar30 - (float)uVar33 * fVar17;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar34 = (pVVar9->rightVector).x;
    uVar35 = (pVVar9->rightVector).y;
    a.y = fVar25;
    a.x = fVar24;
    a.z = fVar26;
    b.y = fVar30;
    b.x = fVar29;
    b.z = fVar31;
    c.y = fVar30 - (float)uVar35 * baseWidth;
    c.x = fVar29 - (float)uVar34 * baseWidth;
    c.z = fVar31 - (pVVar9->rightVector).z * baseWidth;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
              ((Plane *)&stack0xffffffbc,a,b,c,(MethodInfo *)0x0);
    if (fVar1 * (float)uVar6 + fVar2 * (float)uVar7 + fVar3 * fVar8 + fVar4 <=
        epsilon._ptContainEps) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar36 = (pVVar9->rightVector).x;
      uVar37 = (pVVar9->rightVector).y;
      fVar31 = (float)uVar36 * fVar14;
      fVar29 = (float)uVar37 * fVar14;
      fVar30 = (pVVar9->rightVector).z * fVar14;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar38 = (pVVar9->forwardVector).x;
      uVar39 = (pVVar9->forwardVector).y;
      fVar30 = (pVVar9->forwardVector).z * fVar17 + fVar30;
      fVar31 = (float)uVar38 * fVar17 + fVar31;
      fVar29 = (float)uVar39 * fVar17 + fVar29;
      fVar40 = fVar30;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar41 = (pVVar9->forwardVector).x;
      uVar42 = (pVVar9->forwardVector).y;
      a_00.y = fVar25;
      a_00.x = fVar24;
      a_00.z = fVar26;
      b_00.y = fVar29;
      b_00.x = fVar31;
      b_00.z = fVar40;
      c_00.y = fVar29 - (float)uVar42 * baseDepth;
      c_00.x = fVar31 - (float)uVar41 * baseDepth;
      c_00.z = fVar30 - (pVVar9->forwardVector).z * baseDepth;
      UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                ((Plane *)&stack0xffffffbc,a_00,b_00,c_00,(MethodInfo *)0x0);
      if (fVar1 * (float)uVar6 + fVar2 * (float)uVar7 + fVar3 * fVar8 + fVar4 <=
          epsilon._ptContainEps) {
        pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                            ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
        uVar43 = pVVar5->x;
        uVar44 = pVVar5->y;
        fVar31 = (float)(uVar43 ^ 
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 fVar14;
        fVar30 = (float)(uVar44 ^ 
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 fVar14;
        fVar29 = (float)((uint)pVVar5->z ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 fVar14;
        pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                            ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
        uVar45 = pVVar5->x;
        uVar46 = pVVar5->y;
        fVar31 = (float)uVar45 * fVar17 + fVar31;
        fVar30 = (float)uVar46 * fVar17 + fVar30;
        fVar29 = pVVar5->z * fVar17 + fVar29;
        pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                            ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
        uVar47 = pVVar5->x;
        uVar48 = pVVar5->y;
        a_01.y = fVar25;
        a_01.x = fVar24;
        a_01.z = fVar26;
        b_01.y = fVar30;
        b_01.x = fVar31;
        b_01.z = fVar29;
        c_01.y = (float)uVar48 * baseWidth + fVar30;
        c_01.x = (float)uVar47 * baseWidth + fVar31;
        c_01.z = pVVar5->z * baseWidth + fVar29;
        UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                  ((Plane *)&stack0xffffffbc,a_01,b_01,c_01,(MethodInfo *)0x0);
        if (fVar1 * (float)uVar6 + fVar2 * (float)uVar7 + fVar3 * fVar8 + fVar4 <=
            epsilon._ptContainEps) {
          pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                              ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
          uVar49 = pVVar5->x;
          uVar50 = pVVar5->y;
          fVar2 = (float)(uVar50 ^ 
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fVar1 = (float)((uint)pVVar5->z ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fVar31 = (float)(uVar49 ^ 
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                   * fVar14;
          pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                              ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
          uVar51 = pVVar5->x;
          uVar52 = pVVar5->y;
          fVar31 = fVar31 - (float)uVar51 * fVar17;
          fVar2 = fVar2 * fVar14 - (float)uVar52 * fVar17;
          fVar1 = fVar1 * fVar14 - pVVar5->z * fVar17;
          pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                              ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
          uVar53 = pVVar5->x;
          uVar54 = pVVar5->y;
          fVar3 = pVVar5->z * baseDepth + fVar1;
          fVar14 = (float)uVar53 * baseDepth + fVar31;
          fVar4 = (float)uVar54 * baseDepth + fVar2;
          fVar17 = 0.0;
          a_02.y = fVar25;
          a_02.x = fVar24;
          a_02.z = fVar26;
          b_02.y = fVar2;
          b_02.x = fVar31;
          b_02.z = fVar1;
          c_02.y = fVar4;
          c_02.x = fVar14;
          c_02.z = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                    ((Plane *)&stack0xffffffbc,a_02,b_02,c_02,(MethodInfo *)0x0);
          if (fVar14 * (float)uVar6 + fVar4 * (float)uVar7 + fVar3 * fVar8 + fVar17 <=
              epsilon._ptContainEps) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Single, Single, Quaternion) */

bool Assembly-CSharp.dll::RTG::PyramidMath::PyramidMath_Raycast
               (Ray ray,float *t,Vector3 baseCenter,float baseWidth,float baseDepth,float height,
               Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__System__Comparison<float>);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<float>__Sort_System__Comparison<float>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<float>__List_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<float>);
    func_?(&TypeInfo__RTG__TriangleMath);
    func_?(&MethodInfo__RTG__PyramidMath____c___Raycast_b__1_0_float__float_);
    func_?(&TypeInfo__RTG__PyramidMath____c);
    cRam_? = '\x01';
  }
  *t = 0.0;
  fVar1 = ray.m_Origin.x;
  fVar2 = ray.m_Origin.y;
  fVar3 = ray.m_Origin.z;
  fVar4 = ray.m_Direction.x;
  fVar5 = ray.m_Direction.y;
  fVar6 = ray.m_Direction.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff00,baseCenter,rotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  ray_01.m_Origin.y = fVar2;
  ray_01.m_Origin.x = fVar1;
  ray_01.m_Origin.z = fVar3;
  ray_01.m_Direction.x = fVar4;
  ray_01.m_Direction.y = fVar5;
  ray_01.m_Direction.z = fVar6;
  pRVar8 = RayEx::RayEx_InverseTransform((Ray *)&stack0xffffff40,ray_01,*pMVar7,(MethodInfo *)0x0)
  ;
  ray.m_Origin.x = (pRVar8->m_Origin).x;
  ray.m_Origin.y = (pRVar8->m_Origin).y;
  ray.m_Origin.z = (pRVar8->m_Origin).z;
  ray.m_Direction.x = (pRVar8->m_Direction).x;
  uVar9 = (pRVar8->m_Direction).y;
  uVar10 = (pRVar8->m_Direction).z;
  fVar1 = (pRVar8->m_Origin).z;
  fVar2 = (pRVar8->m_Direction).x;
  uVar11 = (pRVar8->m_Direction).y;
  uVar12 = (pRVar8->m_Direction).z;
  ray.m_Direction.y = (float)uVar9;
  ray.m_Direction.z = (float)uVar10;
  fVar3 = baseWidth;
  fVar4 = height;
  fVar5 = baseDepth;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar14 = (pVVar13->upVector).x;
  uVar15 = (pVVar13->upVector).y;
  fVar6 = (float)uVar14 * height * _UNK_?;
  fVar16 = (float)uVar15 * height * _UNK_?;
  fVar17 = (pVVar13->upVector).z * height * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar18 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar19 = (pQVar18->identityQuaternion).x;
  fVar20 = (pQVar18->identityQuaternion).y;
  fVar21 = (pQVar18->identityQuaternion).z;
  fVar22 = (pQVar18->identityQuaternion).w;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  auVar23._4_4_ = fVar2;
  auVar23._0_4_ = fVar1;
  auVar23._8_4_ = uVar11;
  auVar23._12_4_ = uVar12;
  auVar23._16_8_ = 0;
  VVar24.y = fVar16;
  VVar24.x = fVar6;
  VVar24.z = fVar17;
  boxSize.y = fVar4;
  boxSize.x = fVar3;
  boxSize.z = fVar5;
  boxRotation.y = fVar20;
  boxRotation.x = fVar19;
  boxRotation.z = fVar21;
  boxRotation.w = fVar22;
  bVar25 = BoxMath::BoxMath_Raycast
                     ((Ray)(auVar23 << 0x40),VVar24,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                      (MethodInfo *)0x0);
  if (bVar25 == 0) {
    return 0;
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,5,MethodInfo__System__Collections__Generic__List<float>__List_int_);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar26 = (pVVar13->upVector).x;
  uVar27 = (pVVar13->upVector).y;
  fVar1 = (pVVar13->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  value.y = (float)uVar27;
  value.x = (float)uVar26;
  value.z = fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffff78,value,(MethodInfo *)0x0);
  ray_04.m_Origin.y = ray.m_Origin.y;
  ray_04.m_Origin.x = ray.m_Origin.x;
  ray_04.m_Origin.z = ray.m_Origin.z;
  ray_04.m_Direction.x = ray.m_Direction.x;
  ray_04.m_Direction.y = ray.m_Direction.y;
  ray_04.m_Direction.z = ray.m_Direction.z;
  ppVVar28 = (Vector3__Class **)ray.m_Origin.z;
  bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffa0,ray_04,(float *)&stack0xffffffd8,(MethodInfo *)0x0);
  if (bVar25 != 0) {
    ray.m_Origin.y = (float)&ray;
    ray.m_Direction.x = 0.0;
    ray.m_Origin.x = (float)&stack0xffffff78;
    ray.m_Origin.z = (float)ppVVar28;
    pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)ray.m_Origin.x,(Ray *)ray.m_Origin.y,(float)ppVVar28,
                         (MethodInfo *)0x0);
    fVar1 = pVVar29->x;
    ppVVar28 = (Vector3__Class **)pVVar29->y;
    fVar2 = pVVar29->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar30 = (pVVar13->rightVector).x;
    uVar31 = (pVVar13->rightVector).y;
    fVar3 = (pVVar13->rightVector).z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    ray.m_Direction.x = 0.0;
    ray.m_Direction.y = 0.0;
    ray.m_Direction.z = 0.0;
    pVVar29 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
    uVar32 = pVVar29->x;
    uVar33 = pVVar29->y;
    ray.m_Origin.z = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
    point_01.y = (float)ppVVar28;
    point_01.x = fVar1;
    point_01.z = fVar2;
    auVar34._8_4_ = 0;
    auVar34._0_8_ = baseCenter._4_8_;
    ray.m_Origin.x = (float)uVar32;
    ray.m_Origin.y = (float)uVar33;
    bVar25 = QuadMath::QuadMath_Contains3DPoint
                       (point_01,0,(Vector3)(auVar34 << 0x20),baseWidth,baseDepth,
                        (Vector3)CONCAT48(fVar3,CONCAT44((float)uVar31,(float)uVar30)),*pVVar29,
                        (QuadEpsilon)ZEXT816(0),(MethodInfo *)0x0);
    if (bVar25 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      func_?();
    }
  }
  fVar1 = baseWidth * _UNK_?;
  fVar2 = baseDepth * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar35 = (pVVar13->upVector).x;
  uVar36 = (pVVar13->upVector).y;
  pLVar37 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)((float)uVar35 * height);
  ppVVar38 = (Vector3__Class **)((float)uVar36 * height);
  pMVar39 = (MethodInfo *)((pVVar13->upVector).z * height);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar40 = (pVVar13->rightVector).x;
  uVar41 = (pVVar13->rightVector).y;
  fVar4 = (float)uVar40 * fVar1;
  fVar5 = (float)uVar41 * fVar1;
  fVar3 = (pVVar13->rightVector).z * fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar42 = (pVVar13->forwardVector).x;
  uVar43 = (pVVar13->forwardVector).y;
  fVar3 = fVar3 - (pVVar13->forwardVector).z * fVar2;
  fVar4 = fVar4 - (float)uVar42 * fVar2;
  fVar5 = fVar5 - (float)uVar43 * fVar2;
  fVar6 = fVar3;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar44 = (pVVar13->rightVector).x;
  uVar45 = (pVVar13->rightVector).y;
  fVar3 = fVar3 - (pVVar13->rightVector).z * baseWidth;
  c_00.y = fVar5 - (float)uVar45 * baseWidth;
  c_00.x = fVar4 - (float)uVar44 * baseWidth;
  a.y = (float)ppVVar38;
  a.x = (float)pLVar37;
  a.z = (float)pMVar39;
  b_00.y = fVar5;
  b_00.x = fVar4;
  b_00.z = fVar6;
  c_00.z = fVar3;
  pMVar46 = pMVar39;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&stack0xffffff68,a,b_00,c_00,(MethodInfo *)0x0);
  ray_02.m_Origin.y = ray.m_Origin.y;
  ray_02.m_Origin.x = ray.m_Origin.x;
  ray_02.m_Origin.z = ray.m_Origin.z;
  ray_02.m_Direction.x = ray.m_Direction.x;
  ray_02.m_Direction.y = ray.m_Direction.y;
  ray_02.m_Direction.z = ray.m_Direction.z;
  fVar16 = ray.m_Origin.x;
  fVar17 = ray.m_Origin.y;
  bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff68,ray_02,(float *)&stack0xffffffd8,(MethodInfo *)0x0);
  distance = ppVVar28;
  if (bVar25 != 0) {
    pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffff78,&ray,(float)ppVVar28,(MethodInfo *)0x0);
    uVar47 = pVVar29->x;
    uVar48 = pVVar29->y;
    fVar19 = pVVar29->z;
    pMVar39 = pMVar46;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      pMVar39 = pMVar46;
    }
    point_00.y = (float)uVar48;
    point_00.x = (float)uVar47;
    point_00.z = fVar19;
    p0_01.y = (float)ppVVar38;
    p0_01.x = (float)pLVar37;
    p0_01.z = (float)pMVar39;
    p1_01.y = fVar5;
    p1_01.x = fVar4;
    p1_01.z = fVar6;
    p2_01.y = fVar17;
    p2_01.x = fVar16;
    p2_01.z = fVar3;
    bVar25 = TriangleMath::TriangleMath_Contains3DPoint
                       (point_00,0,p0_01,p1_01,p2_01,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
    pMVar46 = pMVar39;
    distance = ppVVar28;
    if (bVar25 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      pLVar37 = this;
      pMVar39 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
      func_?();
      ppVVar38 = ppVVar28;
      pMVar46 = pMVar39;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar49 = (pVVar13->rightVector).x;
  uVar50 = (pVVar13->rightVector).y;
  fVar3 = (float)uVar49 * fVar1;
  fVar4 = (float)uVar50 * fVar1;
  fVar1 = (pVVar13->rightVector).z * fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar51 = (pVVar13->forwardVector).x;
  uVar52 = (pVVar13->forwardVector).y;
  fVar1 = (pVVar13->forwardVector).z * fVar2 + fVar1;
  fVar3 = (float)uVar51 * fVar2 + fVar3;
  fVar4 = (float)uVar52 * fVar2 + fVar4;
  fVar2 = fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar53 = (pVVar13->forwardVector).x;
  uVar54 = (pVVar13->forwardVector).y;
  fVar5 = fVar3 - (float)uVar53 * baseDepth;
  pLVar55 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(fVar4 - (float)uVar54 * baseDepth);
  a_00.y = (float)ppVVar38;
  a_00.x = (float)pLVar37;
  a_00.z = (float)pMVar39;
  b_01.y = fVar4;
  b_01.x = fVar3;
  b_01.z = fVar2;
  c_01.y = (float)pLVar55;
  c_01.x = fVar5;
  c_01.z = fVar1 - (pVVar13->forwardVector).z * baseDepth;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&stack0xffffff68,a_00,b_01,c_01,(MethodInfo *)0x0);
  ray_03.m_Origin.y = ray.m_Origin.y;
  ray_03.m_Origin.x = ray.m_Origin.x;
  ray_03.m_Origin.z = ray.m_Origin.z;
  ray_03.m_Direction.x = ray.m_Direction.x;
  ray_03.m_Direction.y = ray.m_Direction.y;
  ray_03.m_Direction.z = ray.m_Direction.z;
  ppVVar28 = (Vector3__Class **)ray.m_Origin.y;
  fVar1 = ray.m_Origin.z;
  puVar56 = (undefined *)ray.m_Direction.x;
  fVar2 = ray.m_Direction.y;
  fVar3 = ray.m_Direction.z;
  bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff68,ray_03,(float *)&stack0xffffffd8,(MethodInfo *)0x0);
  if (bVar25 != 0) {
    puVar57 = &UNK_?;
    pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffff78,&ray,(float)distance,(MethodInfo *)0x0);
    uVar58 = pVVar29->y;
    fVar4 = pVVar29->z;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pMVar39 = (MethodInfo *)0x0;
    puVar56 = &UNK_?;
    auVar59._4_4_ = fVar4;
    auVar59._0_4_ = uVar58;
    auVar59._8_4_ = 0;
    p0_02.y = (float)ppVVar28;
    p0_02.x = (float)pLVar55;
    p0_02.z = 0.0;
    p1_02.y = fVar3;
    p1_02.x = fVar2;
    p1_02.z = (float)puVar57;
    p2_02.y = (float)pLVar55;
    p2_02.x = fVar5;
    p2_02.z = (float)ppVVar28;
    bVar25 = TriangleMath::TriangleMath_Contains3DPoint
                       ((Vector3)(auVar59 << 0x20),0,p0_02,p1_02,p2_02,(TriangleEpsilon)ZEXT812(0),
                        (MethodInfo *)0x0);
    pLVar37 = pLVar55;
    ppVVar38 = ppVVar28;
    pMVar46 = pMVar39;
    if (bVar25 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      ray.m_Direction.z = (float)&UNK_?;
      func_?();
      pLVar37 = pLVar55;
      ppVVar38 = ppVVar28;
      pMVar46 = pMVar39;
    }
  }
  if (cRam_? == '\0') {
    ppVVar38 = &TypeInfo__UnityEngine__Vector3;
    pLVar37 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar60 = (pVVar13->rightVector).x;
  uVar61 = (pVVar13->rightVector).y;
  fVar2 = (float)(uVar60 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  ) * (float)puVar56;
  fVar4 = (float)(uVar61 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  ) * (float)puVar56;
  fVar3 = (float)((uint)(pVVar13->rightVector).z ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
           (float)puVar56;
  if (cRam_? == '\0') {
    ppVVar38 = &TypeInfo__UnityEngine__Vector3;
    pLVar37 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar62 = (pVVar13->forwardVector).x;
  uVar63 = (pVVar13->forwardVector).y;
  fVar3 = (pVVar13->forwardVector).z * fVar1 + fVar3;
  fVar2 = (float)uVar62 * fVar1 + fVar2;
  fVar4 = (float)uVar63 * fVar1 + fVar4;
  fVar5 = fVar3;
  if (cRam_? == '\0') {
    ppVVar38 = &TypeInfo__UnityEngine__Vector3;
    pLVar37 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar64 = (pVVar13->rightVector).x;
  uVar65 = (pVVar13->rightVector).y;
  fVar3 = (pVVar13->rightVector).z * baseWidth + fVar3;
  fVar6 = (float)uVar64 * baseWidth + fVar2;
  fVar17 = (float)uVar65 * baseWidth + fVar4;
  fVar16 = 0.0;
  puVar57 = &UNK_?;
  a_01.y = (float)ppVVar38;
  a_01.x = (float)pLVar37;
  a_01.z = (float)pMVar39;
  b_02.y = fVar4;
  b_02.x = fVar2;
  b_02.z = fVar5;
  c_02.y = fVar17;
  c_02.x = fVar6;
  c_02.z = fVar3;
  fVar4 = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&stack0xffffff68,a_01,b_02,c_02,(MethodInfo *)0x0);
  distance_00 = &UNK_?;
  ray_05.m_Origin.y = ray.m_Origin.y;
  ray_05.m_Origin.x = ray.m_Origin.x;
  ray_05.m_Origin.z = ray.m_Origin.z;
  ray_05.m_Direction.x = ray.m_Direction.x;
  ray_05.m_Direction.y = ray.m_Direction.y;
  ray_05.m_Direction.z = ray.m_Direction.z;
  bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff68,ray_05,(float *)&stack0xffffffd8,(MethodInfo *)0x0);
  if (bVar25 != 0) {
    ray.m_Direction.z = (float)&ray;
    ray.m_Direction.y = (float)&stack0xffffff78;
    ray.m_Direction.x = (float)&UNK_?;
    pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)ray.m_Direction.y,(Ray *)ray.m_Direction.z,(float)distance_00,
                         (MethodInfo *)0x0);
    uVar66 = pVVar29->x;
    uVar67 = pVVar29->y;
    fVar19 = pVVar29->z;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray.m_Origin.y = (float)pMVar46;
    ray.m_Origin.x = fVar16;
    ray.m_Direction.y = fVar5;
    ray.m_Direction.x = (float)puVar57;
    ray.m_Origin.z = fVar2;
    ray.m_Direction.z = fVar6;
    baseDepth = 0.0;
    point_02.y = (float)uVar67;
    point_02.x = (float)uVar66;
    point_02.z = fVar19;
    p0.y = ray.m_Origin.x;
    p0.x = fVar4;
    p0.z = ray.m_Origin.y;
    p1.y = ray.m_Direction.x;
    p1.x = ray.m_Origin.z;
    p1.z = ray.m_Direction.y;
    p2.y = fVar17;
    p2.x = ray.m_Direction.z;
    p2.z = fVar3;
    fVar16 = ray.m_Origin.x;
    pMVar39 = (MethodInfo *)ray.m_Origin.y;
    bVar25 = TriangleMath::TriangleMath_Contains3DPoint
                       (point_02,0,p0,p1,p2,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
    pMVar46 = pMVar39;
    if (bVar25 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      func_?();
      pMVar46 = pMVar39;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar68 = (pVVar13->rightVector).x;
  uVar69 = (pVVar13->rightVector).y;
  fVar2 = (float)(uVar68 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  ) * (float)puVar56;
  fVar5 = (float)(uVar69 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  ) * (float)puVar56;
  fVar3 = (float)((uint)(pVVar13->rightVector).z ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
           (float)puVar56;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar70 = (pVVar13->forwardVector).x;
  uVar71 = (pVVar13->forwardVector).y;
  fVar3 = fVar3 - (pVVar13->forwardVector).z * fVar1;
  fVar2 = fVar2 - (float)uVar70 * fVar1;
  fVar5 = fVar5 - (float)uVar71 * fVar1;
  fVar1 = fVar3;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ray.m_Direction.x = fVar1;
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar72 = (pVVar13->forwardVector).x;
  uVar73 = (pVVar13->forwardVector).y;
  pfVar74 = (float *)((pVVar13->forwardVector).z * baseDepth + fVar3);
  ray.m_Direction.y = (float)uVar72 * baseDepth + fVar2;
  ray.m_Direction.z = (float)uVar73 * baseDepth + fVar5;
  ray.m_Origin.x = (float)pMVar39;
  fVar3 = fVar16;
  fVar75 = fVar4;
  VVar24 = (Vector3)CONCAT84(VVar24._0_8_,fVar75);
  b.y = fVar5;
  b.x = fVar2;
  b.z = ray.m_Direction.x;
  c.y = ray.m_Direction.z;
  c.x = ray.m_Direction.y;
  c.z = (float)pfVar74;
  ray.m_Origin.y = fVar2;
  ray.m_Origin.z = fVar5;
  fVar1 = ray.m_Direction.y;
  fVar3 = ray.m_Direction.z;
  fVar6 = ray.m_Direction.x;
  pfVar76 = pfVar74;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&stack0xffffff68,VVar24,b,c,(MethodInfo *)0x0);
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff68,ray_00,(float *)&stack0xffffffd8,(MethodInfo *)0x0);
  if (bVar25 != 0) {
    pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffb8,&ray,(float)distance_00,(MethodInfo *)0x0);
    uVar77 = pVVar29->x;
    uVar78 = pVVar29->y;
    fVar17 = pVVar29->z;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    p0_00.y = fVar16;
    p0_00.x = fVar4;
    point.y = (float)uVar78;
    point.x = (float)uVar77;
    point.z = fVar17;
    p0_00.z = (float)pMVar46;
    p1_00.y = fVar5;
    p1_00.x = fVar2;
    p1_00.z = fVar6;
    p2_00.y = fVar3;
    p2_00.x = fVar1;
    p2_00.z = (float)pfVar76;
    bVar25 = TriangleMath::TriangleMath_Contains3DPoint
                       (point,0,p0_00,p1_00,p2_00,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
    if (bVar25 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      func_?();
      goto code_?;
    }
  }
  if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
code_?:
    func_?();
    pcVar79 = (code *)swi(3);
    bVar25 = (*pcVar79)();
    return bVar25;
  }
code_?:
  if ((this->fields)._size == 0) {
    return 0;
  }
  if ((TypeInfo__RTG__PyramidMath____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = TypeInfo__RTG__PyramidMath____c->static_fields->__9__1_0;
  if (this_00 == (Comparison_1_Single_ *)0x0) {
    if ((TypeInfo__RTG__PyramidMath____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__RTG__PyramidMath____c->static_fields->__9;
    this_00 = (Comparison_1_Single_ *)func_?();
    mscorlib.dll::System::Comparison`1[Single]::Comparison_1_Single___ctor
              (this_00,(Object *)object,
               MethodInfo__RTG__PyramidMath____c___Raycast_b__1_0_float__float_,(MethodInfo *)0x0);
    TypeInfo__RTG__PyramidMath____c->static_fields->__9__1_0 = this_00;
    func_?();
  }
  mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__Sort_1
            ((List_1_System_Single_ *)this,this_00,
             MethodInfo__System__Collections__Generic__List<float>__Sort_System__Comparison<float>_)
  ;
  fVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
          List_1_System_Single__get_Item
                    ((List_1_System_Single_ *)this,0,
                     MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
  *pfVar74 = fVar1;
  return 1;
}

