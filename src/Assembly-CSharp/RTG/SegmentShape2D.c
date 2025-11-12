
/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_ContainsPoint
               (SegmentShape2D *this,Vector2 point,MethodInfo *method)

{
  fVar1 = (this->fields)._epsilon._ptOnSegmentEps;
  fVar2 = Vector2Ex::Vector2Ex_GetDistanceToSegment
                    (point,(this->fields)._startPoint,(this->fields)._endPoint,(MethodInfo *)0x0);
  return fVar2 <= fVar1;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,SegmentShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  points = (IEnumerable_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__UnityEngine__Vector2,2);
  fVar1 = (this->fields)._startPoint.y;
  if (points != (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    if (*(int *)&points[1].monitor != 0) {
      *(float *)&points[2].klass = (this->fields)._startPoint.x;
      *(float *)((longlong)&points[2].klass + 4) = fVar1;
      fVar1 = (this->fields)._endPoint.y;
      if (1 < *(uint *)&points[1].monitor) {
        *(float *)&points[2].monitor = (this->fields)._endPoint.x;
        *(float *)((longlong)&points[2].monitor + 4) = fVar1;
        pRVar2 = RectEx::RectEx_FromPoints(&RStack_3,points,(MethodInfo *)0x0);
        fVar1 = pRVar2->m_YMin;
        fVar4 = pRVar2->m_Width;
        fVar5 = pRVar2->m_Height;
        __return_storage_ptr__->m_XMin = pRVar2->m_XMin;
        __return_storage_ptr__->m_YMin = fVar1;
        __return_storage_ptr__->m_Width = fVar4;
        __return_storage_ptr__->m_Height = fVar5;
        return __return_storage_ptr__;
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    pRVar2 = (Rect *)(*pcVar6)();
    return pRVar2;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pRVar2 = (Rect *)(*pcVar6)();
  return pRVar2;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_RenderArea
               (SegmentShape2D *this,Camera *camera,MethodInfo *method)

{
  VVar1 = (this->fields)._endPoint;
  VVar2 = (this->fields)._startPoint;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?,VVar1,camera,0,VVar2,VVar1),
     pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)();
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)();
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(1);
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_5 = 0;
  VStack_6 = VVar2;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_7 = 0;
  fStack_8 = 0.0;
  pvVar9 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar9,&VStack_6,&uStack_7);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
            ((float)uStack_7,uStack_7._4_4_,fStack_8,(MethodInfo *)0x0);
  uStack_5 = 0;
  VStack_6 = VVar1;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_7 = 0;
  fStack_8 = 0.0;
  pvVar9 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar9,&VStack_6,&uStack_7);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
            ((float)uStack_7,uStack_7._4_4_,fStack_8,(MethodInfo *)0x0);
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)();
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void SetEndPtFromStart(Vector2, Single) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_SetEndPtFromStart
               (SegmentShape2D *this,Vector2 dirDromStart,float offset,MethodInfo *method)

{
  fStackX_8 = dirDromStart.x;
  fStackX_c = dirDromStart.y;
  fVar1 = fStackX_8 * offset + (this->fields)._startPoint.x;
  fVar2 = fStackX_c * offset + (this->fields)._startPoint.y;
  (this->fields)._endPoint.x = fVar1;
  (this->fields)._endPoint.y = fVar2;
  fVar3 = (this->fields)._startPoint.y;
  (this->fields)._direction.x = fVar1 - (this->fields)._startPoint.x;
  (this->fields)._direction.y = fVar2 - fVar3;
  fVar3 = (float)FUN_?(&(this->fields)._direction);
  pVVar4 = &(this->fields)._direction;
  (this->fields)._length = fVar3;
  fVar3 = (float)FUN_?();
  if (fVar3 <= _UNK_?) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    pVVar4->x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    (this->fields)._direction.y = fVar3;
    return;
  }
  fVar2 = (this->fields)._direction.y;
  pVVar4->x = (*pVVar4).x / fVar3;
  (this->fields)._direction.y = fVar2 / fVar3;
  return;
}


