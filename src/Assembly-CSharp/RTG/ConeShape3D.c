
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
  puStack_1 = (undefined *)(this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = SphereShape3D::SphereShape3D_get_Up
                      ((Vector3 *)&stack0xffffff88,(SphereShape3D *)this,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  uVar5 = pVVar3->y;
  fVar6 = (this->fields)._height;
  fVar7 = uStack_2._4_4_ + (float)uVar5 * fVar6;
  pLVar8 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)((float)puStack_1 + pVVar3->z * fVar6);
  pCVar9 = (this->fields)._wireRenderDesc;
  uStack_10 = CONCAT44(fVar7,(float)uStack_2 + (float)uVar4 * fVar6);
  pLStack_11 = pLVar8;
  if (pCVar9 != (ConeShape3D_WireRenderDescriptor *)0x0) {
    if ((pCVar9->fields)._wireMode == 0) {
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (pMVar12 != (MeshPool *)0x0) {
        pMVar13 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar12,(MethodInfo *)0x0);
        uStack_2._0_4_ = (this->fields)._baseCenter.x;
        uStack_2._4_4_ = (this->fields)._baseCenter.y;
        fVar6 = (this->fields)._baseCenter.z;
        VStack_14.alias = (String *)(this->fields)._rotation.x;
        VStack_14.path = (String *)(this->fields)._rotation.y;
        VStack_14.asset = (VisualTreeAsset *)(this->fields)._rotation.z;
        fStack_15 = (this->fields)._rotation.w;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                            ((Quaternion *)&stack0xffffff28,90.0,
                             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                             (MethodInfo *)0x0);
        fVar7 = pQVar16->y;
        fVar17 = pQVar16->z;
        VStack_18.y = pQVar16->w;
        pSVar19 = (String *)
                  ((VStack_18.y * (float)VStack_14.alias + pQVar16->x * fStack_15 +
                   fVar17 * (float)VStack_14.path) - fVar7 * (float)VStack_14.asset);
        fVar20 = (float)VStack_14.asset * fVar17;
        pSVar21 = (String *)
                  (((float)VStack_14.path * VStack_18.y + fVar7 * fStack_15 +
                   (float)VStack_14.asset * pQVar16->x) - fVar17 * (float)VStack_14.alias);
        VStack_14.asset =
             (VisualTreeAsset *)
             (((float)VStack_14.asset * VStack_18.y + fVar17 * fStack_15 +
              fVar7 * (float)VStack_14.alias) - (float)VStack_14.path * pQVar16->x);
        VStack_18.x = VStack_18.y * fStack_15;
        fStack_15 = ((VStack_18.x - (float)VStack_14.alias * pQVar16->x) -
                    fVar7 * (float)VStack_14.path) - fVar20;
        fVar7 = (this->fields)._baseRadius;
        pos_00.z = fVar6;
        pos_00.x = (float)uStack_2;
        pos_00.y = uStack_2._4_4_;
        q_00.y = (float)pSVar21;
        q_00.x = (float)pSVar19;
        q_00.z = (float)VStack_14.asset;
        q_00.w = fStack_15;
        s_00.y = fVar7;
        s_00.x = fVar7;
        s_00.z = 1.0;
        VStack_18.z = VStack_18.y;
        fStack_22 = VStack_18.y;
        VStack_14.alias = pSVar19;
        VStack_14.path = pSVar21;
        pMVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                            ((Matrix4x4 *)&stack0xfffffee8,pos_00,q_00,s_00,(MethodInfo *)0x0);
        fVar24 = pMVar23->m00;
        fVar25 = pMVar23->m10;
        puVar26 = (undefined *)pMVar23->m20;
        pGVar27 = (Graphics__Class *)pMVar23->m30;
        VStack_14.alias = (String *)pMVar23->m01;
        VStack_14.path = (String *)pMVar23->m11;
        VStack_14.asset = (VisualTreeAsset *)pMVar23->m21;
        fStack_15 = pMVar23->m31;
        VStack_18.x = pMVar23->m02;
        VStack_18.y = pMVar23->m12;
        VStack_18.z = pMVar23->m22;
        fStack_22 = pMVar23->m32;
        fVar6 = pMVar23->m03;
        fVar7 = pMVar23->m13;
        fVar17 = pMVar23->m23;
        fVar20 = pMVar23->m33;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          puVar26 = &UNK_?;
          pGVar27 = TypeInfo__UnityEngine__Graphics;
          func_?();
        }
        matrix_00.m10 = fVar25;
        matrix_00.m00 = fVar24;
        matrix_00.m20 = (float)puVar26;
        matrix_00.m30 = (float)pGVar27;
        matrix_00.m01 = (float)VStack_14.alias;
        matrix_00.m11 = (float)VStack_14.path;
        matrix_00.m21 = (float)VStack_14.asset;
        matrix_00.m31 = fStack_15;
        matrix_00.m02 = VStack_18.x;
        matrix_00.m12 = VStack_18.y;
        matrix_00.m22 = VStack_18.z;
        matrix_00.m32 = fStack_22;
        matrix_00.m03 = fVar6;
        matrix_00.m13 = fVar7;
        matrix_00.m23 = fVar17;
        matrix_00.m33 = fVar20;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (pMVar13,matrix_00,(MethodInfo *)0x0);
        this_01 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  ConeMath::ConeMath_CalcConeBaseExtentPoints
                            ((this->fields)._baseCenter,(this->fields)._baseRadius,
                             (this->fields)._rotation,(MethodInfo *)0x0);
        pLStack_28 = this_01;
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
                      (&VStack_14,this_01,0,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      ), linePoints != (List_1_UnityEngine_Vector3_ *)0x0)) {
          func_?();
          func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                    (&VStack_14,pLStack_28,1,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                    );
          func_?();
          func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                    (&VStack_14,pLStack_28,2,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                    );
          func_?();
          func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                    (&VStack_14,pLStack_28,3,
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
      pVVar3 = SphereShape3D::SphereShape3D_get_Up
                          ((Vector3 *)&stack0xffffff88,(SphereShape3D *)this,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar3->x;
      uStack_2._4_4_ = pVVar3->y;
      pLVar29 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)pVVar3->z;
      uStack_10 = uStack_2;
      pLStack_11 = pLVar29;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          ((Quaternion *)&stack0xffffff50,90.0,
                           TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                           (MethodInfo *)0x0);
      pCVar9 = (this->fields)._wireRenderDesc;
      if (pCVar9 != (ConeShape3D_WireRenderDescriptor *)0x0) {
        iVar30 = 0;
        pCVar31 = (this->fields)._wireRenderDesc;
        fStack_32 = (this->fields)._height / (float)((pCVar9->fields)._numDetailAxialRings + -1);
        fVar6 = (this->fields)._baseRadius;
        fVar17 = _UNK_?;
        if (_UNK_? < fVar6) {
          fVar17 = fVar6;
        }
        pLStack_28 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                     ((this->fields)._height / fVar17);
        VStack_14.alias = (String *)pQVar16->x;
        VStack_14.path = (String *)pQVar16->y;
        VStack_14.asset = (VisualTreeAsset *)pQVar16->z;
        fStack_15 = pQVar16->w;
        do {
          if ((pCVar31->fields)._numDetailAxialRings <= iVar30) {
            pCVar9 = (this->fields)._wireRenderDesc;
            if (pCVar9 != (ConeShape3D_WireRenderDescriptor *)0x0) {
              iVar30 = (pCVar9->fields)._numDetailAxialSegments;
              this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)func_?();
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                        (this_00,iVar30 * 2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                        );
              pCVar9 = (this->fields)._wireRenderDesc;
              if (pCVar9 != (ConeShape3D_WireRenderDescriptor *)0x0) {
                pLStack_28 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0;
                fVar6 = _UNK_? / (float)(pCVar9->fields)._numDetailAxialSegments;
                goto code_?;
              }
            }
            break;
          }
          uVar33 = (this->fields)._baseCenter.x;
          uVar34 = (this->fields)._baseCenter.y;
          fVar6 = (float)iVar30;
          fVar24 = (float)uVar33 + fVar6 * (float)uStack_10 * fStack_32;
          fVar17 = (float)uVar34 + fVar6 * uStack_10._4_4_ * fStack_32;
          fVar6 = (this->fields)._baseCenter.z + fVar6 * (float)pLStack_11 * fStack_32;
          fVar20 = ((this->fields)._height - (float)iVar30 * fStack_32) / (float)pLStack_28;
          if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pMVar12 = (MeshPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar12 == (MeshPool *)0x0) break;
          pMVar13 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar12,(MethodInfo *)0x0);
          pos.y = fVar17;
          pos.x = fVar24;
          pos.z = fVar6;
          q.y = (float)VStack_14.path;
          q.x = (float)VStack_14.alias;
          q.z = (float)VStack_14.asset;
          q.w = fStack_15;
          s.y = fVar20;
          s.x = fVar20;
          s.z = 1.0;
          pMVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                              ((Matrix4x4 *)&stack0xfffffee8,pos,q,s,(MethodInfo *)0x0);
          VStack_18.x = pMVar23->m00;
          VStack_18.y = pMVar23->m10;
          VStack_18.z = pMVar23->m20;
          fStack_22 = pMVar23->m30;
          fVar6 = pMVar23->m01;
          fVar17 = pMVar23->m11;
          fVar20 = pMVar23->m21;
          fVar24 = pMVar23->m31;
          fVar25 = pMVar23->m02;
          fVar35 = pMVar23->m12;
          fVar36 = pMVar23->m22;
          fVar37 = pMVar23->m32;
          fVar38 = pMVar23->m03;
          fVar39 = pMVar23->m13;
          fVar40 = pMVar23->m23;
          fVar41 = pMVar23->m33;
          if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Graphics);
          }
          matrix.m10 = VStack_18.y;
          matrix.m00 = VStack_18.x;
          matrix.m20 = VStack_18.z;
          matrix.m30 = fStack_22;
          matrix.m01 = fVar6;
          matrix.m11 = fVar17;
          matrix.m21 = fVar20;
          matrix.m31 = fVar24;
          matrix.m02 = fVar25;
          matrix.m12 = fVar35;
          matrix.m22 = fVar36;
          matrix.m32 = fVar37;
          matrix.m03 = fVar38;
          matrix.m13 = fVar39;
          matrix.m23 = fVar40;
          matrix.m33 = fVar41;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (pMVar13,matrix,(MethodInfo *)0x0);
          pCVar31 = (this->fields)._wireRenderDesc;
          iVar30 = iVar30 + 1;
        } while (pCVar31 != (ConeShape3D_WireRenderDescriptor *)0x0);
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
      uStack_10 = CONCAT44(fVar24,fVar20);
      pLStack_11 = pLVar45;
      if (pMVar43->max_length <= uVar44) goto code_?;
      *(undefined8 *)(&pMVar43->vector[0].index + uVar44 * 3) = uStack_10;
      (&pMVar43->vector[0].actualWidth)[uVar44 * 3] = (float)pLVar45;
    }
    else {
      puVar26 = &UNK_?;
      item_00.FirstAxisSign = (int32_t)fVar24;
      item_00.Quadrant = (int32_t)fVar20;
      item_00.SecondAxisSign = (int32_t)pLVar45;
      pLVar29 = this_00;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,item_00,
                 pMVar46->klass->rgctx_data[0xe].method);
    }
    pMVar46 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar42 = &(this_00->fields)._version;
    *piVar42 = *piVar42 + 1;
    pMVar43 = (this_00->fields)._items;
    if (pMVar43 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
    uVar44 = (this_00->fields)._size;
    if (uVar44 < pMVar43->max_length) {
      (this_00->fields)._size = uVar44 + 1;
      if (pMVar43->max_length <= uVar44) goto code_?;
      *(ulonglong *)(&pMVar43->vector[0].index + uVar44 * 3) = CONCAT44(fVar7,puVar26);
      (&pMVar43->vector[0].actualWidth)[uVar44 * 3] = (float)pLVar8;
    }
    else {
      item.FirstAxisSign = (int32_t)fVar7;
      item.Quadrant = (int32_t)puVar26;
      item.SecondAxisSign = (int32_t)pLVar8;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,item,
                 pMVar46->klass->rgctx_data[0xe].method);
    }
    pCVar9 = (this->fields)._wireRenderDesc;
    pLStack_28 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                 ((int)&pLStack_28->klass + 1);
    if (pCVar9 == (ConeShape3D_WireRenderDescriptor *)0x0) break;
