
/* Void AlignDepth(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_AlignDepth
               (TriangPrismShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Look(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TriangPrismShape3D_get_Right(aVStack_2,this,(MethodInfo *)0x0);
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


/* Void AlignHeight(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_AlignHeight
               (TriangPrismShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TriangPrismShape3D_get_Right(aVStack_2,this,(MethodInfo *)0x0);
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


/* Void AlignWidth(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_AlignWidth
               (TriangPrismShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Right(aVStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TriangPrismShape3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
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


/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_ContainsPoint
               (TriangPrismShape3D *this,Vector3 point,MethodInfo *method)

{
  baseDepth = (this->fields)._depth;
  baseWidth = (this->fields)._width;
  bVar1 = PrismMath::PrismMath_ContainsPoint
                    (point,(this->fields)._baseCenter,baseWidth,baseDepth,baseWidth,baseDepth,
                     (this->fields)._height,(this->fields)._rotation,
                     (PrismEpsilon)(this->fields)._epsilon._ptContainEps,(MethodInfo *)0x0);
  return bVar1;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_GetAABB
                 (AABB *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  baseDepth = (this->fields)._depth;
  baseWidth = (this->fields)._width;
  pointCloud = PrismMath::PrismMath_CalcTriangPrismCornerPoints
                         ((this->fields)._baseCenter,baseWidth,baseDepth,baseWidth,baseDepth,
                          (this->fields)._height,(this->fields)._rotation,(MethodInfo *)0x0);
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


/* Void MakeEquilateral(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_MakeEquilateral
               (TriangPrismShape3D *this,float sideLength,MethodInfo *method)

{
  fVar1 = sideLength * _UNK_?;
  (this->fields)._width = sideLength;
  dVar2 = (double)(sideLength * sideLength - fVar1 * fVar1);
  if (0.0 <= dVar2) {
    (this->fields)._depth = (float)SQRT(dVar2);
    return;
  }
  func_?();
  (this->fields)._depth = (float)dVar2;
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_Raycast
               (TriangPrismShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  baseDepth = (this->fields)._depth;
  baseWidth = (this->fields)._width;
  bVar1 = PrismMath::PrismMath_RaycastTriangular
                    (ray,t,(this->fields)._baseCenter,baseWidth,baseDepth,baseWidth,baseDepth,
                     (this->fields)._height,(this->fields)._rotation,(MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_RenderSolid
               (TriangPrismShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitTriangularPrism(this_00,(MethodInfo *)0x0);
    s.x = (this->fields)._width;
    s.y = (this->fields)._height;
    s.z = (this->fields)._depth;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._baseCenter,
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

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_RenderWire
               (TriangPrismShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitWireTriangularPrism(this_00,(MethodInfo *)0x0);
    s.x = (this->fields)._width;
    s.y = (this->fields)._height;
    s.z = (this->fields)._depth;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._baseCenter,
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


/* TriangPrismShape3D() */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D__ctor
               (TriangPrismShape3D *this,MethodInfo *method)

