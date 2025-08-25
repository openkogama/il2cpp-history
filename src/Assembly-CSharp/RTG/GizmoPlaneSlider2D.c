
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
  pGVar1 = this;
  pGStack_2 = _UNK_?;
  pGVar3 = (this->fields)._scaleDrag;
  if (pGVar3 != (GizmoDblAxisScaleDrag3D *)0x0) {
    cVar4 = (*(code *)(pGVar3->klass->vtable).get_IsActive_1.method)
                       (pGVar3,(pGVar3->klass->vtable).get_DragChannel_1.methodPtr);
    if (cVar4 == '\0') {
      pGVar5 = (&(this->fields)._lookAndFeel)
                [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
      if (pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        this = _UNK_?;
code_?:
        return ((&(pGVar1->fields)._lookAndFeel)
                [(pGVar1->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->
               fields)._scale * (pGVar5->fields)._circleRadius * (float)this;
      }
    }
    else {
      pGVar3 = (this->fields)._scaleDrag;
      if (pGVar3 != (GizmoDblAxisScaleDrag3D *)0x0) {
        fVar6 = (pGVar3->fields)._totalScale0;
        if ((float)((uint)fVar6 & _UNK_?) <
            (float)((uint)(pGVar3->fields)._totalScale1 & _UNK_?)) {
          fVar6 = (pGVar3->fields)._totalScale1;
        }
        uVar7 = (this->fields)._scaleAxisUp.x;
        uVar8 = (this->fields)._scaleAxisUp.y;
        fVar9 = (this->fields)._scaleAxisUp.z;
        uVar10 = (this->fields)._scaleDragOrigin.x;
        uVar11 = (this->fields)._scaleDragOrigin.y;
        fVar12 = (this->fields)._scaleDragOrigin.z;
        this_00 = (this->fields)._._gizmo;
        VStack_13.x = (float)uVar10;
        VStack_13.y = (float)uVar11;
        if (this_00 != (Gizmo *)0x0) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          start.y = VStack_13.y;
          start.x = VStack_13.x;
          start.z = fVar12;
          end.y = (float)uVar8 * fVar6 + (float)uVar11;
          end.x = (float)uVar7 * fVar6 + (float)uVar10;
          end.z = fVar9 * fVar6 + fVar12;
          VStack_13 = Vector3Ex::Vector3Ex_ConvertDirTo2D(start,end,camera,(MethodInfo *)0x0);
          fVar14 = (float10)func_?(&VStack_13,0);
          VStack_13.y = (float)fVar14;
          pGVar15 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
          if (pGVar15 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            if (fVar6 < _UNK_?) {
              pGStack_2 = _UNK_?;
            }
            pGVar5 = (&(this->fields)._lookAndFeel)
                      [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
            this = (GizmoPlaneSlider2D *)
                   ((VStack_13.y /
                    (((&(this->fields)._lookAndFeel)
                      [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->
                     fields)._scale * (pGVar15->fields)._circleRadius)) * (float)pGStack_2);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  fVar14 = (float10)(*pcVar16)();
  return (float)fVar14;
}


/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                  (GizmoPlaneSlider2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
     (pIVar1 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar2->fields)._planeType;
    if (pIVar1->max_length <= uVar3) goto code_?;
    pIVar4 = pIVar1->vector[uVar3];
    if (pIVar4 != (IGizmoPlaneSlider2DController *)0x0) {
      pIVar5 = pIVar4->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pIVar5->_1).rank;
      uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider2DController) {
            pIVar5 = pIVar4->klass;
            iVar8 = pIVar5->interfaceOffsets[uVar6].offset;
            VVar9 = (Vector2)(*(code *)(&(pIVar5->vtable).GetRealExtentPoint)[iVar8].method)
                                        (pIVar4,extentPt,(&pIVar5[1]._0.image)[iVar8 * 2]);
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
  pGVar1 = this;
  this = _UNK_?;
  pGVar2 = (pGVar1->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                       (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
    if (cVar3 == '\0') {
      pGVar4 = (&(pGVar1->fields)._lookAndFeel)
                [(pGVar1->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
      if (pGVar4 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        this = _UNK_?;
code_?:
        return ((&(pGVar1->fields)._lookAndFeel)
                [(pGVar1->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->
               fields)._scale * (pGVar4->fields)._quadHeight * (float)this;
      }
    }
    else {
      VStack_5.y = (pGVar1->fields)._scaleAxisUp.z;
      uVar6 = (pGVar1->fields)._scaleAxisUp.x;
      uVar7 = (pGVar1->fields)._scaleAxisUp.y;
      pGVar2 = (pGVar1->fields)._scaleDrag;
      VStack_5.x = (float)uVar7;
      if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
        fVar8 = (pGVar2->fields)._totalScale1;
        fVar9 = VStack_5.y * fVar8;
        uVar10 = (pGVar1->fields)._scaleDragOrigin.x;
        uVar11 = (pGVar1->fields)._scaleDragOrigin.y;
        fVar12 = (pGVar1->fields)._scaleDragOrigin.z;
        this_00 = (pGVar1->fields)._._gizmo;
        VStack_5.x = (float)uVar10;
        VStack_5.y = (float)uVar11;
        if (this_00 != (Gizmo *)0x0) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          start.y = VStack_5.y;
          start.x = VStack_5.x;
          start.z = fVar12;
          end.y = (float)uVar7 * fVar8 + (float)uVar11;
          end.x = (float)uVar6 * fVar8 + (float)uVar10;
          end.z = fVar9 + fVar12;
          VStack_5 = Vector3Ex::Vector3Ex_ConvertDirTo2D(start,end,camera,(MethodInfo *)0x0);
          fVar13 = (float10)func_?(&VStack_5,0);
          VStack_5.y = (float)fVar13;
          pGVar14 = (&(pGVar1->fields)._lookAndFeel)
                   [(pGVar1->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
          if (pGVar14 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            pGVar2 = (pGVar1->fields)._scaleDrag;
            if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
              if ((pGVar2->fields)._totalScale1 < _UNK_?) {
                this = _UNK_?;
              }
              pGVar4 = (&(pGVar1->fields)._lookAndFeel)
                        [(pGVar1->fields)._sharedLookAndFeel !=
                         (GizmoPlaneSlider2DLookAndFeel *)0x0];
              this = (GizmoPlaneSlider2D *)
                     ((VStack_5.y /
                      (((&(pGVar1->fields)._lookAndFeel)
                        [(pGVar1->fields)._sharedLookAndFeel !=
                         (GizmoPlaneSlider2DLookAndFeel *)0x0]->fields)._scale *
                       (pGVar14->fields)._quadHeight * _UNK_?)) * (float)this);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  fVar13 = (float10)(*pcVar15)();
  return (float)fVar13;
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
  pGVar1 = this;
  this = _UNK_?;
  pGVar2 = (pGVar1->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                       (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
    if (cVar3 == '\0') {
      pGVar4 = (&(pGVar1->fields)._lookAndFeel)
                [(pGVar1->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
      if (pGVar4 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        this = _UNK_?;
code_?:
        return ((&(pGVar1->fields)._lookAndFeel)
                [(pGVar1->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->
               fields)._scale * (pGVar4->fields)._quadWidth * (float)this;
      }
    }
    else {
      VStack_5.y = (pGVar1->fields)._scaleAxisRight.z;
      uVar6 = (pGVar1->fields)._scaleAxisRight.x;
      uVar7 = (pGVar1->fields)._scaleAxisRight.y;
      pGVar2 = (pGVar1->fields)._scaleDrag;
      VStack_5.x = (float)uVar7;
      if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
        fVar8 = (pGVar2->fields)._totalScale0;
        fVar9 = VStack_5.y * fVar8;
        uVar10 = (pGVar1->fields)._scaleDragOrigin.x;
        uVar11 = (pGVar1->fields)._scaleDragOrigin.y;
        fVar12 = (pGVar1->fields)._scaleDragOrigin.z;
        this_00 = (pGVar1->fields)._._gizmo;
        VStack_5.x = (float)uVar10;
        VStack_5.y = (float)uVar11;
        if (this_00 != (Gizmo *)0x0) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          start.y = VStack_5.y;
          start.x = VStack_5.x;
          start.z = fVar12;
          end.y = (float)uVar7 * fVar8 + (float)uVar11;
          end.x = (float)uVar6 * fVar8 + (float)uVar10;
          end.z = fVar9 + fVar12;
          VStack_5 = Vector3Ex::Vector3Ex_ConvertDirTo2D(start,end,camera,(MethodInfo *)0x0);
          fVar13 = (float10)func_?(&VStack_5,0);
          VStack_5.y = (float)fVar13;
          pGVar14 = (&(pGVar1->fields)._lookAndFeel)
                   [(pGVar1->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
          if (pGVar14 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            pGVar2 = (pGVar1->fields)._scaleDrag;
            if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
              if ((pGVar2->fields)._totalScale0 < _UNK_?) {
                this = _UNK_?;
              }
              pGVar4 = (&(pGVar1->fields)._lookAndFeel)
                        [(pGVar1->fields)._sharedLookAndFeel !=
                         (GizmoPlaneSlider2DLookAndFeel *)0x0];
              this = (GizmoPlaneSlider2D *)
                     ((VStack_5.y /
                      (((&(pGVar1->fields)._lookAndFeel)
                        [(pGVar1->fields)._sharedLookAndFeel !=
                         (GizmoPlaneSlider2DLookAndFeel *)0x0]->fields)._scale *
                       (pGVar14->fields)._quadWidth * _UNK_?)) * (float)this);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  fVar13 = (float10)(*pcVar15)();
  return (float)fVar13;
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
  pGVar1 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
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
  if ((this->fields)._dragChannel == 1) {
    pGVar2 = (this->fields)._transform;
    if (pGVar2 != (GizmoTransform *)0x0) {
      VVar3 = GizmoTransform::GizmoTransform_get_Right2D(pGVar2,(MethodInfo *)0x0);
      fVar4 = (this->fields)._offsetDragOrigin.x;
      fVar5 = (this->fields)._offsetDragOrigin.y;
      fVar6 = (this->fields)._offsetDragOrigin.z;
      pGVar7 = (this->fields)._._gizmo;
      if (pGVar7 != (Gizmo *)0x0) {
        pCVar8 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
        zPos.y = fVar5;
        zPos.x = fVar4;
        zPos.z = fVar6;
        pVVar9 = Vector2Ex::Vector2Ex_ConvertDirTo3D_1
                            ((Vector3 *)&stack0xffffffe8,VVar3,zPos,pCVar8,(MethodInfo *)0x0);
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffe8,*pVVar9,(MethodInfo *)0x0);
        uVar10 = pVVar9->x;
        uVar11 = pVVar9->y;
        gizmo = (Gizmo *)pVVar9->z;
        pGVar2 = (this->fields)._transform;
        if (pGVar2 != (GizmoTransform *)0x0) {
          VVar3 = GizmoTransform::GizmoTransform_get_Up2D(pGVar2,(MethodInfo *)0x0);
          fVar6 = (this->fields)._offsetDragOrigin.x;
          fVar12 = (this->fields)._offsetDragOrigin.y;
          fVar4 = (this->fields)._offsetDragOrigin.z;
          pGVar7 = (this->fields)._._gizmo;
          if (pGVar7 != (Gizmo *)0x0) {
            pCVar8 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
            zPos_02.y = fVar12;
            zPos_02.x = fVar6;
            zPos_02.z = fVar4;
            pVVar9 = Vector2Ex::Vector2Ex_ConvertDirTo3D_1
                                ((Vector3 *)&stack0xffffffe8,VVar3,zPos_02,pCVar8,(MethodInfo *)0x0
                                );
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&stack0xffffffe8,*pVVar9,(MethodInfo *)0x0);
            uVar13 = pVVar9->x;
            uVar14 = pVVar9->y;
            pGVar15 = &this->fields;
            pGVar16 = (&(this->fields)._settings)
                      [(this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0];
            if (pGVar16 != (GizmoPlaneSlider2DSettings *)0x0) {
              pGVar17 = (&(this->fields)._settings)
                        [(this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0];
              if (pGVar17 != (GizmoPlaneSlider2DSettings *)0x0) {
                this_02 = (this->fields)._offsetDrag;
                if (this_02 != (GizmoDblAxisOffsetDrag3D *)0x0) {
                  this = (GizmoPlaneSlider2D *)uVar11;
                  fVar18 = (float)uVar10;
                  handleId = uVar13;
                  method = (MethodInfo *)uVar14;
                  stack0x00000014 = pVVar9->z;
                  stack0x00000018 = (pGVar16->fields)._offsetSnapStepRight;
                  stack0x0000001c = (pGVar17->fields)._offsetSnapStepUp;
                  workData_00.DragOrigin = pGVar15->_offsetDragOrigin;
                  workData_00 = (GizmoDblAxisOffsetDrag3D_WorkData)
                                CONCAT3212(workData_00._0_32_,workData_00.DragOrigin);
                  GizmoDblAxisOffsetDrag3D::GizmoDblAxisOffsetDrag3D_SetWorkData
                            (this_02,workData_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else if ((this->fields)._dragChannel == 2) {
    pGVar7 = (this->fields)._._gizmo;
    uVar19 = 0;
    uVar20 = 0;
    fVar4 = 0.0;
    if (((pGVar7 != (Gizmo *)0x0) &&
        (pCVar8 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0), pCVar8 != (Camera *)0x0))
       && (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pCVar8,(MethodInfo *)0x0), this_03 != (Transform *)0x0)
       ) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffe8,this_03,(MethodInfo *)0x0);
      pCVar8 = (Camera *)pVVar9->x;
      fVar21 = pVVar9->y;
      fVar5 = pVVar9->z;
      pGVar16 = (&(this->fields)._settings)
                [(this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0];
      if (pGVar16 != (GizmoPlaneSlider2DSettings *)0x0) {
        fVar6 = (float)(pGVar16->fields)._rotationSnapMode;
        pGVar16 = (&(this->fields)._settings)
                  [(this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0];
        if (pGVar16 != (GizmoPlaneSlider2DSettings *)0x0) {
          fVar12 = (pGVar16->fields)._rotationSnapStep;
          pGVar22 = (&(this->fields)._lookAndFeel)
                    [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
          if (pGVar22 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            if ((pGVar22->fields)._planeType != 2) {
              pGVar7 = (this->fields)._._gizmo;
              if (pGVar7 == (Gizmo *)0x0) goto code_?;
              pCVar8 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._transform;
              if (pGVar2 == (GizmoTransform *)0x0) goto code_?;
              fVar21 = (pGVar2->fields)._position2D.x;
              pGVar7 = (this->fields)._._gizmo;
              fVar5 = (pGVar2->fields)._position2D.y;
              if (((pGVar7 == (Gizmo *)0x0) ||
                  (pCVar23 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0),
                  pCVar23 == (Camera *)0x0)) ||
                 (fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                                     (pCVar23,(MethodInfo *)0x0), pCVar8 == (Camera *)0x0))
              goto code_?;
              fVar12 = 0.0;
              position_00.y = fVar5;
              position_00.x = fVar21;
              position_00.z = fVar6;
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                                  ((Vector3 *)&stack0xffffffe8,pCVar8,position_00,(MethodInfo *)0x0)
              ;
              uVar24 = pVVar9->x;
              uVar25 = pVVar9->y;
              fVar4 = pVVar9->z;
              uVar19 = uVar24;
              uVar20 = uVar25;
            }
            pGVar22 = (&(this->fields)._lookAndFeel)
                      [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
            if (pGVar22 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              if ((pGVar22->fields)._planeType == 1) {
                pGVar2 = (this->fields)._transform;
                pGVar26 = (this->fields)._rotationArc;
                if (pGVar2 == (GizmoTransform *)0x0) goto code_?;
                fVar27 = (pGVar2->fields)._position2D.x;
                fVar28 = (pGVar2->fields)._position2D.y;
                pGVar7 = (this->fields)._._gizmo;
                if (pGVar7 == (Gizmo *)0x0) goto code_?;
                fVar29 = (pGVar7->fields)._hoverInfo._hoverPoint.y;
                fVar30 = (pGVar7->fields)._hoverInfo._hoverPoint.x;
                fVar31 = GizmoPlaneSlider2D_GetRealCircleRadius(this,(MethodInfo *)0x0);
                if (pGVar26 == (GizmoRotationArc2D *)0x0) goto code_?;
                VVar3.y = fVar28;
                VVar3.x = fVar27;
                arcStart.y = fVar29;
                arcStart.x = fVar30;
                GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
                          (pGVar26,VVar3,arcStart,fVar31,(MethodInfo *)0x0);
                pGVar26 = (this->fields)._rotationArc;
                if (pGVar26 == (GizmoRotationArc2D *)0x0) goto code_?;
                (pGVar26->fields)._type = 0;
              }
              else if (((&(this->fields)._lookAndFeel)
                        [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]
                       ->fields)._planeType == 2) {
                VVar3 = GizmoPlaneSlider2D_get_PolyCenter(this,(MethodInfo *)0x0);
                fVar4 = VVar3.x;
                fVar27 = VVar3.y;
                pGVar7 = (this->fields)._._gizmo;
                if (pGVar7 == (Gizmo *)0x0) goto code_?;
                pCVar23 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
                pGVar7 = (this->fields)._._gizmo;
                if (((pGVar7 == (Gizmo *)0x0) ||
                    (this_04 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0),
                    this_04 == (Camera *)0x0)) ||
                   (fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                             Camera_get_nearClipPlane(this_04,(MethodInfo *)0x0),
                   pCVar23 == (Camera *)0x0)) goto code_?;
                position.y = fVar27;
                position.x = fVar4;
                position.z = fVar28;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                          Camera_ScreenToWorldPoint_1
                                    ((Vector3 *)&stack0xffffffe8,pCVar23,position,(MethodInfo *)0x0)
                ;
                pGVar26 = (this->fields)._rotationArc;
                uVar19 = pVVar9->x;
                uVar20 = pVVar9->y;
                fVar4 = pVVar9->z;
                VVar3 = GizmoPlaneSlider2D_get_PolyCenter(this,(MethodInfo *)0x0);
                pGVar7 = (this->fields)._._gizmo;
                if ((pGVar7 == (Gizmo *)0x0) ||
                   (arcStart_00.x = (pGVar7->fields)._hoverInfo._hoverPoint.x,
                   arcStart_00.y = (pGVar7->fields)._hoverInfo._hoverPoint.y,
                   pGVar26 == (GizmoRotationArc2D *)0x0)) goto code_?;
                GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
                          (pGVar26,VVar3,arcStart_00,1.0,(MethodInfo *)0x0);
                pGVar26 = (this->fields)._rotationArc;
                if (pGVar26 == (GizmoRotationArc2D *)0x0) goto code_?;
                (pGVar26->fields)._type = 1;
                pGVar26 = (this->fields)._rotationArc;
                if (pGVar26 == (GizmoRotationArc2D *)0x0) goto code_?;
                (pGVar26->fields)._projectionPoly = (this->fields)._polygon;
                func_?();
                pGVar26 = (this->fields)._rotationArc;
                if (pGVar26 == (GizmoRotationArc2D *)0x0) goto code_?;
                GizmoRotationArc2D::GizmoRotationArc2D_set_NumProjectedPoints
                          (pGVar26,100,(MethodInfo *)0x0);
              }
              this_01 = (this->fields)._rotationDrag;
              if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
                workData.RotationPlanePos.y = (float)uVar20;
                workData.RotationPlanePos.x = (float)uVar19;
                workData.RotationPlanePos.z = fVar4;
                workData.Axis.x = (float)pCVar8;
                workData.Axis.y = fVar21;
                workData.Axis.z = fVar5;
                workData.SnapMode = (int32_t)fVar6;
                workData.SnapStep = fVar12;
                GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                          (this_01,workData,(MethodInfo *)0x0);
                return;
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
    pGVar2 = (this->fields)._transform;
    if (pGVar2 != (GizmoTransform *)0x0) {
      fVar4 = (pGVar2->fields)._position2D.x;
      fVar5 = (pGVar2->fields)._position2D.y;
      VVar3 = GizmoPlaneSlider2D_GetRealExtentPoint
                         (this,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0);
      fVar27 = (this->fields)._scaleDragOrigin.x;
      fVar28 = (this->fields)._scaleDragOrigin.y;
      fVar6 = (this->fields)._scaleDragOrigin.z;
      pGVar7 = (this->fields)._._gizmo;
      if (pGVar7 != (Gizmo *)0x0) {
        pCVar8 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
        start.y = fVar5;
        start.x = fVar4;
        zPos_00.y = fVar28;
        zPos_00.x = fVar27;
        zPos_00.z = fVar6;
        pVVar9 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                            ((Vector3 *)&stack0xffffffe8,start,VVar3,zPos_00,pCVar8,
                             (MethodInfo *)0x0);
        fVar5 = pVVar9->y;
        fVar4 = pVVar9->z;
        (this->fields)._scaleAxisRight.x = pVVar9->x;
        (this->fields)._scaleAxisRight.y = fVar5;
        (this->fields)._scaleAxisRight.z = fVar4;
        pGVar2 = (this->fields)._transform;
        if (pGVar2 != (GizmoTransform *)0x0) {
          fVar4 = (pGVar2->fields)._position2D.x;
          fVar5 = (pGVar2->fields)._position2D.y;
          VVar3 = GizmoPlaneSlider2D_GetRealExtentPoint
                             (this,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0);
          fVar30 = (this->fields)._scaleDragOrigin.x;
          fVar31 = (this->fields)._scaleDragOrigin.y;
          fVar6 = (this->fields)._scaleDragOrigin.z;
          pGVar7 = (this->fields)._._gizmo;
          if (pGVar7 != (Gizmo *)0x0) {
            pCVar8 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
            start_00.y = fVar5;
            start_00.x = fVar4;
            zPos_01.y = fVar31;
            zPos_01.x = fVar30;
            zPos_01.z = fVar6;
            pVVar9 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                                ((Vector3 *)&stack0xffffffe8,start_00,VVar3,zPos_01,pCVar8,
                                 (MethodInfo *)0x0);
            fVar5 = pVVar9->y;
            fVar4 = pVVar9->z;
            (this->fields)._scaleAxisUp.x = pVVar9->x;
            (this->fields)._scaleAxisUp.y = fVar5;
            (this->fields)._scaleAxisUp.z = fVar4;
            puVar32 = (undefined8 *)
                      func_?(&stack0xffffffe8,&(this->fields)._scaleAxisRight);
            handleId = *(int32_t *)(puVar32 + 1);
            uVar10 = (undefined4)*puVar32;
            gizmo = (Gizmo *)((ulonglong)*puVar32 >> 0x20);
            puVar32 = (undefined8 *)func_?(&stack0xffffffe8,&(this->fields)._scaleAxisUp,0)
            ;
            uVar33 = (this->fields)._scaleDragAxisIndexRight;
            uVar34 = (this->fields)._scaleDragAxisIndexUp;
            stack0xfffffff4 = uVar34;
            iVar35 = uVar33;
            uVar36 = (this->fields)._scaleDragOrigin.x;
            uVar37 = (this->fields)._scaleDragOrigin.y;
            pGVar15 = &this->fields;
            pGVar16 = (&(this->fields)._settings)
                      [(this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0];
            if (pGVar16 != (GizmoPlaneSlider2DSettings *)0x0) {
              this_00 = (this->fields)._scaleDrag;
              if (this_00 != (GizmoDblAxisScaleDrag3D *)0x0) {
                this = (GizmoPlaneSlider2D *)uVar10;
                fVar18 = (pGVar15->_scaleDragOrigin).z;
                method = (MethodInfo *)(int)*puVar32;
                stack0x00000014 = (float)(int)((ulonglong)*puVar32 >> 0x20);
                stack0x00000018 = (float)*(undefined4 *)(puVar32 + 1);
                stack0x0000001c = (pGVar16->fields)._proportionalScaleSnapStep;
                fVar38 = (float)uVar36;
                auVar39 = CONCAT48(fVar38,uVar40);
                fVar41 = (float)uVar37;
                workData_01._0_16_ = CONCAT412(fVar41,auVar39);
                workData_01 = (GizmoDblAxisScaleDrag3D_WorkData)
                              CONCAT3216(workData_00._0_32_,workData_01._0_16_);
                GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_SetWorkData
                          (this_00,workData_01,(MethodInfo *)0x0);
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
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
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
  pIVar1 = (this->fields)._controllers;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
     (pIVar1 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar2->fields)._planeType;
    if (pIVar1->max_length <= uVar3) goto code_?;
    if (pIVar1->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar1->vector[uVar3]);
      pIVar1 = (this->fields)._controllers;
      pGVar2 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
      if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
         (pIVar1 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
        uVar3 = (pGVar2->fields)._planeType;
        if (pIVar1->max_length <= uVar3) goto code_?;
        if (pIVar1->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar1->vector[uVar3]);
          pIVar1 = (this->fields)._controllers;
          pGVar2 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
          if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
             (pIVar1 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
            uVar3 = (pGVar2->fields)._planeType;
            if (pIVar1->max_length <= uVar3) goto code_?;
            if (pIVar1->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar1->vector[uVar3]);
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
  pGVar1 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    pIVar2 = (this->fields)._controllers;
    uVar3 = (pGVar1->fields)._planeType;
    if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
      if (pIVar2->max_length <= uVar3) goto code_?;
      if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar2->vector[uVar3]);
        this_00 = (this->fields)._offsetDrag;
        pGVar4 = (&(this->fields)._settings)
                 [(this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0];
        if ((pGVar4 != (GizmoPlaneSlider2DSettings *)0x0) &&
           (this_00 != (GizmoDblAxisOffsetDrag3D *)0x0)) {
          GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                    ((GizmoScreenDrag *)this_00,(pGVar4->fields)._offsetSensitivity,
                     (MethodInfo *)0x0);
          this_01 = (this->fields)._rotationDrag;
          pGVar4 = (&(this->fields)._settings)
                   [(this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0];
          if ((pGVar4 != (GizmoPlaneSlider2DSettings *)0x0) &&
             (this_01 != (GizmoSglAxisRotationDrag3D *)0x0)) {
            GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                      ((GizmoScreenDrag *)this_01,(pGVar4->fields)._rotationSensitivity,
                       (MethodInfo *)0x0);
            this_02 = (this->fields)._scaleDrag;
            pGVar4 = (&(this->fields)._settings)
                     [(this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0];
            if ((pGVar4 != (GizmoPlaneSlider2DSettings *)0x0) &&
               (this_02 != (GizmoDblAxisScaleDrag3D *)0x0)) {
              GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                        ((GizmoScreenDrag *)this_02,(pGVar4->fields)._scaleSensitivity,
                         (MethodInfo *)0x0);
              pIVar2 = (this->fields)._controllers;
              if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
                if (pIVar2->max_length <= uVar3) goto code_?;
                if (pIVar2->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController,
                                  pIVar2->vector[uVar3]);
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
  pIVar2 = (this->fields)._controllers;
  pGVar3 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
  if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
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
  pIVar1 = (this->fields)._controllers;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
     (pIVar1 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar2->fields)._planeType;
    if (pIVar1->max_length <= uVar3) goto code_?;
    if (pIVar1->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar1->vector[uVar3]);
      pIVar1 = (this->fields)._controllers;
      pGVar2 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
      if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
         (pIVar1 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
        uVar3 = (pGVar2->fields)._planeType;
        if (pIVar1->max_length <= uVar3) goto code_?;
        if (pIVar1->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar1->vector[uVar3]);
          pIVar1 = (this->fields)._controllers;
          pGVar2 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
          if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
             (pIVar1 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
            uVar3 = (pGVar2->fields)._planeType;
            if (pIVar1->max_length <= uVar3) goto code_?;
            if (pIVar1->vector[uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController,pIVar1->vector[uVar3]);
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
  if (((this->fields)._._isVisible != 0) || ((this->fields)._isBorderVisible != 0)) {
    pGVar1 = (this->fields)._rotationDrag;
    if (pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
    cVar2 = (*(code *)(pGVar1->klass->vtable).get_IsActive_1.method)
                      (pGVar1,(pGVar1->klass->vtable).get_DragChannel_1.methodPtr);
    if (cVar2 != '\0') {
      pGVar3 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
      if (pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
      if (((pGVar3->fields)._isRotationArcVisible != 0) &&
         ((((&(this->fields)._lookAndFeel)
            [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->fields).
           _planeType == 1 ||
          (((&(this->fields)._lookAndFeel)
            [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->fields).
           _planeType == 2)))) {
        pGVar4 = (this->fields)._._gizmo;
        if (pGVar4 == (Gizmo *)0x0) goto code_?;
        y = Gizmo::Gizmo_get_FocusCamera(pGVar4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                           ((Object_1 *)camera,(Object_1 *)y,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pGVar1 = (this->fields)._rotationDrag;
          if ((pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) ||
             (pGVar6 = (this->fields)._rotationArc, pGVar6 == (GizmoRotationArc2D *)0x0))
          goto code_?;
          GizmoRotationArc2D::GizmoRotationArc2D_set_RotationAngle
                    (pGVar6,(pGVar1->fields)._totalRotation,(MethodInfo *)0x0);
          pGVar6 = (this->fields)._rotationArc;
          pGVar3 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
          if ((pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) ||
             (pGVar6 == (GizmoRotationArc2D *)0x0)) goto code_?;
          GizmoRotationArc2D::GizmoRotationArc2D_Render
                    (pGVar6,(pGVar3->fields)._rotationArcLookAndFeel,camera,(MethodInfo *)0x0);
        }
      }
    }
    if ((this->fields)._._isVisible != 0) {
      pGVar3 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
      if (pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
      if (((pGVar3->fields)._fillMode == 0) ||
         (((&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->fields).
          _fillMode == 2)) {
        pGVar3 = (&(this->fields)._lookAndFeel)
                 [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
        pSStack_7 = (Singleton_1_GizmoSolidMaterial___Class *)(pGVar3->fields)._color.r;
        fStack_8 = (pGVar3->fields)._color.g;
        fStack_9 = (pGVar3->fields)._color.b;
        fStack_10 = (pGVar3->fields)._color.a;
        pGVar4 = (this->fields)._._gizmo;
        if (pGVar4 == (Gizmo *)0x0) goto code_?;
        iVar11 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerCaptureEventBase`1[System::Object]::
                 PointerCaptureEventBase_1_System_Object__get_pointerId
                           ((PointerCaptureEventBase_1_System_Object_ *)pGVar4,(MethodInfo *)0x0);
        iVar12 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
                 SparselyPopulatedArrayFragment_1_System_Object__get_Length
                           ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,
                            (MethodInfo *)0x0);
        if (iVar11 == iVar12) {
          pGVar3 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
          if (pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
          pSStack_7 = (Singleton_1_GizmoSolidMaterial___Class *)(pGVar3->fields)._hoveredColor.r;
          fStack_8 = (pGVar3->fields)._hoveredColor.g;
          fStack_9 = (pGVar3->fields)._hoveredColor.b;
          fStack_10 = (pGVar3->fields)._hoveredColor.a;
        }
        if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0)
        {
          pSStack_7 = TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>;
          func_?();
        }
        this_02 = (GizmoSolidMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
        if (this_02 == (GizmoSolidMaterial *)0x0) goto code_?;
        GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                  (this_02,(MethodInfo *)0x0);
        GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_02,0,(MethodInfo *)0x0);
        color.g = fStack_8;
        color.r = (float)pSStack_7;
        color.b = fStack_9;
        color.a = fStack_10;
        GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_02,color,(MethodInfo *)0x0);
        GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_02,0,(MethodInfo *)0x0);
        pGVar13 = (this->fields)._._handle;
        if (pGVar13 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Render2DSolid(pGVar13,camera,(MethodInfo *)0x0);
      }
    }
    if ((this->fields)._isBorderVisible != 0) {
      pGVar3 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
      if (pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        if (((pGVar3->fields)._fillMode != 1) &&
           (((&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->fields).
            _fillMode != 2)) {
          return;
        }
        if (((&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->fields).
            _planeType == 0) {
          this_01 = (this->fields)._quadBorder;
          if (this_01 != (GizmoQuad2DBorder *)0x0) {
            GizmoQuad2DBorder::GizmoQuad2DBorder_Render(this_01,camera,(MethodInfo *)0x0);
            return;
          }
        }
        else if (((&(this->fields)._lookAndFeel)
                  [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->
                 fields)._planeType == 1) {
          pGVar14 = (this->fields)._circleBorder;
          if (pGVar14 != (GizmoCircle2DBorder *)0x0) {
            if (cRam_? == '\0') {
              func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
              func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
              cRam_? = '\x01';
            }
            if ((pGVar14->fields)._isVisible == 0) {
              return;
            }
            pGVar15 = (pGVar14->fields)._planeSlider;
            if ((pGVar15 != (GizmoPlaneSlider2D *)0x0) &&
               (pGVar3 = (&(pGVar15->fields)._lookAndFeel)
                         [(pGVar15->fields)._sharedLookAndFeel !=
                          (GizmoPlaneSlider2DLookAndFeel *)0x0],
               pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
              pSStack_7 = (Singleton_1_GizmoSolidMaterial___Class *)(pGVar3->fields)._borderColor.r
              ;
              fStack_8 = (pGVar3->fields)._borderColor.g;
              fStack_9 = (pGVar3->fields)._borderColor.b;
              fStack_10 = (pGVar3->fields)._borderColor.a;
              pGVar13 = (pGVar14->fields)._targetHandle;
              if ((pGVar13 != (GizmoHandle *)0x0) &&
                 (pGVar4 = (pGVar13->fields)._gizmo, pGVar4 != (Gizmo *)0x0)) {
                iVar11 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                         PointerCaptureEventBase`1[System::Object]::
                         PointerCaptureEventBase_1_System_Object__get_pointerId
                                   ((PointerCaptureEventBase_1_System_Object_ *)pGVar4,
                                    (MethodInfo *)0x0);
                pGVar13 = (pGVar14->fields)._targetHandle;
                if (pGVar13 != (GizmoHandle *)0x0) {
                  if (iVar11 == (pGVar13->fields)._id) {
                    pGVar15 = (pGVar14->fields)._planeSlider;
                    if ((pGVar15 == (GizmoPlaneSlider2D *)0x0) ||
                       (pGVar3 = (&(pGVar15->fields)._lookAndFeel)
                                 [(pGVar15->fields)._sharedLookAndFeel !=
                                  (GizmoPlaneSlider2DLookAndFeel *)0x0],
                       pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0)) goto code_?;
                    pSStack_7 = (Singleton_1_GizmoSolidMaterial___Class *)
                                 (pGVar3->fields)._hoveredBorderColor.r;
                    fStack_8 = (pGVar3->fields)._hoveredBorderColor.g;
                    fStack_9 = (pGVar3->fields)._hoveredBorderColor.b;
                    fStack_10 = (pGVar3->fields)._hoveredBorderColor.a;
                  }
                  if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
                  }
                  this_03 = (GizmoLineMaterial *)
                            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                      (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__
                                      );
                  if (this_03 != (GizmoLineMaterial *)0x0) {
                    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                              (this_03,(MethodInfo *)0x0);
                    color_00.g = fStack_8;
                    color_00.r = (float)pSStack_7;
                    color_00.b = fStack_9;
                    color_00.a = fStack_10;
                    GizmoLineMaterial::GizmoLineMaterial_SetColor
                              (this_03,color_00,(MethodInfo *)0x0);
                    GizmoLineMaterial::GizmoLineMaterial_SetPass(this_03,0,(MethodInfo *)0x0);
                    pGVar13 = (pGVar14->fields)._targetHandle;
                    if (pGVar13 != (GizmoHandle *)0x0) {
                      GizmoHandle::GizmoHandle_Render2DWire_1
                                (pGVar13,camera,(pGVar14->fields)._borderCircleIndex,(MethodInfo *)0x0
                                );
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (((&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0]->fields).
              _planeType != 2) {
            return;
          }
          this_00 = (this->fields)._polygonBorder;
          if (this_00 != (GizmoPolygon2DBorder *)0x0) {
            GizmoPolygon2DBorder::GizmoPolygon2DBorder_Render(this_00,camera,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      func_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
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
    pGVar1 = (this->fields)._circleBorder;
    if (pGVar1 != (GizmoCircle2DBorder *)0x0) {
      pGVar2 = (pGVar1->fields)._targetHandle;
      (pGVar1->fields)._isHoverable = isHoverable;
      if (pGVar2 != (GizmoHandle *)0x0) {
        GizmoHandle::GizmoHandle_Set2DShapeHoverable
                  (pGVar2,(pGVar1->fields)._borderCircleIndex,isHoverable,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._polygonBorder;
        if (pGVar3 != (GizmoPolygon2DBorder *)0x0) {
          pGVar2 = (pGVar3->fields)._targetHandle;
          (pGVar3->fields)._isHoverable = isHoverable;
          if (pGVar2 != (GizmoHandle *)0x0) {
            GizmoHandle::GizmoHandle_Set2DShapeHoverable
                      (pGVar2,(pGVar3->fields)._borderPolygonIndex,isHoverable,(MethodInfo *)0x0);
            pGVar2 = (pGVar3->fields)._targetHandle;
            if (pGVar2 != (GizmoHandle *)0x0) {
              GizmoHandle::GizmoHandle_Set2DShapeHoverable
                        (pGVar2,(pGVar3->fields)._thickBorderPolygonIndex,isHoverable,
                         (MethodInfo *)0x0);
              return;
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
  pGVar3 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
  if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
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
  (this->fields)._selectedDragSession = (IGizmoDragSession *)pGVar1;
  func_?(&(this->fields)._selectedDragSession,pGVar1);
code_?:
  pGVar2 = (this->fields)._._handle;
  if (pGVar2 != (GizmoHandle *)0x0) {
    pIVar3 = (this->fields)._selectedDragSession;
    (pGVar2->fields)._DragSession_k__BackingField = pIVar3;
    func_?(&(pGVar2->fields)._DragSession_k__BackingField,pIVar3);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  pGVar1 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0];
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
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
  (this->fields)._quad = pQVar1;
  func_?(&(this->fields)._quad,pQVar1);
  pCVar2 = (CircleShape2D *)func_?(TypeInfo__RTG__CircleShape2D);
  CircleShape2D::CircleShape2D__ctor(pCVar2,(MethodInfo *)0x0);
  (this->fields)._circle = pCVar2;
  func_?(&(this->fields)._circle,pCVar2);
  pPVar3 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar3,(MethodInfo *)0x0);
  (this->fields)._polygon = pPVar3;
  func_?(&(this->fields)._polygon,pPVar3);
  (this->fields)._isBorderVisible = 1;
  (this->fields)._isBorderHoverable = 1;
  pGVar4 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar4,(MethodInfo *)0x0);
  (this->fields)._transform = pGVar4;
  func_?();
  (this->fields)._dragChannel = 1;
  pGVar5 = (GizmoSglAxisRotationDrag3D *)func_?();
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar5,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = (GizmoDblAxisOffsetDrag3D *)pGVar5;
  func_?(&(this->fields)._offsetDrag,pGVar5);
  pGVar5 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisRotationDrag3D)
  ;
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar5,(MethodInfo *)0x0);
  (this->fields)._rotationDrag = pGVar5;
  func_?(&(this->fields)._rotationDrag,pGVar5);
  this_00 = (GizmoRotationArc2D *)func_?(TypeInfo__RTG__GizmoRotationArc2D);
  GizmoRotationArc2D::GizmoRotationArc2D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._rotationArc = this_00;
  func_?();
  handleId_00 = TypeInfo__RTG__GizmoDblAxisScaleDrag3D;
  pGVar6 = (Gizmo *)func_?();
  GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D__ctor
            ((GizmoDblAxisScaleDrag3D *)pGVar6,(MethodInfo *)0x0);
  planeSlider = &(this->fields)._scaleDrag;
  (this->fields)._scaleDrag = (GizmoDblAxisScaleDrag3D *)pGVar6;
  func_?();
  (this->fields)._scaleDragAxisIndexUp = 1;
  method_00 = TypeInfo__RTG__GizmoPlaneSlider2DControllerData;
  pGVar7 = (GizmoPlaneSlider2DControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._controllerData = pGVar7;
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
  }
  else {
    mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0);
    pIVar8 = (IGizmoPlaneSlider2DController__Array *)func_?();
    (this->fields)._controllers = pIVar8;
    func_?();
    method_01 = TypeInfo__RTG__GizmoPlaneSlider2DSettings;
    value = (GizmoPlaneSlider2DSettings *)func_?();
    (value->fields)._areaHoverEps = 1e-05;
    (value->fields)._borderLineHoverEps = 7.0;
    (value->fields)._thickBorderPolyHoverEps = 7.0;
    (value->fields)._offsetSnapStepRight = 1.0;
    (value->fields)._offsetSnapStepUp = 1.0;
    (value->fields)._rotationSnapStep = 15.0;
    (value->fields)._scaleMode = 1;
    (value->fields)._scaleSnapStepRight = 0.1;
    (value->fields)._scaleSnapStepUp = 0.1;
    (value->fields)._proportionalScaleSnapStep = 0.1;
    (value->fields)._offsetSensitivity = 1.0;
    (value->fields)._rotationSensitivity = 0.45;
    (value->fields)._scaleSensitivity = 1.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (this->fields)._settings = value;
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
    this_02 = (GizmoRotationArc3DLookAndFeel *)func_?();
    GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
    (value_00->fields)._rotationArcLookAndFeel = (GizmoRotationArc2DLookAndFeel *)this_02;
    func_?();
    fVar9 = _UNK_?;
    fVar10 = _UNK_?;
    fVar11 = _UNK_?;
    (value_00->fields)._color.r = _UNK_?;
    (value_00->fields)._color.g = fVar11;
    (value_00->fields)._color.b = fVar10;
    (value_00->fields)._color.a = fVar9;
    pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar11 = pCVar12->g;
    fVar10 = pCVar12->b;
    fVar9 = pCVar12->a;
    (value_00->fields)._hoveredColor.r = pCVar12->r;
    (value_00->fields)._hoveredColor.g = fVar11;
    (value_00->fields)._hoveredColor.b = fVar10;
    (value_00->fields)._hoveredColor.a = fVar9;
    fVar9 = _UNK_?;
    fVar10 = _UNK_?;
    fVar11 = _UNK_?;
    (value_00->fields)._borderColor.r = _UNK_?;
    (value_00->fields)._borderColor.g = fVar11;
    (value_00->fields)._borderColor.b = fVar10;
    (value_00->fields)._borderColor.a = fVar9;
    pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar11 = pCVar12->r;
    fVar10 = pCVar12->g;
    fVar9 = pCVar12->b;
    fVar13 = pCVar12->a;
    (value_00->fields)._borderPolyThickness = 8.0;
    (value_00->fields)._hoveredBorderColor.r = fVar11;
    (value_00->fields)._hoveredBorderColor.g = fVar10;
    (value_00->fields)._hoveredBorderColor.b = fVar9;
    (value_00->fields)._hoveredBorderColor.a = fVar13;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,
               (MethodInfo *)&(value_00->fields)._rotationArcLookAndFeel);
    (this->fields)._lookAndFeel = value_00;
    func_?();
    GizmoSlider::GizmoSlider__ctor
              ((GizmoSlider *)this,pGVar6,(int32_t)handleId_00,(MethodInfo *)0x0);
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar14,(Shape2D *)(this->fields)._quad,(MethodInfo *)0x0);
    (this->fields)._quadIndex = iVar15;
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar14,(Shape2D *)(this->fields)._circle,(MethodInfo *)0x0);
    (this->fields)._circleIndex = iVar15;
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar14,(Shape2D *)(this->fields)._polygon,(MethodInfo *)0x0);
    pGVar14 = (this->fields)._._handle;
    pQVar1 = (this->fields)._quad;
    (this->fields)._polygonIndex = iVar15;
    this_03 = (GizmoQuad2DBorder *)func_?();
    GizmoQuad2DBorder::GizmoQuad2DBorder__ctor
              (this_03,(GizmoPlaneSlider2D *)planeSlider,pGVar14,pQVar1,(MethodInfo *)0x0);
    (this->fields)._scaleDragAxisIndexUp = (int32_t)this_03;
    func_?();
    pGVar14 = (GizmoHandle *)(this->fields)._scaleDragOrigin.y;
    pCVar2 = (CircleShape2D *)(this->fields)._scaleAxisUp.z;
    pGVar7 = (GizmoPlaneSlider2DControllerData *)func_?();
    GizmoCircle2DBorder::GizmoCircle2DBorder__ctor
              ((GizmoCircle2DBorder *)pGVar7,(GizmoPlaneSlider2D *)planeSlider,pGVar14,pCVar2,
               (MethodInfo *)0x0);
    (this->fields)._controllerData = pGVar7;
    func_?();
    pGVar14 = (GizmoHandle *)(this->fields)._scaleDragOrigin.y;
    pPVar3 = (PolygonShape2D *)(this->fields)._scaleDragAxisIndexRight;
    pIVar8 = (IGizmoPlaneSlider2DController__Array *)func_?();
    GizmoPolygon2DBorder::GizmoPolygon2DBorder__ctor
              ((GizmoPolygon2DBorder *)pIVar8,(GizmoPlaneSlider2D *)planeSlider,pGVar14,pPVar3,
               (MethodInfo *)0x0);
    (this->fields)._controllers = pIVar8;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._targetTransforms =
         (List_1_RTG_GizmoTransform_ *)(this->fields)._scaleDragOrigin.z;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragOffset.x = (float)planeSlider;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragOffset.y = (this->fields)._scaleDragOrigin.y;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragOffset.z = (float)(this->fields)._scaleDragAxisIndexUp;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragRotation.z = (this->fields)._scaleAxisUp.y;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragScale.y = (this->fields)._scaleAxisRight.y;
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragRotation.x = (float)(this->fields)._controllerData;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragRotation.w = (this->fields)._scaleAxisUp.z;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragScale.z = (this->fields)._scaleAxisRight.z;
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragRotation.y = (float)(this->fields)._controllers;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._totalDragScale.x = (float)(this->fields)._scaleDragAxisIndexRight;
    func_?();
    pGVar16 = this[1].fields._offsetDrag;
    if (pGVar16 == (GizmoDblAxisOffsetDrag3D *)0x0) goto code_?;
    (pGVar16->fields)._._._relativeDragOffset.x = (this->fields)._scaleAxisUp.x;
    fVar11 = this[1].fields._offsetDragOrigin.x;
    pOVar17 = (Object__Class *)this[1].fields._offsetDrag;
    method_04 = TypeInfo__RTG__GizmoQuadPlaneSlider2DController;
    pOVar18 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar18,ExceptionArgument__Enum_obj,(MethodInfo *)method_04);
    pOVar18[1].klass = pOVar17;
    func_?();
    if (fVar11 == 0.0) goto code_?;
    iVar19 = func_?();
    if (iVar19 == 0) goto code_?;
    if (*(int *)((int)fVar11 + 0xc) == 0) goto code_?;
    *(Object **)((int)fVar11 + 0x10) = pOVar18;
    func_?();
    fVar11 = this[1].fields._offsetDragOrigin.x;
    pOVar17 = (Object__Class *)this[1].fields._offsetDrag;
    method_02 = TypeInfo__RTG__GizmoCirclePlaneSlider2DController;
    pOVar18 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar18,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    pOVar18[1].klass = pOVar17;
    func_?();
    if (fVar11 == 0.0) goto code_?;
    iVar19 = func_?();
    if (iVar19 == 0) goto code_?;
    if (*(uint *)((int)fVar11 + 0xc) < 2) goto code_?;
    *(Object **)((int)fVar11 + 0x14) = pOVar18;
    func_?();
    fVar11 = this[1].fields._offsetDragOrigin.x;
    pOVar17 = (Object__Class *)this[1].fields._offsetDrag;
    method_03 = TypeInfo__RTG__GizmoPolygonPlaneSlider2DController;
    pOVar18 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar18,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    pOVar18[1].klass = pOVar17;
    func_?();
    if (fVar11 == 0.0) goto code_?;
    iVar19 = func_?();
    if (iVar19 != 0) {
      if (*(uint *)((int)fVar11 + 0xc) < 3) goto code_?;
      *(Object **)((int)fVar11 + 0x18) = pOVar18;
      func_?();
      pGVar4 = (GizmoTransform *)(this->fields)._sharedSettings;
      value_01 = (GizmoEntityTransformChangedHandler *)func_?();
      Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
      SerializationCallback__ctor
                ((SerializationCallback *)value_01,(Object *)planeSlider,
                 MethodInfo__RTG__GizmoPlaneSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 ,(MethodInfo *)0x0);
      if (pGVar4 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_add_Changed(pGVar4,value_01,(MethodInfo *)0x0);
        pGVar6 = (Gizmo *)(this->fields)._scaleDragOrigin.z;
        value_02 = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_02,
                   (Object *)planeSlider,
                   MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (pGVar6 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(pGVar6,value_02,(MethodInfo *)0x0);
          pGVar6 = (Gizmo *)(this->fields)._scaleDragOrigin.z;
          value_03 = (GizmoPreDragBeginAttemptHandler *)func_?();
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    ((EventHandler_1_Object_ *)value_03,(Object *)planeSlider,
                     MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                     ,(MethodInfo *)0x0);
          if (pGVar6 != (Gizmo *)0x0) {
            Gizmo::Gizmo_add_PreDragBeginAttempt(pGVar6,value_03,(MethodInfo *)0x0);
            pGVar6 = (Gizmo *)(this->fields)._scaleDragOrigin.z;
            value_04 = (GizmoPreDragUpdateHandler *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      ((EventHandler_1_Object_ *)value_04,(Object *)planeSlider,
                       MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_
                       ,(MethodInfo *)0x0);
            if (pGVar6 != (Gizmo *)0x0) {
              Gizmo::Gizmo_add_PreDragUpdate(pGVar6,value_04,(MethodInfo *)0x0);
              pGVar6 = (Gizmo *)(this->fields)._scaleDragOrigin.z;
              value_05 = (GizmoPostEnabledHandler *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_05,
                         (Object *)planeSlider,
                         MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPostEnabled_RTG__Gizmo_,
                         (MethodInfo *)0x0);
              if (pGVar6 != (Gizmo *)0x0) {
                Gizmo::Gizmo_add_PostEnabled(pGVar6,value_05,(MethodInfo *)0x0);
                if (this[1].klass != (GizmoPlaneSlider2D__Class *)0x0) {
                  pGVar4 = (GizmoTransform *)(this->fields)._sharedSettings;
                  GizmoDragSession::GizmoDragSession_AddTargetTransform
                            ((GizmoDragSession *)this[1].klass,pGVar4,(MethodInfo *)0x0);
                  pGVar20 = *(GizmoDragSession **)&this[1].fields._._isVisible;
                  if (pGVar20 != (GizmoDragSession *)0x0) {
                    GizmoDragSession::GizmoDragSession_AddTargetTransform
                              (pGVar20,pGVar4,(MethodInfo *)0x0);
                    pGVar20 = (GizmoDragSession *)this[1].fields._circleIndex;
                    if (pGVar20 != (GizmoDragSession *)0x0) {
                      GizmoDragSession::GizmoDragSession_AddTargetTransform
                                (pGVar20,pGVar4,(MethodInfo *)0x0);
                      fVar11 = (this->fields)._scaleDragOrigin.z;
                      if ((fVar11 != 0.0) && (this[1].klass != (GizmoPlaneSlider2D__Class *)0x0)) {
                        pGVar4 = *(GizmoTransform **)((int)fVar11 + 0xf8);
                        GizmoDragSession::GizmoDragSession_AddTargetTransform
                                  ((GizmoDragSession *)this[1].klass,pGVar4,(MethodInfo *)0x0);
                        pGVar20 = *(GizmoDragSession **)&this[1].fields._._isVisible;
                        if (pGVar20 != (GizmoDragSession *)0x0) {
                          GizmoDragSession::GizmoDragSession_AddTargetTransform
                                    (pGVar20,pGVar4,(MethodInfo *)0x0);
                          pGVar20 = (GizmoDragSession *)this[1].fields._circleIndex;
                          if (pGVar20 != (GizmoDragSession *)0x0) {
                            GizmoDragSession::GizmoDragSession_AddTargetTransform
                                      (pGVar20,pGVar4,(MethodInfo *)0x0);
                            fVar11 = (this->fields)._scaleDragOrigin.z;
                            if ((fVar11 != 0.0) &&
                               (pGVar4 = (GizmoTransform *)(this->fields)._sharedSettings,
                               pGVar4 != (GizmoTransform *)0x0)) {
                              GizmoTransform::GizmoTransform_SetParent
                                        (pGVar4,*(GizmoTransform **)((int)fVar11 + 0xf8),
                                         (MethodInfo *)0x0);
                              (this->fields)._sharedLookAndFeel =
                                   (GizmoPlaneSlider2DLookAndFeel *)this[1].klass;
                              (this->fields)._lookAndFeel = (GizmoPlaneSlider2DLookAndFeel *)0x1;
                              func_?();
                              fVar11 = (this->fields)._scaleDragOrigin.y;
                              if (fVar11 != 0.0) {
                                *(GizmoPlaneSlider2DLookAndFeel **)((int)fVar11 + 0x2c) =
                                     (this->fields)._sharedLookAndFeel;
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  if ((this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
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
  if ((this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0) {
    return (this->fields)._sharedSettings;
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
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  return;
}