/* SegmentShape2D() */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D__ctor
               (SegmentShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._startPoint.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._startPoint.y = fVar2;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  (this->fields)._endPoint.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (this->fields)._endPoint.y = fVar2;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  (this->fields)._direction.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (this->fields)._direction.y = fVar2;
  (this->fields)._length = 1.0;
  return;
}


/* Vector2 get_EndPoint() */

Vector2 Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_get_EndPoint
                  (SegmentShape2D *this,MethodInfo *method)

{
  return (this->fields)._endPoint;
}


/* Void set_Direction(Vector2) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_Direction
               (SegmentShape2D *this,Vector2 value,MethodInfo *method)

{
  aVStack_1[0] = value;
  uVar2 = FUN_?(aVStack_1);
  fVar3 = (this->fields)._length;
  fStackX_8 = (float)uVar2;
  fStackX_c = (float)((ulonglong)uVar2 >> 0x20);
  (this->fields)._direction.x = fStackX_8;
  (this->fields)._direction.y = fStackX_c;
  fVar4 = (this->fields)._startPoint.x;
  (this->fields)._endPoint.y = fVar3 * fStackX_c + (this->fields)._startPoint.y;
  (this->fields)._endPoint.x = fVar3 * fStackX_8 + fVar4;
  return;
}


/* Void set_EndPoint(Vector2) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_EndPoint
               (SegmentShape2D *this,Vector2 value,MethodInfo *method)

{
  fStackX_8 = value.x;
  fStackX_c = value.y;
  (this->fields)._endPoint.x = fStackX_8;
  (this->fields)._endPoint.y = fStackX_c;
  fVar1 = (this->fields)._startPoint.y;
  (this->fields)._direction.x = fStackX_8 - (this->fields)._startPoint.x;
  (this->fields)._direction.y = fStackX_c - fVar1;
  fVar1 = (float)FUN_?(&(this->fields)._direction);
  pVVar2 = &(this->fields)._direction;
  (this->fields)._length = fVar1;
  fVar1 = (float)FUN_?();
  if (fVar1 <= _UNK_?) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    pVVar2->x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    (this->fields)._direction.y = fVar1;
    return;
  }
  fVar3 = (this->fields)._direction.y;
  pVVar2->x = (*pVVar2).x / fVar1;
  (this->fields)._direction.y = fVar3 / fVar1;
  return;
}


/* Void set_Epsilon(SegmentEpsilon) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_Epsilon
               (SegmentShape2D *this,SegmentEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon = value;
  return;
}


/* Void set_Length(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_Length
               (SegmentShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (float)((uint)value & _UNK_?);
  (this->fields)._length = fVar1;
  fVar2 = (this->fields)._direction.x;
  fVar3 = (this->fields)._startPoint.x;
  (this->fields)._endPoint.y = fVar1 * (this->fields)._direction.y + (this->fields)._startPoint.y;
  (this->fields)._endPoint.x = fVar1 * fVar2 + fVar3;
  return;
}


/* Void set_RaycastEps(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_RaycastEps
               (SegmentShape2D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._raycastEps = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_StartPoint(Vector2) */

void Assembly-CSharp.dll::RTG::SegmentShape2D::SegmentShape2D_set_StartPoint
               (SegmentShape2D *this,Vector2 value,MethodInfo *method)

{
  fVar1 = (this->fields)._length;
  fStackX_8 = value.x;
  fStackX_c = value.y;
  (this->fields)._startPoint.x = fStackX_8;
  (this->fields)._startPoint.y = fStackX_c;
  fVar2 = (this->fields)._direction.x;
  (this->fields)._endPoint.y = fVar1 * (this->fields)._direction.y + fStackX_c;
  (this->fields)._endPoint.x = fVar1 * fVar2 + fStackX_8;
  return;
}

