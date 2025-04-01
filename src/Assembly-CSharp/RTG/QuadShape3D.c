
/* Void AlignUp(Vector3) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_AlignUp
               (QuadShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                      (aVStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Look
                      (aVStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  from.z = fVar4;
  from.x = (float)(undefined4)uStack_3;
  from.y = (float)uStack_3._4_4_;
  pQVar5 = QuaternionEx::QuaternionEx_FromToRotation3D
                      ((Quaternion *)&stack0xffffffb0,from,axis,*pVVar1,(MethodInfo *)0x0);
  fVar6 = (this->fields)._rotation.x;
  fVar7 = (this->fields)._rotation.y;
  fVar8 = (this->fields)._rotation.z;
  fVar9 = (this->fields)._rotation.w;
  fVar10 = pQVar5->x;
  fVar11 = pQVar5->y;
  fVar12 = pQVar5->z;
  fVar13 = pQVar5->w;
  fVar14 = pQVar5->x;
  fVar4 = pQVar5->x;
  fVar15 = (this->fields)._rotation.x;
  fVar16 = (this->fields)._rotation.x;
  (this->fields)._rotation.x = (fVar13 * fVar6 + fVar10 * fVar9 + fVar8 * fVar11) - fVar7 * fVar12;
  (this->fields)._rotation.y = (fVar7 * fVar13 + fVar9 * fVar11 + fVar12 * fVar6) - fVar8 * fVar14;
  (this->fields)._rotation.z = (fVar8 * fVar13 + fVar12 * fVar9 + fVar7 * fVar4) - fVar15 * fVar11;
  (this->fields)._rotation.w = ((fVar13 * fVar9 - fVar16 * fVar10) - fVar7 * fVar11) - fVar12 * fVar8;
  return;
}


/* Boolean ContainsPoint(Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_ContainsPoint
               (QuadShape3D *this,Vector3 point,bool checkOnPlane,MethodInfo *method)

{
  quadCenter = (this->fields)._center;
  quadWidth = (this->fields)._size.x;
  quadHeight = (this->fields)._size.y;
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                     ((Vector3 *)&stack0xffffffdc,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  quadRight = *pVVar1;
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     ((Vector3 *)&stack0xffffffdc,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  bVar2 = QuadMath::QuadMath_Contains3DPoint
                    (point,checkOnPlane,quadCenter,quadWidth,quadHeight,quadRight,*pVVar1,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar2;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_GetAABB
                 (AABB *__return_storage_ptr__,QuadShape3D *this,MethodInfo *method)

{
  pointCloud = QuadMath::QuadMath_Calc3DQuadCornerPoints
                         ((this->fields)._center,(this->fields)._size,(this->fields)._rotation,
                          (MethodInfo *)0x0);
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  AABB::AABB__ctor_2(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector3_ *)pointCloud,
                     (MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Vector3 GetCornerPosition(QuadCorner) */

Vector3 * Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_GetCornerPosition
                    (Vector3 *__return_storage_ptr__,QuadShape3D *this,QuadCorner__Enum quadCorner,
                    MethodInfo *method)

