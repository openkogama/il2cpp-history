
/* Void AlignTransformAxis(Int32, AxisSign, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_AlignTransformAxis
               (GizmoCap2D *this,int32_t axisIndex,AxisSign__Enum axisSign,Vector2 axis,
               MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    if ((this_00->fields)._firingChanged3DEvent != 0) {
      return;
    }
    pVVar1 = (this_00->fields)._axes2D;
    if (pVVar1 != (Vector2__Array *)0x0) {
      if ((uint)pVVar1->max_length <= (uint)axisIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar3 = pVVar1->vector[axisIndex].x;
      fVar4 = pVVar1->vector[axisIndex].y;
      if (axisSign == AxisSign__Enum_Negative) {
        fVar3 = (float)((uint)fVar3 ^ _UNK_?);
        fVar4 = (float)((uint)fVar4 ^ _UNK_?);
      }
      from.y = fVar4;
      from.x = fVar3;
      pQVar5 = QuaternionEx::QuaternionEx_FromToRotation2D(&QStack_6,from,axis,(MethodInfo *)0x0);
      QStack_6.x = pQVar5->x;
      QStack_6.y = pQVar5->y;
      QStack_6.z = pQVar5->z;
      QStack_6.w = pQVar5->w;
      fVar3 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_6,(MethodInfo *)0x0);
      fVar3 = (float)FUN_?(fVar3 + (this_00->fields)._rotation2DDegrees,_UNK_?,0);
      bVar7 = cRam_? == '\0';
      (this_00->fields)._rotation2DDegrees = fVar3;
      if (bVar7) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_9._0_4_ = (pVVar8->forwardVector).x;
      uStack_9._4_4_ = (pVVar8->forwardVector).y;
      fStack_10 = (pVVar8->forwardVector).z;
      uStack_11 = 0;
      uStack_12 = 0;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(fVar3,&uStack_9,&uStack_11);
      uVar13 = uStack_11;
      fVar4 = uStack_11._4_4_;
      fVar3 = (float)uStack_11;
      fVar14 = (float)uStack_12;
      fStack_15 = uStack_12._4_4_;
      fVar16 = uStack_11._4_4_ * uStack_11._4_4_ + (float)uStack_11 * (float)uStack_11 +
               (float)uStack_12 * (float)uStack_12 + uStack_12._4_4_ * uStack_12._4_4_;
      if (fVar16 < 0.0) {
        fVar16 = (float)FUN_?(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      if (fVar16 < _UNK_?) {
        uStack_9 = uVar13;
        fStack_10 = fVar14;
      }
      else {
        fVar16 = _UNK_? / fVar16;
        fStack_10 = fVar16 * fVar14;
        fStack_15 = fVar16 * fStack_15;
        uStack_9 = CONCAT44(fVar16 * fVar4,fVar16 * fVar3);
      }
      (this_00->fields)._rotation2D.x = (float)(undefined4)uStack_9;
      (this_00->fields)._rotation2D.y = (float)uStack_9._4_4_;
      (this_00->fields)._rotation2D.z = fStack_10;
      (this_00->fields)._rotation2D.w = fStack_15;
      if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
        fVar3 = (this_00->fields)._rotation2D.y;
        fVar4 = (this_00->fields)._rotation2D.z;
        fVar14 = (this_00->fields)._rotation2D.w;
        (this_00->fields)._localRotation2D.x = (this_00->fields)._rotation2D.x;
        (this_00->fields)._localRotation2D.y = fVar3;
        (this_00->fields)._localRotation2D.z = fVar4;
        (this_00->fields)._localRotation2D.w = fVar14;
      }
      else {
        pGVar17 = (this_00->fields)._parent;
        aQStack_18[0].x = (pGVar17->fields)._rotation2D.x;
        aQStack_18[0].y = (pGVar17->fields)._rotation2D.y;
        aQStack_18[0].z = (pGVar17->fields)._rotation2D.z;
        aQStack_18[0].w = (pGVar17->fields)._rotation2D.w;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        uStack_11 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
        uStack_12 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
        uStack_9 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
        fStack_10 = unaff_XMM11_Dc;
        fStack_15 = unaff_XMM11_Dd;
        (*pcRam_?)(aQStack_18);
        fVar3 = (this_00->fields)._rotation2D.x;
        fVar4 = (this_00->fields)._rotation2D.y;
        fVar14 = (this_00->fields)._rotation2D.z;
        fVar16 = (this_00->fields)._rotation2D.w;
        fVar19 = (fVar16 * 0.0 + fVar3 * 0.0 + fVar14 * 0.0) - fVar4 * 0.0;
        fVar20 = (fVar4 * 0.0 + fVar16 * 0.0 + fVar3 * 0.0) - fVar14 * 0.0;
        fVar21 = ((fVar16 * 0.0 - fVar3 * 0.0) - fVar4 * 0.0) - fVar14 * 0.0;
        fVar4 = (fVar14 * 0.0 + fVar16 * 0.0 + fVar4 * 0.0) - fVar3 * 0.0;
        fVar3 = fVar20 * fVar20 + fVar19 * fVar19 + fVar4 * fVar4 + fVar21 * fVar21;
        if (fVar3 < 0.0) {
          fVar3 = (float)FUN_?(fVar3);
        }
        else {
          fVar3 = SQRT(fVar3);
        }
        if (_UNK_? <= fVar3) {
          fVar3 = _UNK_? / fVar3;
          fVar19 = fVar19 * fVar3;
          fVar20 = fVar20 * fVar3;
          fVar4 = fVar4 * fVar3;
          fVar21 = fVar21 * fVar3;
        }
        (this_00->fields)._localRotation2D.x = fVar19;
        (this_00->fields)._localRotation2D.y = fVar20;
        (this_00->fields)._localRotation2D.z = fVar4;
        (this_00->fields)._localRotation2D.w = fVar21;
      }
      aQStack_18[0].x = (this_00->fields)._localRotation2D.x;
      aQStack_18[0].y = (this_00->fields)._localRotation2D.y;
      aQStack_18[0].z = (this_00->fields)._localRotation2D.z;
      aQStack_18[0].w = (this_00->fields)._localRotation2D.w;
      fVar3 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_18,(MethodInfo *)0x0);
      (this_00->fields)._localRotation2DDegrees = fVar3;
      GizmoTransform::GizmoTransform_Update2DAxes(this_00,(MethodInfo *)0x0);
      GizmoTransform::GizmoTransform_UpdateChildTransforms2D(this_00,(MethodInfo *)0x0);
      pGVar22 = (this_00->fields).Changed;
      (this_00->fields)._firingChanged2DEvent = 1;
      if (pGVar22 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar22->fields)._._.invoke_impl)
                  ((pGVar22->fields)._._.method_code,this_00,0x100000000,(pGVar22->fields)._._.method)
        ;
      }
      (this_00->fields)._firingChanged2DEvent = 0;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_CapSlider2D
               (GizmoCap2D *this,Vector2 sliderDirection,Vector2 sliderEndPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
      FUN_?(2);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CapSlider2DInvert(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_CapSlider2DInvert
               (GizmoCap2D *this,Vector2 sliderDirection,Vector2 sliderEndPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
      FUN_?(3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single GetRealArrowBaseRadius() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealArrowBaseRadius
                (GizmoCap2D *this,MethodInfo *method)

{
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    uVar2 = 0x88;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      uVar2 = 0x80;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar2) + 0x18) *
           *(float *)(lVar1 + 0x28);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Single GetRealArrowHeight() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealArrowHeight
                (GizmoCap2D *this,MethodInfo *method)

{
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    uVar2 = 0x88;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      uVar2 = 0x80;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar2) + 0x18) *
           *(float *)(lVar1 + 0x2c);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Single GetRealCircleRadius() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealCircleRadius
                (GizmoCap2D *this,MethodInfo *method)

{
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    uVar2 = 0x88;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      uVar2 = 0x80;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar2) + 0x18) *
           *(float *)(lVar1 + 0x1c);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Single GetRealQuadHeight() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealQuadHeight
                (GizmoCap2D *this,MethodInfo *method)

{
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    uVar2 = 0x88;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      uVar2 = 0x80;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar2) + 0x18) *
           *(float *)(lVar1 + 0x24);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Single GetRealQuadWidth() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealQuadWidth
                (GizmoCap2D *this,MethodInfo *method)

{
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    uVar2 = 0x88;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      uVar2 = 0x80;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar2) + 0x18) *
           *(float *)(lVar1 + 0x20);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnGizmoPostEnabled
               (GizmoCap2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoCap2DController);
      uVar3 = 0x88;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        uVar3 = 0x80;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if ((lVar1 != 0) &&
         (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
        uVar3 = *(uint *)(lVar1 + 0x14);
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        pIVar5 = pIVar2->vector[(int)uVar3];
        if (pIVar5 != (IGizmoCap2DController *)0x0) {
          uVar6 = 0;
          pIVar7 = pIVar5->klass;
          uVar8._0_1_ = (pIVar7->_1).rank;
          uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pIVar7->interfaceOffsets[uVar6].interfaceType ==
                  (Il2CppClass *)TypeInfo__RTG__IGizmoCap2DController) {
                ppIVar9 = &(&(pIVar7->vtable).UpdateHandles)
                           [pIVar7->interfaceOffsets[uVar6].offset + 1].methodPtr;
                UNRECOVERED_JUMPTABLE = *ppIVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)(pIVar5,(MethodInfo *)ppIVar9[1],UNRECOVERED_JUMPTABLE);
                return;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar8);
          }
          puVar10 = (undefined8 *)FUN_?(pIVar5);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar10)(pIVar5,puVar10[1],(code *)*puVar10);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnGizmoPreUpdateBegin
               (GizmoCap2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoCap2DController);
      pIVar2 = (this->fields)._controllers;
      if (pIVar2 != (IGizmoCap2DController__Array *)0x0) {
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        pIVar5 = pIVar2->vector[(int)uVar3];
        if (pIVar5 != (IGizmoCap2DController *)0x0) {
          uVar6 = 0;
          pIVar7 = pIVar5->klass;
          uVar8._0_1_ = (pIVar7->_1).rank;
          uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pIVar7->interfaceOffsets[uVar6].interfaceType ==
                  (Il2CppClass *)TypeInfo__RTG__IGizmoCap2DController) {
                ppIVar9 = &(&(pIVar7->vtable).UpdateHandles)
                           [pIVar7->interfaceOffsets[uVar6].offset + 1].methodPtr;
                UNRECOVERED_JUMPTABLE = *ppIVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)(pIVar5,(MethodInfo *)ppIVar9[1],UNRECOVERED_JUMPTABLE);
                return;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar8);
          }
          puVar10 = (undefined8 *)FUN_?(pIVar5);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar10)(pIVar5,puVar10[1],(code *)*puVar10);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnTransformChanged
               (GizmoCap2D *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iStackX_1c = changeData.TRSDimension;
  if ((iStackX_1c != 1) && (changeData.ChangeReason != 1)) {
    return;
  }
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
      FUN_?(1,TypeInfo__RTG__IGizmoCap2DController);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnVisibilityStateChanged
               (GizmoCap2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar1 = 0x80;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoCap2DController);
      uVar3 = 0x88;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        uVar3 = 0x80;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if ((lVar1 != 0) &&
         (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
        uVar3 = *(uint *)(lVar1 + 0x14);
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        pIVar5 = pIVar2->vector[(int)uVar3];
        if (pIVar5 != (IGizmoCap2DController *)0x0) {
          uVar6 = 0;
          pIVar7 = pIVar5->klass;
          uVar8._0_1_ = (pIVar7->_1).rank;
          uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pIVar7->interfaceOffsets[uVar6].interfaceType ==
                  (Il2CppClass *)TypeInfo__RTG__IGizmoCap2DController) {
                ppIVar9 = &(&(pIVar7->vtable).UpdateHandles)
                           [pIVar7->interfaceOffsets[uVar6].offset + 1].methodPtr;
                UNRECOVERED_JUMPTABLE = *ppIVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)(pIVar5,(MethodInfo *)ppIVar9[1],UNRECOVERED_JUMPTABLE);
                return;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar8);
          }
          puVar10 = (undefined8 *)FUN_?(pIVar5);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar10)(pIVar5,puVar10[1],(code *)*puVar10);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RegisterTransformAsDragTarget(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_RegisterTransformAsDragTarget
               (GizmoCap2D *this,IGizmoDragSession *dragSession,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (dragSession == (IGizmoDragSession *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pGVar2 = (this->fields)._transform;
  pIVar3 = dragSession->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__RTG__IGizmoDragSession) {
        pVVar6 = &(pIVar3->vtable).get_IsActive + (pIVar3->interfaceOffsets[uVar4].offset + 9);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(dragSession,TypeInfo__RTG__IGizmoDragSession,9,pGVar2,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(dragSession,pGVar2,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_Render
               (GizmoCap2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._isVisible == 0) {
    return;
  }
  lVar1 = 0x88;
  lVar2 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar2 = 0x80;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) goto DAT_?;
  if (*(int *)(lVar2 + 0x10) == 2) {
code_?:
    pGVar3 = (this->fields)._overrideFillColor;
    if (pGVar3 == (GizmoOverrideColor *)0x0) goto DAT_?;
    if ((pGVar3->fields)._isActive == 0) {
      lVar2 = 0x88;
      pGVar4 = (this->fields)._._gizmo;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        lVar2 = 0x80;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
      fVar5 = *(float *)(lVar2 + 0x30);
      fVar6 = *(float *)(lVar2 + 0x34);
      fVar7 = *(float *)(lVar2 + 0x38);
      fVar8 = *(float *)(lVar2 + 0x3c);
      if ((pGVar4 == (Gizmo *)0x0) ||
         (pGVar9 = (this->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto DAT_?;
      if ((pGVar4->fields)._hoverInfo._handleId == (pGVar9->fields)._id) {
        lVar2 = 0x88;
        if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          lVar2 = 0x80;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        fVar5 = *(float *)(lVar2 + 0x40);
        fVar6 = *(float *)(lVar2 + 0x44);
        fVar7 = *(float *)(lVar2 + 0x48);
        fVar8 = *(float *)(lVar2 + 0x4c);
      }
    }
    else {
      fVar5 = (pGVar3->fields)._color.r;
      fVar6 = (pGVar3->fields)._color.g;
      fVar7 = (pGVar3->fields)._color.b;
      fVar8 = (pGVar3->fields)._color.a;
    }
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_00 == (GizmoSolidMaterial *)0x0) goto DAT_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_00,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar10 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar10 == (Material *)0x0) goto DAT_?;
    aCStack_11[0].r = fVar5;
    aCStack_11[0].g = fVar6;
    aCStack_11[0].b = fVar7;
    aCStack_11[0].a = fVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar10,StringLiteral__Color,aCStack_11,(MethodInfo *)0x0);
    pMVar10 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar10 == (Material *)0x0) goto DAT_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar10,0,(MethodInfo *)0x0);
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto DAT_?;
    GizmoHandle::GizmoHandle_Render2DSolid(pGVar9,camera,(MethodInfo *)0x0);
  }
  else {
    uVar12 = 0x88;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      uVar12 = 0x80;
    }
    if (*(int *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar12) + 0x10) == 0)
    goto code_?;
  }
  lVar2 = 0x88;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    lVar2 = 0x80;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x10) != 2) {
      lVar2 = 0x88;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        lVar2 = 0x80;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x10) != 1) {
        return;
      }
    }
    pGVar3 = (this->fields)._overrideFillColor;
    if (pGVar3 != (GizmoOverrideColor *)0x0) {
      if ((pGVar3->fields)._isActive == 0) {
        lVar2 = 0x88;
        pGVar4 = (this->fields)._._gizmo;
        if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          lVar2 = 0x80;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        fVar5 = *(float *)(lVar2 + 0x50);
        fVar6 = *(float *)(lVar2 + 0x54);
        fVar7 = *(float *)(lVar2 + 0x58);
        fVar8 = *(float *)(lVar2 + 0x5c);
        if ((pGVar4 == (Gizmo *)0x0) ||
           (pGVar9 = (this->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto DAT_?;
        if ((pGVar4->fields)._hoverInfo._handleId == (pGVar9->fields)._id) {
          if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            lVar1 = 0x80;
          }
          lVar2 = *(longlong *)((longlong)&this->klass + lVar1);
          fVar5 = *(float *)(lVar2 + 0x60);
          fVar6 = *(float *)(lVar2 + 100);
          fVar7 = *(float *)(lVar2 + 0x68);
          fVar8 = *(float *)(lVar2 + 0x6c);
        }
      }
      else {
        pGVar3 = (this->fields)._overrideBorderColor;
        if (pGVar3 == (GizmoOverrideColor *)0x0) goto DAT_?;
        fVar5 = (pGVar3->fields)._color.r;
        fVar6 = (pGVar3->fields)._color.g;
        fVar7 = (pGVar3->fields)._color.b;
        fVar8 = (pGVar3->fields)._color.a;
      }
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = (GizmoLineMaterial *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      if (this_01 != (GizmoLineMaterial *)0x0) {
        GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                  (this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__Color);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar10 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_01,(MethodInfo *)0x0);
        if (pMVar10 != (Material *)0x0) {
          aCStack_11[0].r = fVar5;
          aCStack_11[0].g = fVar6;
          aCStack_11[0].b = fVar7;
          aCStack_11[0].a = fVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar10,StringLiteral__Color,aCStack_11,(MethodInfo *)0x0);
          pMVar10 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_01,(MethodInfo *)0x0);
          if (pMVar10 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                      (pMVar10,0,(MethodInfo *)0x0);
            pGVar9 = (this->fields)._._handle;
            if (pGVar9 != (GizmoHandle *)0x0) {
              GizmoHandle::GizmoHandle_Render2DWire(pGVar9,camera,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UnregisterTransformAsDragTarget(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_UnregisterTransformAsDragTarget
               (GizmoCap2D *this,IGizmoDragSession *dragSession,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (dragSession == (IGizmoDragSession *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pGVar2 = (this->fields)._transform;
  pIVar3 = dragSession->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__RTG__IGizmoDragSession) {
        pVVar6 = &(pIVar3->vtable).get_IsActive + (pIVar3->interfaceOffsets[uVar4].offset + 10);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(dragSession,TypeInfo__RTG__IGizmoDragSession,10,pGVar2,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(dragSession,pGVar2,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* GizmoCap2D(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D__ctor
               (GizmoCap2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CircleShape2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ConeShape2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoArrowCap2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap2DControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoCap2DType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoCap2D__OnGizmoPostEnabled_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoCap2D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoCap2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCircleCap2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoOverrideColor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoQuadCap2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoCap2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__QuadShape2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (QuadShape2D *)FUN_?(TypeInfo__RTG__QuadShape2D);
  QuadShape2D::QuadShape2D__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._quad = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._quad >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (CircleShape2D *)FUN_?(TypeInfo__RTG__CircleShape2D);
  CircleShape2D::CircleShape2D__ctor(this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._circle = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._circle >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pCVar6 = (ConeShape2D *)FUN_?(TypeInfo__RTG__ConeShape2D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  bVar1 = iRam_? != 0;
  (pCVar6->fields)._baseCenter.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (pCVar6->fields)._baseCenter.y = fVar7;
  (pCVar6->fields)._baseRadius = 15.0;
  (pCVar6->fields)._height = 15.0;
  (this->fields)._arrow = pCVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._arrow >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar8 = (GizmoTransform *)FUN_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar8,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._transform = pGVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar9 = (GizmoOverrideColor *)FUN_?(TypeInfo__RTG__GizmoOverrideColor);
  bVar1 = iRam_? != 0;
  (this->fields)._overrideFillColor = pGVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._overrideFillColor >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar9 = (GizmoOverrideColor *)FUN_?(TypeInfo__RTG__GizmoOverrideColor);
  bVar1 = iRam_? != 0;
  (this->fields)._overrideBorderColor = pGVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._overrideBorderColor >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pIVar10 = TypeRef__RTG__GizmoCap2DType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar11 = (longlong *)0x0;
  if (pIVar10 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar12 = FUN_?(pIVar10,1);
    plVar11 = (longlong *)FUN_?(lVar12 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar11 == (longlong *)0x0) {
    uVar13 = func_?(&TypeInfo__System__ArgumentNullException);
    this_04 = (ArgumentNullException *)func_?(uVar13);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_04,paramName,(MethodInfo *)0x0);
    uVar13 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_04,uVar13);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_02 = (Array *)(**(code **)(*plVar11 + 0x888))(plVar11);
  if (this_02 != (Array *)0x0) {
    iVar15 = mscorlib.dll::System::Array::Array_get_Length(this_02,(MethodInfo *)0x0);
    pIVar16 = (IGizmoCap2DController__Array *)
              FUN_?(TypeInfo__RTG__IGizmoCap2DController,iVar15);
    bVar1 = iRam_? != 0;
    (this->fields)._controllers = pIVar16;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pGVar17 = (GizmoCap2DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
    uVar18 = _UNK_?;
    uVar19 = _UNK_?;
    uVar20 = _UNK_?;
    uVar13 = _UNK_?;
    bVar1 = iRam_? != 0;
    (pGVar17->fields)._fillMode = 2;
    (pGVar17->fields)._scale = 1.0;
    (pGVar17->fields)._circleRadius = 12.0;
    (pGVar17->fields)._quadWidth = 25.0;
    (pGVar17->fields)._quadHeight = 25.0;
    (pGVar17->fields)._arrowBaseRadius = 5.0;
    (pGVar17->fields)._arrowHeight = 20.0;
    uVar21 = _UNK_?;
    _UNK_? = (undefined4)uVar19;
    _UNK_? = SUB84(uVar19,4);
    uVar22 = _UNK_?;
    (pGVar17->fields)._color.r = (float)_UNK_?;
    _UNK_? = uVar21;
    uVar21 = _UNK_?;
    (pGVar17->fields)._color.g = (float)uVar22;
    _UNK_? = (undefined4)uVar18;
    _UNK_? = SUB84(uVar18,4);
    uVar22 = _UNK_?;
    (pGVar17->fields)._color.b = (float)_UNK_?;
    _UNK_? = uVar21;
    uVar21 = _UNK_?;
    (pGVar17->fields)._color.a = (float)uVar22;
    _UNK_? = (undefined4)uVar13;
    _UNK_? = SUB84(uVar13,4);
    uVar22 = _UNK_?;
    (pGVar17->fields)._hoveredColor.r = (float)_UNK_?;
    _UNK_? = uVar21;
    uVar21 = _UNK_?;
    (pGVar17->fields)._hoveredColor.g = (float)uVar22;
    _UNK_? = (undefined4)uVar20;
    _UNK_? = SUB84(uVar20,4);
    uVar22 = _UNK_?;
    (pGVar17->fields)._hoveredColor.b = (float)_UNK_?;
    _UNK_? = uVar21;
    uVar21 = _UNK_?;
    (pGVar17->fields)._hoveredColor.a = (float)uVar22;
    _UNK_? = (undefined4)uVar19;
    _UNK_? = SUB84(uVar19,4);
    uVar22 = _UNK_?;
    (pGVar17->fields)._borderColor.r = (float)_UNK_?;
    _UNK_? = uVar21;
    uVar21 = _UNK_?;
    (pGVar17->fields)._borderColor.g = (float)uVar22;
    _UNK_? = (undefined4)uVar18;
    _UNK_? = SUB84(uVar18,4);
    uVar22 = _UNK_?;
    (pGVar17->fields)._borderColor.b = (float)_UNK_?;
    _UNK_? = uVar21;
    uVar21 = _UNK_?;
    (pGVar17->fields)._borderColor.a = (float)uVar22;
    _UNK_? = (undefined4)uVar13;
    _UNK_? = SUB84(uVar13,4);
    uVar22 = _UNK_?;
    (pGVar17->fields)._hoveredBorderColor.r = (float)_UNK_?;
    _UNK_? = uVar21;
    uVar13 = _UNK_?;
    (pGVar17->fields)._hoveredBorderColor.g = (float)uVar22;
    _UNK_? = (undefined4)uVar20;
    _UNK_? = SUB84(uVar20,4);
    uVar22 = _UNK_?;
    (pGVar17->fields)._hoveredBorderColor.b = (float)_UNK_?;
    _UNK_? = uVar13;
    (pGVar17->fields)._hoveredBorderColor.a = (float)uVar22;
    (this->fields)._lookAndFeel = pGVar17;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._lookAndFeel >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    GizmoCap::GizmoCap__ctor((GizmoCap *)this,gizmo,handleId,(MethodInfo *)0x0);
    pGVar23 = (this->fields)._._handle;
    if (pGVar23 != (GizmoHandle *)0x0) {
      iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                         (pGVar23,(Shape2D *)(this->fields)._quad,(MethodInfo *)0x0);
      pGVar23 = (this->fields)._._handle;
      (this->fields)._quadIndex = iVar15;
      if (pGVar23 != (GizmoHandle *)0x0) {
        iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                           (pGVar23,(Shape2D *)(this->fields)._circle,(MethodInfo *)0x0);
        pGVar23 = (this->fields)._._handle;
        (this->fields)._circleIndex = iVar15;
        if (pGVar23 != (GizmoHandle *)0x0) {
          iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                             (pGVar23,(Shape2D *)(this->fields)._arrow,(MethodInfo *)0x0);
          (this->fields)._arrowIndex = iVar15;
          pGVar24 = (GizmoCap2DControllerData *)
                    FUN_?(TypeInfo__RTG__GizmoCap2DControllerData);
          iVar25 = iRam_?;
          (this->fields)._controllerData = pGVar24;
          if (iVar25 != 0) {
            uVar2 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
            uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
            do {
              uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
              puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
              iVar25 = iRam_?;
            } while (!bVar1);
          }
          pGVar24 = (this->fields)._controllerData;
          if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
            (pGVar24->fields).Cap = this;
            iVar26 = 0;
            if (iVar25 != 0) {
              uVar2 = (uint)((ulonglong)&(pGVar24->fields).Cap >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
                iVar26 = iRam_?;
              } while (!bVar1);
            }
            pGVar24 = (this->fields)._controllerData;
            if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
              (pGVar24->fields).CapHandle = (this->fields)._._handle;
              iVar25 = 0;
              if (iVar26 != 0) {
                uVar2 = (uint)((ulonglong)&(pGVar24->fields).CapHandle >> 0xc);
                uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                do {
                  uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                  puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                  LOCK();
                  bVar1 = uVar4 == *puVar5;
                  if (bVar1) {
                    *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                  iVar25 = iRam_?;
                } while (!bVar1);
              }
              pGVar24 = (this->fields)._controllerData;
              if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
                (pGVar24->fields).Gizmo = (this->fields)._._gizmo;
                iVar26 = 0;
                if (iVar25 != 0) {
                  uVar2 = (uint)((ulonglong)&pGVar24->fields >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar1 = uVar4 == *puVar5;
                    if (bVar1) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                    iVar26 = iRam_?;
                  } while (!bVar1);
                }
                pGVar24 = (this->fields)._controllerData;
                if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
                  (pGVar24->fields).Quad = (this->fields)._quad;
                  iVar25 = 0;
                  if (iVar26 != 0) {
                    uVar2 = (uint)((ulonglong)&(pGVar24->fields).Quad >> 0xc);
                    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                    do {
                      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                      LOCK();
                      bVar1 = uVar4 == *puVar5;
                      if (bVar1) {
                        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                      }
                      UNLOCK();
                      iVar25 = iRam_?;
                    } while (!bVar1);
                  }
                  pGVar24 = (this->fields)._controllerData;
                  if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
                    (pGVar24->fields).QuadIndex = (this->fields)._quadIndex;
                    pGVar24 = (this->fields)._controllerData;
                    if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
                      (pGVar24->fields).Circle = (this->fields)._circle;
                      iVar26 = 0;
                      if (iVar25 != 0) {
                        uVar2 = (uint)((ulonglong)&(pGVar24->fields).Circle >> 0xc);
                        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                        do {
                          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                          LOCK();
                          bVar1 = uVar4 == *puVar5;
                          if (bVar1) {
                            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                          iVar26 = iRam_?;
                        } while (!bVar1);
                      }
                      pGVar24 = (this->fields)._controllerData;
                      if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
                        (pGVar24->fields).CircleIndex = (this->fields)._circleIndex;
                        pGVar24 = (this->fields)._controllerData;
                        if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
                          (pGVar24->fields).Arrow = (this->fields)._arrow;
                          if (iVar26 != 0) {
                            uVar2 = (uint)((ulonglong)&(pGVar24->fields).Arrow >> 0xc);
                            uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                            do {
                              uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                              puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                              LOCK();
                              bVar1 = uVar4 == *puVar5;
                              if (bVar1) {
                                *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar1);
                          }
                          pGVar24 = (this->fields)._controllerData;
                          if (pGVar24 != (GizmoCap2DControllerData *)0x0) {
                            (pGVar24->fields).ArrowIndex = (this->fields)._arrowIndex;
                            pIVar16 = (this->fields)._controllers;
                            pGVar24 = (this->fields)._controllerData;
                            lVar12 = FUN_?(TypeInfo__RTG__GizmoQuadCap2DController);
                            bVar1 = iRam_? != 0;
                            *(GizmoCap2DControllerData **)(lVar12 + 0x10) = pGVar24;
                            if (bVar1) {
                              uVar2 = (uint)(lVar12 + 0x10U >> 0xc);
                              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                              do {
                                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                                LOCK();
                                bVar1 = uVar4 == *puVar5;
                                if (bVar1) {
                                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar1);
                            }
                            if (pIVar16 != (IGizmoCap2DController__Array *)0x0) {
                              lVar27 = FUN_?(lVar12,(pIVar16->klass->_0).element_class);
                              if (lVar27 == 0) {
                                uVar13 = FUN_?();
                                FUN_?(uVar13,0);
                                pcVar14 = (code *)swi(3);
                                (*pcVar14)();
                                return;
                              }
                              FUN_?(pIVar16,0,lVar12);
                              pIVar16 = (this->fields)._controllers;
                              pGVar24 = (this->fields)._controllerData;
                              lVar12 = FUN_?(TypeInfo__RTG__GizmoCircleCap2DController);
                              bVar1 = iRam_? != 0;
                              *(GizmoCap2DControllerData **)(lVar12 + 0x10) = pGVar24;
                              if (bVar1) {
                                uVar2 = (uint)(lVar12 + 0x10U >> 0xc);
                                uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                                do {
                                  uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                                  puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                                  LOCK();
                                  bVar1 = uVar4 == *puVar5;
                                  if (bVar1) {
                                    *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar1);
                              }
                              if (pIVar16 != (IGizmoCap2DController__Array *)0x0) {
                                lVar27 = FUN_?(lVar12,(pIVar16->klass->_0).element_class);
                                if (lVar27 == 0) {
                                  uVar13 = FUN_?();
                                  FUN_?(uVar13,0);
                                  pcVar14 = (code *)swi(3);
                                  (*pcVar14)();
                                  return;
                                }
                                FUN_?(pIVar16,1,lVar12);
                                pIVar16 = (this->fields)._controllers;
                                pGVar24 = (this->fields)._controllerData;
                                lVar12 = FUN_?(TypeInfo__RTG__GizmoArrowCap2DController);
                                bVar1 = iRam_? != 0;
                                *(GizmoCap2DControllerData **)(lVar12 + 0x10) = pGVar24;
                                if (bVar1) {
                                  uVar2 = (uint)(lVar12 + 0x10U >> 0xc);
                                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                                  do {
                                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                                    LOCK();
                                    bVar1 = uVar4 == *puVar5;
                                    if (bVar1) {
                                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar1);
                                }
                                if (pIVar16 != (IGizmoCap2DController__Array *)0x0) {
                                  lVar12 = FUN_?(lVar12,(pIVar16->klass->_0).element_class);
                                  if (lVar12 == 0) {
                                    uVar13 = FUN_?();
                                    FUN_?(uVar13,0);
                                    pcVar14 = (code *)swi(3);
                                    (*pcVar14)();
                                    return;
                                  }
                                  FUN_?(pIVar16,2);
                                  if ((gizmo != (Gizmo *)0x0) &&
                                     (pGVar8 = (this->fields)._transform,
                                     pGVar8 != (GizmoTransform *)0x0)) {
                                    GizmoTransform::GizmoTransform_SetParent
                                              (pGVar8,(gizmo->fields)._transform,(MethodInfo *)0x0)
                                    ;
                                    pGVar8 = (this->fields)._transform;
                                    value = (GizmoEntityTransformChangedHandler *)
                                            FUN_?(
                                                  TypeInfo__RTG__GizmoEntityTransformChangedHandler)
                                    ;
                                    mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::
                                    Experimental::StyleValues]::
                                    Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
                                              ((Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_
                                                *)value,(Object *)this,
                                               MethodInfo__RTG__GizmoCap2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                                               ,(MethodInfo *)0x0);
                                    if (pGVar8 != (GizmoTransform *)0x0) {
                                      GizmoTransform::GizmoTransform_add_Changed
                                                (pGVar8,value,(MethodInfo *)0x0);
                                      pGVar28 = (this->fields)._._gizmo;
                                      value_00 = (GizmoPreUpdateBeginHandler *)
                                                 FUN_?(
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`1[System::Object]::
                                      UnityAction_1_System_Object___ctor
                                                ((UnityAction_1_System_Object_ *)value_00,
                                                 (Object *)this,
                                                 MethodInfo__RTG__GizmoCap2D__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                                 ,(MethodInfo *)0x0);
                                      if (pGVar28 != (Gizmo *)0x0) {
                                        Gizmo::Gizmo_add_PreUpdateBegin
                                                  (pGVar28,value_00,(MethodInfo *)0x0);
                                        pGVar28 = (this->fields)._._gizmo;
                                        this_03 = (UnityAction_1_System_Object_ *)
                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoPostEnabledHandler);
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`1[System::Object]::
                                        UnityAction_1_System_Object___ctor
                                                  (this_03,(Object *)this,
                                                                                                      
                                                  MethodInfo__RTG__GizmoCap2D__OnGizmoPostEnabled_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                        if (pGVar28 != (Gizmo *)0x0) {
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pGVar29 = &pGVar28->fields;
                                          a = (pGVar28->fields).PostEnabled;
                                          do {
                                            pGVar30 = (GizmoPostEnabledHandler *)
                                                      mscorlib.dll::System::Delegate::
                                                      Delegate_Combine((Delegate *)a,
                                                                       (Delegate *)this_03,
                                                                       (MethodInfo *)0x0);
                                            pGVar31 = (GizmoPostEnabledHandler *)0x0;
                                            if (pGVar30 != (GizmoPostEnabledHandler *)0x0) {
                                              if (pGVar30->klass ==
                                                  TypeInfo__RTG__GizmoPostEnabledHandler) {
                                                pGVar31 = pGVar30;
                                              }
                                              if (pGVar31 == (GizmoPostEnabledHandler *)0x0) {
                                                FUN_?(pGVar30);
                                                pcVar14 = (code *)swi(3);
                                                (*pcVar14)();
                                                return;
                                              }
                                            }
                                            LOCK();
                                            pGVar30 = pGVar29->PostEnabled;
                                            bVar1 = a == pGVar30;
                                            if (bVar1) {
                                              pGVar29->PostEnabled = pGVar31;
                                              pGVar30 = a;
                                            }
                                            UNLOCK();
                                            pGVar31 = a;
                                            if (!bVar1) {
                                              pGVar31 = pGVar30;
                                            }
                                            if (iRam_? != 0) {
                                              uVar2 = (uint)((ulonglong)pGVar29 >> 0xc);
                                              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                                              do {
                                                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                                                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                                                LOCK();
                                                bVar1 = uVar4 == *puVar5;
                                                if (bVar1) {
                                                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar1);
                                            }
                                            bVar1 = pGVar31 != a;
                                            a = pGVar31;
                                          } while (bVar1);
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
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* GizmoCap2DLookAndFeel get_LookAndFeel() */

