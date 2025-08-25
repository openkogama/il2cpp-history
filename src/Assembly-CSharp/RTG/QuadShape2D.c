
/* Void AlignWidth(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_AlignWidth
               (QuadShape2D *this,Vector2 axis,MethodInfo *method)

{
  pQVar1 = this;
  from = RightAngTriangle2D::RightAngTriangle2D_get_Right
                   ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
  pQVar2 = QuaternionEx::QuaternionEx_FromToRotation2D
                     ((Quaternion *)&stack0xffffffec,from,axis,(MethodInfo *)0x0);
  fVar3 = pQVar2->w;
  fVar4 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar5 = 0.0;
  pVVar6 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
  fVar7 = pVVar6->y;
  fVar8 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&puStack_9,fVar4,*pVVar6,(MethodInfo *)0x0);
  fVar4 = pQVar2->y;
  fVar10 = pQVar2->z;
  fVar11 = pQVar2->w;
  this = (QuadShape2D *)((fVar10 * fVar3 + fVar5 * fVar11 + fVar4 * fVar7) - fVar8 * pQVar2->x);
  fVar12 = (fVar4 * fVar3 + fVar8 * fVar11 + fVar5 * pQVar2->x) - fVar10 * fVar7;
  axis.x = ((fVar3 * fVar11 - pQVar2->x * fVar7) - fVar4 * fVar8) - fVar5 * fVar10;
  quat.x = (fVar3 * pQVar2->x + fVar7 * fVar11 + fVar10 * fVar8) - fVar4 * fVar5;
  quat = (Quaternion)CONCAT124(quat._0_12_,quat.x);
  QuaternionEx::QuaternionEx_ConvertTo2DRotation(quat,(MethodInfo *)0x0);
  fVar13 = (float10)func_?();
  (pQVar1->fields)._rotationDegrees = (float)fVar13;
  return;
}


/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_ContainsPoint
               (QuadShape2D *this,Vector2 point,MethodInfo *method)

{
  fVar1 = (this->fields)._center.y;
  quadWidth = (this->fields)._size.x;
  quadHeight = (this->fields)._size.y;
  if ((this->fields)._ptContainMode != 0) {
    VVar2 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    VVar3 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    bVar4 = QuadMath::QuadMath_Is2DPointOnBorder_1
                      (point,(Vector2)((ulonglong)(uint)fVar1 << 0x20),quadWidth,quadHeight,VVar2,
                       VVar3,(this->fields)._epsilon,(MethodInfo *)0x0);
    return bVar4;
  }
  VVar2 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                    ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
  VVar3 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                    ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
  bVar4 = QuadMath::QuadMath_Contains2DPoint_1
                    (point,(Vector2)((ulonglong)(uint)fVar1 << 0x20),quadWidth,quadHeight,VVar2,
                     VVar3,(this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar4;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,QuadShape2D *this,MethodInfo *method)

{
  RStack_1.m_Width = (this->fields)._center.x;
  RStack_1.m_Height = (this->fields)._center.y;
  pVVar2 = &(this->fields)._size;
  fStack_3 = pVVar2->x;
  fStack_4 = (this->fields)._size.y;
  points = QuadMath::QuadMath_Calc2DQuadCornerPoints
                     ((this->fields)._center,*pVVar2,(this->fields)._rotationDegrees,
                      (MethodInfo *)0x0);
  pRVar5 = RectEx::RectEx_FromPoints
                     (&RStack_1,(IEnumerable_1_UnityEngine_Vector2_ *)points,(MethodInfo *)0x0);
  fVar6 = pRVar5->m_YMin;
  fVar7 = pRVar5->m_Width;
  fVar8 = pRVar5->m_Height;
  __return_storage_ptr__->m_XMin = pRVar5->m_XMin;
  __return_storage_ptr__->m_YMin = fVar6;
  __return_storage_ptr__->m_Width = fVar7;
  __return_storage_ptr__->m_Height = fVar8;
  return __return_storage_ptr__;
}


/* Vector2 GetExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_GetExtentPoint
                  (QuadShape2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  fVar1 = (this->fields)._size.x * _UNK_?;
  fVar2 = (this->fields)._size.y * _UNK_?;
  switch(extentPt) {
  case Shape2DExtentPoint__Enum_Left:
    fVar2 = (this->fields)._center.x;
    fVar3 = (this->fields)._center.y;
    VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    VStack_5.y = VVar4.y;
    VStack_5.y = fVar3 - VStack_5.y * fVar1;
    VStack_5.x = fVar2 - VStack_5.x * fVar1;
    return VStack_5;
  case Shape2DExtentPoint__Enum_Top:
    fVar1 = (this->fields)._center.x;
    fVar3 = (this->fields)._center.y;
    VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    VStack_5.y = VVar4.y;
    VStack_5.y = VStack_5.y * fVar2 + fVar3;
    VStack_5.x = VStack_5.x * fVar2 + fVar1;
    return VStack_5;
  case Shape2DExtentPoint__Enum_Right:
    fVar2 = (this->fields)._center.x;
    fVar3 = (this->fields)._center.y;
    VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    VStack_5.y = VVar4.y;
    VStack_5.y = VStack_5.y * fVar1 + fVar3;
    VStack_5.x = VStack_5.x * fVar1 + fVar2;
    return VStack_5;
  case Shape2DExtentPoint__Enum_Bottom:
    fVar1 = (this->fields)._center.x;
    fVar3 = (this->fields)._center.y;
    VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    VStack_5.y = VVar4.y;
    VStack_5.y = fVar3 - VStack_5.y * fVar2;
    VStack_5.x = fVar1 - VStack_5.x * fVar2;
    return VStack_5;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
}


/* Single GetSizeAlongDirection(Vector2) */

float Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_GetSizeAlongDirection
                (QuadShape2D *this,Vector2 direction,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  point.z = 0.0;
  point.x = (this->fields)._size.x;
  point.y = (this->fields)._size.y;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xfffffff0,*pQVar2,point,(MethodInfo *)0x0);
  v2.x = pVVar3->x;
  v2.y = pVVar3->y;
  fVar1 = Vector2Ex::Vector2Ex_AbsDot(direction,v2,(MethodInfo *)0x0);
  return fVar1;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_RenderArea
               (QuadShape2D *this,Camera *camera,MethodInfo *method)

{
  GraphicsEx::GraphicsEx_DrawQuad2D
            ((this->fields)._center,(this->fields)._size,(this->fields)._rotationDegrees,camera,
             (MethodInfo *)0x0);
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_RenderBorder
               (QuadShape2D *this,Camera *camera,MethodInfo *method)

{
  GraphicsEx::GraphicsEx_DrawQuadBorder2D
            ((this->fields)._center,(this->fields)._size,(this->fields)._rotationDegrees,camera,
             (MethodInfo *)0x0);
  return;
}


/* QuadShape2D() */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D__ctor(QuadShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._center.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._center.y = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y;
  (this->fields)._size.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x;
  (this->fields)._size.y = fVar1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Vector2 get_Extents() */

Vector2 Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_get_Extents
                  (QuadShape2D *this,MethodInfo *method)

{
  VVar1.y = (this->fields)._size.y * _UNK_?;
  VVar1.x = (this->fields)._size.x * _UNK_?;
  return VVar1;
}


/* Single get_HeightEps() */

float Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_get_HeightEps
                (QuadShape2D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._sizeEps.y;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_get_Rotation
          (Quaternion *__return_storage_ptr__,QuadShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_3,fVar1,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                      (MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Single get_WidthEps() */

float Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_get_WidthEps
                (QuadShape2D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._sizeEps.x;
}


/* Void set_HeightEps(Single) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_HeightEps
               (QuadShape2D *this,float value,MethodInfo *method)

{
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_RotationDegrees
               (QuadShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)value);
  (this->fields)._rotationDegrees = (float)fVar1;
  return;
}


/* Void set_Size(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_Size
               (QuadShape2D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = Vector2Ex::Vector2Ex_Abs(value,(MethodInfo *)0x0);
  (this->fields)._size.x = value.x;
  value.y = VVar1.y;
  (this->fields)._size.y = value.y;
  return;
}


/* Void set_SizeEps(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_SizeEps
               (QuadShape2D *this,Vector2 value,MethodInfo *method)

{
  QuadEpsilon::QuadEpsilon_set_SizeEps(&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_WireEps
               (QuadShape2D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_TubeRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

