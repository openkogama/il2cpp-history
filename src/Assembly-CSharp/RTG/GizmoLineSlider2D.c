
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_AddTargetTransform
               (GizmoLineSlider2D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_00 = (this->fields)._offsetDrag;
  if (this_00 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_AddTargetTransform
              ((GizmoDragSession *)this_00,transform,(MethodInfo *)0x0);
    this_01 = (this->fields)._rotationDrag;
    if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_AddTargetTransform
                ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
      this_02 = (this->fields)._scaleDrag;
      if (this_02 != (GizmoSglAxisScaleDrag3D *)0x0) {
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_AddTargetTransform_1
               (GizmoLineSlider2D *this,GizmoTransform *transform,GizmoDragChannel__Enum dragChannel
               ,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    this_00 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    this_00 = (this->fields)._rotationDrag;
  }
  else {
    if (dragChannel != GizmoDragChannel__Enum_Scale) {
      return;
    }
    this_00 = (GizmoSglAxisRotationDrag3D *)(this->fields)._scaleDrag;
  }
  if (this_00 != (GizmoSglAxisRotationDrag3D *)0x0) {
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


/* Single GetRealBoxThickness() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_GetRealBoxThickness
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
    return ((&(this->fields)._lookAndFeel)
            [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0]->fields).
           _scale * (pGVar2->fields)._boxThickness;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector2 GetRealDirection() */

Vector2 Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_GetRealDirection
                  (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoSglAxisScaleDrag3D *)0x0) {
    cVar2 = (*(code *)(pGVar1->klass->vtable).get_IsActive_1.method)
                      (pGVar1,(pGVar1->klass->vtable).get_DragChannel_1.methodPtr);
    fVar3 = _UNK_?;
    if (cVar2 != '\0') {
      pGVar1 = (this->fields)._scaleDrag;
      if (pGVar1 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
      if ((pGVar1->fields)._totalScale < _UNK_?) {
        fVar3 = _UNK_?;
      }
    }
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 != (GizmoTransformAxisMap2D *)0x0) {
      VVar4 = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis(this_00,(MethodInfo *)0x0);
      VStack_5.y = VVar4.y;
      VStack_5.y = VStack_5.y * fVar3;
      VStack_5.x = VStack_5.x * fVar3;
      return VStack_5;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar6)();
  return VVar4;
}


/* Vector2 GetRealEndPosition() */

Vector2 Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_GetRealEndPosition
                  (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._position2D.x;
    fVar3 = (pGVar1->fields)._position2D.y;
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 != (GizmoTransformAxisMap2D *)0x0) {
      VVar4 = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis(this_00,(MethodInfo *)0x0);
      fVar5 = GizmoLineSlider2D_GetRealLength(this,(MethodInfo *)0x0);
      VStack_6.x = VVar4.x;
      VStack_6.y = VVar4.y;
      VStack_6.y = VStack_6.y * fVar5 + fVar3;
      VStack_6.x = VStack_6.x * fVar5 + fVar2;
      return VStack_6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar7)();
  return VVar4;
}


/* Single GetRealLength() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_GetRealLength
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = this;
  this = _UNK_?;
  pGVar2 = (pGVar1->fields)._scaleDrag;
  if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
    cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                       (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
    if (cVar3 == '\0') {
      pGVar4 = (&(pGVar1->fields)._lookAndFeel)
                [(pGVar1->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
      if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
        this = _UNK_?;
code_?:
        return ((&(pGVar1->fields)._lookAndFeel)
                [(pGVar1->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0]->
               fields)._scale * (pGVar4->fields)._length * (float)this;
      }
    }
    else {
      VStack_5.y = (pGVar1->fields)._scaleAxis.z;
      uVar6 = (pGVar1->fields)._scaleAxis.x;
      uVar7 = (pGVar1->fields)._scaleAxis.y;
      pGVar2 = (pGVar1->fields)._scaleDrag;
      VStack_5.x = (float)uVar7;
      if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
        fVar8 = (pGVar2->fields)._totalScale;
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
                   [(pGVar1->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
          if (pGVar14 != (GizmoLineSlider2DLookAndFeel *)0x0) {
            pGVar2 = (pGVar1->fields)._scaleDrag;
            if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
              if ((pGVar2->fields)._totalScale < _UNK_?) {
                this = _UNK_?;
              }
              pGVar4 = (&(pGVar1->fields)._lookAndFeel)
                        [(pGVar1->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0
                        ];
              this = (GizmoLineSlider2D *)
                     ((VStack_5.y /
                      (((&(pGVar1->fields)._lookAndFeel)
                        [(pGVar1->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0
                        ]->fields)._scale * (pGVar14->fields)._length)) * (float)this);
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


/* Void MapDirection(Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_MapDirection
               (GizmoLineSlider2D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method
               )

{
  bVar1 = GizmoLineSlider2D_get_IsDragged(this,(MethodInfo *)0x0);
  if ((bVar1 == 0) && (axisIndex < 2)) {
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 == (GizmoTransformAxisMap2D *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_Map
              (this_00,(this->fields)._transform,axisIndex,axisSign,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoAttemptHandleDragBegin
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (handleId != (pGVar1->fields)._id) {
      this_00 = (this->fields)._cap2D;
      if (this_00 == (GizmoCap2D *)0x0) goto code_?;
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
      if ((void *)handleId != pvVar2) {
        return;
      }
    }
    if ((this->fields)._dragChannel == 1) {
      pGVar3 = (this->fields)._transform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        fVar4 = (pGVar3->fields)._position2D.x;
        fVar5 = (pGVar3->fields)._position2D.y;
        VVar6 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
        fVar7 = (this->fields)._offsetDragOrigin.x;
        fVar8 = (this->fields)._offsetDragOrigin.y;
        fVar9 = (this->fields)._offsetDragOrigin.z;
        pGVar10 = (this->fields)._._gizmo;
        if (pGVar10 != (Gizmo *)0x0) {
          pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar10,(MethodInfo *)0x0);
          start_00.y = fVar5;
          start_00.x = fVar4;
          zPos_00.y = fVar8;
          zPos_00.x = fVar7;
          zPos_00.z = fVar9;
          pVVar12 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                              ((Vector3 *)&stack0xffffffe8,start_00,VVar6,zPos_00,pCVar11,
                               (MethodInfo *)0x0);
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffffe8,*pVVar12,(MethodInfo *)0x0);
          uVar13 = pVVar12->x;
          uVar14 = pVVar12->y;
          pGVar15 = &this->fields;
          pGVar16 = (&(this->fields)._settings)
                    [(this->fields)._sharedSettings != (GizmoLineSlider2DSettings *)0x0];
          if (pGVar16 != (GizmoLineSlider2DSettings *)0x0) {
            this_04 = (this->fields)._offsetDrag;
            if (this_04 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              this = (GizmoLineSlider2D *)(pGVar16->fields)._offsetSnapStep;
              fVar17 = pVVar12->z;
              fVar18 = (float)uVar13;
              VVar19 = pGVar15->_offsetDragOrigin;
              auVar20 = CONCAT412(fVar18,VVar19);
              fVar21 = (float)uVar14;
              workData_01._0_20_ = CONCAT416(fVar21,auVar20);
              workData_01 = (GizmoSglAxisOffsetDrag3D_WorkData)
                            CONCAT820(workData_01.DragOrigin._0_8_,workData_01._0_20_);
              GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
                        (this_04,workData_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if ((this->fields)._dragChannel == 2) {
      pGVar10 = (this->fields)._._gizmo;
      if (((((pGVar10 != (Gizmo *)0x0) &&
            (pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar10,(MethodInfo *)0x0),
            pCVar11 != (Camera *)0x0)) &&
           (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar11,(MethodInfo *)0x0),
           this_05 != (Transform *)0x0)) &&
          ((UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      ((Vector3 *)&stack0xffffffe8,this_05,(MethodInfo *)0x0),
           (&(this->fields)._settings)
           [(this->fields)._sharedSettings != (GizmoLineSlider2DSettings *)0x0] !=
           (GizmoLineSlider2DSettings *)0x0 &&
           ((&(this->fields)._settings)
            [(this->fields)._sharedSettings != (GizmoLineSlider2DSettings *)0x0] !=
            (GizmoLineSlider2DSettings *)0x0)))) &&
         (pGVar10 = (this->fields)._._gizmo, pGVar10 != (Gizmo *)0x0)) {
        pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar10,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._transform;
        if (pGVar3 != (GizmoTransform *)0x0) {
          this_02 = (this->fields)._._gizmo;
          fVar4 = (pGVar3->fields)._position2D.y;
          if ((this_02 != (Gizmo *)0x0) &&
             (this_06 = Gizmo::Gizmo_get_FocusCamera(this_02,(MethodInfo *)0x0),
             this_06 != (Camera *)0x0)) {
            fVar7 = 0.0;
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                               (this_06,(MethodInfo *)0x0);
            if (pCVar11 != (Camera *)0x0) {
              pVVar12 = (Vector3 *)&stack0xffffffe8;
              puVar22 = &UNK_?;
              position.y = fVar4;
              position.x = fVar7;
              position.z = fVar5;
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                                  (pVVar12,pCVar11,position,(MethodInfo *)0x0);
              uVar24 = pVVar23->x;
              uVar25 = pVVar23->y;
              fVar4 = pVVar23->z;
              pGVar3 = (this->fields)._transform;
              if (pGVar3 != (GizmoTransform *)0x0) {
                fVar5 = (pGVar3->fields)._position2D.x;
                fVar8 = (pGVar3->fields)._position2D.y;
                VVar6 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
                fVar9 = GizmoLineSlider2D_GetRealLength(this,(MethodInfo *)0x0);
                if (this != (GizmoLineSlider2D *)0x0) {
                  arcOrigin.y = fVar8;
                  arcOrigin.x = fVar5;
                  GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
                            ((GizmoRotationArc2D *)this,arcOrigin,VVar6,fVar9,(MethodInfo *)0x0);
                  this_03 = (this->fields)._rotationDrag;
                  if (this_03 != (GizmoSglAxisRotationDrag3D *)0x0) {
                    workData.RotationPlanePos.y = (float)uVar25;
                    workData.RotationPlanePos.x = (float)uVar24;
                    workData.RotationPlanePos.z = fVar4;
                    workData.Axis.x = (float)pGVar10;
                    workData.Axis.y = (float)puVar22;
                    workData.Axis.z = (float)pVVar12;
                    workData.SnapMode = (int32_t)pCVar11;
                    workData.SnapStep = fVar7;
                    GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                              (this_03,workData,(MethodInfo *)0x0);
                    return;
                  }
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
      pGVar3 = (this->fields)._transform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        fVar4 = (pGVar3->fields)._position2D.x;
        fVar5 = (pGVar3->fields)._position2D.y;
        VVar6 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
        fVar9 = (this->fields)._scaleDragOrigin.x;
        fVar26 = (this->fields)._scaleDragOrigin.y;
        fVar7 = (this->fields)._scaleDragOrigin.z;
        pGVar10 = (this->fields)._._gizmo;
        if (pGVar10 != (Gizmo *)0x0) {
          pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar10,(MethodInfo *)0x0);
          start.y = fVar5;
          start.x = fVar4;
          zPos.y = fVar26;
          zPos.x = fVar9;
          zPos.z = fVar7;
          pVVar12 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                              ((Vector3 *)&stack0xffffffe8,start,VVar6,zPos,pCVar11,
                               (MethodInfo *)0x0);
          fVar5 = pVVar12->y;
          fVar4 = pVVar12->z;
          (this->fields)._scaleAxis.x = pVVar12->x;
          (this->fields)._scaleAxis.y = fVar5;
          (this->fields)._scaleAxis.z = fVar4;
          puVar27 = (undefined8 *)func_?(&stack0xffffffe8,0,0,0,0,0,0);
          uVar28 = (this->fields)._scaleDragOrigin.x;
          uVar29 = (this->fields)._scaleDragOrigin.y;
          pGVar16 = (&(this->fields)._settings)
                    [(this->fields)._sharedSettings != (GizmoLineSlider2DSettings *)0x0];
          if (pGVar16 != (GizmoLineSlider2DSettings *)0x0) {
            this_01 = (this->fields)._scaleDrag;
            if (this_01 != (GizmoSglAxisScaleDrag3D *)0x0) {
              workData_00.DragOrigin.x = (float)uVar28;
              workData_00.AxisIndex = (this->fields)._scaleDragAxisIndex;
              workData_00.DragOrigin.y = (float)uVar29;
              workData_00.DragOrigin.z = (this->fields)._scaleDragOrigin.z;
              workData_00.Axis.x = (float)(int)*puVar27;
              workData_00.Axis.y = (float)(int)((ulonglong)*puVar27 >> 0x20);
              workData_00.Axis.z = (float)*(undefined4 *)(puVar27 + 1);
              workData_00.SnapStep = (pGVar16->fields)._scaleSnapStep;
              workData_00.EntityScale = 1.0;
              GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_SetWorkData
                        (this_01,workData_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void OnGizmoHandleDragUpdate(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoHandleDragUpdate
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
          SparselyPopulatedArrayFragment_1_System_Object__get_Length
                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
  if (handleId != iVar1) {
    this_00 = (this->fields)._cap2D;
    if (this_00 == (GizmoCap2D *)0x0) goto code_?;
    pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar2) {
      return;
    }
  }
  this_01 = (this->fields)._transform;
  if ((gizmo != (Gizmo *)0x0) &&
     (pQVar3 = Gizmo::Gizmo_get_RelativeDragRotation
                         ((Quaternion *)&stack0xffffffec,gizmo,(MethodInfo *)0x0),
     this_01 != (GizmoTransform *)0x0)) {
    GizmoTransform::GizmoTransform_Rotate2D_1(this_01,*pQVar3,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoHandleHoverEnter(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoHandleHoverEnter
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
          SparselyPopulatedArrayFragment_1_System_Object__get_Length
                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
  pGVar2 = (this->fields)._cap2D;
  if (handleId == iVar1) {
    if ((pGVar2 == (GizmoCap2D *)0x0) ||
       (pGVar3 = (pGVar2->fields)._overrideFillColor, pGVar3 == (GizmoOverrideColor *)0x0))
    goto code_?;
    (pGVar3->fields)._isActive = 1;
    pGVar2 = (this->fields)._cap2D;
    if (pGVar2 == (GizmoCap2D *)0x0) goto code_?;
    pGVar3 = (pGVar2->fields)._overrideFillColor;
    pGVar4 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
    if ((pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
       (pGVar5 = (pGVar4->fields)._capLookAndFeel, pGVar5 == (GizmoCap2DLookAndFeel *)0x0))
    goto code_?;
    fVar6 = (pGVar5->fields)._hoveredColor.g;
    fVar7 = (pGVar5->fields)._hoveredColor.b;
    fVar8 = (pGVar5->fields)._hoveredColor.a;
    if (pGVar3 == (GizmoOverrideColor *)0x0) goto code_?;
    (pGVar3->fields)._color.r = (pGVar5->fields)._hoveredColor.r;
    (pGVar3->fields)._color.g = fVar6;
    (pGVar3->fields)._color.b = fVar7;
    (pGVar3->fields)._color.a = fVar8;
    pGVar2 = (this->fields)._cap2D;
    if ((pGVar2 == (GizmoCap2D *)0x0) ||
       (pGVar3 = (pGVar2->fields)._overrideBorderColor, pGVar3 == (GizmoOverrideColor *)0x0))
    goto code_?;
    (pGVar3->fields)._isActive = 1;
    pGVar2 = (this->fields)._cap2D;
    if (pGVar2 == (GizmoCap2D *)0x0) goto code_?;
    pGVar3 = (pGVar2->fields)._overrideBorderColor;
    pGVar4 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
    if ((pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
       (pGVar5 = (pGVar4->fields)._capLookAndFeel, pGVar5 == (GizmoCap2DLookAndFeel *)0x0))
    goto code_?;
    fVar6 = (pGVar5->fields)._hoveredBorderColor.r;
    fVar7 = (pGVar5->fields)._hoveredBorderColor.g;
    fVar8 = (pGVar5->fields)._hoveredBorderColor.b;
    fVar9 = (pGVar5->fields)._hoveredBorderColor.a;
  }
  else {
    if (pGVar2 == (GizmoCap2D *)0x0) goto code_?;
    pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar10) {
      return;
    }
    pGVar3 = (this->fields)._overrideFillColor;
    if (pGVar3 == (GizmoOverrideColor *)0x0) goto code_?;
    (pGVar3->fields)._isActive = 1;
    pGVar3 = (this->fields)._overrideFillColor;
    pGVar4 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
    if (pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
    fVar6 = (pGVar4->fields)._hoveredColor.g;
    fVar7 = (pGVar4->fields)._hoveredColor.b;
    fVar8 = (pGVar4->fields)._hoveredColor.a;
    if (pGVar3 == (GizmoOverrideColor *)0x0) goto code_?;
    (pGVar3->fields)._color.r = (pGVar4->fields)._hoveredColor.r;
    (pGVar3->fields)._color.g = fVar6;
    (pGVar3->fields)._color.b = fVar7;
    (pGVar3->fields)._color.a = fVar8;
    pGVar3 = (this->fields)._overrideBorderColor;
    if (pGVar3 == (GizmoOverrideColor *)0x0) goto code_?;
    (pGVar3->fields)._isActive = 1;
    pGVar3 = (this->fields)._overrideBorderColor;
    pGVar4 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
    if (pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
    fVar6 = (pGVar4->fields)._hoveredBorderColor.r;
    fVar7 = (pGVar4->fields)._hoveredBorderColor.g;
    fVar8 = (pGVar4->fields)._hoveredBorderColor.b;
    fVar9 = (pGVar4->fields)._hoveredBorderColor.a;
  }
  if (pGVar3 != (GizmoOverrideColor *)0x0) {
    (pGVar3->fields)._color.r = fVar6;
    (pGVar3->fields)._color.g = fVar7;
    (pGVar3->fields)._color.b = fVar8;
    (pGVar3->fields)._color.a = fVar9;
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGizmoHandleHoverExit(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoHandleHoverExit
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
          SparselyPopulatedArrayFragment_1_System_Object__get_Length
                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
  pGVar2 = (this->fields)._cap2D;
  if (handleId == iVar1) {
    if ((pGVar2 == (GizmoCap2D *)0x0) ||
       (pGVar3 = (pGVar2->fields)._overrideFillColor, pGVar3 == (GizmoOverrideColor *)0x0))
    goto code_?;
    (pGVar3->fields)._isActive = 0;
    pGVar2 = (this->fields)._cap2D;
    if (pGVar2 == (GizmoCap2D *)0x0) goto code_?;
    pGVar3 = (pGVar2->fields)._overrideBorderColor;
  }
  else {
    if (pGVar2 == (GizmoCap2D *)0x0) goto code_?;
    pvVar4 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar4) {
      return;
    }
    pGVar3 = (this->fields)._overrideFillColor;
    if (pGVar3 == (GizmoOverrideColor *)0x0) goto code_?;
    (pGVar3->fields)._isActive = 0;
    pGVar3 = (this->fields)._overrideBorderColor;
  }
  if (pGVar3 != (GizmoOverrideColor *)0x0) {
    (pGVar3->fields)._isActive = 0;
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoPostEnabled
               (GizmoLineSlider2D *this,Gizmo *gizmo,MethodInfo *method)

{
  GizmoLineSlider2D_Refresh(this,(MethodInfo *)0x0);
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoPreUpdateBegin
               (GizmoLineSlider2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel *)0x0) {
    pIVar2 = (this->fields)._controllers;
    uVar3 = (pGVar1->fields)._lineType;
    if (pIVar2 != (IGizmoLineSlider2DController__Array *)0x0) {
      if (pIVar2->max_length <= uVar3) goto code_?;
      if (pIVar2->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar2->vector[uVar3]);
        this_00 = (this->fields)._offsetDrag;
        pGVar4 = (&(this->fields)._settings)
                 [(this->fields)._sharedSettings != (GizmoLineSlider2DSettings *)0x0];
        if ((pGVar4 != (GizmoLineSlider2DSettings *)0x0) &&
           (this_00 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
          GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                    ((GizmoScreenDrag *)this_00,(pGVar4->fields)._offsetSensitivity,
                     (MethodInfo *)0x0);
          this_01 = (this->fields)._rotationDrag;
          pGVar4 = (&(this->fields)._settings)
                   [(this->fields)._sharedSettings != (GizmoLineSlider2DSettings *)0x0];
          if ((pGVar4 != (GizmoLineSlider2DSettings *)0x0) &&
             (this_01 != (GizmoSglAxisRotationDrag3D *)0x0)) {
            GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                      ((GizmoScreenDrag *)this_01,(pGVar4->fields)._rotationSensitivity,
                       (MethodInfo *)0x0);
            pIVar2 = (this->fields)._controllers;
            if (pIVar2 != (IGizmoLineSlider2DController__Array *)0x0) {
              if (pIVar2->max_length <= uVar3) goto code_?;
              if (pIVar2->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
                func_?(1,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar2->vector[uVar3])
                ;
                pIVar2 = (this->fields)._controllers;
                if (pIVar2 != (IGizmoLineSlider2DController__Array *)0x0) {
                  if (pIVar2->max_length <= uVar3) goto code_?;
                  if (pIVar2->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
                    func_?(2,TypeInfo__RTG__IGizmoLineSlider2DController,
                                    pIVar2->vector[uVar3]);
                    pGVar5 = (this->fields)._cap2D;
                    if (pGVar5 != (GizmoCap2D *)0x0) {
                      pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                XDocumentTypeWrapper::XDocumentTypeWrapper_get_Public
                                          ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                      pPVar7 = GizmoSlider::GizmoSlider_get_GenericHoverPriority
                                          ((GizmoSlider *)this,(MethodInfo *)0x0);
                      if ((pPVar7 != (Priority *)0x0) && (pSVar6 != (String *)0x0)) {
                        (pSVar6->fields)._stringLength = (pPVar7->fields)._priority;
                        pGVar5 = (this->fields)._cap2D;
                        if (pGVar5 != (GizmoCap2D *)0x0) {
                          pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                    XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                              ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                          pXVar8 = System.Xml.dll::System::Xml::XmlNodeReader::
                                    XmlNodeReader_get_NameTable
                                              ((XmlNodeReader *)this,(MethodInfo *)0x0);
                          if ((pXVar8 != (XmlNameTable *)0x0) && (pSVar6 != (String *)0x0)) {
                            (pSVar6->fields)._stringLength = (int32_t)pXVar8[1].klass;
                            pGVar5 = (this->fields)._cap2D;
                            if (pGVar5 != (GizmoCap2D *)0x0) {
                              pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                        XDocumentTypeWrapper::
                                        XDocumentTypeWrapper_get_InternalSubset
                                                  ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0)
                              ;
                              pPVar7 = GizmoSlider::GizmoSlider_get_HoverPriority3D
                                                  ((GizmoSlider *)this,(MethodInfo *)0x0);
                              if ((pPVar7 != (Priority *)0x0) && (pSVar6 != (String *)0x0)) {
                                (pSVar6->fields)._stringLength = (pPVar7->fields)._priority;
                                pGVar5 = (this->fields)._cap2D;
                                sliderDirection =
                                     GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
                                pGVar9 = (this->fields)._transform;
                                if (pGVar9 != (GizmoTransform *)0x0) {
                                  fVar10 = (pGVar9->fields)._position2D.x;
                                  fVar11 = (pGVar9->fields)._position2D.y;
                                  this_02 = (this->fields)._directionAxisMap;
                                  if (this_02 != (GizmoTransformAxisMap2D *)0x0) {
                                    VVar12 = GizmoTransformAxisMap2D::
                                             GizmoTransformAxisMap2D_get_Axis
                                                       (this_02,(MethodInfo *)0x0);
                                    fVar13 = GizmoLineSlider2D_GetRealLength(this,(MethodInfo *)0x0)
                                    ;
                                    fStack_14 = VVar12.x;
                                    fStack_15 = VVar12.y;
                                    if (pGVar5 != (GizmoCap2D *)0x0) {
                                      VVar12.y = fVar11 + fStack_15 * fVar13;
                                      VVar12.x = fVar10 + fStack_14 * fVar13;
                                      GizmoCap2D::GizmoCap2D_CapSlider2D
                                                (pGVar5,sliderDirection,VVar12,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnTransformChanged
               (GizmoLineSlider2D *this,GizmoTransform *transform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    cRam_? = '\x01';
  }
  if ((changeData.TRSDimension != 1) && (changeData.ChangeReason != 1)) {
    return;
  }
  pIVar1 = (this->fields)._controllers;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
     (pIVar1 != (IGizmoLineSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar2->fields)._lineType;
    if (pIVar1->max_length <= uVar3) goto code_?;
    if (pIVar1->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
      func_?(1,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar1->vector[uVar3]);
      this_00 = (this->fields)._cap2D;
      sliderDirection = GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
      pGVar4 = (this->fields)._transform;
      if (pGVar4 != (GizmoTransform *)0x0) {
        fVar5 = (pGVar4->fields)._position2D.x;
        fVar6 = (pGVar4->fields)._position2D.y;
        this_01 = (this->fields)._directionAxisMap;
        if (this_01 != (GizmoTransformAxisMap2D *)0x0) {
          VVar7 = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis
                            (this_01,(MethodInfo *)0x0);
          fVar8 = GizmoLineSlider2D_GetRealLength(this,(MethodInfo *)0x0);
          fStack_9 = VVar7.x;
          fStack_10 = VVar7.y;
          if (this_00 != (GizmoCap2D *)0x0) {
            VVar7.y = fStack_10 * fVar8 + fVar6;
            VVar7.x = fStack_9 * fVar8 + fVar5;
            GizmoCap2D::GizmoCap2D_CapSlider2D(this_00,sliderDirection,VVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnVisibilityStateChanged
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
     (pIVar1 != (IGizmoLineSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar2->fields)._lineType;
    if (pIVar1->max_length <= uVar3) goto code_?;
    if (pIVar1->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar1->vector[uVar3]);
      pIVar1 = (this->fields)._controllers;
      pGVar2 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
      if ((pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
         (pIVar1 != (IGizmoLineSlider2DController__Array *)0x0)) {
        uVar3 = (pGVar2->fields)._lineType;
        if (pIVar1->max_length <= uVar3) goto code_?;
        if (pIVar1->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar1->vector[uVar3]);
          pIVar1 = (this->fields)._controllers;
          pGVar2 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
          if ((pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
             (pIVar1 != (IGizmoLineSlider2DController__Array *)0x0)) {
            uVar3 = (pGVar2->fields)._lineType;
            if (pIVar1->max_length <= uVar3) goto code_?;
            if (pIVar1->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar1->vector[uVar3]);
              this_00 = (this->fields)._cap2D;
              sliderDirection = GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
              pGVar4 = (this->fields)._transform;
              if (pGVar4 != (GizmoTransform *)0x0) {
                fVar5 = (pGVar4->fields)._position2D.x;
                fVar6 = (pGVar4->fields)._position2D.y;
                this_01 = (this->fields)._directionAxisMap;
                if (this_01 != (GizmoTransformAxisMap2D *)0x0) {
                  VVar7 = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis
                                    (this_01,(MethodInfo *)0x0);
                  fVar8 = GizmoLineSlider2D_GetRealLength(this,(MethodInfo *)0x0);
                  fStack_9 = VVar7.x;
                  fStack_10 = VVar7.y;
                  if (this_00 != (GizmoCap2D *)0x0) {
                    VVar7.y = fVar6 + fStack_10 * fVar8;
                    VVar7.x = fVar5 + fStack_9 * fVar8;
                    GizmoCap2D::GizmoCap2D_CapSlider2D
                              (this_00,sliderDirection,VVar7,(MethodInfo *)0x0);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_Refresh
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
     (pIVar1 != (IGizmoLineSlider2DController__Array *)0x0)) {
    uVar3 = (pGVar2->fields)._lineType;
    if (pIVar1->max_length <= uVar3) goto code_?;
    if (pIVar1->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar1->vector[uVar3]);
      pIVar1 = (this->fields)._controllers;
      pGVar2 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
      if ((pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
         (pIVar1 != (IGizmoLineSlider2DController__Array *)0x0)) {
        uVar3 = (pGVar2->fields)._lineType;
        if (pIVar1->max_length <= uVar3) goto code_?;
        if (pIVar1->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar1->vector[uVar3]);
          pIVar1 = (this->fields)._controllers;
          pGVar2 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
          if ((pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
             (pIVar1 != (IGizmoLineSlider2DController__Array *)0x0)) {
            uVar3 = (pGVar2->fields)._lineType;
            if (pIVar1->max_length <= uVar3) goto code_?;
            if (pIVar1->vector[uVar3] != (IGizmoLineSlider2DController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoLineSlider2DController,pIVar1->vector[uVar3]);
              this_00 = (this->fields)._cap2D;
              sliderDirection = GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
              pGVar4 = (this->fields)._transform;
              if (pGVar4 != (GizmoTransform *)0x0) {
                fVar5 = (pGVar4->fields)._position2D.x;
                fVar6 = (pGVar4->fields)._position2D.y;
                this_01 = (this->fields)._directionAxisMap;
                if (this_01 != (GizmoTransformAxisMap2D *)0x0) {
                  VVar7 = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis
                                    (this_01,(MethodInfo *)0x0);
                  fVar8 = GizmoLineSlider2D_GetRealLength(this,(MethodInfo *)0x0);
                  fStack_9 = VVar7.x;
                  fStack_10 = VVar7.y;
                  if (this_00 != (GizmoCap2D *)0x0) {
                    VVar7.y = fVar6 + fStack_10 * fVar8;
                    VVar7.x = fVar5 + fStack_9 * fVar8;
                    GizmoCap2D::GizmoCap2D_CapSlider2D
                              (this_00,sliderDirection,VVar7,(MethodInfo *)0x0);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_RemoveTargetTransform
               (GizmoLineSlider2D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_00 = (this->fields)._offsetDrag;
  if (this_00 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_RemoveTargetTransform
              ((GizmoDragSession *)this_00,transform,(MethodInfo *)0x0);
    this_01 = (this->fields)._rotationDrag;
    if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_RemoveTargetTransform
                ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
      this_02 = (this->fields)._scaleDrag;
      if (this_02 != (GizmoSglAxisScaleDrag3D *)0x0) {
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_RemoveTargetTransform_1
               (GizmoLineSlider2D *this,GizmoTransform *transform,GizmoDragChannel__Enum dragChannel
               ,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    this_00 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    this_00 = (this->fields)._rotationDrag;
  }
  else {
    if (dragChannel != GizmoDragChannel__Enum_Scale) {
      return;
    }
    this_00 = (GizmoSglAxisRotationDrag3D *)(this->fields)._scaleDrag;
  }
  if (this_00 != (GizmoSglAxisRotationDrag3D *)0x0) {
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_Render
               (GizmoLineSlider2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    cRam_? = '\x01';
  }
  if ((this->fields)._._isVisible == 0) {
    pGVar1 = (this->fields)._cap2D;
    if (pGVar1 == (GizmoCap2D *)0x0) goto code_?;
    if ((pGVar1->fields)._._isVisible == 0) {
      return;
    }
  }
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
  if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
  if ((pGVar2->fields)._isRotationArcVisible != 0) {
    pGVar3 = (this->fields)._rotationDrag;
    if (pGVar3 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
    cVar4 = (*(code *)(pGVar3->klass->vtable).get_IsActive_1.method)
                      (pGVar3,(pGVar3->klass->vtable).get_DragChannel_1.methodPtr);
    if (cVar4 != '\0') {
      pGVar3 = (this->fields)._rotationDrag;
      if ((pGVar3 == (GizmoSglAxisRotationDrag3D *)0x0) ||
         (pGVar5 = (this->fields)._rotationArc, pGVar5 == (GizmoRotationArc2D *)0x0))
      goto code_?;
      GizmoRotationArc2D::GizmoRotationArc2D_set_RotationAngle
                (pGVar5,(pGVar3->fields)._totalRotation,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._rotationArc;
      pGVar2 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
      if ((pGVar2 == (GizmoLineSlider2DLookAndFeel *)0x0) || (pGVar5 == (GizmoRotationArc2D *)0x0))
      goto code_?;
      GizmoRotationArc2D::GizmoRotationArc2D_Render
                (pGVar5,(pGVar2->fields)._rotationArcLookAndFeel,camera,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._isVisible != 0) {
    pGVar2 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
    if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
    if ((((pGVar2->fields)._lineType == 0) ||
        (((&(this->fields)._lookAndFeel)
          [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0]->fields).
         _fillMode == 2)) ||
       (((&(this->fields)._lookAndFeel)
         [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0]->fields).
        _fillMode == 0)) {
      pGVar6 = (this->fields)._overrideFillColor;
      if (pGVar6 == (GizmoOverrideColor *)0x0) goto code_?;
      if ((pGVar6->fields)._isActive == 0) {
        pGVar2 = (&(this->fields)._lookAndFeel)
                 [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
        fVar7 = (pGVar2->fields)._color.r;
        fVar8 = (pGVar2->fields)._color.g;
        fVar9 = (pGVar2->fields)._color.b;
        fStack_10 = (pGVar2->fields)._color.a;
        pGVar11 = (this->fields)._._gizmo;
        if (pGVar11 == (Gizmo *)0x0) goto code_?;
        iVar12 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerCaptureEventBase`1[System::Object]::
                 PointerCaptureEventBase_1_System_Object__get_pointerId
                           ((PointerCaptureEventBase_1_System_Object_ *)pGVar11,(MethodInfo *)0x0);
        iVar13 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
                 SparselyPopulatedArrayFragment_1_System_Object__get_Length
                           ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,
                            (MethodInfo *)0x0);
        if (iVar12 == iVar13) {
          pGVar2 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
          if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
          fVar7 = (pGVar2->fields)._hoveredColor.r;
          fVar8 = (pGVar2->fields)._hoveredColor.g;
          fVar9 = (pGVar2->fields)._hoveredColor.b;
          fStack_10 = (pGVar2->fields)._hoveredColor.a;
        }
      }
      else {
        fVar7 = (pGVar6->fields)._color.r;
        fVar8 = (pGVar6->fields)._color.g;
        fVar9 = (pGVar6->fields)._color.b;
        fStack_10 = (pGVar6->fields)._color.a;
      }
      if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
      }
      this_00 = (GizmoSolidMaterial *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
      if (this_00 == (GizmoSolidMaterial *)0x0) goto code_?;
      GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                (this_00,(MethodInfo *)0x0);
      GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_00,0,(MethodInfo *)0x0);
      color_00.g = fVar8;
      color_00.r = fVar7;
      color_00.b = fVar9;
      color_00.a = fStack_10;
      GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_00,color_00,(MethodInfo *)0x0);
      GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
      pGVar14 = (this->fields)._._handle;
      if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
      GizmoHandle::GizmoHandle_Render2DSolid(pGVar14,camera,(MethodInfo *)0x0);
    }
    pGVar2 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
    if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
    if (((pGVar2->fields)._lineType != 0) &&
       ((((&(this->fields)._lookAndFeel)
          [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0]->fields).
         _fillMode == 2 ||
        (((&(this->fields)._lookAndFeel)
          [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0]->fields).
         _fillMode == 1)))) {
      pGVar6 = (this->fields)._overrideFillColor;
      if (pGVar6 == (GizmoOverrideColor *)0x0) goto code_?;
      if ((pGVar6->fields)._isActive == 0) {
        pGVar2 = (&(this->fields)._lookAndFeel)
                 [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
        fVar7 = (pGVar2->fields)._borderColor.r;
        fVar8 = (pGVar2->fields)._borderColor.g;
        fVar9 = (pGVar2->fields)._borderColor.b;
        fStack_10 = (pGVar2->fields)._borderColor.a;
        pGVar11 = (this->fields)._._gizmo;
        if (pGVar11 == (Gizmo *)0x0) goto code_?;
        iVar12 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerCaptureEventBase`1[System::Object]::
                 PointerCaptureEventBase_1_System_Object__get_pointerId
                           ((PointerCaptureEventBase_1_System_Object_ *)pGVar11,(MethodInfo *)0x0);
        iVar13 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
                 SparselyPopulatedArrayFragment_1_System_Object__get_Length
                           ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,
                            (MethodInfo *)0x0);
        if (iVar12 == iVar13) {
          pGVar2 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
          if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
          fVar7 = (pGVar2->fields)._hoveredBorderColor.r;
          fVar8 = (pGVar2->fields)._hoveredBorderColor.g;
          fVar9 = (pGVar2->fields)._hoveredBorderColor.b;
          fStack_10 = (pGVar2->fields)._hoveredBorderColor.a;
        }
      }
      else {
        pGVar6 = (this->fields)._overrideBorderColor;
        if (pGVar6 == (GizmoOverrideColor *)0x0) goto code_?;
        fVar7 = (pGVar6->fields)._color.r;
        fVar8 = (pGVar6->fields)._color.g;
        fVar9 = (pGVar6->fields)._color.b;
        fStack_10 = (pGVar6->fields)._color.a;
      }
      if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
      }
      this_01 = (GizmoLineMaterial *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      if (this_01 == (GizmoLineMaterial *)0x0) goto code_?;
      GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_01,(MethodInfo *)0x0);
      color.g = fVar8;
      color.r = fVar7;
      color.b = fVar9;
      color.a = fStack_10;
      GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,color,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
      pGVar14 = (this->fields)._._handle;
      if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
      GizmoHandle::GizmoHandle_Render2DWire(pGVar14,camera,(MethodInfo *)0x0);
    }
  }
  pGVar1 = (this->fields)._cap2D;
  if (pGVar1 != (GizmoCap2D *)0x0) {
    (*(code *)(pGVar1->klass->vtable).Render_1.method)
              (pGVar1,camera,(pGVar1->klass->vtable).OnVisibilityStateChanged.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Set2DCapHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapHoverable
               (GizmoLineSlider2D *this,bool isHoverable,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pGStack_2 = (this->fields)._cap2D;
  if (pGStack_2 != (GizmoCap2D *)0x0) {
    if ((pGStack_2->fields)._._isHoverable != isHoverable) {
      (pGStack_2->fields)._._isHoverable = isHoverable;
      pIStack_1 = pGStack_2->klass[1]._0.image;
      (*(code *)(pGStack_2->klass->vtable).OnHoverableStateChanged.method)();
    }
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Set2DCapVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
               (GizmoLineSlider2D *this,bool isVisible,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._cap2D;
  if (pGStack_2 != (GizmoCap2D *)0x0) {
    if ((pGStack_2->fields)._._isVisible != isVisible) {
      (pGStack_2->fields)._._isVisible = isVisible;
      pIStack_1 = (pGStack_2->klass->vtable).OnHoverableStateChanged.methodPtr;
      (*(code *)(pGStack_2->klass->vtable).OnVisibilityStateChanged.method)();
    }
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDirection(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_SetDirection
               (GizmoLineSlider2D *this,Vector2 directionAxis,MethodInfo *method)

{
  bVar1 = GizmoLineSlider2D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 == (GizmoTransformAxisMap2D *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_SetAxis
              (this_00,directionAxis,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_SetDragChannel
               (GizmoLineSlider2D *this,GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  (this->fields)._dragChannel = dragChannel;
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (this->fields)._rotationDrag;
  }
  else {
    if (dragChannel != GizmoDragChannel__Enum_Scale) goto code_?;
    pGVar1 = (GizmoSglAxisRotationDrag3D *)(this->fields)._scaleDrag;
  }
  (this->fields)._selectedDragSession = (IGizmoDragSession *)pGVar1;
  func_?(&(this->fields)._selectedDragSession,pGVar1);
code_?:
  pGVar2 = (this->fields)._._handle;
  if (pGVar2 != (GizmoHandle *)0x0) {
    pIVar3 = (this->fields)._selectedDragSession;
    (pGVar2->fields)._DragSession_k__BackingField = pIVar3;
    func_?(&(pGVar2->fields)._DragSession_k__BackingField,pIVar3);
    this_00 = (GizmoCap3D *)(this->fields)._cap2D;
    if (this_00 != (GizmoCap3D *)0x0) {
      GizmoCap3D::GizmoCap3D_set_DragSession
                (this_00,(this->fields)._selectedDragSession,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_SetSnapEnabled
               (GizmoLineSlider2D *this,bool isEnabled,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._offsetDrag;
  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    (pGVar2->fields)._._isSnapEnabled = isEnabled;
    pGVar3 = (this->fields)._rotationDrag;
    if (pGVar3 != (GizmoSglAxisRotationDrag3D *)0x0) {
      (pGVar3->fields)._._isSnapEnabled = isEnabled;
      pGVar4 = (this->fields)._scaleDrag;
      if (pGVar4 != (GizmoSglAxisScaleDrag3D *)0x0) {
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


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_SetupSharedLookAndFeel
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  ppGStack_1 = (GizmoCap2DLookAndFeel **)&stack0xfffffffc;
  pGVar2 = (this->fields)._cap2D;
  pGVar3 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
  if ((pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) && (pGVar2 != (GizmoCap2D *)0x0)) {
    (pGVar2->fields)._sharedLookAndFeel = (pGVar3->fields)._capLookAndFeel;
    ppGStack_1 = &(pGVar2->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GizmoLineSlider2D(Gizmo, Int32, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D__ctor
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,int32_t capHandleId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoBoxLineSlider2DController);
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&TypeRef__RTG__GizmoLine2DType);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DControllerData);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DSettings);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                   );
    func_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleHoverExit_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoPostEnabled_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    func_?(&TypeInfo__RTG__GizmoOverrideColor);
    func_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    func_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    func_?(&TypeInfo__RTG__GizmoPreDragUpdateHandler);
    func_?(&TypeInfo__RTG__GizmoPreHoverEnterHandler);
    func_?(&TypeInfo__RTG__GizmoPreHoverExitHandler);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoRotationArc2D);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
    func_?(&TypeInfo__RTG__GizmoSglAxisScaleDrag3D);
    func_?(&TypeInfo__RTG__GizmoThinLineSlider2DController);
    func_?(&TypeInfo__RTG__GizmoTransformAxisMap2D);
    func_?(&TypeInfo__RTG__GizmoTransform);
    func_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    func_?(&TypeInfo__RTG__QuadShape2D);
    func_?(&TypeInfo__RTG__SegmentShape2D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  this_01 = (SegmentShape2D *)func_?(TypeInfo__RTG__SegmentShape2D);
  SegmentShape2D::SegmentShape2D__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._segment = this_01;
  func_?(&(this->fields)._segment,this_01);
  this_02 = (QuadShape2D *)func_?(TypeInfo__RTG__QuadShape2D);
  QuadShape2D::QuadShape2D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._quad = this_02;
  func_?(&(this->fields)._quad,this_02);
  pGVar1 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = (GizmoSglAxisOffsetDrag3D *)pGVar1;
  func_?(&(this->fields)._offsetDrag,pGVar1);
  pGVar1 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._rotationDrag = pGVar1;
  func_?();
  this_03 = (GizmoRotationArc2D *)func_?();
  GizmoRotationArc2D::GizmoRotationArc2D__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._rotationArc = this_03;
  func_?(&(this->fields)._rotationArc,this_03);
  pGVar2 = (GizmoSglAxisScaleDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisScaleDrag3D);
  GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D__ctor(pGVar2,(MethodInfo *)0x0);
  (this->fields)._scaleDrag = pGVar2;
  func_?(&(this->fields)._scaleDrag,pGVar2);
  pGVar3 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar3,(MethodInfo *)0x0);
  (this->fields)._transform = pGVar3;
  func_?();
  handleId_00 = TypeInfo__RTG__GizmoTransformAxisMap2D;
  pGVar4 = (Gizmo *)func_?();
  GizmoTransformAxisMap2D::GizmoTransformAxisMap2D__ctor
            ((GizmoTransformAxisMap2D *)pGVar4,(MethodInfo *)0x0);
  (this->fields)._directionAxisMap = (GizmoTransformAxisMap2D *)pGVar4;
  func_?();
  pGVar5 = (GizmoOverrideColor *)func_?();
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pGVar5,(MethodInfo *)0x0);
  (this->fields)._overrideFillColor = pGVar5;
  func_?();
  pGVar5 = (GizmoOverrideColor *)func_?();
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pGVar5,(MethodInfo *)0x0);
  (this->fields)._overrideBorderColor = pGVar5;
  func_?();
  method_00 = TypeInfo__RTG__GizmoLineSlider2DControllerData;
  pGVar6 = (GizmoLineSlider2DControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._controllerData = pGVar6;
  func_?();
  handle = TypeRef__RTG__GizmoLine2DType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_04 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_04 == (Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    mscorlib.dll::System::Array::Array_get_Length(this_04,(MethodInfo *)0x0);
    pIVar7 = (IGizmoLineSlider2DController__Array *)func_?();
    (this->fields)._controllers = pIVar7;
    func_?();
    method_01 = TypeInfo__RTG__GizmoLineSlider2DSettings;
    value = (GizmoLineSlider2DSettings *)func_?();
    (value->fields)._lineHoverEps = 10.0;
    (value->fields)._boxHoverEps = 10.0;
    (value->fields)._offsetSnapStep = 1.0;
    (value->fields)._rotationSnapStep = 15.0;
    (value->fields)._scaleSnapStep = 0.1;
    (value->fields)._offsetSensitivity = 1.0;
    (value->fields)._rotationSensitivity = 0.45;
    (value->fields)._scaleSensitivity = 1.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (this->fields)._settings = value;
    func_?();
    pGVar8 = (GizmoLineSlider2DLookAndFeel *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    fVar9 = _UNK_?;
    fVar10 = _UNK_?;
    fVar11 = _UNK_?;
    fVar12 = _UNK_?;
    (pGVar8->fields)._length = 50.0;
    (pGVar8->fields)._scale = 1.0;
    (pGVar8->fields)._boxThickness = 3.0;
    (pGVar8->fields)._isRotationArcVisible = 1;
    (pGVar8->fields)._color.r = fVar12;
    (pGVar8->fields)._color.g = fVar11;
    (pGVar8->fields)._color.b = fVar10;
    (pGVar8->fields)._color.a = fVar9;
    pCVar13 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar12 = pCVar13->g;
    fVar11 = pCVar13->b;
    fVar10 = pCVar13->a;
    (pGVar8->fields)._hoveredColor.r = pCVar13->r;
    (pGVar8->fields)._hoveredColor.g = fVar12;
    (pGVar8->fields)._hoveredColor.b = fVar11;
    (pGVar8->fields)._hoveredColor.a = fVar10;
    fVar10 = _UNK_?;
    fVar11 = _UNK_?;
    fVar12 = _UNK_?;
    (pGVar8->fields)._borderColor.r = _UNK_?;
    (pGVar8->fields)._borderColor.g = fVar12;
    (pGVar8->fields)._borderColor.b = fVar11;
    (pGVar8->fields)._borderColor.a = fVar10;
    pCVar13 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar12 = pCVar13->g;
    fVar11 = pCVar13->b;
    fVar10 = pCVar13->a;
    (pGVar8->fields)._hoveredBorderColor.r = pCVar13->r;
    (pGVar8->fields)._hoveredBorderColor.g = fVar12;
    (pGVar8->fields)._hoveredBorderColor.b = fVar11;
    (pGVar8->fields)._hoveredBorderColor.a = fVar10;
    this_05 = (GizmoRotationArc3DLookAndFeel *)func_?();
    GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_05,(MethodInfo *)0x0);
    (pGVar8->fields)._rotationArcLookAndFeel = (GizmoRotationArc2DLookAndFeel *)this_05;
    func_?();
    this_06 = (GizmoCap2DLookAndFeel *)func_?();
    GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(this_06,(MethodInfo *)0x0);
    (pGVar8->fields)._capLookAndFeel = this_06;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar8,ExceptionArgument__Enum_obj,
               (MethodInfo *)&(pGVar8->fields)._capLookAndFeel);
    (this->fields)._lookAndFeel = pGVar8;
    func_?();
    GizmoSlider::GizmoSlider__ctor
              ((GizmoSlider *)this,pGVar4,(int32_t)handleId_00,(MethodInfo *)0x0);
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar14,(Shape2D *)(this->fields)._segment,(MethodInfo *)0x0);
    (this->fields)._segmentIndex = iVar15;
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar14,(Shape2D *)(this->fields)._quad,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._._gizmo;
    (this->fields)._quadIndex = iVar15;
    pGVar6 = (this->fields)._controllerData;
    if (pGVar6 == (GizmoLineSlider2DControllerData *)0x0) goto code_?;
    (pGVar6->fields).Gizmo = pGVar4;
    func_?();
    pGVar6 = (this->fields)._controllerData;
    if (pGVar6 == (GizmoLineSlider2DControllerData *)0x0) goto code_?;
    (pGVar6->fields).Slider = this;
    func_?();
    pGVar6 = (this->fields)._controllerData;
    if (pGVar6 == (GizmoLineSlider2DControllerData *)0x0) goto code_?;
    (pGVar6->fields).SliderHandle = (this->fields)._._handle;
    func_?();
    pGVar6 = (this->fields)._controllerData;
    if (pGVar6 == (GizmoLineSlider2DControllerData *)0x0) goto code_?;
    (pGVar6->fields).Segment = (this->fields)._segment;
    func_?();
    pGVar6 = (this->fields)._controllerData;
    if (pGVar6 == (GizmoLineSlider2DControllerData *)0x0) goto code_?;
    (pGVar6->fields).SegmentIndex = (this->fields)._segmentIndex;
    pGVar6 = (this->fields)._controllerData;
    if (pGVar6 == (GizmoLineSlider2DControllerData *)0x0) goto code_?;
    (pGVar6->fields).Quad = (this->fields)._quad;
    func_?();
    pGVar6 = (this->fields)._controllerData;
    if (pGVar6 == (GizmoLineSlider2DControllerData *)0x0) goto code_?;
    (pGVar6->fields).QuadIndex = (this->fields)._quadIndex;
    pIVar7 = (this->fields)._controllers;
    pOVar16 = (Object__Class *)(this->fields)._controllerData;
    method_03 = TypeInfo__RTG__GizmoThinLineSlider2DController;
    pOVar17 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar17,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    pOVar17[1].klass = pOVar16;
    func_?();
    if (pIVar7 == (IGizmoLineSlider2DController__Array *)0x0) goto code_?;
    iVar18 = func_?();
    if (iVar18 == 0) goto code_?;
    if (pIVar7->max_length == 0) goto code_?;
    pIVar7->vector[0] = (IGizmoLineSlider2DController *)pOVar17;
    func_?();
    pIVar7 = (this->fields)._controllers;
    pOVar16 = (Object__Class *)(this->fields)._controllerData;
    method_02 = TypeInfo__RTG__GizmoBoxLineSlider2DController;
    pOVar17 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar17,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    pOVar17[1].klass = pOVar16;
    func_?();
    if (pIVar7 == (IGizmoLineSlider2DController__Array *)0x0) goto code_?;
    iVar18 = func_?();
    if (iVar18 != 0) {
      if (pIVar7->max_length < 2) goto code_?;
      pIVar7->vector[1] = (IGizmoLineSlider2DController *)pOVar17;
      func_?();
      pGVar19 = (GizmoCap2D *)func_?();
      GizmoCap2D::GizmoCap2D__ctor(pGVar19,(Gizmo *)this,(int32_t)handleId_00,(MethodInfo *)0x0);
      (this->fields)._cap2D = pGVar19;
      func_?();
      pGVar19 = (this->fields)._cap2D;
      pGVar8 = (&(this->fields)._lookAndFeel)
                [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
      if ((pGVar8 != (GizmoLineSlider2DLookAndFeel *)0x0) && (pGVar19 != (GizmoCap2D *)0x0)) {
        (pGVar19->fields)._sharedLookAndFeel = (pGVar8->fields)._capLookAndFeel;
        func_?();
        (this->fields)._selectedDragSession = (IGizmoDragSession *)(this->fields)._offsetDrag;
        (this->fields)._dragChannel = 1;
        func_?();
        pGVar14 = (this->fields)._._handle;
        if (pGVar14 != (GizmoHandle *)0x0) {
          (pGVar14->fields)._DragSession_k__BackingField = (this->fields)._selectedDragSession;
          func_?();
          this_00 = (GizmoCap3D *)(this->fields)._cap2D;
          if (this_00 != (GizmoCap3D *)0x0) {
            GizmoCap3D::GizmoCap3D_set_DragSession
                      (this_00,(this->fields)._selectedDragSession,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._._gizmo;
            if (pGVar4 != (Gizmo *)0x0) {
              pGVar20 = (this->fields)._offsetDrag;
              pGVar3 = (pGVar4->fields)._transform;
              if (pGVar20 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                GizmoDragSession::GizmoDragSession_AddTargetTransform
                          ((GizmoDragSession *)pGVar20,pGVar3,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._rotationDrag;
                if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
                  GizmoDragSession::GizmoDragSession_AddTargetTransform
                            ((GizmoDragSession *)pGVar1,pGVar3,(MethodInfo *)0x0);
                  pGVar2 = (this->fields)._scaleDrag;
                  if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
                    GizmoDragSession::GizmoDragSession_AddTargetTransform
                              ((GizmoDragSession *)pGVar2,pGVar3,(MethodInfo *)0x0);
                    pGVar20 = (this->fields)._offsetDrag;
                    pGVar3 = (this->fields)._transform;
                    if (pGVar20 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                      GizmoDragSession::GizmoDragSession_AddTargetTransform
                                ((GizmoDragSession *)pGVar20,pGVar3,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._rotationDrag;
                      if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
                        GizmoDragSession::GizmoDragSession_AddTargetTransform
                                  ((GizmoDragSession *)pGVar1,pGVar3,(MethodInfo *)0x0);
                        pGVar2 = (this->fields)._scaleDrag;
                        if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
                          GizmoDragSession::GizmoDragSession_AddTargetTransform
                                    ((GizmoDragSession *)pGVar2,pGVar3,(MethodInfo *)0x0);
                          pGVar19 = (this->fields)._cap2D;
                          if (pGVar19 != (GizmoCap2D *)0x0) {
                            GizmoCap2D::GizmoCap2D_RegisterTransformAsDragTarget
                                      (pGVar19,(IGizmoDragSession *)(this->fields)._offsetDrag,
                                       (MethodInfo *)0x0);
                            pGVar19 = (this->fields)._cap2D;
                            if (pGVar19 != (GizmoCap2D *)0x0) {
                              GizmoCap2D::GizmoCap2D_RegisterTransformAsDragTarget
                                        (pGVar19,(IGizmoDragSession *)(this->fields)._rotationDrag,
                                         (MethodInfo *)0x0);
                              pGVar3 = (this->fields)._transform;
                              value_00 = (GizmoEntityTransformChangedHandler *)func_?();
                              Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::
                              SerializationCallback::SerializationCallback__ctor
                                        ((SerializationCallback *)value_00,(Object *)this,
                                         MethodInfo__RTG__GizmoLineSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                                         ,(MethodInfo *)0x0);
                              if (pGVar3 != (GizmoTransform *)0x0) {
                                GizmoTransform::GizmoTransform_add_Changed
                                          (pGVar3,value_00,(MethodInfo *)0x0);
                                if ((this != (GizmoLineSlider2D *)0x0) &&
                                   (pGVar3 = (this->fields)._transform,
                                   pGVar3 != (GizmoTransform *)0x0)) {
                                  GizmoTransform::GizmoTransform_SetParent
                                            (pGVar3,this[1].fields._transform,(MethodInfo *)0x0);
                                  pGVar4 = (this->fields)._._gizmo;
                                  value_01 = (GizmoPreUpdateBeginHandler *)func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                                  VideoCapture+OnVideoCaptureResourceCreatedCallback::
                                  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                                            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                                             value_01,(Object *)this,
                                             MethodInfo__RTG__GizmoLineSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                             ,(MethodInfo *)0x0);
                                  if (pGVar4 != (Gizmo *)0x0) {
                                    Gizmo::Gizmo_add_PreUpdateBegin
                                              (pGVar4,value_01,(MethodInfo *)0x0);
                                    pGVar4 = (this->fields)._._gizmo;
                                    value_02 = (GizmoPreDragUpdateHandler *)func_?();
                                    mscorlib.dll::System::EventHandler`1[Object]::
                                    EventHandler_1_Object___ctor
                                              ((EventHandler_1_Object_ *)value_02,(Object *)this,
                                               MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_
                                               ,(MethodInfo *)0x0);
                                    if (pGVar4 != (Gizmo *)0x0) {
                                      Gizmo::Gizmo_add_PreDragUpdate
                                                (pGVar4,value_02,(MethodInfo *)0x0);
                                      pGVar4 = (this->fields)._._gizmo;
                                      value_03 = (GizmoPreDragBeginAttemptHandler *)
                                                 func_?();
                                      mscorlib.dll::System::EventHandler`1[Object]::
                                      EventHandler_1_Object___ctor
                                                ((EventHandler_1_Object_ *)value_03,(Object *)this,
                                                 MethodInfo__RTG__GizmoLineSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                                                 ,(MethodInfo *)0x0);
                                      if (pGVar4 != (Gizmo *)0x0) {
                                        Gizmo::Gizmo_add_PreDragBeginAttempt
                                                  (pGVar4,value_03,(MethodInfo *)0x0);
                                        pGVar4 = (this->fields)._._gizmo;
                                        value_04 = (GizmoPreHoverEnterHandler *)func_?();
                                        mscorlib.dll::System::EventHandler`1[Object]::
                                        EventHandler_1_Object___ctor
                                                  ((EventHandler_1_Object_ *)value_04,(Object *)this
                                                   ,
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_
                                                  ,(MethodInfo *)0x0);
                                        if (pGVar4 != (Gizmo *)0x0) {
                                          Gizmo::Gizmo_add_PreHoverEnter
                                                    (pGVar4,value_04,(MethodInfo *)0x0);
                                          pGVar4 = (this->fields)._._gizmo;
                                          value_05 = (GizmoPreHoverExitHandler *)func_?();
                                          mscorlib.dll::System::EventHandler`1[Object]::
                                          EventHandler_1_Object___ctor
                                                    ((EventHandler_1_Object_ *)value_05,
                                                     (Object *)this,
                                                                                                          
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleHoverExit_RTG__Gizmo__int_
                                                  ,(MethodInfo *)0x0);
                                          if (pGVar4 != (Gizmo *)0x0) {
                                            Gizmo::Gizmo_add_PreHoverExit
                                                      (pGVar4,value_05,(MethodInfo *)0x0);
                                            pGVar4 = (this->fields)._._gizmo;
                                            value_06 = (GizmoPostEnabledHandler *)func_?();
                                            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam
                                            ::VideoCapture+OnVideoCaptureResourceCreatedCallback::
                                            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                                                      ((
                                                  VideoCapture_OnVideoCaptureResourceCreatedCallback
                                                  *)value_06,(Object *)this,
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoPostEnabled_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                            if (pGVar4 != (Gizmo *)0x0) {
                                              Gizmo::Gizmo_add_PostEnabled
                                                        (pGVar4,value_06,(MethodInfo *)0x0);
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


/* Int32 get_Cap2DHandleId() */

int32_t Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_Cap2DHandleId
                  (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap2D;
  if ((pGVar1 != (GizmoCap2D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    return (pGVar2->fields)._id;
  }
  puStack_3 = &stack0xfffffffc;
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Vector2 get_Direction() */

Vector2 Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_Direction
                  (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._directionAxisMap;
  if (pGVar1 != (GizmoTransformAxisMap2D *)0x0) {
    if ((pGVar1->fields)._transform == (GizmoTransform *)0x0) {
      fStack_2 = (pGVar1->fields)._freeAxis.x;
      fStack_3 = (pGVar1->fields)._freeAxis.y;
    }
    else {
      pGVar4 = (pGVar1->fields)._transform;
      if (((pGVar4 == (GizmoTransform *)0x0) ||
          (this_00 = (WebCompletionSource_1_T_Result_System_Object_ *)
                     (pGVar1->fields)._mappedAxisDesc,
          this_00 == (WebCompletionSource_1_T_Result_System_Object_ *)0x0)) ||
         (pVVar5 = (pGVar4->fields)._axes2D, pVVar5 == (Vector2__Array *)0x0))
      goto code_?;
      pEVar6 = (this_00->fields)._Error_k__BackingField;
      if ((ExceptionDispatchInfo *)pVVar5->max_length <= pEVar6) {
        func_?();
        pcVar7 = (code *)swi(3);
        VVar8 = (Vector2)(*pcVar7)();
        return VVar8;
      }
      fVar9 = pVVar5->vector[(int)pEVar6].x;
      fStack_3 = pVVar5->vector[(int)pEVar6].y;
      fStack_2 = fVar9;
      puStack_10 = (undefined1 *)fStack_3;
      bVar11 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success(this_00,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        VVar8.y = (float)((uint)puStack_10 ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        VVar8.x = (float)((uint)fVar9 ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        return VVar8;
      }
    }
    VVar12.y = fStack_3;
    VVar12.x = fStack_2;
    return VVar12;
  }
code_?:
  puStack_10 = &stack0xfffffffc;
  uVar13 = func_?(&fStack_2);
  func_?(uVar13);
  pcVar7 = (code *)swi(3);
  VVar8 = (Vector2)(*pcVar7)();
  return VVar8;
}


/* Boolean get_Is2DCapHoverable() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_Is2DCapHoverable
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._cap2D;
  if (pGVar2 != (GizmoCap2D *)0x0) {
    return (pGVar2->fields)._._isHoverable;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_Is2DCapVisible() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_Is2DCapVisible
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._cap2D;
  if (pGVar2 != (GizmoCap2D *)0x0) {
    return (pGVar2->fields)._._isVisible;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsDragged() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_IsDragged
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    pGVar2 = (this->fields)._._gizmo;
    if (pGVar2 != (Gizmo *)0x0) {
      pSVar3 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::PointerEventBase`1[System
               ::Object]::PointerEventBase_1_System_Object__get_pointerType
                         ((PointerEventBase_1_System_Object_ *)pGVar2,(MethodInfo *)0x0);
      pSVar4 = (String *)
               mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
               SparselyPopulatedArrayFragment_1_System_Object__get_Length
                         ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0)
      ;
      if (pSVar3 == pSVar4) {
        return 1;
      }
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        pSVar3 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerEventBase`1[System::Object]::
                 PointerEventBase_1_System_Object__get_pointerType
                           ((PointerEventBase_1_System_Object_ *)pGVar2,(MethodInfo *)0x0);
        this_01 = (this->fields)._cap2D;
        if (this_01 != (GizmoCap2D *)0x0) {
          pSVar4 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                   AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_01,(MethodInfo *)0x0);
          return pSVar3 == pSVar4;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Boolean get_IsMoving() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_IsMoving
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._offsetDrag;
  if (pGStack_2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
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

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_IsScaling
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._scaleDrag;
  if (pGStack_2 != (GizmoSglAxisScaleDrag3D *)0x0) {
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


/* GizmoLineSlider2DLookAndFeel get_LookAndFeel() */

GizmoLineSlider2DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_LookAndFeel
          (GizmoLineSlider2D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector3 get_RelativeDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_RelativeDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._offsetDrag;
  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
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

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_RelativeDragRotation
                (GizmoLineSlider2D *this,MethodInfo *method)

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


/* Single get_RelativeDragScale() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_RelativeDragScale
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
    return (pGVar2->fields)._relativeScale;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoLineSlider2D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_RotationDegrees
                (GizmoLineSlider2D *this,MethodInfo *method)

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


/* GizmoLineSlider2DSettings get_Settings() */

GizmoLineSlider2DSettings *
Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_Settings
          (GizmoLineSlider2D *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings != (GizmoLineSlider2DSettings *)0x0) {
    return (this->fields)._sharedSettings;
  }
  return (this->fields)._settings;
}


/* Vector2 get_StartPosition() */

Vector2 Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_StartPosition
                  (GizmoLineSlider2D *this,MethodInfo *method)

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


/* Vector3 get_TotalDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_TotalDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._offsetDrag;
  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
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

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_TotalDragRotation
                (GizmoLineSlider2D *this,MethodInfo *method)

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


/* Single get_TotalDragScale() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_TotalDragScale
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
    return (pGVar2->fields)._totalScale;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_ScaleDragOrigin(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_set_ScaleDragOrigin
               (GizmoLineSlider2D *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._scaleDragOrigin.x = value.x;
  (this->fields)._scaleDragOrigin.y = value.y;
  (this->fields)._scaleDragOrigin.z = value.z;
  return;
}


/* Void set_SharedLookAndFeel(GizmoLineSlider2DLookAndFeel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_set_SharedLookAndFeel
               (GizmoLineSlider2D *this,GizmoLineSlider2DLookAndFeel *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  pGVar1 = (this->fields)._cap2D;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) && (pGVar1 != (GizmoCap2D *)0x0)) {
    pGVar3 = (pGVar2->fields)._capLookAndFeel;
    (pGVar1->fields)._sharedLookAndFeel = pGVar3;
    func_?(&(pGVar1->fields)._sharedLookAndFeel,pGVar3);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_StartPosition(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
               (GizmoLineSlider2D *this,Vector2 value,MethodInfo *method)

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