GizmoCap2DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_LookAndFeel
          (GizmoCap2D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector2 get_Position() */

Vector2 Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_Position
                  (GizmoCap2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    return (pGVar1->fields)._position2D;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoCap2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._rotation2D.y;
    fVar3 = (pGVar1->fields)._rotation2D.z;
    fVar4 = (pGVar1->fields)._rotation2D.w;
    __return_storage_ptr__->x = (pGVar1->fields)._rotation2D.x;
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


/* Single get_RotationDegrees() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_RotationDegrees
                (GizmoCap2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    return (pGVar1->fields)._rotation2DDegrees;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Void set_Position(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_set_Position
               (GizmoCap2D *this,Vector2 value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00->fields)._firingChanged2DEvent == 0) {
    fStackX_8 = value.x;
    fVar2 = (this_00->fields)._position2D.x - fStackX_8;
    fStackX_c = value.y;
    fVar3 = (this_00->fields)._position2D.y - fStackX_c;
    if (_UNK_? <= fVar3 * fVar3 + fVar2 * fVar2) {
      (this_00->fields)._position2D.x = fStackX_8;
      (this_00->fields)._position2D.y = fStackX_c;
      if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
        fVar2 = (this_00->fields)._position2D.x;
        fVar3 = (this_00->fields)._position2D.y;
      }
      else {
        pGVar4 = (this_00->fields)._parent;
        fStack_5 = (pGVar4->fields)._rotation2D.x;
        fStack_6 = (pGVar4->fields)._rotation2D.y;
        fStack_7 = (pGVar4->fields)._rotation2D.z;
        fStack_8 = (pGVar4->fields)._rotation2D.w;
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(&fStack_5);
        pGVar4 = (this_00->fields)._parent;
        if (pGVar4 == (GizmoTransform *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar3 = (this_00->fields)._position2D.x - (pGVar4->fields)._position2D.x;
        fVar10 = (this_00->fields)._position2D.y - (pGVar4->fields)._position2D.y;
        fVar2 = (_UNK_? - 0.0) * fVar3 + fVar10 * 0.0 + 0.0;
        fVar3 = (_UNK_? - 0.0) * fVar10 + fVar3 * 0.0 + 0.0;
      }
      (this_00->fields)._localPosition2D.x = fVar2;
      (this_00->fields)._localPosition2D.y = fVar3;
      GizmoTransform::GizmoTransform_UpdateChildTransforms2D(this_00,(MethodInfo *)0x0);
      pGVar11 = (this_00->fields).Changed;
      (this_00->fields)._firingChanged2DEvent = 1;
      if (pGVar11 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar11->fields)._._.invoke_impl)
                  ((pGVar11->fields)._._.method_code,this_00,0x100000000,(pGVar11->fields)._._.method)
        ;
      }
      (this_00->fields)._firingChanged2DEvent = 0;
      return;
    }
  }
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_set_RotationDegrees
               (GizmoCap2D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this_00->fields)._firingChanged2DEvent == 0) &&
     ((this_00->fields)._rotation2DDegrees != value)) {
    fVar2 = (float)FUN_?(value,_UNK_?,0);
    bVar3 = cRam_? == '\0';
    (this_00->fields)._rotation2DDegrees = fVar2;
    if (bVar3) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->forwardVector).x;
    uStack_5._4_4_ = (pVVar4->forwardVector).y;
    fStack_6 = (pVVar4->forwardVector).z;
    uStack_7 = 0;
    uStack_8 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(fVar2,&uStack_5,&uStack_7);
    uVar9 = uStack_7;
    fVar10 = uStack_7._4_4_;
    fVar2 = (float)uStack_7;
    fVar11 = (float)uStack_8;
    fStack_12 = uStack_8._4_4_;
    fVar13 = uStack_7._4_4_ * uStack_7._4_4_ + (float)uStack_7 * (float)uStack_7 +
            (float)uStack_8 * (float)uStack_8 + uStack_8._4_4_ * uStack_8._4_4_;
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_?(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (fVar13 < _UNK_?) {
      uStack_5 = uVar9;
      fStack_6 = fVar11;
    }
    else {
      fVar13 = _UNK_? / fVar13;
      fStack_6 = fVar13 * fVar11;
      fStack_12 = fVar13 * fStack_12;
      uStack_5 = CONCAT44(fVar13 * fVar10,fVar13 * fVar2);
    }
    (this_00->fields)._rotation2D.x = (float)(undefined4)uStack_5;
    (this_00->fields)._rotation2D.y = (float)uStack_5._4_4_;
    (this_00->fields)._rotation2D.z = fStack_6;
    (this_00->fields)._rotation2D.w = fStack_12;
    if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
      fVar2 = (this_00->fields)._rotation2D.y;
      fVar10 = (this_00->fields)._rotation2D.z;
      fVar11 = (this_00->fields)._rotation2D.w;
      (this_00->fields)._localRotation2D.x = (this_00->fields)._rotation2D.x;
      (this_00->fields)._localRotation2D.y = fVar2;
      (this_00->fields)._localRotation2D.z = fVar10;
      (this_00->fields)._localRotation2D.w = fVar11;
    }
    else {
      pGVar14 = (this_00->fields)._parent;
      aQStack_15[0].x = (pGVar14->fields)._rotation2D.x;
      aQStack_15[0].y = (pGVar14->fields)._rotation2D.y;
      aQStack_15[0].z = (pGVar14->fields)._rotation2D.z;
      aQStack_15[0].w = (pGVar14->fields)._rotation2D.w;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      uStack_7 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
      uStack_8 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
      uStack_5 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
      fStack_6 = unaff_XMM11_Dc;
      fStack_12 = unaff_XMM11_Dd;
      (*pcRam_?)(aQStack_15);
      fVar2 = (this_00->fields)._rotation2D.x;
      fVar10 = (this_00->fields)._rotation2D.y;
      fVar11 = (this_00->fields)._rotation2D.z;
      fVar13 = (this_00->fields)._rotation2D.w;
      fVar16 = (fVar13 * 0.0 + fVar2 * 0.0 + fVar11 * 0.0) - fVar10 * 0.0;
      fVar17 = (fVar10 * 0.0 + fVar13 * 0.0 + fVar2 * 0.0) - fVar11 * 0.0;
      fVar18 = ((fVar13 * 0.0 - fVar2 * 0.0) - fVar10 * 0.0) - fVar11 * 0.0;
      fVar10 = (fVar11 * 0.0 + fVar13 * 0.0 + fVar10 * 0.0) - fVar2 * 0.0;
      fVar2 = fVar17 * fVar17 + fVar16 * fVar16 + fVar10 * fVar10 + fVar18 * fVar18;
      if (fVar2 < 0.0) {
        fVar2 = (float)FUN_?(fVar2);
      }
      else {
        fVar2 = SQRT(fVar2);
      }
      if (_UNK_? <= fVar2) {
        fVar2 = _UNK_? / fVar2;
        fVar16 = fVar16 * fVar2;
        fVar17 = fVar17 * fVar2;
        fVar10 = fVar10 * fVar2;
        fVar18 = fVar18 * fVar2;
      }
      (this_00->fields)._localRotation2D.x = fVar16;
      (this_00->fields)._localRotation2D.y = fVar17;
      (this_00->fields)._localRotation2D.z = fVar10;
      (this_00->fields)._localRotation2D.w = fVar18;
    }
    aQStack_15[0].x = (this_00->fields)._localRotation2D.x;
    aQStack_15[0].y = (this_00->fields)._localRotation2D.y;
    aQStack_15[0].z = (this_00->fields)._localRotation2D.z;
    aQStack_15[0].w = (this_00->fields)._localRotation2D.w;
    fVar2 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_15,(MethodInfo *)0x0);
    (this_00->fields)._localRotation2DDegrees = fVar2;
    GizmoTransform::GizmoTransform_Update2DAxes(this_00,(MethodInfo *)0x0);
    GizmoTransform::GizmoTransform_UpdateChildTransforms2D(this_00,(MethodInfo *)0x0);
    pGVar19 = (this_00->fields).Changed;
    (this_00->fields)._firingChanged2DEvent = 1;
    if (pGVar19 != (GizmoEntityTransformChangedHandler *)0x0) {
      (*(pGVar19->fields)._._.invoke_impl)
                ((pGVar19->fields)._._.method_code,this_00,0x100000000,(pGVar19->fields)._._.method);
    }
    (this_00->fields)._firingChanged2DEvent = 0;
    return;
  }
  return;
}

