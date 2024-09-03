
/* Void CalcModelBorderPoints() */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_CalcModelBorderPoints
               (CircleShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  pLVar1 = PrimitiveFactory::PrimitiveFactory_Generate2DCircleBorderPointsCW
                     (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector,1.0,
                      (this->fields)._numBorderPoints,(MethodInfo *)0x0);
  (this->fields)._modelBorderPoints = pLVar1;
  func_?(&(this->fields)._modelBorderPoints,pLVar1);
  (this->fields)._areModelBorderPointsDirty = 0;
  return;
}


/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_ContainsPoint
               (CircleShape2D *this,Vector2 point,MethodInfo *method)

{
  circleRadius = (this->fields)._radius;
  pCVar1 = &(this->fields)._epsilon;
  if ((this->fields)._ptContainMode != 0) {
    bVar2 = CircleMath::CircleMath_Is2DPointOnBorder
                      (point,(this->fields)._center,circleRadius,*pCVar1,(MethodInfo *)0x0);
    return bVar2;
  }
  bVar2 = CircleMath::CircleMath_Contains2DPoint
                    (point,(this->fields)._center,circleRadius,*pCVar1,(MethodInfo *)0x0);
  return bVar2;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,CircleShape2D *this,MethodInfo *method)

{
  RStack_1.m_Width = (this->fields)._center.x;
  RStack_1.m_Height = (this->fields)._center.y;
  points = CircleMath::CircleMath_Calc2DExtentPoints
                     ((this->fields)._center,(this->fields)._radius,(this->fields)._rotationDegrees,
                      (MethodInfo *)0x0);
  pRVar2 = RectEx::RectEx_FromPoints
                     (&RStack_1,(IEnumerable_1_UnityEngine_Vector2_ *)points,(MethodInfo *)0x0);
  fVar3 = pRVar2->m_YMin;
  fVar4 = pRVar2->m_Width;
  fVar5 = pRVar2->m_Height;
  __return_storage_ptr__->m_XMin = pRVar2->m_XMin;
  __return_storage_ptr__->m_YMin = fVar3;
  __return_storage_ptr__->m_Width = fVar4;
  __return_storage_ptr__->m_Height = fVar5;
  return __return_storage_ptr__;
}


/* Vector2 GetExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_GetExtentPoint
                  (CircleShape2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  switch(extentPt) {
  case Shape2DExtentPoint__Enum_Left:
    extentPt = (Shape2DExtentPoint__Enum)(this->fields)._center.x;
    fStack_1 = (this->fields)._center.y;
    VVar2 = CircleShape2D_get_Right(this,(MethodInfo *)0x0);
    fVar3 = VVar2.y;
    break;
  case Shape2DExtentPoint__Enum_Top:
    extentPt = (Shape2DExtentPoint__Enum)(this->fields)._center.x;
    fStack_1 = (this->fields)._center.y;
    VVar2 = CircleShape2D_get_Up(this,(MethodInfo *)0x0);
    fVar3 = VVar2.y;
    goto code_?;
  case Shape2DExtentPoint__Enum_Right:
    extentPt = (Shape2DExtentPoint__Enum)(this->fields)._center.x;
    fStack_1 = (this->fields)._center.y;
    VVar2 = CircleShape2D_get_Right(this,(MethodInfo *)0x0);
    fVar3 = VVar2.y;
code_?:
    VStack_4.y = fVar3 * (this->fields)._radius + fStack_1;
    VStack_4.x = VStack_4.x * (this->fields)._radius + (float)extentPt;
    return VStack_4;
  case Shape2DExtentPoint__Enum_Bottom:
    extentPt = (Shape2DExtentPoint__Enum)(this->fields)._center.x;
    fStack_1 = (this->fields)._center.y;
    VVar2 = CircleShape2D_get_Up(this,(MethodInfo *)0x0);
    fVar3 = VVar2.y;
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  }
  VStack_4.y = fStack_1 - fVar3 * (this->fields)._radius;
  VStack_4.x = (float)extentPt - VStack_4.x * (this->fields)._radius;
  return VStack_4;
}


/* List`1[UnityEngine.Vector2] GetExtentPoints() */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_GetExtentPoints
          (CircleShape2D *this,MethodInfo *method)

