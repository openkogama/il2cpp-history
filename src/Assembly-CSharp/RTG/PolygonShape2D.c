
/* Void CalculateRect() */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_CalculateRect
               (PolygonShape2D *this,MethodInfo *method)

{
  pRVar1 = RectEx::RectEx_FromPoints
                     (&RStack_2,(IEnumerable_1_UnityEngine_Vector2_ *)(this->fields)._cwPolyPoints,
                      (MethodInfo *)0x0);
  fVar3 = pRVar1->m_XMin;
  fVar4 = pRVar1->m_YMin;
  fVar5 = pRVar1->m_Width;
  fVar6 = pRVar1->m_Height;
  (this->fields)._isRectDirty = 0;
  (this->fields)._rect.m_XMin = fVar3;
  (this->fields)._rect.m_YMin = fVar4;
  (this->fields)._rect.m_Width = fVar5;
  (this->fields)._rect.m_Height = fVar6;
  return;
}


/* Void CalculateThickBorderPoints() */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_CalculateThickBorderPoints
               (PolygonShape2D *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._borderRenderDesc;
  if (pPVar1 == (PolygonShape2D_BorderRenderDescriptor *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = PrimitiveFactory::PrimitiveFactory_Generate2DPolyBorderPointsCW
                     ((this->fields)._cwPolyPoints,(uint)((pPVar1->fields)._direction != 0),
                      (pPVar1->fields)._thickness,(this->fields)._isClosed,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._thickCwBorderPoints = pLVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._thickCwBorderPoints >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  (this->fields)._isThickBorderDirty = 0;
  return;
}


/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_ContainsPoint
               (PolygonShape2D *this,Vector2 point,MethodInfo *method)

{
  pPVar1 = (this->fields)._borderRenderDesc;
  if (pPVar1 == (PolygonShape2D_BorderRenderDescriptor *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar4 = (this->fields)._ptContainMode;
  if ((pPVar1->fields)._borderType == 0) {
    polyPoints = (this->fields)._cwPolyPoints;
    bVar3 = (this->fields)._isClosed;
    aPStack_5[0]._areaEps = (this->fields)._epsilon._areaEps;
    aPStack_5[0]._extrudeEps = (this->fields)._epsilon._extrudeEps;
    aPStack_5[0]._wireEps = (this->fields)._epsilon._wireEps;
    aPStack_5[0]._thickWireEps = (this->fields)._epsilon._thickWireEps;
    if (iVar4 != 0) {
      bVar3 = PolygonMath::PolygonMath_Is2DPointOnBorder
                        (point,polyPoints,bVar3,aPStack_5,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  else {
    if (iVar4 != 0) {
      if ((this->fields)._isThickBorderDirty != 0) {
        PolygonShape2D_CalculateThickBorderPoints(this,(MethodInfo *)0x0);
      }
      aPStack_5[0]._areaEps = (this->fields)._epsilon._areaEps;
      aPStack_5[0]._extrudeEps = (this->fields)._epsilon._extrudeEps;
      aPStack_5[0]._wireEps = (this->fields)._epsilon._wireEps;
      aPStack_5[0]._thickWireEps = (this->fields)._epsilon._thickWireEps;
      bVar3 = PolygonMath::PolygonMath_Is2DPointOnThickBorder
                        (point,(this->fields)._cwPolyPoints,(this->fields)._thickCwBorderPoints,
                         (this->fields)._isClosed,aPStack_5,(MethodInfo *)0x0);
      return bVar3;
    }
    aPStack_5[0]._areaEps = (this->fields)._epsilon._areaEps;
    aPStack_5[0]._extrudeEps = (this->fields)._epsilon._extrudeEps;
    aPStack_5[0]._wireEps = (this->fields)._epsilon._wireEps;
    aPStack_5[0]._thickWireEps = (this->fields)._epsilon._thickWireEps;
    bVar3 = (this->fields)._isClosed;
    polyPoints = (this->fields)._cwPolyPoints;
  }
  bVar3 = PolygonMath::PolygonMath_Contains2DPoint
                    (point,polyPoints,bVar3,aPStack_5,(MethodInfo *)0x0);
  return bVar3;
}


/* Void CopyPoints(PolygonShape2D) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_CopyPoints
               (PolygonShape2D *this,PolygonShape2D *sourcePoly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sourcePoly != (PolygonShape2D *)0x0) {
    bVar1 = cRam_? == '\0';
    (this->fields)._isClosed = (sourcePoly->fields)._isClosed;
    if (bVar1) {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (sourcePoly->fields)._cwPolyPoints;
    if (pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0) {
      if ((pLVar2->fields)._size != 0) {
        this_00 = (List_1_UnityEngine_Vector2_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2___ctor_1
                  (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)pLVar2,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                  );
        bVar1 = iRam_? != 0;
        (this->fields)._cwPolyPoints = this_00;
        if (bVar1) {
          uVar3 = (uint)((ulonglong)&(this->fields)._cwPolyPoints >> 0xc);
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
        (this->fields)._isThickBorderDirty = 1;
        (this->fields)._isRectDirty = 1;
        return;
      }
      pLVar2 = (this->fields)._cwPolyPoints;
      if (pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0) {
        piVar7 = &(pLVar2->fields)._version;
        *piVar7 = *piVar7 + 1;
        (pLVar2->fields)._size = 0;
        (this->fields)._isThickBorderDirty = 1;
        (this->fields)._isRectDirty = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,PolygonShape2D *this,MethodInfo *method)

{
  if ((this->fields)._isRectDirty != 0) {
    pRVar1 = RectEx::RectEx_FromPoints
                       (&RStack_2,
                        (IEnumerable_1_UnityEngine_Vector2_ *)(this->fields)._cwPolyPoints,
                        (MethodInfo *)0x0);
    fVar3 = pRVar1->m_XMin;
    fVar4 = pRVar1->m_YMin;
    fVar5 = pRVar1->m_Width;
    fVar6 = pRVar1->m_Height;
    (this->fields)._isRectDirty = 0;
    (this->fields)._rect.m_XMin = fVar3;
    (this->fields)._rect.m_YMin = fVar4;
    (this->fields)._rect.m_Width = fVar5;
    (this->fields)._rect.m_Height = fVar6;
  }
  fVar3 = (this->fields)._rect.m_YMin;
  fVar4 = (this->fields)._rect.m_Width;
  fVar5 = (this->fields)._rect.m_Height;
  __return_storage_ptr__->m_XMin = (this->fields)._rect.m_XMin;
  __return_storage_ptr__->m_YMin = fVar3;
  __return_storage_ptr__->m_Width = fVar4;
  __return_storage_ptr__->m_Height = fVar5;
  return __return_storage_ptr__;
}


/* Vector2 GetExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_GetExtentPoint
                  (PolygonShape2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  method_00 = (MethodInfo *)auStack_1;
  pfVar2 = (float *)(*(this->klass->vtable).GetEncapsulatingRect.methodPtr)
                              (method_00,this,(this->klass->vtable).GetEncapsulatingRect.method);
  fVar3 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  if (extentPt == Shape2DExtentPoint__Enum_Left) {
    VVar7 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight(method_00);
    fStackX_8 = VVar7.x;
    fStackX_c = VVar7.y;
    VVar7.y = (fVar6 * _UNK_? + fVar4) - fStackX_c * fVar5 * _UNK_?;
    VVar7.x = (fVar5 * _UNK_? + fVar3) - fStackX_8 * fVar5 * _UNK_?;
    return VVar7;
  }
  if (extentPt == Shape2DExtentPoint__Enum_Top) {
    VVar7 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp(method_00);
    fStackX_8 = VVar7.x;
    fStackX_c = VVar7.y;
    VVar8.y = fVar6 * _UNK_? + fVar4 + fStackX_c * fVar6 * _UNK_?;
    VVar8.x = fVar5 * _UNK_? + fVar3 + fStackX_8 * fVar6 * _UNK_?;
    return VVar8;
  }
  if (extentPt == Shape2DExtentPoint__Enum_Right) {
    VVar7 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight(method_00);
    fStackX_8 = VVar7.x;
    fStackX_c = VVar7.y;
    VVar9.y = fVar6 * _UNK_? + fVar4 + fStackX_c * fVar5 * _UNK_?;
    VVar9.x = fVar5 * _UNK_? + fVar3 + fStackX_8 * fVar5 * _UNK_?;
    return VVar9;
  }
  if (extentPt != Shape2DExtentPoint__Enum_Bottom) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  }
  VVar7 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp(method_00);
  fStackX_8 = VVar7.x;
  fStackX_c = VVar7.y;
  VVar10.y = (fVar6 * _UNK_? + fVar4) - fStackX_c * fVar6 * _UNK_?;
  VVar10.x = (fVar5 * _UNK_? + fVar3) - fStackX_8 * fVar6 * _UNK_?;
  return VVar10;
}


/* List`1[UnityEngine.Vector2] GetPoints() */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_GetPoints
          (PolygonShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (this->fields)._cwPolyPoints;
  this_00 = (List_1_UnityEngine_Vector2_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
  List_1_UnityEngine_Vector2___ctor_1
            (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)collection,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
            );
  return this_00;
}


/* Void MakeSphereBorder(Vector3, Single, Int32, Camera) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_MakeSphereBorder
               (PolygonShape2D *this,Vector3 *sphereCenter,float sphereRadius,int32_t numPoints,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  worldPoints = PrimitiveFactory::PrimitiveFactory_GenerateSphereBorderPoints
                          (camera,(Vector3 *)&stack0xffffffffffffffd8,sphereRadius,numPoints,
                           (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = CameraEx::CameraEx_ConvertWorldToScreenPoints(camera,worldPoints,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  ,pLVar1,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar1 != (List_1_UnityEngine_Vector2_ *)0x0) {
    pLVar2 = (this->fields)._cwPolyPoints;
    iVar3 = (pLVar1->fields)._size;
    if (pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0) {
      piVar4 = &(pLVar2->fields)._version;
      *piVar4 = *piVar4 + 1;
      uVar5 = 0;
      (pLVar2->fields)._size = 0;
      if (0 < iVar3) {
        lVar6 = 0;
        lVar7 = 0x20;
        do {
          pMVar8 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          if ((uint)(pLVar1->fields)._size <= uVar5) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pVVar10 = (pLVar1->fields)._items;
          if (pVVar10 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar10->max_length <= uVar5) {
code_?:
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar11 = *(float *)((longlong)&((Vector2__Array *)(pVVar10->vector + -4))->klass + lVar7);
          fVar12 = *(float *)((longlong)pVVar10->vector + lVar7 + -0x1c);
          uVar13 = (int)(uVar5 + 1) % iVar3;
          if ((uint)(pLVar1->fields)._size <= uVar13) goto code_?;
          pVVar10 = (pLVar1->fields)._items;
          if (pVVar10 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar10->max_length <= uVar13) goto code_?;
          pLVar2 = (this->fields)._cwPolyPoints;
          if (pLVar2 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
          piVar4 = &(pLVar2->fields)._version;
          *piVar4 = *piVar4 + 1;
          pVVar10 = (pLVar2->fields)._items;
          if (pVVar10 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar10->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar10->max_length <= uVar13) goto code_?;
            pVVar10->vector[(int)uVar13].x = fVar11;
            pVVar10->vector[(int)uVar13].y = fVar12;
          }
          else {
            item.y = fVar12;
            item.x = fVar11;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar2,item,pMVar8->klass->rgctx_data[0xe].method);
          }
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar6 < iVar3);
      }
      (this->fields)._isRectDirty = 1;
      (this->fields)._isClosed = 1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_RenderArea
               (PolygonShape2D *this,Camera *camera,MethodInfo *method)

{
  pfVar1 = (float *)(*(this->klass->vtable).GetEncapsulatingRect.methodPtr)
                              (&stack0xffffffffffffffe8,this,
                               (this->klass->vtable).GetEncapsulatingRect.method);
  pLVar2 = (this->fields)._cwPolyPoints;
  uVar3 = CONCAT44(pfVar1[3] * _UNK_? + pfVar1[1],pfVar1[2] * _UNK_? + *pfVar1);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,pLVar2,camera,0,uVar3);
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (pLVar2->fields)._size + -1;
  if (0 < iVar5) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)();
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)();
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(4);
    if (camera == (Camera *)0x0) goto code_?;
    uStack_6 = 0;
    uStack_7 = uVar3;
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
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar10,&uStack_7,&uStack_8);
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
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pVVar15 = (pLVar2->fields)._items;
      if (pVVar15 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar15->max_length <= uVar14) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
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
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
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
      puStack_21 = (undefined *)((ulonglong)puStack_21 & 0xffffffff00000000);
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
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar10,&uStack_20,&uStack_22);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_22,uStack_22._4_4_,fStack_23,(MethodInfo *)0x0);
      uVar11 = (ulonglong)(uVar14 + 1);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((longlong)uVar13 < (longlong)iVar5);
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)();
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)();
  }
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_RenderBorder
               (PolygonShape2D *this,Camera *camera,MethodInfo *method)

{
  pPVar1 = (this->fields)._borderRenderDesc;
  if (pPVar1 == (PolygonShape2D_BorderRenderDescriptor *)0x0) {
code_?:
    puStackY_40 = &UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pPVar1->fields)._borderType == 0) {
    pLVar3 = (this->fields)._cwPolyPoints;
  }
  else {
    if ((this->fields)._isThickBorderDirty != 0) {
      puStackY_40 = &UNK_?;
      PolygonShape2D_CalculateThickBorderPoints(this,(MethodInfo *)0x0);
    }
    pPVar1 = (this->fields)._borderRenderDesc;
    if (pPVar1 == (PolygonShape2D_BorderRenderDescriptor *)0x0) goto code_?;
    pLVar3 = (this->fields)._cwPolyPoints;
    if ((pPVar1->fields)._fillMode != 1) {
      puStackY_40 = &UNK_?;
      pLVar3 = PrimitiveFactory::PrimitiveFactory_Generate2DPolyBorderQuadsCW
                         (pLVar3,(this->fields)._thickCwBorderPoints,
                          (uint)((pPVar1->fields)._direction != 0),(this->fields)._isClosed,
                          (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                      ,camera,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pLVar3 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (pLVar3->fields)._size;
      iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
      if (0 < iVar4) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        lVar6 = 0;
        uVar7 = 2;
        lVar8 = 0x28;
        do {
          if ((uint)(pLVar3->fields)._size <= uVar7 - 2) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pVVar9 = (pLVar3->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar7 - 2) {
code_?:
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (camera == (Camera *)0x0) goto code_?;
          uStackY_78 = CONCAT44(*(undefined4 *)((longlong)pVVar9->vector + lVar8 + -0x24),
                                *(undefined4 *)((longlong)(pVVar9->vector + -5) + lVar8));
          uStackY_70 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStackY_b8 = 0;
          fStackY_b0 = 0.0;
          pvVar10 = (camera->fields)._._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar10,&uStackY_78,&uStackY_b8);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    ((float)uStackY_b8,uStackY_b8._4_4_,fStackY_b0,(MethodInfo *)0x0);
          if ((uint)(pLVar3->fields)._size <= uVar7 - 1) goto code_?;
          pVVar9 = (pLVar3->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar7 - 1) goto code_?;
          uStackY_68 = CONCAT44(*(undefined4 *)((longlong)pVVar9->vector + lVar8 + -0x1c),
                                *(undefined4 *)
                                 ((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass +
                                 lVar8));
          uStackY_60 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStackY_a8 = 0;
          fStackY_a0 = 0.0;
          pvVar10 = (camera->fields)._._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar10,&uStackY_68,&uStackY_a8);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    ((float)uStackY_a8,uStackY_a8._4_4_,fStackY_a0,(MethodInfo *)0x0);
          if ((uint)(pLVar3->fields)._size <= uVar7) goto code_?;
          pVVar9 = (pLVar3->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar7) goto code_?;
          uStackY_58 = CONCAT44(*(undefined4 *)((longlong)pVVar9->vector + lVar8 + -0x14),
                                *(undefined4 *)((longlong)(pVVar9->vector + -3) + lVar8));
          uStackY_50 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStackY_98 = 0;
          fStackY_90 = 0.0;
          pvVar10 = (camera->fields)._._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar10,&uStackY_58,&uStackY_98);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    ((float)uStackY_98,uStackY_98._4_4_,fStackY_90,(MethodInfo *)0x0);
          if ((uint)(pLVar3->fields)._size <= uVar7 + 1) goto code_?;
          pVVar9 = (pLVar3->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar7 + 1) goto code_?;
          uStackY_48 = CONCAT44(*(undefined4 *)((longlong)pVVar9->vector + lVar8 + -0xc),
                                *(undefined4 *)((longlong)(pVVar9->vector + -2) + lVar8));
          puStackY_40 = (undefined *)((ulonglong)puStackY_40 & 0xffffffff00000000);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStackY_88 = 0;
          fStackY_80 = 0.0;
          pvVar10 = (camera->fields)._._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar10,&uStackY_48,&uStackY_88);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    ((float)uStackY_88,uStackY_88._4_4_,fStackY_80,(MethodInfo *)0x0);
          uVar7 = uVar7 + 4;
          lVar6 = lVar6 + 1;
          lVar8 = lVar8 + 0x20;
        } while (lVar6 < iVar4);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
      }
      return;
    }
    puStackY_40 = &UNK_?;
    GLRenderer::GLRenderer_DrawLines2D(pLVar3,camera,(MethodInfo *)0x0);
    pLVar3 = (this->fields)._thickCwBorderPoints;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,camera,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar3 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (1 < (pLVar3->fields)._size) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(1);
    lVar6 = 0x28;
    for (uVar7 = 0; (int)uVar7 < (pLVar3->fields)._size + -1; uVar7 = uVar7 + 1) {
      if ((uint)(pLVar3->fields)._size <= uVar7) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pVVar9 = (pLVar3->fields)._items;
      if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar7) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((uint)(pLVar3->fields)._size <= uVar7 + 1) goto code_?;
      if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar7 + 1) goto code_?;
      uVar11 = *(undefined4 *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar6);
      uVar12 = *(undefined4 *)((longlong)pVVar9->vector + lVar6 + -0x1c);
      if (camera == (Camera *)0x0) goto code_?;
      uStackY_78 = CONCAT44(*(undefined4 *)((longlong)pVVar9->vector + lVar6 + -0x24),
                            *(undefined4 *)((longlong)(pVVar9->vector + -5) + lVar6));
      uStackY_70 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStackY_98 = 0;
      fStackY_90 = 0.0;
      pvVar10 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar10,&uStackY_78,&uStackY_98);
      uStackY_68 = CONCAT44(uVar12,uVar11);
      uStackY_60 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStackY_88 = 0;
      fStackY_80 = 0.0;
      pvVar10 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar10,&uStackY_68,&uStackY_88);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStackY_98,uStackY_98._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStackY_88,uStackY_88._4_4_,0.0,(MethodInfo *)0x0);
      lVar6 = lVar6 + 8;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
  }
  return;
}


/* Void SetClockwisePoints(List`1[UnityEngine.Vector2], Boolean) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_SetClockwisePoints
               (PolygonShape2D *this,List_1_UnityEngine_Vector2_ *cwBorderPoints,bool isClosed,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cwBorderPoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    pLVar1 = (this->fields)._cwPolyPoints;
    iVar2 = (cwBorderPoints->fields)._size;
    if (pLVar1 != (List_1_UnityEngine_Vector2_ *)0x0) {
      piVar3 = &(pLVar1->fields)._version;
      *piVar3 = *piVar3 + 1;
      uVar4 = 0;
      (pLVar1->fields)._size = 0;
      if (0 < iVar2) {
        lVar5 = 0;
        lVar6 = 0x20;
        do {
          pMVar7 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          if ((uint)(cwBorderPoints->fields)._size <= uVar4) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pVVar9 = (cwBorderPoints->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar4) {
code_?:
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar10 = *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar6);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar6 + -0x1c);
          uVar12 = (int)(uVar4 + 1) % iVar2;
          if ((uint)(cwBorderPoints->fields)._size <= uVar12) goto code_?;
          pVVar9 = (cwBorderPoints->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar12) goto code_?;
          pLVar1 = (this->fields)._cwPolyPoints;
          if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
          piVar3 = &(pLVar1->fields)._version;
          *piVar3 = *piVar3 + 1;
          pVVar9 = (pLVar1->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar12 = (pLVar1->fields)._size;
          if (uVar12 < (uint)pVVar9->max_length) {
            (pLVar1->fields)._size = uVar12 + 1;
            if ((uint)pVVar9->max_length <= uVar12) goto code_?;
            pVVar9->vector[(int)uVar12].x = fVar10;
            pVVar9->vector[(int)uVar12].y = fVar11;
          }
          else {
            item.y = fVar11;
            item.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar1,item,pMVar7->klass->rgctx_data[0xe].method);
          }
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar5 < iVar2);
      }
      (this->fields)._isRectDirty = 1;
      (this->fields)._isClosed = isClosed;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* PolygonShape2D() */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D__ctor
               (PolygonShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__PolygonShape2D__BorderRenderDescriptor);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isRectDirty = 1;
  pLVar1 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pVVar3 = (Vector2__Array *)FUN_?(pvVar2,100);
  (pLVar1->fields)._items = pVVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields)._cwPolyPoints = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._cwPolyPoints >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLVar1 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pVVar3 = (Vector2__Array *)FUN_?(pvVar2,100);
  (pLVar1->fields)._items = pVVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields)._thickCwBorderPoints = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._thickCwBorderPoints >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  (this->fields)._isThickBorderDirty = 1;
  pPVar10 = (PolygonShape2D_BorderRenderDescriptor *)
           FUN_?(TypeInfo__RTG__PolygonShape2D__BorderRenderDescriptor);
  bVar8 = iRam_? != 0;
  (pPVar10->fields)._thickness = 5.0;
  (pPVar10->fields)._direction = 1;
  (this->fields)._borderRenderDesc = pPVar10;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(this->fields)._borderRenderDesc >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Int32 get_NumPoints() */

int32_t Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_get_NumPoints
                  (PolygonShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._cwPolyPoints;
  if (pLVar1 != (List_1_UnityEngine_Vector2_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_ThickWireEps(Single) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_set_ThickWireEps
               (PolygonShape2D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._thickWireEps = (float)((uint)value & _UNK_?);
  return;
}

