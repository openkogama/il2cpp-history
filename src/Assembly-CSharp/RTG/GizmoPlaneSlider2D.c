
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_AddTargetTransform
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_00 = (this->fields)._offsetDrag;
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

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_AddTargetTransform_1
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,
               GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    this_00 = (GizmoDblAxisScaleDrag3D *)(this->fields)._offsetDrag;
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


/* Single GetRealCircleRadius() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealCircleRadius
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fStack_1 = _UNK_?;
  VStack_2.y = 1.0;
  pGVar3 = (this->fields)._scaleDrag;
  if (pGVar3 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
  cVar4 = (*(code *)(pGVar3->klass->vtable).get_IsActive_1.method)
                    (pGVar3,(pGVar3->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar4 != '\0') {
    pGVar3 = (this->fields)._scaleDrag;
    if (pGVar3 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
    fVar5 = (pGVar3->fields)._totalScale0;
    if ((float)((uint)fVar5 & _UNK_?) <
        (float)((uint)(pGVar3->fields)._totalScale1 & _UNK_?)) {
      fVar5 = (pGVar3->fields)._totalScale1;
    }
    uVar6 = (this->fields)._scaleAxisUp.x;
    uVar7 = (this->fields)._scaleAxisUp.y;
    fVar8 = (this->fields)._scaleAxisUp.z;
    uVar9 = (this->fields)._scaleDragOrigin.x;
    uVar10 = (this->fields)._scaleDragOrigin.y;
    fVar11 = (this->fields)._scaleDragOrigin.z;
    this_00 = (this->fields)._._gizmo;
    VStack_2.x = (float)uVar9;
    VStack_2.y = (float)uVar10;
    if (this_00 == (Gizmo *)0x0) goto code_?;
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    start.y = VStack_2.y;
    start.x = VStack_2.x;
    start.z = fVar11;
    end.y = (float)uVar10 + (float)uVar7 * fVar5;
    end.x = (float)uVar9 + (float)uVar6 * fVar5;
    end.z = fVar11 + fVar8 * fVar5;
    VStack_2 = Vector3Ex::Vector3Ex_ConvertDirTo2D(start,end,camera,(MethodInfo *)0x0);
    fVar12 = (float10)func_?(&VStack_2,0);
    pGVar13 = (this->fields)._sharedLookAndFeel;
    VStack_2.y = (float)fVar12;
    if ((pGVar13 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar13 = (this->fields)._lookAndFeel, pGVar13 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
    goto code_?;
    if (fVar5 < _UNK_?) {
      fStack_1 = _UNK_?;
    }
    VStack_2.y = (VStack_2.y / ((pGVar13->fields)._scale * (pGVar13->fields)._circleRadius)) *
                  fStack_1;
  }
  pGVar13 = (this->fields)._sharedLookAndFeel;
  if ((pGVar13 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
     (pGVar13 = (this->fields)._lookAndFeel, pGVar13 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
    return (pGVar13->fields)._scale * (pGVar13->fields)._circleRadius * VStack_2.y;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  fVar12 = (float10)(*pcVar14)();
  return (float)fVar12;
}


/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                  (GizmoPlaneSlider2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pIVar2 = (this->fields)._controllers;
  if (((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._planeType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    pIVar4 = pIVar2->vector[uVar3];
    if (pIVar4 != (IGizmoPlaneSlider2DController *)0x0) {
      pIVar5 = pIVar4->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pIVar5->_1).rank;
      uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider2DController) {
            iVar8 = pIVar5->interfaceOffsets[uVar6].offset;
            VVar9 = (Vector2)(*(code *)(&(pIVar4->klass->vtable).GetRealExtentPoint)[iVar8].method)
                                        (pIVar4,extentPt,(&pIVar4->klass[1]._0.image)[iVar8 * 2]);
            return VVar9;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      puVar10 = (undefined4 *)func_?(pIVar4,TypeInfo__RTG__IGizmoPlaneSlider2DController,3);
      VVar9 = (Vector2)(*(code *)*puVar10)(pIVar4,extentPt,puVar10[1]);
      return VVar9;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  VVar9 = (Vector2)(*pcVar11)();
  return VVar9;
}


/* Single GetRealQuadHeight() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadHeight
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fStack_1 = _UNK_?;
  VStack_2.y = 1.0;
  pGVar3 = (this->fields)._scaleDrag;
  if (pGVar3 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
  cVar4 = (*(code *)(pGVar3->klass->vtable).get_IsActive_1.method)
                    (pGVar3,(pGVar3->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar4 != '\0') {
    VStack_2.y = (this->fields)._scaleAxisUp.z;
    uVar5 = (this->fields)._scaleAxisUp.x;
    uVar6 = (this->fields)._scaleAxisUp.y;
    pGVar3 = (this->fields)._scaleDrag;
    VStack_2.x = (float)uVar6;
    if (pGVar3 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
    fVar7 = (pGVar3->fields)._totalScale1;
    fVar8 = VStack_2.y * fVar7;
    uVar9 = (this->fields)._scaleDragOrigin.x;
    uVar10 = (this->fields)._scaleDragOrigin.y;
    fVar11 = (this->fields)._scaleDragOrigin.z;
    this_00 = (this->fields)._._gizmo;
    VStack_2.x = (float)uVar9;
    VStack_2.y = (float)uVar10;
    if (this_00 == (Gizmo *)0x0) goto code_?;
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    start.y = VStack_2.y;
    start.x = VStack_2.x;
    start.z = fVar11;
    end.y = (float)uVar10 + (float)uVar6 * fVar7;
    end.x = (float)uVar9 + (float)uVar5 * fVar7;
    end.z = fVar11 + fVar8;
    VStack_2 = Vector3Ex::Vector3Ex_ConvertDirTo2D(start,end,camera,(MethodInfo *)0x0);
    fVar12 = (float10)func_?(&VStack_2,0);
    pGVar13 = (this->fields)._sharedLookAndFeel;
    if ((pGVar13 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar13 = (this->fields)._lookAndFeel, pGVar13 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
    goto code_?;
    pGVar3 = (this->fields)._scaleDrag;
    if (pGVar3 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
    if ((pGVar3->fields)._totalScale1 < _UNK_?) {
      fStack_1 = _UNK_?;
    }
    VStack_2.y = ((float)fVar12 /
                  ((pGVar13->fields)._scale * (pGVar13->fields)._quadHeight * _UNK_?)) *
                  fStack_1;
  }
  pGVar13 = (this->fields)._sharedLookAndFeel;
  if ((pGVar13 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
     (pGVar13 = (this->fields)._lookAndFeel, pGVar13 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
    return (pGVar13->fields)._scale * (pGVar13->fields)._quadHeight * VStack_2.y;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  fVar12 = (float10)(*pcVar14)();
  return (float)fVar12;
}


/* Vector2 GetRealQuadSize() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadSize
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fVar1 = GizmoPlaneSlider2D_GetRealQuadWidth(this,(MethodInfo *)0x0);
  fVar2 = GizmoPlaneSlider2D_GetRealQuadHeight(this,(MethodInfo *)0x0);
  VVar3.y = fVar2;
  VVar3.x = fVar1;
  return VVar3;
}


/* Single GetRealQuadWidth() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadWidth
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fStack_1 = _UNK_?;
  VStack_2.y = 1.0;
  pGVar3 = (this->fields)._scaleDrag;
  if (pGVar3 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
  cVar4 = (*(code *)(pGVar3->klass->vtable).get_IsActive_1.method)
                    (pGVar3,(pGVar3->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar4 != '\0') {
    VStack_2.y = (this->fields)._scaleAxisRight.z;
    uVar5 = (this->fields)._scaleAxisRight.x;
    uVar6 = (this->fields)._scaleAxisRight.y;
    pGVar3 = (this->fields)._scaleDrag;
    VStack_2.x = (float)uVar6;
    if (pGVar3 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
    fVar7 = (pGVar3->fields)._totalScale0;
    fVar8 = VStack_2.y * fVar7;
    uVar9 = (this->fields)._scaleDragOrigin.x;
    uVar10 = (this->fields)._scaleDragOrigin.y;
    fVar11 = (this->fields)._scaleDragOrigin.z;
    this_00 = (this->fields)._._gizmo;
    VStack_2.x = (float)uVar9;
    VStack_2.y = (float)uVar10;
    if (this_00 == (Gizmo *)0x0) goto code_?;
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    start.y = VStack_2.y;
    start.x = VStack_2.x;
    start.z = fVar11;
    end.y = (float)uVar10 + (float)uVar6 * fVar7;
    end.x = (float)uVar9 + (float)uVar5 * fVar7;
    end.z = fVar11 + fVar8;
    VStack_2 = Vector3Ex::Vector3Ex_ConvertDirTo2D(start,end,camera,(MethodInfo *)0x0);
    fVar12 = (float10)func_?(&VStack_2,0);
    pGVar13 = (this->fields)._sharedLookAndFeel;
    if ((pGVar13 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar13 = (this->fields)._lookAndFeel, pGVar13 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
    goto code_?;
    pGVar3 = (this->fields)._scaleDrag;
    if (pGVar3 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
    if ((pGVar3->fields)._totalScale0 < _UNK_?) {
      fStack_1 = _UNK_?;
    }
    VStack_2.y = ((float)fVar12 /
                  ((pGVar13->fields)._scale * (pGVar13->fields)._quadWidth * _UNK_?)) *
                  fStack_1;
  }
  pGVar13 = (this->fields)._sharedLookAndFeel;
  if ((pGVar13 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
     (pGVar13 = (this->fields)._lookAndFeel, pGVar13 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
    return (pGVar13->fields)._scale * (pGVar13->fields)._quadWidth * VStack_2.y;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  fVar12 = (float10)(*pcVar14)();
  return (float)fVar12;
}


/* Void MakePolySphereBorder(Vector3, Single, Int32, Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_MakePolySphereBorder
               (GizmoPlaneSlider2D *this,Vector3 sphereCenter,float sphereRadius,int32_t numPoints,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if ((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
     (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
    if ((pGVar1->fields)._planeType != 2) {
      return;
    }
    this_00 = (this->fields)._polygon;
    if (this_00 != (PolygonShape2D *)0x0) {
      PolygonShape2D::PolygonShape2D_MakeSphereBorder
                (this_00,sphereCenter,sphereRadius,numPoints,camera,(MethodInfo *)0x0);
      pIVar2 = (this->fields)._controllers;
      if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
        if (pIVar2->max_length < 3) goto code_?;
        if (pIVar2->vector[2] != (IGizmoPlaneSlider2DController *)0x0) {
          func_?();
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnGizmoAttemptHandleDragBegin
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

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
      VVar4 = GizmoTransform::GizmoTransform_get_Right2D(pGVar3,(MethodInfo *)0x0);
      fVar5 = (this->fields)._offsetDragOrigin.x;
      fVar6 = (this->fields)._offsetDragOrigin.y;
      fVar7 = (this->fields)._offsetDragOrigin.z;
      pGVar8 = (this->fields)._._gizmo;
      if (pGVar8 != (Gizmo *)0x0) {
        pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
        zPos.y = fVar6;
        zPos.x = fVar5;
        zPos.z = fVar7;
        pVVar10 = Vector2Ex::Vector2Ex_ConvertDirTo3D_1
                            ((Vector3 *)&stack0xffffffe8,VVar4,zPos,pCVar9,(MethodInfo *)0x0);
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffe8,*pVVar10,(MethodInfo *)0x0);
        uVar11 = pVVar10->x;
        uVar12 = pVVar10->y;
        gizmo = (Gizmo *)pVVar10->z;
        pGVar3 = (this->fields)._transform;
        if (pGVar3 != (GizmoTransform *)0x0) {
          VVar4 = GizmoTransform::GizmoTransform_get_Up2D(pGVar3,(MethodInfo *)0x0);
          fVar7 = (this->fields)._offsetDragOrigin.x;
          fVar13 = (this->fields)._offsetDragOrigin.y;
          fVar5 = (this->fields)._offsetDragOrigin.z;
          pGVar8 = (this->fields)._._gizmo;
          if (pGVar8 != (Gizmo *)0x0) {
            pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
            zPos_02.y = fVar13;
            zPos_02.x = fVar7;
            zPos_02.z = fVar5;
            pVVar10 = Vector2Ex::Vector2Ex_ConvertDirTo3D_1
                                ((Vector3 *)&stack0xffffffe8,VVar4,zPos_02,pCVar9,(MethodInfo *)0x0
                                );
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&stack0xffffffe8,*pVVar10,(MethodInfo *)0x0);
            uVar14 = pVVar10->x;
            uVar15 = pVVar10->y;
            pGVar16 = &this->fields;
            pGVar17 = (this->fields)._sharedSettings;
            if ((pGVar17 != (GizmoPlaneSlider2DSettings *)0x0) ||
               (pGVar17 = (this->fields)._settings, pGVar17 != (GizmoPlaneSlider2DSettings *)0x0)) {
              this_02 = (this->fields)._offsetDrag;
              if (this_02 != (GizmoDblAxisOffsetDrag3D *)0x0) {
                this = (GizmoPlaneSlider2D *)uVar12;
                fVar18 = (float)uVar11;
                handleId = uVar14;
                method = (MethodInfo *)uVar15;
                stack0x00000014 = pVVar10->z;
                stack0x00000018 = (pGVar17->fields)._offsetSnapStepRight;
                stack0x0000001c = (pGVar17->fields)._offsetSnapStepUp;
                workData_01.DragOrigin = pGVar16->_offsetDragOrigin;
                workData_01 = (GizmoDblAxisOffsetDrag3D_WorkData)
                              CONCAT3212(workData_00._0_32_,workData_01.DragOrigin);
                GizmoDblAxisOffsetDrag3D::GizmoDblAxisOffsetDrag3D_SetWorkData
                          (this_02,workData_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  else if (iVar2 == 2) {
    pGVar8 = (this->fields)._._gizmo;
    uVar19 = 0;
    uVar20 = 0;
    fVar5 = 0.0;
    if (((pGVar8 != (Gizmo *)0x0) &&
        (pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0), pCVar9 != (Camera *)0x0))
       && (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pCVar9,(MethodInfo *)0x0), this_03 != (Transform *)0x0)
       ) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffe8,this_03,(MethodInfo *)0x0);
      pGVar17 = (this->fields)._sharedSettings;
      pCVar9 = (Camera *)pVVar10->x;
      fVar21 = pVVar10->y;
      fVar6 = pVVar10->z;
      if (pGVar17 == (GizmoPlaneSlider2DSettings *)0x0) {
        pGVar22 = (this->fields)._settings;
        if (pGVar22 == (GizmoPlaneSlider2DSettings *)0x0) goto code_?;
        pGVar17 = (this->fields)._settings;
        fVar7 = (float)(pGVar22->fields)._rotationSnapMode;
        if (pGVar17 == (GizmoPlaneSlider2DSettings *)0x0) goto code_?;
      }
      else {
        fVar7 = (float)(pGVar17->fields)._rotationSnapMode;
      }
      fVar13 = (pGVar17->fields)._rotationSnapStep;
      pGVar23 = (this->fields)._sharedLookAndFeel;
      if ((pGVar23 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
         (pGVar23 = (this->fields)._lookAndFeel, pGVar23 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
        if ((pGVar23->fields)._planeType != 2) {
          pGVar8 = (this->fields)._._gizmo;
          if (pGVar8 == (Gizmo *)0x0) goto code_?;
          pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._transform;
          if (pGVar3 == (GizmoTransform *)0x0) goto code_?;
          fVar21 = (pGVar3->fields)._position2D.x;
          pGVar8 = (this->fields)._._gizmo;
          fVar6 = (pGVar3->fields)._position2D.y;
          if (((pGVar8 == (Gizmo *)0x0) ||
              (pCVar24 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0),
              pCVar24 == (Camera *)0x0)) ||
             (fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                                 (pCVar24,(MethodInfo *)0x0), pCVar9 == (Camera *)0x0))
          goto code_?;
          fVar13 = 0.0;
          position_00.y = fVar6;
          position_00.x = fVar21;
          position_00.z = fVar7;
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                              ((Vector3 *)&stack0xffffffe8,pCVar9,position_00,(MethodInfo *)0x0);
          uVar25 = pVVar10->x;
          uVar26 = pVVar10->y;
          fVar5 = pVVar10->z;
          uVar19 = uVar25;
          uVar20 = uVar26;
        }
        pGVar23 = (this->fields)._sharedLookAndFeel;
        pGVar27 = pGVar23;
        if ((pGVar23 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
           (pGVar27 = (this->fields)._lookAndFeel, pGVar27 != (GizmoPlaneSlider2DLookAndFeel *)0x0))
        {
          if ((pGVar27->fields)._planeType == 1) {
            pGVar3 = (this->fields)._transform;
            pGVar28 = (this->fields)._rotationArc;
            if (pGVar3 == (GizmoTransform *)0x0) goto code_?;
            fVar29 = (pGVar3->fields)._position2D.x;
            fVar30 = (pGVar3->fields)._position2D.y;
            pGVar8 = (this->fields)._._gizmo;
            if (pGVar8 == (Gizmo *)0x0) goto code_?;
            fVar31 = (pGVar8->fields)._hoverInfo._hoverPoint.y;
            fVar32 = (pGVar8->fields)._hoverInfo._hoverPoint.x;
            fVar33 = GizmoPlaneSlider2D_GetRealCircleRadius(this,(MethodInfo *)0x0);
            if (pGVar28 == (GizmoRotationArc2D *)0x0) goto code_?;
            VVar4.y = fVar30;
            VVar4.x = fVar29;
            arcStart.y = fVar31;
            arcStart.x = fVar32;
            GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
                      (pGVar28,VVar4,arcStart,fVar33,(MethodInfo *)0x0);
            pGVar28 = (this->fields)._rotationArc;
            if (pGVar28 == (GizmoRotationArc2D *)0x0) goto code_?;
            (pGVar28->fields)._type = 0;
          }
          else {
            if ((pGVar23 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
               (pGVar23 = (this->fields)._lookAndFeel,
               pGVar23 == (GizmoPlaneSlider2DLookAndFeel *)0x0)) goto code_?;
            if ((pGVar23->fields)._planeType == 2) {
              VVar4 = GizmoPlaneSlider2D_get_PolyCenter(this,(MethodInfo *)0x0);
              fVar5 = VVar4.x;
              fVar29 = VVar4.y;
              pGVar8 = (this->fields)._._gizmo;
              if (pGVar8 == (Gizmo *)0x0) goto code_?;
              pCVar24 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
              pGVar8 = (this->fields)._._gizmo;
              if (((pGVar8 == (Gizmo *)0x0) ||
                  (this_04 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0),
                  this_04 == (Camera *)0x0)) ||
                 (fVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                                     (this_04,(MethodInfo *)0x0), pCVar24 == (Camera *)0x0))
              goto code_?;
              position.y = fVar29;
              position.x = fVar5;
              position.z = fVar30;
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                                  ((Vector3 *)&stack0xffffffe8,pCVar24,position,(MethodInfo *)0x0);
              pGVar28 = (this->fields)._rotationArc;
              uVar19 = pVVar10->x;
              uVar20 = pVVar10->y;
              fVar5 = pVVar10->z;
              VVar4 = GizmoPlaneSlider2D_get_PolyCenter(this,(MethodInfo *)0x0);
              pGVar8 = (this->fields)._._gizmo;
              if ((pGVar8 == (Gizmo *)0x0) ||
                 (arcStart_00.x = (pGVar8->fields)._hoverInfo._hoverPoint.x,
                 arcStart_00.y = (pGVar8->fields)._hoverInfo._hoverPoint.y,
                 pGVar28 == (GizmoRotationArc2D *)0x0)) goto code_?;
              GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
                        (pGVar28,VVar4,arcStart_00,1.0,(MethodInfo *)0x0);
              pGVar28 = (this->fields)._rotationArc;
              if (pGVar28 == (GizmoRotationArc2D *)0x0) goto code_?;
              (pGVar28->fields)._type = 1;
              pGVar28 = (this->fields)._rotationArc;
              if (pGVar28 == (GizmoRotationArc2D *)0x0) goto code_?;
              (pGVar28->fields)._projectionPoly = (this->fields)._polygon;
              func_?();
              pGVar28 = (this->fields)._rotationArc;
              if (pGVar28 == (GizmoRotationArc2D *)0x0) goto code_?;
              GizmoRotationArc2D::GizmoRotationArc2D_set_NumProjectedPoints
                        (pGVar28,100,(MethodInfo *)0x0);
            }
          }
          this_01 = (this->fields)._rotationDrag;
          if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
            workData.RotationPlanePos.y = (float)uVar20;
            workData.RotationPlanePos.x = (float)uVar19;
            workData.RotationPlanePos.z = fVar5;
            workData.Axis.x = (float)pCVar9;
            workData.Axis.y = fVar21;
            workData.Axis.z = fVar6;
            workData.SnapMode = (int32_t)fVar7;
            workData.SnapStep = fVar13;
            GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                      (this_01,workData,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pGVar3 = (this->fields)._transform;
    if (pGVar3 != (GizmoTransform *)0x0) {
      fVar5 = (pGVar3->fields)._position2D.x;
      fVar6 = (pGVar3->fields)._position2D.y;
      VVar4 = GizmoPlaneSlider2D_GetRealExtentPoint
                         (this,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0);
      fVar29 = (this->fields)._scaleDragOrigin.x;
      fVar30 = (this->fields)._scaleDragOrigin.y;
      fVar7 = (this->fields)._scaleDragOrigin.z;
      pGVar8 = (this->fields)._._gizmo;
      if (pGVar8 != (Gizmo *)0x0) {
        pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
        start.y = fVar6;
        start.x = fVar5;
        zPos_00.y = fVar30;
        zPos_00.x = fVar29;
        zPos_00.z = fVar7;
        pVVar10 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                            ((Vector3 *)&stack0xffffffe8,start,VVar4,zPos_00,pCVar9,
                             (MethodInfo *)0x0);
        fVar6 = pVVar10->y;
        fVar5 = pVVar10->z;
        (this->fields)._scaleAxisRight.x = pVVar10->x;
        (this->fields)._scaleAxisRight.y = fVar6;
        (this->fields)._scaleAxisRight.z = fVar5;
        pGVar3 = (this->fields)._transform;
        if (pGVar3 != (GizmoTransform *)0x0) {
          fVar5 = (pGVar3->fields)._position2D.x;
          fVar6 = (pGVar3->fields)._position2D.y;
          VVar4 = GizmoPlaneSlider2D_GetRealExtentPoint
                             (this,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0);
          fVar32 = (this->fields)._scaleDragOrigin.x;
          fVar33 = (this->fields)._scaleDragOrigin.y;
          fVar7 = (this->fields)._scaleDragOrigin.z;
          pGVar8 = (this->fields)._._gizmo;
          if (pGVar8 != (Gizmo *)0x0) {
            pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
            start_00.y = fVar6;
            start_00.x = fVar5;
            zPos_01.y = fVar33;
            zPos_01.x = fVar32;
            zPos_01.z = fVar7;
            pVVar34 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                                ((Vector3 *)&stack0xffffffe8,start_00,VVar4,zPos_01,pCVar9,
                                 (MethodInfo *)0x0);
            pVVar10 = &(this->fields)._scaleAxisUp;
            fVar6 = pVVar34->y;
            fVar5 = pVVar34->z;
            pVVar10->x = pVVar34->x;
            pVVar10->y = fVar6;
            (this->fields)._scaleAxisUp.z = fVar5;
            puVar35 = (undefined8 *)
                      func_?(&stack0xffffffe8,&(this->fields)._scaleAxisRight);
            handleId = *(int32_t *)(puVar35 + 1);
            uVar11 = (undefined4)*puVar35;
            gizmo = (Gizmo *)((ulonglong)*puVar35 >> 0x20);
            puVar35 = (undefined8 *)func_?(&stack0xffffffe8,pVVar10,0);
            uVar36 = (this->fields)._scaleDragAxisIndexRight;
            uVar37 = (this->fields)._scaleDragAxisIndexUp;
            stack0xfffffff4 = uVar37;
            iVar38 = uVar36;
            pGVar16 = &this->fields;
            uVar39 = (this->fields)._scaleDragOrigin.x;
            uVar40 = (this->fields)._scaleDragOrigin.y;
            pGVar17 = (this->fields)._sharedSettings;
            if ((pGVar17 != (GizmoPlaneSlider2DSettings *)0x0) ||
               (pGVar17 = (this->fields)._settings, pGVar17 != (GizmoPlaneSlider2DSettings *)0x0)) {
              this_00 = (this->fields)._scaleDrag;
              if (this_00 != (GizmoDblAxisScaleDrag3D *)0x0) {
                this = (GizmoPlaneSlider2D *)uVar11;
                fVar18 = (pGVar16->_scaleDragOrigin).z;
                method = (MethodInfo *)(int)*puVar35;
                stack0x00000014 = (float)(int)((ulonglong)*puVar35 >> 0x20);
                stack0x00000018 = (float)*(undefined4 *)(puVar35 + 1);
                stack0x0000001c = (pGVar17->fields)._proportionalScaleSnapStep;
                fVar41 = (float)uVar39;
                auVar42 = CONCAT48(fVar41,uVar43);
                fVar44 = (float)uVar40;
                workData_00._0_16_ = CONCAT412(fVar44,auVar42);
                workData_00 = (GizmoDblAxisScaleDrag3D_WorkData)
                              CONCAT3216(workData_00._0_32_,workData_00._0_16_);
                GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_SetWorkData
                          (this_00,workData_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
  return;
}


/* Void OnGizmoHandleDragUpdate(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnGizmoHandleDragUpdate
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
          SparselyPopulatedArrayFragment_1_System_Object__get_Length
                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
  if ((handleId == iVar1) && ((this->fields)._dragChannel == 2)) {
    pGVar2 = (this->fields)._rotationDrag;
    if ((pGVar2 == (GizmoSglAxisRotationDrag3D *)0x0) ||
       (this_00 = (this->fields)._transform, this_00 == (GizmoTransform *)0x0)) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GizmoTransform::GizmoTransform_Rotate2D
              (this_00,(pGVar2->fields)._relativeRotation,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnGizmoPostEnabled
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pIVar2 = (this->fields)._controllers;
  if (((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._planeType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]);
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar2 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
         (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._planeType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]);
          pGVar1 = (this->fields)._sharedLookAndFeel;
          pIVar2 = (this->fields)._controllers;
          if (((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
              (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)
              ) && (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
            uVar3 = (pGVar1->fields)._planeType;
            if (pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnGizmoPreUpdateBegin
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if (((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0))
  {
    uVar3 = (pGVar1->fields)._planeType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]);
      pGVar4 = (this->fields)._sharedSettings;
      this_00 = (this->fields)._offsetDrag;
      if (((pGVar4 != (GizmoPlaneSlider2DSettings *)0x0) ||
          (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoPlaneSlider2DSettings *)0x0)) &&
         (this_00 != (GizmoDblAxisOffsetDrag3D *)0x0)) {
        GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                  ((GizmoScreenDrag *)this_00,(pGVar4->fields)._offsetSensitivity,(MethodInfo *)0x0)
        ;
        pGVar4 = (this->fields)._sharedSettings;
        this_01 = (this->fields)._rotationDrag;
        if (((pGVar4 != (GizmoPlaneSlider2DSettings *)0x0) ||
            (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoPlaneSlider2DSettings *)0x0)) &&
           (this_01 != (GizmoSglAxisRotationDrag3D *)0x0)) {
          GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                    ((GizmoScreenDrag *)this_01,(pGVar4->fields)._rotationSensitivity,
                     (MethodInfo *)0x0);
          pGVar4 = (this->fields)._sharedSettings;
          this_02 = (this->fields)._scaleDrag;
          if (((pGVar4 != (GizmoPlaneSlider2DSettings *)0x0) ||
              (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoPlaneSlider2DSettings *)0x0)) &&
             (this_02 != (GizmoDblAxisScaleDrag3D *)0x0)) {
            GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                      ((GizmoScreenDrag *)this_02,(pGVar4->fields)._scaleSensitivity,
                       (MethodInfo *)0x0);
            pIVar2 = (this->fields)._controllers;
            if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
              if (pIVar2->max_length <= uVar3) goto code_?;
              if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
                func_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]
                               );
                pIVar2 = (this->fields)._controllers;
                if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
                  if (pIVar2->max_length <= uVar3) goto code_?;
                  if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
                    func_?(2,TypeInfo__RTG__IGizmoPlaneSlider2DController,
                                    pIVar2->vector[uVar3]);
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
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnHoverableStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnHoverableStateChanged
               (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set2DShapeHoverable
              (pGVar1,(this->fields)._quadIndex,(this->fields)._._isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._handle;
    if (pGVar1 != (GizmoHandle *)0x0) {
      GizmoHandle::GizmoHandle_Set2DShapeHoverable
                (pGVar1,(this->fields)._circleIndex,(this->fields)._._isHoverable,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnTransformChanged
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IGizmoPlaneSlider2DController *)&TypeInfo__RTG__IGizmoPlaneSlider2DController;
    func_?();
    cRam_? = '\x01';
  }
  if ((changeData.TRSDimension != 1) && (changeData.ChangeReason != 1)) {
    return;
  }
  pGVar2 = (this->fields)._sharedLookAndFeel;
  pIVar3 = (this->fields)._controllers;
  if (((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
      (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar3 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
    uVar4 = (pGVar2->fields)._planeType;
    if (pIVar3->max_length <= uVar4) {
      pIStack_1 = (IGizmoPlaneSlider2DController *)0x0;
      pIStack_5 = (IGizmoPlaneSlider2DController__Class *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIStack_1 = pIVar3->vector[uVar4];
    if (pIStack_1 != (IGizmoPlaneSlider2DController *)0x0) {
      pIStack_5 = TypeInfo__RTG__IGizmoPlaneSlider2DController;
      puStack_7 = (undefined *)0x1;
      func_?();
      return;
    }
  }
  pIStack_1 = (IGizmoPlaneSlider2DController *)&stack0xfffffffc;
  uVar8 = func_?(&puStack_7);
  func_?(uVar8);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnVisibilityStateChanged
               (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pIVar2 = (this->fields)._controllers;
  if (((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._planeType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]);
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar2 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
         (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._planeType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]);
          pGVar1 = (this->fields)._sharedLookAndFeel;
          pIVar2 = (this->fields)._controllers;
          if (((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
              (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)
              ) && (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
            uVar3 = (pGVar1->fields)._planeType;
            if (pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_RemoveTargetTransform
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_00 = (this->fields)._offsetDrag;
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

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_RemoveTargetTransform_1
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,
               GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    this_00 = (GizmoDblAxisScaleDrag3D *)(this->fields)._offsetDrag;
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

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_Render
               (GizmoPlaneSlider2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    cRam_? = '\x01';
  }
  if (((this->fields)._._isVisible == 0) && ((this->fields)._isBorderVisible == 0)) {
    return;
  }
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  cVar2 = (*(code *)(pGVar1->klass->vtable).get_IsActive_1.method)
                    (pGVar1,(pGVar1->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar2 != '\0') {
    pGVar3 = (this->fields)._sharedLookAndFeel;
    pGVar4 = pGVar3;
    if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
    goto code_?;
    if ((pGVar4->fields)._isRotationArcVisible != 0) {
      pGVar4 = pGVar3;
      if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
         (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
      goto code_?;
      if ((pGVar4->fields)._planeType != 1) {
        if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
           (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
        goto code_?;
        if ((pGVar3->fields)._planeType != 2) goto code_?;
      }
      pGVar5 = (this->fields)._._gizmo;
      if (pGVar5 == (Gizmo *)0x0) goto code_?;
      y = Gizmo::Gizmo_get_FocusCamera(pGVar5,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)camera,(Object_1 *)y,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        pGVar1 = (this->fields)._rotationDrag;
        if ((pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) ||
           (pGVar7 = (this->fields)._rotationArc, pGVar7 == (GizmoRotationArc2D *)0x0))
        goto code_?;
        GizmoRotationArc2D::GizmoRotationArc2D_set_RotationAngle
                  (pGVar7,(pGVar1->fields)._totalRotation,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._sharedLookAndFeel;
        pGVar7 = (this->fields)._rotationArc;
        if (((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
            (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
           || (pGVar7 == (GizmoRotationArc2D *)0x0)) goto code_?;
        GizmoRotationArc2D::GizmoRotationArc2D_Render
                  (pGVar7,(pGVar3->fields)._rotationArcLookAndFeel,camera,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  if ((this->fields)._._isVisible != 0) {
    pGVar3 = (this->fields)._sharedLookAndFeel;
    pGVar4 = pGVar3;
    if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
    goto code_?;
    if ((pGVar4->fields)._fillMode != 0) {
      pGVar4 = pGVar3;
      if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
         (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
      goto code_?;
      if ((pGVar4->fields)._fillMode != 2) goto code_?;
    }
    if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
    goto code_?;
    pSStack_8 = (Singleton_1_GizmoSolidMaterial___Class *)(pGVar3->fields)._color.r;
    fStack_9 = (pGVar3->fields)._color.g;
    fStack_10 = (pGVar3->fields)._color.b;
    fStack_11 = (pGVar3->fields)._color.a;
    pGVar5 = (this->fields)._._gizmo;
    if (pGVar5 == (Gizmo *)0x0) goto code_?;
    iVar12 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            PointerCaptureEventBase`1[System::Object]::
            PointerCaptureEventBase_1_System_Object__get_pointerId
                      ((PointerCaptureEventBase_1_System_Object_ *)pGVar5,(MethodInfo *)0x0);
    iVar13 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
            SparselyPopulatedArrayFragment_1_System_Object__get_Length
                      ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
    if (iVar12 == iVar13) {
      pGVar3 = (this->fields)._sharedLookAndFeel;
      if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
         (pGVar3 = (this->fields)._lookAndFeel, pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
      goto code_?;
      pSStack_8 = (Singleton_1_GizmoSolidMaterial___Class *)(pGVar3->fields)._hoveredColor.r;
      fStack_9 = (pGVar3->fields)._hoveredColor.g;
      fStack_10 = (pGVar3->fields)._hoveredColor.b;
      fStack_11 = (pGVar3->fields)._hoveredColor.a;
    }
    if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      pSStack_8 = TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>;
      func_?();
    }
    this_04 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_04 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_04,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_04,0,(MethodInfo *)0x0);
    color.g = fStack_9;
    color.r = (float)pSStack_8;
    color.b = fStack_10;
    color.a = fStack_11;
    GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_04,color,(MethodInfo *)0x0);
    this_05 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_04,(MethodInfo *)0x0);
    if (this_05 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(this_05,0,(MethodInfo *)0x0)
    ;
    this_00 = (this->fields)._._handle;
    if (this_00 == (GizmoHandle *)0x0) goto code_?;
    GizmoHandle::GizmoHandle_Render2DSolid(this_00,camera,(MethodInfo *)0x0);
  }
code_?:
  if ((this->fields)._isBorderVisible == 0) {
    return;
  }
  pGVar3 = (this->fields)._sharedLookAndFeel;
  pGVar4 = pGVar3;
  if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
     (pGVar4 = (this->fields)._lookAndFeel, pGVar4 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
    if ((pGVar4->fields)._fillMode != 1) {
      pGVar4 = pGVar3;
      if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
         (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoPlaneSlider2DLookAndFeel *)0x0))
      goto code_?;
      if ((pGVar4->fields)._fillMode != 2) {
        return;
      }
    }
    pGVar4 = pGVar3;
    if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
       (pGVar4 = (this->fields)._lookAndFeel, pGVar4 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
      if ((pGVar4->fields)._planeType == 0) {
        this_03 = (this->fields)._quadBorder;
        if (this_03 != (GizmoQuad2DBorder *)0x0) {
          GizmoQuad2DBorder::GizmoQuad2DBorder_Render(this_03,camera,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pGVar4 = pGVar3;
        if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
           (pGVar4 = (this->fields)._lookAndFeel, pGVar4 != (GizmoPlaneSlider2DLookAndFeel *)0x0))
        {
          if ((pGVar4->fields)._planeType == 1) {
            this_02 = (this->fields)._circleBorder;
            if (this_02 != (GizmoCircle2DBorder *)0x0) {
              GizmoCircle2DBorder::GizmoCircle2DBorder_Render(this_02,camera,(MethodInfo *)0x0);
              return;
            }
          }
          else if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
                  (pGVar3 = (this->fields)._lookAndFeel,
                  pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
            if ((pGVar3->fields)._planeType == 2) {
              this_01 = (this->fields)._polygonBorder;
              if (this_01 == (GizmoPolygon2DBorder *)0x0) goto code_?;
              GizmoPolygon2DBorder::GizmoPolygon2DBorder_Render(this_01,camera,(MethodInfo *)0x0);
            }
            return;
          }
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

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderHoverable
               (GizmoPlaneSlider2D *this,bool isHoverable,MethodInfo *method)

{
  this_00 = (this->fields)._quadBorder;
  (this->fields)._isBorderHoverable = isHoverable;
  if (this_00 != (GizmoQuad2DBorder *)0x0) {
    GizmoQuad2DBorder::GizmoQuad2DBorder_SetHoverable(this_00,isHoverable,(MethodInfo *)0x0);
    this_01 = (this->fields)._circleBorder;
    if (this_01 != (GizmoCircle2DBorder *)0x0) {
      GizmoQuad2DBorder::GizmoQuad2DBorder_SetHoverable
                ((GizmoQuad2DBorder *)this_01,isHoverable,(MethodInfo *)0x0);
      this_02 = (this->fields)._polygonBorder;
      if (this_02 != (GizmoPolygon2DBorder *)0x0) {
        GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetHoverable
                  (this_02,isHoverable,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible
               (GizmoPlaneSlider2D *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IGizmoPlaneSlider2DController *)&TypeInfo__RTG__IGizmoPlaneSlider2DController;
    func_?();
    cRam_? = '\x01';
  }
  if (isVisible == (this->fields)._isBorderVisible) {
    return;
  }
  pIVar2 = (this->fields)._controllers;
  (this->fields)._isBorderVisible = isVisible;
  pGVar3 = (this->fields)._sharedLookAndFeel;
  if (((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
      (pGVar3 = (this->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
    uVar4 = (pGVar3->fields)._planeType;
    if (pIVar2->max_length <= uVar4) {
      pIStack_1 = (IGizmoPlaneSlider2DController *)0x0;
      pIStack_5 = (IGizmoPlaneSlider2DController__Class *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIStack_1 = pIVar2->vector[uVar4];
    if (pIStack_1 != (IGizmoPlaneSlider2DController *)0x0) {
      pIStack_5 = TypeInfo__RTG__IGizmoPlaneSlider2DController;
      puStack_7 = (undefined *)0x0;
      func_?();
      return;
    }
  }
  pIStack_1 = (IGizmoPlaneSlider2DController *)&stack0xfffffffc;
  uVar8 = func_?(&puStack_7);
  func_?(uVar8);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetDragChannel
               (GizmoPlaneSlider2D *this,GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  (this->fields)._dragChannel = dragChannel;
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._offsetDrag;
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


/* Void SetPolyCwPoints(List`1[UnityEngine.Vector2], Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetPolyCwPoints
               (GizmoPlaneSlider2D *this,List_1_UnityEngine_Vector2_ *cwPoints,bool isClosed,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if ((pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
     (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
    if ((pGVar1->fields)._planeType != 2) {
      return;
    }
    this_00 = (this->fields)._polygon;
    if (this_00 != (PolygonShape2D *)0x0) {
      PolygonShape2D::PolygonShape2D_SetClockwisePoints(this_00,cwPoints,isClosed,(MethodInfo *)0x0)
      ;
      pIVar2 = (this->fields)._controllers;
      if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
        if (pIVar2->max_length < 3) goto code_?;
        if (pIVar2->vector[2] != (IGizmoPlaneSlider2DController *)0x0) {
          func_?(1);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetSnapEnabled
               (GizmoPlaneSlider2D *this,bool isEnabled,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._offsetDrag;
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


/* GizmoPlaneSlider2D(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CircleShape2D);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoCircle2DBorder);
    func_?(&TypeInfo__RTG__GizmoCirclePlaneSlider2DController);
    func_?(&TypeInfo__RTG__GizmoDblAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__GizmoDblAxisScaleDrag3D);
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&TypeRef__RTG__GizmoPlane2DType);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DControllerData);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DSettings);
    func_?(&
                    MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                   );
    func_?(&MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPostEnabled_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&
                    MethodInfo__RTG__GizmoPlaneSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    func_?(&TypeInfo__RTG__GizmoPolygon2DBorder);
    func_?(&TypeInfo__RTG__GizmoPolygonPlaneSlider2DController);
    func_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    func_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    func_?(&TypeInfo__RTG__GizmoPreDragUpdateHandler);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoQuad2DBorder);
    func_?(&TypeInfo__RTG__GizmoQuadPlaneSlider2DController);
    func_?(&TypeInfo__RTG__GizmoRotationArc2D);
    func_?(&TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
    func_?(&TypeInfo__RTG__GizmoTransform);
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    func_?(&TypeInfo__RTG__PolygonShape2D);
    func_?(&TypeInfo__RTG__QuadShape2D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pQVar1 = (QuadShape2D *)func_?(TypeInfo__RTG__QuadShape2D);
  QuadShape2D::QuadShape2D__ctor(pQVar1,(MethodInfo *)0x0);
  ppQVar2 = &(this->fields)._quad;
  *ppQVar2 = pQVar1;
  func_?(ppQVar2,pQVar1);
  this_00 = (CircleShape2D *)func_?(TypeInfo__RTG__CircleShape2D);
  CircleShape2D::CircleShape2D__ctor(this_00,(MethodInfo *)0x0);
  ppCVar3 = &(this->fields)._circle;
  *ppCVar3 = this_00;
  func_?(ppCVar3,this_00);
  pPVar4 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar4,(MethodInfo *)0x0);
  ppPVar5 = &(this->fields)._polygon;
  *ppPVar5 = pPVar4;
  func_?(ppPVar5,pPVar4);
  (this->fields)._isBorderVisible = 1;
  (this->fields)._isBorderHoverable = 1;
  pGVar6 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar6,(MethodInfo *)0x0);
  (this->fields)._transform = pGVar6;
  func_?();
  (this->fields)._dragChannel = 1;
  pGVar7 = (GizmoSglAxisRotationDrag3D *)func_?();
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar7,(MethodInfo *)0x0);
  ppGVar8 = &(this->fields)._offsetDrag;
  *ppGVar8 = (GizmoDblAxisOffsetDrag3D *)pGVar7;
  func_?(ppGVar8,pGVar7);
  pGVar7 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisRotationDrag3D)
  ;
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar7,(MethodInfo *)0x0);
  ppGVar9 = &(this->fields)._rotationDrag;
  *ppGVar9 = pGVar7;
  func_?(ppGVar9,pGVar7);
  this_01 = (GizmoRotationArc2D *)func_?(TypeInfo__RTG__GizmoRotationArc2D);
  GizmoRotationArc2D::GizmoRotationArc2D__ctor(this_01,(MethodInfo *)0x0);
  handleId_00 = &(this->fields)._rotationArc;
  *handleId_00 = this_01;
  func_?();
  gizmo_00 = TypeInfo__RTG__GizmoDblAxisScaleDrag3D;
  this_02 = (GizmoDblAxisScaleDrag3D *)func_?();
  GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._scaleDrag = this_02;
  func_?();
  (this->fields)._scaleDragAxisIndexUp = 1;
  method_02 = TypeInfo__RTG__GizmoPlaneSlider2DControllerData;
  value = (GizmoPlaneSlider2DControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
  (this->fields)._controllerData = value;
  func_?();
  handle = TypeRef__RTG__GizmoPlane2DType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_03 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_03 == (Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    mscorlib.dll::System::Array::Array_get_Length(this_03,(MethodInfo *)0x0);
    pIVar10 = (IGizmoPlaneSlider2DController__Array *)func_?();
    (this->fields)._controllers = pIVar10;
    func_?();
    this_04 = (GizmoPlaneSlider2DSettings *)func_?();
    GizmoPlaneSlider2DSettings::GizmoPlaneSlider2DSettings__ctor(this_04,(MethodInfo *)0x0);
    (this->fields)._settings = this_04;
    func_?();
    value_00 = (GizmoPlaneSlider2DLookAndFeel *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    (value_00->fields)._fillMode = 2;
    (value_00->fields)._scale = 1.0;
    (value_00->fields)._quadWidth = 25.0;
    (value_00->fields)._quadHeight = 25.0;
    (value_00->fields)._circleRadius = 12.0;
    (value_00->fields)._isRotationArcVisible = 1;
    this_05 = (GizmoRotationArc3DLookAndFeel *)func_?();
    GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_05,(MethodInfo *)0x0);
    method_00 = &(value_00->fields)._rotationArcLookAndFeel;
    *method_00 = (GizmoRotationArc2DLookAndFeel *)this_05;
    func_?();
    fVar11 = _UNK_?;
    fVar12 = _UNK_?;
    fVar13 = _UNK_?;
    (value_00->fields)._color.r = _UNK_?;
    (value_00->fields)._color.g = fVar13;
    (value_00->fields)._color.b = fVar12;
    (value_00->fields)._color.a = fVar11;
    pCVar14 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar13 = pCVar14->g;
    fVar12 = pCVar14->b;
    fVar11 = pCVar14->a;
    (value_00->fields)._hoveredColor.r = pCVar14->r;
    (value_00->fields)._hoveredColor.g = fVar13;
    (value_00->fields)._hoveredColor.b = fVar12;
    (value_00->fields)._hoveredColor.a = fVar11;
    fVar11 = _UNK_?;
    fVar12 = _UNK_?;
    fVar13 = _UNK_?;
    (value_00->fields)._borderColor.r = _UNK_?;
    (value_00->fields)._borderColor.g = fVar13;
    (value_00->fields)._borderColor.b = fVar12;
    (value_00->fields)._borderColor.a = fVar11;
    pCVar14 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar13 = pCVar14->r;
    fVar12 = pCVar14->g;
    fVar11 = pCVar14->b;
    fVar15 = pCVar14->a;
    (value_00->fields)._borderPolyThickness = 8.0;
    (value_00->fields)._hoveredBorderColor.r = fVar13;
    (value_00->fields)._hoveredBorderColor.g = fVar12;
    (value_00->fields)._hoveredBorderColor.b = fVar11;
    (value_00->fields)._hoveredBorderColor.a = fVar15;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._lookAndFeel = value_00;
    func_?();
    GizmoSlider::GizmoSlider__ctor
              ((GizmoSlider *)this,(Gizmo *)gizmo_00,(int32_t)handleId_00,(MethodInfo *)0x0);
    pGVar16 = (this->fields)._._handle;
    if (pGVar16 == (GizmoHandle *)0x0) goto code_?;
    iVar17 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar16,(Shape2D *)(this->fields)._quad,(MethodInfo *)0x0);
    (this->fields)._quadIndex = iVar17;
    pGVar16 = (this->fields)._._handle;
    if (pGVar16 == (GizmoHandle *)0x0) goto code_?;
    iVar17 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar16,(Shape2D *)(this->fields)._circle,(MethodInfo *)0x0);
    (this->fields)._circleIndex = iVar17;
    pGVar16 = (this->fields)._._handle;
    if (pGVar16 == (GizmoHandle *)0x0) goto code_?;
    iVar17 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar16,(Shape2D *)(this->fields)._polygon,(MethodInfo *)0x0);
    pGVar16 = (this->fields)._._handle;
    pQVar1 = (this->fields)._quad;
    (this->fields)._polygonIndex = iVar17;
    this_06 = (GizmoQuad2DBorder *)func_?();
    GizmoQuad2DBorder::GizmoQuad2DBorder__ctor
              (this_06,(GizmoPlaneSlider2D *)this_02,pGVar16,pQVar1,(MethodInfo *)0x0);
    (this_02->fields)._._._totalDragScale.y = (float)this_06;
    func_?();
    pGVar16 = (GizmoHandle *)(this_02->fields)._._._targetTransforms;
    pOVar18 = (Object__Class *)value->klass;
    this_07 = (GizmoCircle2DBorder *)func_?();
    GizmoCircle2DBorder::GizmoCircle2DBorder__ctor
              (this_07,(GizmoPlaneSlider2D *)this_02,pGVar16,(CircleShape2D *)pOVar18,
               (MethodInfo *)0x0);
    (this_02->fields)._._._totalDragScale.z = (float)this_07;
    func_?();
    pGVar16 = (GizmoHandle *)(this_02->fields)._._._targetTransforms;
    pPVar4 = (PolygonShape2D *)(this_02->fields)._._._totalDragScale.x;
    this_08 = (GizmoPolygon2DBorder *)func_?();
    GizmoPolygon2DBorder::GizmoPolygon2DBorder__ctor
              (this_08,(GizmoPlaneSlider2D *)this_02,pGVar16,pPVar4,(MethodInfo *)0x0);
    pVVar19 = &(this_02->fields)._._._relativeDragOffset;
    pVVar19->x = (float)this_08;
    func_?();
    fVar13 = (this_02->fields)._workData.Axis1.z;
    pfVar20 = &(this_02->fields)._workData.Axis1.z;
    if (fVar13 == 0.0) goto code_?;
    *(float *)((int)fVar13 + 8) = (this_02->fields)._._._totalDragOffset.x;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(GizmoDblAxisScaleDrag3D **)((int)*pfVar20 + 0xc) = this_02;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(List_1_RTG_GizmoTransform_ **)((int)*pfVar20 + 0x10) = (this_02->fields)._._._targetTransforms;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x14) = (this_02->fields)._._._totalDragScale.y;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x20) = (this_02->fields)._._._totalDragRotation.z;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x2c) = (this_02->fields)._._._totalDragOffset.z;
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x18) = (this_02->fields)._._._totalDragScale.z;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x24) = (this_02->fields)._._._totalDragRotation.w;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x30) = (this_02->fields)._._._totalDragRotation.x;
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x1c) = pVVar19->x;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x28) = (this_02->fields)._._._totalDragScale.x;
    func_?();
    if (*pfVar20 == 0.0) goto code_?;
    *(float *)((int)*pfVar20 + 0x34) = (this_02->fields)._._._totalDragRotation.y;
    fVar13 = (this_02->fields)._workData.SnapStep;
    pMVar21 = (MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle *)*pfVar20;
    pMVar22 = (MonoBtlsX509VerifyParam *)func_?();
    System.dll::Mono::Btls::MonoBtlsX509VerifyParam::MonoBtlsX509VerifyParam__ctor
              (pMVar22,pMVar21,(MethodInfo *)0x0);
    if (fVar13 == 0.0) goto code_?;
    if ((pMVar22 != (MonoBtlsX509VerifyParam *)0x0) && (iVar23 = func_?(), iVar23 == 0))
    goto code_?;
    if (*(int *)((int)fVar13 + 0xc) == 0) goto code_?;
    *(MonoBtlsX509VerifyParam **)((int)fVar13 + 0x10) = pMVar22;
    func_?();
    fVar13 = (this_02->fields)._workData.SnapStep;
    pOVar18 = (Object__Class *)*pfVar20;
    method_01 = TypeInfo__RTG__GizmoCirclePlaneSlider2DController;
    value_01 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    value_01[1].klass = pOVar18;
    func_?();
    if (fVar13 == 0.0) goto code_?;
    iVar23 = func_?();
    if (iVar23 == 0) goto code_?;
    if (*(uint *)((int)fVar13 + 0xc) < 2) goto code_?;
    *(Object **)((int)fVar13 + 0x14) = value_01;
    func_?();
    fVar13 = (this_02->fields)._workData.SnapStep;
    pMVar21 = (MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle *)*pfVar20;
    pMVar22 = (MonoBtlsX509VerifyParam *)func_?();
    System.dll::Mono::Btls::MonoBtlsX509VerifyParam::MonoBtlsX509VerifyParam__ctor
              (pMVar22,pMVar21,(MethodInfo *)0x0);
    if (fVar13 == 0.0) goto code_?;
    if ((pMVar22 == (MonoBtlsX509VerifyParam *)0x0) || (iVar23 = func_?(), iVar23 != 0)) {
      if (*(uint *)((int)fVar13 + 0xc) < 3) goto code_?;
      *(MonoBtlsX509VerifyParam **)((int)fVar13 + 0x18) = pMVar22;
      func_?();
      pGVar6 = (GizmoTransform *)(this_02->fields)._._._relativeDragOffset.z;
      value_02 = (GizmoEntityTransformChangedHandler *)func_?();
      Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
      SerializationCallback__ctor
                ((SerializationCallback *)value_02,(Object *)this_02,
                 MethodInfo__RTG__GizmoPlaneSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 ,(MethodInfo *)0x0);
      if (pGVar6 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_add_Changed(pGVar6,value_02,(MethodInfo *)0x0);
        pGVar24 = (Gizmo *)(this_02->fields)._._._totalDragOffset.x;
        value_03 = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_03,(Object *)this_02,
                   MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (pGVar24 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(pGVar24,value_03,(MethodInfo *)0x0);
          pGVar24 = (Gizmo *)(this_02->fields)._._._totalDragOffset.x;
          value_04 = (GizmoPreDragBeginAttemptHandler *)func_?();
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    ((EventHandler_1_Object_ *)value_04,(Object *)this_02,
                     MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                     ,(MethodInfo *)0x0);
          if (pGVar24 != (Gizmo *)0x0) {
            Gizmo::Gizmo_add_PreDragBeginAttempt(pGVar24,value_04,(MethodInfo *)0x0);
            pGVar24 = (Gizmo *)(this_02->fields)._._._totalDragOffset.x;
            value_05 = (GizmoPreDragUpdateHandler *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      ((EventHandler_1_Object_ *)value_05,(Object *)this_02,
                       MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_
                       ,(MethodInfo *)0x0);
            if (pGVar24 != (Gizmo *)0x0) {
              Gizmo::Gizmo_add_PreDragUpdate(pGVar24,value_05,(MethodInfo *)0x0);
              pGVar24 = (Gizmo *)(this_02->fields)._._._totalDragOffset.x;
              value_06 = (GizmoPostEnabledHandler *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_06,
                         (Object *)this_02,
                         MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPostEnabled_RTG__Gizmo_,
                         (MethodInfo *)0x0);
              if (pGVar24 != (Gizmo *)0x0) {
                Gizmo::Gizmo_add_PostEnabled(pGVar24,value_06,(MethodInfo *)0x0);
                pGVar25 = (GizmoDragSession *)(this_02->fields)._._._relativeDragRotation.z;
                if (pGVar25 != (GizmoDragSession *)0x0) {
                  pGVar6 = (GizmoTransform *)(this_02->fields)._._._relativeDragOffset.z;
                  GizmoDragSession::GizmoDragSession_AddTargetTransform
                            (pGVar25,pGVar6,(MethodInfo *)0x0);
                  pGVar25 = (GizmoDragSession *)(this_02->fields)._._._relativeDragScale.z;
                  if (pGVar25 != (GizmoDragSession *)0x0) {
                    GizmoDragSession::GizmoDragSession_AddTargetTransform
                              (pGVar25,pGVar6,(MethodInfo *)0x0);
                    pGVar25 = (GizmoDragSession *)(this_02->fields)._._sensitivity;
                    if (pGVar25 != (GizmoDragSession *)0x0) {
                      GizmoDragSession::GizmoDragSession_AddTargetTransform
                                (pGVar25,pGVar6,(MethodInfo *)0x0);
                      fVar13 = (this_02->fields)._._._totalDragOffset.x;
                      if ((fVar13 != 0.0) &&
                         (pGVar25 = (GizmoDragSession *)
                                    (this_02->fields)._._._relativeDragRotation.z,
                         pGVar25 != (GizmoDragSession *)0x0)) {
                        pGVar6 = *(GizmoTransform **)((int)fVar13 + 0xf8);
                        GizmoDragSession::GizmoDragSession_AddTargetTransform
                                  (pGVar25,pGVar6,(MethodInfo *)0x0);
                        pGVar25 = (GizmoDragSession *)(this_02->fields)._._._relativeDragScale.z;
                        if (pGVar25 != (GizmoDragSession *)0x0) {
                          GizmoDragSession::GizmoDragSession_AddTargetTransform
                                    (pGVar25,pGVar6,(MethodInfo *)0x0);
                          pGVar25 = (GizmoDragSession *)(this_02->fields)._._sensitivity;
                          if (pGVar25 != (GizmoDragSession *)0x0) {
                            GizmoDragSession::GizmoDragSession_AddTargetTransform
                                      (pGVar25,pGVar6,(MethodInfo *)0x0);
                            fVar13 = (this_02->fields)._._._totalDragOffset.x;
                            if ((fVar13 != 0.0) &&
                               (pGVar6 = (GizmoTransform *)
                                          (this_02->fields)._._._relativeDragOffset.z,
                               pGVar6 != (GizmoTransform *)0x0)) {
                              GizmoTransform::GizmoTransform_SetParent
                                        (pGVar6,*(GizmoTransform **)((int)fVar13 + 0xf8),
                                         (MethodInfo *)0x0);
                              fVar13 = (this_02->fields)._._._relativeDragRotation.z;
                              pfVar20 = &(this_02->fields)._._._relativeDragRotation.y;
                              (this_02->fields)._._._relativeDragRotation.x = 1.4013e-45;
                              *pfVar20 = fVar13;
                              func_?();
                              pLVar26 = (this_02->fields)._._._targetTransforms;
                              if (pLVar26 != (List_1_RTG_GizmoTransform_ *)0x0) {
                                pLVar26[1].fields._syncRoot = (Object *)*pfVar20;
                                func_?();
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
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Boolean get_IsRotating() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_IsRotating
               (GizmoPlaneSlider2D *this,MethodInfo *method)

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

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_IsScaling
               (GizmoPlaneSlider2D *this,MethodInfo *method)

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


/* GizmoPlaneSlider2DLookAndFeel get_LookAndFeel() */

