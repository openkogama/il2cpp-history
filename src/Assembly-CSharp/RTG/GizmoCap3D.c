
/* Void AlignTransformAxis(Int32, AxisSign, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_AlignTransformAxis
               (GizmoCap3D *this,int32_t axisIndex,AxisSign__Enum axisSign,Vector3 *axis,
               MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    aVStack_1[0].x = axis->x;
    aVStack_1[0].y = axis->y;
    aVStack_1[0].z = axis->z;
    GizmoTransform::GizmoTransform_AlignAxis3D
              (this_00,axisIndex,axisSign,aVStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ApplyZoomFactor(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_ApplyZoomFactor
               (GizmoCap3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar1 = 0x98;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x20) == '\0') {
      return;
    }
    pIVar2 = (this->fields)._controllers;
    uVar3 = 0xa0;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      uVar3 = 0x98;
    }
    if (pIVar2 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = *(uint *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar3) + 0x10);
      if ((uint)pIVar2->max_length <= uVar3) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar5 = pIVar2->vector[(int)uVar3];
      lVar1 = 0xa0;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        lVar1 = 0x98;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if (lVar1 != 0) {
        fVar6 = _UNK_?;
        if (*(char *)(lVar1 + 0x20) != '\0') {
          this_00 = (this->fields)._._handle;
          if (this_00 == (GizmoHandle *)0x0) goto code_?;
          fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
        }
        if (pIVar5 != (IGizmoCap3DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoCap3DController,pIVar5,fVar6);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CapSlider3D(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_CapSlider3D
               (GizmoCap3D *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar1 = 0x98;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap3DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar5 = pIVar2->vector[(int)uVar3];
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      uVar3 = 0xa0;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        uVar3 = 0x98;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if (lVar1 != 0) {
        fVar6 = _UNK_?;
        if (*(char *)(lVar1 + 0x20) != '\0') {
          this_01 = (this->fields)._._handle;
          if (this_01 == (GizmoHandle *)0x0) goto code_?;
          fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
        }
        if (pIVar5 != (IGizmoCap3DController *)0x0) {
          pIVar7 = pIVar5->klass;
          uVar8 = 0;
          uVar9._0_1_ = (pIVar7->_1).rank;
          uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar9 != 0) {
            do {
              if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)TypeInfo__RTG__IGizmoCap3DController) {
                ppIVar10 = &(&(pIVar7->vtable).UpdateHandles)
                           [pIVar7->interfaceOffsets[uVar8].offset + 2].methodPtr;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          ppIVar10 = (Il2CppMethodPointer *)
                    FUN_?(pIVar5,TypeInfo__RTG__IGizmoCap3DController,2);
code_?:
          uStack_11._0_4_ = sliderEndPt->x;
          uStack_11._4_4_ = sliderEndPt->y;
          fStack_12 = sliderEndPt->z;
          fStack_13 = sliderDirection->z;
          uStack_14._0_4_ = sliderDirection->x;
          uStack_14._4_4_ = sliderDirection->y;
          (**ppIVar10)(pIVar5,&uStack_14,&uStack_11,fVar6,(MethodInfo *)ppIVar10[1]);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CapSlider3DInvert(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_CapSlider3DInvert
               (GizmoCap3D *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar1 = 0x98;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap3DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar5 = pIVar2->vector[(int)uVar3];
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      uVar3 = 0xa0;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        uVar3 = 0x98;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if (lVar1 != 0) {
        fVar6 = _UNK_?;
        if (*(char *)(lVar1 + 0x20) != '\0') {
          this_01 = (this->fields)._._handle;
          if (this_01 == (GizmoHandle *)0x0) goto code_?;
          fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
        }
        if (pIVar5 != (IGizmoCap3DController *)0x0) {
          pIVar7 = pIVar5->klass;
          uVar8 = 0;
          uVar9._0_1_ = (pIVar7->_1).rank;
          uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar9 != 0) {
            do {
              if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)TypeInfo__RTG__IGizmoCap3DController) {
                ppIVar10 = &(&(pIVar7->vtable).UpdateHandles)
                           [pIVar7->interfaceOffsets[uVar8].offset + 3].methodPtr;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          ppIVar10 = (Il2CppMethodPointer *)
                    FUN_?(pIVar5,TypeInfo__RTG__IGizmoCap3DController,3);
code_?:
          uStack_11._0_4_ = sliderEndPt->x;
          uStack_11._4_4_ = sliderEndPt->y;
          fStack_12 = sliderEndPt->z;
          fStack_13 = sliderDirection->z;
          uStack_14._0_4_ = sliderDirection->x;
          uStack_14._4_4_ = sliderDirection->y;
          (**ppIVar10)(pIVar5,&uStack_14,&uStack_11,fVar6,(MethodInfo *)ppIVar10[1]);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single GetRealBoxDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealBoxDepth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x40) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x40) * _UNK_?;
}


/* Single GetRealBoxHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealBoxHeight
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x3c) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x3c) * _UNK_?;
}


/* Vector3 GetRealBoxSize(Single) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealBoxSize
                    (Vector3 *__return_storage_ptr__,GizmoCap3D *this,float zoomFactor,
                    MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    pGVar3 = (this->fields)._sharedLookAndFeel;
    lVar4 = 0xa0;
    if (*(char *)(lVar2 + 0x20) == '\0') {
      if (pGVar3 == (GizmoCap3DLookAndFeel *)0x0) {
        lVar4 = 0x98;
      }
      bVar5 = (this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0;
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      lVar2 = 0xa0;
      if (bVar5) {
        lVar2 = 0x98;
      }
      lVar6 = *(longlong *)((longlong)&this->klass + lVar2);
      uVar7 = 0xa0;
      if (bVar5) {
        uVar7 = 0x98;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar7);
      zoomFactor = _UNK_?;
    }
    else {
      if (pGVar3 == (GizmoCap3DLookAndFeel *)0x0) {
        lVar4 = 0x98;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar4);
      lVar4 = 0xa0;
      if (pGVar3 == (GizmoCap3DLookAndFeel *)0x0) {
        lVar4 = 0x98;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      lVar6 = 0xa0;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        lVar6 = 0x98;
      }
      lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
    }
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar1 = 0x98;
    }
    fVar8 = *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x1c);
    fVar9 = *(float *)(lVar6 + 0x3c);
    fVar10 = *(float *)(lVar2 + 0x40);
    __return_storage_ptr__->x = fVar8 * *(float *)(lVar4 + 0x38) * zoomFactor;
    __return_storage_ptr__->y = fVar8 * fVar9 * zoomFactor;
    __return_storage_ptr__->z = fVar8 * fVar10 * zoomFactor;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pVVar12 = (Vector3 *)(*pcVar11)();
  return pVVar12;
}


/* Single GetRealBoxWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealBoxWidth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x38) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x38) * _UNK_?;
}


/* Single GetRealConeHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealConeHeight
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x24) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x24) * _UNK_?;
}


/* Single GetRealConeRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealConeRadius
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x28) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x28) * _UNK_?;
}


/* Single GetRealPyramidDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealPyramidDepth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x34) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x34) * _UNK_?;
}


/* Single GetRealPyramidHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealPyramidHeight
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x2c) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x2c) * _UNK_?;
}


/* Single GetRealPyramidWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealPyramidWidth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x30) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x30) * _UNK_?;
}


/* Single GetRealSphereRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealSphereRadius
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x44) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x44) * _UNK_?;
}


/* Single GetRealTriPrismDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealTriPrismDepth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x50) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x50) * _UNK_?;
}


/* Single GetRealTriPrismHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealTriPrismHeight
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x4c) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x4c) * _UNK_?;
}


/* Single GetRealTriPrismWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealTriPrismWidth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xa0;
  if (*(char *)(lVar2 + 0x20) != '\0') {
    if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar6 = 0x98;
      lVar1 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x48) * zoomFactor;
  }
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar2 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x48) * _UNK_?;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetSliderAlignedRealLength
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar3 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar3 = 0x98;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if ((lVar3 != 0) &&
     (pIVar4 = (this->fields)._controllers, pIVar4 != (IGizmoCap3DController__Array *)0x0)) {
    uVar5 = *(uint *)(lVar3 + 0x10);
    if ((uint)pIVar4->max_length <= uVar5) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      fVar7 = (float)(*pcVar6)();
      return fVar7;
    }
    pIVar8 = pIVar4->vector[(int)uVar5];
    if (pIVar8 != (IGizmoCap3DController *)0x0) {
      pIVar9 = pIVar8->klass;
      uVar10 = 0;
      uVar11._0_1_ = (pIVar9->_1).rank;
      uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar11 != 0) {
        do {
          if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
              (Il2CppClass *)TypeInfo__RTG__IGizmoCap3DController) {
            ppIVar12 = &(&(pIVar9->vtable).UpdateHandles)
                       [pIVar9->interfaceOffsets[uVar10].offset + 4].methodPtr;
            goto code_?;
          }
          uVar13 = (short)uVar10 + 1;
          uVar10 = (ulonglong)uVar13;
        } while (uVar13 < uVar11);
      }
      ppIVar12 = (Il2CppMethodPointer *)
                FUN_?(pIVar8,TypeInfo__RTG__IGizmoCap3DController,4,zoomFactor,uVar1,uVar2
                             );
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar7 = (float)(**ppIVar12)(pIVar8,zoomFactor,(MethodInfo *)ppIVar12[1]);
      return fVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float)(*pcVar6)();
  return fVar7;
}


/* Single GetZoomFactor(Camera) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetZoomFactor
                (GizmoCap3D *this,Camera *camera,MethodInfo *method)

{
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar1 = 0x98;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x20) == '\0') {
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


/* Void OnGizmoPostDisabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnGizmoPostDisabled
               (GizmoCap3D *this,Gizmo *gizmo,MethodInfo *method)

{
  pGVar1 = (this->fields)._overrideColor;
  if (pGVar1 != (GizmoOverrideColor *)0x0) {
    (pGVar1->fields)._isActive = 0;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnGizmoPostEnabled
               (GizmoCap3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    lVar3 = 0xa0;
    lVar4 = 0xa0;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar4 = 0x98;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    if (lVar4 != 0) {
      fVar5 = _UNK_?;
      if (*(char *)(lVar4 + 0x20) != '\0') {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      lVar4 = 0xa0;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        lVar4 = 0x98;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if ((lVar4 != 0) &&
         (pIVar6 = (this->fields)._controllers, pIVar6 != (IGizmoCap3DController__Array *)0x0)) {
        uVar7 = *(uint *)(lVar4 + 0x10);
        if ((uint)pIVar6->max_length <= uVar7) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (pIVar6->vector[(int)uVar7] != (IGizmoCap3DController *)0x0) {
          FUN_?(0,TypeInfo__RTG__IGizmoCap3DController);
          if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            lVar3 = 0x98;
          }
          lVar4 = *(longlong *)((longlong)&this->klass + lVar3);
          if ((lVar4 != 0) &&
             (pIVar6 = (this->fields)._controllers, pIVar6 != (IGizmoCap3DController__Array *)0x0))
          {
            uVar7 = *(uint *)(lVar4 + 0x10);
            if ((uint)pIVar6->max_length <= uVar7) goto code_?;
            pIVar9 = pIVar6->vector[(int)uVar7];
            if (pIVar9 != (IGizmoCap3DController *)0x0) {
              pIVar10 = pIVar9->klass;
              uVar11 = 0;
              uVar12._0_1_ = (pIVar10->_1).rank;
              uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
              if (uVar12 != 0) {
                do {
                  if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoCap3DController) {
                    ppIVar13 = &(&(pIVar10->vtable).UpdateHandles)
                               [pIVar10->interfaceOffsets[uVar11].offset + 1].methodPtr;
                    goto code_?;
                  }
                  uVar14 = (short)uVar11 + 1;
                  uVar11 = (ulonglong)uVar14;
                } while (uVar14 < uVar12);
              }
              ppIVar13 = (Il2CppMethodPointer *)
                        FUN_?(pIVar9,TypeInfo__RTG__IGizmoCap3DController,1,fVar5,uVar1,
                                      uVar2,unaff_RDI);
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
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnGizmoPreUpdateBegin
               (GizmoCap3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar1 = 0x98;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap3DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoCap3DController *)0x0) {
      FUN_?(0);
      pIVar2 = (this->fields)._controllers;
      if (pIVar2 != (IGizmoCap3DController__Array *)0x0) {
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        pIVar5 = pIVar2->vector[(int)uVar3];
        this_00 = (this->fields)._._gizmo;
        if (this_00 != (Gizmo *)0x0) {
          camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
          uVar3 = 0xa0;
          if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            uVar3 = 0x98;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
          if (lVar1 != 0) {
            if (*(char *)(lVar1 + 0x20) != '\0') {
              this_01 = (this->fields)._._handle;
              if (this_01 == (GizmoHandle *)0x0) goto code_?;
              GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
            }
            if (pIVar5 != (IGizmoCap3DController *)0x0) {
              pIVar6 = pIVar5->klass;
              uVar7 = 0;
              uVar8._0_1_ = (pIVar6->_1).rank;
              uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
              if (uVar8 != 0) {
                do {
                  if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoCap3DController) {
                    ppIVar9 = &(&(pIVar6->vtable).UpdateHandles)
                               [pIVar6->interfaceOffsets[uVar7].offset + 1].methodPtr;
                    goto code_?;
                  }
                  uVar10 = (short)uVar7 + 1;
                  uVar7 = (ulonglong)uVar10;
                } while (uVar10 < uVar8);
              }
              ppIVar9 = (Il2CppMethodPointer *)
                        FUN_?(pIVar5,TypeInfo__RTG__IGizmoCap3DController,1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**ppIVar9)(pIVar5,*ppIVar9,(MethodInfo *)ppIVar9[1]);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHoverableStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnHoverableStateChanged
               (GizmoCap3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    bVar2 = (this->fields)._._isHoverable;
    (pGVar1->fields)._Is3DHoverable_k__BackingField = bVar2;
    (pGVar1->fields)._Is2DHoverable_k__BackingField = bVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnTransformChanged
               (GizmoCap3D *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((changeData.ChangeReason != 1) && (iStackX_1c = changeData.TRSDimension, iStackX_1c != 2)) {
    return;
  }
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar1 = 0x98;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap3DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar5 = pIVar2->vector[(int)uVar3];
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      uVar3 = 0xa0;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        uVar3 = 0x98;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if (lVar1 != 0) {
        fVar6 = _UNK_?;
        if (*(char *)(lVar1 + 0x20) != '\0') {
          this_01 = (this->fields)._._handle;
          if (this_01 == (GizmoHandle *)0x0) goto DAT_?;
          fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
        }
        if (pIVar5 != (IGizmoCap3DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoCap3DController,pIVar5,fVar6);
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnVisibilityStateChanged
               (GizmoCap3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar1 = 0x98;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap3DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoCap3DController *)0x0) {
      FUN_?(0);
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        uVar3 = 0xa0;
        if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          uVar3 = 0x98;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
        if ((lVar1 != 0) &&
           (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap3DController__Array *)0x0)) {
          uVar3 = *(uint *)(lVar1 + 0x10);
          if ((uint)pIVar2->max_length <= uVar3) goto code_?;
          pIVar5 = pIVar2->vector[(int)uVar3];
          lVar1 = 0xa0;
          if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            lVar1 = 0x98;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
          if (lVar1 != 0) {
            fVar6 = _UNK_?;
            if (*(char *)(lVar1 + 0x20) != '\0') {
              this_01 = (this->fields)._._handle;
              if (this_01 == (GizmoHandle *)0x0) goto code_?;
              fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
            }
            if (pIVar5 != (IGizmoCap3DController *)0x0) {
              pIVar7 = pIVar5->klass;
              uVar8 = 0;
              uVar9._0_1_ = (pIVar7->_1).rank;
              uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
              if (uVar9 != 0) {
                do {
                  if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoCap3DController) {
                    ppIVar10 = &(&(pIVar7->vtable).UpdateHandles)
                               [pIVar7->interfaceOffsets[uVar8].offset + 1].methodPtr;
                    goto code_?;
                  }
                  uVar11 = (short)uVar8 + 1;
                  uVar8 = (ulonglong)uVar11;
                } while (uVar11 < uVar9);
              }
              ppIVar10 = (Il2CppMethodPointer *)
                        FUN_?(pIVar5,TypeInfo__RTG__IGizmoCap3DController,1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**ppIVar10)(pIVar5,fVar6,(MethodInfo *)ppIVar10[1]);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RegisterTransformAsDragTarget(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_RegisterTransformAsDragTarget
               (GizmoCap3D *this,IGizmoDragSession *dragSession,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_Render
               (GizmoCap3D *this,Camera *camera,MethodInfo *method)

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
  pGVar1 = (this->fields)._overrideColor;
  if (pGVar1 == (GizmoOverrideColor *)0x0) goto DAT_?;
  if ((pGVar1->fields)._isActive == 0) {
    pGVar2 = (this->fields)._._gizmo;
    if (pGVar2 == (Gizmo *)0x0) goto DAT_?;
    if ((pGVar2->fields)._hoverInfo._isHovered == 0) {
code_?:
      lVar3 = 0xa0;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        lVar3 = 0x98;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 == 0) goto DAT_?;
      fVar4 = *(float *)(lVar3 + 0x6c);
      fVar5 = *(float *)(lVar3 + 0x70);
      fVar6 = *(float *)(lVar3 + 0x74);
      fVar7 = *(float *)(lVar3 + 0x78);
    }
    else {
      pGVar8 = (this->fields)._._handle;
      uStack_9._0_4_ = (pGVar2->fields)._hoverInfo._hoverPoint.y;
      uStack_9._4_4_ = (pGVar2->fields)._hoverInfo._hoverPoint.z;
      if (pGVar8 == (GizmoHandle *)0x0) goto DAT_?;
      if ((pGVar2->fields)._hoverInfo._handleId != (pGVar8->fields)._id) goto code_?;
      lVar3 = 0xa0;
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        lVar3 = 0x98;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
      if (lVar3 == 0) goto DAT_?;
      fVar4 = *(float *)(lVar3 + 0x7c);
      fVar5 = *(float *)(lVar3 + 0x80);
      fVar6 = *(float *)(lVar3 + 0x84);
      fVar7 = *(float *)(lVar3 + 0x88);
    }
    lVar3 = 0xa0;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar3 = 0x98;
    }
    lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  }
  else {
    fVar4 = (pGVar1->fields)._color.r;
    fVar5 = (pGVar1->fields)._color.g;
    fVar6 = (pGVar1->fields)._color.b;
    fVar7 = (pGVar1->fields)._color.a;
    lVar3 = 0xa0;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar3 = 0x98;
    }
    lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
    if (lVar3 == 0) goto DAT_?;
  }
  lVar10 = 0xa0;
  if (*(int *)(lVar3 + 0x14) == 0) {
    lVar3 = 0xa0;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar3 = 0x98;
    }
    lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
    if (lVar3 == 0) goto DAT_?;
    iVar11 = *(int *)(lVar3 + 0x18);
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_00 == (GizmoSolidMaterial *)0x0) goto DAT_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_00,iVar11 == 0,(MethodInfo *)0x0);
    if (iVar11 == 0) {
      if ((camera == (Camera *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
      goto DAT_?;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&CStack_13,this_01,(MethodInfo *)0x0);
      VStack_14.x = pVVar12->x;
      VStack_14.y = pVVar12->y;
      VStack_14.z = pVVar12->z;
      GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection(this_00,&VStack_14,(MethodInfo *)0x0)
      ;
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar15 == (Material *)0x0) goto DAT_?;
    CStack_13.g = fVar5;
    CStack_13.r = fVar4;
    CStack_13.a = fVar7;
    CStack_13.b = fVar6;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar15,StringLiteral__Color,&CStack_13,(MethodInfo *)0x0);
    pMVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar15 == (Material *)0x0) goto DAT_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar15,0,(MethodInfo *)0x0)
    ;
    pGVar8 = (this->fields)._._handle;
    if (pGVar8 == (GizmoHandle *)0x0) goto DAT_?;
    GizmoHandle::GizmoHandle_Render3DSolid(pGVar8,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar16 = (GizmoLineMaterial *)
             Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    if (pGVar16 == (GizmoLineMaterial *)0x0) goto DAT_?;
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(pGVar16,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = GizmoLineMaterial::GizmoLineMaterial_get_Material(pGVar16,(MethodInfo *)0x0);
    if (pMVar15 == (Material *)0x0) goto DAT_?;
    CStack_13.g = fVar5;
    CStack_13.r = fVar4;
    CStack_13.a = fVar7;
    CStack_13.b = fVar6;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar15,StringLiteral__Color,&CStack_13,(MethodInfo *)0x0);
    pMVar15 = GizmoLineMaterial::GizmoLineMaterial_get_Material(pGVar16,(MethodInfo *)0x0);
    if (pMVar15 == (Material *)0x0) goto DAT_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar15,0,(MethodInfo *)0x0)
    ;
    pGVar8 = (this->fields)._._handle;
    if (pGVar8 == (GizmoHandle *)0x0) goto DAT_?;
    GizmoHandle::GizmoHandle_Render3DWire(pGVar8,(MethodInfo *)0x0);
  }
  lVar3 = 0xa0;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar3 = 0x98;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 == 0) {
DAT_?:
    FUN_?();
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  if (*(int *)(lVar3 + 0x10) == 3) {
    lVar3 = 0xa0;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar3 = 0x98;
    }
    if (*(char *)(*(longlong *)((longlong)&this->klass + lVar3) + 0x54) != '\0') {
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar16 = (GizmoLineMaterial *)
               Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                         (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      if (pGVar16 != (GizmoLineMaterial *)0x0) {
        GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(pGVar16,(MethodInfo *)0x0)
        ;
        lVar3 = 0xa0;
        if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          lVar3 = 0x98;
        }
        lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
        if (lVar3 != 0) {
          uVar18 = *(undefined8 *)(lVar3 + 0x58);
          uVar19 = *(undefined8 *)(lVar3 + 0x60);
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral__Color);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = GizmoLineMaterial::GizmoLineMaterial_get_Material(pGVar16,(MethodInfo *)0x0);
          if (pMVar15 != (Material *)0x0) {
            CStack_13._0_8_ = uVar18;
            CStack_13._8_8_ = uVar19;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar15,StringLiteral__Color,&CStack_13,(MethodInfo *)0x0);
            pMVar15 = GizmoLineMaterial::GizmoLineMaterial_get_Material(pGVar16,(MethodInfo *)0x0);
            if (pMVar15 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                        (pMVar15,0,(MethodInfo *)0x0);
              pGVar20 = (this->fields)._transform;
              if (pGVar20 != (GizmoTransform *)0x0) {
                uVar18._0_4_ = (pGVar20->fields)._position3D.x;
                uVar18._4_4_ = (pGVar20->fields)._position3D.y;
                fVar4 = (pGVar20->fields)._position3D.z;
                fVar5 = GizmoCap3D_GetZoomFactor(this,camera,(MethodInfo *)0x0);
                fVar5 = GizmoCap3D_GetRealSphereRadius(this,fVar5,(MethodInfo *)0x0);
                if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                  lVar10 = 0x98;
                }
                lVar3 = *(longlong *)((longlong)&this->klass + lVar10);
                if (lVar3 != 0) {
                  VStack_14._0_8_ = uVar18;
                  VStack_14.z = fVar4;
                  linePoints = PrimitiveFactory::PrimitiveFactory_GenerateSphereBorderPoints
                                         (camera,&VStack_14,fVar5,*(int32_t *)(lVar3 + 0x68),
                                          (MethodInfo *)0x0);
                  GLRenderer::GLRenderer_DrawLineLoop3D(linePoints,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto DAT_?;
    }
  }
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_SetZoomFactorTransform
               (GizmoCap3D *this,GizmoTransform *transform,MethodInfo *method)

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


/* Void UnregisterTransformAsDragTarget(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_UnregisterTransformAsDragTarget
               (GizmoCap3D *this,IGizmoDragSession *dragSession,MethodInfo *method)

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


/* GizmoCap3D(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D__ctor
               (GizmoCap3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ConeShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoBoxCap3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap3DControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoCap3DType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoCap3D__OnGizmoPostDisabled_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoCap3D__OnGizmoPostEnabled_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoCap3D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoCap3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoConeCap3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoOverrideColor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPostDisabledHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPyramidCap3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoSphereCap3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTriPrismCap3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PyramidShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SphereShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangPrismShape3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (ConeShape3D *)FUN_?(TypeInfo__RTG__ConeShape3D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ConeShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar2 = (ConeShape3D_WireRenderDescriptor *)
            FUN_?(TypeInfo__RTG__ConeShape3D__WireRenderDescriptor);
  bVar3 = iRam_? != 0;
  (pCVar2->fields)._numDetailAxialRings = 0x14;
  (pCVar2->fields)._numDetailAxialSegments = 0x14;
  (pCVar1->fields)._wireRenderDesc = pCVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pCVar1->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = cRam_? == '\0';
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (pCVar1->fields)._baseCenter.x = (pVVar8->zeroVector).x;
  (pCVar1->fields)._baseCenter.y = fVar9;
  (pCVar1->fields)._baseCenter.z = fVar10;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = iRam_? != 0;
  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar11->identityQuaternion).x;
  fVar9 = (pQVar11->identityQuaternion).y;
  fVar12 = (pQVar11->identityQuaternion).z;
  fVar13 = (pQVar11->identityQuaternion).w;
  (pCVar1->fields)._baseRadius = 1.0;
  (pCVar1->fields)._height = 1.0;
  (pCVar1->fields)._rotation.x = fVar10;
  (pCVar1->fields)._rotation.y = fVar9;
  (pCVar1->fields)._rotation.z = fVar12;
  (pCVar1->fields)._rotation.w = fVar13;
  (this->fields)._cone = pCVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._cone >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pPVar14 = (PyramidShape3D *)FUN_?(TypeInfo__RTG__PyramidShape3D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = cRam_? == '\0';
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (pPVar14->fields)._baseCenter.x = (pVVar8->zeroVector).x;
  (pPVar14->fields)._baseCenter.y = fVar9;
  (pPVar14->fields)._baseCenter.z = fVar10;
  (pPVar14->fields)._baseWidth = 1.0;
  (pPVar14->fields)._baseDepth = 1.0;
  (pPVar14->fields)._height = 1.0;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = iRam_? != 0;
  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar11->identityQuaternion).y;
  fVar9 = (pQVar11->identityQuaternion).z;
  fVar12 = (pQVar11->identityQuaternion).w;
  (pPVar14->fields)._rotation.x = (pQVar11->identityQuaternion).x;
  (pPVar14->fields)._rotation.y = fVar10;
  (pPVar14->fields)._rotation.z = fVar9;
  (pPVar14->fields)._rotation.w = fVar12;
  (this->fields)._pyramid = pPVar14;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._pyramid >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  this_00 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._box = this_00;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._box >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pSVar15 = (SphereShape3D *)FUN_?(TypeInfo__RTG__SphereShape3D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__SphereShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = cRam_? == '\0';
  (pSVar15->fields)._radius = 1.0;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = cRam_? == '\0';
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (pSVar15->fields)._center.x = (pVVar8->zeroVector).x;
  (pSVar15->fields)._center.y = fVar9;
  (pSVar15->fields)._center.z = fVar10;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar11->identityQuaternion).y;
  fVar9 = (pQVar11->identityQuaternion).z;
  fVar12 = (pQVar11->identityQuaternion).w;
  (pSVar15->fields)._rotation.x = (pQVar11->identityQuaternion).x;
  (pSVar15->fields)._rotation.y = fVar10;
  (pSVar15->fields)._rotation.z = fVar9;
  (pSVar15->fields)._rotation.w = fVar12;
  pSVar16 = (SphereShape3D_WireRenderDescriptor *)
            FUN_?(TypeInfo__RTG__SphereShape3D__WireRenderDescriptor);
  (pSVar16->fields)._numDetailAxialRings = 0x14;
  (pSVar16->fields)._numDetailSliceRings = 0x14;
  (pSVar15->fields)._wireRenderDesc = pSVar16;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(pSVar15->fields)._wireRenderDesc >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  iVar17 = iRam_?;
  (this->fields)._sphere = pSVar15;
  if (iVar17 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._sphere >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pTVar18 = (TriangPrismShape3D *)FUN_?(TypeInfo__RTG__TriangPrismShape3D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = cRam_? == '\0';
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (pTVar18->fields)._baseCenter.x = (pVVar8->zeroVector).x;
  (pTVar18->fields)._baseCenter.y = fVar9;
  (pTVar18->fields)._baseCenter.z = fVar10;
  (pTVar18->fields)._width = 1.0;
  (pTVar18->fields)._height = 1.0;
  (pTVar18->fields)._depth = 1.0;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = iRam_? != 0;
  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar11->identityQuaternion).y;
  fVar9 = (pQVar11->identityQuaternion).z;
  fVar12 = (pQVar11->identityQuaternion).w;
  (pTVar18->fields)._rotation.x = (pQVar11->identityQuaternion).x;
  (pTVar18->fields)._rotation.y = fVar10;
  (pTVar18->fields)._rotation.z = fVar9;
  (pTVar18->fields)._rotation.w = fVar12;
  (this->fields)._trPrism = pTVar18;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._trPrism >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pGVar19 = (GizmoCap3DControllerData *)FUN_?(TypeInfo__RTG__GizmoCap3DControllerData);
  bVar3 = iRam_? != 0;
  (this->fields)._controllerData = pGVar19;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pIVar20 = TypeRef__RTG__GizmoCap3DType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar21 = (longlong *)0x0;
  if (pIVar20 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar22 = FUN_?(pIVar20,1);
    plVar21 = (longlong *)FUN_?(lVar22 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar21 == (longlong *)0x0) {
    uVar23 = func_?(&TypeInfo__System__ArgumentNullException);
    this_03 = (ArgumentNullException *)func_?(uVar23);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_03,paramName,(MethodInfo *)0x0);
    uVar23 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_03,uVar23);
    pcVar24 = (code *)swi(3);
    (*pcVar24)();
    return;
  }
  this_01 = (Array *)(**(code **)(*plVar21 + 0x888))(plVar21);
  if (this_01 != (Array *)0x0) {
    mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0);
    pIVar25 = (IGizmoCap3DController__Array *)FUN_?(TypeInfo__RTG__IGizmoCap3DController);
    bVar3 = iRam_? != 0;
    (this->fields)._controllers = pIVar25;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pGVar26 = (GizmoTransform *)FUN_?(TypeInfo__RTG__GizmoTransform);
    GizmoTransform::GizmoTransform__ctor(pGVar26,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields)._transform = pGVar26;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pGVar27 = (GizmoOverrideColor *)FUN_?(TypeInfo__RTG__GizmoOverrideColor);
    bVar3 = iRam_? != 0;
    (this->fields)._overrideColor = pGVar27;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._overrideColor >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pGVar28 = (GizmoCap3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
    uVar29 = _UNK_?;
    uVar30 = _UNK_?;
    uVar23 = _UNK_?;
    bVar3 = iRam_? != 0;
    uVar31 = _UNK_?;
    (pGVar28->fields)._sphereBorderColor.r = (float)_UNK_?;
    uVar32 = _UNK_?;
    (pGVar28->fields)._sphereBorderColor.g = (float)uVar31;
    _UNK_? = (undefined4)uVar29;
    _UNK_? = SUB84(uVar29,4);
    uVar31 = _UNK_?;
    (pGVar28->fields)._sphereBorderColor.b = (float)_UNK_?;
    _UNK_? = uVar32;
    (pGVar28->fields)._sphereBorderColor.a = (float)uVar31;
    (pGVar28->fields)._scale = 1.0;
    uVar29 = _UNK_?;
    uVar31 = _UNK_?;
    (pGVar28->fields)._hoveredColor.r = (float)_UNK_?;
    uVar32 = _UNK_?;
    (pGVar28->fields)._hoveredColor.g = (float)uVar31;
    _UNK_? = (undefined4)uVar29;
    _UNK_? = SUB84(uVar29,4);
    uVar31 = _UNK_?;
    (pGVar28->fields)._hoveredColor.b = (float)_UNK_?;
    _UNK_? = uVar32;
    (pGVar28->fields)._hoveredColor.a = (float)uVar31;
    (pGVar28->fields)._useZoomFactor = 1;
    (pGVar28->fields)._coneHeight = 1.65;
    (pGVar28->fields)._coneRadius = 0.5;
    (pGVar28->fields)._pyramidHeight = 1.65;
    (pGVar28->fields)._pyramidWidth = 0.8;
    (pGVar28->fields)._pyramidDepth = 0.8;
    (pGVar28->fields)._boxWidth = 0.7;
    (pGVar28->fields)._boxHeight = 0.7;
    (pGVar28->fields)._boxDepth = 0.7;
    (pGVar28->fields)._sphereRadius = 0.45;
    (pGVar28->fields)._trPrismWidth = 1.0;
    (pGVar28->fields)._trPrismHeight = 1.0;
    (pGVar28->fields)._trPrismDepth = 1.0;
    (pGVar28->fields)._numSphereBorderPoints = 100;
    uVar29 = _UNK_?;
    _UNK_? = (undefined4)uVar23;
    _UNK_? = SUB84(uVar23,4);
    uVar31 = _UNK_?;
    (pGVar28->fields)._color.r = (float)_UNK_?;
    _UNK_? = uVar29;
    uVar23 = _UNK_?;
    (pGVar28->fields)._color.g = (float)uVar31;
    _UNK_? = (undefined4)uVar30;
    _UNK_? = SUB84(uVar30,4);
    uVar31 = _UNK_?;
    (pGVar28->fields)._color.b = (float)_UNK_?;
    _UNK_? = uVar23;
    (pGVar28->fields)._color.a = (float)uVar31;
    (this->fields)._lookAndFeel = pGVar28;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._lookAndFeel >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    GizmoCap::GizmoCap__ctor((GizmoCap *)this,gizmo,handleId,(MethodInfo *)0x0);
    pGVar33 = (this->fields)._._handle;
    if (pGVar33 != (GizmoHandle *)0x0) {
      iVar34 = GizmoHandle::GizmoHandle_Add3DShape
                         (pGVar33,(Shape3D *)(this->fields)._cone,(MethodInfo *)0x0);
      pGVar33 = (this->fields)._._handle;
      (this->fields)._coneIndex = iVar34;
      if (pGVar33 != (GizmoHandle *)0x0) {
        iVar34 = GizmoHandle::GizmoHandle_Add3DShape
                           (pGVar33,(Shape3D *)(this->fields)._pyramid,(MethodInfo *)0x0);
        pGVar33 = (this->fields)._._handle;
        (this->fields)._pyramidIndex = iVar34;
        if (pGVar33 != (GizmoHandle *)0x0) {
          iVar34 = GizmoHandle::GizmoHandle_Add3DShape
                             (pGVar33,(Shape3D *)(this->fields)._box,(MethodInfo *)0x0);
          pGVar33 = (this->fields)._._handle;
          (this->fields)._boxIndex = iVar34;
          if (pGVar33 != (GizmoHandle *)0x0) {
            iVar34 = GizmoHandle::GizmoHandle_Add3DShape
                               (pGVar33,(Shape3D *)(this->fields)._sphere,(MethodInfo *)0x0);
            pGVar33 = (this->fields)._._handle;
            (this->fields)._sphereIndex = iVar34;
            if (pGVar33 != (GizmoHandle *)0x0) {
              iVar34 = GizmoHandle::GizmoHandle_Add3DShape
                                 (pGVar33,(Shape3D *)(this->fields)._trPrism,(MethodInfo *)0x0);
              pGVar33 = (this->fields)._._handle;
              (this->fields)._trPrismIndex = iVar34;
              if (pGVar33 != (GizmoHandle *)0x0) {
                pGVar26 = (this->fields)._transform;
                if (pGVar26 == (GizmoTransform *)0x0) {
                  pGVar35 = (pGVar33->fields)._gizmo;
                  if (pGVar35 == (Gizmo *)0x0) goto code_?;
                  bVar3 = iRam_? != 0;
                  (pGVar33->fields)._zoomFactorTransform = (pGVar35->fields)._transform;
                  if (bVar3) {
                    uVar4 = (uint)((ulonglong)&(pGVar33->fields)._zoomFactorTransform >> 0xc);
                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                      LOCK();
                      bVar3 = uVar6 == *puVar7;
                      if (bVar3) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar3);
                  }
                }
                else {
                  bVar3 = iRam_? != 0;
                  (pGVar33->fields)._zoomFactorTransform = pGVar26;
                  if (bVar3) {
                    uVar4 = (uint)((ulonglong)&(pGVar33->fields)._zoomFactorTransform >> 0xc);
                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                      LOCK();
                      bVar3 = uVar6 == *puVar7;
                      if (bVar3) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar3);
                  }
                }
                pGVar19 = (this->fields)._controllerData;
                if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                  bVar3 = iRam_? != 0;
                  (pGVar19->fields).Gizmo = (this->fields)._._gizmo;
                  if (bVar3) {
                    uVar4 = (uint)((ulonglong)&pGVar19->fields >> 0xc);
                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                      LOCK();
                      bVar3 = uVar6 == *puVar7;
                      if (bVar3) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar3);
                  }
                  pGVar19 = (this->fields)._controllerData;
                  if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                    bVar3 = iRam_? != 0;
                    (pGVar19->fields).Cap = this;
                    if (bVar3) {
                      uVar4 = (uint)((ulonglong)&(pGVar19->fields).Cap >> 0xc);
                      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                      do {
                        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                        LOCK();
                        bVar3 = uVar6 == *puVar7;
                        if (bVar3) {
                          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar3);
                    }
                    pGVar19 = (this->fields)._controllerData;
                    if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                      bVar3 = iRam_? != 0;
                      (pGVar19->fields).CapHandle = (this->fields)._._handle;
                      if (bVar3) {
                        uVar4 = (uint)((ulonglong)&(pGVar19->fields).CapHandle >> 0xc);
                        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                        do {
                          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                          LOCK();
                          bVar3 = uVar6 == *puVar7;
                          if (bVar3) {
                            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar3);
                      }
                      pGVar19 = (this->fields)._controllerData;
                      if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                        bVar3 = iRam_? != 0;
                        (pGVar19->fields).Cone = (this->fields)._cone;
                        if (bVar3) {
                          uVar4 = (uint)((ulonglong)&(pGVar19->fields).Cone >> 0xc);
                          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                          do {
                            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                            LOCK();
                            bVar3 = uVar6 == *puVar7;
                            if (bVar3) {
                              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar3);
                        }
                        pGVar19 = (this->fields)._controllerData;
                        if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                          (pGVar19->fields).ConeIndex = (this->fields)._coneIndex;
                          pGVar19 = (this->fields)._controllerData;
                          if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                            bVar3 = iRam_? != 0;
                            (pGVar19->fields).Pyramid = (this->fields)._pyramid;
                            if (bVar3) {
                              uVar4 = (uint)((ulonglong)&(pGVar19->fields).Pyramid >> 0xc);
                              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                              do {
                                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                LOCK();
                                bVar3 = uVar6 == *puVar7;
                                if (bVar3) {
                                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar3);
                            }
                            pGVar19 = (this->fields)._controllerData;
                            if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                              (pGVar19->fields).PyramidIndex = (this->fields)._pyramidIndex;
                              pGVar19 = (this->fields)._controllerData;
                              if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                                bVar3 = iRam_? != 0;
                                (pGVar19->fields).Box = (this->fields)._box;
                                if (bVar3) {
                                  uVar4 = (uint)((ulonglong)&(pGVar19->fields).Box >> 0xc);
                                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                  do {
                                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                    LOCK();
                                    bVar3 = uVar6 == *puVar7;
                                    if (bVar3) {
                                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar3);
                                }
                                pGVar19 = (this->fields)._controllerData;
                                if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                                  (pGVar19->fields).BoxIndex = (this->fields)._boxIndex;
                                  pGVar19 = (this->fields)._controllerData;
                                  if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                                    bVar3 = iRam_? != 0;
                                    (pGVar19->fields).Sphere = (this->fields)._sphere;
                                    if (bVar3) {
                                      uVar4 = (uint)((ulonglong)&(pGVar19->fields).Sphere >> 0xc);
                                      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                      do {
                                        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                        LOCK();
                                        bVar3 = uVar6 == *puVar7;
                                        if (bVar3) {
                                          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar3);
                                    }
                                    pGVar19 = (this->fields)._controllerData;
                                    if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                                      (pGVar19->fields).SphereIndex = (this->fields)._sphereIndex;
                                      pGVar19 = (this->fields)._controllerData;
                                      if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                                        bVar3 = iRam_? != 0;
                                        (pGVar19->fields).TrPrism = (this->fields)._trPrism;
                                        if (bVar3) {
                                          uVar4 = (uint)((ulonglong)&(pGVar19->fields).TrPrism >>
                                                         0xc);
                                          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                          do {
                                            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                            LOCK();
                                            bVar3 = uVar6 == *puVar7;
                                            if (bVar3) {
                                              *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar3);
                                        }
                                        pGVar19 = (this->fields)._controllerData;
                                        if (pGVar19 != (GizmoCap3DControllerData *)0x0) {
                                          (pGVar19->fields).TrPrismIndex =
                                               (this->fields)._trPrismIndex;
                                          pIVar25 = (this->fields)._controllers;
                                          pGVar19 = (this->fields)._controllerData;
                                          lVar22 = FUN_?(
                                                  TypeInfo__RTG__GizmoConeCap3DController);
                                          bVar3 = iRam_? != 0;
                                          *(GizmoCap3DControllerData **)(lVar22 + 0x10) = pGVar19;
                                          if (bVar3) {
                                            uVar4 = (uint)(lVar22 + 0x10U >> 0xc);
                                            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                            do {
                                              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                              LOCK();
                                              bVar3 = uVar6 == *puVar7;
                                              if (bVar3) {
                                                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar3);
                                          }
                                          if (pIVar25 != (IGizmoCap3DController__Array *)0x0) {
                                            lVar36 = FUN_?(lVar22,(pIVar25->klass->_0).
                                                                          element_class);
                                            if (lVar36 == 0) {
                                              uVar23 = FUN_?();
                                              FUN_?(uVar23,0);
                                              pcVar24 = (code *)swi(3);
                                              (*pcVar24)();
                                              return;
                                            }
                                            FUN_?(pIVar25,0,lVar22);
                                            pIVar25 = (this->fields)._controllers;
                                            pGVar19 = (this->fields)._controllerData;
                                            lVar22 = FUN_?(
                                                  TypeInfo__RTG__GizmoPyramidCap3DController);
                                            bVar3 = iRam_? != 0;
                                            *(GizmoCap3DControllerData **)(lVar22 + 0x10) = pGVar19;
                                            if (bVar3) {
                                              uVar4 = (uint)(lVar22 + 0x10U >> 0xc);
                                              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                              do {
                                                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                                LOCK();
                                                bVar3 = uVar6 == *puVar7;
                                                if (bVar3) {
                                                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar3);
                                            }
                                            if (pIVar25 != (IGizmoCap3DController__Array *)0x0) {
                                              lVar36 = FUN_?(lVar22,(pIVar25->klass->_0).
                                                                            element_class);
                                              if (lVar36 == 0) {
                                                uVar23 = FUN_?();
                                                FUN_?(uVar23,0);
                                                pcVar24 = (code *)swi(3);
                                                (*pcVar24)();
                                                return;
                                              }
                                              FUN_?(pIVar25,1,lVar22);
                                              pIVar25 = (this->fields)._controllers;
                                              pGVar19 = (this->fields)._controllerData;
                                              lVar22 = FUN_?(
                                                  TypeInfo__RTG__GizmoBoxCap3DController);
                                              bVar3 = iRam_? != 0;
                                              *(GizmoCap3DControllerData **)(lVar22 + 0x10) =
                                                   pGVar19;
                                              if (bVar3) {
                                                uVar4 = (uint)(lVar22 + 0x10U >> 0xc);
                                                uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                                do {
                                                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                                  LOCK();
                                                  bVar3 = uVar6 == *puVar7;
                                                  if (bVar3) {
                                                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                } while (!bVar3);
                                              }
                                              if (pIVar25 != (IGizmoCap3DController__Array *)0x0) {
                                                lVar36 = FUN_?(lVar22,(pIVar25->klass->_0).
                                                                              element_class);
                                                if (lVar36 == 0) {
                                                  uVar23 = FUN_?();
                                                  FUN_?(uVar23,0);
                                                  pcVar24 = (code *)swi(3);
                                                  (*pcVar24)();
                                                  return;
                                                }
                                                FUN_?(pIVar25,2,lVar22);
                                                pIVar25 = (this->fields)._controllers;
                                                pGVar19 = (this->fields)._controllerData;
                                                lVar22 = FUN_?(
                                                  TypeInfo__RTG__GizmoSphereCap3DController);
                                                bVar3 = iRam_? != 0;
                                                *(GizmoCap3DControllerData **)(lVar22 + 0x10) =
                                                     pGVar19;
                                                if (bVar3) {
                                                  uVar4 = (uint)(lVar22 + 0x10U >> 0xc);
                                                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR)
                                                    ;
                                                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR)
                                                    ;
                                                    LOCK();
                                                    bVar3 = uVar6 == *puVar7;
                                                    if (bVar3) {
                                                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar3);
                                                }
                                                if (pIVar25 != (IGizmoCap3DController__Array *)0x0)
                                                {
                                                  lVar36 = FUN_?(lVar22,(pIVar25->klass->_0)
                                                                                .element_class);
                                                  if (lVar36 == 0) {
                                                    uVar23 = FUN_?();
                                                    FUN_?(uVar23,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  FUN_?(pIVar25,3,lVar22);
                                                  pIVar25 = (this->fields)._controllers;
                                                  pGVar19 = (this->fields)._controllerData;
                                                  lVar22 = FUN_?(
                                                  TypeInfo__RTG__GizmoTriPrismCap3DController);
                                                  bVar3 = iRam_? != 0;
                                                  *(GizmoCap3DControllerData **)(lVar22 + 0x10) =
                                                       pGVar19;
                                                  if (bVar3) {
                                                    uVar4 = (uint)(lVar22 + 0x10U >> 0xc);
                                                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                                    do {
                                                      uVar6 = *(ulonglong *)
                                                               (uVar5 * 8 + 0xADDR);
                                                      puVar7 = (ulonglong *)
                                                               (uVar5 * 8 + 0xADDR);
                                                      LOCK();
                                                      bVar3 = uVar6 == *puVar7;
                                                      if (bVar3) {
                                                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar3);
                                                  }
                                                  if (pIVar25 != (IGizmoCap3DController__Array *)0x0
                                                     ) {
                                                    lVar36 = FUN_?(lVar22,(pIVar25->klass->
                                                                                  _0).element_class)
                                                    ;
                                                    if (lVar36 == 0) {
                                                      uVar23 = FUN_?();
                                                      FUN_?(uVar23,0);
                                                      pcVar24 = (code *)swi(3);
                                                      (*pcVar24)();
                                                      return;
                                                    }
                                                    FUN_?(pIVar25,4,lVar22);
                                                    pGVar26 = (this->fields)._transform;
                                                    value = (GizmoEntityTransformChangedHandler *)
                                                            FUN_?(
                                                  TypeInfo__RTG__GizmoEntityTransformChangedHandler)
                                                  ;
                                                  mscorlib.dll::System::Action`2[Object,UnityEngine
                                                  ::UIElements::Experimental::StyleValues]::
                                                  Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
                                                            ((
                                                  Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_
                                                  *)value,(Object *)this,
                                                  MethodInfo__RTG__GizmoCap3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar26 != (GizmoTransform *)0x0) {
                                                    GizmoTransform::GizmoTransform_add_Changed
                                                              (pGVar26,value,(MethodInfo *)0x0);
                                                    pGVar35 = (this->fields)._._gizmo;
                                                    if ((pGVar35 != (Gizmo *)0x0) &&
                                                       (pGVar26 = (this->fields)._transform,
                                                       pGVar26 != (GizmoTransform *)0x0)) {
                                                      GizmoTransform::GizmoTransform_SetParent
                                                                (pGVar26,(pGVar35->fields)._transform
                                                                 ,(MethodInfo *)0x0);
                                                      pGVar35 = (this->fields)._._gizmo;
                                                      value_00 = (GizmoPreUpdateBeginHandler *)
                                                                 FUN_?(
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Object]::
                                                  UnityAction_1_System_Object___ctor
                                                            ((UnityAction_1_System_Object_ *)
                                                             value_00,(Object *)this,
                                                                                                                          
                                                  MethodInfo__RTG__GizmoCap3D__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar35 != (Gizmo *)0x0) {
                                                    Gizmo::Gizmo_add_PreUpdateBegin
                                                              (pGVar35,value_00,(MethodInfo *)0x0);
                                                    pGVar35 = (this->fields)._._gizmo;
                                                    value_01 = (GizmoPostEnabledHandler *)
                                                               FUN_?(
                                                  TypeInfo__RTG__GizmoPostEnabledHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Object]::
                                                  UnityAction_1_System_Object___ctor
                                                            ((UnityAction_1_System_Object_ *)
                                                             value_01,(Object *)this,
                                                                                                                          
                                                  MethodInfo__RTG__GizmoCap3D__OnGizmoPostEnabled_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar35 != (Gizmo *)0x0) {
                                                    Gizmo::Gizmo_add_PostEnabled
                                                              (pGVar35,value_01,(MethodInfo *)0x0);
                                                    pGVar35 = (this->fields)._._gizmo;
                                                    this_02 = (UnityAction_1_System_Object_ *)
                                                              FUN_?(
                                                  TypeInfo__RTG__GizmoPostDisabledHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Object]::
                                                  UnityAction_1_System_Object___ctor
                                                            (this_02,(Object *)this,
                                                                                                                          
                                                  MethodInfo__RTG__GizmoCap3D__OnGizmoPostDisabled_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar35 != (Gizmo *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  TypeInfo__RTG__GizmoPostDisabledHandler);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  ppGVar37 = &(pGVar35->fields).PostDisabled;
                                                  a = (pGVar35->fields).PostDisabled;
                                                  do {
                                                    pGVar38 = (GizmoPostDisabledHandler *)
                                                              mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)a,
                                                                               (Delegate *)this_02,
                                                                               (MethodInfo *)0x0);
                                                    pGVar39 = (GizmoPostDisabledHandler *)0x0;
                                                    if (pGVar38 != (GizmoPostDisabledHandler *)0x0)
                                                    {
                                                      if (pGVar38->klass ==
                                                          TypeInfo__RTG__GizmoPostDisabledHandler) {
                                                        pGVar39 = pGVar38;
                                                      }
                                                      if (pGVar39 == (GizmoPostDisabledHandler *)0x0
                                                         ) {
                                                        FUN_?(pGVar38);
                                                        pcVar24 = (code *)swi(3);
                                                        (*pcVar24)();
                                                        return;
                                                      }
                                                    }
                                                    LOCK();
                                                    pGVar38 = *ppGVar37;
                                                    bVar3 = a == pGVar38;
                                                    if (bVar3) {
                                                      *ppGVar37 = pGVar39;
                                                      pGVar38 = a;
                                                    }
                                                    UNLOCK();
                                                    pGVar39 = a;
                                                    if (!bVar3) {
                                                      pGVar39 = pGVar38;
                                                    }
                                                    if (iRam_? != 0) {
                                                      uVar4 = (uint)((ulonglong)ppGVar37 >> 0xc);
                                                      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6)
                                                      ;
                                                      do {
                                                        uVar6 = *(ulonglong *)
                                                                 (uVar5 * 8 + 0xADDR);
                                                        puVar7 = (ulonglong *)
                                                                 (uVar5 * 8 + 0xADDR);
                                                        LOCK();
                                                        bVar3 = uVar6 == *puVar7;
                                                        if (bVar3) {
                                                          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar3);
                                                    }
                                                    bVar3 = pGVar39 == a;
                                                    a = pGVar39;
                                                    if (bVar3) {
                                                      return;
                                                    }
                                                  } while( true );
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
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* IGizmoDragSession get_DragSession() */

IGizmoDragSession *
Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_get_DragSession
          (GizmoCap3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    return (pGVar1->fields)._DragSession_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IGizmoDragSession *)(*pcVar2)();
  return pIVar3;
}


/* GizmoCap3DLookAndFeel get_LookAndFeel() */

GizmoCap3DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_get_LookAndFeel
          (GizmoCap3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoCap3DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_get_Position
                    (Vector3 *__return_storage_ptr__,GizmoCap3D *this,MethodInfo *method)

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


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoCap3D *this,MethodInfo *method)

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


/* Void set_DragSession(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_set_DragSession
               (GizmoCap3D *this,IGizmoDragSession *value,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 == (GizmoHandle *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pGVar1->fields)._DragSession_k__BackingField = value;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pGVar1->fields)._DragSession_k__BackingField >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_set_Position
               (GizmoCap3D *this,Vector3 *value,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_set_Rotation
               (GizmoCap3D *this,Quaternion *value,MethodInfo *method)

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