{
  pVVar1 = &(this->fields)._size;
  VStack_2.y = pVVar1->x;
  VStack_2.z = (this->fields)._size.y;
  pVVar3 = QuadMath::QuadMath_Calc3DQuadCorner
                     (&VStack_2,(this->fields)._center,*pVVar1,(this->fields)._rotation,quadCorner,
                      (MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetCorners() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_GetCorners(QuadShape3D *this,MethodInfo *method)

{
  pLVar1 = QuadMath::QuadMath_Calc3DQuadCornerPoints
                     ((this->fields)._center,(this->fields)._size,(this->fields)._rotation,
                      (MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_Raycast
               (QuadShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  if ((this->fields)._raycastMode != 0) {
    bVar1 = (*(code *)(this->klass->vtable).RaycastWire.method)
                      (this,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,
                       ray.m_Direction.y,ray.m_Direction.z,t,
                       (this->klass->vtable).RenderSolid.methodPtr);
    return bVar1;
  }
  quadCenter = (this->fields)._center;
  quadWidth = (this->fields)._size.x;
  quadHeight = (this->fields)._size.y;
  pVVar2 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                     ((Vector3 *)&stack0xffffffdc,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  quadRight = *pVVar2;
  pVVar2 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     ((Vector3 *)&stack0xffffffdc,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  bVar1 = QuadMath::QuadMath_Raycast
                    (ray,t,quadCenter,quadWidth,quadHeight,quadRight,*pVVar2,(this->fields)._epsilon
                     ,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_RaycastWire
               (QuadShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  quadCenter = (this->fields)._center;
  quadWidth = (this->fields)._size.x;
  quadHeight = (this->fields)._size.y;
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                     ((Vector3 *)&stack0xffffffdc,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  quadRight = *pVVar1;
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     ((Vector3 *)&stack0xffffffdc,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  bVar2 = QuadMath::QuadMath_RaycastWire
                    (ray,t,quadCenter,quadWidth,quadHeight,quadRight,*pVVar1,(this->fields)._epsilon
                     ,(MethodInfo *)0x0);
  return bVar2;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_RenderSolid
               (QuadShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitQuadXY(this_00,(MethodInfo *)0x0);
    s.z = 1.0;
    s.x = (this->fields)._size.x;
    s.y = (this->fields)._size.y;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._center,
                        (this->fields)._rotation,s,(MethodInfo *)0x0);
    matrix = *pMVar1;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_RenderWire
               (QuadShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields)._wireRenderDesc;
  if (pQVar1 != (QuadShape3D_WireRenderDescriptor *)0x0) {
    if ((pQVar1->fields)._wireEdgeFlags == 0xf) {
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
      }
      this_01 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (this_01 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitWireQuadXY(this_01,(MethodInfo *)0x0);
        VStack_2.y = 1.0;
        s.z = 1.0;
        s.x = (this->fields)._size.x;
        s.y = (this->fields)._size.y;
        pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                            ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._center,
                             (this->fields)._rotation,s,(MethodInfo *)0x0);
        fVar4 = pMVar3->m00;
        VStack_5.alias = (String *)pMVar3->m10;
        VStack_5.path = (String *)pMVar3->m20;
        VStack_5.asset = (VisualTreeAsset *)pMVar3->m30;
        fStack_6 = pMVar3->m01;
        fStack_7 = pMVar3->m11;
        VStack_2.x = pMVar3->m21;
        VStack_2.y = pMVar3->m31;
        fVar8 = pMVar3->m02;
        fVar9 = pMVar3->m12;
        fVar10 = pMVar3->m22;
        fVar11 = pMVar3->m32;
        fVar12 = pMVar3->m03;
        fVar13 = pMVar3->m13;
        fVar14 = pMVar3->m23;
        fVar15 = pMVar3->m33;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        matrix.m10 = (float)VStack_5.alias;
        matrix.m00 = fVar4;
        matrix.m20 = (float)VStack_5.path;
        matrix.m30 = (float)VStack_5.asset;
        matrix.m01 = fStack_6;
        matrix.m11 = fStack_7;
        matrix.m21 = VStack_2.x;
        matrix.m31 = VStack_2.y;
        matrix.m02 = fVar8;
        matrix.m12 = fVar9;
        matrix.m22 = fVar10;
        matrix.m32 = fVar11;
        matrix.m03 = fVar12;
        matrix.m13 = fVar13;
        matrix.m23 = fVar14;
        matrix.m33 = fVar15;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (mesh,matrix,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pVVar16 = &(this->fields)._size;
      VStack_2 = *pVVar16;
      this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                QuadMath::QuadMath_Calc3DQuadCornerPoints
                          ((this->fields)._center,*pVVar16,(this->fields)._rotation,(MethodInfo *)0x0
                          );
      pQVar1 = (this->fields)._wireRenderDesc;
      if (pQVar1 != (QuadShape3D_WireRenderDescriptor *)0x0) {
        if (((pQVar1->fields)._wireEdgeFlags & 1) != 0) {
          if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
          goto code_?;
          pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              (&VStack_5,this_00,0,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          VStack_2.x = (float)pVVar17->alias;
          VStack_2.y = (float)pVVar17->path;
          pVVar18 = pVVar17->asset;
          pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              (&VStack_5,this_00,1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          startPoint_02.z = (float)pVVar18;
          startPoint_02.x = VStack_2.x;
          startPoint_02.y = VStack_2.y;
          GLRenderer::GLRenderer_DrawLine3D(startPoint_02,(Vector3)*pVVar17,(MethodInfo *)0x0);
        }
        pQVar1 = (this->fields)._wireRenderDesc;
        if (pQVar1 != (QuadShape3D_WireRenderDescriptor *)0x0) {
          if (((pQVar1->fields)._wireEdgeFlags & 2) != 0) {
            if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
            goto code_?;
            pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                      VisualTreeAsset+UsingEntry]::
                      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                (&VStack_5,this_00,1,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
            VStack_2.x = (float)pVVar17->alias;
            VStack_2.y = (float)pVVar17->path;
            pVVar18 = pVVar17->asset;
            pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                      VisualTreeAsset+UsingEntry]::
                      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                (&VStack_5,this_00,2,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
            startPoint.z = (float)pVVar18;
            startPoint.x = VStack_2.x;
            startPoint.y = VStack_2.y;
            GLRenderer::GLRenderer_DrawLine3D(startPoint,(Vector3)*pVVar17,(MethodInfo *)0x0);
          }
          pQVar1 = (this->fields)._wireRenderDesc;
          if (pQVar1 != (QuadShape3D_WireRenderDescriptor *)0x0) {
            if (((pQVar1->fields)._wireEdgeFlags & 4) != 0) {
              if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
              goto code_?;
              pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                        VisualTreeAsset+UsingEntry]::
                        List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                  (&VStack_5,this_00,2,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                  );
              VStack_2.x = (float)pVVar17->alias;
              VStack_2.y = (float)pVVar17->path;
              pVVar18 = pVVar17->asset;
              pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                        VisualTreeAsset+UsingEntry]::
                        List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                  (&VStack_5,this_00,3,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                  );
              startPoint_00.z = (float)pVVar18;
              startPoint_00.x = VStack_2.x;
              startPoint_00.y = VStack_2.y;
              GLRenderer::GLRenderer_DrawLine3D(startPoint_00,(Vector3)*pVVar17,(MethodInfo *)0x0);
            }
            pQVar1 = (this->fields)._wireRenderDesc;
            if (pQVar1 != (QuadShape3D_WireRenderDescriptor *)0x0) {
              if (((pQVar1->fields)._wireEdgeFlags & 8) != 0) {
                if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
                goto code_?;
                pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements
                          ::VisualTreeAsset+UsingEntry]::
                          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                    (&VStack_5,this_00,3,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                    );
                VStack_2.x = (float)pVVar17->alias;
                VStack_2.y = (float)pVVar17->path;
                pVVar18 = pVVar17->asset;
                pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements
                          ::VisualTreeAsset+UsingEntry]::
                          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                    (&VStack_5,this_00,0,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                    );
                startPoint_01.z = (float)pVVar18;
                startPoint_01.x = VStack_2.x;
                startPoint_01.y = VStack_2.y;
                GLRenderer::GLRenderer_DrawLine3D(startPoint_01,(Vector3)*pVVar17,(MethodInfo *)0x0)
                ;
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SetCornerPointPosition(QuadCorner, Vector3) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_SetCornerPointPosition
               (QuadShape3D *this,QuadCorner__Enum quadCorner,Vector3 position,MethodInfo *method)

{
  pVVar1 = &(this->fields)._size;
  _fStack_10 = CONCAT44(pVVar1->x,fStack_2);
  fStack_3 = (this->fields)._size.y;
  pVVar4 = QuadMath::QuadMath_Calc3DQuadCorner
                     (&VStack_5,(this->fields)._center,*pVVar1,(this->fields)._rotation,quadCorner,
                      (MethodInfo *)0x0);
  uVar6 = (this->fields)._center.x;
  uVar7 = (this->fields)._center.y;
  fVar8 = (this->fields)._center.z;
  uVar9 = pVVar4->x;
  uVar10 = pVVar4->y;
  fVar11 = pVVar4->z;
  (this->fields)._center.x = position.x + ((float)uVar6 - (float)uVar9);
  (this->fields)._center.y = position.y + ((float)uVar7 - (float)uVar10);
  (this->fields)._center.z = position.z + (fVar8 - fVar11);
  return;
}


/* QuadShape3D() */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D__ctor(QuadShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__QuadShape3D__WireRenderDescriptor);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._center.x = (pVVar1->zeroVector).x;
  (this->fields)._center.y = fVar2;
  (this->fields)._center.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y;
  (this->fields)._size.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x;
  (this->fields)._size.y = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar4->identityQuaternion).y;
  fVar2 = (pQVar4->identityQuaternion).z;
  fVar5 = (pQVar4->identityQuaternion).w;
  (this->fields)._rotation.x = (pQVar4->identityQuaternion).x;
  (this->fields)._rotation.y = fVar3;
  (this->fields)._rotation.z = fVar2;
  (this->fields)._rotation.w = fVar5;
  method_01 = TypeInfo__RTG__QuadShape3D__WireRenderDescriptor;
  value = (QuadShape3D_WireRenderDescriptor *)func_?();
  (value->fields)._wireEdgeFlags = 0xf;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&(this->fields)._wireRenderDesc;
  *(QuadShape3D_WireRenderDescriptor **)method_00 = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Single get_HeightEps() */

float Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_get_HeightEps
                (QuadShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._sizeEps.y;
}


/* Single get_WidthEps() */

float Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_get_WidthEps
                (QuadShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._sizeEps.x;
}


/* Void set_ExtrudeEps(Single) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_set_ExtrudeEps
               (QuadShape3D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_CoreRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_Size(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_set_Size
               (QuadShape3D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = Vector2Ex::Vector2Ex_Abs(value,(MethodInfo *)0x0);
  (this->fields)._size.x = value.x;
  value.y = VVar1.y;
  (this->fields)._size.y = value.y;
  return;
}


/* Void set_SizeEps(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_set_SizeEps
               (QuadShape3D *this,Vector2 value,MethodInfo *method)

{
  QuadEpsilon::QuadEpsilon_set_SizeEps(&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_set_WireEps
               (QuadShape3D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_TubeRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

