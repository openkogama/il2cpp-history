
/* Void CalculateEndPoint() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_CalculateEndPoint
               (ArcShape3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._startPoint.x;
  uVar2 = (this->fields)._startPoint.y;
  uStack_3._0_4_ = (this->fields)._origin.x;
  uStack_3._4_4_ = (this->fields)._origin.y;
  VStack_4.x = (float)uVar1 - (float)(undefined4)uStack_3;
  fStack_5 = (this->fields)._origin.z;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  uStack_6 = 0;
  fStack_7 = (float)uVar2 - (float)uStack_3._4_4_;
  fStack_8 = (this->fields)._startPoint.z - fStack_5;
  uStack_9._0_4_ = (this->fields)._origin.x;
  uStack_9._4_4_ = (this->fields)._origin.y;
  pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffb0,(this->fields)._degreeAngleFromStart,
                      (this->fields)._plane.m_Normal,(MethodInfo *)0x0);
  point.y = fStack_7;
  point.x = VStack_4.x;
  point.z = fStack_8;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_4,*pQVar10,point,(MethodInfo *)0x0);
  uVar12 = pVVar11->x;
  uVar13 = pVVar11->y;
  fVar14 = pVVar11->z;
  (this->fields)._endPoint.x = (float)uVar12 + (float)uStack_9;
  (this->fields)._endPoint.y = (float)uVar13 + uStack_9._4_4_;
  (this->fields)._endPoint.z = fVar14 + fStack_5;
  return;
}


/* Boolean ContainsPoint(Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_ContainsPoint
               (ArcShape3D *this,Vector3 point,bool checkOnPlane,MethodInfo *method)

{
  if (((this->fields)._forceShortestArc == 0) &&
     (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?))) {
    bVar1 = ArcMath::ArcMath_LgArcContains3DPoint
                      (point,checkOnPlane,(this->fields)._origin,(this->fields)._startPoint,
                       (this->fields)._plane.m_Normal,(this->fields)._degreeAngleFromStart,
                       (this->fields)._epsilon,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = ArcMath::ArcMath_ShArcContains3DPoint
                    (point,checkOnPlane,(this->fields)._origin,(this->fields)._startPoint,
                     (this->fields)._plane.m_Normal,(this->fields)._degreeAngleFromStart,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_GetAABB
                 (AABB *__return_storage_ptr__,ArcShape3D *this,MethodInfo *method)

{
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape3D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  fVar1 = (this->fields)._aabb._size.y;
  fVar2 = (this->fields)._aabb._size.z;
  fVar3 = (this->fields)._aabb._center.x;
  bVar4 = (this->fields)._aabb._isValid;
  uVar5 = *(undefined3 *)&(this->fields)._aabb.field_0x19;
  (__return_storage_ptr__->_size).x = (this->fields)._aabb._size.x;
  (__return_storage_ptr__->_size).y = fVar1;
  (__return_storage_ptr__->_size).z = fVar2;
  (__return_storage_ptr__->_center).x = fVar3;
  fVar1 = (this->fields)._aabb._center.z;
  (__return_storage_ptr__->_center).y = (this->fields)._aabb._center.y;
  (__return_storage_ptr__->_center).z = fVar1;
  __return_storage_ptr__->_isValid = bVar4;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar5;
  return __return_storage_ptr__;
}


/* Void OnBorderPointsFoundDirty() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_OnBorderPointsFoundDirty
               (ArcShape3D *this,MethodInfo *method)

{
  pLVar1 = PrimitiveFactory::PrimitiveFactory_Generate3DArcBorderPoints
                     ((this->fields)._origin,(this->fields)._startPoint,(this->fields)._plane,
                      (this->fields)._degreeAngleFromStart,(this->fields)._forceShortestArc,
                      (this->fields)._numBorderPoints,(MethodInfo *)0x0);
  (this->fields)._borderPoints = pLVar1;
  func_?(&(this->fields)._borderPoints,pLVar1);
  AStack_2._isValid = 0;
  AStack_2._25_3_ = 0;
  AStack_2._size.x = 0.0;
  AStack_2._size.y = 0.0;
  AStack_2._size.z = 0.0;
  AStack_2._center.x = 0.0;
  AStack_2._center.y = 0.0;
  AStack_2._center.z = 0.0;
  AABB::AABB__ctor_2(&AStack_2,(IEnumerable_1_UnityEngine_Vector3_ *)(this->fields)._borderPoints,
                     (MethodInfo *)0x0);
  (this->fields)._aabb._size.x = AStack_2._size.x;
  (this->fields)._aabb._size.y = AStack_2._size.y;
  (this->fields)._aabb._size.z = AStack_2._size.z;
  (this->fields)._aabb._center.x = AStack_2._center.x;
  (this->fields)._aabb._center.y = AStack_2._center.y;
  (this->fields)._aabb._center.z = AStack_2._center.z;
  uVar3 = (this->fields)._origin.x;
  uVar4 = (this->fields)._origin.y;
  point.y = (float)uVar4;
  point.x = (float)uVar3;
  (this->fields)._aabb._isValid = AStack_2._isValid;
  *(undefined3 *)&(this->fields)._aabb.field_0x19 = AStack_2._25_3_;
  point.z = (this->fields)._origin.z;
  AABB::AABB_Encapsulate(&(this->fields)._aabb,point,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 0;
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_Raycast
               (ArcShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  bVar1 = (this->fields)._forceShortestArc;
  if ((this->fields)._raycastMode == 0) {
    if ((bVar1 == 0) &&
       (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?))) {
      bVar1 = ArcMath::ArcMath_RaycastLgArc
                        (ray,t,(this->fields)._origin,(this->fields)._startPoint,
                         (this->fields)._plane.m_Normal,(this->fields)._degreeAngleFromStart,
                         (this->fields)._epsilon,(MethodInfo *)0x0);
      return bVar1;
    }
    bVar1 = ArcMath::ArcMath_RaycastShArc
                      (ray,t,(this->fields)._origin,(this->fields)._startPoint,
                       (this->fields)._plane.m_Normal,(this->fields)._degreeAngleFromStart,
                       (this->fields)._epsilon,(MethodInfo *)0x0);
    return bVar1;
  }
  if ((bVar1 == 0) &&
     (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?))) {
    bVar1 = ArcMath::ArcMath_RaycastLgArcWire
                      (ray,t,(this->fields)._origin,(this->fields)._startPoint,
                       (this->fields)._plane.m_Normal,(this->fields)._degreeAngleFromStart,
                       (this->fields)._epsilon,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = ArcMath::ArcMath_RaycastShArcWire
                    (ray,t,(this->fields)._origin,(this->fields)._startPoint,
                     (this->fields)._plane.m_Normal,(this->fields)._degreeAngleFromStart,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_RaycastWire
               (ArcShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  if (((this->fields)._forceShortestArc == 0) &&
     (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?))) {
    bVar1 = ArcMath::ArcMath_RaycastLgArcWire
                      (ray,t,(this->fields)._origin,(this->fields)._startPoint,
                       (this->fields)._plane.m_Normal,(this->fields)._degreeAngleFromStart,
                       (this->fields)._epsilon,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = ArcMath::ArcMath_RaycastShArcWire
                    (ray,t,(this->fields)._origin,(this->fields)._startPoint,
                     (this->fields)._plane.m_Normal,(this->fields)._degreeAngleFromStart,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_RenderSolid
               (ArcShape3D *this,MethodInfo *method)

{
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape3D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  GLRenderer::GLRenderer_DrawTriangleFan3D_1
            ((this->fields)._origin,(this->fields)._borderPoints,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_RenderWire
               (ArcShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape3D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields)._wireRenderDesc;
  if (pAVar1 != (ArcShape3D_WireRenderDescriptor *)0x0) {
    if (((pAVar1->fields)._wireFlags & 2) != 0) {
      GLRenderer::GLRenderer_DrawLines3D((this->fields)._borderPoints,(MethodInfo *)0x0);
    }
    pAVar1 = (this->fields)._wireRenderDesc;
    if (pAVar1 != (ArcShape3D_WireRenderDescriptor *)0x0) {
      if (((pAVar1->fields)._wireFlags & 1) != 0) {
        linePoints = (List_1_UnityEngine_Vector3_ *)
                     func_?(
                                    TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                    );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)linePoints,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        if (linePoints == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        uVar2._0_4_ = (this->fields)._origin.x;
        uVar2._4_4_ = (this->fields)._origin.y;
        func_?(linePoints,uVar2,(this->fields)._origin.z,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        uVar3._0_4_ = (this->fields)._startPoint.x;
        uVar3._4_4_ = (this->fields)._startPoint.y;
        func_?(linePoints,uVar3,(this->fields)._startPoint.z,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        uVar4._0_4_ = (this->fields)._origin.x;
        uVar4._4_4_ = (this->fields)._origin.y;
        func_?(linePoints,uVar4,(this->fields)._origin.z,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        uVar5._0_4_ = (this->fields)._endPoint.x;
        uVar5._4_4_ = (this->fields)._endPoint.y;
        func_?(linePoints,uVar5,(this->fields)._endPoint.z,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        GLRenderer::GLRenderer_DrawLines3D(linePoints,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetArcData(Plane, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_SetArcData
               (ArcShape3D *this,Plane plane,Vector3 origin,Vector3 startPoint,float radius,
               MethodInfo *method)

{
  (this->fields)._plane.m_Normal.x = plane.m_Normal.x;
  (this->fields)._plane.m_Normal.y = plane.m_Normal.y;
  (this->fields)._plane.m_Normal.z = plane.m_Normal.z;
  (this->fields)._plane.m_Distance = plane.m_Distance;
  pVVar1 = PlaneEx::PlaneEx_ProjectPoint(&origin,plane,origin,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  origin.x = 0.0;
  (this->fields)._origin.x = pVVar1->x;
  (this->fields)._origin.y = fVar2;
  (this->fields)._origin.z = fVar3;
  pt.y = startPoint.y;
  pt.x = startPoint.x;
  pt.z = startPoint.z;
  pVVar1 = PlaneEx::PlaneEx_ProjectPoint(&startPoint,(this->fields)._plane,pt,(MethodInfo *)0x0);
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields)._startPoint.x = (float)uVar4;
  (this->fields)._startPoint.y = (float)uVar5;
  (this->fields)._radius = radius;
  uVar6 = (this->fields)._origin.x;
  uVar7 = (this->fields)._origin.y;
  (this->fields)._startPoint.z = fVar3;
  fVar2 = (this->fields)._origin.z;
  origin.z = fVar3 - fVar2;
  startPoint.z = (float)&startPoint;
  startPoint.y = (float)&UNK_?;
  value.y = (float)uVar5 - (float)uVar7;
  value.x = (float)uVar4 - (float)uVar6;
  value.z = origin.z;
  origin.x = (float)uVar4;
  origin.y = (float)uVar5;
  startPoint.x = (float)uVar6;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)startPoint.z,value,(MethodInfo *)0x0);
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  fVar3 = (this->fields)._radius;
  origin.z = fVar2 + pVVar1->z * fVar3;
  (this->fields)._startPoint.x = (float)uVar6 + (float)uVar8 * fVar3;
  (this->fields)._startPoint.y = (float)uVar7 + (float)uVar9 * fVar3;
  (this->fields)._startPoint.z = origin.z;
  origin.x = (float)uVar8;
  origin.y = (float)uVar9;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* ArcShape3D() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D__ctor(ArcShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ArcShape3D__WireRenderDescriptor);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__RTG__ArcShape3D__WireRenderDescriptor;
  value = (ArcShape3D_WireRenderDescriptor *)func_?();
  (value->fields)._wireFlags = 3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields)._wireRenderDesc = value;
  func_?(method_00,value);
  (this->fields)._numBorderPoints = 100;
  (this->fields)._areBorderPointsDirty = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Single get_AbsDegreeAngleFromStart() */

float Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_AbsDegreeAngleFromStart
                (ArcShape3D *this,MethodInfo *method)

{
  return (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?);
}


/* Single get_AreaEps() */

float Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_AreaEps
                (ArcShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._areaEps;
}


/* ArcEpsilon get_Epsilon() */

ArcEpsilon *
Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_Epsilon
          (ArcEpsilon *__return_storage_ptr__,ArcShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._epsilon._extrudeEps;
  fVar2 = (this->fields)._epsilon._wireEps;
  __return_storage_ptr__->_areaEps = (this->fields)._epsilon._areaEps;
  __return_storage_ptr__->_extrudeEps = fVar1;
  __return_storage_ptr__->_wireEps = fVar2;
  return __return_storage_ptr__;
}


/* Single get_ExtrudeEps() */

float Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_ExtrudeEps
                (ArcShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._extrudeEps;
}


/* Single get_WireEps() */

float Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_WireEps
                (ArcShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._wireEps;
}


/* Void set_AreaEps(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_AreaEps
               (ArcShape3D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_DegreeAngleFromStart(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_DegreeAngleFromStart
               (ArcShape3D *this,float value,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  (this->fields)._degreeAngleFromStart = (float)fVar1;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Epsilon(ArcEpsilon) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_Epsilon
               (ArcShape3D *this,ArcEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon._areaEps = value._areaEps;
  (this->fields)._epsilon._extrudeEps = value._extrudeEps;
  (this->fields)._epsilon._wireEps = value._wireEps;
  return;
}


/* Void set_ExtrudeEps(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_ExtrudeEps
               (ArcShape3D *this,float value,MethodInfo *method)

{
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_ForceShortestArc(Boolean) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_ForceShortestArc
               (ArcShape3D *this,bool value,MethodInfo *method)

{
  (this->fields)._forceShortestArc = value;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_NumBorderPoints(Int32) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_NumBorderPoints
               (ArcShape3D *this,int32_t value,MethodInfo *method)

{
  iVar1 = 3;
  if (2 < value) {
    iVar1 = value;
  }
  (this->fields)._numBorderPoints = iVar1;
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Origin(Vector3) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_Origin
               (ArcShape3D *this,Vector3 value,MethodInfo *method)

{
  VStack_1.x = (this->fields)._startPoint.x;
  VStack_1.y = (this->fields)._startPoint.y;
  VStack_1.z = (this->fields)._startPoint.z;
  uVar2 = (this->fields)._origin.x;
  uVar3 = (this->fields)._origin.y;
  value_00.y = VStack_1.y - (float)uVar3;
  value_00.x = VStack_1.x - (float)uVar2;
  value_00.z = VStack_1.z - (this->fields)._origin.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_1,value_00,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  fVar7 = pVVar4->z;
  (this->fields)._origin.x = (float)(int)value._0_8_;
  (this->fields)._origin.y = (float)(int)((ulonglong)value._0_8_ >> 0x20);
  fVar8 = (this->fields)._radius;
  (this->fields)._origin.z = value.z;
  (this->fields)._startPoint.x = value.x + (float)uVar5 * fVar8;
  (this->fields)._startPoint.y = value.y + (float)uVar6 * fVar8;
  (this->fields)._startPoint.z = value.z + fVar7 * fVar8;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_Radius
               (ArcShape3D *this,float value,MethodInfo *method)

{
  fVar1 = (this->fields)._origin.z;
  (this->fields)._radius = value;
  uVar2 = (this->fields)._origin.x;
  uVar3 = (this->fields)._origin.y;
  VStack_4.x = (this->fields)._startPoint.x;
  VStack_4.y = (this->fields)._startPoint.y;
  uVar5 = (this->fields)._origin.x;
  uVar6 = (this->fields)._origin.y;
  VStack_4.z = (this->fields)._startPoint.z;
  value_00.y = VStack_4.y - (float)uVar6;
  value_00.x = VStack_4.x - (float)uVar5;
  value_00.z = VStack_4.z - (this->fields)._origin.z;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_4,value_00,(MethodInfo *)0x0);
  uVar8 = pVVar7->x;
  uVar9 = pVVar7->y;
  fVar10 = pVVar7->z;
  fVar11 = (this->fields)._radius;
  (this->fields)._startPoint.x = (float)uVar2 + (float)uVar8 * fVar11;
  (this->fields)._startPoint.y = (float)uVar3 + (float)uVar9 * fVar11;
  (this->fields)._startPoint.z = fVar1 + fVar10 * fVar11;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_WireEps
               (ArcShape3D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_CoreRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

