
/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::GizmoQuadCap2DController_CapSlider2D
               (GizmoQuadCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  VStack_2 = sliderDirection;
  VStack_3 = sliderEndPt;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar4 = (pGVar1->fields).Cap, pGVar4 != (GizmoCap2D *)0x0)) {
    pGVar5 = (pGVar4->fields)._transform;
    VStack_2.y = sliderDirection.y;
    fVar6 = VStack_2.y;
    if (pGVar5 != (GizmoTransform *)0x0) {
      fStack_7 = unaff_XMM7_Da;
      fStack_8 = unaff_XMM7_Db;
      fStack_9 = unaff_XMM7_Dc;
      fStack_10 = unaff_XMM7_Dd;
      if ((pGVar5->fields)._firingChanged3DEvent == 0) {
        pVVar11 = (pGVar5->fields)._axes2D;
        if (pVVar11 == (Vector2__Array *)0x0) goto code_?;
        if ((int)pVVar11->max_length == 0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pQVar13 = QuaternionEx::QuaternionEx_FromToRotation2D
                           (&QStack_14,pVVar11->vector[0],sliderDirection,(MethodInfo *)0x0);
        QStack_14.x = pQVar13->x;
        QStack_14.y = pQVar13->y;
        QStack_14.z = pQVar13->z;
        QStack_14.w = pQVar13->w;
        fVar15 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_14,(MethodInfo *)0x0);
        GizmoTransform::GizmoTransform_ChangeRotation2D
                  (pGVar5,fVar15 + (pGVar5->fields)._rotation2DDegrees,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
         (pGVar4 = (pGVar1->fields).Cap, pGVar4 != (GizmoCap2D *)0x0)) {
        lVar16 = 0x88;
        if ((pGVar4->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          lVar16 = 0x80;
        }
        lVar16 = *(longlong *)((longlong)&pGVar4->klass + lVar16);
        if (lVar16 != 0) {
          uVar17 = 0x88;
          if ((pGVar4->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            uVar17 = 0x80;
          }
          fVar15 = *(float *)(*(longlong *)((longlong)&pGVar4->klass + (ulonglong)uVar17) + 0x18) *
                   *(float *)(lVar16 + 0x20);
          fVar18 = fVar15 * fVar6 * _UNK_? + VStack_3.y;
          fVar6 = fVar15 * VStack_2.x * _UNK_? + VStack_3.x;
          uVar19._4_4_ = fStack_8;
          uVar19._0_4_ = fStack_7;
          uVar20._4_4_ = fStack_10;
          uVar20._0_4_ = fStack_9;
          pGVar5 = (pGVar4->fields)._transform;
          if (pGVar5 != (GizmoTransform *)0x0) {
            if (((pGVar5->fields)._firingChanged2DEvent != 0) ||
               (fVar15 = (pGVar5->fields)._position2D.x - fVar6,
               fVar21 = (pGVar5->fields)._position2D.y - fVar18,
               fVar21 * fVar21 + fVar15 * fVar15 < _UNK_?)) {
              return;
            }
            (pGVar5->fields)._position2D.x = fVar6;
            (pGVar5->fields)._position2D.y = fVar18;
            if ((pGVar5->fields)._parent == (GizmoTransform *)0x0) {
              fVar6 = (pGVar5->fields)._position2D.x;
              fVar15 = (pGVar5->fields)._position2D.y;
            }
            else {
              pGVar22 = (pGVar5->fields)._parent;
              fStack_23 = (pGVar22->fields)._rotation2D.x;
              fStack_24 = (pGVar22->fields)._rotation2D.y;
              fStack_25 = (pGVar22->fields)._rotation2D.z;
              fStack_26 = (pGVar22->fields)._rotation2D.w;
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcRam_? = pcVar12;
              (*pcRam_?)(&fStack_23);
              pGVar22 = (pGVar5->fields)._parent;
              if (pGVar22 == (GizmoTransform *)0x0) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              fVar15 = (pGVar5->fields)._position2D.x - (pGVar22->fields)._position2D.x;
              fVar18 = (pGVar5->fields)._position2D.y - (pGVar22->fields)._position2D.y;
              VStack_2.y = unaff_XMM8_Db;
              VStack_2.x = unaff_XMM8_Da;
              VStack_3.y = unaff_XMM8_Dd;
              VStack_3.x = unaff_XMM8_Dc;
              uStack_27 = (undefined *)CONCAT44(unaff_XMM11_Dd,unaff_XMM11_Dc);
              fVar6 = (_UNK_? - 0.0) * fVar15 + fVar18 * 0.0 + 0.0;
              fVar15 = (_UNK_? - 0.0) * fVar18 + fVar15 * 0.0 + 0.0;
              QStack_14._0_8_ = uVar19;
              QStack_14._8_8_ = uVar20;
            }
            (pGVar5->fields)._localPosition2D.x = fVar6;
            (pGVar5->fields)._localPosition2D.y = fVar15;
            GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar5,(MethodInfo *)0x0);
            pGVar28 = (pGVar5->fields).Changed;
            (pGVar5->fields)._firingChanged2DEvent = 1;
            if (pGVar28 != (GizmoEntityTransformChangedHandler *)0x0) {
              (*(pGVar28->fields)._._.invoke_impl)
                        ((pGVar28->fields)._._.method_code,pGVar5,0x100000000,
                         (pGVar28->fields)._._.method);
            }
            (pGVar5->fields)._firingChanged2DEvent = 0;
            return;
          }
          FUN_?(0,CONCAT44(fVar18,fVar6),0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void CapSlider2DInvert(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::GizmoQuadCap2DController_CapSlider2DInvert
               (GizmoQuadCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  VStack_2 = sliderDirection;
  VStack_3 = sliderEndPt;
  if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
    VStack_2.x = sliderDirection.x;
    VStack_2.y = sliderDirection.y;
    fVar4 = (float)((uint)VStack_2.x ^ _UNK_?);
    fVar5 = (float)((uint)VStack_2.y ^ _UNK_?);
    pGVar6 = (pGVar1->fields).Cap;
    if ((pGVar6 != (GizmoCap2D *)0x0) &&
       (pGVar7 = (pGVar6->fields)._transform, pGVar7 != (GizmoTransform *)0x0)) {
      if ((pGVar7->fields)._firingChanged3DEvent == 0) {
        pVVar8 = (pGVar7->fields)._axes2D;
        if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
        if ((int)pVVar8->max_length == 0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        to.y = fVar5;
        to.x = fVar4;
        pQVar10 = QuaternionEx::QuaternionEx_FromToRotation2D
                           (&QStack_11,pVVar8->vector[0],to,(MethodInfo *)0x0);
        QStack_11.x = pQVar10->x;
        QStack_11.y = pQVar10->y;
        QStack_11.z = pQVar10->z;
        QStack_11.w = pQVar10->w;
        fVar4 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_11,(MethodInfo *)0x0);
        GizmoTransform::GizmoTransform_ChangeRotation2D
                  (pGVar7,fVar4 + (pGVar7->fields)._rotation2DDegrees,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
         (pGVar6 = (pGVar1->fields).Cap, pGVar6 != (GizmoCap2D *)0x0)) {
        lVar12 = 0x88;
        if ((pGVar6->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          lVar12 = 0x80;
        }
        lVar12 = *(longlong *)((longlong)&pGVar6->klass + lVar12);
        if (lVar12 != 0) {
          uVar13 = 0x88;
          if ((pGVar6->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            uVar13 = 0x80;
          }
          fVar4 = *(float *)(*(longlong *)((longlong)&pGVar6->klass + (ulonglong)uVar13) + 0x18) *
                   *(float *)(lVar12 + 0x20);
          fVar5 = fVar4 * VStack_2.y * _UNK_? + VStack_3.y;
          fVar4 = fVar4 * VStack_2.x * _UNK_? + VStack_3.x;
          pGVar7 = (pGVar6->fields)._transform;
          if (pGVar7 != (GizmoTransform *)0x0) {
            if (((pGVar7->fields)._firingChanged2DEvent != 0) ||
               (fVar14 = (pGVar7->fields)._position2D.x - fVar4,
               fVar15 = (pGVar7->fields)._position2D.y - fVar5,
               fVar15 * fVar15 + fVar14 * fVar14 < _UNK_?)) {
              return;
            }
            (pGVar7->fields)._position2D.x = fVar4;
            (pGVar7->fields)._position2D.y = fVar5;
            if ((pGVar7->fields)._parent == (GizmoTransform *)0x0) {
              fVar4 = (pGVar7->fields)._position2D.x;
              fVar5 = (pGVar7->fields)._position2D.y;
            }
            else {
              pGVar16 = (pGVar7->fields)._parent;
              fStack_17 = (pGVar16->fields)._rotation2D.x;
              fStack_18 = (pGVar16->fields)._rotation2D.y;
              fStack_19 = (pGVar16->fields)._rotation2D.z;
              fStack_20 = (pGVar16->fields)._rotation2D.w;
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar21 = func_?(&UNK_?);
                FUN_?(uVar21,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(&fStack_17);
              pGVar16 = (pGVar7->fields)._parent;
              if (pGVar16 == (GizmoTransform *)0x0) {
                FUN_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              fVar5 = (pGVar7->fields)._position2D.x - (pGVar16->fields)._position2D.x;
              fVar14 = (pGVar7->fields)._position2D.y - (pGVar16->fields)._position2D.y;
              QStack_11.y = unaff_XMM6_Db;
              QStack_11.x = unaff_XMM6_Da;
              QStack_11.w = unaff_XMM6_Dd;
              QStack_11.z = unaff_XMM6_Dc;
              VStack_2.y = unaff_XMM7_Db;
              VStack_2.x = unaff_XMM7_Da;
              VStack_3.y = unaff_XMM7_Dd;
              VStack_3.x = unaff_XMM7_Dc;
              uStack_22 = (undefined *)CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
              fVar4 = (_UNK_? - 0.0) * fVar5 + fVar14 * 0.0 + 0.0;
              fVar5 = (_UNK_? - 0.0) * fVar14 + fVar5 * 0.0 + 0.0;
            }
            (pGVar7->fields)._localPosition2D.x = fVar4;
            (pGVar7->fields)._localPosition2D.y = fVar5;
            GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar7,(MethodInfo *)0x0);
            pGVar23 = (pGVar7->fields).Changed;
            (pGVar7->fields)._firingChanged2DEvent = 1;
            if (pGVar23 != (GizmoEntityTransformChangedHandler *)0x0) {
              (*(pGVar23->fields)._._.invoke_impl)
                        ((pGVar23->fields)._._.method_code,pGVar7,0x100000000,
                         (pGVar23->fields)._._.method);
            }
            (pGVar7->fields)._firingChanged2DEvent = 0;
            return;
          }
          FUN_?(0,CONCAT44(fVar5,fVar4),0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Single GetSliderAlignedRealLength() */

float Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::
      GizmoQuadCap2DController_GetSliderAlignedRealLength
                (GizmoQuadCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  pGVar2 = (GizmoCap2D *)0x0;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) {
    method = (MethodInfo *)0x88;
    lVar3 = 0x88;
    if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      lVar3 = 0x80;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if (lVar3 != 0) {
      uVar4 = 0x88;
      if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        uVar4 = 0x80;
      }
      return *(float *)(*(longlong *)((longlong)&pGVar2->klass + (ulonglong)uVar4) + 0x18) *
             *(float *)(lVar3 + 0x20);
    }
  }
  FUN_?(pGVar2,method);
  pcVar5 = (code *)swi(3);
  fVar6 = (float)(*pcVar5)();
  return fVar6;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::GizmoQuadCap2DController_UpdateHandles
               (GizmoQuadCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).ArrowIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
        bVar4 = (pGVar3->fields)._._isVisible;
        uVar5 = (pGVar1->fields).QuadIndex;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar6 = (pGVar2->fields)._2DShapes;
        if (pLVar6 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
          if ((uint)(pLVar6->fields)._size <= uVar5) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pGVar8 = (pLVar6->fields)._items;
          if (pGVar8 != (GizmoHandleShape2D__Array *)0x0) {
            if ((uint)pGVar8->max_length <= uVar5) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (pGVar8->vector[(int)uVar5] != (GizmoHandleShape2D *)0x0) {
              (pGVar8->vector[(int)uVar5]->fields)._isVisible = bVar4;
              return;
            }
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::GizmoQuadCap2DController_UpdateTransforms
               (GizmoQuadCap2DController *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar3 = (pGVar2->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) {
    lVar4 = 0x88;
    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      lVar4 = 0x80;
    }
    lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
    if (lVar4 != 0) {
      uVar5 = 0x88;
      if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        uVar5 = 0x80;
      }
      pQVar6 = (pGVar2->fields).Quad;
      if (pQVar6 != (QuadShape2D *)0x0) {
        (pQVar6->fields)._size.x =
             (float)((uint)(*(float *)(lVar4 + 0x20) *
                           *(float *)(*(longlong *)((longlong)&pGVar3->klass + (ulonglong)uVar5) +
                                     0x18)) & _UNK_?);
        if (pGVar2 != (GizmoCap2DControllerData *)0x0) {
          lVar4 = 0x88;
          if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            lVar4 = 0x80;
          }
          lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
          if (lVar4 != 0) {
            pQVar6 = (pGVar2->fields).Quad;
            uVar5 = 0x88;
            if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
              uVar5 = 0x80;
            }
            if (((pQVar6 != (QuadShape2D *)0x0) &&
                ((pQVar6->fields)._size.y =
                      (float)((uint)(*(float *)(*(longlong *)
                                                 ((longlong)&pGVar3->klass + (ulonglong)uVar5) +
                                               0x18) * *(float *)(lVar4 + 0x24)) & uVar1),
                pGVar2 != (GizmoCap2DControllerData *)0x0)) &&
               (pGVar7 = (pGVar3->fields)._transform, pGVar7 != (GizmoTransform *)0x0)) {
              fVar8 = (pGVar7->fields)._position2D.y;
              pQVar6 = (pGVar2->fields).Quad;
              if (pQVar6 != (QuadShape2D *)0x0) {
                (pQVar6->fields)._center.x = (pGVar7->fields)._position2D.x;
                (pQVar6->fields)._center.y = fVar8;
                pGVar2 = (this->fields)._._data;
                if (((pGVar2 != (GizmoCap2DControllerData *)0x0) &&
                    (pGVar7 = (pGVar3->fields)._transform, pGVar7 != (GizmoTransform *)0x0)) &&
                   (pQVar6 = (pGVar2->fields).Quad, pQVar6 != (QuadShape2D *)0x0)) {
                  fVar8 = (float)FUN_?((pGVar7->fields)._rotation2DDegrees);
                  (pQVar6->fields)._rotationDegrees = fVar8;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

