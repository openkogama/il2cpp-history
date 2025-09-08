
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
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,rotation,TypeInfo__UnityEngine__Vector3->static_fields->rightVector
                      ,(MethodInfo *)0x0);
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
                     (&VStack_2,rotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar8 = baseWidth * _UNK_?;
  uStack_9._0_4_ = (undefined *)pVVar1->x;
  uStack_9._4_4_ = (List_1_UnityEngine_Vector3_ *)pVVar1->y;
  fStack_10 = pVVar1->z;
  fVar11 = baseDepth * _UNK_?;
  pLVar12 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar12,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  fVar13 = (float)(undefined *)uStack_9;
  VStack_2.x = (float)(undefined *)uStack_9 * fVar11 + baseCenter.x + fStack_6 * fVar8;
  VStack_2.y = (float)uStack_9._4_4_ * fVar11 + baseCenter.y + fStack_7 * fVar8;
  VStack_2.z = fStack_10 * fVar11 + baseCenter.z + (float)pMStack_5 * fVar8;
  if (pLVar12 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_9._0_4_ = &UNK_?;
    fStack_10 = VStack_2.x;
    fStack_6 = VStack_2.y;
    fStack_7 = VStack_2.z;
    uStack_9._4_4_ = pLVar12;
    func_?();
    VStack_2.z = (baseCenter.z + (float)pMStack_5 * fVar8) - fStack_10 * fVar11;
    fStack_10 = (baseCenter.x + fStack_6 * fVar8) - fVar13 * fVar11;
    fStack_6 = (baseCenter.y + fStack_7 * fVar8) - (float)uStack_9._4_4_ * fVar11;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_9._0_4_ = &UNK_?;
    fStack_7 = VStack_2.z;
    uStack_9._4_4_ = pLVar12;
    func_?();
    VStack_2.z = (baseCenter.z - (float)pMStack_5 * fVar8) - fStack_10 * fVar11;
    fStack_10 = (baseCenter.x - fStack_6 * fVar8) - fVar13 * fVar11;
    fStack_6 = (baseCenter.y - fStack_7 * fVar8) - (float)uStack_9._4_4_ * fVar11;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_9._0_4_ = &UNK_?;
    fStack_7 = VStack_2.z;
    uStack_9._4_4_ = pLVar12;
    func_?();
    VStack_2.z = fStack_10 * fVar11 + (baseCenter.z - (float)pMStack_5 * fVar8);
    fStack_10 = fVar13 * fVar11 + (baseCenter.x - fStack_6 * fVar8);
    fStack_6 = (float)uStack_9._4_4_ * fVar11 + (baseCenter.y - fStack_7 * fVar8);
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_9 = CONCAT44(pLVar12,&UNK_?);
    fStack_7 = VStack_2.z;
    func_?();
    return pLVar12;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pLVar12 = (List_1_UnityEngine_Vector3_ *)(*pcVar14)();
  return pLVar12;
}


/* Boolean ContainsPoint(Vector3, Vector3, Single, Single, Single, Quaternion, PyramidEpsilon) */

bool Assembly-CSharp.dll::RTG::PyramidMath::PyramidMath_ContainsPoint
               (Vector3 point,Vector3 baseCenter,float baseWidth,float baseDepth,float height,
               Quaternion rotation,PyramidEpsilon epsilon,MethodInfo *method)

{
  func_?(&stack0xffffff30,0,0x40);
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  func_?(&stack0xfffffef0,0,0x40);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
            ((Matrix4x4 *)&stack0xfffffeb0,baseCenter,rotation,
             TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
            ((Matrix4x4 *)&stack0xfffffeb0,(Matrix4x4 *)&stack0xffffff30,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                      (&VStack_5,(Matrix4x4 *)&stack0xfffffef0,point,(MethodInfo *)0x0);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  fVar8 = pVVar4->z;
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
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_5,value,(MethodInfo *)0x0);
  uVar18 = pVVar4->x;
  uVar19 = pVVar4->y;
  uVar20 = pVVar4->x;
  uVar21 = pVVar4->y;
  if ((float)uVar7 * (float)uVar21 + (float)uVar6 * (float)uVar20 + fVar8 * pVVar4->z +
      (float)((uint)((float)uVar16 * (float)uVar19 + (float)uVar15 * (float)uVar18 +
                    fVar17 * pVVar4->z) ^
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
    VStack_29.x = (float)uVar27 * fVar14;
    fStack_30 = (float)uVar28 * fVar14;
    fStack_31 = (pVVar9->rightVector).z * fVar14;
    VStack_29.y = 0.0;
    VStack_29.z = 0.0;
    puStack_32 = (undefined *)0x0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    puVar35 = (undefined *)0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
      fVar33 = VStack_29.y;
      fVar34 = VStack_29.z;
      puVar35 = puStack_32;
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar36 = (pVVar9->forwardVector).x;
    uVar37 = (pVVar9->forwardVector).y;
    VStack_29.x = VStack_29.x - (float)uVar36 * fVar17;
    fVar38 = fStack_30 - (float)uVar37 * fVar17;
    fVar39 = fStack_31 - (pVVar9->forwardVector).z * fVar17;
    VStack_29.y = fVar33;
    VStack_29.z = fVar34;
    puStack_32 = puVar35;
    fVar33 = VStack_29.x;
    fStack_30 = fVar38;
    fStack_31 = fVar39;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar40 = (pVVar9->rightVector).x;
    uVar41 = (pVVar9->rightVector).y;
    a.y = fVar25;
    a.x = fVar24;
    a.z = fVar26;
    b.y = fVar38;
    b.x = fVar33;
    b.z = fVar39;
    c.y = fStack_30 - (float)uVar41 * baseWidth;
    c.x = VStack_29.x - (float)uVar40 * baseWidth;
    c.z = fStack_31 - (pVVar9->rightVector).z * baseWidth;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
              ((Plane *)&stack0xffffffb0,a,b,c,(MethodInfo *)0x0);
    if (fVar1 * (float)uVar6 + fVar2 * (float)uVar7 + fVar3 * fVar8 + 0.0 <=
        epsilon._ptContainEps) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_5.x = (pVVar9->rightVector).x;
      VStack_5.y = (pVVar9->rightVector).y;
      VStack_5.z = (pVVar9->rightVector).z;
      VStack_29.x = VStack_5.x * fVar14;
      fStack_31 = VStack_5.y * fVar14;
      fStack_30 = VStack_5.z * fVar14;
      VStack_29.y = 0.0;
      VStack_29.z = 0.0;
      puStack_32 = (undefined *)0x0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      puVar35 = (undefined *)0;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
        fVar33 = VStack_29.y;
        fVar34 = VStack_29.z;
        puVar35 = puStack_32;
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_5.x = (pVVar9->forwardVector).x;
      VStack_5.y = (pVVar9->forwardVector).y;
      VStack_5.z = (pVVar9->forwardVector).z;
      VStack_29.x = VStack_29.x + VStack_5.x * fVar17;
      fVar38 = fStack_31 + VStack_5.y * fVar17;
      fVar39 = fStack_30 + VStack_5.z * fVar17;
      VStack_29.y = fVar33;
      VStack_29.z = fVar34;
      puStack_32 = puVar35;
      fVar33 = VStack_29.x;
      fStack_30 = fVar39;
      fStack_31 = fVar38;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_5.x = (pVVar9->forwardVector).x;
      VStack_5.y = (pVVar9->forwardVector).y;
      VStack_5.z = (pVVar9->forwardVector).z;
      a_00.y = fVar25;
      a_00.x = fVar24;
      a_00.z = fVar26;
      b_00.y = fVar38;
      b_00.x = fVar33;
      b_00.z = fVar39;
      c_00.y = fStack_31 - VStack_5.y * baseDepth;
      c_00.x = VStack_29.x - VStack_5.x * baseDepth;
      c_00.z = fStack_30 - VStack_5.z * baseDepth;
      UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                ((Plane *)&stack0xffffffb0,a_00,b_00,c_00,(MethodInfo *)0x0);
      if (fVar1 * (float)uVar6 + fVar2 * (float)uVar7 + fVar3 * fVar8 + 0.0 <=
          epsilon._ptContainEps) {
        pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                            (&VStack_29,(MethodInfo *)0x0);
        VStack_5.x = pVVar4->x;
        VStack_5.y = pVVar4->y;
        VStack_5.z = pVVar4->z;
        fVar34 = (float)((uint)VStack_5.x ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 fVar14;
        fStack_30 = (float)((uint)VStack_5.y ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                    * fVar14;
        fStack_31 = (float)((uint)VStack_5.z ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                    * fVar14;
        pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&VStack_29,(MethodInfo *)0x0)
        ;
        VStack_5.x = pVVar4->x;
        VStack_5.y = pVVar4->y;
        VStack_5.z = pVVar4->z;
        fVar34 = fVar34 + VStack_5.x * fVar17;
        fStack_30 = fStack_30 + VStack_5.y * fVar17;
        fVar33 = fStack_31 + VStack_5.z * fVar17;
        fStack_31 = fVar33;
        pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                            (&VStack_29,(MethodInfo *)0x0);
        VStack_5.x = pVVar4->x;
        VStack_5.y = pVVar4->y;
        VStack_5.z = pVVar4->z;
        a_01.y = fVar25;
        a_01.x = fVar24;
        a_01.z = fVar26;
        b_01.y = fStack_30;
        b_01.x = fVar34;
        b_01.z = fVar33;
        c_01.y = fStack_30 + VStack_5.y * baseWidth;
        c_01.x = fVar34 + VStack_5.x * baseWidth;
        c_01.z = fStack_31 + VStack_5.z * baseWidth;
        UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                  ((Plane *)&stack0xffffffb0,a_01,b_01,c_01,(MethodInfo *)0x0);
        if (fVar1 * (float)uVar6 + fVar2 * (float)uVar7 + fVar3 * fVar8 + 0.0 <=
            epsilon._ptContainEps) {
          pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                              (&VStack_29,(MethodInfo *)0x0);
          VStack_5.x = pVVar4->x;
          VStack_5.y = pVVar4->y;
          VStack_5.z = pVVar4->z;
          fVar33 = (float)((uint)VStack_5.x ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                   * fVar14;
          fStack_30 = (float)((uint)VStack_5.y ^
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                             ) * fVar14;
          fStack_31 = (float)((uint)VStack_5.z ^
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                             ) * fVar14;
          pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                              (&VStack_29,(MethodInfo *)0x0);
          VStack_5.x = pVVar4->x;
          VStack_5.y = pVVar4->y;
          VStack_5.z = pVVar4->z;
          fVar33 = fVar33 - VStack_5.x * fVar17;
          fStack_30 = fStack_30 - VStack_5.y * fVar17;
          fVar1 = fStack_31 - VStack_5.z * fVar17;
          fStack_31 = fVar1;
          pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                              (&VStack_29,(MethodInfo *)0x0);
          VStack_5.x = pVVar4->x;
          VStack_5.y = pVVar4->y;
          VStack_5.z = pVVar4->z;
          fVar2 = VStack_5.z * baseDepth + fStack_31;
          fVar3 = VStack_5.y * baseDepth + fStack_30;
          fVar14 = 0.0;
          a_02.y = fVar25;
          a_02.x = fVar24;
          a_02.z = fVar26;
          b_02.y = fStack_30;
          b_02.x = fVar33;
          b_02.z = fVar1;
          c_02.y = fVar3;
          c_02.x = VStack_5.x * baseDepth + fVar33;
          c_02.z = fVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                    ((Plane *)&stack0xffffffb0,a_02,b_02,c_02,(MethodInfo *)0x0);
          if (fVar3 * (float)uVar6 + fVar2 * (float)uVar7 + fVar14 * fVar8 + 0.0 <=
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
                      ((Matrix4x4 *)&stack0xffffff20,baseCenter,rotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  RVar8.m_Origin.y = fVar2;
  RVar8.m_Origin.x = fVar1;
  RVar8.m_Origin.z = fVar3;
  RVar8.m_Direction.x = fVar4;
  RVar8.m_Direction.y = fVar5;
  RVar8.m_Direction.z = fVar6;
  pRVar9 = RayEx::RayEx_InverseTransform((Ray *)&stack0xffffffc0,RVar8,*pMVar7,(MethodInfo *)0x0)
  ;
  ray.m_Origin.x = (pRVar9->m_Origin).x;
  ray.m_Origin.y = (pRVar9->m_Origin).y;
  ray.m_Origin.z = (pRVar9->m_Origin).z;
  ray.m_Direction.x = (pRVar9->m_Direction).x;
  uVar10 = (pRVar9->m_Direction).y;
  uVar11 = (pRVar9->m_Direction).z;
  fVar1 = (pRVar9->m_Direction).y;
  fVar2 = (pRVar9->m_Direction).z;
  ray.m_Direction.y = (float)uVar10;
  ray.m_Direction.z = (float)uVar11;
  fVar3 = baseWidth;
  fVar4 = height;
  fVar5 = baseDepth;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar13 = (pVVar12->upVector).x;
  uVar14 = (pVVar12->upVector).y;
  fVar15 = (float)uVar13 * height * _UNK_?;
  fVar16 = (float)uVar14 * height * _UNK_?;
  fVar6 = (pVVar12->upVector).z * height * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar17 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar18 = (pQVar17->identityQuaternion).x;
  fVar19 = (pQVar17->identityQuaternion).y;
  fVar20 = (pQVar17->identityQuaternion).z;
  fVar21 = (pQVar17->identityQuaternion).w;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  ray_02.m_Origin.y = fVar19;
  ray_02.m_Origin.x = fVar18;
  ray_02.m_Origin.z = fVar20;
  ray_02.m_Direction.x = fVar21;
  ray_02.m_Direction.y = fVar1;
  ray_02.m_Direction.z = fVar2;
  boxCenter.y = fVar16;
  boxCenter.x = fVar15;
  boxCenter.z = fVar6;
  boxSize.y = fVar4;
  boxSize.x = fVar3;
  boxSize.z = fVar5;
  boxRotation.y = fVar19;
  boxRotation.x = fVar18;
  boxRotation.z = fVar20;
  boxRotation.w = fVar21;
  bVar22 = BoxMath::BoxMath_Raycast
                     (ray_02,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0)
  ;
  if (bVar22 == 0) {
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
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar12->upVector).x;
  fVar4 = (pVVar12->upVector).y;
  fVar1 = (pVVar12->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  value.y = fVar4;
  value.x = fVar3;
  value.z = fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffffb0,value,(MethodInfo *)0x0);
  fVar1 = ray.m_Origin.x;
  ray.m_Origin.y = (float)&stack0xffffffdc;
  ray.m_Origin.z = 0.0;
  fVar2 = 0.0;
  ray.m_Origin.x = ray.m_Direction.z;
  fVar23 = ray.m_Direction.y;
  fVar24 = ray.m_Origin.y;
  fVar25 = fVar1;
  uVar26 = CONCAT44(fVar24,fVar25);
  fVar27 = 0.0;
  auVar28 = CONCAT48(fVar27,uVar26);
  fVar29 = ray.m_Direction.x;
  RVar8._0_16_ = CONCAT412(fVar29,auVar28);
  RVar8 = (Ray)CONCAT816(RVar8.m_Origin._0_8_,RVar8._0_16_);
  bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff90,RVar8,(float *)ray.m_Origin.y,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffc8,&ray,fVar2,(MethodInfo *)0x0);
    uVar31 = pVVar30->x;
    uVar32 = pVVar30->y;
    fVar1 = pVVar30->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar5 = (pVVar12->rightVector).x;
    uVar33 = (pVVar12->rightVector).y;
    fVar3 = (pVVar12->rightVector).z;
    fVar4 = fVar5;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
      fVar4 = fVar5;
    }
    ray.m_Direction.z = fVar4;
    baseWidth = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
    pVVar30 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
    uVar34 = pVVar30->x;
    uVar35 = pVVar30->y;
    baseDepth = 0.0;
    height = 0.0;
    ray.m_Direction.y = 0.0;
    ray.m_Origin.y = (float)uVar34;
    ray.m_Origin.z = (float)uVar35;
    point_03.y = (float)uVar32;
    point_03.x = (float)uVar31;
    point_03.z = fVar1;
    quadCenter.y = (float)uVar34;
    quadCenter.x = fVar3;
    quadCenter.z = (float)uVar35;
    quadRight.y = (float)uVar33;
    quadRight.x = ray.m_Direction.z;
    quadRight.z = fVar3;
    ray.m_Origin.x = fVar3;
    ray.m_Direction.x = baseWidth;
    bVar22 = QuadMath::QuadMath_Contains3DPoint
                       (point_03,0,quadCenter,baseWidth,0.0,quadRight,*pVVar30,
                        (QuadEpsilon)ZEXT816(0),(MethodInfo *)0x0);
    if (bVar22 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      func_?();
    }
  }
  fVar1 = baseWidth * _UNK_?;
  fVar3 = baseDepth * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar36 = (pVVar12->upVector).x;
  uVar37 = (pVVar12->upVector).y;
  pfVar38 = (float *)((float)uVar36 * height);
  fVar5 = (float)uVar37 * height;
  fVar4 = (pVVar12->upVector).z * height;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar39 = (pVVar12->rightVector).x;
  uVar40 = (pVVar12->rightVector).y;
  fVar6 = (float)uVar39 * fVar1;
  fVar16 = (float)uVar40 * fVar1;
  fVar1 = (pVVar12->rightVector).z * fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar41 = (pVVar12->forwardVector).x;
  uVar42 = (pVVar12->forwardVector).y;
  fVar6 = fVar6 - (float)uVar41 * fVar3;
  fVar16 = fVar16 - (float)uVar42 * fVar3;
  fVar1 = fVar1 - (pVVar12->forwardVector).z * fVar3;
  fVar3 = fVar6;
  fVar15 = fVar16;
  fVar18 = fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar43 = (pVVar12->rightVector).x;
  uVar44 = (pVVar12->rightVector).y;
  fVar1 = fVar1 - (pVVar12->rightVector).z * baseWidth;
  c_00.y = fVar16 - (float)uVar44 * baseWidth;
  c_00.x = fVar6 - (float)uVar43 * baseWidth;
  a_00.y = fVar5;
  a_00.x = (float)pfVar38;
  a_00.z = fVar4;
  b_00.y = fVar15;
  b_00.x = fVar3;
  b_00.z = fVar18;
  c_00.z = fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&stack0xffffff60,a_00,b_00,c_00,(MethodInfo *)0x0);
  fVar16 = 0.0;
  ray_03.m_Origin.y = ray.m_Origin.y;
  ray_03.m_Origin.x = ray.m_Origin.x;
  ray_03.m_Origin.z = ray.m_Origin.z;
  ray_03.m_Direction.x = ray.m_Direction.x;
  ray_03.m_Direction.y = ray.m_Direction.y;
  ray_03.m_Direction.z = ray.m_Direction.z;
  fVar6 = ray.m_Direction.z;
  bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff60,ray_03,(float *)&stack0xffffffdc,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    pVVar30 = (Vector3 *)&stack0xffffffe0;
    puVar45 = &UNK_?;
    pVVar46 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        (pVVar30,&ray,fVar2,(MethodInfo *)0x0);
    fVar19 = pVVar46->x;
    fVar20 = pVVar46->z;
    fVar6 = fVar3;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      fVar6 = fVar3;
    }
    pfVar38 = (float *)0x0;
    fVar5 = 0.0;
    fVar16 = 0.0;
    point_01.y = fVar6;
    point_01.x = fVar19;
    point_01.z = fVar20;
    auVar47._4_8_ = 0;
    auVar47._0_4_ = fVar4;
    p1_01.y = fVar15;
    p1_01.x = fVar6;
    p1_01.z = fVar18;
    p2_01.y = (float)pVVar30;
    p2_01.x = (float)puVar45;
    p2_01.z = fVar1;
    bVar22 = TriangleMath::TriangleMath_Contains3DPoint
                       (point_01,0,(Vector3)(auVar47 << 0x40),p1_01,p2_01,
                        (TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
    if (bVar22 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      func_?();
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar48 = (pVVar12->rightVector).x;
  uVar49 = (pVVar12->rightVector).y;
  fVar1 = (float)uVar48 * fVar16;
  fVar3 = (float)uVar49 * fVar16;
  fVar16 = (pVVar12->rightVector).z * fVar16;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar50 = (pVVar12->forwardVector).x;
  uVar51 = (pVVar12->forwardVector).y;
  fVar1 = fVar1 + (float)uVar50 * fVar6;
  fVar3 = fVar3 + (float)uVar51 * fVar6;
  fVar16 = fVar16 + (pVVar12->forwardVector).z * fVar6;
  fVar6 = fVar1;
  fVar15 = fVar3;
  fVar18 = fVar16;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar52 = (pVVar12->forwardVector).x;
  uVar53 = (pVVar12->forwardVector).y;
  fVar1 = fVar1 - (float)uVar52 * baseDepth;
  fVar16 = fVar16 - (pVVar12->forwardVector).z * baseDepth;
  puVar45 = &UNK_?;
  a_01.y = fVar5;
  a_01.x = (float)pfVar38;
  a_01.z = fVar4;
  b_01.y = fVar15;
  b_01.x = fVar6;
  b_01.z = fVar18;
  c_01.y = fVar3 - (float)uVar53 * baseDepth;
  c_01.x = fVar1;
  c_01.z = fVar16;
  pfVar54 = pfVar38;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&stack0xffffff60,a_01,b_01,c_01,(MethodInfo *)0x0);
  this_01 = (Plane *)&stack0xffffff60;
  puVar55 = &UNK_?;
  ray_04.m_Origin.y = ray.m_Origin.y;
  ray_04.m_Origin.x = ray.m_Origin.x;
  ray_04.m_Origin.z = ray.m_Origin.z;
  ray_04.m_Direction.x = ray.m_Direction.x;
  ray_04.m_Direction.y = ray.m_Direction.y;
  ray_04.m_Direction.z = ray.m_Direction.z;
  fVar3 = ray.m_Origin.y;
  fVar5 = ray.m_Origin.z;
  fVar6 = ray.m_Direction.x;
  bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     (this_01,ray_04,(float *)&stack0xffffffdc,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffe0,&ray,fVar2,(MethodInfo *)0x0);
    fVar15 = pVVar30->x;
    uVar56 = pVVar30->y;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    point_02.y = (float)uVar56;
    point_02.x = fVar15;
    point_02.z = fVar18;
    p0_01.y = (float)puVar55;
    p0_01.x = (float)pfVar54;
    p0_01.z = fVar4;
    p1_02.y = fVar5;
    p1_02.x = fVar3;
    p1_02.z = fVar6;
    p2_02.y = fVar1;
    p2_02.x = fVar18;
    p2_02.z = fVar16;
    bVar22 = TriangleMath::TriangleMath_Contains3DPoint
                       (point_02,0,p0_01,p1_02,p2_02,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
    if (bVar22 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      func_?();
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar57 = (pVVar12->rightVector).x;
  uVar58 = (pVVar12->rightVector).y;
  fVar1 = (float)(uVar57 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
          * (float)pfVar38;
  fVar3 = (float)(uVar58 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
          * (float)pfVar38;
  fVar2 = (float)((uint)(pVVar12->rightVector).z ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
           (float)pfVar38;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar59 = (pVVar12->forwardVector).x;
  uVar60 = (pVVar12->forwardVector).y;
  fVar1 = fVar1 + (float)uVar59 * (float)puVar45;
  fVar3 = fVar3 + (float)uVar60 * (float)puVar45;
  fVar2 = fVar2 + (pVVar12->forwardVector).z * (float)puVar45;
  fVar5 = fVar1;
  fVar6 = fVar3;
  fVar16 = fVar2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar61 = (pVVar12->rightVector).x;
  uVar62 = (pVVar12->rightVector).y;
  fVar1 = fVar1 + (float)uVar61 * baseWidth;
  fVar3 = fVar3 + (float)uVar62 * baseWidth;
  a_02.y = (float)puVar55;
  a_02.x = (float)pfVar54;
  a_02.z = fVar4;
  b_02.y = fVar6;
  b_02.x = fVar5;
  b_02.z = fVar16;
  c_02.y = fVar3;
  c_02.x = fVar1;
  c_02.z = fVar2 + (pVVar12->rightVector).z * baseWidth;
  fVar21 = fVar4;
  fVar63 = fVar6;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&stack0xffffff60,a_02,b_02,c_02,(MethodInfo *)0x0);
  fVar20 = ray.m_Direction.y;
  fVar19 = ray.m_Direction.x;
  fVar18 = ray.m_Origin.z;
  fVar15 = ray.m_Origin.y;
  fVar2 = ray.m_Origin.x;
  ray.m_Origin.x = ray.m_Origin.y;
  ray.m_Origin.y = ray.m_Origin.z;
  ray.m_Origin.z = ray.m_Direction.x;
  ray.m_Direction.x = ray.m_Direction.y;
  ray.m_Direction.y = ray.m_Direction.z;
  ray_00.m_Origin.y = fVar15;
  ray_00.m_Origin.x = fVar2;
  ray_00.m_Origin.z = fVar18;
  ray_00.m_Direction.x = fVar19;
  ray_00.m_Direction.y = fVar20;
  ray_00.m_Direction.z = ray.m_Direction.z;
  ray.m_Direction.z = (float)&stack0xffffffdc;
  bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff60,ray_00,(float *)&stack0xffffffdc,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffe0,&ray,fVar63,(MethodInfo *)0x0);
    fVar18 = pVVar30->x;
    fVar20 = pVVar30->y;
    fVar2 = pVVar30->z;
    fVar15 = fVar18;
    fVar19 = fVar20;
    baseDepth = fVar6;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      fVar15 = fVar18;
      fVar19 = fVar20;
      baseDepth = fVar6;
    }
    ray.m_Direction.z = fVar2;
    ray.m_Direction.y = fVar19;
    ray.m_Direction.x = fVar15;
    ray.m_Origin.z = (float)&UNK_?;
    point.y = ray.m_Direction.y;
    point.x = ray.m_Direction.x;
    point.z = ray.m_Direction.z;
    p0.y = (float)puVar55;
    p0.x = (float)pfVar54;
    p0.z = fVar4;
    p1.y = baseDepth;
    p1.x = fVar5;
    p1.z = fVar16;
    p2.y = fVar3;
    p2.x = fVar1;
    p2.z = fVar21;
    bVar22 = TriangleMath::TriangleMath_Contains3DPoint
                       (point,0,p0,p1,p2,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
    if (bVar22 != 0) {
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      func_?();
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar64 = (pVVar12->rightVector).x;
  uVar65 = (pVVar12->rightVector).y;
  fVar1 = (float)(uVar64 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
          * (float)pfVar38;
  fVar3 = (float)(uVar65 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
          * (float)pfVar38;
  fVar2 = (float)((uint)(pVVar12->rightVector).z ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
           (float)pfVar38;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar66 = (pVVar12->forwardVector).x;
  uVar67 = (pVVar12->forwardVector).y;
  fVar1 = fVar1 - (float)uVar66 * (float)puVar45;
  fVar3 = fVar3 - (float)uVar67 * (float)puVar45;
  fVar2 = fVar2 - (pVVar12->forwardVector).z * (float)puVar45;
  fVar5 = fVar1;
  fVar6 = fVar3;
  fVar16 = fVar2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar68 = (pVVar12->forwardVector).x;
  uVar69 = (pVVar12->forwardVector).y;
  fVar1 = fVar1 + (float)uVar68 * baseDepth;
  fVar3 = fVar3 + (float)uVar69 * baseDepth;
  fVar2 = fVar2 + (pVVar12->forwardVector).z * baseDepth;
  ray.m_Direction.z = (float)&stack0xffffff60;
  ray.m_Direction.y = (float)&UNK_?;
  a.y = (float)puVar55;
  a.x = (float)pfVar54;
  a.z = fVar4;
  b.y = fVar6;
  b.x = fVar5;
  b.z = fVar16;
  c.y = fVar3;
  c.x = fVar1;
  c.z = fVar2;
  pfVar38 = pfVar54;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)ray.m_Direction.z,a,b,c,(MethodInfo *)0x0);
  ray_01.m_Direction.z = ray.m_Direction.z;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff60,ray_01,(float *)&stack0xffffffdc,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffff80,&ray,fVar63,(MethodInfo *)0x0);
    fVar21 = pVVar30->x;
    fVar63 = pVVar30->y;
    fVar4 = pVVar30->z;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    p0_00.y = (float)puVar55;
    p0_00.x = (float)pfVar38;
    point_00.y = fVar63;
    point_00.x = fVar21;
    point_00.z = fVar4;
    p0_00.z = (float)this_01;
    p1_00.y = fVar6;
    p1_00.x = fVar5;
    p1_00.z = fVar16;
    p2_00.y = fVar3;
    p2_00.x = fVar1;
    p2_00.z = fVar2;
    bVar22 = TriangleMath::TriangleMath_Contains3DPoint
                       (point_00,0,p0_00,p1_00,p2_00,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
    if (bVar22 != 0) {
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
    pcVar70 = (code *)swi(3);
    bVar22 = (*pcVar70)();
    return bVar22;
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
  *pfVar54 = fVar1;
  return 1;
}

