
/* List`1[UnityEngine.Vector3] CalcTriangPrismCornerPoints(Vector3, Single, Single, Single, Single,
   Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PrismMath::PrismMath_CalcTriangPrismCornerPoints
          (Vector3 baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,
          float height,Quaternion prismRotation,MethodInfo *method)

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
  fVar1 = baseWidth * _UNK_?;
  fVar2 = topWidth * _UNK_?;
  fVar3 = baseDepth * _UNK_?;
  fVar4 = topDepth * _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->forwardVector).x;
  uVar7 = (pVVar5->forwardVector).y;
  fVar8 = (float)(uVar6 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
  ;
  fVar9 = (float)(uVar7 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  );
  fVar10 = (float)((uint)(pVVar5->forwardVector).z ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar5->rightVector).x;
  uVar12 = (pVVar5->rightVector).y;
  fVar8 = fVar8 * fVar3 - (float)uVar11 * fVar1;
  fVar9 = fVar9 * fVar3 - (float)uVar12 * fVar1;
  fVar1 = fVar10 * fVar3 - (pVVar5->rightVector).z * fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar13 = (pVVar5->rightVector).x;
  uVar14 = (pVVar5->rightVector).y;
  fVar10 = (float)uVar13 * baseWidth + fVar8;
  fVar15 = (float)uVar14 * baseWidth + fVar9;
  fVar16 = (pVVar5->rightVector).z * baseWidth + fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar17 = (pVVar5->forwardVector).x;
  uVar18 = (pVVar5->forwardVector).y;
  fVar19 = (float)uVar17 * fVar3;
  fVar20 = (float)uVar18 * fVar3;
  fVar3 = (pVVar5->forwardVector).z * fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar21 = (pVVar5->upVector).x;
  uVar22 = (pVVar5->upVector).y;
  fVar23 = (pVVar5->upVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar24 = (pVVar5->forwardVector).x;
  uVar25 = (pVVar5->forwardVector).y;
  fVar26 = (pVVar5->forwardVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar27 = (pVVar5->rightVector).x;
  uVar28 = (pVVar5->rightVector).y;
  fVar29 = ((float)uVar21 * height - (float)uVar24 * fVar4) - (float)uVar27 * fVar2;
  fVar30 = ((float)uVar22 * height - (float)uVar25 * fVar4) - (float)uVar28 * fVar2;
  fVar26 = (fVar23 * height - fVar26 * fVar4) - (pVVar5->rightVector).z * fVar2;
  fVar2 = fVar29;
  fVar4 = fVar30;
  fVar23 = fVar26;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar31 = (pVVar5->rightVector).x;
  uVar32 = (pVVar5->rightVector).y;
  fVar33 = (pVVar5->rightVector).z;
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,6,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_)
  ;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pos.z = baseCenter.z;
  pos.x = baseCenter.x;
  pos.y = baseCenter.y;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
            ((Matrix4x4 *)&stack0xffffff20,pos,prismRotation,
             TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  point.y = fVar9;
  point.x = fVar8;
  point.z = fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
            (&baseCenter,(Matrix4x4 *)&stack0xffffff60,point,(MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    func_?();
    point_00.y = fVar15;
    point_00.x = fVar10;
    point_00.z = fVar16;
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
              (&baseCenter,(Matrix4x4 *)&stack0xffffff60,point_00,(MethodInfo *)0x0);
    func_?();
    point_01.y = fVar20;
    point_01.x = fVar19;
    point_01.z = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
              (&baseCenter,(Matrix4x4 *)&stack0xffffff60,point_01,(MethodInfo *)0x0);
    func_?();
    point_02.y = fVar4;
    point_02.x = fVar2;
    point_02.z = fVar23;
    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                        (&baseCenter,(Matrix4x4 *)&stack0xffffff60,point_02,(MethodInfo *)0x0);
    fVar3 = pVVar34->x;
    puVar35 = &UNK_?;
    pLVar36 = this;
    func_?();
    point_03.y = (float)pLVar36;
    point_03.x = (float)puVar35;
    point_03.z = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
              (&baseCenter,(Matrix4x4 *)&stack0xffffff60,point_03,(MethodInfo *)0x0);
    func_?();
    point_04.y = (float)uVar32 * topWidth + fVar30;
    point_04.x = (float)uVar31 * topWidth + fVar29;
    point_04.z = fVar33 * topWidth + fVar26;
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
              (&baseCenter,(Matrix4x4 *)&stack0xffffff60,point_04,(MethodInfo *)0x0);
    func_?();
    return (List_1_UnityEngine_Vector3_ *)this;
  }
  func_?();
  pcVar37 = (code *)swi(3);
  pLVar38 = (List_1_UnityEngine_Vector3_ *)(*pcVar37)();
  return pLVar38;
}


/* Boolean ContainsPoint(Vector3, Vector3, Single, Single, Single, Single, Single, Quaternion,
   PrismEpsilon) */

