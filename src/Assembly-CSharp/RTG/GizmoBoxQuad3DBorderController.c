
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxQuad3DBorderController::
     GizmoBoxQuad3DBorderController_UpdateEpsilons
               (GizmoBoxQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  uVar1 = _UNK_?;
  pGVar2 = (this->fields)._._data;
  pGVar3 = (GizmoPlaneSlider3D *)0x0;
  if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
     (pGVar3 = (pGVar2->fields).PlaneSlider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
    lVar4 = 200;
    if ((pGVar3->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
      lVar4 = 0xc0;
    }
    method = *(MethodInfo **)((longlong)&pGVar3->klass + lVar4);
    if (method != (MethodInfo *)0x0) {
      fVar5 = zoomFactor * *(float *)((longlong)&method->name + 4);
      pBVar6 = (((this->fields)._._data)->fields).TopLeftBox;
      pGVar3 = (GizmoPlaneSlider3D *)0x0;
      if (pBVar6 != (BoxShape3D *)0x0) {
        uVar7 = (uint)fVar5 & _UNK_?;
        fVar8 = (float)((uint)fVar5 & _UNK_?);
        (pBVar6->fields)._epsilon._sizeEps.x = (float)((uint)fVar5 & _UNK_?);
        (pBVar6->fields)._epsilon._sizeEps.y = (float)uVar7;
        (pBVar6->fields)._epsilon._sizeEps.z = fVar8;
        pGVar2 = (this->fields)._._data;
        pGVar3 = (GizmoPlaneSlider3D *)0x0;
        if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
           (pBVar6 = (pGVar2->fields).TopRightBox, pGVar3 = (GizmoPlaneSlider3D *)0x0,
           pBVar6 != (BoxShape3D *)0x0)) {
          (pBVar6->fields)._epsilon._sizeEps.x = (float)((uint)fVar5 & uVar1);
          (pBVar6->fields)._epsilon._sizeEps.y = (float)((uint)fVar5 & uVar1);
          (pBVar6->fields)._epsilon._sizeEps.z = (float)((uint)fVar5 & uVar1);
          pGVar2 = (this->fields)._._data;
          pGVar3 = (GizmoPlaneSlider3D *)0x0;
          if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
             (pBVar6 = (pGVar2->fields).BottomRightBox, pGVar3 = (GizmoPlaneSlider3D *)0x0,
             pBVar6 != (BoxShape3D *)0x0)) {
            (pBVar6->fields)._epsilon._sizeEps.x = (float)((uint)fVar5 & uVar1);
            (pBVar6->fields)._epsilon._sizeEps.y = (float)((uint)fVar5 & uVar1);
            (pBVar6->fields)._epsilon._sizeEps.z = (float)((uint)fVar5 & uVar1);
            pGVar2 = (this->fields)._._data;
            pGVar3 = (GizmoPlaneSlider3D *)0x0;
            if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
               (pBVar6 = (pGVar2->fields).BottomLeftBox, pGVar3 = (GizmoPlaneSlider3D *)0x0,
               pBVar6 != (BoxShape3D *)0x0)) {
              (pBVar6->fields)._epsilon._sizeEps.x = (float)((uint)fVar5 & uVar1);
              (pBVar6->fields)._epsilon._sizeEps.y = (float)((uint)fVar5 & uVar1);
              (pBVar6->fields)._epsilon._sizeEps.z = (float)((uint)fVar5 & uVar1);
              pGVar2 = (this->fields)._._data;
              pGVar3 = (GizmoPlaneSlider3D *)0x0;
              if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
                 (pBVar6 = (pGVar2->fields).TopBox, pGVar3 = (GizmoPlaneSlider3D *)0x0,
                 pBVar6 != (BoxShape3D *)0x0)) {
                (pBVar6->fields)._epsilon._sizeEps.x = (float)((uint)fVar5 & uVar1);
                (pBVar6->fields)._epsilon._sizeEps.y = (float)((uint)fVar5 & uVar1);
                (pBVar6->fields)._epsilon._sizeEps.z = (float)((uint)fVar5 & uVar1);
                pGVar2 = (this->fields)._._data;
                pGVar3 = (GizmoPlaneSlider3D *)0x0;
                if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
                   (pBVar6 = (pGVar2->fields).BottomBox, pGVar3 = (GizmoPlaneSlider3D *)0x0,
                   pBVar6 != (BoxShape3D *)0x0)) {
                  (pBVar6->fields)._epsilon._sizeEps.x = (float)((uint)fVar5 & uVar1);
                  (pBVar6->fields)._epsilon._sizeEps.y = (float)((uint)fVar5 & uVar1);
                  (pBVar6->fields)._epsilon._sizeEps.z = (float)((uint)fVar5 & uVar1);
                  pGVar2 = (this->fields)._._data;
                  pGVar3 = (GizmoPlaneSlider3D *)0x0;
                  if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
                     (pGVar3 = (GizmoPlaneSlider3D *)(pGVar2->fields).LeftBox,
                     pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
                    (pGVar3->fields)._raTriangle =
                         (RightAngTriangle3D *)CONCAT44((uint)fVar5 & uVar1,(uint)fVar5 & uVar1);
                    *(uint *)&(pGVar3->fields)._circle = (uint)fVar5 & uVar1;
                    pGVar2 = (this->fields)._._data;
                    this = (GizmoBoxQuad3DBorderController *)0x0;
                    if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
                       (pBVar6 = (pGVar2->fields).RightBox,
                       this = (GizmoBoxQuad3DBorderController *)0x0, pBVar6 != (BoxShape3D *)0x0)) {
                      (pBVar6->fields)._epsilon._sizeEps.x = (float)((uint)fVar5 & uVar1);
                      (pBVar6->fields)._epsilon._sizeEps.y = (float)((uint)fVar5 & uVar1);
                      (pBVar6->fields)._epsilon._sizeEps.z = (float)((uint)fVar5 & uVar1);
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
  FUN_?(this,pGVar3,method);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoBoxQuad3DBorderController::
     GizmoBoxQuad3DBorderController_UpdateHandles
               (GizmoBoxQuad3DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
    pGVar2 = (this->fields)._._data;
    this_00 = (pGVar1->fields).TargetHandle;
    pGVar3 = (pGVar2->fields).Border;
    if ((pGVar3 != (GizmoQuad3DBorder *)0x0) && (this_00 != (GizmoHandle *)0x0)) {
      shapeIndex = (pGVar2->fields).TopBoxIndex;
      if ((pGVar3->fields)._isVisible == 0) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible(this_00,shapeIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).RightBoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).BottomBoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).LeftBoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).TopLeftBoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).TopRightBoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).BottomRightBoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        isVisible = 0;
      }
      else {
        GizmoHandle::GizmoHandle_Set3DShapeVisible(this_00,shapeIndex,1,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).RightBoxIndex,1,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).BottomBoxIndex,1,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).LeftBoxIndex,1,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).TopLeftBoxIndex,1,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).TopRightBoxIndex,1,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).BottomRightBoxIndex,1,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        isVisible = 1;
      }
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (this_00,(pGVar1->fields).BottomLeftBoxIndex,isVisible,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
        uVar4 = (pGVar1->fields).BorderQuadIndex;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar5 = (this_00->fields)._3DShapes;
        if (pLVar5 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
          if ((uint)(pLVar5->fields)._size <= uVar4) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
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
              (pGVar7->vector[(int)uVar4]->fields)._isVisible = 0;
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
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxQuad3DBorderController::
     GizmoBoxQuad3DBorderController_UpdateTransforms
               (GizmoBoxQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
      ((pGVar1->fields).PlaneSlider != (GizmoPlaneSlider3D *)0x0)) &&
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 != (QuadShape3D *)0x0)) {
    pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                        ((Vector3 *)&QStack_4,(TriangPrismShape3D *)pQVar2,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    fVar5 = pVVar3->z;
    uVar6._0_4_ = pVVar3->x;
    uVar6._4_4_ = pVVar3->y;
    if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
       (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 != (QuadShape3D *)0x0)) {
      pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                          ((Vector3 *)&QStack_4,(TriangPrismShape3D *)pQVar2,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      uVar7._0_4_ = pVVar3->x;
      uVar7._4_4_ = pVVar3->y;
      fVar8 = pVVar3->z;
      aQStack_9[0]._0_8_ = uVar7;
      if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
         (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 != (QuadShape3D *)0x0)) {
        pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Look
                            ((Vector3 *)&QStack_4,(TriangPrismShape3D *)pQVar2,(MethodInfo *)0x0)
        ;
        uVar10._0_4_ = pVVar3->x;
        uVar10._4_4_ = pVVar3->y;
        fVar11 = pVVar3->z;
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
           (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 != (QuadShape3D *)0x0)) {
          QStack_4.x = (pQVar2->fields)._rotation.x;
          QStack_4.y = (pQVar2->fields)._rotation.y;
          QStack_4.z = (pQVar2->fields)._rotation.z;
          QStack_4.w = (pQVar2->fields)._rotation.w;
          QStack_12.z = (pQVar2->fields)._center.z;
          fVar13 = (pQVar2->fields)._size.y;
          QStack_12.x = (pQVar2->fields)._center.x;
          QStack_12.y = (pQVar2->fields)._center.y;
          fVar14 = (pQVar2->fields)._size.x;
          pLVar15 = QuadMath::QuadMath_Calc3DQuadCornerPoints
                              ((Vector3 *)&QStack_12,(pQVar2->fields)._size,&QStack_4,
                               (MethodInfo *)0x0);
          if (pLVar15 != (List_1_UnityEngine_Vector3_ *)0x0) {
            if ((pLVar15->fields)._size == 0) {
code_?:
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pVVar17 = (pLVar15->fields)._items;
            if (pVVar17 != (Vector3__Array *)0x0) {
              if ((int)pVVar17->max_length == 0) {
code_?:
                FUN_?();
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              QStack_18.x = pVVar17->vector[0].x;
              QStack_18.y = pVVar17->vector[0].y;
              fVar19 = pVVar17->vector[0].z;
              if ((uint)(pLVar15->fields)._size < 2) goto code_?;
              if (pVVar17 != (Vector3__Array *)0x0) {
                if ((uint)pVVar17->max_length < 2) goto code_?;
                QStack_20.x = pVVar17->vector[1].x;
                QStack_20.y = pVVar17->vector[1].y;
                fVar21 = pVVar17->vector[1].z;
                if ((uint)(pLVar15->fields)._size < 3) goto code_?;
                if (pVVar17 != (Vector3__Array *)0x0) {
                  if ((uint)pVVar17->max_length < 3) goto code_?;
                  QStack_22.x = pVVar17->vector[2].x;
                  QStack_22.y = pVVar17->vector[2].y;
                  fStack_23 = pVVar17->vector[2].z;
                  if ((uint)(pLVar15->fields)._size < 4) goto code_?;
                  pVVar17 = (pLVar15->fields)._items;
                  if (pVVar17 != (Vector3__Array *)0x0) {
                    if ((uint)pVVar17->max_length < 4) goto code_?;
                    pGVar1 = (this->fields)._._data;
                    QStack_4.x = pVVar17->vector[3].x;
                    QStack_4.y = pVVar17->vector[3].y;
                    fStack_24 = pVVar17->vector[3].z;
                    if (((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                        (pGVar25 = (pGVar1->fields).Border, pGVar25 != (GizmoQuad3DBorder *)0x0)) &&
                       (pGVar26 = (pGVar25->fields)._planeSlider,
                       pGVar26 != (GizmoPlaneSlider3D *)0x0)) {
                      lVar27 = 0xd8;
                      if ((pGVar26->fields)._sharedLookAndFeel ==
                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                        lVar27 = 0xd0;
                      }
                      lVar27 = *(longlong *)((longlong)&pGVar26->klass + lVar27);
                      if (lVar27 != 0) {
                        uVar28 = 0xd8;
                        if ((pGVar26->fields)._sharedLookAndFeel ==
                            (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                          uVar28 = 0xd0;
                        }
                        fVar29 = zoomFactor * *(float *)(lVar27 + 0x30) *
                                 *(float *)(*(longlong *)
                                             ((longlong)&pGVar26->klass + (ulonglong)uVar28) + 0x14)
                        ;
                        pGVar26 = (((((this->fields)._._data)->fields).Border)->fields)._planeSlider
                        ;
                        bVar30 = (pGVar26->fields)._sharedLookAndFeel ==
                                 (GizmoPlaneSlider3DLookAndFeel *)0x0;
                        lVar27 = 0xd8;
                        if (bVar30) {
                          lVar27 = 0xd0;
                        }
                        uVar28 = 0xd8;
                        if (bVar30) {
                          uVar28 = 0xd0;
                        }
                        fVar31 = zoomFactor *
                                 *(float *)(*(longlong *)((longlong)&pGVar26->klass + lVar27) + 0x34
                                           ) *
                                 *(float *)(*(longlong *)
                                             ((longlong)&pGVar26->klass + (ulonglong)uVar28) + 0x14)
                        ;
                        this_00 = (((this->fields)._._data)->fields).TopLeftBox;
                        if (this_00 != (BoxShape3D *)0x0) {
                          QStack_12._0_8_ = uVar10;
                          QStack_12.z = fVar11;
                          BoxShape3D::BoxShape3D_AlignHeight
                                    (this_00,(Vector3 *)&QStack_12,(MethodInfo *)0x0);
                          QStack_12._0_8_ = uVar6;
                          QStack_12.z = fVar5;
                          BoxShape3D::BoxShape3D_AlignWidth
                                    (this_00,(Vector3 *)&QStack_12,(MethodInfo *)0x0);
                          uVar28 = _UNK_?;
                          (this_00->fields)._size.x = (float)((uint)fVar31 & _UNK_?);
                          (this_00->fields)._size.y = (float)((uint)fVar29 & uVar28);
                          (this_00->fields)._size.z = (float)((uint)fVar31 & uVar28);
                          QStack_12._0_8_ = uVar7;
                          QStack_12.z = fVar8;
                          fVar32 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                             (this_00,(Vector3 *)&QStack_12,(MethodInfo *)0x0);
                          fVar33 = _UNK_?;
                          fVar34 = aQStack_9[0].x;
                          QStack_18.y = QStack_18.y - fVar32 * aQStack_9[0].y * _UNK_?;
                          QStack_18.x = QStack_18.x - fVar32 * aQStack_9[0].x * _UNK_?;
                          QStack_18.z = fVar19 - fVar32 * fVar8 * _UNK_?;
                          BoxShape3D::BoxShape3D_SetFaceCenter
                                    (this_00,BoxFace__Enum_Left,(Vector3 *)&QStack_18,
                                     (MethodInfo *)0x0);
                          pGVar1 = (this->fields)._._data;
                          if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                             (pBVar35 = (pGVar1->fields).TopRightBox, pBVar35 != (BoxShape3D *)0x0))
                          {
                            QStack_18._0_8_ = uVar10;
                            QStack_18.z = fVar11;
                            BoxShape3D::BoxShape3D_AlignHeight
                                      (pBVar35,(Vector3 *)&QStack_18,(MethodInfo *)0x0);
                            QStack_18._0_8_ = uVar6;
                            QStack_18.z = fVar5;
                            BoxShape3D::BoxShape3D_AlignWidth
                                      (pBVar35,(Vector3 *)&QStack_18,(MethodInfo *)0x0);
                            (pBVar35->fields)._size.x = (float)((uint)fVar31 & uVar28);
                            (pBVar35->fields)._size.y = (float)((uint)fVar29 & uVar28);
                            (pBVar35->fields)._size.z = (float)((uint)fVar31 & uVar28);
                            QStack_18._0_8_ = uVar7;
                            QStack_18.z = fVar8;
                            fVar19 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                               (pBVar35,(Vector3 *)&QStack_18,(MethodInfo *)0x0);
                            QStack_20.z = fVar21 - fVar19 * fVar8 * fVar33;
                            QStack_20.y = QStack_20.y - fVar19 * aQStack_9[0].y * fVar33;
                            QStack_20.x = QStack_20.x - fVar19 * fVar34 * fVar33;
                            BoxShape3D::BoxShape3D_SetFaceCenter
                                      (pBVar35,BoxFace__Enum_Right,(Vector3 *)&QStack_20,
                                       (MethodInfo *)0x0);
                            pGVar1 = (this->fields)._._data;
                            if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                               (this_01 = (pGVar1->fields).BottomRightBox,
                               this_01 != (BoxShape3D *)0x0)) {
                              QStack_20._0_8_ = uVar10;
                              QStack_20.z = fVar11;
                              BoxShape3D::BoxShape3D_AlignHeight
                                        (this_01,(Vector3 *)&QStack_20,(MethodInfo *)0x0);
                              QStack_20._0_8_ = uVar6;
                              QStack_20.z = fVar5;
                              BoxShape3D::BoxShape3D_AlignWidth
                                        (this_01,(Vector3 *)&QStack_20,(MethodInfo *)0x0);
                              (this_01->fields)._size.x = (float)((uint)fVar31 & uVar28);
                              (this_01->fields)._size.y = (float)((uint)fVar29 & uVar28);
                              (this_01->fields)._size.z = (float)((uint)fVar31 & uVar28);
                              QStack_20._0_8_ = uVar7;
                              QStack_20.z = fVar8;
                              fVar19 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                 (this_01,(Vector3 *)&QStack_20,(MethodInfo *)0x0);
                              uVar36._0_4_ = fVar19 * fVar34 * fVar33 + QStack_22.x;
                              QStack_22.z = fVar19 * fVar8 * fVar33 + fStack_23;
                              uVar36._4_4_ = fVar19 * aQStack_9[0].y * fVar33 + QStack_22.y;
                              QStack_22._0_8_ = uVar36;
                              BoxShape3D::BoxShape3D_SetFaceCenter
                                        (this_01,BoxFace__Enum_Right,(Vector3 *)&QStack_22,
                                         (MethodInfo *)0x0);
                              pGVar1 = (this->fields)._._data;
                              if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                                 (this_02 = (pGVar1->fields).BottomLeftBox,
                                 this_02 != (BoxShape3D *)0x0)) {
                                QStack_22._0_8_ = uVar10;
                                QStack_22.z = fVar11;
                                BoxShape3D::BoxShape3D_AlignHeight
                                          (this_02,(Vector3 *)&QStack_22,(MethodInfo *)0x0);
                                QStack_22._0_8_ = uVar6;
                                QStack_22.z = fVar5;
                                BoxShape3D::BoxShape3D_AlignWidth
                                          (this_02,(Vector3 *)&QStack_22,(MethodInfo *)0x0);
                                (this_02->fields)._size.x = (float)((uint)fVar31 & uVar28);
                                (this_02->fields)._size.y = (float)((uint)fVar29 & uVar28);
                                (this_02->fields)._size.z = (float)((uint)fVar31 & uVar28);
                                QStack_22._0_8_ = uVar7;
                                QStack_22.z = fVar8;
                                fVar19 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                   (this_02,(Vector3 *)&QStack_22,(MethodInfo *)0x0
                                                   );
                                uVar37._0_4_ = fVar19 * fVar34 * fVar33 + QStack_4.x;
                                uVar37._4_4_ = fVar19 * aQStack_9[0].y * fVar33 + QStack_4.y;
                                QStack_4.z = fVar19 * fVar8 * fVar33 + fStack_24;
                                QStack_4._0_8_ = uVar37;
                                BoxShape3D::BoxShape3D_SetFaceCenter
                                          (this_02,BoxFace__Enum_Left,(Vector3 *)&QStack_4,
                                           (MethodInfo *)0x0);
                                pGVar1 = (this->fields)._._data;
                                if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                                   (pBVar38 = (pGVar1->fields).TopBox, pBVar38 != (BoxShape3D *)0x0)
                                   ) {
                                  QStack_4._0_8_ = uVar10;
                                  QStack_4.z = fVar11;
                                  BoxShape3D::BoxShape3D_AlignHeight
                                            (pBVar38,(Vector3 *)&QStack_4,(MethodInfo *)0x0);
                                  QStack_4._0_8_ = uVar6;
                                  QStack_4.z = fVar5;
                                  BoxShape3D::BoxShape3D_AlignWidth
                                            (pBVar38,(Vector3 *)&QStack_4,(MethodInfo *)0x0);
                                  QStack_4._0_8_ = uVar6;
                                  QStack_4.z = fVar5;
                                  fVar19 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                     (this_00,(Vector3 *)&QStack_4,
                                                      (MethodInfo *)0x0);
                                  (pBVar38->fields)._size.x =
                                       (float)((uint)(fVar14 - (fVar19 + fVar19)) & uVar28);
                                  (pBVar38->fields)._size.y = (float)((uint)fVar29 & uVar28);
                                  (pBVar38->fields)._size.z = (float)((uint)fVar31 & uVar28);
                                  pVVar3 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                      ((Vector3 *)&QStack_22,this_00,
                                                       BoxFace__Enum_Right,(MethodInfo *)0x0);
                                  QStack_4.x = pVVar3->x;
                                  QStack_4.y = pVVar3->y;
                                  QStack_4.z = pVVar3->z;
                                  BoxShape3D::BoxShape3D_SetFaceCenter
                                            (pBVar38,BoxFace__Enum_Left,(Vector3 *)&QStack_4,
                                             (MethodInfo *)0x0);
                                  pGVar1 = (this->fields)._._data;
                                  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                                     (pBVar38 = (pGVar1->fields).RightBox,
                                     pBVar38 != (BoxShape3D *)0x0)) {
                                    QStack_4._0_8_ = uVar10;
                                    QStack_4.z = fVar11;
                                    BoxShape3D::BoxShape3D_AlignHeight
                                              (pBVar38,(Vector3 *)&QStack_4,(MethodInfo *)0x0);
                                    QStack_4._0_8_ = uVar7;
                                    QStack_4.z = fVar8;
                                    BoxShape3D::BoxShape3D_AlignWidth
                                              (pBVar38,(Vector3 *)&QStack_4,(MethodInfo *)0x0);
                                    QStack_4._0_8_ = uVar7;
                                    QStack_4.z = fVar8;
                                    fVar19 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                       (pBVar35,(Vector3 *)&QStack_4,
                                                        (MethodInfo *)0x0);
                                    (pBVar38->fields)._size.x =
                                         (float)((uint)(fVar13 - (fVar19 + fVar19)) & uVar28);
                                    (pBVar38->fields)._size.y = (float)((uint)fVar29 & uVar28);
                                    (pBVar38->fields)._size.z = (float)((uint)fVar31 & uVar28);
                                    pVVar3 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                        ((Vector3 *)&QStack_22,pBVar35,
                                                         BoxFace__Enum_Back,(MethodInfo *)0x0);
                                    QStack_4.x = pVVar3->x;
                                    QStack_4.y = pVVar3->y;
                                    QStack_4.z = pVVar3->z;
                                    BoxShape3D::BoxShape3D_SetFaceCenter
                                              (pBVar38,BoxFace__Enum_Right,(Vector3 *)&QStack_4,
                                               (MethodInfo *)0x0);
                                    pGVar1 = (this->fields)._._data;
                                    if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                                       (pBVar35 = (pGVar1->fields).BottomBox,
                                       pBVar35 != (BoxShape3D *)0x0)) {
                                      QStack_4._0_8_ = uVar10;
                                      QStack_4.z = fVar11;
                                      BoxShape3D::BoxShape3D_AlignHeight
                                                (pBVar35,(Vector3 *)&QStack_4,(MethodInfo *)0x0);
                                      QStack_4._0_8_ = uVar6;
                                      QStack_4.z = fVar5;
                                      BoxShape3D::BoxShape3D_AlignWidth
                                                (pBVar35,(Vector3 *)&QStack_4,(MethodInfo *)0x0);
                                      QStack_4._0_8_ = uVar6;
                                      QStack_4.z = fVar5;
                                      fVar5 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                         (this_01,(Vector3 *)&QStack_4,
                                                          (MethodInfo *)0x0);
                                      (pBVar35->fields)._size.x =
                                           (float)((uint)(fVar14 - (fVar5 + fVar5)) & uVar28);
                                      (pBVar35->fields)._size.y = (float)((uint)fVar29 & uVar28);
                                      (pBVar35->fields)._size.z = (float)((uint)fVar31 & uVar28);
                                      pVVar3 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                          ((Vector3 *)&QStack_22,this_02,
                                                           BoxFace__Enum_Right,(MethodInfo *)0x0);
                                      QStack_4.x = pVVar3->x;
                                      QStack_4.y = pVVar3->y;
                                      QStack_4.z = pVVar3->z;
                                      BoxShape3D::BoxShape3D_SetFaceCenter
                                                (pBVar35,BoxFace__Enum_Left,(Vector3 *)&QStack_4,
                                                 (MethodInfo *)0x0);
                                      pGVar1 = (this->fields)._._data;
                                      if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                                         (pBVar35 = (pGVar1->fields).LeftBox,
                                         pBVar35 != (BoxShape3D *)0x0)) {
                                        QStack_4._0_8_ = uVar10;
                                        QStack_4.z = fVar11;
                                        BoxShape3D::BoxShape3D_AlignHeight
                                                  (pBVar35,(Vector3 *)&QStack_4,(MethodInfo *)0x0)
                                        ;
                                        QStack_4._0_8_ = uVar7;
                                        QStack_4.z = fVar8;
                                        BoxShape3D::BoxShape3D_AlignWidth
                                                  (pBVar35,(Vector3 *)&QStack_4,(MethodInfo *)0x0)
                                        ;
                                        QStack_4._0_8_ = uVar7;
                                        QStack_4.z = fVar8;
                                        fVar5 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                           (this_00,(Vector3 *)&QStack_4,
                                                            (MethodInfo *)0x0);
                                        (pBVar35->fields)._size.x =
                                             (float)((uint)(fVar13 - (fVar5 + fVar5)) & uVar28);
                                        (pBVar35->fields)._size.y = (float)((uint)fVar29 & uVar28);
                                        (pBVar35->fields)._size.z = (float)((uint)fVar31 & uVar28);
                                        pVVar3 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                            ((Vector3 *)&QStack_22,this_00,
                                                             BoxFace__Enum_Back,(MethodInfo *)0x0);
                                        QStack_4.x = pVVar3->x;
                                        QStack_4.y = pVVar3->y;
                                        QStack_4.z = pVVar3->z;
                                        BoxShape3D::BoxShape3D_SetFaceCenter
                                                  (pBVar35,BoxFace__Enum_Right,
                                                   (Vector3 *)&QStack_4,(MethodInfo *)0x0);
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
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

