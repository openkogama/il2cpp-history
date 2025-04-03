
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
      this_02 = (this->fields)._scaleDrag;
      if (this_02 != (GizmoDblAxisScaleDrag3D *)0x0) {
        GizmoDragSession::GizmoDragSession_AddTargetTransform
                  ((GizmoDragSession *)this_02,transform,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddTargetTransform(GizmoTransform, GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_AddTargetTransform_1
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,
               GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    this_00 = (GizmoDblAxisScaleDrag3D *)(this->fields)._dblAxisOffsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    this_00 = (GizmoDblAxisScaleDrag3D *)(this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
      return;
    }
    this_00 = (this->fields)._scaleDrag;
  }
  if (this_00 != (GizmoDblAxisScaleDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_AddTargetTransform
              ((GizmoDragSession *)this_00,transform,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AlignToQuadrant(GizmoTransform, PlaneId, PlaneQuadrantId, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_AlignToQuadrant
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,PlaneId__Enum planeId,
               PlaneQuadrantId__Enum quadrantId,bool alignXToFirstAxis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PlaneIdHelper);
    cRam_? = '\x01';
  }
  if (transform != (GizmoTransform *)0x0) {
    pPVar1 = GizmoTransform::GizmoTransform_GetPlane3D
                       ((Plane *)&QStack_2,transform,planeId,quadrantId,(MethodInfo *)0x0);
    QStack_2.x = (pPVar1->m_Normal).x;
    QStack_2.y = (pPVar1->m_Normal).y;
    QStack_2.z = (pPVar1->m_Normal).z;
    QStack_2.w = pPVar1->m_Distance;
    if (alignXToFirstAxis == 0) {
      if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
        QStack_2.z = (float)TypeInfo__RTG__PlaneIdHelper;
        QStack_2.y = (float)&UNK_?;
        func_?();
      }
      axisDesc = PlaneIdHelper::PlaneIdHelper_GetFirstAxisDescriptor
                           (planeId,quadrantId,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
        QStack_2.z = (float)TypeInfo__RTG__PlaneIdHelper;
        QStack_2.y = (float)&UNK_?;
        func_?();
      }
      axisDesc = PlaneIdHelper::PlaneIdHelper_GetSecondAxisDescriptor
                           (planeId,quadrantId,(MethodInfo *)0x0);
    }
    pGVar3 = (this->fields)._._gizmo;
    if ((pGVar3 != (Gizmo *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      pVVar5 = GizmoTransform::GizmoTransform_GetAxis3D
                         (&VStack_6,pGVar4,axisDesc,(MethodInfo *)0x0);
      pGVar4 = (this->fields)._transform;
      forward.y = QStack_2.y;
      forward.x = QStack_2.x;
      forward.z = QStack_2.z;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                         (&QStack_2,forward,*pVVar5,(MethodInfo *)0x0);
      if (pGVar4 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_set_Rotation3D(pGVar4,*pQVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ApplyZoomFactor(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_ApplyZoomFactor
               (GizmoPlaneSlider3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pGVar2 = pGVar1;
  if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._useZoomFactor == 0) {
      return;
    }
    if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
       (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_00 = (this->fields)._._handle;
        if (this_00 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar3 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
         (pIVar3 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
        uVar4 = (pGVar1->fields)._planeType;
        if (pIVar3->max_length <= uVar4) goto code_?;
        if (pIVar3->vector[uVar4] != (IGizmoPlaneSlider3DController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoPlaneSlider3DController,pIVar3->vector[uVar4]);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 GetQuadCornerPosition(QuadCorner) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetQuadCornerPosition
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,
                    QuadCorner__Enum corner,MethodInfo *method)

{
  this_00 = (this->fields)._quad;
  if (this_00 != (QuadShape3D *)0x0) {
    pVVar1 = QuadShape3D::QuadShape3D_GetCornerPosition(&VStack_2,this_00,corner,(MethodInfo *)0x0)
    ;
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Single GetRealCircleRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealCircleRadius
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar1->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    pGVar2 = (this->fields)._scaleDrag;
    if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                        (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
      fVar4 = _UNK_?;
      if (cVar3 != '\0') {
        pGVar2 = (this->fields)._scaleDrag;
        if (pGVar2 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar4 = (pGVar2->fields)._totalScale0;
        if ((float)((uint)fVar4 & _UNK_?) <
            (float)((uint)(pGVar2->fields)._totalScale1 & _UNK_?)) {
          fVar4 = (pGVar2->fields)._totalScale1;
        }
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
        return (pGVar1->fields)._circleRadius * (pGVar1->fields)._scale * zoomFactor * fVar4;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single GetRealQuadHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealQuadHeight
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar1->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    pGVar2 = (this->fields)._scaleDrag;
    if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                        (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
      fVar4 = _UNK_?;
      if (cVar3 != '\0') {
        pGVar2 = (this->fields)._scaleDrag;
        if (pGVar2 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar4 = (float)((uint)(pGVar2->fields)._totalScale1 & _UNK_?);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
        return (pGVar1->fields)._quadHeight * (pGVar1->fields)._scale * zoomFactor * fVar4;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector2 GetRealQuadSize(Single) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealQuadSize
                  (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = this;
  pGVar2 = _UNK_?;
  pGVar3 = (this->fields)._sharedLookAndFeel;
  if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar3 = (this->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar3->fields)._useZoomFactor == 0) {
      this = _UNK_?;
    }
    else {
      this = (GizmoPlaneSlider3D *)zoomFactor;
    }
    pGVar4 = (pGVar1->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(code *)(pGVar4->klass->vtable).get_IsActive_1.method)
                        (pGVar4,(pGVar4->klass->vtable).get_DragChannel_1.methodPtr);
      pGVar6 = _UNK_?;
      if (cVar5 != '\0') {
        pGVar4 = (pGVar1->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        pGVar2 = (GizmoPlaneSlider3D *)(pGVar4->fields)._totalScale1;
        pGVar6 = (GizmoPlaneSlider3D *)(pGVar4->fields)._totalScale0;
      }
      pGVar3 = (pGVar1->fields)._sharedLookAndFeel;
      if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar3 = (pGVar1->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
        VVar7.y = (pGVar3->fields)._quadHeight * (pGVar3->fields)._scale * (float)this *
                  (float)pGVar2;
        VVar7.x = (pGVar3->fields)._scale * (pGVar3->fields)._quadWidth * (float)this *
                  (float)pGVar6;
        return VVar7;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  VVar7 = (Vector2)(*pcVar8)();
  return VVar7;
}


/* Single GetRealQuadWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealQuadWidth
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar1->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    pGVar2 = (this->fields)._scaleDrag;
    if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                        (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
      fVar4 = _UNK_?;
      if (cVar3 != '\0') {
        pGVar2 = (this->fields)._scaleDrag;
        if (pGVar2 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar4 = (float)((uint)(pGVar2->fields)._totalScale0 & _UNK_?);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
        return (pGVar1->fields)._quadWidth * (pGVar1->fields)._scale * zoomFactor * fVar4;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector2 GetRealRATriSize(Single) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealRATriSize
                  (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = this;
  pGVar2 = _UNK_?;
  pGVar3 = (this->fields)._sharedLookAndFeel;
  if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar3 = (this->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar3->fields)._useZoomFactor == 0) {
      this = _UNK_?;
    }
    else {
      this = (GizmoPlaneSlider3D *)zoomFactor;
    }
    pGVar4 = (pGVar1->fields)._scaleDrag;
    if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar5 = (*(code *)(pGVar4->klass->vtable).get_IsActive_1.method)
                        (pGVar4,(pGVar4->klass->vtable).get_DragChannel_1.methodPtr);
      pGVar6 = _UNK_?;
      if (cVar5 != '\0') {
        pGVar4 = (pGVar1->fields)._scaleDrag;
        if (pGVar4 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        pGVar2 = (GizmoPlaneSlider3D *)(pGVar4->fields)._totalScale1;
        pGVar6 = (GizmoPlaneSlider3D *)(pGVar4->fields)._totalScale0;
      }
      pGVar3 = (pGVar1->fields)._sharedLookAndFeel;
      if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar3 = (pGVar1->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
        VVar7.y = (pGVar3->fields)._raTriangleYLength * (pGVar3->fields)._scale * (float)this *
                  (float)pGVar2;
        VVar7.x = (pGVar3->fields)._scale * (pGVar3->fields)._raTriangleXLength * (float)this *
                  (float)pGVar6;
        return VVar7;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  VVar7 = (Vector2)(*pcVar8)();
  return VVar7;
}


/* Single GetRealRATriXLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealRATriXLength
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar1->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    pGVar2 = (this->fields)._scaleDrag;
    if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                        (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
      fVar4 = _UNK_?;
      if (cVar3 != '\0') {
        pGVar2 = (this->fields)._scaleDrag;
        if (pGVar2 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar4 = (float)((uint)(pGVar2->fields)._totalScale0 & _UNK_?);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
        return (pGVar1->fields)._raTriangleXLength * (pGVar1->fields)._scale * zoomFactor * fVar4;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single GetRealRATriYLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealRATriYLength
                (GizmoPlaneSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar1->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    pGVar2 = (this->fields)._scaleDrag;
    if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
      cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                        (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
      fVar4 = _UNK_?;
      if (cVar3 != '\0') {
        pGVar2 = (this->fields)._scaleDrag;
        if (pGVar2 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
        fVar4 = (float)((uint)(pGVar2->fields)._totalScale1 & _UNK_?);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
        return (pGVar1->fields)._raTriangleYLength * (pGVar1->fields)._scale * zoomFactor * fVar4;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}

/* decompilation failed: Exception while decompiling 105826e0: Decompiler process died */


/* Void MakeSliderPlane(GizmoTransform, PlaneId, GizmoLineSlider3D, GizmoLineSlider3D, Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
               (GizmoPlaneSlider3D *this,GizmoTransform *sliderPlaneTransform,PlaneId__Enum planeId,
               GizmoLineSlider3D *firstAxisSlider,GizmoLineSlider3D *secondAxisSlider,Camera *camera
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PlaneIdHelper);
    cRam_? = '\x01';
  }
  if (sliderPlaneTransform != (GizmoTransform *)0x0) {
    planeQuadrantId =
         GizmoTransform::GizmoTransform_Get3DQuadrantFacingCamera
                   (sliderPlaneTransform,planeId,camera,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      auStack_1._0_4_ = &TypeInfo__RTG__PlaneIdHelper;
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = GizmoTransform::GizmoTransform_GetPlane3D
                       ((Plane *)auStack_1,sliderPlaneTransform,planeId,planeQuadrantId,
                        (MethodInfo *)0x0);
    auStack_1._0_4_ = (pPVar2->m_Normal).x;
    auStack_1._4_4_ = (pPVar2->m_Normal).y;
    fStack_3 = (pPVar2->m_Normal).z;
    fStack_4 = pPVar2->m_Distance;
    if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__PlaneIdHelper);
    }
    pAVar5 = PlaneIdHelper::PlaneIdHelper_GetSecondAxisDescriptor
                       (planeId,planeQuadrantId,(MethodInfo *)0x0);
    pGVar6 = (this->fields)._._gizmo;
    if ((pGVar6 != (Gizmo *)0x0) &&
       (pGVar7 = (pGVar6->fields)._transform, pGVar7 != (GizmoTransform *)0x0)) {
      pVVar8 = GizmoTransform::GizmoTransform_GetAxis3D(&VStack_9,pGVar7,pAVar5,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._transform;
      forward.y = (float)auStack_1._4_4_;
      forward.x = (float)auStack_1._0_4_;
      forward.z = fStack_3;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                         ((Quaternion *)auStack_1,forward,*pVVar8,(MethodInfo *)0x0);
      if (pGVar7 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_set_Rotation3D(pGVar7,*pQVar10,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__PlaneIdHelper);
        }
        pAVar5 = PlaneIdHelper::PlaneIdHelper_GetFirstAxisDescriptor
                           (planeId,planeQuadrantId,(MethodInfo *)0x0);
        pVVar8 = GizmoTransform::GizmoTransform_GetAxis3D
                           (&VStack_9,sliderPlaneTransform,pAVar5,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar8->x;
        uStack_11._4_4_ = pVVar8->y;
        fVar12 = pVVar8->z;
        fStack_13 = fVar12;
        unique0x10000696 = uStack_11;
        pAVar5 = PlaneIdHelper::PlaneIdHelper_GetSecondAxisDescriptor
                           (planeId,planeQuadrantId,(MethodInfo *)0x0);
        pVVar8 = GizmoTransform::GizmoTransform_GetAxis3D
                           ((Vector3 *)(auStack_1 + 4),sliderPlaneTransform,pAVar5,
                            (MethodInfo *)0x0);
        VStack_9.x = pVVar8->x;
        VStack_9.y = pVVar8->y;
        fVar14 = pVVar8->z;
        VStack_9.z = fVar14;
        auStack_15._0_8_ = VStack_9._0_8_;
        if (secondAxisSlider != (GizmoLineSlider3D *)0x0) {
          direction.z = fVar12;
          direction.x = (float)auStack_15._8_4_;
          direction.y = fStack_16;
          fVar17 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealSizeAlongDirection
                             (secondAxisSlider,camera,direction,(MethodInfo *)0x0);
          fVar12 = (float)uStack_11 * fVar17 * _UNK_?;
          fStack_18 = uStack_11._4_4_ * fVar17 * _UNK_?;
          stack0xfffffff0 = CONCAT44(fStack_13 * fVar17 * _UNK_?,auStack_15._8_4_);
          if (firstAxisSlider != (GizmoLineSlider3D *)0x0) {
            direction_00.z = fVar14;
            direction_00.x = (float)auStack_15._0_4_;
            direction_00.y = (float)auStack_15._4_4_;
            fVar19 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealSizeAlongDirection
                               (firstAxisSlider,camera,direction_00,(MethodInfo *)0x0);
            fVar14 = VStack_9.x * fVar19;
            fVar17 = VStack_9.y * fVar19;
            fVar19 = VStack_9.z * fVar19;
            pGVar20 = (this->fields)._sharedLookAndFeel;
            if ((pGVar20 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
               (pGVar20 = (this->fields)._lookAndFeel, pGVar20 != (GizmoPlaneSlider3DLookAndFeel *)0x0
               )) {
              if ((pGVar20->fields)._planeType != 0) {
                return;
              }
              VStack_9.x = (sliderPlaneTransform->fields)._position3D.x;
              VStack_9.y = (sliderPlaneTransform->fields)._position3D.y;
              VStack_9.z = (sliderPlaneTransform->fields)._position3D.z;
              fVar12 = VStack_9.x + fVar14 * _UNK_? + fVar12;
              fVar14 = VStack_9.y + fVar17 * _UNK_? + fStack_18;
              fVar17 = VStack_9.z + fVar19 * _UNK_? + fStack_16;
              pGVar7 = (this->fields)._transform;
              if (pGVar7 != (GizmoTransform *)0x0) {
                VStack_9.x = (pGVar7->fields)._position3D.x;
                VStack_9.y = (pGVar7->fields)._position3D.y;
                VStack_9.z = (pGVar7->fields)._position3D.z;
                this_00 = (this->fields)._quad;
                if (this_00 != (QuadShape3D *)0x0) {
                  pVVar8 = QuadShape3D::QuadShape3D_GetCornerPosition
                                     ((Vector3 *)(auStack_1 + 4),this_00,
                                      QuadCorner__Enum_BottomLeft,(MethodInfo *)0x0);
                  uStack_11._0_4_ = pVVar8->x;
                  uStack_11._4_4_ = pVVar8->y;
                  fStack_13 = pVVar8->z;
                  VStack_9.x = (VStack_9.x - (float)uStack_11) + fVar12;
                  VStack_9.y = (VStack_9.y - uStack_11._4_4_) + fVar14;
                  VStack_9.z = (VStack_9.z - fStack_13) + fVar17;
                  pGVar7 = (this->fields)._transform;
                  if (pGVar7 != (GizmoTransform *)0x0) {
                    value.y = VStack_9.y;
                    value.x = VStack_9.x;
                    value.z = VStack_9.z;
                    GizmoTransform::GizmoTransform_set_Position3D(pGVar7,value,(MethodInfo *)0x0);
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
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnCanHoverHandle(Int32, Gizmo, GizmoHandleHoverData, YesNoAnswer) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnCanHoverHandle
               (GizmoPlaneSlider3D *this,int32_t handleId,Gizmo *gizmo,
               GizmoHandleHoverData *hoverData,YesNoAnswer *answer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
           SparselyPopulatedArrayFragment_1_System_Object__get_Length
                     ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
  if ((handleId == iVar1) && (gizmo == (this->fields)._._gizmo)) {
    pGVar2 = (this->fields)._sharedLookAndFeel;
    if ((pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
    goto code_?;
    if ((pGVar2->fields)._planeType == 2) {
      pGVar3 = (this->fields)._sharedSettings;
      if ((pGVar3 == (GizmoPlaneSlider3DSettings *)0x0) &&
         (pGVar3 = (this->fields)._settings, pGVar3 == (GizmoPlaneSlider3DSettings *)0x0))
      goto code_?;
      if ((pGVar3->fields)._isCircleHoverCullEnabled != 0) {
        if (hoverData == (GizmoHandleHoverData *)0x0) goto code_?;
        uVar4 = (hoverData->fields)._hoverPoint.x;
        uVar5 = (hoverData->fields)._hoverPoint.y;
        pGVar6 = (this->fields)._transform;
        if (pGVar6 == (GizmoTransform *)0x0) goto code_?;
        uVar7 = (pGVar6->fields)._position3D.x;
        uVar8 = (pGVar6->fields)._position3D.y;
        value.y = (float)uVar5 - (float)uVar8;
        value.x = (float)uVar4 - (float)uVar7;
        value.z = (hoverData->fields)._hoverPoint.z - (pGVar6->fields)._position3D.z;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xfffffff0,value,(MethodInfo *)0x0);
        fVar10 = pVVar9->z;
        this_00 = (this->fields)._._gizmo;
        if (this_00 == (Gizmo *)0x0) goto code_?;
        camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
        pCVar11 = TypeInfo__RTG__CameraEx;
        uVar12._0_4_ = (hoverData->fields)._hoverPoint.x;
        uVar12._4_4_ = (hoverData->fields)._hoverPoint.y;
        fVar13 = (hoverData->fields)._hoverPoint.z;
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          uVar12 = CONCAT44(pCVar11,&UNK_?);
        }
        pointNormal.y = (float)this_00;
        pointNormal.x = (float)&UNK_?;
        point.z = fVar13;
        point.x = (float)(int)uVar12;
        point.y = (float)(int)((ulonglong)uVar12 >> 0x20);
        pointNormal.z = fVar10;
        bVar14 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,pointNormal,(MethodInfo *)0x0);
        if (answer == (YesNoAnswer *)0x0) goto code_?;
        if (bVar14 == 0) {
          YesNoAnswer::YesNoAnswer_No(answer,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  if (answer == (YesNoAnswer *)0x0) {
code_?:
    func_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
code_?:
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  PostProcessEffectRenderer::PostProcessEffectRenderer_ResetHistory
            ((PostProcessEffectRenderer *)answer,(MethodInfo *)0x0);
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnGizmoAttemptHandleDragBegin
               (GizmoPlaneSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
           SparselyPopulatedArrayFragment_1_System_Object__get_Length
                     ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
  if (handleId != iVar1) {
    return;
  }
  iVar2 = (this->fields)._dragChannel;
  if (iVar2 == 1) {
    pGVar3 = (this->fields)._transform;
    if (pGVar3 != (GizmoTransform *)0x0) {
      pVVar4 = GizmoTransform::GizmoTransform_GetAxis3D_1
                          ((Vector3 *)&stack0xffffffc0,pGVar3,0,AxisSign__Enum_Positive,
                           (MethodInfo *)0x0);
      uVar5 = pVVar4->y;
      fVar6 = pVVar4->z;
      pGVar3 = (this->fields)._transform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        uVar7 = 0;
        pVVar4 = GizmoTransform::GizmoTransform_GetAxis3D_1
                            ((Vector3 *)&stack0xffffffc0,pGVar3,1,AxisSign__Enum_Positive,
                             (MethodInfo *)0x0);
        uVar8 = pVVar4->x;
        uVar9 = pVVar4->y;
        pGVar3 = (this->fields)._transform;
        if (pGVar3 != (GizmoTransform *)0x0) {
          pGVar10 = (this->fields)._sharedSettings;
          if ((pGVar10 != (GizmoPlaneSlider3DSettings *)0x0) ||
             (pGVar10 = (this->fields)._settings, pGVar10 != (GizmoPlaneSlider3DSettings *)0x0)) {
            this_03 = (this->fields)._dblAxisOffsetDrag;
            if (this_03 != (GizmoDblAxisOffsetDrag3D *)0x0) {
              workData_01.Axis0.x = (float)uVar7;
              workData_01.DragOrigin = (pGVar3->fields)._position3D;
              workData_01.Axis0.y = (float)uVar5;
              workData_01.Axis0.z = fVar6;
              workData_01.Axis1.x = (float)uVar8;
              workData_01.Axis1.y = (float)uVar9;
              workData_01.Axis1.z = 0.0;
              workData_01.SnapStep0 = (pGVar10->fields)._offsetSnapStepRight;
              workData_01.SnapStep1 = (pGVar10->fields)._offsetSnapStepUp;
              GizmoDblAxisOffsetDrag3D::GizmoDblAxisOffsetDrag3D_SetWorkData
                        (this_03,workData_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else if (iVar2 == 2) {
    pVVar4 = GizmoPlaneSlider3D_get_Normal((Vector3 *)&stack0xffffffcc,this,(MethodInfo *)0x0);
    uVar11 = pVVar4->x;
    uVar12 = pVVar4->y;
    pGVar3 = (this->fields)._transform;
    if (pGVar3 != (GizmoTransform *)0x0) {
      pGVar10 = (this->fields)._sharedSettings;
      if (pGVar10 == (GizmoPlaneSlider3DSettings *)0x0) {
        pGVar13 = (this->fields)._settings;
        if (pGVar13 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
        pGVar10 = (this->fields)._settings;
        iVar1 = (pGVar13->fields)._rotationSnapMode;
        if (pGVar10 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      }
      else {
        iVar1 = (pGVar10->fields)._rotationSnapMode;
      }
      this_01 = (this->fields)._rotationDrag;
      if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
        workData_00.Axis.x = (float)uVar11;
        workData_00.RotationPlanePos = (pGVar3->fields)._position3D;
        workData_00.Axis.y = (float)uVar12;
        workData_00.Axis.z = pVVar4->z;
        workData_00.SnapMode = iVar1;
        workData_00.SnapStep = (pGVar10->fields)._rotationSnapStep;
        GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                  (this_01,workData_00,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._transform;
        if (pGVar3 != (GizmoTransform *)0x0) {
          pVVar4 = GizmoTransform::GizmoTransform_GetAxis3D_1
                              (&VStack_14,pGVar3,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._transform;
          if (pGVar3 != (GizmoTransform *)0x0) {
            fVar6 = (pGVar3->fields)._position3D.x;
            fVar15 = (pGVar3->fields)._position3D.y;
            fVar16 = (pGVar3->fields)._position3D.z;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&stack0xffffffc0,*pVVar4,(MethodInfo *)0x0);
            uVar17 = pVVar4->x;
            uVar18 = pVVar4->y;
            pGVar19 = (this->fields)._._gizmo;
            if (pGVar19 != (Gizmo *)0x0) {
              uVar20 = (pGVar19->fields)._hoverInfo._hoverPoint.z;
              uVar21 = (pGVar19->fields)._hoverInfo._hoverPoint.x;
              uVar22 = (pGVar19->fields)._hoverInfo._hoverPoint.y;
              pt.y = (float)uVar22;
              pt.x = (float)uVar21;
              plane.m_Distance =
                   (float)((uint)(fVar6 * (float)uVar17 + fVar15 * (float)uVar18 + fVar16 * pVVar4->z
                                 ) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
              plane.m_Normal = *pVVar4;
              pt.z = (float)uVar20;
              pVVar4 = PlaneEx::PlaneEx_ProjectPoint
                                  ((Vector3 *)&stack0xffffffc0,plane,pt,(MethodInfo *)0x0);
              this_02 = (this->fields)._rotationArc;
              VStack_14.y = pVVar4->x;
              VStack_14.z = pVVar4->y;
              fStack_23 = pVVar4->z;
              pVVar4 = GizmoPlaneSlider3D_get_Normal
                                  ((Vector3 *)&stack0xffffffc0,this,(MethodInfo *)0x0);
              fVar16 = pVVar4->x;
              fVar24 = pVVar4->y;
              fStack_25 = pVVar4->z;
              pGVar3 = (this->fields)._transform;
              if (pGVar3 != (GizmoTransform *)0x0) {
                uVar7 = (pGVar3->fields)._position3D.x;
                uVar26 = (pGVar3->fields)._position3D.y;
                fStack_27 = (pGVar3->fields)._position3D.z;
                pGVar19 = (this->fields)._._gizmo;
                if (pGVar19 != (Gizmo *)0x0) {
                  camera = Gizmo::Gizmo_get_FocusCamera(pGVar19,(MethodInfo *)0x0);
                  fVar6 = GizmoPlaneSlider3D_GetZoomFactor(this,camera,(MethodInfo *)0x0);
                  fVar6 = GizmoPlaneSlider3D_GetRealCircleRadius(this,fVar6,(MethodInfo *)0x0);
                  if (this_02 != (GizmoRotationArc3D *)0x0) {
                    rotationAxis.y = fVar24;
                    rotationAxis.x = fVar16;
                    rotationAxis.z = fStack_25;
                    arcOrigin.y = (float)uVar26;
                    arcOrigin.x = (float)uVar7;
                    arcOrigin.z = fStack_27;
                    arcStart.z = fStack_23;
                    arcStart.x = VStack_14.y;
                    arcStart.y = VStack_14.z;
                    GizmoRotationArc3D::GizmoRotationArc3D_SetArcData
                              (this_02,rotationAxis,arcOrigin,arcStart,fVar6,(MethodInfo *)0x0);
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
  else {
    if (iVar2 != 3) {
      return;
    }
    pVVar4 = GizmoPlaneSlider3D_get_Right((Vector3 *)&stack0xffffffcc,this,(MethodInfo *)0x0);
    uVar28 = pVVar4->y;
    fVar6 = pVVar4->z;
    pVVar4 = GizmoPlaneSlider3D_get_Up((Vector3 *)&stack0xffffffcc,this,(MethodInfo *)0x0);
    uVar29 = pVVar4->x;
    uVar30 = pVVar4->y;
    pGVar3 = (this->fields)._transform;
    if (pGVar3 != (GizmoTransform *)0x0) {
      uVar31 = (pGVar3->fields)._position3D.x;
      uVar32 = (pGVar3->fields)._position3D.y;
      uVar33 = (this->fields)._scaleDragAxisIndexRight;
      uVar34 = (this->fields)._scaleDragAxisIndexUp;
      workData.AxisIndex1 = uVar34;
      workData.AxisIndex0 = uVar33;
      pGVar10 = (this->fields)._sharedSettings;
      if ((pGVar10 != (GizmoPlaneSlider3DSettings *)0x0) ||
         (pGVar10 = (this->fields)._settings, pGVar10 != (GizmoPlaneSlider3DSettings *)0x0)) {
        this_00 = (this->fields)._scaleDrag;
        if (this_00 != (GizmoDblAxisScaleDrag3D *)0x0) {
          workData.DragOrigin.x = (float)uVar31;
          workData.DragOrigin.y = (float)uVar32;
          workData.DragOrigin.z = (pGVar3->fields)._position3D.z;
          workData.Axis0.x = 0.0;
          workData.Axis0.y = (float)uVar28;
          workData.Axis0.z = fVar6;
          workData.Axis1.x = (float)uVar29;
          workData.Axis1.y = (float)uVar30;
          workData.Axis1.z = pVVar4->z;
          workData.SnapStep = (pGVar10->fields)._proportionalScaleSnapStep;
          GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_SetWorkData
                    (this_00,workData,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnGizmoPostEnabled
               (GizmoPlaneSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  GizmoPlaneSlider3D_Refresh(this,(MethodInfo *)0x0);
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnGizmoPreUpdateBegin
               (GizmoPlaneSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0))
  {
    uVar3 = (pGVar1->fields)._planeType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoPlaneSlider3DController,pIVar2->vector[uVar3]);
      pGVar4 = (this->fields)._sharedSettings;
      this_00 = (this->fields)._dblAxisOffsetDrag;
      if (((pGVar4 != (GizmoPlaneSlider3DSettings *)0x0) ||
          (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0)) &&
         (this_00 != (GizmoDblAxisOffsetDrag3D *)0x0)) {
        GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                  ((GizmoScreenDrag *)this_00,(pGVar4->fields)._offsetSensitivity,(MethodInfo *)0x0)
        ;
        pGVar4 = (this->fields)._sharedSettings;
        this_01 = (this->fields)._rotationDrag;
        if (((pGVar4 != (GizmoPlaneSlider3DSettings *)0x0) ||
            (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0)) &&
           (this_01 != (GizmoSglAxisRotationDrag3D *)0x0)) {
          GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                    ((GizmoScreenDrag *)this_01,(pGVar4->fields)._rotationSensitivity,
                     (MethodInfo *)0x0);
          pGVar4 = (this->fields)._sharedSettings;
          this_02 = (this->fields)._scaleDrag;
          if (((pGVar4 != (GizmoPlaneSlider3DSettings *)0x0) ||
              (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0)) &&
             (this_02 != (GizmoDblAxisScaleDrag3D *)0x0)) {
            GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                      ((GizmoScreenDrag *)this_02,(pGVar4->fields)._scaleSensitivity,
                       (MethodInfo *)0x0);
            this_03 = (this->fields)._._gizmo;
            if (this_03 != (Gizmo *)0x0) {
              camera = Gizmo::Gizmo_get_FocusCamera(this_03,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._sharedLookAndFeel;
              if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                 (pGVar1 = (this->fields)._lookAndFeel,
                 pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                fVar5 = _UNK_?;
                if ((pGVar1->fields)._useZoomFactor != 0) {
                  this_04 = (this->fields)._._handle;
                  if (this_04 == (GizmoHandle *)0x0) goto code_?;
                  fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_04,camera,(MethodInfo *)0x0);
                }
                pIVar2 = (this->fields)._controllers;
                if (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0) {
                  if (pIVar2->max_length <= uVar3) goto code_?;
                  if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
                    func_?(1,TypeInfo__RTG__IGizmoPlaneSlider3DController,
                                    pIVar2->vector[uVar3],fVar5);
                    pIVar2 = (this->fields)._controllers;
                    if (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0) {
                      if (pIVar2->max_length <= uVar3) goto code_?;
                      if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
                        func_?(2,TypeInfo__RTG__IGizmoPlaneSlider3DController,
                                        pIVar2->vector[uVar3],fVar5);
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
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
        GizmoHandle::GizmoHandle_Set3DShapeHoverable
                  (pGVar1,(this->fields)._circleIndex,(this->fields)._._isHoverable,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnTransformChanged
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    cRam_? = '\x01';
  }
  if ((changeData.ChangeReason != 1) && (changeData.TRSDimension != 2)) {
    return;
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._sharedLookAndFeel;
    if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
       (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar2 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
         (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._planeType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
          func_?(1);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_OnVisibilityStateChanged
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pIVar2 = (this->fields)._controllers;
  if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._planeType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoPlaneSlider3DController,pIVar2->vector[uVar3]);
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._sharedLookAndFeel;
        if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
           (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
          fVar4 = _UNK_?;
          if ((pGVar1->fields)._useZoomFactor != 0) {
            this_01 = (this->fields)._._handle;
            if (this_01 == (GizmoHandle *)0x0) goto code_?;
            fVar4 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
          }
          pGVar1 = (this->fields)._sharedLookAndFeel;
          pIVar2 = (this->fields)._controllers;
          if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
              (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)
              ) && (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
            uVar3 = (pGVar1->fields)._planeType;
            if (pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
              func_?(2,TypeInfo__RTG__IGizmoPlaneSlider3DController,pIVar2->vector[uVar3],
                              fVar4);
              pGVar1 = (this->fields)._sharedLookAndFeel;
              pIVar2 = (this->fields)._controllers;
              if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                  (pGVar1 = (this->fields)._lookAndFeel,
                  pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
                 (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
                uVar3 = (pGVar1->fields)._planeType;
                if (pIVar2->max_length <= uVar3) goto code_?;
                if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoPlaneSlider3DController,
                                  pIVar2->vector[uVar3],fVar4);
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
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._sharedLookAndFeel;
    if ((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
       (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar2 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
         (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._planeType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
          func_?();
          pGVar1 = (this->fields)._sharedLookAndFeel;
          pIVar2 = (this->fields)._controllers;
          if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
              (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)
              ) && (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
            uVar3 = (pGVar1->fields)._planeType;
            if (pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
              func_?(2);
              pGVar1 = (this->fields)._sharedLookAndFeel;
              pIVar2 = (this->fields)._controllers;
              if (((pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                  (pGVar1 = (this->fields)._lookAndFeel,
                  pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
                 (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
                uVar3 = (pGVar1->fields)._planeType;
                if (pIVar2->max_length <= uVar3) goto code_?;
                if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider3DController *)0x0) {
                  func_?(1);
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
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_RemoveTargetTransform
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_00 = (this->fields)._dblAxisOffsetDrag;
  if (this_00 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_RemoveTargetTransform
              ((GizmoDragSession *)this_00,transform,(MethodInfo *)0x0);
    this_01 = (this->fields)._rotationDrag;
    if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_RemoveTargetTransform
                ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
      this_02 = (this->fields)._scaleDrag;
      if (this_02 != (GizmoDblAxisScaleDrag3D *)0x0) {
        GizmoDragSession::GizmoDragSession_RemoveTargetTransform
                  ((GizmoDragSession *)this_02,transform,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform, GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_RemoveTargetTransform_1
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,
               GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    this_00 = (GizmoDblAxisScaleDrag3D *)(this->fields)._dblAxisOffsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    this_00 = (GizmoDblAxisScaleDrag3D *)(this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
      return;
    }
    this_00 = (this->fields)._scaleDrag;
  }
  if (this_00 != (GizmoDblAxisScaleDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_RemoveTargetTransform
              ((GizmoDragSession *)this_00,transform,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_Render
               (GizmoPlaneSlider3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  cVar2 = (*(code *)(pGVar1->klass->vtable).get_IsActive_1.method)
                    (pGVar1,(pGVar1->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar2 != '\0') {
    pGVar3 = (this->fields)._sharedLookAndFeel;
    pGVar4 = pGVar3;
    if ((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
    goto code_?;
    if ((pGVar4->fields)._planeType == 2) {
      if ((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
         (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
      goto code_?;
      if ((pGVar3->fields)._isRotationArcVisible != 0) {
        pGVar1 = (this->fields)._rotationDrag;
        if (((pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) ||
            (pGVar5 = (this->fields)._rotationArc, pGVar5 == (GizmoRotationArc3D *)0x0)) ||
           (pAVar6 = (pGVar5->fields)._arc, pAVar6 == (ArcShape3D *)0x0)) goto code_?;
        ArcShape3D::ArcShape3D_set_DegreeAngleFromStart
                  (pAVar6,(pGVar1->fields)._totalRotation,(MethodInfo *)0x0);
        pGVar5 = (this->fields)._rotationArc;
        fVar7 = GizmoPlaneSlider3D_GetZoomFactor(this,camera,(MethodInfo *)0x0);
        fVar7 = GizmoPlaneSlider3D_GetRealCircleRadius(this,fVar7,(MethodInfo *)0x0);
        if ((pGVar5 == (GizmoRotationArc3D *)0x0) ||
           (pAVar6 = (pGVar5->fields)._arc, pAVar6 == (ArcShape3D *)0x0)) goto code_?;
        ArcShape3D::ArcShape3D_set_Radius(pAVar6,fVar7,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._sharedLookAndFeel;
        pGVar5 = (this->fields)._rotationArc;
        if (((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
            (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
           || (pGVar5 == (GizmoRotationArc3D *)0x0)) goto code_?;
        GizmoRotationArc3D::GizmoRotationArc3D_Render
                  (pGVar5,(pGVar3->fields)._rotationArcLookAndFeel,(MethodInfo *)0x0);
      }
    }
  }
  if ((this->fields)._._isVisible != 0) {
    bVar8 = GizmoSlider::GizmoSlider_get_IsHovered((GizmoSlider *)this,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._sharedLookAndFeel;
    if (bVar8 == 0) {
      if ((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
         (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
      goto code_?;
      fVar7 = (pGVar3->fields)._color.r;
      fVar9 = (pGVar3->fields)._color.g;
      fVar10 = (pGVar3->fields)._color.b;
      fVar11 = (pGVar3->fields)._color.a;
    }
    else {
      if ((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
         (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
      goto code_?;
      fVar7 = (pGVar3->fields)._hoveredColor.r;
      fVar9 = (pGVar3->fields)._hoveredColor.g;
      fVar10 = (pGVar3->fields)._hoveredColor.b;
      fVar11 = (pGVar3->fields)._hoveredColor.a;
    }
    if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    }
    this_03 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_03 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_03,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff(this_03,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._sharedLookAndFeel;
    if ((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
    goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit
              (this_03,(pGVar3->fields)._shadeMode == 0,(MethodInfo *)0x0);
    bVar8 = GizmoSolidMaterial::GizmoSolidMaterial_get_IsLit(this_03,(MethodInfo *)0x0);
    if (bVar8 != 0) {
      if ((camera == (Camera *)0x0) ||
         (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0), this_04 == (Transform *)0x0))
      goto code_?;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_13,this_04,(MethodInfo *)0x0);
      GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection(this_03,*pVVar12,(MethodInfo *)0x0);
    }
    color.g = fVar9;
    color.r = fVar7;
    color.b = fVar10;
    color.a = fVar11;
    GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_03,color,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_03,0,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._sharedLookAndFeel;
    pGVar4 = pGVar3;
    if ((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
    goto code_?;
    if ((pGVar4->fields)._planeType == 0) {
      this_05 = (this->fields)._._handle;
      if (this_05 == (GizmoHandle *)0x0) goto code_?;
      shapeIndex = (this->fields)._quadIndex;
    }
    else {
      pGVar4 = pGVar3;
      if ((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
         (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
      goto code_?;
      if ((pGVar4->fields)._planeType == 1) {
        this_05 = (this->fields)._._handle;
        if (this_05 == (GizmoHandle *)0x0) goto code_?;
        shapeIndex = (this->fields)._raTriangleIndex;
      }
      else {
        if ((pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
           (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
        goto code_?;
        if ((pGVar3->fields)._planeType != 2) goto code_?;
        this_05 = (this->fields)._._handle;
        if (this_05 == (GizmoHandle *)0x0) goto code_?;
        shapeIndex = (this->fields)._circleIndex;
      }
    }
    GizmoHandle::GizmoHandle_Render3DSolid_1(this_05,shapeIndex,(MethodInfo *)0x0);
  }
code_?:
  pGVar3 = (this->fields)._sharedLookAndFeel;
  pGVar4 = pGVar3;
  if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
     (pGVar4 = (this->fields)._lookAndFeel, pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
    if ((pGVar4->fields)._planeType == 0) {
      this_02 = (this->fields)._quadBorder;
      if (this_02 != (GizmoQuad3DBorder *)0x0) {
        GizmoQuad3DBorder::GizmoQuad3DBorder_Render(this_02,camera,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar4 = pGVar3;
      if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = (this->fields)._lookAndFeel, pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
        if ((pGVar4->fields)._planeType == 1) {
          this_01 = (this->fields)._raTriangleBorder;
          if (this_01 != (GizmoRATriangle3DBorder *)0x0) {
            GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_Render
                      (this_01,camera,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                (pGVar3 = (this->fields)._lookAndFeel,
                pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
          if ((pGVar3->fields)._planeType == 2) {
            this_00 = (this->fields)._circleBorder;
            if (this_00 == (GizmoCircle3DBorder *)0x0) goto code_?;
            GizmoCircle3DBorder::GizmoCircle3DBorder_Render(this_00,camera,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetBorderHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
               (GizmoPlaneSlider3D *this,bool isHoverable,MethodInfo *method)

{
  this_00 = (this->fields)._quadBorder;
  (this->fields)._isBorderHoverable = isHoverable;
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
                GizmoHandle::GizmoHandle_Set3DShapeHoverable
                          (pGVar2,(pGVar3->fields)._borderCylTorusIndex,isHoverable,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
               (GizmoPlaneSlider3D *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IGizmoPlaneSlider3DController *)&TypeInfo__RTG__IGizmoPlaneSlider3DController;
    func_?();
    cRam_? = '\x01';
  }
  if (isVisible == (this->fields)._isBorderVisible) {
    return;
  }
  pIVar2 = (this->fields)._controllers;
  (this->fields)._isBorderVisible = isVisible;
  pGVar3 = (this->fields)._sharedLookAndFeel;
  if (((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
      (pGVar3 = (this->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoPlaneSlider3DController__Array *)0x0)) {
    uVar4 = (pGVar3->fields)._planeType;
    if (pIVar2->max_length <= uVar4) {
      pIStack_1 = (IGizmoPlaneSlider3DController *)0x0;
      pIStack_5 = (IGizmoPlaneSlider3DController__Class *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIStack_1 = pIVar2->vector[uVar4];
    if (pIStack_1 != (IGizmoPlaneSlider3DController *)0x0) {
      pIStack_5 = TypeInfo__RTG__IGizmoPlaneSlider3DController;
      puStack_7 = (undefined *)0x0;
      func_?();
      return;
    }
  }
  pIStack_1 = (IGizmoPlaneSlider3DController *)&stack0xfffffffc;
  uVar8 = func_?(&puStack_7);
  func_?(uVar8);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetDragChannel
               (GizmoPlaneSlider3D *this,GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  (this->fields)._dragChannel = dragChannel;
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._dblAxisOffsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._rotationDrag;
  }
  else {
    if (dragChannel != GizmoDragChannel__Enum_Scale) goto code_?;
    pGVar1 = (this->fields)._scaleDrag;
  }
  ppIVar2 = &(this->fields)._selectedDragSession;
  *ppIVar2 = (IGizmoDragSession *)pGVar1;
  func_?(ppIVar2,pGVar1);
code_?:
  pGVar3 = (this->fields)._._handle;
  if (pGVar3 != (GizmoHandle *)0x0) {
    pIVar4 = (this->fields)._selectedDragSession;
    ppIVar2 = &(pGVar3->fields)._DragSession_k__BackingField;
    *ppIVar2 = pIVar4;
    func_?(ppIVar2,pIVar4);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetQuadCornerPosition(QuadCorner, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetQuadCornerPosition
               (GizmoPlaneSlider3D *this,QuadCorner__Enum corner,Vector3 cornerPosition,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    uVar2 = (pGVar1->fields)._position3D.x;
    uVar3 = (pGVar1->fields)._position3D.y;
    fVar4 = (pGVar1->fields)._position3D.z;
    this_00 = (this->fields)._quad;
    if (this_00 != (QuadShape3D *)0x0) {
      pVVar5 = QuadShape3D::QuadShape3D_GetCornerPosition
                         ((Vector3 *)&stack0xffffffd8,this_00,corner,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      pGVar1 = (this->fields)._transform;
      if (pGVar1 != (GizmoTransform *)0x0) {
        value.y = cornerPosition.y + ((float)uVar3 - (float)uVar7);
        value.x = cornerPosition.x + ((float)uVar2 - (float)uVar6);
        value.z = cornerPosition.z + (fVar4 - pVVar5->z);
        GizmoTransform::GizmoTransform_set_Position3D(pGVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetSnapEnabled
               (GizmoPlaneSlider3D *this,bool isEnabled,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblAxisOffsetDrag;
  if (pGVar2 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    (pGVar2->fields)._._isSnapEnabled = isEnabled;
    pGVar3 = (this->fields)._rotationDrag;
    if (pGVar3 != (GizmoSglAxisRotationDrag3D *)0x0) {
      (pGVar3->fields)._._isSnapEnabled = isEnabled;
      pGVar4 = (this->fields)._scaleDrag;
      if (pGVar4 != (GizmoDblAxisScaleDrag3D *)0x0) {
        (pGVar4->fields)._._isSnapEnabled = isEnabled;
        return;
      }
    }
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetZoomFactorTransform
               (GizmoPlaneSlider3D *this,GizmoTransform *transform,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (transform != (GizmoTransform *)0x0) {
      ppGStack_2 = &(pGVar1->fields)._zoomFactorTransform;
      pGStack_3 = transform;
      *ppGStack_2 = transform;
      func_?();
      return;
    }
    pGVar4 = (pGVar1->fields)._gizmo;
    if (pGVar4 != (Gizmo *)0x0) {
      pGStack_3 = (pGVar4->fields)._transform;
      ppGStack_2 = &(pGVar1->fields)._zoomFactorTransform;
      *ppGStack_2 = pGStack_3;
      func_?();
      return;
    }
  }
  pGStack_3 = (GizmoTransform *)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* GizmoPlaneSlider3D(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
               (GizmoPlaneSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CircleShape3D);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoCircle3DBorder);
    func_?(&TypeInfo__RTG__GizmoCirclePlaneSlider3DController);
    func_?(&TypeInfo__RTG__GizmoDblAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__GizmoDblAxisScaleDrag3D);
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&TypeInfo__RTG__GizmoHandleCanHoverHandler);
    func_?(&TypeRef__RTG__GizmoPlane3DType);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DControllerData);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    func_?(&
                    MethodInfo__RTG__GizmoPlaneSlider3D__OnCanHoverHandle_int__RTG__Gizmo__RTG__GizmoHandleHoverData__RTG__YesNoAnswer_
                   );
    func_?(&
                    MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                   );
    func_?(&MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoPostEnabled_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&
                    MethodInfo__RTG__GizmoPlaneSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    func_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    func_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoQuad3DBorder);
    func_?(&TypeInfo__RTG__GizmoQuadPlaneSlider3DController);
    func_?(&TypeInfo__RTG__GizmoRATriangle3DBorder);
    func_?(&TypeInfo__RTG__GizmoRATrianglePlaneSlider3DController);
    func_?(&TypeInfo__RTG__GizmoRotationArc3D);
    func_?(&TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
    func_?(&TypeInfo__RTG__GizmoTransform);
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider3DController);
    func_?(&TypeInfo__RTG__QuadShape3D);
    func_?(&TypeInfo__RTG__RightAngTriangle3D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pQVar1 = (QuadShape3D *)func_?(TypeInfo__RTG__QuadShape3D);
  QuadShape3D::QuadShape3D__ctor(pQVar1,(MethodInfo *)0x0);
  ppQVar2 = &(this->fields)._quad;
  *ppQVar2 = pQVar1;
  func_?(ppQVar2,pQVar1);
  pRVar3 = (RightAngTriangle3D *)func_?(TypeInfo__RTG__RightAngTriangle3D);
  RightAngTriangle3D::RightAngTriangle3D__ctor(pRVar3,(MethodInfo *)0x0);
  ppRVar4 = &(this->fields)._raTriangle;
  *ppRVar4 = pRVar3;
  func_?(ppRVar4,pRVar3);
  pCVar5 = (CircleShape3D *)func_?(TypeInfo__RTG__CircleShape3D);
  CircleShape3D::CircleShape3D__ctor(pCVar5,(MethodInfo *)0x0);
  ppCVar6 = &(this->fields)._circle;
  *ppCVar6 = pCVar5;
  func_?(ppCVar6,pCVar5);
  (this->fields)._isBorderHoverable = 1;
  (this->fields)._isBorderVisible = 1;
  pGVar7 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar7,(MethodInfo *)0x0);
  (this->fields)._transform = pGVar7;
  func_?();
  (this->fields)._dragChannel = 1;
  pGVar8 = (GizmoSglAxisRotationDrag3D *)func_?();
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar8,(MethodInfo *)0x0);
  ppGVar9 = &(this->fields)._dblAxisOffsetDrag;
  *ppGVar9 = (GizmoDblAxisOffsetDrag3D *)pGVar8;
  func_?(ppGVar9,pGVar8);
  pGVar8 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisRotationDrag3D)
  ;
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar8,(MethodInfo *)0x0);
  ppGVar10 = &(this->fields)._rotationDrag;
  *ppGVar10 = pGVar8;
  func_?(ppGVar10,pGVar8);
  value = (GizmoRotationArc3D *)func_?(TypeInfo__RTG__GizmoRotationArc3D);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  gizmo_00 = TypeInfo__RTG__ArcShape3D;
  this_00 = (ArcShape3D *)func_?();
  ArcShape3D::ArcShape3D__ctor(this_00,(MethodInfo *)0x0);
  method_02 = (MethodInfo *)&value->fields;
  ((GizmoRotationArc3D__Fields *)method_02)->_arc = this_00;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_02);
  (this->fields)._rotationArc = value;
  func_?();
  pGVar11 = (GizmoDblAxisScaleDrag3D *)func_?();
  GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D__ctor(pGVar11,(MethodInfo *)0x0);
  (this->fields)._scaleDrag = pGVar11;
  func_?();
  (this->fields)._scaleDragAxisIndexUp = 1;
  method_07 = TypeInfo__RTG__GizmoPlaneSlider3DControllerData;
  pGVar12 = (GizmoPlaneSlider3DControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar12,ExceptionArgument__Enum_obj,(MethodInfo *)method_07);
  (this->fields)._controllerData = pGVar12;
  func_?();
  handle = TypeRef__RTG__GizmoPlane3DType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_01 == (Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0);
    pIVar13 = (IGizmoPlaneSlider3DController__Array *)func_?();
    (this->fields)._controllers = pIVar13;
    func_?();
    method_03 = TypeInfo__RTG__GizmoPlaneSlider3DSettings;
    value_00 = (GizmoPlaneSlider3DSettings *)func_?();
    (value_00->fields)._areaHoverEps = 1e-05;
    (value_00->fields)._extrudeHoverEps = 1e-05;
    (value_00->fields)._borderLineHoverEps = 0.7;
    (value_00->fields)._borderBoxHoverEps = 0.7;
    (value_00->fields)._borderTorusHoverEps = 0.7;
    (value_00->fields)._offsetSnapStepRight = 1.0;
    (value_00->fields)._offsetSnapStepUp = 1.0;
    (value_00->fields)._rotationSnapStep = 15.0;
    (value_00->fields)._scaleMode = 1;
    (value_00->fields)._scaleSnapStepRight = 0.1;
    (value_00->fields)._scaleSnapStepUp = 0.1;
    (value_00->fields)._proportionalScaleSnapStep = 0.1;
    (value_00->fields)._offsetSensitivity = 1.0;
    (value_00->fields)._rotationSensitivity = 0.45;
    (value_00->fields)._scaleSensitivity = 1.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    (this->fields)._settings = value_00;
    func_?();
    value_01 = (GizmoPlaneSlider3DLookAndFeel *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar14 = _UNK_?;
    fVar15 = _UNK_?;
    fVar16 = _UNK_?;
    fVar17 = _UNK_?;
    (value_01->fields)._scale = 1.0;
    (value_01->fields)._useZoomFactor = 1;
    (value_01->fields)._quadWidth = 1.0;
    (value_01->fields)._quadHeight = 1.0;
    (value_01->fields)._raTriangleXLength = 1.0;
    (value_01->fields)._raTriangleYLength = 1.0;
    (value_01->fields)._circleRadius = 0.5;
    (value_01->fields)._borderBoxHeight = 0.18;
    (value_01->fields)._borderBoxDepth = 0.18;
    (value_01->fields)._borderTorusThickness = 0.18;
    (value_01->fields)._numBorderTorusWireAxialSlices = 5;
    (value_01->fields)._borderCylTorusWidth = 0.18;
    (value_01->fields)._borderCylTorusHeight = 0.18;
    (value_01->fields)._shadeMode = 1;
    (value_01->fields)._color.r = fVar17;
    (value_01->fields)._color.g = fVar16;
    (value_01->fields)._color.b = fVar15;
    (value_01->fields)._color.a = fVar14;
    pCVar18 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar17 = pCVar18->g;
    fVar16 = pCVar18->b;
    fVar15 = pCVar18->a;
    (value_01->fields)._hoveredColor.r = pCVar18->r;
    (value_01->fields)._hoveredColor.g = fVar17;
    (value_01->fields)._hoveredColor.b = fVar16;
    (value_01->fields)._hoveredColor.a = fVar15;
    fVar15 = _UNK_?;
    fVar16 = _UNK_?;
    fVar17 = _UNK_?;
    (value_01->fields)._borderColor.r = _UNK_?;
    (value_01->fields)._borderColor.g = fVar17;
    (value_01->fields)._borderColor.b = fVar16;
    (value_01->fields)._borderColor.a = fVar15;
    pCVar18 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar17 = pCVar18->r;
    fVar16 = pCVar18->g;
    fVar15 = pCVar18->b;
    fVar14 = pCVar18->a;
    (value_01->fields)._isRotationArcVisible = 1;
    (value_01->fields)._hoveredBorderColor.r = fVar17;
    (value_01->fields)._hoveredBorderColor.g = fVar16;
    (value_01->fields)._hoveredBorderColor.b = fVar15;
    (value_01->fields)._hoveredBorderColor.a = fVar14;
    method_01 = TypeInfo__RTG__GizmoRotationArc3DLookAndFeel;
    value_02 = (GizmoRotationArc3DLookAndFeel *)func_?();
    (value_02->fields)._useShortestRotation = 1;
    (value_02->fields)._fillFlags = 3;
    pCVar18 = RTSystemValues::RTSystemValues_get_GuideFillColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar17 = pCVar18->g;
    fVar16 = pCVar18->b;
    fVar15 = pCVar18->a;
    (value_02->fields)._color.r = pCVar18->r;
    (value_02->fields)._color.g = fVar17;
    (value_02->fields)._color.b = fVar16;
    (value_02->fields)._color.a = fVar15;
    pCVar18 = RTSystemValues::RTSystemValues_get_GuideBorderColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar17 = pCVar18->g;
    fVar16 = pCVar18->b;
    fVar15 = pCVar18->a;
    (value_02->fields)._borderColor.r = pCVar18->r;
    (value_02->fields)._borderColor.g = fVar17;
    (value_02->fields)._borderColor.b = fVar16;
    (value_02->fields)._borderColor.a = fVar15;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_02,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    method_00 = &(value_01->fields)._rotationArcLookAndFeel;
    *method_00 = value_02;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._lookAndFeel = value_01;
    func_?();
    GizmoSlider::GizmoSlider__ctor((GizmoSlider *)this,(Gizmo *)gizmo_00,handleId,(MethodInfo *)0x0)
    ;
    pGVar19 = (this->fields)._._handle;
    if (pGVar19 == (GizmoHandle *)0x0) goto code_?;
    iVar20 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar19,(Shape3D *)(this->fields)._quad,(MethodInfo *)0x0);
    (this->fields)._quadIndex = iVar20;
    pGVar19 = (this->fields)._._handle;
    if (pGVar19 == (GizmoHandle *)0x0) goto code_?;
    iVar20 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar19,(Shape3D *)(this->fields)._raTriangle,(MethodInfo *)0x0);
    (this->fields)._raTriangleIndex = iVar20;
    pGVar19 = (this->fields)._._handle;
    if (pGVar19 == (GizmoHandle *)0x0) goto code_?;
    iVar20 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar19,(Shape3D *)(this->fields)._circle,(MethodInfo *)0x0);
    pGVar19 = (this->fields)._._handle;
    pQVar1 = (this->fields)._quad;
    (this->fields)._circleIndex = iVar20;
    this_02 = (GizmoQuad3DBorder *)func_?();
    GizmoQuad3DBorder::GizmoQuad3DBorder__ctor(this_02,this,pGVar19,pQVar1,(MethodInfo *)0x0);
    (this->fields)._quadBorder = this_02;
    func_?();
    pGVar19 = (this->fields)._._handle;
    pRVar3 = (this->fields)._raTriangle;
    this_03 = (GizmoRATriangle3DBorder *)func_?();
    GizmoRATriangle3DBorder::GizmoRATriangle3DBorder__ctor
              (this_03,this,pGVar19,pRVar3,(MethodInfo *)0x0);
    (this->fields)._raTriangleBorder = this_03;
    func_?();
    pGVar19 = (this->fields)._._handle;
    pCVar5 = (this->fields)._circle;
    this_04 = (GizmoCircle3DBorder *)func_?();
    GizmoCircle3DBorder::GizmoCircle3DBorder__ctor(this_04,this,pGVar19,pCVar5,(MethodInfo *)0x0);
    (this->fields)._circleBorder = this_04;
    func_?();
    pGVar12 = (this->fields)._controllerData;
    ppGVar21 = &(this->fields)._controllerData;
    if (pGVar12 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    (pGVar12->fields).Gizmo = (this->fields)._._gizmo;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).Slider = this;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).SliderHandle = (this->fields)._._handle;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).QuadBorder = (this->fields)._quadBorder;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).Quad = (this->fields)._quad;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).QuadIndex = (this->fields)._quadIndex;
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).RATriangleBorder = (this->fields)._raTriangleBorder;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).RATriangle = (this->fields)._raTriangle;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).RATriangleIndex = (this->fields)._raTriangleIndex;
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).CircleBorder = (this->fields)._circleBorder;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).Circle = (this->fields)._circle;
    func_?();
    if (*ppGVar21 == (GizmoPlaneSlider3DControllerData *)0x0) goto code_?;
    ((*ppGVar21)->fields).CircleIndex = (this->fields)._circleIndex;
    pIVar13 = (this->fields)._controllers;
    pOVar22 = (Object__Class *)*ppGVar21;
    method_06 = TypeInfo__RTG__GizmoQuadPlaneSlider3DController;
    pOVar23 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar23,ExceptionArgument__Enum_obj,(MethodInfo *)method_06);
    pOVar23[1].klass = pOVar22;
    func_?();
    if (pIVar13 == (IGizmoPlaneSlider3DController__Array *)0x0) goto code_?;
    iVar24 = func_?();
    if (iVar24 == 0) goto code_?;
    if (pIVar13->max_length == 0) goto code_?;
    pIVar13->vector[0] = (IGizmoPlaneSlider3DController *)pOVar23;
    func_?();
    pIVar13 = (this->fields)._controllers;
    pOVar22 = (Object__Class *)*ppGVar21;
    method_04 = TypeInfo__RTG__GizmoRATrianglePlaneSlider3DController;
    pOVar23 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar23,ExceptionArgument__Enum_obj,(MethodInfo *)method_04);
    pOVar23[1].klass = pOVar22;
    func_?();
    if (pIVar13 == (IGizmoPlaneSlider3DController__Array *)0x0) goto code_?;
    iVar24 = func_?();
    if (iVar24 == 0) goto code_?;
    if (pIVar13->max_length < 2) goto code_?;
    pIVar13->vector[1] = (IGizmoPlaneSlider3DController *)pOVar23;
    func_?();
    pIVar13 = (this->fields)._controllers;
    pOVar22 = (Object__Class *)*ppGVar21;
    method_05 = TypeInfo__RTG__GizmoCirclePlaneSlider3DController;
    pOVar23 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar23,ExceptionArgument__Enum_obj,(MethodInfo *)method_05);
    pOVar23[1].klass = pOVar22;
    func_?();
    if (pIVar13 == (IGizmoPlaneSlider3DController__Array *)0x0) goto code_?;
    iVar24 = func_?();
    if (iVar24 == 0) goto code_?;
    if (pIVar13->max_length < 3) goto code_?;
    pIVar13->vector[2] = (IGizmoPlaneSlider3DController *)pOVar23;
    func_?();
    pGVar7 = (this->fields)._transform;
    value_03 = (GizmoEntityTransformChangedHandler *)func_?();
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value_03,(Object *)this,
               MethodInfo__RTG__GizmoPlaneSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (pGVar7 == (GizmoTransform *)0x0) goto code_?;
    GizmoTransform::GizmoTransform_add_Changed(pGVar7,value_03,(MethodInfo *)0x0);
    pGVar25 = (this->fields)._._gizmo;
    value_04 = (GizmoPreUpdateBeginHandler *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_04,(Object *)this,
               MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
               (MethodInfo *)0x0);
    if (pGVar25 == (Gizmo *)0x0) goto code_?;
    Gizmo::Gizmo_add_PreUpdateBegin(pGVar25,value_04,(MethodInfo *)0x0);
    pGVar25 = (this->fields)._._gizmo;
    value_05 = (GizmoPreDragBeginAttemptHandler *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              ((EventHandler_1_Object_ *)value_05,(Object *)this,
               MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_,
               (MethodInfo *)0x0);
    if (pGVar25 == (Gizmo *)0x0) goto code_?;
    Gizmo::Gizmo_add_PreDragBeginAttempt(pGVar25,value_05,(MethodInfo *)0x0);
    pGVar25 = (this->fields)._._gizmo;
    value_06 = (GizmoPostEnabledHandler *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_06,(Object *)this,
               MethodInfo__RTG__GizmoPlaneSlider3D__OnGizmoPostEnabled_RTG__Gizmo_,(MethodInfo *)0x0
              );
    if (pGVar25 == (Gizmo *)0x0) goto code_?;
    Gizmo::Gizmo_add_PostEnabled(pGVar25,value_06,(MethodInfo *)0x0);
    pGVar19 = (this->fields)._._handle;
    if (pGVar19 == (GizmoHandle *)0x0) goto code_?;
    pGVar26 = (pGVar19->fields).CanHover;
    this_05 = (TextGenerator_MissingCharacterEventCallback *)func_?();
    UnityEngine.TextCoreTextEngineModule.dll::UnityEngine::TextCore::Text::
    TextGenerator+MissingCharacterEventCallback::TextGenerator_MissingCharacterEventCallback__ctor
              (this_05,(Object *)this,
               MethodInfo__RTG__GizmoPlaneSlider3D__OnCanHoverHandle_int__RTG__Gizmo__RTG__GizmoHandleHoverData__RTG__YesNoAnswer_
               ,(MethodInfo *)0x0);
    pGVar26 = (GizmoHandleCanHoverHandler *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pGVar26,(Delegate *)this_05,(MethodInfo *)0x0);
    if (pGVar26 == (GizmoHandleCanHoverHandler *)0x0) {
      (pGVar19->fields).CanHover = (GizmoHandleCanHoverHandler *)0x0;
code_?:
      func_?();
      ppIVar27 = &(this->fields)._selectedDragSession;
      (this->fields)._dragChannel = 1;
      *ppIVar27 = (IGizmoDragSession *)(this->fields)._dblAxisOffsetDrag;
      func_?();
      pGVar19 = (this->fields)._._handle;
      if (pGVar19 != (GizmoHandle *)0x0) {
        (pGVar19->fields)._DragSession_k__BackingField = *ppIVar27;
        func_?();
        pGVar28 = (this->fields)._dblAxisOffsetDrag;
        if (pGVar28 != (GizmoDblAxisOffsetDrag3D *)0x0) {
          pGVar7 = (this->fields)._transform;
          GizmoDragSession::GizmoDragSession_AddTargetTransform
                    ((GizmoDragSession *)pGVar28,pGVar7,(MethodInfo *)0x0);
          pGVar8 = (this->fields)._rotationDrag;
          if (pGVar8 != (GizmoSglAxisRotationDrag3D *)0x0) {
            GizmoDragSession::GizmoDragSession_AddTargetTransform
                      ((GizmoDragSession *)pGVar8,pGVar7,(MethodInfo *)0x0);
            pGVar11 = (this->fields)._scaleDrag;
            if (pGVar11 != (GizmoDblAxisScaleDrag3D *)0x0) {
              GizmoDragSession::GizmoDragSession_AddTargetTransform
                        ((GizmoDragSession *)pGVar11,pGVar7,(MethodInfo *)0x0);
              pGVar25 = (this->fields)._._gizmo;
              if ((pGVar25 != (Gizmo *)0x0) &&
                 (pGVar28 = (this->fields)._dblAxisOffsetDrag,
                 pGVar28 != (GizmoDblAxisOffsetDrag3D *)0x0)) {
                pGVar7 = (pGVar25->fields)._transform;
                GizmoDragSession::GizmoDragSession_AddTargetTransform
                          ((GizmoDragSession *)pGVar28,pGVar7,(MethodInfo *)0x0);
                pGVar8 = (this->fields)._rotationDrag;
                if (pGVar8 != (GizmoSglAxisRotationDrag3D *)0x0) {
                  GizmoDragSession::GizmoDragSession_AddTargetTransform
                            ((GizmoDragSession *)pGVar8,pGVar7,(MethodInfo *)0x0);
                  pGVar11 = (this->fields)._scaleDrag;
                  if (pGVar11 != (GizmoDblAxisScaleDrag3D *)0x0) {
                    GizmoDragSession::GizmoDragSession_AddTargetTransform
                              ((GizmoDragSession *)pGVar11,pGVar7,(MethodInfo *)0x0);
                    pGVar25 = (this->fields)._._gizmo;
                    if (pGVar25 != (Gizmo *)0x0) {
                      pGVar7 = (this->fields)._transform;
                      if (pGVar7 != (GizmoTransform *)0x0) {
                        GizmoTransform::GizmoTransform_SetParent
                                  (pGVar7,(pGVar25->fields)._transform,(MethodInfo *)0x0);
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
      goto code_?;
    }
    pGVar29 = (GizmoHandleCanHoverHandler *)0x0;
    if (pGVar26->klass == TypeInfo__RTG__GizmoHandleCanHoverHandler) {
      pGVar29 = pGVar26;
    }
    if (pGVar29 != (GizmoHandleCanHoverHandler *)0x0) {
      (pGVar19->fields).CanHover = pGVar29;
      pGVar29 = (GizmoHandleCanHoverHandler *)0x0;
      if (pGVar26->klass == TypeInfo__RTG__GizmoHandleCanHoverHandler) {
        pGVar29 = pGVar26;
      }
      if (pGVar29 != (GizmoHandleCanHoverHandler *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Boolean get_IsDragged() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_IsDragged
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields)._._gizmo;
    if (this_01 != (Gizmo *)0x0) {
      pSVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::PointerEventBase`1[System
               ::Object]::PointerEventBase_1_System_Object__get_pointerType
                         ((PointerEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0);
      pSVar3 = (String *)
               mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
               SparselyPopulatedArrayFragment_1_System_Object__get_Length
                         ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0)
      ;
      return pSVar2 == pSVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Boolean get_IsMoving() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_IsMoving
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._dblAxisOffsetDrag;
  if (pGStack_2 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    pIStack_1 = (pGStack_2->klass->vtable).get_DragChannel_1.methodPtr;
    bVar3 = (*(code *)(pGStack_2->klass->vtable).get_IsActive_1.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean get_IsRotating() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_IsRotating
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._rotationDrag;
  if (pGStack_2 != (GizmoSglAxisRotationDrag3D *)0x0) {
    pIStack_1 = (pGStack_2->klass->vtable).get_DragChannel_1.methodPtr;
    bVar3 = (*(code *)(pGStack_2->klass->vtable).get_IsActive_1.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean get_IsScaling() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_IsScaling
               (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._scaleDrag;
  if (pGStack_2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    pIStack_1 = (pGStack_2->klass->vtable).get_DragChannel_1.methodPtr;
    bVar3 = (*(code *)(pGStack_2->klass->vtable).get_IsActive_1.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Quaternion get_LocalRotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LocalRotation
          (Quaternion *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    fVar3 = (pGVar2->fields)._localRotation3D.y;
    fVar4 = (pGVar2->fields)._localRotation3D.z;
    fVar5 = (pGVar2->fields)._localRotation3D.w;
    __return_storage_ptr__->x = (pGVar2->fields)._localRotation3D.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar8)();
  return pQVar9;
}


/* GizmoPlaneSlider3DLookAndFeel get_LookAndFeel() */

GizmoPlaneSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
          (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    return pGVar1;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Normal
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    pVVar1 = GizmoTransform::GizmoTransform_GetAxis3D_1
                       (&VStack_2,this_00,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Plane get_Plane() */

Plane * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Plane
                  (Plane *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    pVVar2 = GizmoTransform::GizmoTransform_GetAxis3D_1
                       ((Vector3 *)&stack0xffffffe4,pGVar1,2,AxisSign__Enum_Positive,
                        (MethodInfo *)0x0);
    pGVar1 = (this->fields)._transform;
    if (pGVar1 != (GizmoTransform *)0x0) {
      uVar3 = (pGVar1->fields)._position3D.x;
      uVar4 = (pGVar1->fields)._position3D.y;
      fVar5 = (pGVar1->fields)._position3D.z;
      (__return_storage_ptr__->m_Normal).x = 0.0;
      (__return_storage_ptr__->m_Normal).y = 0.0;
      (__return_storage_ptr__->m_Normal).z = 0.0;
      __return_storage_ptr__->m_Distance = 0.0;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         ((Vector3 *)&stack0xffffffd8,*pVVar2,(MethodInfo *)0x0);
      uVar6 = pVVar2->x;
      uVar7 = pVVar2->y;
      fVar8 = pVVar2->z;
      (__return_storage_ptr__->m_Normal).x = (float)uVar6;
      (__return_storage_ptr__->m_Normal).y = (float)uVar7;
      (__return_storage_ptr__->m_Normal).z = fVar8;
      __return_storage_ptr__->m_Distance =
           (float)((uint)((float)uVar4 * (float)uVar7 + (float)uVar3 * (float)uVar6 + fVar5 * fVar8)
                  ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pPVar10 = (Plane *)(*pcVar9)();
  return pPVar10;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Position
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    fVar3 = (pGVar2->fields)._position3D.y;
    fVar4 = (pGVar2->fields)._position3D.z;
    __return_storage_ptr__->x = (pGVar2->fields)._position3D.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Vector3 get_RelativeDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_RelativeDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblAxisOffsetDrag;
  if (pGVar2 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    fVar3 = (pGVar2->fields)._._._relativeDragOffset.y;
    fVar4 = (pGVar2->fields)._._._relativeDragOffset.z;
    __return_storage_ptr__->x = (pGVar2->fields)._._._relativeDragOffset.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Single get_RelativeDragRotation() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_RelativeDragRotation
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rotationDrag;
  if (pGVar2 != (GizmoSglAxisRotationDrag3D *)0x0) {
    return (pGVar2->fields)._relativeRotation;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_RelativeDragScaleRight() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_RelativeDragScaleRight
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar2->fields)._relativeScale0;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_RelativeDragScaleUp() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_RelativeDragScaleUp
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar2->fields)._relativeScale1;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Right
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    pVVar1 = GizmoTransform::GizmoTransform_GetAxis3D_1
                       (&VStack_2,this_00,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    fVar3 = (pGVar2->fields)._rotation3D.y;
    fVar4 = (pGVar2->fields)._rotation3D.z;
    fVar5 = (pGVar2->fields)._rotation3D.w;
    __return_storage_ptr__->x = (pGVar2->fields)._rotation3D.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar8)();
  return pQVar9;
}


/* GizmoPlaneSlider3DSettings get_Settings() */

GizmoPlaneSlider3DSettings *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Settings
          (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings *)0x0) {
    return pGVar1;
  }
  return (this->fields)._settings;
}


/* Vector3 get_TotalDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_TotalDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblAxisOffsetDrag;
  if (pGVar2 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    fVar3 = (pGVar2->fields)._._._totalDragOffset.y;
    fVar4 = (pGVar2->fields)._._._totalDragOffset.z;
    __return_storage_ptr__->x = (pGVar2->fields)._._._totalDragOffset.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Single get_TotalDragRotation() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_TotalDragRotation
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rotationDrag;
  if (pGVar2 != (GizmoSglAxisRotationDrag3D *)0x0) {
    return (pGVar2->fields)._totalRotation;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_TotalDragScaleRight() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_TotalDragScaleRight
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar2->fields)._totalScale0;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_TotalDragScaleUp() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_TotalDragScaleUp
                (GizmoPlaneSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar2->fields)._totalScale1;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Up
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    pVVar1 = GizmoTransform::GizmoTransform_GetAxis3D_1
                       (&VStack_2,this_00,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void set_LocalRotation(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_LocalRotation
               (GizmoPlaneSlider3D *this,Quaternion value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_LocalRotation3D(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position
               (GizmoPlaneSlider3D *this,Vector3 value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Position3D(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Rotation
               (GizmoPlaneSlider3D *this,Quaternion value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Rotation3D(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
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

