
/* Void AlignDepth(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_AlignDepth
               (BoxShape3D *this,Vector3 axis,MethodInfo *method)

{
  pBVar1 = this;
  fVar2 = (this->fields)._rotation.x;
  fVar3 = (this->fields)._rotation.y;
  fVar4 = (this->fields)._rotation.z;
  fVar5 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  QVar6.y = fVar3;
  QVar6.x = fVar2;
  QVar6.z = fVar4;
  QVar6.w = fVar5;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffd0,QVar6,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  from = *pVVar7;
  pVVar7 = RightAngTriangle3D::RightAngTriangle3D_get_Right
                     ((Vector3 *)&stack0xffffffd0,(RightAngTriangle3D *)this,(MethodInfo *)0x0);
  pQVar8 = QuaternionEx::QuaternionEx_FromToRotation3D
                     ((Quaternion *)&stack0xffffffc0,from,axis,*pVVar7,(MethodInfo *)0x0);
  fVar2 = (this->fields)._rotation.x;
  fVar3 = (this->fields)._rotation.y;
  fVar4 = (this->fields)._rotation.z;
  fVar5 = (this->fields)._rotation.w;
  fVar9 = pQVar8->y;
  fVar10 = pQVar8->z;
  fVar11 = pQVar8->w;
  pBVar12 = &this->fields;
  fVar13 = (fVar9 * fVar5 + fVar3 * fVar11 + fVar10 * fVar2) - fVar4 * pQVar8->x;
  fVar14 = (fVar5 * pQVar8->x + fVar11 * fVar2 + fVar4 * fVar9) - fVar3 * fVar10;
  uVar15 = CONCAT44(fVar13,fVar14);
  this = (BoxShape3D *)
         (((fVar5 * fVar11 - pQVar8->x * (this->fields)._rotation.x) - fVar3 * fVar9) -
         fVar10 * fVar4);
  fVar16 = (fVar10 * fVar5 + fVar4 * fVar11 + fVar3 * pQVar8->x) - fVar9 * (pBVar12->_rotation).x;
  QVar6 = (Quaternion)CONCAT88(uVar17,uVar15);
  pQVar8 = QuaternionEx::QuaternionEx_Normalize
                     ((Quaternion *)&stack0xffffffc0,QVar6,(MethodInfo *)0x0);
  fVar2 = pQVar8->y;
  fVar3 = pQVar8->z;
  fVar4 = pQVar8->w;
  (pBVar1->fields)._rotation.x = pQVar8->x;
  (pBVar1->fields)._rotation.y = fVar2;
  (pBVar1->fields)._rotation.z = fVar3;
  (pBVar1->fields)._rotation.w = fVar4;
  return;
}


/* Void AlignHeight(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_AlignHeight
               (BoxShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D::RightAngTriangle3D_get_Up
                      (&VStack_2,(RightAngTriangle3D *)this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = RightAngTriangle3D::RightAngTriangle3D_get_Right
                      (&VStack_2,(RightAngTriangle3D *)this,(MethodInfo *)0x0);
  from.y = (float)uVar4;
  from.x = (float)uVar3;
  from.z = fVar5;
  pQVar6 = QuaternionEx::QuaternionEx_FromToRotation3D
                      ((Quaternion *)&stack0xffffffc0,from,axis,*pVVar1,(MethodInfo *)0x0);
  fVar5 = (this->fields)._rotation.x;
  fVar7 = (this->fields)._rotation.y;
  fVar8 = (this->fields)._rotation.z;
  fVar9 = (this->fields)._rotation.w;
  fVar10 = pQVar6->y;
  fVar11 = pQVar6->z;
  fVar12 = pQVar6->w;
  VStack_2.x = (fVar9 * pQVar6->x + fVar12 * fVar5 + fVar8 * fVar10) - fVar7 * fVar11;
  VStack_2.y = (fVar7 * fVar12 + fVar10 * fVar9 + fVar11 * fVar5) - fVar8 * pQVar6->x;
  VStack_2.z = (float)&UNK_?;
  quat.y = VStack_2.y;
  quat.x = VStack_2.x;
  quat.z = (fVar11 * fVar9 + fVar8 * fVar12 + fVar7 * pQVar6->x) - fVar10 * (this->fields)._rotation.x
  ;
  quat.w = ((fVar9 * fVar12 - pQVar6->x * (this->fields)._rotation.x) - fVar7 * fVar10) -
           fVar11 * fVar8;
  pQVar6 = QuaternionEx::QuaternionEx_Normalize
                      ((Quaternion *)&stack0xffffffc0,quat,(MethodInfo *)0x0);
  fVar5 = pQVar6->y;
  fVar7 = pQVar6->z;
  fVar8 = pQVar6->w;
  (this->fields)._rotation.x = pQVar6->x;
  (this->fields)._rotation.y = fVar5;
  (this->fields)._rotation.z = fVar7;
  (this->fields)._rotation.w = fVar8;
  return;
}


/* Void AlignWidth(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_AlignWidth
               (BoxShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D::RightAngTriangle3D_get_Right
                      (&VStack_2,(RightAngTriangle3D *)this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = RightAngTriangle3D::RightAngTriangle3D_get_Up
                      (&VStack_2,(RightAngTriangle3D *)this,(MethodInfo *)0x0);
  from.y = (float)uVar4;
  from.x = (float)uVar3;
  from.z = fVar5;
  pQVar6 = QuaternionEx::QuaternionEx_FromToRotation3D
                      ((Quaternion *)&stack0xffffffc0,from,axis,*pVVar1,(MethodInfo *)0x0);
  fVar5 = (this->fields)._rotation.x;
  fVar7 = (this->fields)._rotation.y;
  fVar8 = (this->fields)._rotation.z;
  fVar9 = (this->fields)._rotation.w;
  fVar10 = pQVar6->y;
  fVar11 = pQVar6->z;
  fVar12 = pQVar6->w;
  VStack_2.x = (fVar9 * pQVar6->x + fVar12 * fVar5 + fVar8 * fVar10) - fVar7 * fVar11;
  VStack_2.y = (fVar7 * fVar12 + fVar10 * fVar9 + fVar11 * fVar5) - fVar8 * pQVar6->x;
  VStack_2.z = (float)&UNK_?;
  quat.y = VStack_2.y;
  quat.x = VStack_2.x;
  quat.z = (fVar11 * fVar9 + fVar8 * fVar12 + fVar7 * pQVar6->x) - fVar10 * (this->fields)._rotation.x
  ;
  quat.w = ((fVar9 * fVar12 - pQVar6->x * (this->fields)._rotation.x) - fVar7 * fVar10) -
           fVar11 * fVar8;
  pQVar6 = QuaternionEx::QuaternionEx_Normalize
                      ((Quaternion *)&stack0xffffffc0,quat,(MethodInfo *)0x0);
  fVar5 = pQVar6->y;
  fVar7 = pQVar6->z;
  fVar8 = pQVar6->w;
  (this->fields)._rotation.x = pQVar6->x;
  (this->fields)._rotation.y = fVar5;
  (this->fields)._rotation.z = fVar7;
  (this->fields)._rotation.w = fVar8;
  return;
}


/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_ContainsPoint
               (BoxShape3D *this,Vector3 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  boxRotation = (this->fields)._rotation;
  boxCenter = (this->fields)._center;
  boxSize = (this->fields)._size;
  epsilon = (this->fields)._epsilon._sizeEps;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  bVar1 = BoxMath::BoxMath_ContainsPoint
                    (point,boxCenter,boxSize,boxRotation,(BoxEpsilon)epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* Void FromOBB(OBB) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_FromOBB
               (BoxShape3D *this,OBB obb,MethodInfo *method)

{
  OVar1 = obb;
  (this->fields)._center.x = obb._center.x;
  (this->fields)._center.y = obb._center.y;
  (this->fields)._center.z = obb._center.z;
  pVVar2 = Vector3Ex::Vector3Ex_Abs((Vector3 *)&stack0xfffffff0,OVar1._size,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  (this->fields)._size.x = pVVar2->x;
  (this->fields)._size.y = fVar3;
  (this->fields)._size.z = fVar4;
  quat.y = obb._rotation.y;
  quat.x = obb._rotation.x;
  quat.z = obb._rotation.z;
  quat.w = obb._rotation.w;
  pQVar5 = QuaternionEx::QuaternionEx_Normalize
                     ((Quaternion *)&obb._rotation.y,quat,(MethodInfo *)0x0);
  fVar4 = pQVar5->y;
  fVar3 = pQVar5->z;
  fVar6 = pQVar5->w;
  (this->fields)._rotation.x = pQVar5->x;
  (this->fields)._rotation.y = fVar4;
  (this->fields)._rotation.z = fVar3;
  (this->fields)._rotation.w = fVar6;
  return;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_GetAABB
                 (AABB *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  center = (this->fields)._center;
  size = (this->fields)._size;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  AABB::AABB__ctor(__return_storage_ptr__,center,size,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Vector3 GetFaceCenter(BoxFace) */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_GetFaceCenter
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,BoxFace__Enum boxFace,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (this->fields)._center.x;
  uStack_1._4_4_ = (this->fields)._center.y;
  VStack_2.y = (this->fields)._size.x;
  VStack_2.z = (this->fields)._size.y;
  boxRotation = (this->fields)._rotation;
  fVar3 = (this->fields)._center.z;
  fVar4 = (this->fields)._size.z;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  boxCenter.z = fVar3;
  boxCenter.x = (float)(undefined4)uStack_1;
  boxCenter.y = (float)uStack_1._4_4_;
  boxSize.z = fVar4;
  boxSize.x = VStack_2.y;
  boxSize.y = VStack_2.z;
  pVVar5 = BoxMath::BoxMath_CalcBoxFaceCenter
                     (&VStack_2,boxCenter,boxSize,boxRotation,boxFace,(MethodInfo *)0x0);
  fVar4 = pVVar5->y;
  fVar3 = pVVar5->z;
  __return_storage_ptr__->x = pVVar5->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* OBB GetOBB() */

