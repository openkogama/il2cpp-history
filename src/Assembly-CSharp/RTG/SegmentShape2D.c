
/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_ContainsPoint
               (SegmentShape2D *this,Vector2 point,MethodInfo *method)

{
  bVar1 = SegmentMath::SegmentMath_Is2DPointOnSegment
                    (point,(this->fields)._startPoint,(this->fields)._endPoint,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,SegmentShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  points = (IEnumerable_1_UnityEngine_Vector2_ *)func_?(TypeInfo__UnityEngine__Vector2,2);
  pMVar1 = (MonitorData *)(this->fields)._startPoint.y;
  if (points == (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    func_?();
  }
  else if (points[1].monitor != (MonitorData *)0x0) {
    points[2].klass = (IEnumerable_1_UnityEngine_Vector2___Class *)(this->fields)._startPoint.x;
    points[2].monitor = pMVar1;
    pMVar1 = (MonitorData *)(this->fields)._endPoint.y;
    if ((MonitorData *)0x1 < points[1].monitor) {
      points[3].klass = (IEnumerable_1_UnityEngine_Vector2___Class *)(this->fields)._endPoint.x;
      points[3].monitor = pMVar1;
      pRVar2 = RectEx::RectEx_FromPoints(&RStack_3,points,(MethodInfo *)0x0);
      fVar4 = pRVar2->m_YMin;
      fVar5 = pRVar2->m_Width;
      fVar6 = pRVar2->m_Height;
      __return_storage_ptr__->m_XMin = pRVar2->m_XMin;
      __return_storage_ptr__->m_YMin = fVar4;
      __return_storage_ptr__->m_Width = fVar5;
      __return_storage_ptr__->m_Height = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pRVar2 = (Rect *)(*pcVar7)();
  return pRVar2;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_RenderArea
               (SegmentShape2D *this,Camera *camera,MethodInfo *method)

{
  GLRenderer::GLRenderer_DrawLine2D
            ((this->fields)._startPoint,(this->fields)._endPoint,camera,(MethodInfo *)0x0);
  return;
}


/* Void SetEndPtFromStart(Vector2, Single) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_SetEndPtFromStart
               (SegmentShape2D *this,Vector2 dirDromStart,float offset,MethodInfo *method)

{
  fVar1 = (this->fields)._startPoint.x + dirDromStart.x * offset;
  fVar2 = (this->fields)._startPoint.y + dirDromStart.y * offset;
  (this->fields)._endPoint.x = fVar1;
  fVar3 = (this->fields)._startPoint.x;
  (this->fields)._endPoint.y = fVar2;
  fVar4 = (this->fields)._startPoint.y;
  this_00 = &(this->fields)._direction;
  this_00->x = fVar1 - fVar3;
  (this->fields)._direction.y = fVar2 - fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  fVar3 = this_00->x;
  fVar4 = (this->fields)._direction.y;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar5 = (double)(fVar3 * fVar3 + fVar4 * fVar4);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  (this->fields)._length = (float)dVar5;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(this_00,(MethodInfo *)0x0);
  return;
}


/* SegmentShape2D() */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D__ctor
               (SegmentShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._startPoint.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._startPoint.y = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  (this->fields)._endPoint.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (this->fields)._endPoint.y = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  (this->fields)._direction.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (this->fields)._direction.y = fVar1;
  (this->fields)._length = 1.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Vector2 get_Direction() */

Vector2 Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_get_Direction
                  (SegmentShape2D *this,MethodInfo *method)

{
  return (this->fields)._direction;
}


/* Vector2 get_StartPoint() */

Vector2 Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_get_StartPoint
                  (SegmentShape2D *this,MethodInfo *method)

{
  return (this->fields)._startPoint;
}


/* Void set_Direction(Vector2) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_Direction
               (SegmentShape2D *this,Vector2 value,MethodInfo *method)

{
  VStack_1.x = value.x;
  VStack_1.y = value.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(&VStack_1,(MethodInfo *)0x0);
  fVar2 = (this->fields)._startPoint.x;
  fVar3 = (this->fields)._startPoint.y;
  (this->fields)._direction.x = VStack_1.x;
  fVar4 = (this->fields)._length;
  (this->fields)._direction.y = VStack_1.y;
  fVar5 = (this->fields)._length;
  (this->fields)._endPoint.x = fVar2 + VStack_1.x * fVar4;
  (this->fields)._endPoint.y = fVar3 + VStack_1.y * fVar5;
  return;
}


/* Void set_EndPoint(Vector2) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_EndPoint
               (SegmentShape2D *this,Vector2 value,MethodInfo *method)

{
  (this->fields)._endPoint.x = value.x;
  fVar1 = (this->fields)._endPoint.x;
  fVar2 = (this->fields)._startPoint.x;
  (this->fields)._endPoint.y = value.y;
  fVar3 = (this->fields)._endPoint.y;
  fVar4 = (this->fields)._startPoint.y;
  this_00 = &(this->fields)._direction;
  this_00->x = fVar1 - fVar2;
  (this->fields)._direction.y = fVar3 - fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  fVar1 = this_00->x;
  fVar2 = (this->fields)._direction.y;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar5 = (double)(fVar1 * fVar1 + fVar2 * fVar2);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  (this->fields)._length = (float)dVar5;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(this_00,(MethodInfo *)0x0);
  return;
}


/* Void set_Epsilon(SegmentEpsilon) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_Epsilon
               (SegmentShape2D *this,SegmentEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon._raycastEps = value._raycastEps;
  (this->fields)._epsilon._ptOnSegmentEps = value._ptOnSegmentEps;
  return;
}


/* Void set_Length(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_Length
               (SegmentShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (float)((uint)value & _UNK_?);
  fVar2 = (this->fields)._direction.x;
  fVar3 = (this->fields)._direction.y;
  fVar4 = (this->fields)._startPoint.x;
  fVar5 = (this->fields)._startPoint.y;
  (this->fields)._length = fVar1;
  (this->fields)._endPoint.x = fVar4 + fVar2 * fVar1;
  (this->fields)._endPoint.y = fVar5 + fVar3 * fVar1;
  return;
}


/* Void set_PtOnSegmentEps(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_PtOnSegmentEps
               (SegmentShape2D *this,float value,MethodInfo *method)

{
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_RaycastEps(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_RaycastEps
               (SegmentShape2D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_StartPoint(Vector2) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_StartPoint
               (SegmentShape2D *this,Vector2 value,MethodInfo *method)

{
  fVar1 = (this->fields)._direction.x;
  fVar2 = (this->fields)._direction.y;
  fVar3 = (this->fields)._length;
  (this->fields)._startPoint.x = value.x;
  fVar4 = (this->fields)._startPoint.x;
  fVar5 = (this->fields)._length;
  (this->fields)._startPoint.y = value.y;
  fVar6 = (this->fields)._startPoint.y;
  (this->fields)._endPoint.x = fVar4 + fVar1 * fVar3;
  (this->fields)._endPoint.y = fVar6 + fVar2 * fVar5;
  return;
}