GizmoPlaneSlider2DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel
          (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return pGVar1;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector2 get_PolyCenter() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_PolyCenter
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._polygon;
  if (pPVar1 != (PolygonShape2D *)0x0) {
    pfVar2 = (float *)(*(code *)(pPVar1->klass->vtable).GetEncapsulatingRect.method)
                                (auStack_3,pPVar1,pPVar1->klass[1]._0.image);
    VVar4.y = pfVar2[3] * _UNK_? + pfVar2[1];
    VVar4.x = pfVar2[2] * _UNK_? + *pfVar2;
    return VVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar5)();
  return VVar4;
}


/* Vector2 get_Position() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Position
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    return (pGVar1->fields)._position2D;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Single get_RelativeDragRotation() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_RelativeDragRotation
                (GizmoPlaneSlider2D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_RelativeDragScaleRight
                (GizmoPlaneSlider2D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_RelativeDragScaleUp
                (GizmoPlaneSlider2D *this,MethodInfo *method)

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


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Right
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    VVar1 = GizmoTransform::GizmoTransform_GetAxis2D_1
                      (this_00,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    return VVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  VVar1 = (Vector2)(*pcVar3)();
  return VVar1;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoPlaneSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    fVar3 = (pGVar2->fields)._rotation2D.y;
    fVar4 = (pGVar2->fields)._rotation2D.z;
    fVar5 = (pGVar2->fields)._rotation2D.w;
    __return_storage_ptr__->x = (pGVar2->fields)._rotation2D.x;
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


/* Single get_RotationDegrees() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_RotationDegrees
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    return (pGVar2->fields)._rotation2DDegrees;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector3 get_ScaleDragOrigin() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_ScaleDragOrigin
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._scaleDragOrigin.y;
  fVar2 = (this->fields)._scaleDragOrigin.z;
  __return_storage_ptr__->x = (this->fields)._scaleDragOrigin.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* GizmoPlaneSlider2DSettings get_Settings() */

