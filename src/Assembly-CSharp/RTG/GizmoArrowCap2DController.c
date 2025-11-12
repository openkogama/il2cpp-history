
/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_CapSlider2D(GizmoArrowCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) && (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    if ((pGVar3->fields)._firingChanged3DEvent == 0) {
      pVVar4 = (pGVar3->fields)._axes2D;
      if (pVVar4 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar4->max_length < 2) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pQVar6 = QuaternionEx::QuaternionEx_FromToRotation2D(aQStack_7,pVVar4->vector[1],sliderDirection,(MethodInfo *)0x0);
      aQStack_7[0].x = pQVar6->x;
      aQStack_7[0].y = pQVar6->y;
      aQStack_7[0].z = pQVar6->z;
      aQStack_7[0].w = pQVar6->w;
      fVar8 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_7,(MethodInfo *)0x0);
      GizmoTransform::GizmoTransform_ChangeRotation2D(pGVar3,fVar8 + (pGVar3->fields)._rotation2DDegrees,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) {
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
        if (9.9999994e-11 <= fVar9 * fVar9 + fVar8 * fVar8) {
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
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
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
            fVar8 = fVar9 * 1.0 + fVar16 * 0.0 + 0.0;
            fVar9 = fVar16 * 1.0 + fVar9 * 0.0 + 0.0;
          }
          (pGVar3->fields)._localPosition2D.x = fVar8;
          (pGVar3->fields)._localPosition2D.y = fVar9;
          GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar3,(MethodInfo *)0x0);
          pGVar18 = (pGVar3->fields).Changed;
          (pGVar3->fields)._firingChanged2DEvent = 1;
          if (pGVar18 != (GizmoEntityTransformChangedHandler *)0x0) {
            (*(pGVar18->fields)._._.invoke_impl)((pGVar18->fields)._._.method_code,pGVar3,0x100000000,(pGVar18->fields)._._.method);
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

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_CapSlider2DInvert(GizmoArrowCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  VStack_2 = sliderDirection;
  VStack_3 = sliderEndPt;
  if (((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar4 = (pGVar1->fields).Cap, pGVar4 != (GizmoCap2D *)0x0)) && (pGVar5 = (pGVar4->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) {
    if ((pGVar5->fields)._firingChanged3DEvent == 0) {
      pVVar6 = (pGVar5->fields)._axes2D;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length < 2) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pQVar8 = QuaternionEx::QuaternionEx_FromToRotation2D(&QStack_9,pVVar6->vector[1],(Vector2)((ulonglong)sliderDirection ^ 0x8000000080000000),(MethodInfo *)0x0);
      QStack_9.x = pQVar8->x;
      QStack_9.y = pQVar8->y;
      QStack_9.z = pQVar8->z;
      QStack_9.w = pQVar8->w;
      fVar10 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_9,(MethodInfo *)0x0);
      GizmoTransform::GizmoTransform_ChangeRotation2D(pGVar5,fVar10 + (pGVar5->fields)._rotation2DDegrees,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
      pGVar4 = (pGVar1->fields).Cap;
      uVar11 = FUN_?(&VStack_2);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar12 = (pGVar1->fields).Cap, pGVar12 != (GizmoCap2D *)0x0)) {
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
          fVar10 = *(float *)(*(longlong *)((longlong)&pGVar12->klass + (ulonglong)uVar14) + 0x18) * *(float *)(lVar13 + 0x2c);
          fStackX_c = (float)((ulonglong)uVar11 >> 0x20);
          fStackX_8 = (float)uVar11;
          fVar15 = fVar10 * fStackX_c + VStack_3.y;
          fVar10 = fVar10 * fStackX_8 + VStack_3.x;
          if (pGVar4 != (GizmoCap2D *)0x0) {
            pGVar5 = (pGVar4->fields)._transform;
            if (pGVar5 == (GizmoTransform *)0x0) {
              FUN_?(0,CONCAT44(fVar15,fVar10),0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (((pGVar5->fields)._firingChanged2DEvent == 0) && (fVar16 = (pGVar5->fields)._position2D.x - fVar10, fVar17 = (pGVar5->fields)._position2D.y - fVar15, 9.9999994e-11 <= fVar17 * fVar17 + fVar16 * fVar16)) {
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
                if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
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
                fVar10 = fVar15 * 1.0 + fVar16 * 0.0 + 0.0;
                fVar15 = fVar16 * 1.0 + fVar15 * 0.0 + 0.0;
              }
              (pGVar5->fields)._localPosition2D.x = fVar10;
              (pGVar5->fields)._localPosition2D.y = fVar15;
              GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar5,(MethodInfo *)0x0);
              pGVar24 = (pGVar5->fields).Changed;
              (pGVar5->fields)._firingChanged2DEvent = 1;
              if (pGVar24 != (GizmoEntityTransformChangedHandler *)0x0) {
                (*(pGVar24->fields)._._.invoke_impl)((pGVar24->fields)._._.method_code,pGVar5,0x100000000,(pGVar24->fields)._._.method);
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


/* Single GetSliderAlignedRealLength() */

float Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_GetSliderAlignedRealLength(GizmoArrowCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  pGVar2 = (GizmoCap2D *)0x0;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) {
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
      return *(float *)(*(longlong *)((longlong)&pGVar2->klass + (ulonglong)uVar4) + 0x18) * *(float *)(lVar3 + 0x2c);
    }
  }
  FUN_?(pGVar2,method);
  pcVar5 = (code *)swi(3);
  fVar6 = (float)(*pcVar5)();
  return fVar6;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_UpdateHandles(GizmoArrowCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible(pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible(pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) && (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
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
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_UpdateTransforms(GizmoArrowCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) {
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
      pCVar5 = (pGVar1->fields).Arrow;
      if (pCVar5 != (ConeShape2D *)0x0) {
        (pCVar5->fields)._height = ABS(*(float *)(lVar3 + 0x2c) * *(float *)(*(longlong *)((longlong)&pGVar2->klass + (ulonglong)uVar4) + 0x18));
        if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
          lVar3 = 0x88;
          if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            lVar3 = 0x80;
          }
          lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
          if (lVar3 != 0) {
            pCVar5 = (pGVar1->fields).Arrow;
            uVar4 = 0x88;
            if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
              uVar4 = 0x80;
            }
            if ((((pCVar5 != (ConeShape2D *)0x0) && ((pCVar5->fields)._baseRadius = ABS(*(float *)(*(longlong *)((longlong)&pGVar2->klass + (ulonglong)uVar4) + 0x18) * *(float *)(lVar3 + 0x28)), pGVar1 != (GizmoCap2DControllerData *)0x0)) && (pGVar6 = (pGVar2->fields)._transform, pGVar6 != (GizmoTransform *)0x0)) && (pCVar5 = (pGVar1->fields).Arrow, pCVar5 != (ConeShape2D *)0x0)) {
              fVar7 = (float)FUN_?((pGVar6->fields)._rotation2DDegrees);
              pGVar1 = (this->fields)._._data;
              (pCVar5->fields)._rotationDegrees = fVar7;
              if ((pGVar1 != (GizmoCap2DControllerData *)0x0) && (pGVar6 = (pGVar2->fields)._transform, pGVar6 != (GizmoTransform *)0x0)) {
                fVar7 = (pGVar6->fields)._position2D.y;
                pCVar5 = (pGVar1->fields).Arrow;
                if (pCVar5 != (ConeShape2D *)0x0) {
                  (pCVar5->fields)._baseCenter.x = (pGVar6->fields)._position2D.x;
                  (pCVar5->fields)._baseCenter.y = fVar7;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

