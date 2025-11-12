
/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_ContainsPoint
               (RightAngTriangle2D *this,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = RightAngTriangle2D_GetPoints(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_Vector2_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pVVar4 = (pLVar1->fields)._items;
    if (pVVar4 != (Vector2__Array *)0x0) {
      if ((int)pVVar4->max_length != 0) {
        p0 = pVVar4->vector[0];
        if ((uint)(pLVar1->fields)._size < 2) goto code_?;
        if (pVVar4 == (Vector2__Array *)0x0) goto DAT_?;
        if (1 < (uint)pVVar4->max_length) {
          p1 = pVVar4->vector[1];
          if ((uint)(pLVar1->fields)._size < 3) goto code_?;
          if (pVVar4 == (Vector2__Array *)0x0) goto DAT_?;
          if (2 < (uint)pVVar4->max_length) {
            p2 = pVVar4->vector[2];
            uVar5._0_4_ = (this->fields)._epsilon._areaEps;
            uVar5._4_4_ = (this->fields)._epsilon._extrudeEps;
            fVar6 = (this->fields)._epsilon._wireEps;
            if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
              FUN_?();
            }
            aTStack_7[0]._0_8_ = uVar5;
            aTStack_7[0]._wireEps = fVar6;
            bVar3 = TriangleMath::TriangleMath_Contains2DPoint
                              (point,p0,p1,p2,aTStack_7,(MethodInfo *)0x0);
            return bVar3;
          }
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
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
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  rightAngleCorner = (this->fields)._rightAngleCorner;
  xLength = (this->fields)._XLength;
  yLength = (this->fields)._YLength;
  degreeTriRotation = (this->fields)._rotationDegrees;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__RemoveAt_int_
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
  pLVar1 = RightAngTriangle2D_GetPoints(this,(MethodInfo *)0x0);
  if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pLVar1->fields)._size != 0) {
    pVVar3 = (pLVar1->fields)._items;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    if ((int)pVVar3->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    VVar4 = pVVar3->vector[0];
    if ((pLVar1->fields)._size != 0) {
      iVar5 = (pLVar1->fields)._size + -1;
      (pLVar1->fields)._size = iVar5;
      if (0 < iVar5) {
        pVVar3 = (pLVar1->fields)._items;
        mscorlib.dll::System::Array::Array_Copy_3
                  ((Array *)pVVar3,1,(Array *)pVVar3,0,iVar5,(MethodInfo *)0x0);
      }
      piVar6 = &(pLVar1->fields)._version;
      *piVar6 = *piVar6 + 1;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                      ,pLVar1,camera,0,VVar4);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (pLVar1->fields)._size + -1;
      if (0 < iVar5) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(4);
        if (camera == (Camera *)0x0) goto code_?;
        puStack_8 = (undefined *)((ulonglong)puStack_8 & 0xffffffff00000000);
        VStack_9 = VVar4;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_10 = 0;
        uStack_11 = 0;
        pvVar12 = (camera->fields)._._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar12,&VStack_9,&uStack_10);
        uVar13 = 0;
        lVar14 = 0x28;
        uVar15 = uVar13;
        do {
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    ((float)uStack_10,uStack_10._4_4_,0.0,(MethodInfo *)0x0);
          uVar16 = (uint)uVar13;
          if ((uint)(pLVar1->fields)._size <= uVar16) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pVVar3 = (pLVar1->fields)._items;
          if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar3->max_length <= uVar16) {
code_?:
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uStack_17 = CONCAT44(*(undefined4 *)((longlong)pVVar3->vector + lVar14 + -0x24),
                               *(undefined4 *)((longlong)(pVVar3->vector + -5) + lVar14));
          uStack_18 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_19 = 0;
          fStack_20 = 0.0;
          pvVar12 = (camera->fields)._._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar12,&uStack_17,&uStack_19);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    ((float)uStack_19,uStack_19._4_4_,fStack_20,(MethodInfo *)0x0);
          if ((uint)(pLVar1->fields)._size <= uVar16 + 1) goto code_?;
          pVVar3 = (pLVar1->fields)._items;
          if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar3->max_length <= uVar16 + 1) goto code_?;
          uStack_21 = CONCAT44(*(undefined4 *)((longlong)pVVar3->vector + lVar14 + -0x1c),
                               *(undefined4 *)
                                ((longlong)&((Vector2__Array *)(pVVar3->vector + -4))->klass +
                                lVar14));
          uStack_22 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_23 = 0;
          fStack_24 = 0.0;
          pvVar12 = (camera->fields)._._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar12,&uStack_21,&uStack_23);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    ((float)uStack_23,uStack_23._4_4_,fStack_24,(MethodInfo *)0x0);
          uVar13 = (ulonglong)(uVar16 + 1);
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 8;
        } while ((longlong)uVar15 < (longlong)iVar5);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
      }
      return;
    }
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_RenderBorder
               (RightAngTriangle2D *this,Camera *camera,MethodInfo *method)