GizmoPlaneSlider2DSettings *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Settings
          (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    return pGVar1;
  }
  return (this->fields)._settings;
}


/* Single get_TotalDragRotation() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_TotalDragRotation
                (GizmoPlaneSlider2D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_TotalDragScaleRight
                (GizmoPlaneSlider2D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_TotalDragScaleUp
                (GizmoPlaneSlider2D *this,MethodInfo *method)

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


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Up
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    VVar1 = GizmoTransform::GizmoTransform_GetAxis2D_1
                      (this_00,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    return VVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  VVar1 = (Vector2)(*pcVar3)();
  return VVar1;
}


/* Void set_Position(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_Position
               (GizmoPlaneSlider2D *this,Vector2 value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Position2D(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_RotationDegrees
               (GizmoPlaneSlider2D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Rotation2DDegrees(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ScaleDragAxisIndexRight(Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_ScaleDragAxisIndexRight
               (GizmoPlaneSlider2D *this,int32_t value,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_ScaleDragAxisIndexUp
               (GizmoPlaneSlider2D *this,int32_t value,MethodInfo *method)

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


/* Void set_ScaleDragOrigin(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_ScaleDragOrigin
               (GizmoPlaneSlider2D *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._scaleDragOrigin.x = value.x;
  (this->fields)._scaleDragOrigin.y = value.y;
  (this->fields)._scaleDragOrigin.z = value.z;
  return;
}


/* Void set_SharedLookAndFeel(GizmoPlaneSlider2DLookAndFeel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_SharedLookAndFeel
               (GizmoPlaneSlider2D *this,GizmoPlaneSlider2DLookAndFeel *value,MethodInfo *method)

{
  ppGVar1 = &(this->fields)._sharedLookAndFeel;
  *ppGVar1 = value;
  func_?(ppGVar1,value);
  return;
}

