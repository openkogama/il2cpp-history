
/* Void CalculateEndPoint() */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_CalculateEndPoint
               (ArcShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._startPoint.x - (this->fields)._origin.x;
  fVar2 = (this->fields)._startPoint.y - (this->fields)._origin.y;
  fVar3 = (this->fields)._origin.y;
  fVar4 = (this->fields)._origin.x;
  fVar5 = (this->fields)._degreeAngleFromStart;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_7._0_4_ = (pVVar6->forwardVector).x;
  uStack_7._4_4_ = (pVVar6->forwardVector).y;
  fStack_8 = (pVVar6->forwardVector).z;
  uStack_9 = 0;
  uStack_10 = 0;
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(fVar5,&uStack_7,&uStack_9);
  fVar13 = (float)uStack_10 + (float)uStack_10;
  fVar14 = uStack_9._4_4_ + uStack_9._4_4_;
  fVar5 = _UNK_? - (uStack_9._4_4_ * fVar14 + (float)uStack_10 * fVar13);
  (this->fields)._endPoint.y =
       (_UNK_? -
       ((float)uStack_9 * ((float)uStack_9 + (float)uStack_9) + (float)uStack_10 * fVar13)) *
       fVar2 + (uStack_10._4_4_ * fVar13 + (float)uStack_9 * fVar14) * fVar1 +
       (uStack_9._4_4_ * fVar13 - uStack_10._4_4_ * ((float)uStack_9 + (float)uStack_9)) * 0.0 +
       fVar3;
  (this->fields)._endPoint.x =
       fVar5 * fVar1 + ((float)uStack_9 * fVar14 - uStack_10._4_4_ * fVar13) * fVar2 +
       ((float)uStack_9 * fVar13 + uStack_10._4_4_ * fVar14) * 0.0 + fVar4;
  return;
}


/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_ContainsPoint
               (ArcShape2D *this,Vector2 point,MethodInfo *method)

