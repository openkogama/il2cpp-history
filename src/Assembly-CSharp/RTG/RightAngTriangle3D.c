
/* Void AlignNormal(Vector3) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_AlignNormal
               (RightAngTriangle3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Normal(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = RightAngTriangle3D_get_Right(aVStack_2,this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_AlignRight
               (RightAngTriangle3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Right(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = RightAngTriangle3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_AlignUp
               (RightAngTriangle3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = RightAngTriangle3D_get_Normal(aVStack_2,this,(MethodInfo *)0x0);
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

bool Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_ContainsPoint
               (RightAngTriangle3D *this,Vector3 point,bool checkOnPlane,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            RightAngTriangle3D_GetPoints(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffd8,this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar2 = pVVar1->alias;
    pVVar3 = pVVar1->asset;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pSVar4 = pVVar1->alias;
    pTVar5 = (TriangleMath__Class *)pVVar1->asset;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar6._0_4_ = (String *)(this->fields)._epsilon._areaEps;
    uVar6._4_4_ = (VisualTreeAsset *)(this->fields)._epsilon._extrudeEps;
    fVar7 = (this->fields)._epsilon._wireEps;
    uVar8._0_4_ = pVVar1->alias;
    uVar8._4_4_ = pVVar1->path;
    pVVar9 = pVVar1->asset;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      puVar10 = &UNK_?;
      pTVar5 = TypeInfo__RTG__TriangleMath;
      func_?();
      uVar8 = CONCAT44(puVar10,(undefined4)uVar8);
    }
    p0.y = (float)pSVar4;
    p0.x = (float)uVar2;
    p0.z = (float)pVVar3;
    p1.y = (float)(VisualTreeAsset *)uVar8;
    p1.x = (float)pSVar4;
    p1.z = (float)pTVar5;
    p2.z = (float)pVVar9;
    p2.x = (float)(int)uVar8;
    p2.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    epsilon._wireEps = fVar7;
    epsilon._areaEps = (float)(int)uVar6;
    epsilon._extrudeEps = (float)(int)((ulonglong)uVar6 >> 0x20);
    bVar11 = TriangleMath::TriangleMath_Contains3DPoint
                      (point,checkOnPlane,p0,p1,p2,epsilon,(MethodInfo *)0x0);
    return bVar11;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_GetAABB
                 (AABB *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  pointCloud = RightAngTriangle3D_GetPoints(this,(MethodInfo *)0x0);
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


/* List`1[UnityEngine.Vector3] GetPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_GetPoints
          (RightAngTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  rightAngleCorner = (this->fields)._rightAngleCorner;
  fVar1 = _UNK_?;
  if ((this->fields)._XLengthSign == 0) {
    fVar1 = _UNK_?;
  }
  fVar2 = (this->fields)._XLength;
  fVar3 = _UNK_?;
  if ((this->fields)._YLengthSign != 0) {
    fVar3 = _UNK_?;
  }
  fVar4 = (this->fields)._YLength;
  triangleRotation = (this->fields)._rotation;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  pLVar5 = TriangleMath::TriangleMath_CalcRATriangle3DPoints
                     (rightAngleCorner,fVar1 * fVar2,fVar3 * fVar4,triangleRotation,
                      (MethodInfo *)0x0);
  return pLVar5;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_Raycast
               (RightAngTriangle3D *this,Ray ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            RightAngTriangle3D_GetPoints(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    if ((this->fields)._raycastMode != 0) {
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         ((VisualTreeAsset_UsingEntry *)&stack0xffffffdc,this_00,0,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      pVVar2 = pVVar1->asset;
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,this_00,1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      pVVar3 = pVVar1->asset;
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,this_00,2,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      uVar4._0_4_ = (String *)(this->fields)._epsilon._areaEps;
      uVar4._4_4_ = (VisualTreeAsset *)(this->fields)._epsilon._extrudeEps;
      fVar5 = (this->fields)._epsilon._wireEps;
      uVar6._0_4_ = pVVar1->alias;
      uVar6._4_4_ = pVVar1->path;
      pVVar7 = pVVar1->asset;
      if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
        puVar8 = &UNK_?;
        pTVar9 = TypeInfo__RTG__TriangleMath;
        func_?();
        uVar6 = CONCAT44(pTVar9,puVar8);
      }
      p0.z = (float)pVVar2;
      p0.x = (float)(int)uVar6;
      p0.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      p1.z = (float)pVVar3;
      p1.x = (float)(int)uVar6;
      p1.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      p2.z = (float)pVVar7;
      p2.x = (float)(int)uVar6;
      p2.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      epsilon._wireEps = fVar5;
      epsilon._areaEps = (float)(String *)uVar4;
      epsilon._extrudeEps = (float)SUB84(uVar4,4);
      bVar10 = TriangleMath::TriangleMath_RaycastWire(ray,t,p0,p1,p2,epsilon,(MethodInfo *)0x0);
      return bVar10;
    }
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xffffffd0,this_00,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pVVar2 = pVVar1->asset;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xffffffd0,this_00,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pVVar3 = pVVar1->asset;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xffffffdc,this_00,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uVar11._0_4_ = (String *)(this->fields)._epsilon._areaEps;
    uVar11._4_4_ = (VisualTreeAsset *)(this->fields)._epsilon._extrudeEps;
    fVar5 = (this->fields)._epsilon._wireEps;
    uVar12._0_4_ = pVVar1->alias;
    uVar12._4_4_ = (VisualTreeAsset *)pVVar1->path;
    pVVar7 = pVVar1->asset;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    p0_00.y = 0.0;
    p0_00.x = fVar5;
    p0_00.z = (float)pVVar2;
    p1_00.z = (float)pVVar3;
    p1_00.x = (float)(String *)uVar11;
    p1_00.y = (float)SUB84(uVar11,4);
    p2_00.z = (float)pVVar7;
    p2_00.x = (float)(String *)uVar12;
    p2_00.y = (float)SUB84(uVar12,4);
    epsilon_00._wireEps = fVar5;
    epsilon_00._areaEps = (float)(String *)uVar11;
    epsilon_00._extrudeEps = (float)SUB84(uVar11,4);
    bVar10 = TriangleMath::TriangleMath_Raycast(ray,t,p0_00,p1_00,p2_00,epsilon_00,(MethodInfo *)0x0)
    ;
    return bVar10;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar10 = (*pcVar13)();
  return bVar10;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_RaycastWire
               (RightAngTriangle3D *this,Ray ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            RightAngTriangle3D_GetPoints(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffd8,this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar2 = pVVar1->alias;
    pVVar3 = pVVar1->asset;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pSVar4 = pVVar1->alias;
    pTVar5 = (TriangleMath__Class *)pVVar1->asset;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar6._0_4_ = (String *)(this->fields)._epsilon._areaEps;
    uVar6._4_4_ = (VisualTreeAsset *)(this->fields)._epsilon._extrudeEps;
    fVar7 = (this->fields)._epsilon._wireEps;
    uVar8._0_4_ = pVVar1->alias;
    uVar8._4_4_ = pVVar1->path;
    pVVar9 = pVVar1->asset;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      puVar10 = &UNK_?;
      pTVar5 = TypeInfo__RTG__TriangleMath;
      func_?();
      uVar8 = CONCAT44(puVar10,(undefined4)uVar8);
    }
    p0.y = (float)pSVar4;
    p0.x = (float)uVar2;
    p0.z = (float)pVVar3;
    p1.y = (float)(VisualTreeAsset *)uVar8;
    p1.x = (float)pSVar4;
    p1.z = (float)pTVar5;
    p2.z = (float)pVVar9;
    p2.x = (float)(int)uVar8;
    p2.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    epsilon._wireEps = fVar7;
    epsilon._areaEps = (float)(int)uVar6;
    epsilon._extrudeEps = (float)(int)((ulonglong)uVar6 >> 0x20);
    bVar11 = TriangleMath::TriangleMath_RaycastWire(ray,t,p0,p1,p2,epsilon,(MethodInfo *)0x0);
    return bVar11;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_RenderSolid
               (RightAngTriangle3D *this,MethodInfo *method)

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
  if (this_00 == (MeshPool *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mesh = MeshPool::MeshPool_get_UnitRightAngledTriangleXY(this_00,(MethodInfo *)0x0);
  fVar2 = _UNK_?;
  if ((this->fields)._XLengthSign == 0) {
    fVar2 = _UNK_?;
  }
  fVar3 = _UNK_?;
  if ((this->fields)._YLengthSign != 0) {
    fVar3 = _UNK_?;
  }
  s.y = fVar3 * (this->fields)._YLength;
  s.x = fVar2 * (this->fields)._XLength;
  s.z = 1.0;
  pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._rightAngleCorner,
                      (this->fields)._rotation,s,(MethodInfo *)0x0);
  matrix = *pMVar4;
  if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
            (mesh,matrix,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_RenderWire
               (RightAngTriangle3D *this,MethodInfo *method)

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
  if (this_00 == (MeshPool *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mesh = MeshPool::MeshPool_get_UnitWireRightAngledTriangleXY(this_00,(MethodInfo *)0x0);
  fVar2 = _UNK_?;
  if ((this->fields)._XLengthSign == 0) {
    fVar2 = _UNK_?;
  }
  fVar3 = _UNK_?;
  if ((this->fields)._YLengthSign != 0) {
    fVar3 = _UNK_?;
  }
  s.y = fVar3 * (this->fields)._YLength;
  s.x = fVar2 * (this->fields)._XLength;
  s.z = 1.0;
  pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._rightAngleCorner,
                      (this->fields)._rotation,s,(MethodInfo *)0x0);
  matrix = *pMVar4;
  if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
            (mesh,matrix,(MethodInfo *)0x0);
  return;
}


/* RightAngTriangle3D() */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D__ctor
               (RightAngTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._rightAngleCorner.x = (pVVar1->zeroVector).x;
  (this->fields)._rightAngleCorner.y = fVar2;
  (this->fields)._rightAngleCorner.z = fVar3;
  (this->fields)._XLength = 1.0;
  (this->fields)._YLength = 1.0;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Normal
                    (Vector3 *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

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


/* Plane get_Plane() */

Plane * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Plane
                  (Plane *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Normal(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = (this->fields)._rightAngleCorner.x;
  uStack_3._4_4_ = (this->fields)._rightAngleCorner.y;
  fStack_4 = (this->fields)._rightAngleCorner.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  (__return_storage_ptr__->m_Normal).z = 0.0;
  __return_storage_ptr__->m_Distance = 0.0;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,*pVVar1,(MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  fVar7 = pVVar1->z;
  (__return_storage_ptr__->m_Normal).x = (float)uVar5;
  (__return_storage_ptr__->m_Normal).y = (float)uVar6;
  (__return_storage_ptr__->m_Normal).z = fVar7;
  __return_storage_ptr__->m_Distance =
       (float)((uint)(uStack_3._4_4_ * (float)uVar6 + (float)uStack_3 * (float)uVar5 +
                     fStack_4 * fVar7) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  return __return_storage_ptr__;
}


/* Single get_RealXLength() */

float Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_RealXLength
                (RightAngTriangle3D *this,MethodInfo *method)

{
  pRVar1 = this;
  this = (RightAngTriangle3D *)0x3f800000;
  if ((pRVar1->fields)._XLengthSign != 0) {
    this = (RightAngTriangle3D *)0xbf800000;
  }
  return (pRVar1->fields)._XLength * (float)this;
}


/* Single get_RealYLength() */

float Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_RealYLength
                (RightAngTriangle3D *this,MethodInfo *method)

{
  pRVar1 = this;
  this = (RightAngTriangle3D *)0x3f800000;
  if ((pRVar1->fields)._YLengthSign != 0) {
    this = (RightAngTriangle3D *)0xbf800000;
  }
  return (pRVar1->fields)._YLength * (float)this;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Right
                    (Vector3 *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

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


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Rotation
          (Quaternion *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.y;
  fVar2 = (this->fields)._rotation.z;
  fVar3 = (this->fields)._rotation.w;
  __return_storage_ptr__->x = (this->fields)._rotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Up
                    (Vector3 *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

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


/* Void set_AreaEps(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_set_AreaEps
               (RightAngTriangle3D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_ExtrudeEps(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_set_ExtrudeEps
               (RightAngTriangle3D *this,float value,MethodInfo *method)

{
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_set_Rotation
               (RightAngTriangle3D *this,Quaternion value,MethodInfo *method)

{
  (this->fields)._rotation.x = value.x;
  (this->fields)._rotation.y = value.y;
  (this->fields)._rotation.z = value.z;
  (this->fields)._rotation.w = value.w;
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_set_WireEps
               (RightAngTriangle3D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_CoreRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

