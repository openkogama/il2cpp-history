
/* Void AlignTip(Vector3) */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_AlignTip
               (ConeShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Up(&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  VStack_2.x = (this->fields)._rotation.x;
  VStack_2.y = (this->fields)._rotation.y;
  VStack_2.z = (this->fields)._rotation.z;
  fStack_5 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = VStack_2.y;
  rotation.x = VStack_2.x;
  rotation.z = VStack_2.z;
  rotation.w = fStack_5;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (&VStack_2,rotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                       (MethodInfo *)0x0);
  from.z = fVar4;
  from.x = (float)(undefined4)uStack_3;
  from.y = (float)uStack_3._4_4_;
  pQVar6 = QuaternionEx::QuaternionEx_FromToRotation3D
                      ((Quaternion *)&stack0xffffffb0,from,axis,*pVVar1,(MethodInfo *)0x0);
  fVar7 = (this->fields)._rotation.x;
  fVar8 = (this->fields)._rotation.y;
  fVar9 = (this->fields)._rotation.z;
  fVar10 = (this->fields)._rotation.w;
  fVar11 = pQVar6->x;
  fVar12 = pQVar6->y;
  fVar13 = pQVar6->z;
  fVar14 = pQVar6->w;
  fVar15 = pQVar6->x;
  fVar4 = pQVar6->x;
  fVar16 = (this->fields)._rotation.x;
  fVar17 = (this->fields)._rotation.x;
  (this->fields)._rotation.x = (fVar14 * fVar7 + fVar11 * fVar10 + fVar9 * fVar12) - fVar8 * fVar13;
  (this->fields)._rotation.y = (fVar8 * fVar14 + fVar10 * fVar12 + fVar13 * fVar7) - fVar9 * fVar15;
  (this->fields)._rotation.z = (fVar9 * fVar14 + fVar13 * fVar10 + fVar8 * fVar4) - fVar16 * fVar12;
  (this->fields)._rotation.w = ((fVar14 * fVar10 - fVar17 * fVar11) - fVar8 * fVar12) - fVar13 * fVar9;
  return;
}


/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_ContainsPoint
               (ConeShape3D *this,Vector3 point,MethodInfo *method)

{
  bVar1 = ConeMath::ConeMath_ContainsPoint
                    (point,(this->fields)._baseCenter,(this->fields)._baseRadius,
                     (this->fields)._height,(this->fields)._rotation,(ConeEpsilon)0x0,
                     (MethodInfo *)0x0);
  return bVar1;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_GetAABB
                 (AABB *__return_storage_ptr__,ConeShape3D *this,MethodInfo *method)

{
  this_00 = __return_storage_ptr__;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  pointCloud = ConeMath::ConeMath_CalcConeBaseExtentPoints
                         ((this->fields)._baseCenter,(this->fields)._baseRadius,
                          (this->fields)._rotation,(MethodInfo *)0x0);
  AABB::AABB__ctor_2(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector3_ *)pointCloud,
                     (MethodInfo *)0x0);
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = SphereShape3D::SphereShape3D_get_Up(&VStack_4,(SphereShape3D *)this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = (this->fields)._height;
  fStack_1 = fStack_1 + pVVar3->z * fVar7;
  __return_storage_ptr__ = (AABB *)fStack_1;
  fVar8 = uStack_2._4_4_ + (float)uVar6 * fVar7;
  _fStack_10 = CONCAT44(&UNK_?,uVar5);
  point.x = (float)uStack_2 + (float)uVar5 * fVar7;
  point = (Vector3)CONCAT84(uVar9,point.x);
  AABB::AABB_Encapsulate(this_00,point,(MethodInfo *)0x0);
  return this_00;
}


/* List`1[UnityEngine.Vector3] GetBaseExtents() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_GetBaseExtents
          (ConeShape3D *this,MethodInfo *method)

{
  pLVar1 = ConeMath::ConeMath_CalcConeBaseExtentPoints
                     ((this->fields)._baseCenter,(this->fields)._baseRadius,(this->fields)._rotation
                      ,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_Raycast
               (ConeShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  bVar1 = ConeMath::ConeMath_Raycast
                    (ray,t,(this->fields)._baseCenter,(this->fields)._baseRadius,
                     (this->fields)._height,(this->fields)._rotation,(ConeEpsilon)0x0,
                     (MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_RenderSolid
               (ConeShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitCone(this_00,(MethodInfo *)0x0);
    uVar1 = (this->fields)._baseRadius;
    uVar2 = (this->fields)._height;
    s.y = (float)uVar2;
    s.x = (float)uVar1;
    s.z = (this->fields)._baseRadius;
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._baseCenter,
                        (this->fields)._rotation,s,(MethodInfo *)0x0);
    matrix = *pMVar3;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_RenderWire
               (ConeShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  fVar3 = (this->fields)._baseCenter.y;
  puStack_4 = (undefined *)uVar2;
  pVVar5 = SphereShape3D::SphereShape3D_get_Up(&VStack_6,(SphereShape3D *)this,(MethodInfo *)0x0);
  uStack_7._0_4_ = pVVar5->x;
  uStack_7._4_4_ = pVVar5->y;
  fStack_8 = pVVar5->z;
  fVar9 = (this->fields)._height;
  fVar10 = (float)puStack_4 + (float)uStack_7 * fVar9;
  fVar3 = fVar3 + uStack_7._4_4_ * fVar9;
  fVar1 = fVar1 + fStack_8 * fVar9;
  pCVar11 = (this->fields)._wireRenderDesc;
  if (pCVar11 != (ConeShape3D_WireRenderDescriptor *)0x0) {
    if ((pCVar11->fields)._wireMode == 0) {
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (pMVar12 != (MeshPool *)0x0) {
        pMVar13 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar12,(MethodInfo *)0x0);
        uVar14 = (this->fields)._baseCenter.x;
        uVar15 = (this->fields)._baseCenter.y;
        fStack_16 = (this->fields)._baseCenter.z;
        VStack_17.alias = (String *)(this->fields)._rotation.x;
        VStack_17.path = (String *)(this->fields)._rotation.y;
        VStack_17.asset = (VisualTreeAsset *)(this->fields)._rotation.z;
        fStack_18 = (this->fields)._rotation.w;
        puStack_4 = (undefined *)uVar14;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                            ((Quaternion *)&stack0xffffff48,90.0,
                             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                             (MethodInfo *)0x0);
        QStack_20.x = pQVar19->x;
        QStack_20.y = pQVar19->y;
        QStack_20.z = pQVar19->z;
        QStack_20.w = pQVar19->w;
        pSVar21 = (String *)
                  ((QStack_20.w * (float)VStack_17.alias + QStack_20.x * fStack_18 +
                   QStack_20.z * (float)VStack_17.path) - QStack_20.y * (float)VStack_17.asset);
        fVar9 = (float)VStack_17.asset * QStack_20.z;
        pSVar22 = (String *)
                  (((float)VStack_17.path * QStack_20.w + QStack_20.y * fStack_18 +
                   (float)VStack_17.asset * pQVar19->x) - QStack_20.z * (float)VStack_17.alias);
        VStack_17.asset =
             (VisualTreeAsset *)
             (((float)VStack_17.asset * QStack_20.w + QStack_20.z * fStack_18 +
              QStack_20.y * (float)VStack_17.alias) - (float)VStack_17.path * pQVar19->x);
        VStack_6.x = QStack_20.w * fStack_18;
        VStack_6.z = QStack_20.w;
        VStack_6.y = QStack_20.w;
        fStack_18 = ((VStack_6.x - (float)VStack_17.alias * QStack_20.x) -
                    QStack_20.y * (float)VStack_17.path) - fVar9;
        fVar9 = (this->fields)._baseRadius;
        fStack_23 = 1.0;
        pos_00.y = (float)uVar15;
        pos_00.x = (float)puStack_4;
        pos_00.z = fStack_16;
        q_00.y = (float)pSVar22;
        q_00.x = (float)pSVar21;
        q_00.z = (float)VStack_17.asset;
        q_00.w = fStack_18;
        s_00.y = fVar9;
        s_00.x = fVar9;
        s_00.z = 1.0;
        VStack_17.alias = pSVar21;
        VStack_17.path = pSVar22;
        pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                            ((Matrix4x4 *)&stack0xfffffee8,pos_00,q_00,s_00,(MethodInfo *)0x0);
        QStack_20.x = pMVar24->m00;
        QStack_20.y = pMVar24->m10;
        QStack_20.z = pMVar24->m20;
        QStack_20.w = pMVar24->m30;
        fVar9 = pMVar24->m01;
        fVar3 = pMVar24->m11;
        fVar1 = pMVar24->m21;
        fVar10 = pMVar24->m31;
        fVar25 = pMVar24->m02;
        fVar26 = pMVar24->m12;
        fVar27 = pMVar24->m22;
        fVar28 = pMVar24->m32;
        fVar29 = pMVar24->m03;
        fVar30 = pMVar24->m13;
        fVar31 = pMVar24->m23;
        fVar32 = pMVar24->m33;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        matrix_00.m10 = QStack_20.y;
        matrix_00.m00 = QStack_20.x;
        matrix_00.m20 = QStack_20.z;
        matrix_00.m30 = QStack_20.w;
        matrix_00.m01 = fVar9;
        matrix_00.m11 = fVar3;
        matrix_00.m21 = fVar1;
        matrix_00.m31 = fVar10;
        matrix_00.m02 = fVar25;
        matrix_00.m12 = fVar26;
        matrix_00.m22 = fVar27;
        matrix_00.m32 = fVar28;
        matrix_00.m03 = fVar29;
        matrix_00.m13 = fVar30;
        matrix_00.m23 = fVar31;
        matrix_00.m33 = fVar32;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (pMVar13,matrix_00,(MethodInfo *)0x0);
        this_01 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  ConeMath::ConeMath_CalcConeBaseExtentPoints
                            ((this->fields)._baseCenter,(this->fields)._baseRadius,
                             (this->fields)._rotation,(MethodInfo *)0x0);
        pLStack_33 = this_01;
        linePoints = (List_1_UnityEngine_Vector3_ *)func_?();
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)linePoints,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        if ((this_01 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) &&
           (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      (&VStack_17,this_01,0,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      ), linePoints != (List_1_UnityEngine_Vector3_ *)0x0)) {
          func_?();
          func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                    (&VStack_17,pLStack_33,1,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                    );
          func_?();
          func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                    (&VStack_17,pLStack_33,2,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                    );
          func_?();
          func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                    (&VStack_17,pLStack_33,3,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                    );
          func_?();
          func_?();
          GLRenderer::GLRenderer_DrawLines3D(linePoints,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pVVar5 = SphereShape3D::SphereShape3D_get_Up
                          (&VStack_6,(SphereShape3D *)this,(MethodInfo *)0x0);
      uVar34._0_4_ = pVVar5->x;
      uVar34._4_4_ = pVVar5->y;
      fVar9 = pVVar5->z;
      puStack_4 = (undefined *)(undefined4)uVar34;
      uStack_7 = uVar34;
      fStack_8 = fVar9;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          (&QStack_20,90.0,
                           TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                           (MethodInfo *)0x0);
      pCVar11 = (this->fields)._wireRenderDesc;
      VStack_17.alias = (String *)pQVar19->x;
      VStack_17.path = (String *)pQVar19->y;
      VStack_17.asset = (VisualTreeAsset *)pQVar19->z;
      fStack_18 = pQVar19->w;
      if (pCVar11 != (ConeShape3D_WireRenderDescriptor *)0x0) {
        fVar25 = (this->fields)._height;
        fStack_16 = fVar25 / (float)((pCVar11->fields)._numDetailAxialRings + -1);
        fVar26 = (this->fields)._baseRadius;
        fVar27 = _UNK_?;
        if (_UNK_? < fVar26) {
          fVar27 = fVar26;
        }
        pLStack_33 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)(fVar25 / fVar27);
        iVar35 = 0;
        do {
          if ((pCVar11->fields)._numDetailAxialRings <= iVar35) {
            pCVar11 = (this->fields)._wireRenderDesc;
            if (pCVar11 != (ConeShape3D_WireRenderDescriptor *)0x0) {
              iVar35 = (pCVar11->fields)._numDetailAxialSegments;
              this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)func_?();
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                        (this_00,iVar35 * 2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                        );
              pCVar11 = (this->fields)._wireRenderDesc;
              if (pCVar11 != (ConeShape3D_WireRenderDescriptor *)0x0) {
                pLStack_33 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0;
                fStack_16 = _UNK_? / (float)(pCVar11->fields)._numDetailAxialSegments;
                goto code_?;
              }
            }
            break;
          }
          uVar36 = (this->fields)._baseCenter.x;
          uVar37 = (this->fields)._baseCenter.y;
          fVar25 = (float)iVar35;
          VStack_6.z = (float)uVar37 + uStack_7._4_4_ * fStack_16 * fVar25;
          VStack_6.y = (float)uVar36 + (float)uStack_7 * fStack_16 * fVar25;
          fStack_23 = (this->fields)._baseCenter.z + fStack_8 * fStack_16 * fVar25;
          fVar27 = 1.0;
          fVar26 = ((this->fields)._height - fVar25 * fStack_16) / (float)pLStack_33;
          fVar25 = fVar26;
          if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pMVar12 = (MeshPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar12 == (MeshPool *)0x0) break;
          pMVar13 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar12,(MethodInfo *)0x0);
          pos.z = fStack_23;
          pos.x = VStack_6.y;
          pos.y = VStack_6.z;
          q.y = (float)VStack_17.path;
          q.x = (float)VStack_17.alias;
          q.z = (float)VStack_17.asset;
          q.w = fStack_18;
          s.y = fVar25;
          s.x = fVar26;
          s.z = fVar27;
          pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                              ((Matrix4x4 *)&stack0xfffffee8,pos,q,s,(MethodInfo *)0x0);
          fVar38 = pMVar24->m00;
          fVar39 = pMVar24->m10;
          fVar40 = pMVar24->m20;
          fVar41 = pMVar24->m30;
          fVar25 = pMVar24->m01;
          fVar26 = pMVar24->m11;
          fVar27 = pMVar24->m21;
          fVar28 = pMVar24->m31;
          fVar29 = pMVar24->m02;
          fVar30 = pMVar24->m12;
          fVar31 = pMVar24->m22;
          fVar32 = pMVar24->m32;
          QStack_20.x = pMVar24->m03;
          QStack_20.y = pMVar24->m13;
          QStack_20.z = pMVar24->m23;
          QStack_20.w = pMVar24->m33;
          if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Graphics);
          }
          matrix.m10 = fVar39;
          matrix.m00 = fVar38;
          matrix.m20 = fVar40;
          matrix.m30 = fVar41;
          matrix.m01 = fVar25;
          matrix.m11 = fVar26;
          matrix.m21 = fVar27;
          matrix.m31 = fVar28;
          matrix.m02 = fVar29;
          matrix.m12 = fVar30;
          matrix.m22 = fVar31;
          matrix.m32 = fVar32;
          matrix.m03 = QStack_20.x;
          matrix.m13 = QStack_20.y;
          matrix.m23 = QStack_20.z;
          matrix.m33 = QStack_20.w;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (pMVar13,matrix,(MethodInfo *)0x0);
          pCVar11 = (this->fields)._wireRenderDesc;
          iVar35 = iVar35 + 1;
        } while (pCVar11 != (ConeShape3D_WireRenderDescriptor *)0x0);
      }
    }
  }
  goto code_?;
  while( true ) {
    piVar42 = &(this_00->fields)._version;
    *piVar42 = *piVar42 + 1;
    pMVar43 = (this_00->fields)._items;
    if (pMVar43 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
    uVar44 = (this_00->fields)._size;
    if (uVar44 < pMVar43->max_length) {
      (this_00->fields)._size = uVar44 + 1;
      if (pMVar43->max_length <= uVar44) goto code_?;
      *(undefined8 *)(&pMVar43->vector[0].index + uVar44 * 3) = uStack_7;
      (&pMVar43->vector[0].actualWidth)[uVar44 * 3] = fStack_8;
    }
    else {
      item_00.FirstAxisSign = (int32_t)fVar27;
      item_00.Quadrant = (int32_t)fVar26;
      item_00.SecondAxisSign = (int32_t)fStack_8;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,item_00,
                 pMVar45->klass->rgctx_data[0xe].method);
    }
    pMVar45 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar42 = &(this_00->fields)._version;
    *piVar42 = *piVar42 + 1;
    pMVar43 = (this_00->fields)._items;
    if (pMVar43 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
    uVar44 = (this_00->fields)._size;
    if (uVar44 < pMVar43->max_length) {
      (this_00->fields)._size = uVar44 + 1;
      if (pMVar43->max_length <= uVar44) goto code_?;
      *(ulonglong *)(&pMVar43->vector[0].index + uVar44 * 3) = CONCAT44(fVar3,fVar10);
      (&pMVar43->vector[0].actualWidth)[uVar44 * 3] = fVar1;
    }
    else {
      item.FirstAxisSign = (int32_t)fVar3;
      item.Quadrant = (int32_t)fVar10;
      item.SecondAxisSign = (int32_t)fVar1;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,item,
                 pMVar45->klass->rgctx_data[0xe].method);
    }
    pCVar11 = (this->fields)._wireRenderDesc;
    pLStack_33 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                 ((int)&pLStack_33->klass + 1);
    if (pCVar11 == (ConeShape3D_WireRenderDescriptor *)0x0) break;
code_?:
    if ((pCVar11->fields)._numDetailAxialSegments <= (int)pLStack_33) {
      GLRenderer::GLRenderer_DrawLines3D((List_1_UnityEngine_Vector3_ *)this_00,(MethodInfo *)0x0);
      return;
    }
    axis.y = (float)uVar34._4_4_;
    axis.x = (float)puStack_4;
    axis.z = fVar9;
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffff48,(float)(int)pLStack_33 * fStack_16,axis,
                         (MethodInfo *)0x0);
    QStack_20.x = pQVar19->x;
    QStack_20.y = pQVar19->y;
    QStack_20.z = pQVar19->z;
    QStack_20.w = pQVar19->w;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation.y = QStack_20.y;
    rotation.x = QStack_20.x;
    rotation.z = QStack_20.z;
    rotation.w = QStack_20.w;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffff58,rotation,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&VStack_17,*pVVar5,(MethodInfo *)0x0);
    pMVar45 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar46 = (this->fields)._baseCenter.x;
    uVar47 = (this->fields)._baseCenter.y;
    VStack_6.y = pVVar5->x;
    VStack_6.z = pVVar5->y;
    fStack_23 = pVVar5->z;
    fVar25 = (this->fields)._baseRadius;
    fVar26 = (float)uVar46 + VStack_6.y * fVar25;
    fVar27 = (float)uVar47 + VStack_6.z * fVar25;
    uStack_7 = CONCAT44(fVar27,fVar26);
    fStack_8 = (this->fields)._baseCenter.z + fStack_23 * fVar25;
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) break;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar48 = (code *)swi(3);
  (*pcVar48)();
  return;
}


/* ConeShape3D() */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D__ctor(ConeShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ConeShape3D__WireRenderDescriptor);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__ConeShape3D__WireRenderDescriptor;
  value = (ConeShape3D_WireRenderDescriptor *)func_?();
  (value->fields)._numDetailAxialRings = 0x14;
  (value->fields)._numDetailAxialSegments = 0x14;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._wireRenderDesc = value;
  func_?(&this->fields,value);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._baseCenter.x = (pVVar1->zeroVector).x;
  (this->fields)._baseCenter.y = fVar2;
  (this->fields)._baseCenter.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar4->identityQuaternion).x;
  fVar2 = (pQVar4->identityQuaternion).y;
  fVar5 = (pQVar4->identityQuaternion).z;
  fVar6 = (pQVar4->identityQuaternion).w;
  (this->fields)._baseRadius = 1.0;
  (this->fields)._height = 1.0;
  (this->fields)._rotation.x = fVar3;
  (this->fields)._rotation.y = fVar2;
  (this->fields)._rotation.z = fVar5;
  (this->fields)._rotation.w = fVar6;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  return;
}


/* Vector3 get_Tip() */

Vector3 * Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_get_Tip
                    (Vector3 *__return_storage_ptr__,ConeShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = SphereShape3D::SphereShape3D_get_Up(&VStack_4,(SphereShape3D *)this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = pVVar3->z;
  fVar8 = (this->fields)._height;
  __return_storage_ptr__->x = (float)uStack_2 + (float)uVar5 * fVar8;
  __return_storage_ptr__->y = uStack_2._4_4_ + (float)uVar6 * fVar8;
  __return_storage_ptr__->z = fStack_1 + fVar7 * fVar8;
  return __return_storage_ptr__;
}


/* Void set_BaseRadius(Single) */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_set_BaseRadius
               (ConeShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._baseRadius = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_Height(Single) */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_set_Height
               (ConeShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._height = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_Tip(Vector3) */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_set_Tip
               (ConeShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Up(&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = (this->fields)._height;
  (this->fields)._baseCenter.x = value.x - (float)uVar3 * fVar6;
  (this->fields)._baseCenter.y = value.y - (float)uVar4 * fVar6;
  (this->fields)._baseCenter.z = value.z - fVar5 * fVar6;
  return;
}