{
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
  (this->fields)._width = 1.0;
  (this->fields)._height = 1.0;
  (this->fields)._depth = 1.0;
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


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_Center
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TriangPrismShape3D_get_Up(&VStack_4,this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = (this->fields)._height;
  fVar8 = (float)uVar6 * fVar7 * _UNK_?;
  fVar9 = pVVar3->z * fVar7 * _UNK_?;
  __return_storage_ptr__->x = (float)uStack_2 + (float)uVar5 * fVar7 * _UNK_?;
  __return_storage_ptr__->y = uStack_2._4_4_ + fVar8;
  __return_storage_ptr__->z = fStack_1 + fVar9;
  return __return_storage_ptr__;
}


/* Vector3 get_FrontCenter() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_FrontCenter
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TriangPrismShape3D_get_Up(&VStack_4,this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = (this->fields)._height;
  fStack_8 = (float)uStack_2 + (float)uVar5 * fVar7 * _UNK_?;
  uStack_9 = 0;
  uStack_10 = 0;
  fStack_11 = uStack_2._4_4_ + (float)uVar6 * fVar7 * _UNK_?;
  fStack_12 = fStack_1 + pVVar3->z * fVar7 * _UNK_?;
  pVVar3 = TriangPrismShape3D_get_Look(&VStack_4,this,(MethodInfo *)0x0);
  uVar13 = pVVar3->x;
  uVar14 = pVVar3->y;
  fVar7 = (this->fields)._depth;
  fVar15 = (float)uVar14 * fVar7 * _UNK_?;
  fVar16 = pVVar3->z * fVar7 * _UNK_?;
  __return_storage_ptr__->x = fStack_8 - (float)uVar13 * fVar7 * _UNK_?;
  __return_storage_ptr__->y = fStack_11 - fVar15;
  __return_storage_ptr__->z = fStack_12 - fVar16;
  return __return_storage_ptr__;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_Look
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

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


/* Vector3 get_MidTip() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_MidTip
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TriangPrismShape3D_get_Up(&VStack_4,this,(MethodInfo *)0x0);
  uStack_5._0_4_ = pVVar3->x;
  uStack_5._4_4_ = pVVar3->y;
  fStack_6 = pVVar3->z;
  fStack_7 = (this->fields)._height;
  fVar8 = (float)(undefined4)uStack_5 * fStack_7;
  fStack_9 = (float)uStack_5._4_4_ * fStack_7;
  fStack_7 = fStack_6 * fStack_7;
  pVVar3 = TriangPrismShape3D_get_Look(&VStack_4,this,(MethodInfo *)0x0);
  uVar10 = pVVar3->x;
  uVar11 = pVVar3->y;
  fVar12 = (this->fields)._depth;
  fVar13 = ((float)uVar11 * fVar12 + fStack_9) * _UNK_?;
  fVar14 = (pVVar3->z * fVar12 + fStack_7) * _UNK_?;
  __return_storage_ptr__->x = (float)uStack_2 + ((float)uVar10 * fVar12 + fVar8) * _UNK_?;
  __return_storage_ptr__->y = uStack_2._4_4_ + fVar13;
  __return_storage_ptr__->z = fStack_1 + fVar14;
  return __return_storage_ptr__;
}


/* Vector3 get_ModelLook() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->forwardVector).y;
  fVar3 = (pVVar1->forwardVector).z;
  __return_storage_ptr__->x = (pVVar1->forwardVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_ModelRight() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->rightVector).y;
  fVar3 = (pVVar1->rightVector).z;
  __return_storage_ptr__->x = (pVVar1->rightVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_ModelUp() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->upVector).y;
  fVar3 = (pVVar1->upVector).z;
  __return_storage_ptr__->x = (pVVar1->upVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_Right
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

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


/* Vector3 get_TopCenter() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_TopCenter
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TriangPrismShape3D_get_Up(&VStack_4,this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = pVVar3->z;
  fVar8 = (this->fields)._height;
  __return_storage_ptr__->x = (float)uStack_2 + (float)uVar5 * fVar8;
  __return_storage_ptr__->y = uStack_2._4_4_ + (float)uVar6 * fVar8;
  __return_storage_ptr__->z = fStack_1 + fVar7 * fVar8;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_Up
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

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


/* Void set_BaseCenter(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_BaseCenter
               (TriangPrismShape3D *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._baseCenter.x = value.x;
  (this->fields)._baseCenter.y = value.y;
  (this->fields)._baseCenter.z = value.z;
  return;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_Center
               (TriangPrismShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = (this->fields)._height;
  fVar6 = (float)uVar4 * fVar5 * _UNK_?;
  fVar7 = pVVar1->z * fVar5 * _UNK_?;
  (this->fields)._baseCenter.x = value.x - (float)uVar3 * fVar5 * _UNK_?;
  (this->fields)._baseCenter.y = value.y - fVar6;
  (this->fields)._baseCenter.z = value.z - fVar7;
  return;
}


/* Void set_Depth(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_Depth
               (TriangPrismShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._depth = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_FrontCenter(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_FrontCenter
               (TriangPrismShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  fStack_5 = (this->fields)._depth;
  fVar6 = (float)(undefined4)uStack_3 * fStack_5;
  fStack_7 = (float)uStack_3._4_4_ * fStack_5;
  fStack_5 = fStack_4 * fStack_5;
  pVVar1 = TriangPrismShape3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  fVar10 = (this->fields)._height;
  fVar11 = (fStack_7 - (float)uVar9 * fVar10) * _UNK_?;
  fVar12 = (fStack_5 - pVVar1->z * fVar10) * _UNK_?;
  (this->fields)._baseCenter.x = value.x + (fVar6 - (float)uVar8 * fVar10) * _UNK_?;
  (this->fields)._baseCenter.y = value.y + fVar11;
  (this->fields)._baseCenter.z = value.z + fVar12;
  return;
}


/* Void set_Height(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_Height
               (TriangPrismShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._height = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_MidTip(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_MidTip
               (TriangPrismShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  fStack_5 = (this->fields)._depth;
  fVar6 = (float)(undefined4)uStack_3 * fStack_5;
  fStack_7 = (float)uStack_3._4_4_ * fStack_5;
  fStack_5 = fStack_4 * fStack_5;
  pVVar1 = TriangPrismShape3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  fVar10 = (this->fields)._height;
  fVar11 = (fStack_7 - (float)uVar9 * fVar10) * _UNK_?;
  fVar12 = (fStack_5 - pVVar1->z * fVar10) * _UNK_?;
  (this->fields)._baseCenter.x = value.x - (fVar6 - (float)uVar8 * fVar10) * _UNK_?;
  (this->fields)._baseCenter.y = value.y - fVar11;
  (this->fields)._baseCenter.z = value.z - fVar12;
  return;
}


/* Void set_PtContainEps(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_PtContainEps
               (TriangPrismShape3D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_TopCenter(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_TopCenter
               (TriangPrismShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = (this->fields)._height;
  (this->fields)._baseCenter.x = value.x - (float)uVar3 * fVar6;
  (this->fields)._baseCenter.y = value.y - (float)uVar4 * fVar6;
  (this->fields)._baseCenter.z = value.z - fVar5 * fVar6;
  return;
}


/* Void set_Width(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_Width
               (TriangPrismShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._width = (float)((uint)value & _UNK_?);
  return;
}

