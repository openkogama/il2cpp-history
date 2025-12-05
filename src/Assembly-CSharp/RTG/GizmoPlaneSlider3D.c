
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_AddTargetTransform
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_00 = (this->fields)._dblAxisOffsetDrag;
  if (this_00 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_AddTargetTransform
              ((GizmoDragSession *)this_00,transform,(MethodInfo *)0x0);
    this_01 = (this->fields)._rotationDrag;
    if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_AddTargetTransform
                ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scaleDrag;
      if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                          (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
        if (cVar2 == '\0') {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar3 = (pGVar1->fields)._._._targetTransforms;
          if (pLVar3 != (List_1_RTG_GizmoTransform_ *)0x0) {
            if (((pLVar3->fields)._size != 0) &&
               (iVar4 = mscorlib.dll::System::Array::Array_IndexOf_69
                                  ((Object__Array *)(pLVar3->fields)._items,(Object *)transform,0,
                                   (pLVar3->fields)._size,
                                   (MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                                    ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].
                                   method), iVar4 != -1)) {
              return;
            }
            pLVar3 = (pGVar1->fields)._._._targetTransforms;
            if (pLVar3 != (List_1_RTG_GizmoTransform_ *)0x0) {
              FUN_?(pLVar3,transform);
              return;
            }
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddTargetTransform(GizmoTransform, GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_AddTargetTransform_1
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,
               GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._dblAxisOffsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
      return;
    }
    pGVar1 = (this->fields)._scaleDrag;
  }
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    if (cVar2 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar3 = (pGVar1->fields)._._._targetTransforms;
      if (pLVar3 != (List_1_RTG_GizmoTransform_ *)0x0) {
        if (((pLVar3->fields)._size != 0) &&
           (iVar4 = mscorlib.dll::System::Array::Array_IndexOf_69
                              ((Object__Array *)(pLVar3->fields)._items,(Object *)transform,0,
                               (pLVar3->fields)._size,
                               (MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                                ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method),
           iVar4 != -1)) {
          return;
        }
        pLVar3 = (pGVar1->fields)._._._targetTransforms;
        if (pLVar3 != (List_1_RTG_GizmoTransform_ *)0x0) {
          FUN_?(pLVar3,transform);
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AlignToQuadrant(GizmoTransform, PlaneId, PlaneQuadrantId, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_AlignToQuadrant
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,PlaneId__Enum planeId,
               PlaneQuadrantId__Enum quadrantId,bool alignXToFirstAxis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (transform != (GizmoTransform *)0x0) {
    pPVar1 = GizmoTransform::GizmoTransform_GetPlane3D
                        ((Plane *)aQStack_2,transform,planeId,quadrantId,(MethodInfo *)0x0);
    uVar3._0_4_ = (pPVar1->m_Normal).x;
    uVar3._4_4_ = (pPVar1->m_Normal).y;
    uVar4._0_4_ = (pPVar1->m_Normal).x;
    uVar4._4_4_ = (pPVar1->m_Normal).y;
    fVar5 = (pPVar1->m_Normal).z;
    if (alignXToFirstAxis == 0) {
      if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar6 = PlaneIdHelper::PlaneIdHelper_GetFirstAxisDescriptor
                          (planeId,quadrantId,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._._gizmo;
      if (((pGVar7 == (Gizmo *)0x0) ||
          (pGVar8 = (pGVar7->fields)._transform, pGVar8 == (GizmoTransform *)0x0)) ||
         ((pAVar6 == (AxisDescriptor *)0x0 ||
          (pVVar9 = (pGVar8->fields)._axes3D, pVVar9 == (Vector3__Array *)0x0))))
      goto code_?;
      uVar10 = (pAVar6->fields)._index;
      if ((uint)pVVar9->max_length <= uVar10) {
code_?:
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar12 = (uint)pVVar9->vector[(int)uVar10].x;
      uVar13 = (uint)pVVar9->vector[(int)uVar10].y;
      fStack_14 = pVVar9->vector[(int)uVar10].z;
      if ((pAVar6->fields)._sign == 1) {
        uVar12 = uVar12 ^ _UNK_?;
        uVar13 = uVar13 ^ _UNK_?;
        fStack_14 = (float)((uint)pVVar9->vector[(int)uVar10].z ^ _UNK_?);
      }
      pGVar8 = (this->fields)._transform;
      uStack_15 = CONCAT44(uVar13,uVar12);
      aQStack_2[0].x = 0.0;
      aQStack_2[0].y = 0.0;
      aQStack_2[0].z = 0.0;
      aQStack_2[0].w = 0.0;
      pcVar11 = pcRam_?;
      uStack_16 = uVar4;
      fStack_17 = fVar5;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      puVar18 = &uStack_15;
      puVar19 = &uStack_16;
    }
    else {
      if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar6 = PlaneIdHelper::PlaneIdHelper_GetSecondAxisDescriptor
                          (planeId,quadrantId,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._._gizmo;
      if ((((pGVar7 == (Gizmo *)0x0) ||
           (pGVar8 = (pGVar7->fields)._transform, pGVar8 == (GizmoTransform *)0x0)) ||
          (pAVar6 == (AxisDescriptor *)0x0)) ||
         (pVVar9 = (pGVar8->fields)._axes3D, pVVar9 == (Vector3__Array *)0x0))
      goto code_?;
      uVar10 = (pAVar6->fields)._index;
      if ((uint)pVVar9->max_length <= uVar10) goto code_?;
      uVar20 = (uint)pVVar9->vector[(int)uVar10].x;
      uVar21 = (uint)pVVar9->vector[(int)uVar10].y;
      fStack_17 = pVVar9->vector[(int)uVar10].z;
      if ((pAVar6->fields)._sign == 1) {
        uVar20 = uVar20 ^ _UNK_?;
        uVar21 = uVar21 ^ _UNK_?;
        fStack_17 = (float)((uint)pVVar9->vector[(int)uVar10].z ^ _UNK_?);
      }
      pGVar8 = (this->fields)._transform;
      uStack_16 = CONCAT44(uVar21,uVar20);
      aQStack_2[0].x = 0.0;
      aQStack_2[0].y = 0.0;
      aQStack_2[0].z = 0.0;
      aQStack_2[0].w = 0.0;
      pcVar11 = pcRam_?;
      uStack_15 = uVar3;
      fStack_14 = fVar5;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      puVar18 = &uStack_16;
      puVar19 = &uStack_15;
    }
    (*pcRam_?)(puVar19,puVar18);
    if (pGVar8 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_set_Rotation3D(pGVar8,aQStack_2,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ApplyZoomFactor(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_ApplyZoomFactor
               (GizmoPlaneSlider3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar1 = 0xd0;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x18) == '\0') {
      return;
    }
    this_00 = (this->fields)._._handle;
    if (this_00 != (GizmoHandle *)0x0) {
      fVar2 = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      uVar3 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar3 = 0xd0;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if ((lVar1 != 0) &&
         (pIVar4 = (this->fields)._controllers,
         pIVar4 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
        uVar3 = *(uint *)(lVar1 + 0x10);
        if ((uint)pIVar4->max_length <= uVar3) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pIVar4->vector[(int)uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoPlaneSlider3DController,pIVar4->vector[(int)uVar3],
                        fVar2);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 GetQuadCornerPosition(QuadCorner) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetQuadCornerPosition
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,
                    QuadCorner__Enum corner,MethodInfo *method)

{
  pQVar1 = (this->fields)._quad;
  if (pQVar1 != (QuadShape3D *)0x0) {
    QStack_2.x = (pQVar1->fields)._rotation.x;
    QStack_2.y = (pQVar1->fields)._rotation.y;
    QStack_2.z = (pQVar1->fields)._rotation.z;
    QStack_2.w = (pQVar1->fields)._rotation.w;
    VStack_3.z = (pQVar1->fields)._center.z;
    VStack_3.x = (pQVar1->fields)._center.x;
    VStack_3.y = (pQVar1->fields)._center.y;
    pVVar4 = QuadMath::QuadMath_Calc3DQuadCorner
                       (&VStack_5,&VStack_3,(pQVar1->fields)._size,&QStack_2,corner,
                        (MethodInfo *)0x0);
    fVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    __return_storage_ptr__->x = pVVar4->x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar8)();
  return pVVar4;
}


/* Single GetRealCircleRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealCircleRadius
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  lVar2 = 0xd8;
  lVar3 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar3 = 0xd0;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x18) == '\0') {
      zoomFactor = _UNK_?;
    }
    pGVar4 = (this->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(pGVar4->klass->vtable).get_IsActive_1.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable).get_IsActive_1.method);
      if (cVar5 != '\0') {
        pGVar4 = (this->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar1 = (pGVar4->fields)._totalScale0;
        if ((float)((uint)fVar1 & _UNK_?) <
            (float)((uint)(pGVar4->fields)._totalScale1 & _UNK_?)) {
          fVar1 = (pGVar4->fields)._totalScale1;
        }
      }
      lVar3 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar3 = 0xd0;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 != 0) {
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar2 = 0xd0;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x14) *
               *(float *)(lVar3 + 0x2c) * zoomFactor * fVar1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar1 = (float)(*pcVar6)();
  return fVar1;
}


/* Single GetRealQuadHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealQuadHeight
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  lVar2 = 0xd8;
  lVar3 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar3 = 0xd0;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x18) == '\0') {
      zoomFactor = _UNK_?;
    }
    pGVar4 = (this->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(pGVar4->klass->vtable).get_IsActive_1.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable).get_IsActive_1.method);
      if (cVar5 != '\0') {
        pGVar4 = (this->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar1 = (float)((uint)(pGVar4->fields)._totalScale1 & _UNK_?);
      }
      lVar3 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar3 = 0xd0;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 != 0) {
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar2 = 0xd0;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x14) *
               *(float *)(lVar3 + 0x20) * zoomFactor * fVar1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar1 = (float)(*pcVar6)();
  return fVar1;
}


/* Vector2 GetRealQuadSize(Single) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealQuadSize
                  (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  lVar2 = 0xd8;
  lVar3 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar3 = 0xd0;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x18) == '\0') {
      zoomFactor = _UNK_?;
    }
    pGVar4 = (this->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(pGVar4->klass->vtable).get_IsActive_1.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable).get_IsActive_1.method);
      fVar6 = fVar1;
      if (cVar5 != '\0') {
        pGVar4 = (this->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar1 = (pGVar4->fields)._totalScale0;
        fVar6 = (pGVar4->fields)._totalScale1;
      }
      lVar3 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar3 = 0xd0;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 != 0) {
        bVar7 = (this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0;
        lVar8 = 0xd8;
        if (bVar7) {
          lVar8 = 0xd0;
        }
        lVar9 = 0xd8;
        if (bVar7) {
          lVar9 = 0xd0;
        }
        if (bVar7) {
          lVar2 = 0xd0;
        }
        VVar10.y = *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x14) *
                  *(float *)(*(longlong *)((longlong)&this->klass + lVar9) + 0x20) * zoomFactor *
                  fVar6;
        VVar10.x = *(float *)(*(longlong *)((longlong)&this->klass + lVar8) + 0x14) *
                  *(float *)(lVar3 + 0x1c) * zoomFactor * fVar1;
        return VVar10;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  VVar10 = (Vector2)(*pcVar11)();
  return VVar10;
}


/* Single GetRealQuadWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealQuadWidth
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  lVar2 = 0xd8;
  lVar3 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar3 = 0xd0;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x18) == '\0') {
      zoomFactor = _UNK_?;
    }
    pGVar4 = (this->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(pGVar4->klass->vtable).get_IsActive_1.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable).get_IsActive_1.method);
      if (cVar5 != '\0') {
        pGVar4 = (this->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar1 = (float)((uint)(pGVar4->fields)._totalScale0 & _UNK_?);
      }
      lVar3 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar3 = 0xd0;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 != 0) {
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar2 = 0xd0;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x14) *
               *(float *)(lVar3 + 0x1c) * zoomFactor * fVar1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar1 = (float)(*pcVar6)();
  return fVar1;
}


/* Vector2 GetRealRATriSize(Single) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealRATriSize
                  (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  lVar2 = 0xd8;
  lVar3 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar3 = 0xd0;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x18) == '\0') {
      zoomFactor = _UNK_?;
    }
    pGVar4 = (this->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(pGVar4->klass->vtable).get_IsActive_1.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable).get_IsActive_1.method);
      fVar6 = fVar1;
      if (cVar5 != '\0') {
        pGVar4 = (this->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar1 = (pGVar4->fields)._totalScale0;
        fVar6 = (pGVar4->fields)._totalScale1;
      }
      lVar3 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar3 = 0xd0;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 != 0) {
        bVar7 = (this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0;
        lVar8 = 0xd8;
        if (bVar7) {
          lVar8 = 0xd0;
        }
        lVar9 = 0xd8;
        if (bVar7) {
          lVar9 = 0xd0;
        }
        if (bVar7) {
          lVar2 = 0xd0;
        }
        VVar10.y = *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x14) *
                  *(float *)(*(longlong *)((longlong)&this->klass + lVar9) + 0x28) * zoomFactor *
                  fVar6;
        VVar10.x = *(float *)(*(longlong *)((longlong)&this->klass + lVar8) + 0x14) *
                  *(float *)(lVar3 + 0x24) * zoomFactor * fVar1;
        return VVar10;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  VVar10 = (Vector2)(*pcVar11)();
  return VVar10;
}


/* Single GetRealRATriXLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealRATriXLength
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  lVar2 = 0xd8;
  lVar3 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar3 = 0xd0;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x18) == '\0') {
      zoomFactor = _UNK_?;
    }
    pGVar4 = (this->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(pGVar4->klass->vtable).get_IsActive_1.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable).get_IsActive_1.method);
      if (cVar5 != '\0') {
        pGVar4 = (this->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar1 = (float)((uint)(pGVar4->fields)._totalScale0 & _UNK_?);
      }
      lVar3 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar3 = 0xd0;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 != 0) {
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar2 = 0xd0;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x14) *
               *(float *)(lVar3 + 0x24) * zoomFactor * fVar1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar1 = (float)(*pcVar6)();
  return fVar1;
}


/* Single GetRealRATriYLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealRATriYLength
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  lVar2 = 0xd8;
  lVar3 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar3 = 0xd0;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x18) == '\0') {
      zoomFactor = _UNK_?;
    }
    pGVar4 = (this->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(pGVar4->klass->vtable).get_IsActive_1.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable).get_IsActive_1.method);
      if (cVar5 != '\0') {
        pGVar4 = (this->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar1 = (float)((uint)(pGVar4->fields)._totalScale1 & _UNK_?);
      }
      lVar3 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar3 = 0xd0;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 != 0) {
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar2 = 0xd0;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x14) *
               *(float *)(lVar3 + 0x28) * zoomFactor * fVar1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar1 = (float)(*pcVar6)();
  return fVar1;
}


/* Single GetZoomFactor(Camera) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor
                (GizmoPlaneSlider3D *this,Camera *camera,MethodInfo *method)

{
  lVar1 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar1 = 0xd0;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x18) == '\0') {
      return _UNK_?;
    }
    pGVar2 = (this->fields)._._handle;
    if (pGVar2 != (GizmoHandle *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__CameraEx);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = (pGVar2->fields)._zoomFactorTransform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        fVar4 = (pGVar3->fields)._position3D.z;
        uVar5._0_4_ = (pGVar3->fields)._position3D.x;
        uVar5._4_4_ = (pGVar3->fields)._position3D.y;
        if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        aVStack_6[0]._0_8_ = uVar5;
        aVStack_6[0].z = fVar4;
        fVar4 = CameraEx::CameraEx_EstimateZoomFactor(camera,aVStack_6,(MethodInfo *)0x0);
        return fVar4;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      fVar4 = (float)(*pcVar7)();
      return fVar4;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  fVar4 = (float)(*pcVar7)();
  return fVar4;
}


/* Void MakeSliderPlane(GizmoTransform, PlaneId, GizmoLineSlider3D, GizmoLineSlider3D, Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
               (GizmoPlaneSlider3D *this,GizmoTransform *sliderPlaneTransform,PlaneId__Enum planeId,
               GizmoLineSlider3D *firstAxisSlider,GizmoLineSlider3D *secondAxisSlider,Camera *camera
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sliderPlaneTransform != (GizmoTransform *)0x0) {
    quadrantId = GizmoTransform::GizmoTransform_Get3DQuadrantFacingCamera
                           (sliderPlaneTransform,planeId,camera,(MethodInfo *)0x0);
    GizmoPlaneSlider3D_AlignToQuadrant
              (this,sliderPlaneTransform,planeId,quadrantId,1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar1 = PlaneIdHelper::PlaneIdHelper_GetFirstAxisDescriptor
                        (planeId,quadrantId,(MethodInfo *)0x0);
    uVar2 = _UNK_?;
    if ((pAVar1 != (AxisDescriptor *)0x0) &&
       (pVVar3 = (sliderPlaneTransform->fields)._axes3D, pVVar3 != (Vector3__Array *)0x0)) {
      uVar4 = (pAVar1->fields)._index;
      if ((uint)pVVar3->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6._0_4_ = pVVar3->vector[(int)uVar4].x;
      uVar6._4_4_ = pVVar3->vector[(int)uVar4].y;
      fVar7 = pVVar3->vector[(int)uVar4].z;
      VStack_8._0_8_ = uVar6;
      if ((pAVar1->fields)._sign == 1) {
        fVar7 = (float)((uint)pVVar3->vector[(int)uVar4].z ^ _UNK_?);
        VStack_8.y = (float)((uint)uVar6._4_4_ ^ _UNK_?);
        VStack_8.x = (float)((uint)(float)uVar6 ^ _UNK_?);
        VStack_9._0_8_ = uVar6;
      }
      pAVar1 = PlaneIdHelper::PlaneIdHelper_GetSecondAxisDescriptor
                          (planeId,quadrantId,(MethodInfo *)0x0);
      if ((pAVar1 != (AxisDescriptor *)0x0) &&
         (pVVar3 = (sliderPlaneTransform->fields)._axes3D, pVVar3 != (Vector3__Array *)0x0)) {
        uVar4 = (pAVar1->fields)._index;
        if ((uint)pVVar3->max_length <= uVar4) goto code_?;
        uVar10._0_4_ = pVVar3->vector[(int)uVar4].x;
        uVar10._4_4_ = pVVar3->vector[(int)uVar4].y;
        fVar11 = pVVar3->vector[(int)uVar4].z;
        VStack_9._0_8_ = uVar10;
        if ((pAVar1->fields)._sign == 1) {
          fVar11 = (float)((uint)pVVar3->vector[(int)uVar4].z ^ uVar2);
          VStack_9.y = (float)((uint)uVar10._4_4_ ^ uVar2);
          VStack_9.x = (float)((uint)(float)uVar10 ^ uVar2);
          VStack_12._0_8_ = uVar10;
        }
        fVar13 = VStack_8.x;
        fVar14 = VStack_8.y;
        if (secondAxisSlider != (GizmoLineSlider3D *)0x0) {
          VStack_8.z = fVar7;
          fVar15 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealSizeAlongDirection
                             (secondAxisSlider,camera,&VStack_8,(MethodInfo *)0x0);
          fVar16 = _UNK_?;
          fVar17 = fVar13 * fVar15 * _UNK_?;
          fVar14 = fVar14 * fVar15 * _UNK_?;
          fVar15 = fVar7 * fVar15 * _UNK_?;
          fVar7 = VStack_9.x;
          fVar13 = VStack_9.y;
          if (firstAxisSlider != (GizmoLineSlider3D *)0x0) {
            VStack_9.z = fVar11;
            fVar18 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealSizeAlongDirection
                               (firstAxisSlider,camera,&VStack_9,(MethodInfo *)0x0);
            lVar19 = 0xd8;
            if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              lVar19 = 0xd0;
            }
            lVar19 = *(longlong *)((longlong)&this->klass + lVar19);
            if (lVar19 != 0) {
              if (*(int *)(lVar19 + 0x10) != 0) {
                return;
              }
              VStack_12.x = (sliderPlaneTransform->fields)._position3D.x;
              VStack_12.y = (sliderPlaneTransform->fields)._position3D.y;
              fVar20 = (sliderPlaneTransform->fields)._position3D.z;
              fVar7 = fVar7 * fVar18 * fVar16 + fVar17 + VStack_12.x;
              fVar13 = fVar13 * fVar18 * fVar16 + fVar14 + VStack_12.y;
              pGVar21 = (this->fields)._transform;
              if (pGVar21 != (GizmoTransform *)0x0) {
                pQVar22 = (this->fields)._quad;
                VStack_8.x = (pGVar21->fields)._position3D.x;
                VStack_8.y = (pGVar21->fields)._position3D.y;
                fVar14 = (pGVar21->fields)._position3D.z;
                if (pQVar22 != (QuadShape3D *)0x0) {
                  aQStack_23[0].x = (pQVar22->fields)._rotation.x;
                  aQStack_23[0].y = (pQVar22->fields)._rotation.y;
                  aQStack_23[0].z = (pQVar22->fields)._rotation.z;
                  aQStack_23[0].w = (pQVar22->fields)._rotation.w;
                  VStack_9.z = (pQVar22->fields)._center.z;
                  VStack_9.x = (pQVar22->fields)._center.x;
                  VStack_9.y = (pQVar22->fields)._center.y;
                  pVVar24 = QuadMath::QuadMath_Calc3DQuadCorner
                                      (&VStack_12,&VStack_9,(pQVar22->fields)._size,aQStack_23,
                                       QuadCorner__Enum_BottomLeft,(MethodInfo *)0x0);
                  uVar25 = pVVar24->x;
                  uVar26 = pVVar24->y;
                  fVar7 = (VStack_8.x - (float)uVar25) + fVar7;
                  fVar13 = (VStack_8.y - (float)uVar26) + fVar13;
                  fVar11 = (fVar14 - pVVar24->z) + fVar11 * fVar18 * fVar16 + fVar15 + fVar20;
                  pGVar21 = (this->fields)._transform;
                  if (pGVar21 != (GizmoTransform *)0x0) {
                    if ((pGVar21->fields)._firingChanged3DEvent != 0) {
                      return;
                    }
                    uVar27 = (pGVar21->fields)._position3D.x;
                    fVar16 = (float)uVar27 - fVar7;
                    fVar15 = (pGVar21->fields)._position3D.y - fVar13;
                    fVar14 = (pGVar21->fields)._position3D.z - fVar11;
                    if (fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14 < _UNK_?) {
                      return;
                    }
                    (pGVar21->fields)._position3D.x = fVar7;
                    (pGVar21->fields)._position3D.y = fVar13;
                    (pGVar21->fields)._position3D.z = fVar11;
                    GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar21,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnCanHoverHandle(Int32, Gizmo, GizmoHandleHoverData, YesNoAnswer) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnCanHoverHandle
               (GizmoPlaneSlider3D *this,int32_t handleId,Gizmo *gizmo,
               GizmoHandleHoverData *hoverData,YesNoAnswer *answer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
  if ((handleId == (pGVar1->fields)._id) && (gizmo == (this->fields)._._gizmo)) {
    lVar2 = 0xd8;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if (lVar2 == 0) goto code_?;
    if (*(int *)(lVar2 + 0x10) == 2) {
      lVar2 = 200;
      if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
        lVar2 = 0xc0;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
      if (lVar2 == 0) goto code_?;
      if (*(char *)(lVar2 + 0x24) != '\0') {
        if ((hoverData == (GizmoHandleHoverData *)0x0) ||
           (pGVar3 = (this->fields)._transform, pGVar3 == (GizmoTransform *)0x0))
        goto code_?;
        uVar4 = (hoverData->fields)._hoverPoint.x;
        uVar5 = (hoverData->fields)._hoverPoint.y;
        aVStack_6[0].x = (pGVar3->fields)._position3D.x;
        aVStack_6[0].y = (pGVar3->fields)._position3D.y;
        fVar7 = (float)uVar4 - aVStack_6[0].x;
        fVar8 = (hoverData->fields)._hoverPoint.z - (pGVar3->fields)._position3D.z;
        fVar9 = (float)uVar5 - aVStack_6[0].y;
        VStack_10.y = fVar9;
        VStack_10.x = fVar7;
        VStack_10.z = fVar8;
        fVar11 = (float)FUN_?(&VStack_10);
        if (_UNK_? < fVar11) {
          fVar8 = fVar8 / fVar11;
          VStack_10.y = fVar9 / fVar11;
          VStack_10.x = fVar7 / fVar11;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_10.x = (pVVar12->zeroVector).x;
          VStack_10.y = (pVVar12->zeroVector).y;
          fVar8 = (pVVar12->zeroVector).z;
        }
        this_00 = (this->fields)._._gizmo;
        if (this_00 == (Gizmo *)0x0) goto code_?;
        camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
        uVar13._0_4_ = (hoverData->fields)._hoverPoint.x;
        uVar13._4_4_ = (hoverData->fields)._hoverPoint.y;
        aVStack_6[0].z = (hoverData->fields)._hoverPoint.z;
        fVar11 = VStack_10.y;
        if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        VStack_10.y = fVar11;
        VStack_10.z = fVar8;
        aVStack_6[0]._0_8_ = uVar13;
        bVar14 = CameraEx::CameraEx_IsPointFacingCamera
                          (camera,aVStack_6,&VStack_10,(MethodInfo *)0x0);
        if (answer == (YesNoAnswer *)0x0) goto code_?;
        if (bVar14 == 0) {
          (answer->fields)._hasNo = 1;
          return;
        }
        goto code_?;
      }
    }
  }
  if (answer == (YesNoAnswer *)0x0) {
code_?:
    FUN_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
code_?:
  (answer->fields)._hasYes = 1;
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnGizmoAttemptHandleDragBegin
               (GizmoPlaneSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  lVar2 = VStack_3._0_8_;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (handleId != (pGVar1->fields)._id) {
      return;
    }
    if ((this->fields)._dragChannel == 1) {
      pGVar4 = (this->fields)._transform;
      lStack_5 = 0;
      uStack_6 = (ulonglong)uStack_6._4_4_ << 0x20;
      if ((pGVar4 != (GizmoTransform *)0x0) &&
         (pVVar7 = (pGVar4->fields)._axes3D, pVVar7 != (Vector3__Array *)0x0)) {
        if ((int)pVVar7->max_length == 0) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar9._0_4_ = pVVar7->vector[0].x;
        lVar9._4_4_ = pVVar7->vector[0].y;
        uStack_6 = lVar9 << 0x20;
        fStack_10 = pVVar7->vector[0].z;
        pGVar4 = (this->fields)._transform;
        fStack_11 = (float)lVar9._4_4_;
        aGStack_12[0]._0_8_ = lVar9;
        if ((pGVar4 != (GizmoTransform *)0x0) &&
           (pVVar7 = (pGVar4->fields)._axes3D, pVVar7 != (Vector3__Array *)0x0)) {
          if ((uint)pVVar7->max_length < 2) goto code_?;
          aGStack_12[0].AxisIndex0 = pVVar7->vector[1].x;
          aGStack_12[0].AxisIndex1 = pVVar7->vector[1].y;
          fVar13 = pVVar7->vector[1].z;
          pGVar4 = (this->fields)._transform;
          fStack_14 = (float)aGStack_12[0].AxisIndex0;
          fStack_15 = (float)aGStack_12[0].AxisIndex1;
          if (pGVar4 != (GizmoTransform *)0x0) {
            lStack_5._0_4_ = (pGVar4->fields)._position3D.x;
            lStack_5._4_4_ = (pGVar4->fields)._position3D.y;
            uStack_6 = CONCAT44((undefined4)lVar9,(pGVar4->fields)._position3D.z);
            lVar9 = 200;
            if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
              lVar9 = 0xc0;
            }
            lVar9 = *(longlong *)((longlong)&this->klass + lVar9);
            if (lVar9 != 0) {
              uVar16 = *(undefined4 *)(lVar9 + 0x28);
              uVar17 = 200;
              if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
                uVar17 = 0xc0;
              }
              lVar9 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar17);
              if (lVar9 != 0) {
                pGVar18 = (this->fields)._dblAxisOffsetDrag;
                fVar19 = *(float *)(lVar9 + 0x2c);
                if (pGVar18 != (GizmoDblAxisOffsetDrag3D *)0x0) {
                  cVar20 = (*(pGVar18->klass->vtable).get_IsActive_1.methodPtr)
                                     (pGVar18,(pGVar18->klass->vtable).get_IsActive_1.method);
                  if (cVar20 != '\0') {
                    return;
                  }
                  (pGVar18->fields)._workData.DragOrigin.x = (float)(undefined4)lStack_5;
                  (pGVar18->fields)._workData.DragOrigin.y = (float)lStack_5._4_4_;
                  *(longlong *)&(pGVar18->fields)._workData.DragOrigin.z = uStack_6;
                  (pGVar18->fields)._workData.Axis0.y = fStack_11;
                  (pGVar18->fields)._workData.Axis0.z = fStack_10;
                  (pGVar18->fields)._workData.Axis1.x = fStack_14;
                  (pGVar18->fields)._workData.Axis1.y = fStack_15;
                  *(ulonglong *)&(pGVar18->fields)._workData.Axis1.z = CONCAT44(uVar16,fVar13);
                  (pGVar18->fields)._workData.SnapStep1 = fVar19;
                  return;
                }
              }
            }
          }
        }
      }
    }
    else if ((this->fields)._dragChannel == 2) {
      pGVar4 = (this->fields)._transform;
      lStack_5 = 0;
      uStack_6 = (ulonglong)uStack_6._4_4_ << 0x20;
      if ((pGVar4 != (GizmoTransform *)0x0) &&
         (pVVar7 = (pGVar4->fields)._axes3D, pVVar7 != (Vector3__Array *)0x0)) {
        if ((uint)pVVar7->max_length < 3) goto code_?;
        aGStack_12[0].AxisIndex0 = pVVar7->vector[2].x;
        aGStack_12[0].AxisIndex1 = pVVar7->vector[2].y;
        uStack_6 = aGStack_12[0]._0_8_ << 0x20;
        fStack_10 = pVVar7->vector[2].z;
        pGVar4 = (this->fields)._transform;
        fStack_11 = (float)aGStack_12[0].AxisIndex1;
        if (pGVar4 != (GizmoTransform *)0x0) {
          lStack_5._0_4_ = (pGVar4->fields)._position3D.x;
          lStack_5._4_4_ = (pGVar4->fields)._position3D.y;
          fVar13 = (pGVar4->fields)._position3D.z;
          uStack_6 = CONCAT44(aGStack_12[0].AxisIndex0,fVar13);
          lVar9 = 200;
          if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
            lVar9 = 0xc0;
          }
          lVar9 = *(longlong *)((longlong)&this->klass + lVar9);
          if (lVar9 != 0) {
            fStack_14 = *(float *)(lVar9 + 0x34);
            uVar17 = 200;
            if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
              uVar17 = 0xc0;
            }
            lVar9 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar17);
            if (lVar9 != 0) {
              this_01 = (this->fields)._rotationDrag;
              fStack_15 = *(float *)(lVar9 + 0x30);
              if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
                aGStack_12[0].Axis0.x = fStack_10;
                aGStack_12[0].DragOrigin.z = (float)aGStack_12[0].AxisIndex1;
                aGStack_12[0].Axis0.z = fStack_15;
                aGStack_12[0].Axis0.y = fStack_14;
                aGStack_12[0].DragOrigin.x = fVar13;
                aGStack_12[0].DragOrigin.y = (float)aGStack_12[0].AxisIndex0;
                aGStack_12[0]._0_8_ = lStack_5;
                GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                          (this_01,(GizmoSglAxisRotationDrag3D_WorkData *)aGStack_12,
                           (MethodInfo *)0x0);
                pGVar4 = (this->fields)._transform;
                lVar2 = VStack_3._0_8_;
                if ((pGVar4 != (GizmoTransform *)0x0) &&
                   (pVVar7 = (pGVar4->fields)._axes3D, pVVar7 != (Vector3__Array *)0x0)) {
                  if ((uint)pVVar7->max_length < 3) goto code_?;
                  lVar2._0_4_ = pVVar7->vector[2].x;
                  lVar2._4_4_ = pVVar7->vector[2].y;
                  fVar13 = pVVar7->vector[2].z;
                  pGVar4 = (this->fields)._transform;
                  if (pGVar4 != (GizmoTransform *)0x0) {
                    VStack_21.x = (pGVar4->fields)._position3D.x;
                    VStack_21.y = (pGVar4->fields)._position3D.y;
                    fVar19 = (pGVar4->fields)._position3D.z;
                    VStack_3._0_8_ = lVar2;
                    VStack_3.z = fVar13;
                    fVar22 = (float)FUN_?(&VStack_3);
                    if (_UNK_? < fVar22) {
                      fVar13 = fVar13 / fVar22;
                      lVar2 = CONCAT44((float)lVar2._4_4_ / fVar22,
                                        (float)(undefined4)lVar2 / fVar22);
                    }
                    else {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
                      lVar2._0_4_ = (pVVar23->zeroVector).x;
                      lVar2._4_4_ = (pVVar23->zeroVector).y;
                      fVar13 = (pVVar23->zeroVector).z;
                    }
                    VStack_3.x = (float)lVar2;
                    this_02 = (this->fields)._._gizmo;
                    VStack_3.y = (float)((ulonglong)lVar2 >> 0x20);
                    aGStack_12[0]._0_8_ = lVar2;
                    if (this_02 != (Gizmo *)0x0) {
                      aGStack_12[0].DragOrigin.z = (this_02->fields)._hoverInfo._hoverPoint.y;
                      aGStack_12[0].Axis0.x = (this_02->fields)._hoverInfo._hoverPoint.z;
                      fVar22 = (this_02->fields)._hoverInfo._hoverPoint.x;
                      fVar19 = aGStack_12[0].DragOrigin.z * VStack_3.y + fVar22 * VStack_3.x +
                               aGStack_12[0].Axis0.x * fVar13 +
                               (float)((uint)(VStack_21.y * VStack_3.y + VStack_21.x * VStack_3.x
                                             + fVar19 * fVar13) ^ _UNK_?);
                      uVar24._0_4_ = fVar22 - VStack_3.x * fVar19;
                      fVar22 = aGStack_12[0].DragOrigin.z - VStack_3.y * fVar19;
                      fVar13 = aGStack_12[0].Axis0.x - fVar13 * fVar19;
                      pGVar4 = (this->fields)._transform;
                      this_03 = (this->fields)._rotationArc;
                      if ((pGVar4 != (GizmoTransform *)0x0) &&
                         (pVVar7 = (pGVar4->fields)._axes3D, pVVar7 != (Vector3__Array *)0x0)) {
                        VStack_3._0_8_ = lVar2;
                        if ((uint)pVVar7->max_length < 3) goto code_?;
                        lVar25._0_4_ = pVVar7->vector[2].x;
                        lVar25._4_4_ = pVVar7->vector[2].y;
                        fVar19 = pVVar7->vector[2].z;
                        pGVar4 = (this->fields)._transform;
                        aGStack_12[0]._0_8_ = lVar25;
                        if (pGVar4 != (GizmoTransform *)0x0) {
                          uVar26._0_4_ = (pGVar4->fields)._position3D.x;
                          uVar26._4_4_ = (pGVar4->fields)._position3D.y;
                          fVar27 = (pGVar4->fields)._position3D.z;
                          if (this_02 != (Gizmo *)0x0) {
                            camera = Gizmo::Gizmo_get_FocusCamera(this_02,(MethodInfo *)0x0);
                            fVar28 = GizmoPlaneSlider3D_GetZoomFactor(this,camera,(MethodInfo *)0x0)
                            ;
                            fVar28 = GizmoPlaneSlider3D_GetRealCircleRadius
                                               (this,fVar28,(MethodInfo *)0x0);
                            lVar2 = VStack_3._0_8_;
                            if (this_03 != (GizmoRotationArc3D *)0x0) {
                              uVar24._4_4_ = fVar22;
                              aGStack_12[0].DragOrigin.x = fVar19;
                              VStack_3._0_8_ = uVar26;
                              VStack_3.z = fVar27;
                              VStack_21._0_8_ = uVar24;
                              VStack_21.z = fVar13;
                              aGStack_12[0]._0_8_ = lVar25;
                              GizmoRotationArc3D::GizmoRotationArc3D_SetArcData
                                        (this_03,(Vector3 *)aGStack_12,&VStack_3,&VStack_21,fVar28,
                                         (MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((this->fields)._dragChannel != 3) {
        return;
      }
      pGVar4 = (this->fields)._transform;
      uStack_6 = 0;
      fStack_11 = 0.0;
      if ((pGVar4 != (GizmoTransform *)0x0) &&
         (pVVar7 = (pGVar4->fields)._axes3D, pVVar7 != (Vector3__Array *)0x0)) {
        if ((int)pVVar7->max_length == 0) goto code_?;
        lVar29._0_4_ = pVVar7->vector[0].x;
        lVar29._4_4_ = pVVar7->vector[0].y;
        fStack_15 = pVVar7->vector[0].z;
        pGVar4 = (this->fields)._transform;
        fStack_10 = (float)(undefined4)lVar29;
        fStack_14 = (float)lVar29._4_4_;
        aGStack_12[0]._0_8_ = lVar29;
        if ((pGVar4 != (GizmoTransform *)0x0) &&
           (pVVar7 = (pGVar4->fields)._axes3D, pVVar7 != (Vector3__Array *)0x0)) {
          if ((uint)pVVar7->max_length < 2) goto code_?;
          aGStack_12[0].Axis1.x = pVVar7->vector[1].x;
          aGStack_12[0].Axis1.y = pVVar7->vector[1].y;
          fStack_30 = pVVar7->vector[1].z;
          pGVar4 = (this->fields)._transform;
          uStack_31 = aGStack_12[0].Axis1.x;
          uStack_32 = aGStack_12[0].Axis1.y;
          aGStack_12[0]._0_8_ = aGStack_12[0].Axis1._0_8_;
          if (pGVar4 != (GizmoTransform *)0x0) {
            uStack_6._0_4_ = (pGVar4->fields)._position3D.x;
            uStack_6._4_4_ = (uint)(pGVar4->fields)._position3D.y;
            fStack_11 = (pGVar4->fields)._position3D.z;
            lStack_5._0_4_ = (this->fields)._scaleDragAxisIndexRight;
            lStack_5._4_4_ = (this->fields)._scaleDragAxisIndexUp;
            lVar9 = 200;
            if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
              lVar9 = 0xc0;
            }
            lVar9 = *(longlong *)((longlong)&this->klass + lVar9);
            if (lVar9 != 0) {
              this_00 = (this->fields)._scaleDrag;
              fStack_33 = *(float *)(lVar9 + 0x44);
              if (this_00 != (GizmoDblAxisScaleDrag3D *)0x0) {
                aGStack_12[0].Axis0.x = (float)(undefined4)lVar29;
                aGStack_12[0].DragOrigin.z = fStack_11;
                aGStack_12[0].Axis0.z = fStack_15;
                aGStack_12[0].Axis0.y = (float)lVar29._4_4_;
                aGStack_12[0].SnapStep = fStack_33;
                aGStack_12[0].Axis1.z = fStack_30;
                aGStack_12[0]._0_8_ = lStack_5;
                aGStack_12[0].DragOrigin._0_8_ = uStack_6;
                GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_SetWorkData
                          (this_00,aGStack_12,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  VStack_3._0_8_ = lVar2;
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnGizmoPostEnabled
               (GizmoPlaneSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    lVar3 = 0xd8;
    lVar4 = 0xd8;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar4 = 0xd0;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    if (lVar4 != 0) {
      fVar5 = _UNK_?;
      if (*(char *)(lVar4 + 0x18) != '\0') {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      lVar4 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd0;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if ((lVar4 != 0) &&
         (pIVar6 = (this->fields)._controllers,
         pIVar6 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
        uVar7 = *(uint *)(lVar4 + 0x10);
        if ((uint)pIVar6->max_length <= uVar7) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (pIVar6->vector[(int)uVar7] != (IGizmoPlaneSlider3DController *)0x0) {
          FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider3DController);
          lVar4 = 0xd8;
          if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar4 = 0xd0;
          }
          lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
          if ((lVar4 != 0) &&
             (pIVar6 = (this->fields)._controllers,
             pIVar6 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
            uVar7 = *(uint *)(lVar4 + 0x10);
            if ((uint)pIVar6->max_length <= uVar7) goto code_?;
            if (pIVar6->vector[(int)uVar7] != (IGizmoPlaneSlider3DController *)0x0) {
              FUN_?(2,TypeInfo__RTG__IGizmoPlaneSlider3DController,
                            pIVar6->vector[(int)uVar7],fVar5);
              if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                lVar3 = 0xd0;
              }
              lVar4 = *(longlong *)((longlong)&this->klass + lVar3);
              if ((lVar4 != 0) &&
                 (pIVar6 = (this->fields)._controllers,
                 pIVar6 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
                uVar7 = *(uint *)(lVar4 + 0x10);
                if ((uint)pIVar6->max_length <= uVar7) goto code_?;
                pIVar9 = pIVar6->vector[(int)uVar7];
                if (pIVar9 != (IGizmoPlaneSlider3DController *)0x0) {
                  pIVar10 = pIVar9->klass;
                  uVar11 = 0;
                  uVar12._0_1_ = (pIVar10->_1).rank;
                  uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
                  if (uVar12 != 0) {
                    do {
                      if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
                          (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider3DController) {
                        ppIVar13 = &(&(pIVar10->vtable).UpdateHandles)
                                   [pIVar10->interfaceOffsets[uVar11].offset + 1].methodPtr;
                        goto code_?;
                      }
                      uVar14 = (short)uVar11 + 1;
                      uVar11 = (ulonglong)uVar14;
                    } while (uVar14 < uVar12);
                  }
                  ppIVar13 = (Il2CppMethodPointer *)
                            FUN_?(pIVar9,TypeInfo__RTG__IGizmoPlaneSlider3DController,1,
                                          fVar5,uVar1,uVar2,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**ppIVar13)(pIVar9,fVar5,(MethodInfo *)ppIVar13[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnGizmoPreUpdateBegin
               (GizmoPlaneSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  lVar3 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar3 = 0xd0;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if ((lVar3 != 0) &&
     (pIVar4 = (this->fields)._controllers, pIVar4 != (IGizmoPlaneSlider3DController__Array *)0x0))
  {
    uVar5 = *(uint *)(lVar3 + 0x10);
    if ((uint)pIVar4->max_length <= uVar5) goto code_?;
    if (pIVar4->vector[(int)uVar5] != (IGizmoPlaneSlider3DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider3DController);
      fVar6 = _UNK_?;
      lVar3 = 200;
      if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
        lVar3 = 0xc0;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if ((lVar3 != 0) &&
         (pGVar7 = (this->fields)._dblAxisOffsetDrag, pGVar7 != (GizmoDblAxisOffsetDrag3D *)0x0)) {
        fVar8 = *(float *)(lVar3 + 0x48);
        fVar9 = _UNK_?;
        if (_UNK_? <= fVar8) {
          fVar9 = fVar8;
        }
        (pGVar7->fields)._._sensitivity = fVar9;
        uVar10 = 200;
        if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
          uVar10 = 0xc0;
        }
        lVar3 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar10);
        if ((lVar3 != 0) &&
           (pGVar11 = (this->fields)._rotationDrag, pGVar11 != (GizmoSglAxisRotationDrag3D *)0x0)) {
          fVar8 = *(float *)(lVar3 + 0x4c);
          fVar9 = fVar6;
          if (fVar6 <= fVar8) {
            fVar9 = fVar8;
          }
          (pGVar11->fields)._._sensitivity = fVar9;
          lVar3 = 200;
          if ((this->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
            lVar3 = 0xc0;
          }
          lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
          if ((lVar3 != 0) &&
             (pGVar12 = (this->fields)._scaleDrag, pGVar12 != (GizmoDblAxisScaleDrag3D *)0x0)) {
            fVar8 = *(float *)(lVar3 + 0x50);
            if (fVar6 <= fVar8) {
              fVar6 = fVar8;
            }
            (pGVar12->fields)._._sensitivity = fVar6;
            this_00 = (this->fields)._._gizmo;
            if (this_00 != (Gizmo *)0x0) {
              camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
              uVar10 = 0xd8;
              if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                uVar10 = 0xd0;
              }
              lVar3 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar10);
              if (lVar3 != 0) {
                fVar6 = _UNK_?;
                if (*(char *)(lVar3 + 0x18) != '\0') {
                  this_01 = (this->fields)._._handle;
                  if (this_01 == (GizmoHandle *)0x0) goto code_?;
                  fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
                }
                pIVar4 = (this->fields)._controllers;
                if (pIVar4 != (IGizmoPlaneSlider3DController__Array *)0x0) {
                  if ((uint)pIVar4->max_length <= uVar5) {
code_?:
                    FUN_?();
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  if (pIVar4->vector[(int)uVar5] != (IGizmoPlaneSlider3DController *)0x0) {
                    FUN_?(1,TypeInfo__RTG__IGizmoPlaneSlider3DController,
                                  pIVar4->vector[(int)uVar5],fVar6);
                    pIVar4 = (this->fields)._controllers;
                    if (pIVar4 != (IGizmoPlaneSlider3DController__Array *)0x0) {
                      if ((uint)pIVar4->max_length <= uVar5) goto code_?;
                      pIVar14 = pIVar4->vector[(int)uVar5];
                      if (pIVar14 != (IGizmoPlaneSlider3DController *)0x0) {
                        pIVar15 = pIVar14->klass;
                        uVar16 = 0;
                        uVar17._0_1_ = (pIVar15->_1).rank;
                        uVar17._1_1_ = (pIVar15->_1).minimumAlignment;
                        if (uVar17 != 0) {
                          do {
                            if (pIVar15->interfaceOffsets[uVar16].interfaceType ==
                                (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider3DController) {
                              ppIVar18 = &(&(pIVar15->vtable).UpdateHandles)
                                          [pIVar15->interfaceOffsets[uVar16].offset + 2].methodPtr;
                              goto code_?;
                            }
                            uVar19 = (short)uVar16 + 1;
                            uVar16 = (ulonglong)uVar19;
                          } while (uVar19 < uVar17);
                        }
                        ppIVar18 = (Il2CppMethodPointer *)
                                   FUN_?(pIVar14,TypeInfo__RTG__IGizmoPlaneSlider3DController
                                                 ,2,fVar6,uVar1,uVar2,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (**ppIVar18)(pIVar14,fVar6,(MethodInfo *)ppIVar18[1]);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnHoverableStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnHoverableStateChanged
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set3DShapeHoverable
              (pGVar1,(this->fields)._quadIndex,(this->fields)._._isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._handle;
    if (pGVar1 != (GizmoHandle *)0x0) {
      GizmoHandle::GizmoHandle_Set3DShapeHoverable
                (pGVar1,(this->fields)._raTriangleIndex,(this->fields)._._isHoverable,
                 (MethodInfo *)0x0);
      pGVar1 = (this->fields)._._handle;
      if (pGVar1 != (GizmoHandle *)0x0) {
        bVar2 = (this->fields)._._isHoverable;
        uVar3 = (this->fields)._circleIndex;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar4 = (pGVar1->fields)._3DShapes;
        if (pLVar4 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
          if ((uint)(pLVar4->fields)._size <= uVar3) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pGVar6 = (pLVar4->fields)._items;
          if (pGVar6 != (GizmoHandleShape3D__Array *)0x0) {
            if ((uint)pGVar6->max_length <= uVar3) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (pGVar6->vector[(int)uVar3] != (GizmoHandleShape3D *)0x0) {
              (pGVar6->vector[(int)uVar3]->fields)._isHoverable = bVar2;
              return;
            }
          }
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnTransformChanged
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((changeData.ChangeReason != 1) && (iStackX_1c = changeData.TRSDimension, iStackX_1c != 2)) {
    return;
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    lVar1 = 0xd8;
    lVar2 = 0xd8;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if (lVar2 != 0) {
      fVar3 = _UNK_?;
      if (*(char *)(lVar2 + 0x18) != '\0') {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto DAT_?;
        fVar3 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar1 = 0xd0;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar2 != 0) &&
         (pIVar4 = (this->fields)._controllers,
         pIVar4 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
        uVar5 = *(uint *)(lVar2 + 0x10);
        if ((uint)pIVar4->max_length <= uVar5) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pIVar4->vector[(int)uVar5] != (IGizmoPlaneSlider3DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoPlaneSlider3DController,pIVar4->vector[(int)uVar5],
                        fVar3);
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnVisibilityStateChanged
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  lVar3 = 0xd8;
  lVar4 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar4 = 0xd0;
  }
  lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
  if ((lVar4 != 0) &&
     (pIVar5 = (this->fields)._controllers, pIVar5 != (IGizmoPlaneSlider3DController__Array *)0x0))
  {
    uVar6 = *(uint *)(lVar4 + 0x10);
    if ((uint)pIVar5->max_length <= uVar6) goto code_?;
    if (pIVar5->vector[(int)uVar6] != (IGizmoPlaneSlider3DController *)0x0) {
      FUN_?(0);
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        uVar6 = 0xd8;
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          uVar6 = 0xd0;
        }
        lVar4 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar6);
        if (lVar4 != 0) {
          fVar7 = _UNK_?;
          if (*(char *)(lVar4 + 0x18) != '\0') {
            this_01 = (this->fields)._._handle;
            if (this_01 == (GizmoHandle *)0x0) goto code_?;
            fVar7 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
          }
          lVar4 = 0xd8;
          if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar4 = 0xd0;
          }
          lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
          if ((lVar4 != 0) &&
             (pIVar5 = (this->fields)._controllers,
             pIVar5 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
            uVar6 = *(uint *)(lVar4 + 0x10);
            if ((uint)pIVar5->max_length <= uVar6) {
code_?:
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (pIVar5->vector[(int)uVar6] != (IGizmoPlaneSlider3DController *)0x0) {
              FUN_?(2,TypeInfo__RTG__IGizmoPlaneSlider3DController,
                            pIVar5->vector[(int)uVar6],fVar7);
              if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                lVar3 = 0xd0;
              }
              lVar4 = *(longlong *)((longlong)&this->klass + lVar3);
              if ((lVar4 != 0) &&
                 (pIVar5 = (this->fields)._controllers,
                 pIVar5 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
                uVar6 = *(uint *)(lVar4 + 0x10);
                if ((uint)pIVar5->max_length <= uVar6) goto code_?;
                pIVar9 = pIVar5->vector[(int)uVar6];
                if (pIVar9 != (IGizmoPlaneSlider3DController *)0x0) {
                  pIVar10 = pIVar9->klass;
                  uVar11 = 0;
                  uVar12._0_1_ = (pIVar10->_1).rank;
                  uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
                  if (uVar12 != 0) {
                    do {
                      if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
                          (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider3DController) {
                        ppIVar13 = &(&(pIVar10->vtable).UpdateHandles)
                                   [pIVar10->interfaceOffsets[uVar11].offset + 1].methodPtr;
                        goto code_?;
                      }
                      uVar14 = (short)uVar11 + 1;
                      uVar11 = (ulonglong)uVar14;
                    } while (uVar14 < uVar12);
                  }
                  ppIVar13 = (Il2CppMethodPointer *)
                            FUN_?(pIVar9,TypeInfo__RTG__IGizmoPlaneSlider3DController,1,
                                          fVar7,uVar1,uVar2,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**ppIVar13)(pIVar9,*ppIVar13,(MethodInfo *)ppIVar13[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    lVar3 = 0xd8;
    lVar4 = 0xd8;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar4 = 0xd0;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    if (lVar4 != 0) {
      fVar5 = _UNK_?;
      if (*(char *)(lVar4 + 0x18) != '\0') {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      lVar4 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd0;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if ((lVar4 != 0) &&
         (pIVar6 = (this->fields)._controllers,
         pIVar6 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
        uVar7 = *(uint *)(lVar4 + 0x10);
        if ((uint)pIVar6->max_length <= uVar7) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (pIVar6->vector[(int)uVar7] != (IGizmoPlaneSlider3DController *)0x0) {
          FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider3DController);
          lVar4 = 0xd8;
          if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar4 = 0xd0;
          }
          lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
          if ((lVar4 != 0) &&
             (pIVar6 = (this->fields)._controllers,
             pIVar6 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
            uVar7 = *(uint *)(lVar4 + 0x10);
            if ((uint)pIVar6->max_length <= uVar7) goto code_?;
            if (pIVar6->vector[(int)uVar7] != (IGizmoPlaneSlider3DController *)0x0) {
              FUN_?(2,TypeInfo__RTG__IGizmoPlaneSlider3DController,
                            pIVar6->vector[(int)uVar7],fVar5);
              if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                lVar3 = 0xd0;
              }
              lVar4 = *(longlong *)((longlong)&this->klass + lVar3);
              if ((lVar4 != 0) &&
                 (pIVar6 = (this->fields)._controllers,
                 pIVar6 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
                uVar7 = *(uint *)(lVar4 + 0x10);
                if ((uint)pIVar6->max_length <= uVar7) goto code_?;
                pIVar9 = pIVar6->vector[(int)uVar7];
                if (pIVar9 != (IGizmoPlaneSlider3DController *)0x0) {
                  pIVar10 = pIVar9->klass;
                  uVar11 = 0;
                  uVar12._0_1_ = (pIVar10->_1).rank;
                  uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
                  if (uVar12 != 0) {
                    do {
                      if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
                          (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider3DController) {
                        ppIVar13 = &(&(pIVar10->vtable).UpdateHandles)
                                   [pIVar10->interfaceOffsets[uVar11].offset + 1].methodPtr;
                        goto code_?;
                      }
                      uVar14 = (short)uVar11 + 1;
                      uVar11 = (ulonglong)uVar14;
                    } while (uVar14 < uVar12);
                  }
                  ppIVar13 = (Il2CppMethodPointer *)
                            FUN_?(pIVar9,TypeInfo__RTG__IGizmoPlaneSlider3DController,1,
                                          fVar5,uVar1,uVar2,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**ppIVar13)(pIVar9,fVar5,(MethodInfo *)ppIVar13[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_RemoveTargetTransform
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_01 = (this->fields)._dblAxisOffsetDrag;
  if (this_01 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_RemoveTargetTransform
              ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
    this_02 = (this->fields)._rotationDrag;
    if (this_02 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_RemoveTargetTransform
                ((GizmoDragSession *)this_02,transform,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scaleDrag;
      if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                        ,transform,0,in_R9,unaff_RDI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                          (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
        if (cVar2 == '\0') {
          this_00 = (pGVar1->fields)._._._targetTransforms;
          if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Remove
                    ((List_1_System_Object_ *)this_00,(Object *)transform,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                    );
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform, GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_RemoveTargetTransform_1
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,
               GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._dblAxisOffsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
      return;
    }
    pGVar1 = (this->fields)._scaleDrag;
  }
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                    ,transform,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    if (cVar2 == '\0') {
      this_00 = (pGVar1->fields)._._._targetTransforms;
      if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)transform,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                );
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_Render
               (GizmoPlaneSlider3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)();
  lVar3 = 0xd8;
  if (cVar2 != '\0') {
    lVar4 = 0xd8;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar4 = 0xd0;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    if (lVar4 == 0) goto code_?;
    if (*(int *)(lVar4 + 0x10) == 2) {
      uVar5 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar5 = 0xd0;
      }
      if (*(char *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar5) + 0xa4) != '\0') {
        pGVar1 = (this->fields)._rotationDrag;
        if (((pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) ||
            (pGVar6 = (this->fields)._rotationArc, pGVar6 == (GizmoRotationArc3D *)0x0)) ||
           (pAVar7 = (pGVar6->fields)._arc, pAVar7 == (ArcShape3D *)0x0)) goto code_?;
        fVar8 = (float)FUN_?((pGVar1->fields)._totalRotation,_UNK_?);
        (pAVar7->fields)._degreeAngleFromStart = fVar8;
        ArcShape3D::ArcShape3D_CalculateEndPoint(pAVar7,(MethodInfo *)0x0);
        (pAVar7->fields)._areBorderPointsDirty = 1;
        pGVar6 = (this->fields)._rotationArc;
        fVar8 = GizmoPlaneSlider3D_GetZoomFactor(this,camera,(MethodInfo *)0x0);
        fVar8 = GizmoPlaneSlider3D_GetRealCircleRadius(this,fVar8,(MethodInfo *)0x0);
        if ((pGVar6 == (GizmoRotationArc3D *)0x0) ||
           (pAVar7 = (pGVar6->fields)._arc, pAVar7 == (ArcShape3D *)0x0)) goto code_?;
        ArcShape3D::ArcShape3D_set_Radius(pAVar7,fVar8,(MethodInfo *)0x0);
        lVar4 = 0xd8;
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar4 = 0xd0;
        }
        lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
        if ((lVar4 == 0) ||
           (pGVar6 = (this->fields)._rotationArc, pGVar6 == (GizmoRotationArc3D *)0x0))
        goto code_?;
        GizmoRotationArc3D::GizmoRotationArc3D_Render
                  (pGVar6,*(GizmoRotationArc3DLookAndFeel **)(lVar4 + 0xa8),(MethodInfo *)0x0);
      }
    }
  }
  if ((this->fields)._._isVisible != 0) {
    pGVar9 = (this->fields)._._gizmo;
    if ((pGVar9 == (Gizmo *)0x0) ||
       (pGVar10 = (this->fields)._._handle, pGVar10 == (GizmoHandle *)0x0))
    goto code_?;
    pGVar11 = (this->fields)._sharedLookAndFeel;
    lVar4 = 0xd8;
    if ((pGVar9->fields)._hoverInfo._handleId == (pGVar10->fields)._id) {
      if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd0;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if (lVar4 == 0) goto code_?;
      fVar8 = *(float *)(lVar4 + 0x5c);
      fVar12 = *(float *)(lVar4 + 0x60);
      fVar13 = *(float *)(lVar4 + 100);
      fVar14 = *(float *)(lVar4 + 0x68);
    }
    else {
      if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd0;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if (lVar4 == 0) goto code_?;
      fVar8 = *(float *)(lVar4 + 0x4c);
      fVar12 = *(float *)(lVar4 + 0x50);
      fVar13 = *(float *)(lVar4 + 0x54);
      fVar14 = *(float *)(lVar4 + 0x58);
    }
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_03 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_03 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_03,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff(this_03,(MethodInfo *)0x0);
    lVar4 = 0xd8;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar4 = 0xd0;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    if (lVar4 == 0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit
              (this_03,*(int *)(lVar4 + 0x48) == 0,(MethodInfo *)0x0);
    bVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_IsLit(this_03,(MethodInfo *)0x0);
    if (bVar15 != 0) {
      if (camera == (Camera *)0x0) goto code_?;
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)0x0);
      if (this_04 == (Transform *)0x0) goto code_?;
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)aCStack_17,this_04,(MethodInfo *)0x0);
      VStack_18.x = pVVar16->x;
      VStack_18.y = pVVar16->y;
      VStack_18.z = pVVar16->z;
      GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection(this_03,&VStack_18,(MethodInfo *)0x0)
      ;
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar19 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_03,(MethodInfo *)0x0);
    if (pMVar19 == (Material *)0x0) goto code_?;
    aCStack_17[0].r = fVar8;
    aCStack_17[0].g = fVar12;
    aCStack_17[0].b = fVar13;
    aCStack_17[0].a = fVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar19,StringLiteral__Color,aCStack_17,(MethodInfo *)0x0);
    pMVar19 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_03,(MethodInfo *)0x0);
    if (pMVar19 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar19,0,(MethodInfo *)0x0)
    ;
    lVar4 = 0xd8;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar4 = 0xd0;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    if (lVar4 == 0) goto code_?;
    if (*(int *)(lVar4 + 0x10) == 0) {
      pGVar10 = (this->fields)._._handle;
      if (pGVar10 == (GizmoHandle *)0x0) goto code_?;
      shapeIndex = (this->fields)._quadIndex;
    }
    else {
      lVar4 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd0;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + lVar4) + 0x10) == 1) {
        pGVar10 = (this->fields)._._handle;
        if (pGVar10 == (GizmoHandle *)0x0) goto code_?;
        shapeIndex = (this->fields)._raTriangleIndex;
      }
      else {
        lVar4 = 0xd8;
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar4 = 0xd0;
        }
        if (*(int *)(*(longlong *)((longlong)&this->klass + lVar4) + 0x10) != 2)
        goto code_?;
        pGVar10 = (this->fields)._._handle;
        if (pGVar10 == (GizmoHandle *)0x0) goto code_?;
        shapeIndex = (this->fields)._circleIndex;
      }
    }
    GizmoHandle::GizmoHandle_Render3DSolid_1(pGVar10,shapeIndex,(MethodInfo *)0x0);
  }
code_?:
  lVar4 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar4 = 0xd0;
  }
  lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x10) == 0) {
      this_02 = (this->fields)._quadBorder;
      if (this_02 == (GizmoQuad3DBorder *)0x0) goto code_?;
      GizmoQuad3DBorder::GizmoQuad3DBorder_Render(this_02,camera,(MethodInfo *)0x0);
    }
    else {
      lVar4 = 0xd8;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd0;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + lVar4) + 0x10) == 1) {
        this_01 = (this->fields)._raTriangleBorder;
        if (this_01 == (GizmoRATriangle3DBorder *)0x0) goto code_?;
        GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_Render(this_01,camera,(MethodInfo *)0x0);
      }
      else {
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar3 = 0xd0;
        }
        if (*(int *)(*(longlong *)((longlong)&this->klass + lVar3) + 0x10) == 2) {
          this_00 = (this->fields)._circleBorder;
          if (this_00 == (GizmoCircle3DBorder *)0x0) goto code_?;
          GizmoCircle3DBorder::GizmoCircle3DBorder_Render(this_00,camera,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SetBorderHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
               (GizmoPlaneSlider3D *this,bool isHoverable,MethodInfo *method)

{
  (this->fields)._isBorderHoverable = isHoverable;
  this_00 = (this->fields)._quadBorder;
  if (this_00 != (GizmoQuad3DBorder *)0x0) {
    GizmoQuad3DBorder::GizmoQuad3DBorder_SetHoverable(this_00,isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._raTriangleBorder;
    if (pGVar1 != (GizmoRATriangle3DBorder *)0x0) {
      pGVar2 = (pGVar1->fields)._targetHandle;
      (pGVar1->fields)._isHoverable = isHoverable;
      if (pGVar2 != (GizmoHandle *)0x0) {
        GizmoHandle::GizmoHandle_Set3DShapeHoverable
                  (pGVar2,(pGVar1->fields)._borderTriangleIndex,isHoverable,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._circleBorder;
        if (pGVar3 != (GizmoCircle3DBorder *)0x0) {
          pGVar2 = (pGVar3->fields)._targetHandle;
          (pGVar3->fields)._isHoverable = isHoverable;
          if (pGVar2 != (GizmoHandle *)0x0) {
            GizmoHandle::GizmoHandle_Set3DShapeHoverable
                      (pGVar2,(pGVar3->fields)._borderCircleIndex,isHoverable,(MethodInfo *)0x0);
            pGVar2 = (pGVar3->fields)._targetHandle;
            if (pGVar2 != (GizmoHandle *)0x0) {
              GizmoHandle::GizmoHandle_Set3DShapeHoverable
                        (pGVar2,(pGVar3->fields)._borderTorusIndex,isHoverable,(MethodInfo *)0x0);
              pGVar2 = (pGVar3->fields)._targetHandle;
              if (pGVar2 != (GizmoHandle *)0x0) {
                uVar4 = (pGVar3->fields)._borderCylTorusIndex;
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar5 = (pGVar2->fields)._3DShapes;
                if (pLVar5 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
                  if ((uint)(pLVar5->fields)._size <= uVar4) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pGVar7 = (pLVar5->fields)._items;
                  if (pGVar7 != (GizmoHandleShape3D__Array *)0x0) {
                    if ((uint)pGVar7->max_length <= uVar4) {
                      FUN_?();
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if (pGVar7->vector[(int)uVar4] != (GizmoHandleShape3D *)0x0) {
                      (pGVar7->vector[(int)uVar4]->fields)._isHoverable = isHoverable;
                      return;
                    }
                  }
                }
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
               (GizmoPlaneSlider3D *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (isVisible == (this->fields)._isBorderVisible) {
    return;
  }
  (this->fields)._isBorderVisible = isVisible;
  lVar1 = 0xd8;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar1 = 0xd0;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0))
  {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider3DController);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetDragChannel
               (GizmoPlaneSlider3D *this,GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  (this->fields)._dragChannel = dragChannel;
  lVar1 = 0xADDR;
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    bVar2 = iRam_? != 0;
    (this->fields)._selectedDragSession = (IGizmoDragSession *)(this->fields)._dblAxisOffsetDrag;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._selectedDragSession >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    bVar2 = iRam_? != 0;
    (this->fields)._selectedDragSession = (IGizmoDragSession *)(this->fields)._rotationDrag;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._selectedDragSession >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  else if (dragChannel == GizmoDragChannel__Enum_Scale) {
    (this->fields)._selectedDragSession = (IGizmoDragSession *)(this->fields)._scaleDrag;
    func_?(&(this->fields)._selectedDragSession);
  }
  pGVar7 = (this->fields)._._handle;
  if (pGVar7 == (GizmoHandle *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar2 = iRam_? != 0;
  (pGVar7->fields)._DragSession_k__BackingField = (this->fields)._selectedDragSession;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(pGVar7->fields)._DragSession_k__BackingField >> 0xc);
    lVar1 = lVar1 + (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar1 + 0x462e0);
      puVar6 = (ulonglong *)(lVar1 + 0x462e0);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Void SetQuadCornerPosition(QuadCorner, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetQuadCornerPosition
               (GizmoPlaneSlider3D *this,QuadCorner__Enum corner,Vector3 *cornerPosition,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    pQVar2 = (this->fields)._quad;
    uStack_3._0_4_ = (pGVar1->fields)._position3D.x;
    uStack_3._4_4_ = (pGVar1->fields)._position3D.y;
    fVar4 = (pGVar1->fields)._position3D.z;
    if (pQVar2 != (QuadShape3D *)0x0) {
      QStack_5.x = (pQVar2->fields)._rotation.x;
      QStack_5.y = (pQVar2->fields)._rotation.y;
      QStack_5.z = (pQVar2->fields)._rotation.z;
      QStack_5.w = (pQVar2->fields)._rotation.w;
      VStack_6.z = (pQVar2->fields)._center.z;
      VStack_6.x = (pQVar2->fields)._center.x;
      VStack_6.y = (pQVar2->fields)._center.y;
      pVVar7 = QuadMath::QuadMath_Calc3DQuadCorner
                         (&VStack_8,&VStack_6,(pQVar2->fields)._size,&QStack_5,corner,
                          (MethodInfo *)0x0);
      uVar9 = pVVar7->x;
      uVar10 = pVVar7->y;
      uVar11 = cornerPosition->x;
      uVar12 = cornerPosition->y;
      fVar13 = ((float)uStack_3 - (float)uVar9) + (float)uVar11;
      fVar14 = (uStack_3._4_4_ - (float)uVar10) + (float)uVar12;
      fVar4 = (fVar4 - pVVar7->z) + cornerPosition->z;
      pGVar1 = (this->fields)._transform;
      if (pGVar1 != (GizmoTransform *)0x0) {
        if (((pGVar1->fields)._firingChanged3DEvent == 0) &&
           (uVar15 = (pGVar1->fields)._position3D.x, fVar16 = (float)uVar15 - fVar13,
           fVar17 = (pGVar1->fields)._position3D.y - fVar14,
           fVar18 = (pGVar1->fields)._position3D.z - fVar4,
           _UNK_? <= fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18)) {
          (pGVar1->fields)._position3D.x = fVar13;
          (pGVar1->fields)._position3D.y = fVar14;
          (pGVar1->fields)._position3D.z = fVar4;
          GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetSnapEnabled
               (GizmoPlaneSlider3D *this,bool isEnabled,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblAxisOffsetDrag;
  if (pGVar1 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    (pGVar1->fields)._._isSnapEnabled = isEnabled;
    pGVar2 = (this->fields)._rotationDrag;
    if (pGVar2 != (GizmoSglAxisRotationDrag3D *)0x0) {
      (pGVar2->fields)._._isSnapEnabled = isEnabled;
      pGVar3 = (this->fields)._scaleDrag;
      if (pGVar3 != (GizmoDblAxisScaleDrag3D *)0x0) {
        (pGVar3->fields)._._isSnapEnabled = isEnabled;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetZoomFactorTransform
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 == (GizmoHandle *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (transform == (GizmoTransform *)0x0) {
    pGVar3 = (pGVar1->fields)._gizmo;
    if (pGVar3 == (Gizmo *)0x0) goto code_?;
    bVar4 = iRam_? != 0;
    (pGVar1->fields)._zoomFactorTransform = (pGVar3->fields)._transform;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(pGVar1->fields)._zoomFactorTransform >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
      return;
    }
  }
  else {
    bVar4 = iRam_? != 0;
    (pGVar1->fields)._zoomFactorTransform = transform;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(pGVar1->fields)._zoomFactorTransform >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  return;
}


/* GizmoPlaneSlider3D(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
               (GizmoPlaneSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CircleShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCircle3DBorder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCirclePlaneSlider3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoDblAxisOffsetDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoDblAxisScaleDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandleCanHoverHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoPlane3DType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoPlaneSlider3D__OnCanHoverHandle_int__RTG__Gizmo__RTG__GizmoHandleHoverData__RTG__YesNoAnswer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoPostEnabled_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoPlaneSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoQuad3DBorder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoQuadPlaneSlider3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoRATriangle3DBorder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoRATrianglePlaneSlider3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoRotationArc3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__QuadShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RightAngTriangle3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (QuadShape3D *)FUN_?(TypeInfo__RTG__QuadShape3D);
  QuadShape3D::QuadShape3D__ctor(pQVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._quad = pQVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._quad >> 0xc);
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
  pRVar7 = (RightAngTriangle3D *)FUN_?(TypeInfo__RTG__RightAngTriangle3D);
  RightAngTriangle3D::RightAngTriangle3D__ctor(pRVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._raTriangle = pRVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._raTriangle >> 0xc);
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
  pCVar8 = (CircleShape3D *)FUN_?(TypeInfo__RTG__CircleShape3D);
  CircleShape3D::CircleShape3D__ctor(pCVar8,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._circle = pCVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._circle >> 0xc);
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
  (this->fields)._isBorderHoverable = 1;
  (this->fields)._isBorderVisible = 1;
  pGVar9 = (GizmoTransform *)FUN_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar9,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._transform = pGVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
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
  (this->fields)._dragChannel = 1;
  pGVar10 = (GizmoDblAxisOffsetDrag3D *)FUN_?(TypeInfo__RTG__GizmoDblAxisOffsetDrag3D);
  (pGVar10->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar10,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._dblAxisOffsetDrag = pGVar10;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._dblAxisOffsetDrag >> 0xc);
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
  pGVar11 = (GizmoSglAxisRotationDrag3D *)FUN_?(TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
  (pGVar11->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar11,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._rotationDrag = pGVar11;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._rotationDrag >> 0xc);
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
  this_01 = (GizmoRotationArc3D *)FUN_?(TypeInfo__RTG__GizmoRotationArc3D);
  GizmoRotationArc3D::GizmoRotationArc3D__ctor(this_01,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._rotationArc = this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._rotationArc >> 0xc);
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
  pGVar12 = (GizmoDblAxisScaleDrag3D *)FUN_?(TypeInfo__RTG__GizmoDblAxisScaleDrag3D);
  (pGVar12->fields)._relativeScale0 = 1.0;
  (pGVar12->fields)._relativeScale1 = 1.0;
  (pGVar12->fields)._totalScale0 = 1.0;
  (pGVar12->fields)._totalScale1 = 1.0;
  (pGVar12->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar12,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._scaleDrag = pGVar12;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._scaleDrag >> 0xc);
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
  (this->fields)._scaleDragAxisIndexUp = 1;
  pGVar13 = (GizmoPlaneSlider3DControllerData *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DControllerData);
  bVar2 = iRam_? != 0;
  (this->fields)._controllerData = pGVar13;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
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
  pIVar14 = TypeRef__RTG__GizmoPlane3DType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  pGVar15 = (GizmoHandleCanHoverHandler *)0x0;
  pGVar16 = pGVar15;
  if (pIVar14 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar17 = FUN_?(pIVar14,1);
    pGVar16 = (GizmoHandleCanHoverHandler *)FUN_?(lVar17 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pGVar16 == (GizmoHandleCanHoverHandler *)0x0) {
    uVar18 = func_?(&TypeInfo__System__ArgumentNullException);
    this_07 = (ArgumentNullException *)func_?(uVar18);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_07,paramName,(MethodInfo *)0x0);
    uVar18 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_07,uVar18);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  this_02 = (Array *)(*(code *)pGVar16->klass[3].vtable.BeginInvoke.method)(pGVar16);
  if (this_02 == (Array *)0x0) {
code_?:
    FUN_?();
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  mscorlib.dll::System::Array::Array_get_Length(this_02,(MethodInfo *)0x0);
  pIVar20 = (IGizmoPlaneSlider3DController__Array *)
            FUN_?(TypeInfo__RTG__IGizmoPlaneSlider3DController);
  bVar2 = iRam_? != 0;
  (this->fields)._controllers = pIVar20;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
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
  pGVar21 = (GizmoPlaneSlider3DSettings *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
  bVar2 = iRam_? != 0;
  (pGVar21->fields)._areaHoverEps = 1e-05;
  (pGVar21->fields)._extrudeHoverEps = 1e-05;
  (pGVar21->fields)._borderLineHoverEps = 0.7;
  (pGVar21->fields)._borderBoxHoverEps = 0.7;
  (pGVar21->fields)._borderTorusHoverEps = 0.7;
  (pGVar21->fields)._offsetSnapStepRight = 1.0;
  (pGVar21->fields)._offsetSnapStepUp = 1.0;
  (pGVar21->fields)._rotationSnapStep = 15.0;
  (pGVar21->fields)._scaleMode = 1;
  (pGVar21->fields)._scaleSnapStepRight = 0.1;
  (pGVar21->fields)._scaleSnapStepUp = 0.1;
  (pGVar21->fields)._proportionalScaleSnapStep = 0.1;
  (pGVar21->fields)._offsetSensitivity = 1.0;
  (pGVar21->fields)._rotationSensitivity = 0.45;
  (pGVar21->fields)._scaleSensitivity = 1.0;
  (this->fields)._settings = pGVar21;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
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
  this_03 = (GizmoPlaneSlider3DLookAndFeel *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
  GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(this_03,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._lookAndFeel = this_03;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._lookAndFeel >> 0xc);
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
  GizmoSlider::GizmoSlider__ctor((GizmoSlider *)this,gizmo,handleId,(MethodInfo *)0x0);
  pGVar22 = (this->fields)._._handle;
  if (pGVar22 == (GizmoHandle *)0x0) goto code_?;
  iVar23 = GizmoHandle::GizmoHandle_Add3DShape
                     (pGVar22,(Shape3D *)(this->fields)._quad,(MethodInfo *)0x0);
  pGVar22 = (this->fields)._._handle;
  (this->fields)._quadIndex = iVar23;
  if (pGVar22 == (GizmoHandle *)0x0) goto code_?;
  iVar23 = GizmoHandle::GizmoHandle_Add3DShape
                     (pGVar22,(Shape3D *)(this->fields)._raTriangle,(MethodInfo *)0x0);
  pGVar22 = (this->fields)._._handle;
  (this->fields)._raTriangleIndex = iVar23;
  if (pGVar22 == (GizmoHandle *)0x0) goto code_?;
  iVar23 = GizmoHandle::GizmoHandle_Add3DShape
                     (pGVar22,(Shape3D *)(this->fields)._circle,(MethodInfo *)0x0);
  pGVar22 = (this->fields)._._handle;
  pQVar1 = (this->fields)._quad;
  (this->fields)._circleIndex = iVar23;
  this_04 = (GizmoQuad3DBorder *)FUN_?(TypeInfo__RTG__GizmoQuad3DBorder);
  GizmoQuad3DBorder::GizmoQuad3DBorder__ctor(this_04,this,pGVar22,pQVar1,(MethodInfo *)0x0);
  (this->fields)._quadBorder = this_04;
  func_?(&(this->fields)._quadBorder);
  pGVar22 = (this->fields)._._handle;
  pRVar7 = (this->fields)._raTriangle;
  this_05 = (GizmoRATriangle3DBorder *)FUN_?(TypeInfo__RTG__GizmoRATriangle3DBorder);
  GizmoRATriangle3DBorder::GizmoRATriangle3DBorder__ctor
            (this_05,this,pGVar22,pRVar7,(MethodInfo *)0x0);
  (this->fields)._raTriangleBorder = this_05;
  func_?(&(this->fields)._raTriangleBorder);
  pGVar22 = (this->fields)._._handle;
  pCVar8 = (this->fields)._circle;
  this_06 = (GizmoCircle3DBorder *)FUN_?(TypeInfo__RTG__GizmoCircle3DBorder);
  GizmoCircle3DBorder::GizmoCircle3DBorder__ctor(this_06,this,pGVar22,pCVar8,(MethodInfo *)0x0);
  (this->fields)._circleBorder = this_06;
  func_?(&(this->fields)._circleBorder);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).Gizmo = (this->fields)._._gizmo;
  func_?(&pGVar13->fields);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).Slider = this;
  func_?(&(pGVar13->fields).Slider);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).SliderHandle = (this->fields)._._handle;
  func_?(&(pGVar13->fields).SliderHandle);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).QuadBorder = (this->fields)._quadBorder;
  func_?(&(pGVar13->fields).QuadBorder);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).Quad = (this->fields)._quad;
  func_?(&(pGVar13->fields).Quad);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).QuadIndex = (this->fields)._quadIndex;
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).RATriangleBorder = (this->fields)._raTriangleBorder;
  func_?(&(pGVar13->fields).RATriangleBorder);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).RATriangle = (this->fields)._raTriangle;
  func_?(&(pGVar13->fields).RATriangle);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).RATriangleIndex = (this->fields)._raTriangleIndex;
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).CircleBorder = (this->fields)._circleBorder;
  func_?(&(pGVar13->fields).CircleBorder);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).Circle = (this->fields)._circle;
  func_?(&(pGVar13->fields).Circle);
  pGVar13 = (this->fields)._controllerData;
  if (pGVar13 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
  (pGVar13->fields).CircleIndex = (this->fields)._circleIndex;
  pIVar20 = (this->fields)._controllers;
  pGVar13 = (this->fields)._controllerData;
  pSVar24 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)FUN_?(TypeInfo__RTG__GizmoQuadPlaneSlider3DController);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pSVar24,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)pGVar13,(MethodInfo *)0x0);
  if (pIVar20 == (IGizmoPlaneSlider3DController__Array *)0x0) goto code_?;
  if ((pSVar24 !=
       (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
        *)0x0) && (lVar17 = FUN_?(pSVar24,(pIVar20->klass->_0).element_class), lVar17 == 0))
  {
    uVar18 = FUN_?();
    FUN_?(uVar18,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  FUN_?(pIVar20,0);
  pIVar20 = (this->fields)._controllers;
  pGVar13 = (this->fields)._controllerData;
  pSVar24 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)FUN_?(TypeInfo__RTG__GizmoRATrianglePlaneSlider3DController);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pSVar24,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)pGVar13,(MethodInfo *)0x0);
  if (pIVar20 == (IGizmoPlaneSlider3DController__Array *)0x0) goto code_?;
  if ((pSVar24 !=
       (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
        *)0x0) && (lVar17 = FUN_?(pSVar24,(pIVar20->klass->_0).element_class), lVar17 == 0))
  {
    uVar18 = FUN_?();
    FUN_?(uVar18,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  FUN_?(pIVar20,1);
  pIVar20 = (this->fields)._controllers;
  pGVar13 = (this->fields)._controllerData;
  pSVar24 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)FUN_?(TypeInfo__RTG__GizmoCirclePlaneSlider3DController);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pSVar24,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)pGVar13,(MethodInfo *)0x0);
  if (pIVar20 == (IGizmoPlaneSlider3DController__Array *)0x0) goto code_?;
  if ((pSVar24 !=
       (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
        *)0x0) && (lVar17 = FUN_?(pSVar24,(pIVar20->klass->_0).element_class), lVar17 == 0))
  {
    uVar18 = FUN_?();
    FUN_?(uVar18,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  FUN_?(pIVar20,2,pSVar24);
  pGVar9 = (this->fields)._transform;
  value = (GizmoEntityTransformChangedHandler *)
          FUN_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
  mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::Experimental::StyleValues]::
  Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
            ((Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_ *)value,
             (Object *)this,
             MethodInfo__RTG__GizmoPlaneSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
             ,(MethodInfo *)0x0);
  if (pGVar9 == (GizmoTransform *)0x0) goto code_?;
  GizmoTransform::GizmoTransform_add_Changed(pGVar9,value,(MethodInfo *)0x0);
  pGVar25 = (this->fields)._._gizmo;
  value_00 = (GizmoPreUpdateBeginHandler *)FUN_?(TypeInfo__RTG__GizmoPreUpdateBeginHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            ((UnityAction_1_System_Object_ *)value_00,(Object *)this,
             MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
             (MethodInfo *)0x0);
  if (pGVar25 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PreUpdateBegin(pGVar25,value_00,(MethodInfo *)0x0);
  pGVar25 = (this->fields)._._gizmo;
  value_01 = (GizmoPreDragBeginAttemptHandler *)
             FUN_?(TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            ((UnityAction_2_System_Object_System_Int32_ *)value_01,(Object *)this,
             MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_,
             (MethodInfo *)0x0);
  if (pGVar25 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PreDragBeginAttempt(pGVar25,value_01,(MethodInfo *)0x0);
  pGVar25 = (this->fields)._._gizmo;
  value_02 = (GizmoPostEnabledHandler *)FUN_?(TypeInfo__RTG__GizmoPostEnabledHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            ((UnityAction_1_System_Object_ *)value_02,(Object *)this,
             MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoPostEnabled_RTG__Gizmo_,(MethodInfo *)0x0);
  if (pGVar25 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PostEnabled(pGVar25,value_02,(MethodInfo *)0x0);
  pGVar22 = (this->fields)._._handle;
  if (pGVar22 == (GizmoHandle *)0x0) goto code_?;
  pGVar16 = (pGVar22->fields).CanHover;
  b = (Delegate *)FUN_?(TypeInfo__RTG__GizmoHandleCanHoverHandler);
  pMVar26 = 
  MethodInfo__RTG__GizmoPlaneSlider3D__OnCanHoverHandle_int__RTG__Gizmo__RTG__GizmoHandleHoverData__RTG__YesNoAnswer_
  ;
  bVar2 = iRam_? != 0;
  (b->fields).method_ptr =
       MethodInfo__RTG__GizmoPlaneSlider3D__OnCanHoverHandle_int__RTG__Gizmo__RTG__GizmoHandleHoverData__RTG__YesNoAnswer_
       ->virtualMethodPointer;
  (b->fields).method = pMVar26;
  (b->fields).m_target = (Object *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
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
  uVar27 = pMVar26->parameters_count;
  (b->fields).method_code = b;
  if (((pMVar26->flags & 0x10) == 0) || (uVar27 != 4)) {
    (b->fields).method_code = (b->fields).m_target;
    pcVar19 = (b->fields).method_ptr;
  }
  else {
    pcVar19 = FUN_?;
  }
  (b->fields).invoke_impl = pcVar19;
  (b->fields).extra_arg = FUN_?;
  pGVar16 = (GizmoHandleCanHoverHandler *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pGVar16,b,(MethodInfo *)0x0);
  if (pGVar16 == (GizmoHandleCanHoverHandler *)0x0) {
    (pGVar22->fields).CanHover = (GizmoHandleCanHoverHandler *)0x0;
  }
  else {
    pGVar28 = pGVar15;
    if (pGVar16->klass == TypeInfo__RTG__GizmoHandleCanHoverHandler) {
      pGVar28 = pGVar16;
    }
    if (pGVar28 == (GizmoHandleCanHoverHandler *)0x0) {
      FUN_?(pGVar16);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    (pGVar22->fields).CanHover = pGVar28;
    if (pGVar16->klass == TypeInfo__RTG__GizmoHandleCanHoverHandler) {
      pGVar15 = pGVar16;
    }
    if (pGVar15 == (GizmoHandleCanHoverHandler *)0x0) {
      FUN_?(pGVar16);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pGVar22->fields >> 0xc);
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
  GizmoPlaneSlider3D_SetDragChannel(this,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
  pGVar10 = (this->fields)._dblAxisOffsetDrag;
  if (pGVar10 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
  pGVar9 = (this->fields)._transform;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar10,pGVar9,(MethodInfo *)0x0);
  pGVar11 = (this->fields)._rotationDrag;
  if (pGVar11 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar11,pGVar9,(MethodInfo *)0x0);
  pGVar12 = (this->fields)._scaleDrag;
  if (pGVar12 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar12,pGVar9,(MethodInfo *)0x0);
  pGVar25 = (this->fields)._._gizmo;
  if ((pGVar25 == (Gizmo *)0x0) ||
     (pGVar10 = (this->fields)._dblAxisOffsetDrag, pGVar10 == (GizmoDblAxisOffsetDrag3D *)0x0))
  goto code_?;
  pGVar9 = (pGVar25->fields)._transform;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar10,pGVar9,(MethodInfo *)0x0);
  pGVar11 = (this->fields)._rotationDrag;
  if (pGVar11 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar11,pGVar9,(MethodInfo *)0x0);
  pGVar12 = (this->fields)._scaleDrag;
  if (pGVar12 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar12,pGVar9,(MethodInfo *)0x0);
  pGVar25 = (this->fields)._._gizmo;
  if ((pGVar25 == (Gizmo *)0x0) ||
     (pGVar9 = (this->fields)._transform, pGVar9 == (GizmoTransform *)0x0))
  goto code_?;
  pGVar29 = (pGVar25->fields)._transform;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                  ,pGVar29,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((pGVar9->fields)._firingChanged3DEvent == 0) && ((pGVar9->fields)._parent != pGVar29)) {
    pGVar30 = (pGVar9->fields)._parent;
    if (pGVar30 != (GizmoTransform *)0x0) {
      this_00 = (pGVar30->fields)._children;
      if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)pGVar9,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                );
    }
    bVar2 = iRam_? != 0;
    (pGVar9->fields)._parent = pGVar29;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pGVar9->fields)._parent >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar6;
        LOCK();
        uVar4 = *puVar6;
        if (uVar5 == uVar4) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar4);
    }
    pGVar29 = (pGVar9->fields)._parent;
    if ((pGVar29 == (GizmoTransform *)0x0) ||
       ((pGVar29->fields)._children == (List_1_RTG_GizmoTransform_ *)0x0)) {
code_?:
      FUN_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    FUN_?();
    GizmoTransform::GizmoTransform_OnParentChanged(pGVar9,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean get_IsDragged() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_IsDragged
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged == 0) {
      return 0;
    }
    pGVar2 = (this->fields)._._handle;
    method = (MethodInfo *)pGVar1;
    if (pGVar2 != (GizmoHandle *)0x0) {
      return (pGVar1->fields)._dragInfo._handleId == (pGVar2->fields)._id;
    }
  }
  FUN_?(this,method);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_IsMoving() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_IsMoving
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblAxisOffsetDrag;
  if (pGVar1 != (GizmoDblAxisOffsetDrag3D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_IsRotating() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_IsRotating
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_IsScaling() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_IsScaling
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Quaternion get_LocalRotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LocalRotation
          (Quaternion *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._localRotation3D.y;
    fVar3 = (pGVar1->fields)._localRotation3D.z;
    fVar4 = (pGVar1->fields)._localRotation3D.w;
    __return_storage_ptr__->x = (pGVar1->fields)._localRotation3D.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar5)();
  return pQVar6;
}


/* GizmoPlaneSlider3DLookAndFeel get_LookAndFeel() */

GizmoPlaneSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
          (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Normal
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if ((pGVar1 != (GizmoTransform *)0x0) &&
     (pVVar2 = (pGVar1->fields)._axes3D, pVVar2 != (Vector3__Array *)0x0)) {
    if (2 < (uint)pVVar2->max_length) {
      fVar3 = pVVar2->vector[2].y;
      fVar4 = pVVar2->vector[2].z;
      __return_storage_ptr__->x = pVVar2->vector[2].x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Plane get_Plane() */

Plane * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Plane
                  (Plane *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if ((pGVar1 != (GizmoTransform *)0x0) &&
     (pVVar2 = (pGVar1->fields)._axes3D, pVVar2 != (Vector3__Array *)0x0)) {
    if ((uint)pVVar2->max_length < 3) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pPVar4 = (Plane *)(*pcVar3)();
      return pPVar4;
    }
    uStack_5._0_4_ = pVVar2->vector[2].x;
    uStack_5._4_4_ = pVVar2->vector[2].y;
    fStack_6 = pVVar2->vector[2].z;
    pGVar1 = (this->fields)._transform;
    if (pGVar1 != (GizmoTransform *)0x0) {
      uStack_7._0_4_ = (pGVar1->fields)._position3D.x;
      uStack_7._4_4_ = (pGVar1->fields)._position3D.y;
      fStack_8 = (pGVar1->fields)._position3D.z;
      (__return_storage_ptr__->m_Normal).x = 0.0;
      (__return_storage_ptr__->m_Normal).y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
      FUN_?((undefined4)uStack_5,&uStack_5,&uStack_7);
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pPVar4 = (Plane *)(*pcVar3)();
  return pPVar4;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Position
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._position3D.y;
    fVar3 = (pGVar1->fields)._position3D.z;
    __return_storage_ptr__->x = (pGVar1->fields)._position3D.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Vector3 get_RelativeDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_RelativeDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblAxisOffsetDrag;
  if (pGVar1 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    fVar2 = (pGVar1->fields)._._._relativeDragOffset.y;
    fVar3 = (pGVar1->fields)._._._relativeDragOffset.z;
    __return_storage_ptr__->x = (pGVar1->fields)._._._relativeDragOffset.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Single get_RelativeDragRotation() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_RelativeDragRotation
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
    return (pGVar1->fields)._relativeRotation;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RelativeDragScaleRight() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_RelativeDragScaleRight
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._relativeScale0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RelativeDragScaleUp() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_RelativeDragScaleUp
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._relativeScale1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Right
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if ((pGVar1 != (GizmoTransform *)0x0) &&
     (pVVar2 = (pGVar1->fields)._axes3D, pVVar2 != (Vector3__Array *)0x0)) {
    if ((int)pVVar2->max_length != 0) {
      fVar3 = pVVar2->vector[0].y;
      fVar4 = pVVar2->vector[0].z;
      __return_storage_ptr__->x = pVVar2->vector[0].x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._rotation3D.y;
    fVar3 = (pGVar1->fields)._rotation3D.z;
    fVar4 = (pGVar1->fields)._rotation3D.w;
    __return_storage_ptr__->x = (pGVar1->fields)._rotation3D.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar5)();
  return pQVar6;
}


/* GizmoPlaneSlider3DSettings get_Settings() */

GizmoPlaneSlider3DSettings *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Settings
          (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings != (GizmoPlaneSlider3DSettings *)0x0) {
    return (this->fields)._sharedSettings;
  }
  return (this->fields)._settings;
}


/* Vector3 get_TotalDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_TotalDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblAxisOffsetDrag;
  if (pGVar1 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    fVar2 = (pGVar1->fields)._._._totalDragOffset.y;
    fVar3 = (pGVar1->fields)._._._totalDragOffset.z;
    __return_storage_ptr__->x = (pGVar1->fields)._._._totalDragOffset.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Single get_TotalDragRotation() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_TotalDragRotation
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
    return (pGVar1->fields)._totalRotation;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_TotalDragScaleRight() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_TotalDragScaleRight
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._totalScale0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_TotalDragScaleUp() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_TotalDragScaleUp
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._totalScale1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Up
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if ((pGVar1 != (GizmoTransform *)0x0) &&
     (pVVar2 = (pGVar1->fields)._axes3D, pVVar2 != (Vector3__Array *)0x0)) {
    if (1 < (uint)pVVar2->max_length) {
      fVar3 = pVVar2->vector[1].y;
      fVar4 = pVVar2->vector[1].z;
      __return_storage_ptr__->x = pVVar2->vector[1].x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Void set_LocalRotation(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_LocalRotation
               (GizmoPlaneSlider3D *this,Quaternion *value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    QStack_1.x = value->x;
    QStack_1.y = value->y;
    QStack_1.z = value->z;
    QStack_1.w = value->w;
    GizmoTransform::GizmoTransform_set_LocalRotation3D(this_00,&QStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position
               (GizmoPlaneSlider3D *this,Vector3 *value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this_00->fields)._firingChanged3DEvent == 0) &&
     (uVar2 = value->x, uVar3 = value->y, uVar4 = (this_00->fields)._position3D.x,
     fVar5 = (this_00->fields)._position3D.z - value->z,
     fVar6 = (this_00->fields)._position3D.y - (float)uVar3,
     _UNK_? <=
     fVar6 * fVar6 + ((float)uVar4 - (float)uVar2) * ((float)uVar4 - (float)uVar2) +
     fVar5 * fVar5)) {
    fVar6 = value->y;
    fVar5 = value->z;
    (this_00->fields)._position3D.x = value->x;
    (this_00->fields)._position3D.y = fVar6;
    (this_00->fields)._position3D.z = fVar5;
    if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
      fVar6 = (this_00->fields)._position3D.y;
      fVar5 = (this_00->fields)._position3D.z;
      (this_00->fields)._localPosition3D.x = (this_00->fields)._position3D.x;
      (this_00->fields)._localPosition3D.y = fVar6;
      (this_00->fields)._localPosition3D.z = fVar5;
    }
    else {
      pGVar7 = (this_00->fields)._parent;
      uStack_8 = 0;
      uStack_9 = 0;
      fStack_10 = (pGVar7->fields)._rotation3D.x;
      fStack_11 = (pGVar7->fields)._rotation3D.y;
      fStack_12 = (pGVar7->fields)._rotation3D.z;
      fStack_13 = (pGVar7->fields)._rotation3D.w;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(&fStack_10);
      pGVar7 = (this_00->fields)._parent;
      if (pGVar7 == (GizmoTransform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar15 = (pGVar7->fields)._position3D.x;
      uVar16 = (pGVar7->fields)._position3D.y;
      fVar17 = (this_00->fields)._position3D.z - (pGVar7->fields)._position3D.z;
      uVar18 = (this_00->fields)._position3D.x;
      fVar19 = (float)uVar18 - (float)uVar15;
      fVar20 = (this_00->fields)._position3D.y - (float)uVar16;
      fVar6 = uStack_8._4_4_ + uStack_8._4_4_;
      fVar5 = (float)uStack_9 + (float)uStack_9;
      fVar21 = uStack_9._4_4_ * ((float)uStack_8 + (float)uStack_8);
      fVar22 = (float)uStack_8 * ((float)uStack_8 + (float)uStack_8);
      fVar23 = _UNK_? - ((float)uStack_9 * fVar5 + fVar22);
      fVar22 = _UNK_? - (uStack_8._4_4_ * fVar6 + fVar22);
      (this_00->fields)._localPosition3D.x =
           (_UNK_? - ((float)uStack_9 * fVar5 + uStack_8._4_4_ * fVar6)) * fVar19 +
           ((float)uStack_8 * fVar6 - uStack_9._4_4_ * fVar5) * fVar20 +
           (uStack_9._4_4_ * fVar6 + (float)uStack_8 * fVar5) * fVar17;
      (this_00->fields)._localPosition3D.y =
           fVar23 * fVar20 + (uStack_9._4_4_ * fVar5 + (float)uStack_8 * fVar6) * fVar19 +
           (uStack_8._4_4_ * fVar5 - fVar21) * fVar17;
      (this_00->fields)._localPosition3D.z =
           ((float)uStack_8 * fVar5 - uStack_9._4_4_ * fVar6) * fVar19 +
           (fVar21 + uStack_8._4_4_ * fVar5) * fVar20 + fVar22 * fVar17;
    }
    GizmoTransform::GizmoTransform_UpdateChildTransforms3D(this_00,(MethodInfo *)0x0);
    pGVar24 = (this_00->fields).Changed;
    (this_00->fields)._firingChanged3DEvent = 1;
    if (pGVar24 != (GizmoEntityTransformChangedHandler *)0x0) {
      (*(pGVar24->fields)._._.invoke_impl)
                ((pGVar24->fields)._._.method_code,this_00,0x200000000,(pGVar24->fields)._._.method);
    }
    (this_00->fields)._firingChanged3DEvent = 0;
    return;
  }
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Rotation
               (GizmoPlaneSlider3D *this,Quaternion *value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    QStack_1.x = value->x;
    QStack_1.y = value->y;
    QStack_1.z = value->z;
    QStack_1.w = value->w;
    GizmoTransform::GizmoTransform_set_Rotation3D(this_00,&QStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ScaleDragAxisIndexRight(Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_ScaleDragAxisIndexRight
               (GizmoPlaneSlider3D *this,int32_t value,MethodInfo *method)

{
  if (value < 0) {
    (this->fields)._scaleDragAxisIndexRight = 0;
    return;
  }
  if (2 < value) {
    (this->fields)._scaleDragAxisIndexRight = 2;
    return;
  }
  (this->fields)._scaleDragAxisIndexRight = value;
  return;
}


/* Void set_ScaleDragAxisIndexUp(Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_ScaleDragAxisIndexUp
               (GizmoPlaneSlider3D *this,int32_t value,MethodInfo *method)

{
  if (value < 0) {
    (this->fields)._scaleDragAxisIndexUp = 0;
    return;
  }
  if (2 < value) {
    (this->fields)._scaleDragAxisIndexUp = 2;
    return;
  }
  (this->fields)._scaleDragAxisIndexUp = value;
  return;
}