{
  if (((this->fields)._forceShortestArc == 0) &&
     (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & (uint)_UNK_?)))
  {
    uVar1._0_4_ = (this->fields)._epsilon._areaEps;
    uVar1._4_4_ = (this->fields)._epsilon._extrudeEps;
    fVar2 = (this->fields)._degreeAngleFromStart;
    fVar3 = (this->fields)._epsilon._wireEps;
    VVar4 = (this->fields)._origin;
    VVar5 = (this->fields)._startPoint;
    VStack_6 = (Vector2)(uVar1 & 0xffffffff);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    fStack_8 = 0.0;
    fStack_9 = 0.0;
    VStack_10.x = (pVVar7->forwardVector).x;
    VStack_10.y = (pVVar7->forwardVector).y;
    fStack_11 = (pVVar7->forwardVector).z;
    fStack_12 = 0.0;
    fStack_13 = fVar3;
    VStack_14 = VVar5;
    VStack_15 = VVar4;
    VStack_16 = point;
    bVar17 = ArcMath::ArcMath_LgArcContains3DPoint
                      ((Vector3 *)&VStack_16,0,(Vector3 *)&VStack_15,(Vector3 *)&VStack_14,
                       (Vector3 *)&VStack_10,fVar2,(ArcEpsilon *)&VStack_6,(MethodInfo *)0x0);
    return bVar17;
  }
  VStack_16.x = (this->fields)._epsilon._areaEps;
  VStack_16.y = (this->fields)._epsilon._extrudeEps;
  pVVar18 = &(this->fields)._origin;
  pVVar19 = &(this->fields)._startPoint;
  VVar4 = *pVVar18;
  VVar5 = *pVVar19;
  fVar2 = (this->fields)._epsilon._wireEps;
  fVar3 = ArcMath::ArcMath_ConvertToSh2DArcAngle
                    (*pVVar18,*pVVar19,(this->fields)._degreeAngleFromStart,(MethodInfo *)0x0);
  VStack_16 = (Vector2)((ulonglong)VStack_16 & 0xffffffff);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_8 = 0.0;
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fStack_11 = 0.0;
  fStack_13 = 0.0;
  VStack_15.x = (pVVar7->forwardVector).x;
  VStack_15.y = (pVVar7->forwardVector).y;
  fStack_9 = (pVVar7->forwardVector).z;
  VStack_6 = point;
  VStack_10 = VVar4;
  VStack_14 = VVar5;
  fStack_12 = fVar2;
  bVar17 = ArcMath::ArcMath_ShArcContains3DPoint
                    ((Vector3 *)&VStack_6,0,(Vector3 *)&VStack_10,(Vector3 *)&VStack_14,
                     (Vector3 *)&VStack_15,fVar3,(ArcEpsilon *)&VStack_16,(MethodInfo *)0x0);
  return bVar17;
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
  pLVar1 = PrimitiveFactory::PrimitiveFactory_Generate2DArcBorderPoints
                     ((this->fields)._origin,(this->fields)._startPoint,
                      (this->fields)._degreeAngleFromStart,(this->fields)._forceShortestArc,
                      (this->fields)._numBorderPoints,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._borderPoints = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._borderPoints >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pRVar7 = RectEx::RectEx_FromPoints
                     (&RStack_8,(IEnumerable_1_UnityEngine_Vector2_ *)(this->fields)._borderPoints,
                      (MethodInfo *)0x0);
  fVar9 = pRVar7->m_XMin;
  fVar10 = pRVar7->m_YMin;
  fVar11 = pRVar7->m_Width;
  fVar12 = pRVar7->m_Height;
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
  VVar1 = (this->fields)._origin;
  pLVar2 = (this->fields)._borderPoints;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,pLVar2,camera,0,VVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar2 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (pLVar2->fields)._size + -1;
  if (0 < iVar4) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)();
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)();
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(4);
    if (camera == (Camera *)0x0) goto code_?;
    uStack_6 = 0;
    VStack_7 = VVar1;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    uStack_9 = 0;
    pvVar10 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar10,&VStack_7,&uStack_8);
    uVar11 = 0;
    lVar12 = 0x28;
    uVar13 = uVar11;
    do {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_8,uStack_8._4_4_,0.0,(MethodInfo *)0x0);
      uVar14 = (uint)uVar11;
      if ((uint)(pLVar2->fields)._size <= uVar14) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pVVar15 = (pLVar2->fields)._items;
      if (pVVar15 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar15->max_length <= uVar14) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack_16 = CONCAT44(*(undefined4 *)((longlong)pVVar15->vector + lVar12 + -0x24),
                           *(undefined4 *)((longlong)(pVVar15->vector + -5) + lVar12));
      uStack_17 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_18 = 0;
      fStack_19 = 0.0;
      pvVar10 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar10,&uStack_16,&uStack_18);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_18,uStack_18._4_4_,fStack_19,(MethodInfo *)0x0);
      if ((uint)(pLVar2->fields)._size <= uVar14 + 1) goto code_?;
      pVVar15 = (pLVar2->fields)._items;
      if (pVVar15 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar15->max_length <= uVar14 + 1) goto code_?;
      uStack_20 = CONCAT44(*(undefined4 *)((longlong)pVVar15->vector + lVar12 + -0x1c),
                           *(undefined4 *)
                            ((longlong)&((Vector2__Array *)(pVVar15->vector + -4))->klass + lVar12));
      uStack_21 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_22 = 0;
      fStack_23 = 0.0;
      pvVar10 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar10,&uStack_20,&uStack_22);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_22,uStack_22._4_4_,fStack_23,(MethodInfo *)0x0);
      uVar11 = (ulonglong)(uVar14 + 1);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((longlong)uVar13 < (longlong)iVar4);
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)();
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)();
  }
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_RenderBorder
               (ArcShape2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
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
                     FUN_?(
                                  TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                  );
        FUN_?(linePoints,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
        if (linePoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
        FUN_?(linePoints,CONCAT44((this->fields)._origin.y,(this->fields)._origin.x),
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        FUN_?(linePoints,(this->fields)._startPoint,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        FUN_?(linePoints,(this->fields)._origin,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        FUN_?(linePoints,(this->fields)._endPoint);
        GLRenderer::GLRenderer_DrawLines2D(linePoints,camera,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetArcData(Vector2, Single) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_SetArcData
               (ArcShape2D *this,Vector2 startPoint,float radius,MethodInfo *method)

{
  fVar1 = (this->fields)._origin.x;
  uStackX_8._0_4_ = startPoint.x;
  uStackX_8._4_4_ = startPoint.y;
  fVar2 = (this->fields)._origin.y;
  (this->fields)._startPoint.x = (float)uStackX_8;
  (this->fields)._startPoint.y = uStackX_8._4_4_;
  (this->fields)._radius = radius;
  uStackX_8 = CONCAT44(uStackX_8._4_4_ - fVar2,(float)uStackX_8 - fVar1);
  uVar3 = FUN_?(&uStackX_8);
  fVar4 = (this->fields)._radius;
  uStackX_8._0_4_ = (float)uVar3;
  uStackX_8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  (this->fields)._startPoint.x = fVar4 * (float)uStackX_8 + fVar1;
  (this->fields)._startPoint.y = fVar4 * uStackX_8._4_4_ + fVar2;
  uStackX_8 = uVar3;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* ArcShape2D() */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D__ctor(ArcShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ArcShape2D__BorderRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (ArcShape2D_BorderRenderDescriptor *)
           FUN_?(TypeInfo__RTG__ArcShape2D__BorderRenderDescriptor);
  bVar2 = iRam_? != 0;
  (pAVar1->fields)._borderFlags = 3;
  (this->fields)._borderRenderDesc = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  (this->fields)._areBorderPointsDirty = 1;
  (this->fields)._numBorderPoints = 100;
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


/* Void set_AreaEps(Single) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_AreaEps
               (ArcShape2D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._areaEps = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_DegreeAngleFromStart(Single) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_DegreeAngleFromStart
               (ArcShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (float)FUN_?(value,_UNK_?);
  (this->fields)._degreeAngleFromStart = fVar1;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
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
  (this->fields)._areBorderPointsDirty = 1;
  iVar1 = 3;
  if (2 < value) {
    iVar1 = value;
  }
  (this->fields)._numBorderPoints = iVar1;
  return;
}


/* Void set_Origin(Vector2) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_Origin
               (ArcShape2D *this,Vector2 value,MethodInfo *method)

{
  uStackX_20 = CONCAT44((this->fields)._startPoint.y - (this->fields)._origin.y,
                        (this->fields)._startPoint.x - (this->fields)._origin.x);
  uVar1 = FUN_?(&uStackX_20);
  fStackX_8 = value.x;
  fStackX_c = value.y;
  fVar2 = (this->fields)._radius;
  (this->fields)._origin.x = fStackX_8;
  (this->fields)._origin.y = fStackX_c;
  uStackX_20._0_4_ = (float)uVar1;
  uStackX_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  (this->fields)._startPoint.x = fVar2 * (float)uStackX_20 + fStackX_8;
  (this->fields)._startPoint.y = fVar2 * uStackX_20._4_4_ + fStackX_c;
  uStackX_20 = uVar1;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::ArcShape2D::ArcShape2D_set_Radius
               (ArcShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (this->fields)._startPoint.x;
  fVar2 = (this->fields)._origin.x;
  (this->fields)._radius = value;
  fVar3 = (this->fields)._origin.y;
  uStackX_8 = CONCAT44((this->fields)._startPoint.y - fVar3,fVar1 - fVar2);
  uVar4 = FUN_?(&uStackX_8);
  fVar1 = (this->fields)._radius;
  uStackX_8._0_4_ = (float)uVar4;
  uStackX_8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  (this->fields)._startPoint.x = fVar1 * (float)uStackX_8 + fVar2;
  (this->fields)._startPoint.y = fVar1 * uStackX_8._4_4_ + fVar3;
  uStackX_8 = uVar4;
  ArcShape2D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}

