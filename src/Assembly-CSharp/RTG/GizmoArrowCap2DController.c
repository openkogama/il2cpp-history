
/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_CapSlider2D
               (GizmoArrowCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    if ((pGVar3->fields)._firingChanged3DEvent == 0) {
      pVVar4 = (pGVar3->fields)._axes2D;
      if (pVVar4 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar4->max_length < 2) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pQVar6 = QuaternionEx::QuaternionEx_FromToRotation2D
                         (aQStack_7,pVVar4->vector[1],sliderDirection,(MethodInfo *)0x0);
      aQStack_7[0].x = pQVar6->x;
      aQStack_7[0].y = pQVar6->y;
      aQStack_7[0].z = pQVar6->z;
      aQStack_7[0].w = pQVar6->w;
      fVar8 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_7,(MethodInfo *)0x0);
      GizmoTransform::GizmoTransform_ChangeRotation2D
                (pGVar3,fVar8 + (pGVar3->fields)._rotation2DDegrees,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) {
      pGVar3 = (pGVar2->fields)._transform;
      if (pGVar3 == (GizmoTransform *)0x0) {
        FUN_?(0,sliderEndPt,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pGVar3->fields)._firingChanged2DEvent == 0) {
        fVar8 = (pGVar3->fields)._position2D.x - sliderEndPt.x;
        fVar9 = (pGVar3->fields)._position2D.y - sliderEndPt.y;
        if (_UNK_? <= fVar9 * fVar9 + fVar8 * fVar8) {
          (pGVar3->fields)._position2D.x = sliderEndPt.x;
          (pGVar3->fields)._position2D.y = sliderEndPt.y;
          if ((pGVar3->fields)._parent == (GizmoTransform *)0x0) {
            fVar8 = (pGVar3->fields)._position2D.x;
            fVar9 = (pGVar3->fields)._position2D.y;
          }
          else {
            pGVar10 = (pGVar3->fields)._parent;
            fStack_11 = (pGVar10->fields)._rotation2D.x;
            fStack_12 = (pGVar10->fields)._rotation2D.y;
            fStack_13 = (pGVar10->fields)._rotation2D.z;
            fStack_14 = (pGVar10->fields)._rotation2D.w;
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(&fStack_11);
            pGVar10 = (pGVar3->fields)._parent;
            if (pGVar10 == (GizmoTransform *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar9 = (pGVar3->fields)._position2D.x - (pGVar10->fields)._position2D.x;
            fVar16 = (pGVar3->fields)._position2D.y - (pGVar10->fields)._position2D.y;
            aQStack_7[0].y = unaff_XMM7_Db;
            aQStack_7[0].x = unaff_XMM7_Da;
            aQStack_7[0].w = unaff_XMM7_Dd;
            aQStack_7[0].z = unaff_XMM7_Dc;
            uStack_17 = (undefined *)CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
            fVar8 = (_UNK_? - 0.0) * fVar9 + fVar16 * 0.0 + 0.0;
            fVar9 = (_UNK_? - 0.0) * fVar16 + fVar9 * 0.0 + 0.0;
          }
          (pGVar3->fields)._localPosition2D.x = fVar8;
          (pGVar3->fields)._localPosition2D.y = fVar9;
          GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar3,(MethodInfo *)0x0);
          pGVar18 = (pGVar3->fields).Changed;
          (pGVar3->fields)._firingChanged2DEvent = 1;
          if (pGVar18 != (GizmoEntityTransformChangedHandler *)0x0) {
            (*(pGVar18->fields)._._.invoke_impl)
                      ((pGVar18->fields)._._.method_code,pGVar3,0x100000000,
                       (pGVar18->fields)._._.method);
          }
          (pGVar3->fields)._firingChanged2DEvent = 0;
          return;
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CapSlider2DInvert(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::
     GizmoArrowCap2DController_CapSlider2DInvert
               (GizmoArrowCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
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
        if ((uint)pVVar8->max_length < 2) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        to.y = fVar5;
        to.x = fVar4;
        pQVar10 = QuaternionEx::QuaternionEx_FromToRotation2D
                           (&QStack_11,pVVar8->vector[1],to,(MethodInfo *)0x0);
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
                     *(float *)(lVar14 + 0x2c);
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

float Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::
      GizmoArrowCap2DController_GetSliderAlignedRealLength
                (GizmoArrowCap2DController *this,MethodInfo *method)

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
             *(float *)(lVar3 + 0x2c);
    }
  }
  FUN_?(pGVar2,method);
  pcVar5 = (code *)swi(3);
  fVar6 = (float)(*pcVar5)();
  return fVar6;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_UpdateHandles
               (GizmoArrowCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
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
        uVar5 = (pGVar1->fields).ArrowIndex;
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

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_UpdateTransforms
               (GizmoArrowCap2DController *this,MethodInfo *method)

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
      pCVar6 = (pGVar2->fields).Arrow;
      if (pCVar6 != (ConeShape2D *)0x0) {
        (pCVar6->fields)._height =
             (float)((uint)(*(float *)(lVar4 + 0x2c) *
                           *(float *)(*(longlong *)((longlong)&pGVar3->klass + (ulonglong)uVar5) +
                                     0x18)) & _UNK_?);
        if (pGVar2 != (GizmoCap2DControllerData *)0x0) {
          lVar4 = 0x88;
          if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            lVar4 = 0x80;
          }
          lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
          if (lVar4 != 0) {
            pCVar6 = (pGVar2->fields).Arrow;
            uVar5 = 0x88;
            if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
              uVar5 = 0x80;
            }
            if ((((pCVar6 != (ConeShape2D *)0x0) &&
                 ((pCVar6->fields)._baseRadius =
                       (float)((uint)(*(float *)(*(longlong *)
                                                  ((longlong)&pGVar3->klass + (ulonglong)uVar5) +
                                                0x18) * *(float *)(lVar4 + 0x28)) & uVar1),
                 pGVar2 != (GizmoCap2DControllerData *)0x0)) &&
                (pGVar7 = (pGVar3->fields)._transform, pGVar7 != (GizmoTransform *)0x0)) &&
               (pCVar6 = (pGVar2->fields).Arrow, pCVar6 != (ConeShape2D *)0x0)) {
              fVar8 = (float)FUN_?((pGVar7->fields)._rotation2DDegrees);
              pGVar2 = (this->fields)._._data;
              (pCVar6->fields)._rotationDegrees = fVar8;
              if ((pGVar2 != (GizmoCap2DControllerData *)0x0) &&
                 (pGVar7 = (pGVar3->fields)._transform, pGVar7 != (GizmoTransform *)0x0)) {
                fVar8 = (pGVar7->fields)._position2D.y;
                pCVar6 = (pGVar2->fields).Arrow;
                if (pCVar6 != (ConeShape2D *)0x0) {
                  (pCVar6->fields)._baseCenter.x = (pGVar7->fields)._position2D.x;
                  (pCVar6->fields)._baseCenter.y = fVar8;
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