{
  pLVar1 = CircleMath::CircleMath_Calc2DExtentPoints
                     ((this->fields)._center,(this->fields)._radius,(this->fields)._rotationDegrees,
                      (MethodInfo *)0x0);
  return pLVar1;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_RenderArea
               (CircleShape2D *this,Camera *camera,MethodInfo *method)

{
  if ((this->fields)._areModelBorderPointsDirty != 0) {
    CircleShape2D_CalcModelBorderPoints(this,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  origin = TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  points = (this->fields)._modelBorderPoints;
  translation = (this->fields)._center;
  scale = Vector2Ex::Vector2Ex_FromValue((this->fields)._radius,(MethodInfo *)0x0);
  GLRenderer::GLRenderer_DrawTriangleFan2D(origin,points,translation,scale,camera,(MethodInfo *)0x0)
  ;
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_RenderBorder
               (CircleShape2D *this,Camera *camera,MethodInfo *method)

{
  if ((this->fields)._areModelBorderPointsDirty != 0) {
    CircleShape2D_CalcModelBorderPoints(this,(MethodInfo *)0x0);
  }
  linePoints = (this->fields)._modelBorderPoints;
  translation = (this->fields)._center;
  scale = Vector2Ex::Vector2Ex_FromValue((this->fields)._radius,(MethodInfo *)0x0);
  GLRenderer::GLRenderer_DrawLines2D_1(linePoints,translation,scale,camera,(MethodInfo *)0x0);
  return;
}


/* CircleShape2D() */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D__ctor
               (CircleShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._center.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._center.y = fVar1;
  (this->fields)._radius = 1.0;
  (this->fields)._numBorderPoints = 100;
  this_00 = (List_1_UnityEngine_Vector2_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  method_00 = (MethodInfo *)&(this->fields)._modelBorderPoints;
  (this->fields)._modelBorderPoints = this_00;
  func_?(method_00,this_00);
  (this->fields)._areModelBorderPointsDirty = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_get_Right
                  (CircleShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffdc,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  puVar3 = (undefined *)pQVar2->x;
  fVar1 = pQVar2->z;
  fVar4 = pQVar2->w;
  if (cRam_? == '\0') {
    puVar3 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  rotation.y = 0.0;
  rotation.x = (float)puVar3;
  rotation.z = fVar1;
  rotation.w = fVar4;
  point.z = 0.0;
  point.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  point.y = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xfffffff0,rotation,point,(MethodInfo *)0x0);
  VVar6.x = pVVar5->x;
  VVar6.y = pVVar5->y;
  return VVar6;
}


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_get_Up
                  (CircleShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffdc,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  puVar3 = (undefined *)pQVar2->x;
  fVar1 = pQVar2->z;
  fVar4 = pQVar2->w;
  if (cRam_? == '\0') {
    puVar3 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  rotation.y = 0.0;
  rotation.x = (float)puVar3;
  rotation.z = fVar1;
  rotation.w = fVar4;
  point.z = 0.0;
  point.x = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  point.y = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xfffffff0,rotation,point,(MethodInfo *)0x0);
  VVar6.x = pVVar5->x;
  VVar6.y = pVVar5->y;
  return VVar6;
}


/* Void set_Epsilon(CircleEpsilon) */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_set_Epsilon
               (CircleShape2D *this,CircleEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon._radiusEps = value._radiusEps;
  (this->fields)._epsilon._extrudeEps = value._extrudeEps;
  (this->fields)._epsilon._wireEps = value._wireEps;
  return;
}


/* Void set_NumBorderPoints(Int32) */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_set_NumBorderPoints
               (CircleShape2D *this,int32_t value,MethodInfo *method)

{
  if (value < 5) {
    value = 4;
  }
  (this->fields)._numBorderPoints = value;
  (this->fields)._areModelBorderPointsDirty = 1;
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_set_WireEps
               (CircleShape2D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_CoreRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