code_?:
    if ((pCVar9->fields)._numDetailAxialSegments <= (int)pLStack_28) {
      GLRenderer::GLRenderer_DrawLines3D((List_1_UnityEngine_Vector3_ *)this_00,(MethodInfo *)0x0);
      return;
    }
    axis.z = (float)pLVar29;
    axis.x = (float)uStack_2;
    axis.y = uStack_2._4_4_;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffff28,(float)(int)pLStack_28 * fVar6,axis,
                         (MethodInfo *)0x0);
    fVar17 = pQVar16->x;
    fVar20 = pQVar16->y;
    fVar24 = pQVar16->z;
    fVar25 = pQVar16->w;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation.y = fVar20;
    rotation.x = fVar17;
    rotation.z = fVar24;
    rotation.w = fVar25;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_18,rotation,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    puVar26 = (undefined *)0x0;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&VStack_14,*pVVar3,(MethodInfo *)0x0);
    pMVar46 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar47 = (this->fields)._baseCenter.x;
    uVar48 = (this->fields)._baseCenter.y;
    uVar49 = pVVar3->x;
    uVar50 = pVVar3->y;
    fVar17 = (this->fields)._baseRadius;
    fVar20 = (float)uVar47 + (float)uVar49 * fVar17;
    fVar24 = (float)uVar48 + (float)uVar50 * fVar17;
    pLVar45 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)((this->fields)._baseCenter.z + pVVar3->z * fVar17);
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) break;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar51 = (code *)swi(3);
  (*pcVar51)();
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

