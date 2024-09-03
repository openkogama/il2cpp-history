
/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_ContainsPoint
               (RightAngTriangle2D *this,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  this_00 = RightAngTriangle2D_GetPoints(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_Vector2_ *)0x0) {
    p0 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
         List_1_UnityEngine_Vector2__get_Item
                   (this_00,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__get_Item
              (this_00,1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    p1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
         List_1_UnityEngine_Vector2__get_Item
                   (this_00,2,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    uVar1._0_4_ = (this->fields)._epsilon._areaEps;
    uVar1._4_4_ = (this->fields)._epsilon._extrudeEps;
    fVar2 = (this->fields)._epsilon._wireEps;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    epsilon._wireEps = fVar2;
    epsilon._areaEps = (float)(int)uVar1;
    epsilon._extrudeEps = (float)(int)((ulonglong)uVar1 >> 0x20);
    bVar3 = TriangleMath::TriangleMath_Contains2DPoint(point,p0,p1,p1,epsilon,(MethodInfo *)0x0);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,RightAngTriangle2D *this,MethodInfo *method)

{
  points = RightAngTriangle2D_GetPoints(this,(MethodInfo *)0x0);
  pRVar1 = RectEx::RectEx_FromPoints
                     (&RStack_2,(IEnumerable_1_UnityEngine_Vector2_ *)points,(MethodInfo *)0x0);
  fVar3 = pRVar1->m_YMin;
  fVar4 = pRVar1->m_Width;
  fVar5 = pRVar1->m_Height;
  __return_storage_ptr__->m_XMin = pRVar1->m_XMin;
  __return_storage_ptr__->m_YMin = fVar3;
  __return_storage_ptr__->m_Width = fVar4;
  __return_storage_ptr__->m_Height = fVar5;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] GetPoints() */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_GetPoints
          (RightAngTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  yLength = (this->fields)._YLength;
  degreeTriRotation = (this->fields)._rotationDegrees;
  rightAngleCorner = (this->fields)._rightAngleCorner;
  xLength = (this->fields)._XLength;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  pLVar1 = TriangleMath::TriangleMath_CalcRATriangle2DPoints
                     (rightAngleCorner,xLength,yLength,degreeTriRotation,(MethodInfo *)0x0);
  return pLVar1;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_RenderArea
               (RightAngTriangle2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
            RightAngTriangle2D_GetPoints(this,(MethodInfo *)0x0);
  if (this_00 !=
      (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0) {
    origin = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
             List_1_UnityEngine_Vector2__get_Item
                       ((List_1_UnityEngine_Vector2_ *)this_00,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::Implementation
    ::UIRStylePainter+RepeatRectUV]::
    List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
              (this_00,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__RemoveAt_int_);
    GLRenderer::GLRenderer_DrawTriangleFan2D_1
              (origin,(List_1_UnityEngine_Vector2_ *)this_00,camera,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_RenderBorder
               (RightAngTriangle2D *this,Camera *camera,MethodInfo *method)

{
  RightAngTriangle2D_GetPoints(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* RightAngTriangle2D() */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D__ctor
               (RightAngTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._rightAngleCorner.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x
  ;
  (this->fields)._rightAngleCorner.y = fVar1;
  (this->fields)._XLength = 1.0;
  (this->fields)._YLength = 1.0;
  return;
}


/* Vector2 get_ModelRight() */

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRight
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  return TypeInfo__UnityEngine__Vector2->static_fields->rightVector;
}


/* Vector2 get_ModelRightAngleCorner() */

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
}


/* Vector2 get_ModelUp() */

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelUp
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  return TypeInfo__UnityEngine__Vector2->static_fields->upVector;
}


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_Right
                  (RightAngTriangle2D *this,MethodInfo *method)

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

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_Up
                  (RightAngTriangle2D *this,MethodInfo *method)

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


/* Void set_AreaEps(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_set_AreaEps
               (RightAngTriangle2D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_XLength(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_set_XLength
               (RightAngTriangle2D *this,float value,MethodInfo *method)

{
  (this->fields)._XLength = (float)((uint)value & _UNK_?);
  return;
}

