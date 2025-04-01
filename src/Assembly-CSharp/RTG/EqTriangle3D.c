
/* Void AlignNormal(Vector3) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_AlignNormal
               (EqTriangle3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = EqTriangle3D_get_Look(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = EqTriangle3D_get_Right(aVStack_2,this,(MethodInfo *)0x0);
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


/* Void AlignRight(Vector3) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_AlignRight
               (EqTriangle3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = EqTriangle3D_get_Right(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = EqTriangle3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
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


/* Void AlignUp(Vector3) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_AlignUp
               (EqTriangle3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = EqTriangle3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = EqTriangle3D_get_Look(aVStack_2,this,(MethodInfo *)0x0);
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


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_GetAABB
                 (AABB *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pointCloud = (this->fields)._points;
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


/* Vector3 GetEdge(EqTriangleEdge) */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_GetEdge
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,EqTriangleEdge__Enum edge,
                    MethodInfo *method)

{
  if (edge != EqTriangleEdge__Enum_LeftTop) {
    if (edge != EqTriangleEdge__Enum_TopRight) {
      pVVar1 = EqTriangle3D_GetPoint(&VStack_2,this,EqTrianglePoint__Enum_Left,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fStack_4 = pVVar1->z;
      pVVar1 = EqTriangle3D_GetPoint
                         ((Vector3 *)&stack0xffffffd8,this,EqTrianglePoint__Enum_Right,
                          (MethodInfo *)0x0);
      uVar5 = pVVar1->x;
      uVar6 = pVVar1->y;
      uStack_3._0_4_ = (float)uStack_3 - (float)uVar5;
      uStack_3._4_4_ = uStack_3._4_4_ - (float)uVar6;
      fStack_4 = fStack_4 - pVVar1->z;
      goto code_?;
    }
    pVVar1 = EqTriangle3D_GetPoint
                       ((Vector3 *)&stack0xffffffd8,this,EqTrianglePoint__Enum_Right,
                        (MethodInfo *)0x0);
    VStack_2.x = pVVar1->x;
    VStack_2.y = pVVar1->y;
    VStack_2.z = pVVar1->z;
    pVVar1 = EqTriangle3D_GetPoint
                       ((Vector3 *)&stack0xffffffd8,this,EqTrianglePoint__Enum_Top,(MethodInfo *)0x0
                       );
    uVar7._0_4_ = pVVar1->x;
    uVar7._4_4_ = pVVar1->y;
    fStack_4 = pVVar1->z;
code_?:
    uStack_3._0_4_ = (float)uVar7;
    uStack_3._0_4_ = VStack_2.x - (float)uStack_3;
    uStack_3._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
    uStack_3._4_4_ = VStack_2.y - uStack_3._4_4_;
    fStack_4 = VStack_2.z - fStack_4;
code_?:
    __return_storage_ptr__->x = (float)uStack_3;
    __return_storage_ptr__->y = uStack_3._4_4_;
    __return_storage_ptr__->z = fStack_4;
    return __return_storage_ptr__;
  }
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar8 = (this->fields)._points;
  if (pVVar8 != (Vector3__Array *)0x0) {
    if (pVVar8->max_length < 2) goto code_?;
    VStack_2.x = pVVar8->vector[1].x;
    VStack_2.y = pVVar8->vector[1].y;
    VStack_2.z = pVVar8->vector[1].z;
    if ((this->fields)._arePointsDirty != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar8 = (this->fields)._points;
    if (pVVar8 != (Vector3__Array *)0x0) {
      if (pVVar8->max_length == 0) goto code_?;
      uVar7._0_4_ = pVVar8->vector[0].x;
      uVar7._4_4_ = pVVar8->vector[0].y;
      fStack_4 = pVVar8->vector[0].z;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* Vector3 GetEdgeMidPoint(EqTriangleEdge) */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_GetEdgeMidPoint
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,EqTriangleEdge__Enum edge,
                    MethodInfo *method)

{
  if (edge == EqTriangleEdge__Enum_LeftTop) {
    if ((this->fields)._arePointsDirty != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar1 = (this->fields)._points;
    if (pVVar1 == (Vector3__Array *)0x0) {
      func_?();
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    if (pVVar1->max_length == 0) goto code_?;
    VStack_4.x = pVVar1->vector[0].x;
    VStack_4.y = pVVar1->vector[0].y;
    VStack_4.z = pVVar1->vector[0].z;
    pVVar3 = EqTriangle3D_GetEdge
                       ((Vector3 *)&stack0xffffffd8,this,EqTriangleEdge__Enum_LeftTop,
                        (MethodInfo *)0x0);
  }
  else {
    if (edge != EqTriangleEdge__Enum_TopRight) {
      EqTriangle3D_GetPoint(&VStack_4,this,EqTrianglePoint__Enum_Right,(MethodInfo *)0x0);
      pVVar3 = EqTriangle3D_GetEdge(&VStack_4,this,edge,(MethodInfo *)0x0);
      fVar5 = pVVar3->y;
      VStack_4.y = pVVar3->z;
      VStack_4.z = 0.0;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         ((Vector3 *)&stack0xffffffd8,*pVVar3,(MethodInfo *)0x0);
      uVar6 = pVVar3->x;
      uVar7 = pVVar3->y;
      fVar8 = (float)uVar7 * _UNK_?;
      fVar9 = pVVar3->z * _UNK_?;
      fVar5 = fVar5 + (float)uVar6 * _UNK_?;
      goto code_?;
    }
    pVVar3 = EqTriangle3D_GetPoint
                       ((Vector3 *)&stack0xffffffd8,this,EqTrianglePoint__Enum_Top,(MethodInfo *)0x0
                       );
    VStack_4.x = pVVar3->x;
    VStack_4.y = pVVar3->y;
    VStack_4.z = pVVar3->z;
    pVVar3 = EqTriangle3D_GetEdge
                       ((Vector3 *)&stack0xffffffd8,this,EqTriangleEdge__Enum_TopRight,
                        (MethodInfo *)0x0);
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,*pVVar3,(MethodInfo *)0x0);
  uVar10 = pVVar3->x;
  uVar11 = pVVar3->y;
  fVar8 = (float)uVar11 * _UNK_?;
  fVar9 = pVVar3->z * _UNK_?;
  fVar5 = VStack_4.x + (float)uVar10 * _UNK_?;
code_?:
  __return_storage_ptr__->x = fVar5;
  __return_storage_ptr__->y = VStack_4.y + fVar8;
  __return_storage_ptr__->z = VStack_4.z + fVar9;
  return __return_storage_ptr__;
}


/* Vector3 GetPoint(EqTrianglePoint) */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_GetPoint
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,EqTrianglePoint__Enum point,
                    MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else if (point < pVVar1->max_length) {
    fVar2 = pVVar1->vector[point].y;
    fVar3 = pVVar1->vector[point].z;
    __return_storage_ptr__->x = pVVar1->vector[point].x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Void OnPointsFoundDirty() */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_OnPointsFoundDirty
               (EqTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields)._rotation.x;
  uVar2 = (this->fields)._rotation.y;
  rotation.y = (float)uVar2;
  rotation.x = (float)uVar1;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  uVar5._0_4_ = (String *)(this->fields)._centroid.x;
  uVar5._4_4_ = (VisualTreeAsset *)(this->fields)._centroid.y;
  sideLength = (this->fields)._sideLength;
  fVar6 = (this->fields)._centroid.z;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  centroid.z = fVar6;
  centroid.x = (float)(String *)uVar5;
  centroid.y = (float)SUB84(uVar5,4);
  rotation.z = fVar3;
  rotation.w = fVar4;
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            TriangleMath::TriangleMath_CalcEqTriangle3DPoints
                      (centroid,sideLength,rotation,(MethodInfo *)0x0);
  pVVar7 = (this->fields)._points;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,this_00,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    if (pVVar7 != (Vector3__Array *)0x0) {
      pSVar9 = pVVar8->path;
      pVVar10 = pVVar8->asset;
      if (pVVar7->max_length == 0) goto code_?;
      pVVar7->vector[0].x = (float)pVVar8->alias;
      pVVar7->vector[0].y = (float)pSVar9;
      pVVar7->vector[0].z = (float)pVVar10;
      pVVar7 = (this->fields)._points;
      pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,this_00,1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      if (pVVar7 != (Vector3__Array *)0x0) {
        pSVar9 = pVVar8->path;
        pVVar10 = pVVar8->asset;
        if (pVVar7->max_length < 2) goto code_?;
        pVVar7->vector[1].x = (float)pVVar8->alias;
        pVVar7->vector[1].y = (float)pSVar9;
        pVVar7->vector[1].z = (float)pVVar10;
        pVVar7 = (this->fields)._points;
        pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,this_00,2,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        if (pVVar7 != (Vector3__Array *)0x0) {
          pSVar9 = pVVar8->path;
          pVVar10 = pVVar8->asset;
          if (2 < pVVar7->max_length) {
            pVVar7->vector[2].x = (float)pVVar8->alias;
            pVVar7->vector[2].y = (float)pSVar9;
            pVVar7->vector[2].z = (float)pVVar10;
            (this->fields)._arePointsDirty = 0;
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_Raycast
               (EqTriangle3D *this,Ray ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if (pVVar1->max_length == 0) goto code_?;
    p0 = pVVar1->vector[0];
    if ((this->fields)._arePointsDirty != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar1 = (this->fields)._points;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (pVVar1->max_length < 2) goto code_?;
      p1 = pVVar1->vector[1];
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar1 = (this->fields)._points;
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (2 < pVVar1->max_length) {
          p2 = pVVar1->vector[2];
          epsilon = (this->fields)._epsilon;
          if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__TriangleMath);
          }
          bVar2 = TriangleMath::TriangleMath_Raycast(ray,t,p0,p1,p2,epsilon,(MethodInfo *)0x0);
          return bVar2;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_RaycastWire
               (EqTriangle3D *this,Ray ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if (pVVar1->max_length == 0) goto code_?;
    p0 = pVVar1->vector[0];
    if ((this->fields)._arePointsDirty != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar1 = (this->fields)._points;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (pVVar1->max_length < 2) goto code_?;
      p1 = pVVar1->vector[1];
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar1 = (this->fields)._points;
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (2 < pVVar1->max_length) {
          p2 = pVVar1->vector[2];
          epsilon = (this->fields)._epsilon;
          if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__TriangleMath);
          }
          bVar2 = TriangleMath::TriangleMath_RaycastWire(ray,t,p0,p1,p2,epsilon,(MethodInfo *)0x0);
          return bVar2;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_RenderSolid
               (EqTriangle3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitEqTriangleXY(this_00,(MethodInfo *)0x0);
    fVar1 = (this->fields)._sideLength;
    s.y = fVar1;
    s.x = fVar1;
    s.z = 1.0;
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._centroid,
                        (this->fields)._rotation,s,(MethodInfo *)0x0);
    matrix = *pMVar2;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_RenderWire
               (EqTriangle3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitWireEqTriangleXY(this_00,(MethodInfo *)0x0);
    fVar1 = (this->fields)._sideLength;
    s.y = fVar1;
    s.x = fVar1;
    s.z = 1.0;
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._centroid,
                        (this->fields)._rotation,s,(MethodInfo *)0x0);
    matrix = *pMVar2;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetPoint(EqTrianglePoint, Vector3) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_SetPoint
               (EqTriangle3D *this,EqTrianglePoint__Enum point,Vector3 pointValue,MethodInfo *method
               )

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if (pVVar1->max_length <= point) goto code_?;
    uVar2 = pVVar1->vector[point].x;
    uVar3 = pVVar1->vector[point].y;
    fVar4 = pointValue.x - (float)uVar2;
    fVar5 = pointValue.y - (float)uVar3;
    fVar6 = pointValue.z - pVVar1->vector[point].z;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (pVVar1->max_length == 0) goto code_?;
      uVar7 = pVVar1->vector[0].x;
      uVar8 = pVVar1->vector[0].y;
      fVar9 = pVVar1->vector[0].z;
      pVVar1->vector[0].x = (float)uVar7 + fVar4;
      pVVar1->vector[0].y = (float)uVar8 + fVar5;
      pVVar1->vector[0].z = fVar9 + fVar6;
      pVVar1 = (this->fields)._points;
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length < 2) goto code_?;
        uVar10 = pVVar1->vector[1].x;
        uVar11 = pVVar1->vector[1].y;
        fVar9 = pVVar1->vector[1].z;
        pVVar1->vector[1].x = (float)uVar10 + fVar4;
        pVVar1->vector[1].y = (float)uVar11 + fVar5;
        pVVar1->vector[1].z = fVar9 + fVar6;
        pVVar1 = (this->fields)._points;
        if (pVVar1 != (Vector3__Array *)0x0) {
          if (2 < pVVar1->max_length) {
            uVar12 = pVVar1->vector[2].x;
            uVar13 = pVVar1->vector[2].y;
            fVar9 = pVVar1->vector[2].z;
            pVVar1->vector[2].x = (float)uVar12 + fVar4;
            pVVar1->vector[2].y = (float)uVar13 + fVar5;
            pVVar1->vector[2].z = fVar9 + fVar6;
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* EqTriangle3D() */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D__ctor
               (EqTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  (this->fields)._sideLength = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._rotation.x = (pQVar1->identityQuaternion).x;
  (this->fields)._rotation.y = fVar2;
  (this->fields)._rotation.z = fVar3;
  (this->fields)._rotation.w = fVar4;
  pVVar5 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  (this->fields)._points = pVVar5;
  func_?(&(this->fields)._points,pVVar5);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields)._centroid.x = (pVVar6->zeroVector).x;
  (this->fields)._centroid.y = fVar3;
  (this->fields)._centroid.z = fVar2;
  (this->fields)._arePointsDirty = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Single get_Altitude() */

float Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Altitude
                (EqTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sideLength;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  return TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor * fVar1;
}


/* Single get_CentroidAltitude() */

float Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_CentroidAltitude
                (EqTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sideLength;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  return (TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor * fVar1) / _UNK_?;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Look
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  VStack_2.x = (this->fields)._rotation.y;
  VStack_2.y = (this->fields)._rotation.z;
  VStack_2.z = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = VStack_2.x;
  rotation.x = fVar1;
  rotation.z = VStack_2.y;
  rotation.w = VStack_2.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,rotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar4 = pVVar3->y;
  fVar1 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Right
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  VStack_2.x = (this->fields)._rotation.y;
  VStack_2.y = (this->fields)._rotation.z;
  VStack_2.z = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = VStack_2.x;
  rotation.x = fVar1;
  rotation.z = VStack_2.y;
  rotation.w = VStack_2.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,rotation,TypeInfo__UnityEngine__Vector3->static_fields->rightVector
                      ,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar1 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Up
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  VStack_2.x = (this->fields)._rotation.y;
  VStack_2.y = (this->fields)._rotation.z;
  VStack_2.z = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = VStack_2.x;
  rotation.x = fVar1;
  rotation.z = VStack_2.y;
  rotation.w = VStack_2.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,rotation,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                      (MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar1 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void set_Centroid(Vector3) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_set_Centroid
               (EqTriangle3D *this,Vector3 value,MethodInfo *method)

{
  uVar1 = (this->fields)._centroid.x;
  uVar2 = (this->fields)._centroid.y;
  fVar3 = value.x - (float)uVar1;
  fVar4 = value.y - (float)uVar2;
  fVar5 = value.z - (this->fields)._centroid.z;
  pVVar6 = (this->fields)._points;
  (this->fields)._centroid.x = (float)(int)value._0_8_;
  (this->fields)._centroid.y = (float)(int)((ulonglong)value._0_8_ >> 0x20);
  (this->fields)._centroid.z = value.z;
  if (pVVar6 != (Vector3__Array *)0x0) {
    if (pVVar6->max_length == 0) goto code_?;
    uVar7 = pVVar6->vector[0].x;
    uVar8 = pVVar6->vector[0].y;
    fVar9 = pVVar6->vector[0].z;
    pVVar6->vector[0].x = (float)uVar7 + fVar3;
    pVVar6->vector[0].y = (float)uVar8 + fVar4;
    pVVar6->vector[0].z = fVar9 + fVar5;
    pVVar6 = (this->fields)._points;
    if (pVVar6 != (Vector3__Array *)0x0) {
      if (pVVar6->max_length < 2) goto code_?;
      uVar10 = pVVar6->vector[1].x;
      uVar11 = pVVar6->vector[1].y;
      fVar9 = pVVar6->vector[1].z;
      pVVar6->vector[1].x = (float)uVar10 + fVar3;
      pVVar6->vector[1].y = (float)uVar11 + fVar4;
      pVVar6->vector[1].z = fVar9 + fVar5;
      pVVar6 = (this->fields)._points;
      if (pVVar6 != (Vector3__Array *)0x0) {
        if (2 < pVVar6->max_length) {
          uVar12 = pVVar6->vector[2].x;
          uVar13 = pVVar6->vector[2].y;
          fVar9 = pVVar6->vector[2].z;
          pVVar6->vector[2].x = (float)uVar12 + fVar3;
          pVVar6->vector[2].y = (float)uVar13 + fVar4;
          pVVar6->vector[2].z = fVar9 + fVar5;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_set_Rotation
               (EqTriangle3D *this,Quaternion value,MethodInfo *method)

{
  (this->fields)._rotation.x = value.x;
  (this->fields)._rotation.y = value.y;
  (this->fields)._rotation.z = value.z;
  (this->fields)._rotation.w = value.w;
  return;
}


/* Void set_SideLength(Single) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_set_SideLength
               (EqTriangle3D *this,float value,MethodInfo *method)

{
  (this->fields)._sideLength = (float)((uint)value & _UNK_?);
  (this->fields)._arePointsDirty = 1;
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_set_WireEps
               (EqTriangle3D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_CoreRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