{
  pLVar1 = RightAngTriangle2D_GetPoints(this,(MethodInfo *)0x0);
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
  if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (1 < (pLVar1->fields)._size) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    lVar4 = 0x20;
    for (uVar5 = 0; (int)uVar5 < (pLVar1->fields)._size; uVar5 = uVar5 + 1) {
      if ((uint)(pLVar1->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pVVar6 = (pLVar1->fields)._items;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = (int)(uVar5 + 1) % (pLVar1->fields)._size;
      if ((uint)(pLVar1->fields)._size <= uVar7) goto code_?;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar7) goto code_?;
      fVar8 = pVVar6->vector[(int)uVar7].x;
      fVar9 = pVVar6->vector[(int)uVar7].y;
      if (camera == (Camera *)0x0) goto code_?;
      uStack_10 = CONCAT44(*(undefined4 *)((longlong)pVVar6->vector + lVar4 + -0x1c),
                           *(undefined4 *)
                            ((longlong)&((Vector2__Array *)(pVVar6->vector + -4))->klass + lVar4));
      uStack_11 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_12 = 0;
      uStack_13 = 0;
      pvVar14 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar14,&uStack_10,&uStack_12);
      uStack_15 = CONCAT44(fVar9,fVar8);
      uStack_16 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_17 = 0;
      uStack_18 = 0;
      pvVar14 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar14,&uStack_15,&uStack_17);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_12,uStack_12._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_17,uStack_17._4_4_,0.0,(MethodInfo *)0x0);
      lVar4 = lVar4 + 8;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
  }
  return;
}


/* RightAngTriangle2D() */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D__ctor
               (RightAngTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
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


/* TriangleEpsilon get_Epsilon() */

TriangleEpsilon *
Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_Epsilon
          (TriangleEpsilon *__return_storage_ptr__,RightAngTriangle2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._epsilon._wireEps;
  fVar2 = (this->fields)._epsilon._extrudeEps;
  __return_storage_ptr__->_areaEps = (this->fields)._epsilon._areaEps;
  __return_storage_ptr__->_extrudeEps = fVar2;
  __return_storage_ptr__->_wireEps = fVar1;
  return __return_storage_ptr__;
}


/* Vector2 get_ModelRight() */

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRight
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__UnityEngine__Vector2->static_fields->rightVector;
}


/* Vector2 get_ModelRightAngleCorner() */

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
}


/* Vector2 get_ModelUp() */

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelUp
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_3._0_4_ = (pVVar2->forwardVector).x;
  uStack_3._4_4_ = (pVVar2->forwardVector).y;
  fStack_4 = (pVVar2->forwardVector).z;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    VVar9 = (Vector2)(*pcVar7)();
    return VVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar1,&uStack_3,&uStack_5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar11 = (float)uStack_6 + (float)uStack_6;
  fVar1 = uStack_5._4_4_ + uStack_5._4_4_;
  VVar9.y = (_UNK_? -
            ((float)uStack_5 * ((float)uStack_5 + (float)uStack_5) + (float)uStack_6 * fVar11)) *
            (pVVar10->rightVector).y +
            (uStack_6._4_4_ * fVar11 + (float)uStack_5 * fVar1) * (pVVar10->rightVector).x +
            (uStack_5._4_4_ * fVar11 - uStack_6._4_4_ * ((float)uStack_5 + (float)uStack_5)) *
            0.0;
  VVar9.x = (_UNK_? - (uStack_5._4_4_ * fVar1 + (float)uStack_6 * fVar11)) *
            (pVVar10->rightVector).x +
            ((float)uStack_5 * fVar1 - uStack_6._4_4_ * fVar11) * (pVVar10->rightVector).y +
            ((float)uStack_5 * fVar11 + uStack_6._4_4_ * fVar1) * 0.0;
  return VVar9;
}


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_get_Up
                  (RightAngTriangle2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_3._0_4_ = (pVVar2->forwardVector).x;
  uStack_3._4_4_ = (pVVar2->forwardVector).y;
  fStack_4 = (pVVar2->forwardVector).z;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    VVar9 = (Vector2)(*pcVar7)();
    return VVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar1,&uStack_3,&uStack_5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar11 = (float)uStack_6 + (float)uStack_6;
  fVar1 = uStack_5._4_4_ + uStack_5._4_4_;
  VVar9.y = (_UNK_? -
            ((float)uStack_5 * ((float)uStack_5 + (float)uStack_5) + (float)uStack_6 * fVar11)) *
            (pVVar10->upVector).y +
            (uStack_6._4_4_ * fVar11 + (float)uStack_5 * fVar1) * (pVVar10->upVector).x +
            (uStack_5._4_4_ * fVar11 - uStack_6._4_4_ * ((float)uStack_5 + (float)uStack_5)) *
            0.0;
  VVar9.x = (_UNK_? - (uStack_5._4_4_ * fVar1 + (float)uStack_6 * fVar11)) *
            (pVVar10->upVector).x +
            ((float)uStack_5 * fVar1 - uStack_6._4_4_ * fVar11) * (pVVar10->upVector).y +
            ((float)uStack_5 * fVar11 + uStack_6._4_4_ * fVar1) * 0.0;
  return VVar9;
}


/* Void set_Epsilon(TriangleEpsilon) */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_set_Epsilon
               (RightAngTriangle2D *this,TriangleEpsilon *value,MethodInfo *method)

{
  fVar1 = value->_extrudeEps;
  fVar2 = value->_wireEps;
  (this->fields)._epsilon._areaEps = value->_areaEps;
  (this->fields)._epsilon._extrudeEps = fVar1;
  (this->fields)._epsilon._wireEps = fVar2;
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_set_RotationDegrees
               (RightAngTriangle2D *this,float value,MethodInfo *method)

{
  (this->fields)._rotationDegrees = value;
  return;
}


/* Void set_XLength(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle2D::RightAngTriangle2D_set_XLength
               (RightAngTriangle2D *this,float value,MethodInfo *method)

{
  (this->fields)._XLength = (float)((uint)value & _UNK_?);
  return;
}

