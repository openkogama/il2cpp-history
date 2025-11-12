
/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_ContainsPoint
               (EqTriangle2D *this,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector2__Array *)0x0) {
    if ((int)pVVar1->max_length != 0) {
      p0 = pVVar1->vector[0];
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar1 = (this->fields)._points;
      if (pVVar1 == (Vector2__Array *)0x0) goto DAT_?;
      if (1 < (uint)pVVar1->max_length) {
        p1 = pVVar1->vector[1];
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar1 = (this->fields)._points;
        if (pVVar1 == (Vector2__Array *)0x0) goto DAT_?;
        if (2 < (uint)pVVar1->max_length) {
          p2 = pVVar1->vector[2];
          uVar2._0_4_ = (this->fields)._epsilon._areaEps;
          uVar2._4_4_ = (this->fields)._epsilon._extrudeEps;
          fVar3 = (this->fields)._epsilon._wireEps;
          if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          aTStack_4[0]._0_8_ = uVar2;
          aTStack_4[0]._wireEps = fVar3;
          bVar5 = TriangleMath::TriangleMath_Contains2DPoint
                            (point,p0,p1,p2,aTStack_4,(MethodInfo *)0x0);
          return bVar5;
        }
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar5 = (*pcVar6)();
    return bVar5;
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Vector2 GetEdge(EqTriangleEdge) */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_GetEdge
                  (EqTriangle2D *this,EqTriangleEdge__Enum edge,MethodInfo *method)

{
  bVar1 = (this->fields)._arePointsDirty;
  if (edge == EqTriangleEdge__Enum_LeftTop) {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if (1 < (uint)pVVar2->max_length) {
        fVar3 = pVVar2->vector[1].x;
        fVar4 = pVVar2->vector[1].y;
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar2 = (this->fields)._points;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((int)pVVar2->max_length != 0) {
          fVar3 = fVar3 - pVVar2->vector[0].x;
          fVar4 = fVar4 - pVVar2->vector[0].y;
          goto code_?;
        }
      }
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      VVar6 = (Vector2)(*pcVar5)();
      return VVar6;
    }
  }
  else if (edge == EqTriangleEdge__Enum_TopRight) {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if (2 < (uint)pVVar2->max_length) {
        fVar3 = pVVar2->vector[2].x;
        fVar4 = pVVar2->vector[2].y;
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar2 = (this->fields)._points;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if (1 < (uint)pVVar2->max_length) {
          fVar3 = fVar3 - pVVar2->vector[1].x;
          fVar4 = fVar4 - pVVar2->vector[1].y;
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  else {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if ((int)pVVar2->max_length != 0) {
        fVar3 = pVVar2->vector[0].x;
        fVar4 = pVVar2->vector[0].y;
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar2 = (this->fields)._points;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if (2 < (uint)pVVar2->max_length) {
          fVar3 = fVar3 - pVVar2->vector[2].x;
          fVar4 = fVar4 - pVVar2->vector[2].y;
code_?:
          VVar6.y = fVar4;
          VVar6.x = fVar3;
          return VVar6;
        }
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  VVar6 = (Vector2)(*pcVar5)();
  return VVar6;
}


/* Vector2 GetEdgeMidPoint(EqTriangleEdge) */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_GetEdgeMidPoint
                  (EqTriangle2D *this,EqTriangleEdge__Enum edge,MethodInfo *method)

{
  bVar1 = (this->fields)._arePointsDirty;
  if (edge == EqTriangleEdge__Enum_LeftTop) {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
    if ((int)pVVar2->max_length == 0) goto code_?;
    fVar3 = pVVar2->vector[0].x;
    fVar4 = pVVar2->vector[0].y;
    edge = EqTriangleEdge__Enum_LeftTop;
  }
  else if (edge == EqTriangleEdge__Enum_TopRight) {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
    if ((uint)pVVar2->max_length < 2) goto code_?;
    fVar3 = pVVar2->vector[1].x;
    fVar4 = pVVar2->vector[1].y;
    edge = EqTriangleEdge__Enum_TopRight;
  }
  else {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 == (Vector2__Array *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      VVar6 = (Vector2)(*pcVar5)();
      return VVar6;
    }
    if ((uint)pVVar2->max_length < 3) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      VVar6 = (Vector2)(*pcVar5)();
      return VVar6;
    }
    fVar3 = pVVar2->vector[2].x;
    fVar4 = pVVar2->vector[2].y;
  }
  VStackX_20 = EqTriangle2D_GetEdge(this,edge,(MethodInfo *)0x0);
  uVar7 = FUN_?(&VStackX_20);
  VStackX_20.x = (float)uVar7;
  VStackX_20.y = (float)((ulonglong)uVar7 >> 0x20);
  VVar6.y = VStackX_20.y * _UNK_? + fVar4;
  VVar6.x = VStackX_20.x * _UNK_? + fVar3;
  return VVar6;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,EqTriangle2D *this,MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pRVar1 = RectEx::RectEx_FromPoints
                     (&RStack_2,(IEnumerable_1_UnityEngine_Vector2_ *)(this->fields)._points,
                      (MethodInfo *)0x0);
  fVar3 = pRVar1->m_YMin;
  fVar4 = pRVar1->m_Width;
  fVar5 = pRVar1->m_Height;
  __return_storage_ptr__->m_XMin = pRVar1->m_XMin;
  __return_storage_ptr__->m_YMin = fVar3;
  __return_storage_ptr__->m_Width = fVar4;
  __return_storage_ptr__->m_Height = fVar5;
  return __return_storage_ptr__;
}


/* Vector2 GetPoint(EqTrianglePoint) */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_GetPoint
                  (EqTriangle2D *this,EqTrianglePoint__Enum point,MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector2__Array *)0x0) {
    if (point < (EqTrianglePoint__Enum)pVVar1->max_length) {
      VVar2.y = pVVar1->vector[(int)point].y;
      VVar2.x = pVVar1->vector[(int)point].x;
      return VVar2;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar3)();
    return VVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  VVar2 = (Vector2)(*pcVar3)();
  return VVar2;
}


/* Void OnPointsFoundDirty() */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_OnPointsFoundDirty
               (EqTriangle2D *this,MethodInfo *method)

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
  centroid = (this->fields)._centroid;
  fVar1 = (this->fields)._sideLength;
  fVar2 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->forwardVector).x;
  uStack_4._4_4_ = (pVVar3->forwardVector).y;
  fStack_5 = (pVVar3->forwardVector).z;
  aQStack_6[0].x = 0.0;
  aQStack_6[0].y = 0.0;
  aQStack_6[0].z = 0.0;
  aQStack_6[0].w = 0.0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar2,&uStack_4,aQStack_6);
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar9 = TriangleMath::TriangleMath_CalcEqTriangle2DPoints
                     (centroid,fVar1,aQStack_6,(MethodInfo *)0x0);
  pVVar10 = (this->fields)._points;
  if (pLVar9 != (List_1_UnityEngine_Vector2_ *)0x0) {
    if ((pLVar9->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pVVar11 = (pLVar9->fields)._items;
    if (pVVar11 != (Vector2__Array *)0x0) {
      if ((int)pVVar11->max_length != 0) {
        fVar1 = pVVar11->vector[0].y;
        if (pVVar10 == (Vector2__Array *)0x0) goto code_?;
        if ((int)pVVar10->max_length != 0) {
          pVVar10->vector[0].x = pVVar11->vector[0].x;
          pVVar10->vector[0].y = fVar1;
          pVVar10 = (this->fields)._points;
          if ((uint)(pLVar9->fields)._size < 2) goto code_?;
          pVVar11 = (pLVar9->fields)._items;
          if (pVVar11 == (Vector2__Array *)0x0) goto code_?;
          if (1 < (uint)pVVar11->max_length) {
            fVar1 = pVVar11->vector[1].y;
            if (pVVar10 == (Vector2__Array *)0x0) goto code_?;
            if (1 < (uint)pVVar10->max_length) {
              pVVar10->vector[1].x = pVVar11->vector[1].x;
              pVVar10->vector[1].y = fVar1;
              pVVar10 = (this->fields)._points;
              if ((uint)(pLVar9->fields)._size < 3) goto code_?;
              pVVar11 = (pLVar9->fields)._items;
              if (pVVar11 == (Vector2__Array *)0x0) goto code_?;
              if (2 < (uint)pVVar11->max_length) {
                fVar1 = pVVar11->vector[2].y;
                if (pVVar10 == (Vector2__Array *)0x0) goto code_?;
                if (2 < (uint)pVVar10->max_length) {
                  pVVar10->vector[2].x = pVVar11->vector[2].x;
                  pVVar10->vector[2].y = fVar1;
                  (this->fields)._arePointsDirty = 0;
                  return;
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_RenderArea
               (EqTriangle2D *this,Camera *camera,MethodInfo *method)

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
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector2__Array *)0x0) {
    if ((int)pVVar1->max_length == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    VVar3 = pVVar1->vector[0];
    lVar4 = FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(lVar4);
    if ((this->fields)._arePointsDirty != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar1 = (this->fields)._points;
    if (pVVar1 != (Vector2__Array *)0x0) {
      if ((uint)pVVar1->max_length < 2) goto code_?;
      if (lVar4 != 0) {
        FUN_?(lVar4,CONCAT44(pVVar1->vector[1].y,pVVar1->vector[1].x),
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar1 = (this->fields)._points;
        if (pVVar1 != (Vector2__Array *)0x0) {
          if ((uint)pVVar1->max_length < 3) goto code_?;
          FUN_?(lVar4,pVVar1->vector[2],
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                          ,lVar4,camera,0,VVar3);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (lVar4 == 0) {
code_?:
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = *(int *)(lVar4 + 0x18) + -1;
          if (0 < iVar5) {
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)();
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)();
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(4);
            if (camera == (Camera *)0x0) goto code_?;
            uStack_7 = 0;
            VStack_8 = VVar3;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_9 = 0;
            uStack_10 = 0;
            pvVar11 = (camera->fields)._._._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pvVar11,&VStack_8,&uStack_9);
            uVar12 = 0;
            lVar13 = 0x28;
            uVar14 = uVar12;
            do {
              UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                        ((float)uStack_9,uStack_9._4_4_,0.0,(MethodInfo *)0x0);
              uVar15 = (uint)uVar12;
              if (*(uint *)(lVar4 + 0x18) <= uVar15) {
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar16 = *(longlong *)(lVar4 + 0x10);
              if (lVar16 == 0) goto code_?;
              if (*(uint *)(lVar16 + 0x18) <= uVar15) {
code_?:
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uStack_17 = CONCAT44(*(undefined4 *)(lVar13 + -4 + lVar16),
                                   *(undefined4 *)(lVar13 + -8 + lVar16));
              puStack_18 = (undefined *)((ulonglong)puStack_18 & 0xffffffff00000000);
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
              pvVar11 = (camera->fields)._._._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar11,&uStack_17,&uStack_19);
              UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                        ((float)uStack_19,uStack_19._4_4_,fStack_20,(MethodInfo *)0x0);
              if (*(uint *)(lVar4 + 0x18) <= uVar15 + 1) goto code_?;
              lVar16 = *(longlong *)(lVar4 + 0x10);
              if (lVar16 == 0) goto code_?;
              if (*(uint *)(lVar16 + 0x18) <= uVar15 + 1) goto code_?;
              uStack_21 = CONCAT44(*(undefined4 *)(lVar16 + 4 + lVar13),
                                   *(undefined4 *)(lVar16 + lVar13));
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
              pvVar11 = (camera->fields)._._._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar11,&uStack_21,&uStack_23);
              UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                        ((float)uStack_23,uStack_23._4_4_,fStack_24,(MethodInfo *)0x0);
              uVar12 = (ulonglong)(uVar15 + 1);
              uVar14 = uVar14 + 1;
              lVar13 = lVar13 + 8;
            } while ((longlong)uVar14 < (longlong)iVar5);
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)();
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
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
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_RenderBorder
               (EqTriangle2D *this,Camera *camera,MethodInfo *method)

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
  lVar1 = FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(lVar1);
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar2 = (this->fields)._points;
  if (pVVar2 != (Vector2__Array *)0x0) {
    if ((int)pVVar2->max_length == 0) goto code_?;
    if (lVar1 != 0) {
      FUN_?(lVar1,CONCAT44(pVVar2->vector[0].y,pVVar2->vector[0].x),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar2 = (this->fields)._points;
      if (pVVar2 != (Vector2__Array *)0x0) {
        if (1 < (uint)pVVar2->max_length) {
          FUN_?(lVar1,pVVar2->vector[1],
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
          if ((this->fields)._arePointsDirty != 0) {
            EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
          }
          pVVar2 = (this->fields)._points;
          if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
          if (2 < (uint)pVVar2->max_length) {
            FUN_?(lVar1,pVVar2->vector[2],
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                         );
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
            if (lVar1 == 0) {
code_?:
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (1 < *(int *)(lVar1 + 0x18)) {
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
              lVar5 = 0x20;
              for (uVar6 = 0; (int)uVar6 < *(int *)(lVar1 + 0x18); uVar6 = uVar6 + 1) {
                if (*(uint *)(lVar1 + 0x18) <= uVar6) {
code_?:
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar7 = *(longlong *)(lVar1 + 0x10);
                if (lVar7 == 0) goto code_?;
                if (*(uint *)(lVar7 + 0x18) <= uVar6) {
code_?:
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar8 = (int)(uVar6 + 1) % *(int *)(lVar1 + 0x18);
                if (*(uint *)(lVar1 + 0x18) <= uVar8) goto code_?;
                if (lVar7 == 0) goto code_?;
                if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_?;
                uVar9 = *(undefined4 *)(lVar7 + 0x20 + (longlong)(int)uVar8 * 8);
                uVar10 = *(undefined4 *)(lVar7 + 0x24 + (longlong)(int)uVar8 * 8);
                if (camera == (Camera *)0x0) goto code_?;
                uStack_11 = CONCAT44(*(undefined4 *)(lVar5 + 4 + lVar7),
                                     *(undefined4 *)(lVar5 + lVar7));
                uStack_12 = 0;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_13 = 0;
                uStack_14 = 0;
                pvVar15 = (camera->fields)._._._.m_CachedPtr;
                if (pvVar15 == (void *)0x0) {
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
                (*pcRam_?)(pvVar15,&uStack_11,&uStack_13);
                uStack_16 = CONCAT44(uVar10,uVar9);
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
                uStack_19 = 0;
                pvVar15 = (camera->fields)._._._.m_CachedPtr;
                if (pvVar15 == (void *)0x0) {
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
                (*pcRam_?)(pvVar15,&uStack_16,&uStack_18);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                          ((float)uStack_13,uStack_13._4_4_,0.0,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                          ((float)uStack_18,uStack_18._4_4_,0.0,(MethodInfo *)0x0);
                lVar5 = lVar5 + 8;
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
            }
            return;
          }
        }
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetPoint(EqTrianglePoint, Vector2) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_SetPoint
               (EqTriangle2D *this,EqTrianglePoint__Enum point,Vector2 pointValue,MethodInfo *method
               )

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 == (Vector2__Array *)0x0) goto code_?;
  if (point < (EqTrianglePoint__Enum)pVVar1->max_length) {
    fStackX_8 = pointValue.x;
    fStackX_c = pointValue.y;
    fStackX_8 = fStackX_8 - pVVar1->vector[(int)point].x;
    fStackX_c = fStackX_c - pVVar1->vector[(int)point].y;
    if ((int)pVVar1->max_length != 0) {
      pVVar1->vector[0].x = fStackX_8 + pVVar1->vector[0].x;
      pVVar1->vector[0].y = fStackX_c + pVVar1->vector[0].y;
      pVVar1 = (this->fields)._points;
      if (pVVar1 == (Vector2__Array *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (1 < (uint)pVVar1->max_length) {
        fVar3 = pVVar1->vector[1].y;
        pVVar1->vector[1].x = fStackX_8 + pVVar1->vector[1].x;
        pVVar1->vector[1].y = fStackX_c + fVar3;
        pVVar1 = (this->fields)._points;
        if (pVVar1 == (Vector2__Array *)0x0) goto code_?;
        if (2 < (uint)pVVar1->max_length) {
          fVar3 = pVVar1->vector[2].y;
          pVVar1->vector[2].x = fStackX_8 + pVVar1->vector[2].x;
          pVVar1->vector[2].y = fStackX_c + fVar3;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* EqTriangle2D() */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D__ctor
               (EqTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._sideLength = 1.0;
  pVVar1 = (Vector2__Array *)FUN_?(TypeInfo__UnityEngine__Vector2,3);
  bVar2 = iRam_? != 0;
  (this->fields)._points = pVVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._points >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._centroid.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._centroid.y = fVar7;
  (this->fields)._arePointsDirty = 1;
  return;
}


/* Single get_Altitude() */

float Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Altitude
                (EqTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sideLength;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  return fVar1 * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor;
}


/* Vector2 get_Centroid() */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Centroid
                  (EqTriangle2D *this,MethodInfo *method)

{
  return (this->fields)._centroid;
}


/* Single get_CentroidAltitude() */

float Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_CentroidAltitude
                (EqTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sideLength;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (fVar1 * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor) / _UNK_?
  ;
}


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Right
                  (EqTriangle2D *this,MethodInfo *method)

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


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Rotation
          (Quaternion *__return_storage_ptr__,EqTriangle2D *this,MethodInfo *method)

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
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar1,&uStack_3,&uStack_5);
  __return_storage_ptr__->x = (float)(undefined4)uStack_5;
  __return_storage_ptr__->y = (float)uStack_5._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_6;
  __return_storage_ptr__->w = (float)uStack_6._4_4_;
  return __return_storage_ptr__;
}


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Up
                  (EqTriangle2D *this,MethodInfo *method)

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


/* Void set_Centroid(Vector2) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_set_Centroid
               (EqTriangle2D *this,Vector2 value,MethodInfo *method)

{
  fVar1 = value.x - (this->fields)._centroid.x;
  fVar2 = value.y - (this->fields)._centroid.y;
  pVVar3 = (this->fields)._points;
  (this->fields)._centroid = value;
  if (pVVar3 != (Vector2__Array *)0x0) {
    if ((int)pVVar3->max_length != 0) {
      pVVar3->vector[0].x = fVar1 + pVVar3->vector[0].x;
      pVVar3->vector[0].y = fVar2 + pVVar3->vector[0].y;
      pVVar3 = (this->fields)._points;
      if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
      if (1 < (uint)pVVar3->max_length) {
        fVar4 = pVVar3->vector[1].y;
        pVVar3->vector[1].x = fVar1 + pVVar3->vector[1].x;
        pVVar3->vector[1].y = fVar2 + fVar4;
        pVVar3 = (this->fields)._points;
        if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
        if (2 < (uint)pVVar3->max_length) {
          fVar4 = pVVar3->vector[2].y;
          pVVar3->vector[2].x = fVar1 + pVVar3->vector[2].x;
          pVVar3->vector[2].y = fVar2 + fVar4;
          return;
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_set_RotationDegrees
               (EqTriangle2D *this,float value,MethodInfo *method)

{
  (this->fields)._rotationDegrees = value;
  return;
}


/* Void set_SideLength(Single) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_set_SideLength
               (EqTriangle2D *this,float value,MethodInfo *method)

{
  (this->fields)._sideLength = (float)((uint)value & _UNK_?);
  (this->fields)._arePointsDirty = 1;
  return;
}

