
/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::GizmoCircleCap2DController_CapSlider2D
               (GizmoCircleCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  VStack_2 = sliderEndPt;
  VStack_3 = sliderDirection;
  if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
      (pGVar4 = (pGVar1->fields).Cap, pGVar4 != (GizmoCap2D *)0x0)) &&
     (pGVar5 = (pGVar4->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) {
    if ((pGVar5->fields)._firingChanged3DEvent == 0) {
      pVVar6 = (pGVar5->fields)._axes2D;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((int)pVVar6->max_length == 0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pQVar8 = QuaternionEx::QuaternionEx_FromToRotation2D
                         (&QStack_9,pVVar6->vector[0],sliderDirection,(MethodInfo *)0x0);
      QStack_9.x = pQVar8->x;
      QStack_9.y = pQVar8->y;
      QStack_9.z = pQVar8->z;
      QStack_9.w = pQVar8->w;
      fVar10 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_9,(MethodInfo *)0x0);
      GizmoTransform::GizmoTransform_ChangeRotation2D
                (pGVar5,fVar10 + (pGVar5->fields)._rotation2DDegrees,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
      pGVar4 = (pGVar1->fields).Cap;
      uVar11 = FUN_?(&VStack_3);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
         (pGVar12 = (pGVar1->fields).Cap, pGVar12 != (GizmoCap2D *)0x0)) {
        lVar13 = 0x88;
        if ((pGVar12->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          lVar13 = 0x80;
        }
        lVar13 = *(longlong *)((longlong)&pGVar12->klass + lVar13);
        if (lVar13 != 0) {
          uVar14 = 0x88;
          if ((pGVar12->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            uVar14 = 0x80;
          }
          fVar10 = *(float *)(*(longlong *)((longlong)&pGVar12->klass + (ulonglong)uVar14) + 0x18) *
                   *(float *)(lVar13 + 0x1c);
          fStackX_c = (float)((ulonglong)uVar11 >> 0x20);
          fStackX_8 = (float)uVar11;
          fVar15 = fVar10 * fStackX_c + VStack_2.y;
          fVar10 = fVar10 * fStackX_8 + VStack_2.x;
          if (pGVar4 != (GizmoCap2D *)0x0) {
            pGVar5 = (pGVar4->fields)._transform;
            if (pGVar5 == (GizmoTransform *)0x0) {
              FUN_?(0,CONCAT44(fVar15,fVar10),0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (((pGVar5->fields)._firingChanged2DEvent == 0) &&
               (fVar16 = (pGVar5->fields)._position2D.x - fVar10,
               fVar17 = (pGVar5->fields)._position2D.y - fVar15,
               _UNK_? <= fVar17 * fVar17 + fVar16 * fVar16)) {
              (pGVar5->fields)._position2D.x = fVar10;
              (pGVar5->fields)._position2D.y = fVar15;
              if ((pGVar5->fields)._parent == (GizmoTransform *)0x0) {
                fVar10 = (pGVar5->fields)._position2D.x;
                fVar15 = (pGVar5->fields)._position2D.y;
              }
              else {
                pGVar18 = (pGVar5->fields)._parent;
                fStack_19 = (pGVar18->fields)._rotation2D.x;
                fStack_20 = (pGVar18->fields)._rotation2D.y;
                fStack_21 = (pGVar18->fields)._rotation2D.z;
                fStack_22 = (pGVar18->fields)._rotation2D.w;
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(&fStack_19);
                pGVar18 = (pGVar5->fields)._parent;
                if (pGVar18 == (GizmoTransform *)0x0) {
                  FUN_?();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                fVar15 = (pGVar5->fields)._position2D.x - (pGVar18->fields)._position2D.x;
                fVar16 = (pGVar5->fields)._position2D.y - (pGVar18->fields)._position2D.y;
                QStack_9.y = unaff_XMM6_Db;
                QStack_9.x = unaff_XMM6_Da;
                QStack_9.w = unaff_XMM6_Dd;
                QStack_9.z = unaff_XMM6_Dc;
                VStack_2.y = unaff_XMM7_Db;
                VStack_2.x = unaff_XMM7_Da;
                VStack_3.y = unaff_XMM7_Dd;
                VStack_3.x = unaff_XMM7_Dc;
                uStack_23 = (undefined *)CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
                fVar10 = (_UNK_? - 0.0) * fVar15 + fVar16 * 0.0 + 0.0;
                fVar15 = (_UNK_? - 0.0) * fVar16 + fVar15 * 0.0 + 0.0;
              }
              (pGVar5->fields)._localPosition2D.x = fVar10;
              (pGVar5->fields)._localPosition2D.y = fVar15;
              GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar5,(MethodInfo *)0x0);
              pGVar24 = (pGVar5->fields).Changed;
              (pGVar5->fields)._firingChanged2DEvent = 1;
              if (pGVar24 != (GizmoEntityTransformChangedHandler *)0x0) {
                (*(pGVar24->fields)._._.invoke_impl)
                          ((pGVar24->fields)._._.method_code,pGVar5,0x100000000,
                           (pGVar24->fields)._._.method);
              }
              (pGVar5->fields)._firingChanged2DEvent = 0;
              return;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CapSlider2DInvert(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::
     GizmoCircleCap2DController_CapSlider2DInvert
               (GizmoCircleCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
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
      if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
        pGVar6 = (pGVar1->fields).Cap;
        uVar12 = FUN_?(&VStack_2);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
           (pGVar13 = (pGVar1->fields).Cap, pGVar13 != (GizmoCap2D *)0x0)) {
          lVar14 = 0x88;
          if ((pGVar13->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            lVar14 = 0x80;
          }
          lVar14 = *(longlong *)((longlong)&pGVar13->klass + lVar14);
          if (lVar14 != 0) {
            uVar15 = 0x88;
            if ((pGVar13->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
              uVar15 = 0x80;
            }
            fVar4 = *(float *)(*(longlong *)((longlong)&pGVar13->klass + (ulonglong)uVar15) + 0x18) *
                     *(float *)(lVar14 + 0x1c);
            fStackX_c = (float)((ulonglong)uVar12 >> 0x20);
            fStackX_8 = (float)uVar12;
            fVar5 = fVar4 * fStackX_c + VStack_3.y;
            fVar4 = fVar4 * fStackX_8 + VStack_3.x;
            if (pGVar6 != (GizmoCap2D *)0x0) {
              pGVar7 = (pGVar6->fields)._transform;
              if (pGVar7 == (GizmoTransform *)0x0) {
                FUN_?(0,CONCAT44(fVar5,fVar4),0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (((pGVar7->fields)._firingChanged2DEvent == 0) &&
                 (fVar16 = (pGVar7->fields)._position2D.x - fVar4,
                 fVar17 = (pGVar7->fields)._position2D.y - fVar5,
                 _UNK_? <= fVar17 * fVar17 + fVar16 * fVar16)) {
                (pGVar7->fields)._position2D.x = fVar4;
                (pGVar7->fields)._position2D.y = fVar5;
                if ((pGVar7->fields)._parent == (GizmoTransform *)0x0) {
                  fVar4 = (pGVar7->fields)._position2D.x;
                  fVar5 = (pGVar7->fields)._position2D.y;
                }
                else {
                  pGVar18 = (pGVar7->fields)._parent;
                  fStack_19 = (pGVar18->fields)._rotation2D.x;
                  fStack_20 = (pGVar18->fields)._rotation2D.y;
                  fStack_21 = (pGVar18->fields)._rotation2D.z;
                  fStack_22 = (pGVar18->fields)._rotation2D.w;
                  pcVar9 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                    uVar12 = func_?(&UNK_?);
                    FUN_?(uVar12,0);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pcRam_? = pcVar9;
                  (*pcRam_?)(&fStack_19);
                  pGVar18 = (pGVar7->fields)._parent;
                  if (pGVar18 == (GizmoTransform *)0x0) {
                    FUN_?();
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  fVar5 = (pGVar7->fields)._position2D.x - (pGVar18->fields)._position2D.x;
                  fVar16 = (pGVar7->fields)._position2D.y - (pGVar18->fields)._position2D.y;
                  QStack_11.y = unaff_XMM6_Db;
                  QStack_11.x = unaff_XMM6_Da;
                  QStack_11.w = unaff_XMM6_Dd;
                  QStack_11.z = unaff_XMM6_Dc;
                  VStack_2.y = unaff_XMM7_Db;
                  VStack_2.x = unaff_XMM7_Da;
                  VStack_3.y = unaff_XMM7_Dd;
                  VStack_3.x = unaff_XMM7_Dc;
                  uStack_23 = (undefined *)CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
                  fVar4 = (_UNK_? - 0.0) * fVar5 + fVar16 * 0.0 + 0.0;
                  fVar5 = (_UNK_? - 0.0) * fVar16 + fVar5 * 0.0 + 0.0;
                }
                (pGVar7->fields)._localPosition2D.x = fVar4;
                (pGVar7->fields)._localPosition2D.y = fVar5;
                GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar7,(MethodInfo *)0x0);
                pGVar24 = (pGVar7->fields).Changed;
                (pGVar7->fields)._firingChanged2DEvent = 1;
                if (pGVar24 != (GizmoEntityTransformChangedHandler *)0x0) {
                  (*(pGVar24->fields)._._.invoke_impl)
                            ((pGVar24->fields)._._.method_code,pGVar7,0x100000000,
                             (pGVar24->fields)._._.method);
                }
                (pGVar7->fields)._firingChanged2DEvent = 0;
                return;
              }
              return;
            }
          }
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

float Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::
      GizmoCircleCap2DController_GetSliderAlignedRealLength
                (GizmoCircleCap2DController *this,MethodInfo *method)

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
      fVar5 = *(float *)(*(longlong *)((longlong)&pGVar2->klass + (ulonglong)uVar4) + 0x18) *
              *(float *)(lVar3 + 0x1c);
      return fVar5 + fVar5;
    }
  }
  FUN_?(pGVar2,method);
  pcVar6 = (code *)swi(3);
  fVar5 = (float)(*pcVar6)();
  return fVar5;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::GizmoCircleCap2DController_UpdateHandles
               (GizmoCircleCap2DController *this,MethodInfo *method)

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
                (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
        bVar4 = (pGVar3->fields)._._isVisible;
        uVar5 = (pGVar1->fields).CircleIndex;
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

void Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::
     GizmoCircleCap2DController_UpdateTransforms
               (GizmoCircleCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) {
    lVar3 = 0x88;
    if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      lVar3 = 0x80;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if (lVar3 != 0) {
      pCVar4 = (pGVar1->fields).Circle;
      uVar5 = 0x88;
      if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        uVar5 = 0x80;
      }
      if (((pCVar4 != (CircleShape2D *)0x0) &&
          ((pCVar4->fields)._radius =
                (float)((uint)(*(float *)(*(longlong *)((longlong)&pGVar2->klass + (ulonglong)uVar5)
                                         + 0x18) * *(float *)(lVar3 + 0x1c)) & _UNK_?),
          pGVar1 != (GizmoCap2DControllerData *)0x0)) &&
         (pGVar6 = (pGVar2->fields)._transform, pGVar6 != (GizmoTransform *)0x0)) {
        fVar7 = (pGVar6->fields)._position2D.y;
        pCVar4 = (pGVar1->fields).Circle;
        if (pCVar4 != (CircleShape2D *)0x0) {
          (pCVar4->fields)._center.x = (pGVar6->fields)._position2D.x;
          (pCVar4->fields)._center.y = fVar7;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

