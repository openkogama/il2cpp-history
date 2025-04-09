
/* Void CalculateEndPoint() */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_CalculateEndPoint
               (ArcShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._origin.x;
  y = (this->fields)._origin.y;
  fVar2 = (this->fields)._startPoint.x - fVar1;
  fVar3 = (this->fields)._startPoint.y - y;
  fVar4 = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3__ctor
            ((Vector3 *)&stack0xffffffd8,fVar1,y,0.0,(MethodInfo *)0x0);
  fVar1 = (this->fields)._degreeAngleFromStart;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffd4,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  point.y = fVar3;
  point.x = fVar2;
  point.z = fVar4;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffd8,*pQVar5,point,(MethodInfo *)0x0);
  uVar7 = pVVar6->x;
  uVar8 = pVVar6->y;
  (this->fields)._endPoint.x = (float)uVar7 + fVar3;
  (this->fields)._endPoint.y = (float)uVar8 + fVar4;
  return;
}


/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_ContainsPoint
               (ArcShape2D *this,Vector2 point,MethodInfo *method)

{
  if (((this->fields)._forceShortestArc == 0) &&
     (degreesFromStart = (this->fields)._degreeAngleFromStart,
     _UNK_? < (float)((uint)degreesFromStart & _UNK_?))) {
    bVar1 = ArcMath::ArcMath_LgArcContains2DPoint
                      (point,(this->fields)._origin,(this->fields)._startPoint,degreesFromStart,
                       (this->fields)._epsilon,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = ArcMath::ArcMath_ShArcContains2DPoint
                    (point,(this->fields)._origin,(this->fields)._startPoint,
                     (this->fields)._degreeAngleFromStart,(this->fields)._epsilon,(MethodInfo *)0x0)
  ;
  return bVar1;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,ArcShape2D *this,MethodInfo *method)

{
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape2D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  fVar1 = (this->fields)._rect.m_YMin;
  fVar2 = (this->fields)._rect.m_Width;
  fVar3 = (this->fields)._rect.m_Height;
  __return_storage_ptr__->m_XMin = (this->fields)._rect.m_XMin;
  __return_storage_ptr__->m_YMin = fVar1;
  __return_storage_ptr__->m_Width = fVar2;
  __return_storage_ptr__->m_Height = fVar3;
  return __return_storage_ptr__;
}


/* Void OnBorderPointsFoundDirty() */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_OnBorderPointsFoundDirty
               (ArcShape2D *this,MethodInfo *method)

{
  pVVar1 = &(this->fields)._origin;
  RStack_2.m_Width = pVVar1->x;
  RStack_2.m_Height = (this->fields)._origin.y;
  pVVar3 = &(this->fields)._startPoint;
  fStack_4 = pVVar3->x;
  fStack_5 = (this->fields)._startPoint.y;
  pLVar6 = PrimitiveFactory::PrimitiveFactory_Generate2DArcBorderPoints
                     (*pVVar1,*pVVar3,(this->fields)._degreeAngleFromStart,
                      (this->fields)._forceShortestArc,(this->fields)._numBorderPoints,
                      (MethodInfo *)0x0);
  ppLVar7 = &(this->fields)._borderPoints;
  *ppLVar7 = pLVar6;
  func_?(ppLVar7,pLVar6);
  pRVar8 = RectEx::RectEx_FromPoints
                     (&RStack_2,(IEnumerable_1_UnityEngine_Vector2_ *)*ppLVar7,(MethodInfo *)0x0);
  fVar9 = pRVar8->m_XMin;
  fVar10 = pRVar8->m_YMin;
  fVar11 = pRVar8->m_Width;
  fVar12 = pRVar8->m_Height;
  (this->fields)._areBorderPointsDirty = 0;
  (this->fields)._rect.m_XMin = fVar9;
  (this->fields)._rect.m_YMin = fVar10;
  (this->fields)._rect.m_Width = fVar11;
  (this->fields)._rect.m_Height = fVar12;
  return;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_RenderArea
               (ArcShape2D *this,Camera *camera,MethodInfo *method)

{
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape2D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = &(this->fields)._origin;
  GLRenderer::GLRenderer_DrawTriangleFan2D_1
            (*pVVar1,(this->fields)._borderPoints,camera,(MethodInfo *)pVVar1->x);
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_RenderBorder
               (ArcShape2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape2D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields)._borderRenderDesc;
  if (pAVar1 != (ArcShape2D_BorderRenderDescriptor *)0x0) {
    if (((pAVar1->fields)._borderFlags & 2) != 0) {
      GLRenderer::GLRenderer_DrawLines2D((this->fields)._borderPoints,camera,(MethodInfo *)0x0);
    }
    pAVar1 = (this->fields)._borderRenderDesc;
    if (pAVar1 != (ArcShape2D_BorderRenderDescriptor *)0x0) {
      if (((pAVar1->fields)._borderFlags & 1) != 0) {
        linePoints = (List_1_UnityEngine_Vector2_ *)
                     func_?(
                                    TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                    );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)linePoints,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
        if (linePoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
        func_?(linePoints,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                        ,(this->fields)._origin.y);
        func_?(linePoints,(this->fields)._startPoint.x,(this->fields)._startPoint.y,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        func_?(linePoints,(this->fields)._origin.x,(this->fields)._origin.y,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        func_?(linePoints,(this->fields)._endPoint.x,(this->fields)._endPoint.y,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        GLRenderer::GLRenderer_DrawLines2D(linePoints,camera,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetArcData(Vector2, Single) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_SetArcData
               (ArcShape2D *this,Vector2 startPoint,float radius,MethodInfo *method)

{
  fVar1 = (this->fields)._origin.x;
  fVar2 = (this->fields)._origin.y;
  (this->fields)._radius = radius;
  (this->fields)._startPoint.x = startPoint.x;
  fVar3 = (this->fields)._startPoint.x;
  (this->fields)._startPoint.y = startPoint.y;
  startPoint.x = fVar3 - fVar1;
  startPoint.y = (this->fields)._startPoint.y - fVar2;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(&startPoint,(MethodInfo *)0x0)
  ;
  fVar3 = (this->fields)._radius;
  (this->fields)._startPoint.x = fVar1 + startPoint.x * (this->fields)._radius;
  (this->fields)._startPoint.y = fVar2 + startPoint.y * fVar3;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* ArcShape2D() */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D__ctor(ArcShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ArcShape2D__BorderRenderDescriptor);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__RTG__ArcShape2D__BorderRenderDescriptor;
  value = (ArcShape2D_BorderRenderDescriptor *)func_?();
  (value->fields)._borderFlags = 3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&this->fields;
  ((ArcShape2D__Fields *)method_00)->_borderRenderDesc = value;
  func_?(method_00,value);
  (this->fields)._numBorderPoints = 100;
  (this->fields)._areBorderPointsDirty = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Single get_AbsDegreeAngleFromStart() */

float Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_get_AbsDegreeAngleFromStart
                (ArcShape2D *this,MethodInfo *method)

{
  return (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?);
}


/* Vector2 get_EndPoint() */

Vector2 Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_get_EndPoint
                  (ArcShape2D *this,MethodInfo *method)

{
  return (this->fields)._endPoint;
}


/* ArcEpsilon get_Epsilon() */

ArcEpsilon *
Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_get_Epsilon
          (ArcEpsilon *__return_storage_ptr__,ArcShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._epsilon._extrudeEps;
  fVar2 = (this->fields)._epsilon._wireEps;
  __return_storage_ptr__->_areaEps = (this->fields)._epsilon._areaEps;
  __return_storage_ptr__->_extrudeEps = fVar1;
  __return_storage_ptr__->_wireEps = fVar2;
  return __return_storage_ptr__;
}


/* Void set_AreaEps(Single) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_AreaEps
               (ArcShape2D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_DegreeAngleFromStart(Single) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_DegreeAngleFromStart
               (ArcShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  (this->fields)._degreeAngleFromStart = (float)fVar1;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Epsilon(ArcEpsilon) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_Epsilon
               (ArcShape2D *this,ArcEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon._areaEps = value._areaEps;
  (this->fields)._epsilon._extrudeEps = value._extrudeEps;
  (this->fields)._epsilon._wireEps = value._wireEps;
  return;
}


/* Void set_ForceShortestArc(Boolean) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_ForceShortestArc
               (ArcShape2D *this,bool value,MethodInfo *method)

{
  (this->fields)._forceShortestArc = value;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_NumBorderPoints(Int32) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_NumBorderPoints
               (ArcShape2D *this,int32_t value,MethodInfo *method)

{
  iVar1 = 3;
  if (2 < value) {
    iVar1 = value;
  }
  (this->fields)._numBorderPoints = iVar1;
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Origin(Vector2) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_Origin
               (ArcShape2D *this,Vector2 value,MethodInfo *method)

{
  VStack_1.x = (this->fields)._startPoint.x - (this->fields)._origin.x;
  VStack_1.y = (this->fields)._startPoint.y - (this->fields)._origin.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(&VStack_1,(MethodInfo *)0x0);
  fVar2 = (this->fields)._radius;
  (this->fields)._origin.x = value.x;
  fVar3 = (this->fields)._origin.x;
  fVar4 = (this->fields)._radius;
  (this->fields)._origin.y = value.y;
  fVar5 = (this->fields)._origin.y;
  (this->fields)._startPoint.x = fVar3 + VStack_1.x * fVar2;
  (this->fields)._startPoint.y = fVar5 + VStack_1.y * fVar4;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_Radius
               (ArcShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (this->fields)._origin.x;
  fVar2 = (this->fields)._origin.y;
  VStack_3.x = (this->fields)._startPoint.x;
  (this->fields)._radius = value;
  VStack_3.x = VStack_3.x - fVar1;
  VStack_3.y = (this->fields)._startPoint.y - fVar2;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(&VStack_3,(MethodInfo *)0x0);
  fVar4 = (this->fields)._radius;
  (this->fields)._startPoint.x = fVar1 + VStack_3.x * (this->fields)._radius;
  (this->fields)._startPoint.y = fVar2 + VStack_3.y * fVar4;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}