bool Assembly-CSharp.dll::RTG::PrismMath::PrismMath_ContainsPoint
               (Vector3 point,Vector3 baseCenter,float baseWidth,float baseDepth,float topWidth,
               float topDepth,float height,Quaternion prismRotation,PrismEpsilon epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pos.y = baseCenter.y;
  pos.x = baseCenter.x;
  pos.z = baseCenter.z;
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xfffffedc,pos,prismRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  fStack_2 = pMVar1->m00;
  fStack_3 = pMVar1->m10;
  fStack_4 = pMVar1->m20;
  fStack_5 = pMVar1->m30;
  fStack_6 = pMVar1->m01;
  fStack_7 = pMVar1->m11;
  fStack_8 = pMVar1->m21;
  fStack_9 = pMVar1->m31;
  fStack_10 = pMVar1->m02;
  fStack_11 = pMVar1->m12;
  fStack_12 = pMVar1->m22;
  puStack_13 = (undefined *)pMVar1->m32;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
            ((Matrix4x4 *)&stack0xfffffedc,(Matrix4x4 *)&fStack_2,(MethodInfo *)0x0);
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                      (&baseCenter,(Matrix4x4 *)&stack0xffffff1c,point,(MethodInfo *)0x0);
  uVar15 = pVVar14->x;
  uVar16 = pVVar14->y;
  fVar17 = pVVar14->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar19 = (pVVar18->zeroVector).x;
  uVar20 = (pVVar18->zeroVector).y;
  fVar21 = (pVVar18->zeroVector).z;
  baseCenter.y = (float)uVar19;
  baseCenter.z = (float)uVar20;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  baseCenter_00.y = baseCenter.z;
  baseCenter_00.x = baseCenter.y;
  baseCenter_00.z = fVar21;
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
         PrismMath_CalcTriangPrismCornerPoints
                   (baseCenter_00,baseWidth,baseDepth,topWidth,topDepth,height,
                    TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                    (MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&baseCenter,this,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar23 = pVVar22->path;
    pVVar24 = pVVar22->asset;
    a_01 = *pVVar22;
    pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&baseCenter,this,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar25 = pVVar22->asset;
    pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&baseCenter,this,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    fVar21 = (float)pVVar22->alias;
    fVar26 = (float)pVVar22->path;
    pVVar27 = pVVar22->asset;
    pVVar28 = pVVar27;
    pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&baseCenter,this,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar29 = pVVar22->asset;
    pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&baseCenter,this,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar30 = pVVar22->asset;
    pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,this,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    fVar31 = (float)pVVar22->alias;
    fVar32 = (float)pVVar22->path;
    pVVar33 = pVVar22->asset;
    baseCenter.y = fVar31;
    baseCenter.z = fVar32;
    pVVar34 = pVVar33;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar14 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    uVar35 = pVVar14->x;
    uVar36 = pVVar14->y;
    __return_storage_ptr__ = &VStack_37;
    VStack_37.z = (float)&UNK_?;
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (__return_storage_ptr__,*pVVar14,(MethodInfo *)0x0);
    uVar38 = pVVar14->x;
    uVar39 = pVVar14->y;
    uVar40 = pVVar14->x;
    uVar41 = pVVar14->y;
    if ((float)uVar16 * (float)uVar41 + (float)uVar15 * (float)uVar40 + fVar17 * pVVar14->z +
        (float)((uint)(fVar32 * (float)uVar39 + fVar31 * (float)uVar38 + (float)pVVar34 * pVVar14->z)
               ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <=
        epsilon._ptContainEps) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar42 = (pVVar18->upVector).x;
      uVar43 = (pVVar18->upVector).y;
      pVVar14 = &VStack_37;
      puVar44 = &UNK_?;
      value.y = (float)(uVar43 ^ 
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      value.x = (float)(uVar42 ^ 
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      value.z = (float)((uint)(pVVar18->upVector).z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      pVVar45 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (pVVar14,value,(MethodInfo *)0x0);
      uVar46._0_4_ = pVVar45->x;
      uVar46._4_4_ = pVVar45->y;
      fVar31 = pVVar45->z;
      uVar47 = pVVar45->x;
      uVar48 = pVVar45->y;
      fVar21 = (float)((uint)(fVar26 * (float)uVar46._4_4_ + fVar21 * (float)(undefined4)uVar46 +
                            (float)pVVar28 * fVar31) ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if ((float)uVar16 * (float)uVar48 + (float)uVar15 * (float)uVar47 + fVar17 * fVar31 + fVar21 <=
          epsilon._ptContainEps) {
        uVar46 = uVar46 & 0xffffffff00000000;
        puVar49 = &UNK_?;
        b.y = (float)pVVar14;
        b.x = (float)puVar44;
        b.z = (float)pVVar27;
        c_01.y = baseCenter.z;
        c_01.x = baseCenter.y;
        c_01.z = (float)pVVar33;
        fVar32 = (float)uVar23;
        UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                  ((Plane *)&stack0xffffffe0,(Vector3)a_01,b,c_01,(MethodInfo *)0x0);
        fVar26 = baseCenter.z;
        if ((float)uVar46 * (float)uVar15 + (float)(uVar46 >> 0x20) * (float)uVar16 + fVar31 * fVar17
            + fVar21 <= epsilon._ptContainEps) {
          this_00 = (Plane *)&stack0xffffffe0;
          puVar44 = &UNK_?;
          a_00.y = (float)pVVar24;
          a_00.x = fVar32;
          a_00.z = (float)pVVar25;
          b_00.y = (float)puVar49;
          b_00.x = (float)uVar36;
          b_00.z = (float)pVVar30;
          c.y = baseCenter.z;
          c.x = baseCenter.y;
          c.z = (float)pVVar33;
          fVar17 = fVar32;
          pVVar27 = pVVar24;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                    (this_00,a_00,b_00,c,(MethodInfo *)0x0);
          baseCenter.z = (float)pVVar27;
          baseCenter.y = fVar17;
          if ((float)puVar44 * fVar26 + (float)this_00 * (float)pVVar33 + fVar32 * 0.0 +
              (float)pVVar24 <= epsilon._ptContainEps) {
            baseCenter.x = (float)&stack0xffffffe0;
            a.y = baseCenter.z;
            a.x = baseCenter.y;
            a.z = (float)pVVar25;
            auVar50._4_4_ = __return_storage_ptr__;
            auVar50._0_4_ = uVar23;
            auVar50._8_4_ = 0;
            c_00.y = (float)uVar35;
            c_00.x = (float)__return_storage_ptr__;
            c_00.z = (float)pVVar29;
            UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                      ((Plane *)baseCenter.x,a,(Vector3)(auVar50 << 0x20),c_00,(MethodInfo *)0x0);
            if ((float)puVar44 * fVar26 + (float)this_00 * (float)pVVar33 + fVar32 * 4.3735618e-29 +
                (float)pVVar24 <= epsilon._ptContainEps) {
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  func_?();
  pcVar51 = (code *)swi(3);
  bVar52 = (*pcVar51)();
  return bVar52;
}


/* Boolean RaycastTriangular(Ray, Single ByRef, Vector3, Single, Single, Single, Single, Single,
   Quaternion) */

bool Assembly-CSharp.dll::RTG::PrismMath::PrismMath_RaycastTriangular
               (Ray ray,float *t,Vector3 baseCenter,float baseWidth,float baseDepth,float topWidth,
               float topDepth,float height,Quaternion prismRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__System__Comparison<float>);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<float>__Sort_System__Comparison<float>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<float>__List_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<float>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__TriangleMath);
    func_?(&MethodInfo__RTG__PrismMath____c___RaycastTriangular_b__1_0_float__float_);
    func_?(&TypeInfo__RTG__PrismMath____c);
    cRam_? = '\x01';
  }
  *t = 0.0;
  if ((((baseWidth != 0.0) && (baseDepth != 0.0)) && (topWidth != 0.0)) &&
     ((topDepth != 0.0 && (height != 0.0)))) {
    baseWidth_00 = (float)((uint)baseWidth & _UNK_?);
    baseDepth_00 = (float)((uint)baseDepth & _UNK_?);
    topWidth_00 = (float)((uint)topWidth & _UNK_?);
    topDepth_00 = (float)((uint)topDepth & _UNK_?);
    pVVar1 = (Vector3 *)func_?(&stack0xfffffff0,0);
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff14,baseCenter,prismRotation,*pVVar1,
                         (MethodInfo *)0x0);
    pRVar3 = RayEx::RayEx_InverseTransform((Ray *)&stack0xffffff88,ray,*pMVar2,(MethodInfo *)0x0);
    fVar4 = (pRVar3->m_Origin).x;
    fVar5 = (pRVar3->m_Origin).y;
    uVar6 = (pRVar3->m_Origin).x;
    uVar7 = (pRVar3->m_Origin).y;
    ray_05.m_Origin.y = (float)uVar7;
    ray_05.m_Origin.x = (float)uVar6;
    uVar8 = (pRVar3->m_Origin).x;
    uVar9 = (pRVar3->m_Origin).y;
    ray_04.m_Origin.y = (float)uVar9;
    ray_04.m_Origin.x = (float)uVar8;
    uVar10 = (pRVar3->m_Origin).x;
    uVar11 = (pRVar3->m_Origin).y;
    ray_03.m_Origin.y = (float)uVar11;
    ray_03.m_Origin.x = (float)uVar10;
    uVar12 = (pRVar3->m_Origin).x;
    uVar13 = (pRVar3->m_Origin).y;
    ray_02.m_Origin.y = (float)uVar13;
    ray_02.m_Origin.x = (float)uVar12;
    uVar14 = (pRVar3->m_Origin).x;
    uVar15 = (pRVar3->m_Origin).y;
    ray_01.m_Origin.y = (float)uVar15;
    ray_01.m_Origin.x = (float)uVar14;
    fVar16 = (pRVar3->m_Origin).x;
    fVar17 = (pRVar3->m_Origin).y;
    fVar18 = (pRVar3->m_Origin).z;
    fVar19 = (pRVar3->m_Direction).x;
    uVar20 = (pRVar3->m_Direction).y;
    fVar21 = (pRVar3->m_Direction).z;
    pMVar22 = (MethodInfo *)height;
    pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                        ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar23 = pVVar1->x;
    uVar24 = pVVar1->y;
    fVar25 = (float)uVar23 * height * _UNK_?;
    fVar26 = (float)uVar24 * height * _UNK_?;
    fVar27 = pVVar1->z * height * _UNK_?;
    pQVar28 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                        ((Quaternion *)&stack0xffffff90,(MVWorldObject *)0x0,pMVar22);
    fVar29 = pQVar28->x;
    fVar30 = pQVar28->y;
    fVar31 = pQVar28->z;
    fVar32 = pQVar28->w;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray_00.m_Origin.y = fVar17;
    ray_00.m_Origin.x = fVar16;
    ray_00.m_Origin.z = fVar18;
    ray_00.m_Direction.x = fVar19;
    ray_00.m_Direction.y = (float)uVar20;
    ray_00.m_Direction.z = fVar21;
    boxCenter.y = fVar26;
    boxCenter.x = fVar25;
    boxCenter.z = fVar27;
    boxRotation.y = fVar30;
    boxRotation.x = fVar29;
    boxRotation.z = fVar31;
    boxRotation.w = fVar32;
    bVar33 = BoxMath::BoxMath_Raycast
                       (ray_00,boxCenter,(Vector3)ZEXT812(0),boxRotation,(BoxEpsilon)ZEXT812(0),
                        (MethodInfo *)0x0);
    if (bVar33 != 0) {
      pVVar1 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                          ((Vector3 *)&stack0xfffffff0,(MVWorldObject *)0x0,unaff_retaddr);
      uVar34 = pVVar1->x;
      uVar35 = pVVar1->y;
      fVar21 = pVVar1->z;
      pQVar28 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                          ((Quaternion *)&stack0xffffff90,(MVWorldObject *)0x0,
                           (MethodInfo *)ray.m_Origin.x);
      baseCenter_00.y = (float)uVar35;
      baseCenter_00.x = (float)uVar34;
      baseCenter_00.z = fVar21;
      pLVar36 = PrismMath_CalcTriangPrismCornerPoints
                          (baseCenter_00,baseWidth_00,baseDepth_00,topWidth_00,topDepth_00,height,
                           *pQVar28,(MethodInfo *)0x0);
      if (pLVar36 != (List_1_UnityEngine_Vector3_ *)0x0) {
        puVar37 = (undefined8 *)func_?();
        fVar21 = *(float *)(puVar37 + 1);
        uVar38 = (undefined4)*puVar37;
        puVar37 = (undefined8 *)func_?();
        uVar35 = (undefined4)*puVar37;
        uVar39 = (undefined4)((ulonglong)*puVar37 >> 0x20);
        puVar37 = (undefined8 *)func_?();
        uVar40 = (undefined4)*puVar37;
        uVar41 = (undefined4)((ulonglong)*puVar37 >> 0x20);
        puVar37 = (undefined8 *)func_?();
        uVar42 = (undefined4)*puVar37;
        uVar43 = (undefined4)((ulonglong)*puVar37 >> 0x20);
        puVar37 = (undefined8 *)func_?();
        uVar20 = (undefined4)*puVar37;
        uVar34 = (undefined4)((ulonglong)*puVar37 >> 0x20);
        iVar44 = func_?();
        fVar17 = *(float *)(iVar44 + 8);
        this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)func_?();
        puVar45 = &UNK_?;
        pLVar46 = this;
        pMVar22 = MethodInfo__System__Collections__Generic__List<float>__List_int_;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
        MultiColumnCollectionHeader+ViewState+ColumnState]::
        List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                  (this,5,MethodInfo__System__Collections__Generic__List<float>__List_int_);
        if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pfVar47 = (float *)&stack0xffffffec;
        ray_01.m_Origin.z = (float)&UNK_?;
        ray_01.m_Direction.x = fVar16;
        ray_01.m_Direction.y = fVar4;
        ray_01.m_Direction.z = fVar5;
        p0.y = (float)puVar45;
        p0.x = (float)uVar38;
        p0.z = fVar21;
        p1.y = (float)uVar39;
        p1.x = (float)uVar35;
        p1.z = (float)pMVar22;
        p2.y = (float)uVar41;
        p2.x = (float)uVar40;
        p2.z = (float)pLVar46;
        uVar41 = uVar39;
        bVar33 = TriangleMath::TriangleMath_Raycast
                           (ray_01,pfVar47,p0,p1,p2,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
        if (bVar33 != 0) {
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          func_?();
        }
        if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        puVar45 = &UNK_?;
        ray_02.m_Origin.z = (float)&UNK_?;
        ray_02.m_Direction.x = fVar16;
        ray_02.m_Direction.y = fVar4;
        ray_02.m_Direction.z = fVar5;
        p0_00.y = (float)uVar43;
        p0_00.x = (float)uVar42;
        p0_00.z = (float)&stack0xfffffff0;
        p1_00.y = (float)pMVar22;
        p1_00.x = (float)uVar41;
        p1_00.z = fVar17;
        p2_00.y = (float)uVar34;
        p2_00.x = (float)uVar20;
        p2_00.z = (float)pfVar47;
        fVar21 = fVar4;
        fVar17 = fVar5;
        bVar33 = TriangleMath::TriangleMath_Raycast
                           (ray_02,(float *)&stack0xffffffec,p0_00,p1_00,p2_00,
                            (TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
        if (bVar33 != 0) {
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          func_?();
        }
        pLVar46 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
        MultiColumnCollectionHeader+ViewState+ColumnState]::
        List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                  (pLVar46,4,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
        if (pLVar46 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          pVVar1 = (Vector3 *)func_?();
          pfVar47 = (float *)&stack0xffffffec;
          puVar48 = &UNK_?;
          ray_03.m_Origin.z = (float)&UNK_?;
          ray_03.m_Direction.x = fVar16;
          ray_03.m_Direction.y = fVar21;
          ray_03.m_Direction.z = fVar17;
          epsilon._thickWireEps = 0.0;
          epsilon._areaEps = 0.0;
          epsilon._extrudeEps = 0.0;
          epsilon._wireEps = 0.0;
          fVar18 = fVar16;
          fVar19 = fVar17;
          bVar33 = PolygonMath::PolygonMath_Raycast
                             (ray_03,pfVar47,(List_1_UnityEngine_Vector3_ *)pLVar46,0,*pVVar1,
                              epsilon,(MethodInfo *)0x0);
          if (bVar33 != 0) {
            if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)0x0) goto code_?;
            func_?();
          }
          value.FirstAxisSign = (int32_t)puVar45;
          value.Quadrant = uVar40;
          value.SecondAxisSign = (int32_t)puVar48;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar46,1,value,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                    );
          value_01.FirstAxisSign = (int32_t)pfVar47;
          value_01.Quadrant = (int32_t)fVar19;
          value_01.SecondAxisSign = (int32_t)fVar18;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar46,2,value_01,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                    );
          value_03.FirstAxisSign = uVar43;
          value_03.Quadrant = uVar42;
          value_03.SecondAxisSign = (int32_t)&UNK_?;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar46,3,value_03,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                    );
          func_?();
          func_?();
          func_?();
          func_?();
          pVVar1 = (Vector3 *)func_?();
          puVar48 = &UNK_?;
          ray_04.m_Origin.z = (float)&UNK_?;
          ray_04.m_Direction.x = fVar16;
          ray_04.m_Direction.y = fVar21;
          ray_04.m_Direction.z = fVar17;
          epsilon_00._thickWireEps = 0.0;
          epsilon_00._areaEps = 0.0;
          epsilon_00._extrudeEps = 0.0;
          epsilon_00._wireEps = 0.0;
          bVar33 = PolygonMath::PolygonMath_Raycast
                             (ray_04,(float *)&stack0xffffffec,
                              (List_1_UnityEngine_Vector3_ *)pLVar46,0,*pVVar1,epsilon_00,
                              (MethodInfo *)0x0);
          if (bVar33 != 0) {
            if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)0x0) goto code_?;
            func_?();
          }
          value_00.FirstAxisSign = uVar39;
          value_00.Quadrant = uVar35;
          value_00.SecondAxisSign = (int32_t)fVar5;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar46,0,value_00,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                    );
          value_02.FirstAxisSign = uVar34;
          value_02.Quadrant = uVar20;
          value_02.SecondAxisSign = (int32_t)fVar4;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar46,1,value_02,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                    );
          value_04.FirstAxisSign = (int32_t)puVar45;
          value_04.Quadrant = uVar40;
          value_04.SecondAxisSign = (int32_t)puVar48;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar46,3,value_04,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                    );
          func_?();
          func_?();
          func_?();
          func_?();
          pVVar1 = (Vector3 *)func_?();
          ray_05.m_Origin.z = (float)&UNK_?;
          ray_05.m_Direction.x = fVar16;
          ray_05.m_Direction.y = fVar21;
          ray_05.m_Direction.z = fVar17;
          epsilon_01._thickWireEps = 0.0;
          epsilon_01._areaEps = 0.0;
          epsilon_01._extrudeEps = 0.0;
          epsilon_01._wireEps = 0.0;
          bVar33 = PolygonMath::PolygonMath_Raycast
                             (ray_05,(float *)&stack0xffffffec,
                              (List_1_UnityEngine_Vector3_ *)pLVar46,0,*pVVar1,epsilon_01,
                              (MethodInfo *)0x0);
          if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) {
            if (bVar33 != 0) {
              func_?();
            }
            if ((this->fields)._size == 0) {
              return 0;
            }
            if ((TypeInfo__RTG__PrismMath____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_00 = TypeInfo__RTG__PrismMath____c->static_fields->__9__1_0;
            if (this_00 == (Comparison_1_Single_ *)0x0) {
              if ((TypeInfo__RTG__PrismMath____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              object = TypeInfo__RTG__PrismMath____c->static_fields->__9;
              this_00 = (Comparison_1_Single_ *)func_?();
              mscorlib.dll::System::Comparison`1[Single]::Comparison_1_Single___ctor
                        (this_00,(Object *)object,
                         MethodInfo__RTG__PrismMath____c___RaycastTriangular_b__1_0_float__float_,
                         (MethodInfo *)0x0);
              TypeInfo__RTG__PrismMath____c->static_fields->__9__1_0 = this_00;
              func_?();
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
            List_1_System_Single__Sort_1
                      ((List_1_System_Single_ *)this,this_00,
                       MethodInfo__System__Collections__Generic__List<float>__Sort_System__Comparison<float>_
                      );
            pLVar49 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___Class
                       *)mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                         List_1_System_Single__get_Item
                                   ((List_1_System_Single_ *)this,0,
                                    MethodInfo__System__Collections__Generic__List<float>__get_Item_int_
                                   );
            pLVar46->klass = pLVar49;
            return 1;
          }
        }
      }
code_?:
      func_?();
      pcVar50 = (code *)swi(3);
      bVar33 = (*pcVar50)();
      return bVar33;
    }
  }
  return 0;
}