OBB * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_GetOBB
                (OBB *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  undefined4 uVar1;
  AABB aabb;
  Quaternion rotation;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  undefined1 auStack_4 [12];
  float fStack_5;
  float fStack_6;
  float fStack_7;
  float fStack_8;
  undefined8 uStack_9;
  
  pauVar3 = (undefined1 (*) [16])
            (*(code *)(this->klass->vtable).GetAABB.method)(auStack_4,this,this->klass[1]._0.image)
  ;
  auVar2 = *pauVar3;
  uVar1 = *(undefined4 *)(pauVar3[1] + 8);
  uStack_9 = *(undefined8 *)pauVar3[1];
  fStack_5 = (this->fields)._rotation.x;
  fStack_6 = (this->fields)._rotation.y;
  fStack_7 = (this->fields)._rotation.z;
  fStack_8 = (this->fields)._rotation.w;
  func_?(__return_storage_ptr__,0,0x2c);
  aabb._center.y = (float)(int)uStack_9;
  aabb._0_16_ = auVar2;
  aabb._center.z = (float)(int)((ulonglong)uStack_9 >> 0x20);
  aabb._24_4_ = uVar1;
  rotation.y = fStack_6;
  rotation.x = fStack_5;
  rotation.z = fStack_7;
  rotation.w = fStack_8;
  OBB::OBB__ctor_6(__return_storage_ptr__,aabb,rotation,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Single GetSizeAlongDirection(Vector3) */

float Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_GetSizeAlongDirection
                (BoxShape3D *this,Vector3 direction,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,(this->fields)._rotation,(this->fields)._size,(MethodInfo *)0x0);
  uVar3 = pVVar1->y;
  stack0xfffffffc = direction.y;
  VStack_2.z = (float)uVar3;
  VStack_2.y = (float)&UNK_?;
  v1.z = 0.0;
  v1 = (Vector3)CONCAT48(v1.z,VStack_2._0_8_);
  fVar4 = Vector3Ex::Vector3Ex_AbsDot(v1,*pVVar1,(MethodInfo *)0x0);
  return fVar4;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_Raycast
               (BoxShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  boxRotation = (this->fields)._rotation;
  boxCenter = (this->fields)._center;
  boxSize = (this->fields)._size;
  epsilon = (this->fields)._epsilon._sizeEps;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  bVar1 = BoxMath::BoxMath_Raycast_1
                    (ray,t,boxCenter,boxSize,boxRotation,(BoxEpsilon)epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_RenderSolid
               (BoxShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitBox(this_00,(MethodInfo *)0x0);
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._center,
                        (this->fields)._rotation,(this->fields)._size,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_RenderWire
               (BoxShape3D *this,MethodInfo *method)

{
  BoxShape3D_WireRenderDescriptor *pBVar1;
  code *pcVar2;
  AABB aabb;
  OBB box;
  OBB box_00;
  undefined1 (*pauVar3) [20];
  float in_stack_4;
  float in_stack_5;
  float in_stack_6;
  float in_stack_7;
  float in_stack_8;
  float in_stack_9;
  float in_stack_10;
  float in_stack_11;
  float in_stack_12;
  float in_stack_13;
  undefined4 in_stack_14;
  
  func_?(&stack0xffffffb4,0,0x2c);
  pauVar3 = (undefined1 (*) [20])
            (*(code *)(this->klass->vtable).GetAABB.method)
                      (&stack0xffffffe0,this,this->klass[1]._0.image);
  aabb._center.z = (float)(int)((ulonglong)*(undefined8 *)(*pauVar3 + 0x10) >> 0x20);
  aabb._0_20_ = *pauVar3;
  aabb._24_4_ = *(undefined4 *)(pauVar3[1] + 4);
  OBB::OBB__ctor_6((OBB *)&stack0xffffffb4,aabb,(this->fields)._rotation,(MethodInfo *)0x0);
  pBVar1 = (this->fields)._wireRenderDesc;
  if (pBVar1 == (BoxShape3D_WireRenderDescriptor *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pBVar1->fields)._wireMode != 0) {
    box._size.y = in_stack_5;
    box._size.x = in_stack_4;
    box._size.z = in_stack_6;
    box._center.x = in_stack_7;
    box._center.y = in_stack_8;
    box._center.z = in_stack_9;
    box._rotation.x = in_stack_10;
    box._rotation.y = in_stack_11;
    box._rotation.z = in_stack_12;
    box._rotation.w = in_stack_13;
    box._isValid = (bool)in_stack_14;
    box._41_3_ = SUB43(in_stack_14,1);
    GraphicsEx::GraphicsEx_DrawWireCornerBox_1
              (box,(pBVar1->fields)._cornerLinePercentage,(MethodInfo *)0x0);
    return;
  }
  box_00._size.y = in_stack_5;
  box_00._size.x = in_stack_4;
  box_00._size.z = in_stack_6;
  box_00._center.x = in_stack_7;
  box_00._center.y = in_stack_8;
  box_00._center.z = in_stack_9;
  box_00._rotation.x = in_stack_10;
  box_00._rotation.y = in_stack_11;
  box_00._rotation.z = in_stack_12;
  box_00._rotation.w = in_stack_13;
  box_00._isValid = (bool)in_stack_14;
  box_00._41_3_ = SUB43(in_stack_14,1);
  GraphicsEx::GraphicsEx_DrawWireBox_1(box_00,(MethodInfo *)0x0);
  return;
}


/* Void SetFaceCenter(BoxFace, Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_SetFaceCenter
               (BoxShape3D *this,BoxFace__Enum boxFace,Vector3 newCenter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._rotation.x;
  VStack_2.x = (this->fields)._rotation.y;
  VStack_2.y = (this->fields)._rotation.z;
  VStack_2.z = (this->fields)._rotation.w;
  uVar3._0_4_ = (this->fields)._center.x;
  uVar3._4_4_ = (this->fields)._center.y;
  uVar4._0_4_ = (this->fields)._size.x;
  uVar4._4_4_ = (this->fields)._size.y;
  fVar5 = (this->fields)._center.z;
  fVar6 = (this->fields)._size.z;
  fStack_7 = (float)(undefined4)uVar4;
  uStack_8 = uVar4._4_4_;
  fStack_9 = (float)(undefined4)uVar3;
  uStack_10 = uVar3._4_4_;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
    uVar3 = CONCAT44(uStack_10,fStack_9);
    uVar4 = CONCAT44(uStack_8,fStack_7);
  }
  boxCenter.z = fVar5;
  boxCenter.x = (float)(int)uVar3;
  boxCenter.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  boxSize.z = fVar6;
  boxSize.x = (float)(int)uVar4;
  boxSize.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  boxRotation.y = VStack_2.x;
  boxRotation.x = fVar1;
  boxRotation.z = VStack_2.y;
  boxRotation.w = VStack_2.z;
  pVVar11 = BoxMath::BoxMath_CalcBoxFaceCenter
                      (&VStack_2,boxCenter,boxSize,boxRotation,boxFace,(MethodInfo *)0x0);
  uVar12 = (this->fields)._center.x;
  uVar13 = (this->fields)._center.y;
  fVar5 = (this->fields)._center.z;
  uVar14 = pVVar11->x;
  uVar15 = pVVar11->y;
  fVar6 = pVVar11->z;
  (this->fields)._center.x = newCenter.x + ((float)uVar12 - (float)uVar14);
  (this->fields)._center.y = newCenter.y + ((float)uVar13 - (float)uVar15);
  (this->fields)._center.z = newCenter.z + (fVar5 - fVar6);
  return;
}


/* BoxShape3D() */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D__ctor(BoxShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxShape3D__WireRenderDescriptor);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__BoxShape3D__WireRenderDescriptor;
  value = (BoxShape3D_WireRenderDescriptor *)func_?();
  (value->fields)._cornerLinePercentage = 0.2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._wireRenderDesc = value;
  func_?(&this->fields,value);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->fields)._size.x = (pVVar1->oneVector).x;
  (this->fields)._size.y = fVar2;
  (this->fields)._size.z = fVar3;
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
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Center
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._center.y;
  fVar2 = (this->fields)._center.z;
  __return_storage_ptr__->x = (this->fields)._center.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Single get_DepthEps() */

float Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_DepthEps
                (BoxShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._sizeEps.z;
}


/* Vector3 get_Extents() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Extents
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._size.x;
  uVar2 = (this->fields)._size.y;
  fVar3 = (this->fields)._size.z * _UNK_?;
  fVar4 = (float)uVar2 * _UNK_?;
  __return_storage_ptr__->x = (float)uVar1 * _UNK_?;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Single get_HeightEps() */

float Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_HeightEps
                (BoxShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._sizeEps.y;
}


/* Vector3 get_Max() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Max
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._center.x;
  uVar2 = (this->fields)._center.y;
  fVar3 = (this->fields)._center.z;
  uVar4 = (this->fields)._size.x;
  uVar5 = (this->fields)._size.y;
  fVar6 = (float)uVar5 * _UNK_?;
  fVar7 = (this->fields)._size.z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar1 + (float)uVar4 * _UNK_?;
  __return_storage_ptr__->y = (float)uVar2 + fVar6;
  __return_storage_ptr__->z = fVar3 + fVar7;
  return __return_storage_ptr__;
}


/* Vector3 get_Min() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Min
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._center.x;
  uVar2 = (this->fields)._center.y;
  fVar3 = (this->fields)._center.z;
  uVar4 = (this->fields)._size.x;
  uVar5 = (this->fields)._size.y;
  fVar6 = (float)uVar5 * _UNK_?;
  fVar7 = (this->fields)._size.z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar1 - (float)uVar4 * _UNK_?;
  __return_storage_ptr__->y = (float)uVar2 - fVar6;
  __return_storage_ptr__->z = fVar3 - fVar7;
  return __return_storage_ptr__;
}


/* Single get_WidthEps() */

float Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_WidthEps
                (BoxShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._sizeEps.x;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Center
               (BoxShape3D *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._center.x = value.x;
  (this->fields)._center.y = value.y;
  (this->fields)._center.z = value.z;
  return;
}


/* Void set_Max(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Max
               (BoxShape3D *this,Vector3 value,MethodInfo *method)

{
  uVar1 = (this->fields)._center.x;
  uVar2 = (this->fields)._center.y;
  uVar3 = (this->fields)._size.x;
  uVar4 = (this->fields)._size.y;
  fVar5 = (float)uVar2 - (float)uVar4 * _UNK_?;
  fVar6 = (float)uVar1 - (float)uVar3 * _UNK_?;
  fVar7 = (this->fields)._center.z - (this->fields)._size.z * _UNK_?;
  fVar8 = (value.z + fVar7) * _UNK_?;
  fVar9 = (value.y + fVar5) * _UNK_?;
  (this->fields)._center.x = (value.x + fVar6) * _UNK_?;
  (this->fields)._center.y = fVar9;
  (this->fields)._center.z = fVar8;
  (this->fields)._size.x = value.x - fVar6;
  (this->fields)._size.y = value.y - fVar5;
  (this->fields)._size.z = value.z - fVar7;
  return;
}


/* Void set_Min(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Min
               (BoxShape3D *this,Vector3 value,MethodInfo *method)

{
  uVar1 = (this->fields)._center.x;
  uVar2 = (this->fields)._center.y;
  uVar3 = (this->fields)._size.x;
  uVar4 = (this->fields)._size.y;
  fVar5 = (float)uVar1 + (float)uVar3 * _UNK_?;
  fVar6 = (float)uVar2 + (float)uVar4 * _UNK_?;
  fVar7 = (this->fields)._center.z + (this->fields)._size.z * _UNK_?;
  fVar8 = (value.z + fVar7) * _UNK_?;
  fVar9 = (value.y + fVar6) * _UNK_?;
  (this->fields)._center.x = (value.x + fVar5) * _UNK_?;
  (this->fields)._center.y = fVar9;
  (this->fields)._center.z = fVar8;
  (this->fields)._size.x = fVar5 - value.x;
  (this->fields)._size.y = fVar6 - value.y;
  (this->fields)._size.z = fVar7 - value.z;
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Rotation
               (BoxShape3D *this,Quaternion value,MethodInfo *method)

{
  pQVar1 = QuaternionEx::QuaternionEx_Normalize(&value,value,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields)._rotation.x = pQVar1->x;
  (this->fields)._rotation.y = fVar2;
  (this->fields)._rotation.z = fVar3;
  (this->fields)._rotation.w = fVar4;
  return;
}


/* Void set_Size(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Size
               (BoxShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = Vector3Ex::Vector3Ex_Abs(&value,value,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields)._size.x = pVVar1->x;
  (this->fields)._size.y = fVar2;
  (this->fields)._size.z = fVar3;
  return;
}


/* Void set_SizeEps(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_SizeEps
               (BoxShape3D *this,Vector3 value,MethodInfo *method)

{
  BoxEpsilon::BoxEpsilon_set_SizeEps(&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

