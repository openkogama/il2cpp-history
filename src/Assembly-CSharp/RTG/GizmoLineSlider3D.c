
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_AddTargetTransform
               (GizmoLineSlider3D *this,GizmoTransform *transform,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_AddTargetTransform_1
               (GizmoLineSlider3D *this,GizmoTransform *transform,GizmoDragChannel__Enum dragChannel
               ,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    this_00 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    this_00 = (this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
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


/* Void ApplyZoomFactor(Camera) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_ApplyZoomFactor
               (GizmoLineSlider3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pGVar2 = pGVar1;
  if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._useZoomFactor == 0) {
      return;
    }
    if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      zoomFactor = _UNK_?;
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_00 = (this->fields)._._handle;
        if (this_00 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar3 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
         (pIVar3 != (IGizmoLineSlider3DController__Array *)0x0)) {
        uVar4 = (pGVar1->fields)._lineType;
        if (pIVar3->max_length <= uVar4) goto code_?;
        if (pIVar3->vector[uVar4] != (IGizmoLineSlider3DController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar3->vector[uVar4],
                          zoomFactor);
          pGVar5 = (this->fields)._cap3D;
          if (pGVar5 != (GizmoCap3D *)0x0) {
            GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar5,camera,(MethodInfo *)0x0);
            pGVar5 = (this->fields)._cap3D;
            pVVar6 = GizmoLineSlider3D_GetRealDirection(&VStack_7,this,(MethodInfo *)0x0);
            uStack_8._0_4_ = pVVar6->x;
            uStack_8._4_4_ = pVVar6->y;
            fVar9 = pVVar6->z;
            pVVar6 = GizmoLineSlider3D_GetRealEndPosition
                               (&VStack_7,this,zoomFactor,(MethodInfo *)0x0);
            if (pGVar5 != (GizmoCap3D *)0x0) {
              sliderDirection.z = fVar9;
              sliderDirection.x = (float)(undefined4)uStack_8;
              sliderDirection.y = (float)uStack_8._4_4_;
              GizmoCap3D::GizmoCap3D_CapSlider3D(pGVar5,sliderDirection,*pVVar6,(MethodInfo *)0x0);
              return;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Single GetRealBoxDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxDepth
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sharedLookAndFeel;
  pGVar3 = pGVar2;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
     (pGVar3 = (this->fields)._lookAndFeel, pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
    if ((pGVar3->fields)._useZoomFactor == 0) {
      zoomFactor = 1.0;
    }
    if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      return (pGVar2->fields)._scale * (pGVar2->fields)._boxDepth * zoomFactor;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Single GetRealBoxHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxHeight
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sharedLookAndFeel;
  pGVar3 = pGVar2;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
     (pGVar3 = (this->fields)._lookAndFeel, pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
    if ((pGVar3->fields)._useZoomFactor == 0) {
      zoomFactor = 1.0;
    }
    if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      return (pGVar2->fields)._scale * (pGVar2->fields)._boxHeight * zoomFactor;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Single GetRealCylinderRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealCylinderRadius
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sharedLookAndFeel;
  pGVar3 = pGVar2;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
     (pGVar3 = (this->fields)._lookAndFeel, pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
    if ((pGVar3->fields)._useZoomFactor == 0) {
      zoomFactor = 1.0;
    }
    if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      return (pGVar2->fields)._scale * (pGVar2->fields)._cylinderRadius * zoomFactor;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Vector3 GetRealDirection() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

{
  fStack_1 = _UNK_?;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
  cVar3 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                    (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar3 == '\0') {
    this_00 = (DataTable *)(this->fields)._._gizmo;
    if (this_00 == (DataTable *)0x0) goto code_?;
    bVar4 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pGVar5 = (this->fields)._._gizmo;
      if (pGVar5 == (Gizmo *)0x0) goto code_?;
      handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerEventBase`1[System::Object]::
                 PointerEventBase_1_System_Object__get_pointerType
                           ((PointerEventBase_1_System_Object_ *)pGVar5,(MethodInfo *)0x0);
      bVar4 = GizmoLineSlider3D_IsScalerHandleRegistered_1
                        (this,(int32_t)handleId,(this->fields)._scaleDragAxisIndex,(MethodInfo *)0x0
                        );
      if (bVar4 != 0) {
        pGVar5 = (this->fields)._._gizmo;
        if (pGVar5 == (Gizmo *)0x0) goto code_?;
        pVVar6 = Gizmo::Gizmo_get_TotalDragScale(&VStack_7,pGVar5,(MethodInfo *)0x0);
        VStack_8.x = pVVar6->x;
        VStack_8.y = pVVar6->y;
        VStack_8.z = pVVar6->z;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                          (&VStack_8,(this->fields)._scaleDragAxisIndex,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  else {
    pGVar2 = (this->fields)._scaleDrag;
    if (pGVar2 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
    fVar9 = (pGVar2->fields)._totalScale;
code_?:
    fStack_1 = _UNK_?;
    if (_UNK_? <= fVar9) {
      fStack_1 = _UNK_?;
    }
  }
  this_01 = (this->fields)._directionAxisMap;
  if (this_01 != (GizmoTransformAxisMap3D *)0x0) {
    pVVar6 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                       (&VStack_7,this_01,(MethodInfo *)0x0);
    uVar10 = pVVar6->x;
    uVar11 = pVVar6->y;
    fVar9 = pVVar6->z;
    __return_storage_ptr__->x = (float)uVar10 * fStack_1;
    __return_storage_ptr__->y = (float)uVar11 * fStack_1;
    __return_storage_ptr__->z = fVar9 * fStack_1;
    return __return_storage_ptr__;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar12)();
  return pVVar6;
}


/* Vector3 GetRealEndPosition(Single) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPosition
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,float zoomFactor,
                    MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    uVar2 = (pGVar1->fields)._position3D.x;
    uVar3 = (pGVar1->fields)._position3D.y;
    fVar4 = (pGVar1->fields)._position3D.z;
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
      pVVar5 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                         ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      fVar8 = pVVar5->z;
      fVar9 = GizmoLineSlider3D_GetRealLength(this,zoomFactor,(MethodInfo *)0x0);
      __return_storage_ptr__->x = (float)uVar2 + (float)uVar6 * fVar9;
      __return_storage_ptr__->y = (float)uVar3 + (float)uVar7 * fVar9;
      __return_storage_ptr__->z = fVar4 + fVar8 * fVar9;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar10)();
  return pVVar5;
}


/* Vector3 GetRealEndPositionWith3DCap(Single) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPositionWith3DCap
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,float zoomFactor,
                    MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._position3D.z;
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
      pVVar3 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                         ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
      uVar4 = pVVar3->x;
      uVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      this_01 = (this->fields)._cap3D;
      if (this_01 != (GizmoCap3D *)0x0) {
        fVar7 = GizmoCap3D::GizmoCap3D_GetSliderAlignedRealLength
                          (this_01,zoomFactor,(MethodInfo *)0x0);
        fVar8 = 0.0;
        fVar9 = GizmoLineSlider3D_GetRealLength(this,zoomFactor,(MethodInfo *)0x0);
        fVar9 = fVar9 + fVar7;
        __return_storage_ptr__->x = zoomFactor + (float)uVar4 * fVar9;
        __return_storage_ptr__->y = fVar8 + (float)uVar5 * fVar9;
        __return_storage_ptr__->z = fVar2 + fVar6 * fVar9;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar10)();
  return pVVar3;
}


/* Single GetRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pGVar2 = pGVar1;
  if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      pGVar3 = (this->fields)._scaleDrag;
      fVar4 = (pGVar1->fields)._length * (pGVar1->fields)._scale * zoomFactor;
      fStack_5 = fVar4;
      if (pGVar3 != (GizmoSglAxisScaleDrag3D *)0x0) {
        cVar6 = (*(code *)(pGVar3->klass->vtable).get_IsActive_1.method)
                          (pGVar3,(pGVar3->klass->vtable).get_DragChannel_1.methodPtr);
        if (cVar6 == '\0') {
          this_00 = (DataTable *)(this->fields)._._gizmo;
          if (this_00 != (DataTable *)0x0) {
            bVar7 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                              (this_00,(MethodInfo *)0x0);
            if (bVar7 == 0) {
              return fVar4;
            }
            pGVar8 = (this->fields)._._gizmo;
            if (pGVar8 != (Gizmo *)0x0) {
              handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                         PointerEventBase`1[System::Object]::
                         PointerEventBase_1_System_Object__get_pointerType
                                   ((PointerEventBase_1_System_Object_ *)pGVar8,(MethodInfo *)0x0);
              bVar7 = GizmoLineSlider3D_IsScalerHandleRegistered_1
                                (this,(int32_t)handleId,(this->fields)._scaleDragAxisIndex,
                                 (MethodInfo *)0x0);
              if (bVar7 == 0) {
                return fVar4;
              }
              pGVar8 = (this->fields)._._gizmo;
              if (pGVar8 != (Gizmo *)0x0) {
                pVVar9 = Gizmo::Gizmo_get_TotalDragScale(&VStack_10,pGVar8,(MethodInfo *)0x0);
                VStack_11.x = pVVar9->x;
                VStack_11.y = pVVar9->y;
                VStack_11.z = pVVar9->z;
                fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                   (&VStack_11,(this->fields)._scaleDragAxisIndex,(MethodInfo *)0x0)
                ;
                return fVar12 * fVar4;
              }
            }
          }
        }
        else {
          pGVar3 = (this->fields)._scaleDrag;
          if (pGVar3 != (GizmoSglAxisScaleDrag3D *)0x0) {
            return fStack_5 * (pGVar3->fields)._totalScale;
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  fVar14 = (float10)(*pcVar13)();
  return (float)fVar14;
}


/* Single GetRealLengthWith3DCap(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealLengthWith3DCap
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  this_00 = (this->fields)._cap3D;
  if (this_00 != (GizmoCap3D *)0x0) {
    fVar1 = GizmoCap3D::GizmoCap3D_GetSliderAlignedRealLength(this_00,zoomFactor,(MethodInfo *)0x0);
    fVar2 = GizmoLineSlider3D_GetRealLength(this,zoomFactor,(MethodInfo *)0x0);
    return fVar2 + fVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetRealSizeAlongDirection(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealSizeAlongDirection
                (GizmoLineSlider3D *this,Camera *camera,Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pIVar2 = (this->fields)._controllers;
  if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._lineType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    this_00 = (this->fields)._._gizmo;
    pIVar4 = pIVar2->vector[uVar3];
    if (this_00 != (Gizmo *)0x0) {
      camera_00 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sharedLookAndFeel;
      if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
        fVar5 = _UNK_?;
        if ((pGVar1->fields)._useZoomFactor != 0) {
          this_01 = (this->fields)._._handle;
          if (this_01 == (GizmoHandle *)0x0) goto code_?;
          fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera_00,(MethodInfo *)0x0);
        }
        if (pIVar4 != (IGizmoLineSlider3DController *)0x0) {
          pIVar6 = pIVar4->klass;
          uVar7 = 0;
          uVar8._0_1_ = (pIVar6->_1).rank;
          uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                  (Il2CppClass *)TypeInfo__RTG__IGizmoLineSlider3DController) {
                ppMVar9 = &(&(pIVar4->klass->vtable).GetRealSizeAlongDirection)
                           [pIVar6->interfaceOffsets[uVar7].offset].method;
                goto code_?;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar8);
          }
          ppMVar9 = (MethodInfo **)
                    func_?(pIVar4,TypeInfo__RTG__IGizmoLineSlider3DController,3);
code_?:
          fVar10 = (float10)(*(code *)*ppMVar9)(pIVar4,direction._0_8_,direction.z,fVar5,ppMVar9[1]
                                               );
          return (float)fVar10;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  fVar10 = (float10)(*pcVar11)();
  return (float)fVar10;
}

/* decompilation failed: Exception while decompiling 1057d980: Decompiler process died */


/* Boolean IsScalerHandleRegistered(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_IsScalerHandleRegistered
               (GizmoLineSlider3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Count__
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
                   );
    func_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)handleId;
    this_00 = (this->fields)._scalerHandles;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
               MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoScalerHandle_ *)0x0) {
      pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)this_00,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                         );
      if (pLVar1 != (List_1_System_Object_ *)0x0) {
        return (pLVar1->fields)._size != 0;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsScalerHandleRegistered(Int32, Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_IsScalerHandleRegistered_1
               (GizmoLineSlider3D *this,int32_t handleId,int32_t scaleDragAxisIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass79_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
                   );
    func_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass79_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass79_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)handleId;
    this_00 = (this->fields)._scalerHandles;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
               MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass79_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoScalerHandle_ *)0x0) {
      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__FindAll
                          ((List_1_System_Object_ *)this_00,this_01,
                           MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                          );
      if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        if ((this_02->fields)._size == 0) {
          return 0;
        }
        this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_02,0,
                             MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Item_int_
                            );
        if (this_03 != (RegexCharClass_SingleRange)0x0) {
          bVar1 = GizmoScalerHandle::GizmoScalerHandle_ContainsScaleDragAxisIndex
                            ((GizmoScalerHandle *)this_03,scaleDragAxisIndex,(MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void MapDirection(Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
               (GizmoLineSlider3D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method
               )

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 == (GizmoTransformAxisMap3D *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
              (this_00,(this->fields)._transform,axisIndex,axisSign,(MethodInfo *)0x0);
  }
  return;
}


/* Void MapDragRotationAxis(GizmoTransform, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_MapDragRotationAxis
               (GizmoLineSlider3D *this,GizmoTransform *mapTransform,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((this->fields)._dragRotationAxisMap != (GizmoTransformAxisMap3D *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (axisSign != AxisSign__Enum_Positive) {
      this_00 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
      AxisDescriptor::AxisDescriptor__ctor(this_00,0,in_stack_2,(MethodInfo *)0x0);
      *(undefined4 *)(axisIndex + 0x14) = this_00;
      func_?((undefined4 *)(axisIndex + 0x14),this_00);
      *(AxisSign__Enum *)(axisIndex + 0x18) = axisSign;
      func_?((AxisSign__Enum *)(axisIndex + 0x18),axisSign);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoAttemptHandleDragBegin
               (GizmoLineSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (handleId != (pGVar1->fields)._id) {
      this_00 = (this->fields)._cap3D;
      if (this_00 == (GizmoCap3D *)0x0) goto code_?;
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
      if ((void *)handleId != pvVar2) {
        return;
      }
    }
    iVar3 = (this->fields)._dragChannel;
    if (iVar3 == 1) {
      pGVar4 = (this->fields)._directionAxisMap;
      if (pGVar4 != (GizmoTransformAxisMap3D *)0x0) {
        pVVar5 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                            ((Vector3 *)&stack0xffffffc8,pGVar4,(MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        pGVar8 = (this->fields)._transform;
        if (pGVar8 != (GizmoTransform *)0x0) {
          pGVar9 = (this->fields)._sharedSettings;
          if ((pGVar9 != (GizmoLineSlider3DSettings *)0x0) ||
             (pGVar9 = (this->fields)._settings, pGVar9 != (GizmoLineSlider3DSettings *)0x0)) {
            this_05 = (this->fields)._offsetDrag;
            if (this_05 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              workData_01.Axis.x = (float)uVar6;
              workData_01.DragOrigin = (pGVar8->fields)._position3D;
              workData_01.Axis.y = (float)uVar7;
              workData_01.Axis.z = pVVar5->z;
              workData_01.SnapStep = (pGVar9->fields)._offsetSnapStep;
              GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
                        (this_05,workData_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if (iVar3 == 2) {
      pGVar4 = (this->fields)._dragRotationAxisMap;
      if (pGVar4 != (GizmoTransformAxisMap3D *)0x0) {
        pVVar5 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                            ((Vector3 *)&stack0xffffffc8,pGVar4,(MethodInfo *)0x0);
        uVar10 = pVVar5->x;
        uVar11 = pVVar5->y;
        pGVar8 = (this->fields)._transform;
        if (pGVar8 != (GizmoTransform *)0x0) {
          pGVar9 = (this->fields)._sharedSettings;
          if ((pGVar9 != (GizmoLineSlider3DSettings *)0x0) ||
             (pGVar9 = (this->fields)._settings, pGVar9 != (GizmoLineSlider3DSettings *)0x0)) {
            this_02 = (this->fields)._rotationDrag;
            if (this_02 != (GizmoSglAxisRotationDrag3D *)0x0) {
              workData_00.Axis.x = (float)uVar10;
              workData_00.RotationPlanePos = (pGVar8->fields)._position3D;
              workData_00.Axis.y = (float)uVar11;
              workData_00.Axis.z = pVVar5->z;
              workData_00.SnapMode = (pGVar9->fields)._rotationSnapMode;
              workData_00.SnapStep = (pGVar9->fields)._rotationSnapStep;
              GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                        (this_02,workData_00,(MethodInfo *)0x0);
              pGVar4 = (this->fields)._dragRotationAxisMap;
              this_03 = (this->fields)._rotationArc;
              if (pGVar4 != (GizmoTransformAxisMap3D *)0x0) {
                pVVar5 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                                    ((Vector3 *)&stack0xffffffc8,pGVar4,(MethodInfo *)0x0);
                uVar12._0_4_ = pVVar5->x;
                uVar12._4_4_ = pVVar5->y;
                fVar13 = pVVar5->z;
                pGVar8 = (this->fields)._transform;
                if (pGVar8 != (GizmoTransform *)0x0) {
                  arcOrigin = (pGVar8->fields)._position3D;
                  pGVar4 = (this->fields)._directionAxisMap;
                  if (pGVar4 != (GizmoTransformAxisMap3D *)0x0) {
                    fVar14 = 0.0;
                    pVVar5 = (Vector3 *)&stack0xffffffc8;
                    pVVar15 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                                        (pVVar5,pGVar4,(MethodInfo *)0x0);
                    uVar16 = pVVar15->x;
                    uVar17 = pVVar15->y;
                    fVar18 = (float)uVar16 + (float)pVVar5;
                    fVar19 = (float)uVar17 + (float)pGVar4;
                    fVar14 = pVVar15->z + fVar14;
                    this_04 = (this->fields)._._gizmo;
                    if (this_04 != (Gizmo *)0x0) {
                      camera = Gizmo::Gizmo_get_FocusCamera(this_04,(MethodInfo *)0x0);
                      pGVar20 = (this->fields)._sharedLookAndFeel;
                      if ((pGVar20 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
                         (pGVar20 = (this->fields)._lookAndFeel,
                         pGVar20 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
                        fVar21 = _UNK_?;
                        if ((pGVar20->fields)._useZoomFactor != 0) {
                          pGVar1 = (this->fields)._._handle;
                          if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
                          uVar12 = ZEXT48(camera);
                          fVar21 = GizmoHandle::GizmoHandle_GetZoomFactor
                                             (pGVar1,camera,(MethodInfo *)0x0);
                        }
                        fVar21 = GizmoLineSlider3D_GetRealLength(this,fVar21,(MethodInfo *)0x0);
                        if (this_03 != (GizmoRotationArc3D *)0x0) {
                          rotationAxis.z = fVar13;
                          rotationAxis.x = (float)(int)uVar12;
                          rotationAxis.y = (float)(int)(uVar12 >> 0x20);
                          arcStart.y = fVar19;
                          arcStart.x = fVar18;
                          arcStart.z = fVar14;
                          GizmoRotationArc3D::GizmoRotationArc3D_SetArcData
                                    (this_03,rotationAxis,arcOrigin,arcStart,fVar21,
                                     (MethodInfo *)0x0);
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
    else {
      if (iVar3 != 3) {
        return;
      }
      pVVar5 = GizmoLineSlider3D_get_Direction((Vector3 *)&stack0xffffffc8,this,(MethodInfo *)0x0);
      uVar22 = pVVar5->x;
      uVar23 = pVVar5->y;
      pGVar8 = (this->fields)._transform;
      if (pGVar8 != (GizmoTransform *)0x0) {
        uVar24 = (pGVar8->fields)._position3D.x;
        uVar25 = (pGVar8->fields)._position3D.y;
        pGVar9 = (this->fields)._sharedSettings;
        if ((pGVar9 != (GizmoLineSlider3DSettings *)0x0) ||
           (pGVar9 = (this->fields)._settings, pGVar9 != (GizmoLineSlider3DSettings *)0x0)) {
          this_01 = (this->fields)._scaleDrag;
          if (this_01 != (GizmoSglAxisScaleDrag3D *)0x0) {
            workData.DragOrigin.x = (float)uVar24;
            workData.AxisIndex = (this->fields)._scaleDragAxisIndex;
            workData.DragOrigin.y = (float)uVar25;
            workData.DragOrigin.z = (pGVar8->fields)._position3D.z;
            workData.Axis.x = (float)uVar22;
            workData.Axis.y = (float)uVar23;
            workData.Axis.z = pVVar5->z;
            workData.SnapStep = (pGVar9->fields)._scaleSnapStep;
            workData.EntityScale = 1.0;
            GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_SetWorkData
                      (this_01,workData,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnGizmoHandleHoverEnter(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoHandleHoverEnter
               (GizmoLineSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
          SparselyPopulatedArrayFragment_1_System_Object__get_Length
                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
  pGVar2 = (this->fields)._cap3D;
  if (handleId == iVar1) {
    if ((pGVar2 == (GizmoCap3D *)0x0) ||
       (pGVar3 = (pGVar2->fields)._overrideColor, pGVar3 == (GizmoOverrideColor *)0x0))
    goto code_?;
    (pGVar3->fields)._isActive = 1;
    pGVar2 = (this->fields)._cap3D;
    if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
    pGVar3 = (pGVar2->fields)._overrideColor;
    pGVar4 = (this->fields)._sharedLookAndFeel;
    if (((pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
        (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0)) ||
       (pGVar5 = (pGVar4->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0))
    goto code_?;
    fVar6 = (pGVar5->fields)._hoveredColor.r;
    fVar7 = (pGVar5->fields)._hoveredColor.g;
    fVar8 = (pGVar5->fields)._hoveredColor.b;
    fVar9 = (pGVar5->fields)._hoveredColor.a;
  }
  else {
    if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
    pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar10) {
      return;
    }
    pGVar3 = (this->fields)._overrideColor;
    if (pGVar3 == (GizmoOverrideColor *)0x0) goto code_?;
    (pGVar3->fields)._isActive = 1;
    pGVar4 = (this->fields)._sharedLookAndFeel;
    pGVar3 = (this->fields)._overrideColor;
    if ((pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (this->fields)._lookAndFeel, pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0))
    goto code_?;
    fVar6 = (pGVar4->fields)._hoveredColor.r;
    fVar7 = (pGVar4->fields)._hoveredColor.g;
    fVar8 = (pGVar4->fields)._hoveredColor.b;
    fVar9 = (pGVar4->fields)._hoveredColor.a;
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoHandleHoverExit
               (GizmoLineSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
          SparselyPopulatedArrayFragment_1_System_Object__get_Length
                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._cap3D;
  if (handleId == iVar1) {
    if (this_00 == (GizmoCap3D *)0x0) goto code_?;
    pGVar2 = (this_00->fields)._overrideColor;
  }
  else {
    if (this_00 == (GizmoCap3D *)0x0) goto code_?;
    pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar3) {
      return;
    }
    pGVar2 = (this->fields)._overrideColor;
  }
  if (pGVar2 != (GizmoOverrideColor *)0x0) {
    (pGVar2->fields)._isActive = 0;
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoPostDisabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoPostDisabled
               (GizmoLineSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._overrideColor;
  if (pGVar2 != (GizmoOverrideColor *)0x0) {
    (pGVar2->fields)._isActive = 0;
    pGVar3 = (this->fields)._cap3D;
    if ((pGVar3 != (GizmoCap3D *)0x0) &&
       (pGVar2 = (pGVar3->fields)._overrideColor, pGVar2 != (GizmoOverrideColor *)0x0)) {
      (pGVar2->fields)._isActive = 0;
      return;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoPostEnabled
               (GizmoLineSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  GizmoLineSlider3D_Refresh(this,(MethodInfo *)0x0);
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoPreUpdateBegin
               (GizmoLineSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._lineType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if ((pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) &&
       (func_?(0,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3]),
       gizmo != (Gizmo *)0x0)) {
      camera = Gizmo::Gizmo_get_FocusCamera(gizmo,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sharedLookAndFeel;
      if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
        zoomFactor = _UNK_?;
        if ((pGVar1->fields)._useZoomFactor != 0) {
          this_00 = (this->fields)._._handle;
          if (this_00 == (GizmoHandle *)0x0) goto code_?;
          zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
        }
        pGVar4 = (this->fields)._sharedSettings;
        this_01 = (this->fields)._offsetDrag;
        if (((pGVar4 != (GizmoLineSlider3DSettings *)0x0) ||
            (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoLineSlider3DSettings *)0x0)) &&
           (this_01 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
          GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                    ((GizmoScreenDrag *)this_01,(pGVar4->fields)._offsetSensitivity,
                     (MethodInfo *)0x0);
          pGVar4 = (this->fields)._sharedSettings;
          this_02 = (this->fields)._rotationDrag;
          if (((pGVar4 != (GizmoLineSlider3DSettings *)0x0) ||
              (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoLineSlider3DSettings *)0x0)) &&
             (this_02 != (GizmoSglAxisRotationDrag3D *)0x0)) {
            GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                      ((GizmoScreenDrag *)this_02,(pGVar4->fields)._rotationSensitivity,
                       (MethodInfo *)0x0);
            pGVar4 = (this->fields)._sharedSettings;
            this_03 = (this->fields)._scaleDrag;
            if (((pGVar4 != (GizmoLineSlider3DSettings *)0x0) ||
                (pGVar4 = (this->fields)._settings, pGVar4 != (GizmoLineSlider3DSettings *)0x0)) &&
               (this_03 != (GizmoSglAxisScaleDrag3D *)0x0)) {
              GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                        ((GizmoScreenDrag *)this_03,(pGVar4->fields)._scaleSensitivity,
                         (MethodInfo *)0x0);
              pIVar2 = (this->fields)._controllers;
              if (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0) {
                if (pIVar2->max_length <= uVar3) goto code_?;
                if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,
                                  pIVar2->vector[uVar3],zoomFactor);
                  pIVar2 = (this->fields)._controllers;
                  if (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0) {
                    if (pIVar2->max_length <= uVar3) goto code_?;
                    if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
                      func_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,
                                      pIVar2->vector[uVar3],zoomFactor);
                      pGVar5 = (this->fields)._cap3D;
                      if (pGVar5 != (GizmoCap3D *)0x0) {
                        pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                 XDocumentTypeWrapper::XDocumentTypeWrapper_get_Public
                                           ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                        pPVar7 = GizmoSlider::GizmoSlider_get_GenericHoverPriority
                                           ((GizmoSlider *)this,(MethodInfo *)0x0);
                        if ((pPVar7 != (Priority *)0x0) && (pSVar6 != (String *)0x0)) {
                          (pSVar6->fields)._stringLength = (pPVar7->fields)._priority;
                          pGVar5 = (this->fields)._cap3D;
                          if (pGVar5 != (GizmoCap3D *)0x0) {
                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                     XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                               ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                            pXVar8 = System.Xml.dll::System::Xml::XmlNodeReader::
                                     XmlNodeReader_get_NameTable
                                               ((XmlNodeReader *)this,(MethodInfo *)0x0);
                            if ((pXVar8 != (XmlNameTable *)0x0) && (pSVar6 != (String *)0x0)) {
                              (pSVar6->fields)._stringLength = (int32_t)pXVar8[1].klass;
                              pGVar5 = (this->fields)._cap3D;
                              if (pGVar5 != (GizmoCap3D *)0x0) {
                                pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                         XDocumentTypeWrapper::
                                         XDocumentTypeWrapper_get_InternalSubset
                                                   ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0
                                                   );
                                pPVar7 = GizmoSlider::GizmoSlider_get_HoverPriority3D
                                                   ((GizmoSlider *)this,(MethodInfo *)0x0);
                                if ((pPVar7 != (Priority *)0x0) && (pSVar6 != (String *)0x0)) {
                                  (pSVar6->fields)._stringLength = (pPVar7->fields)._priority;
                                  pGVar5 = (this->fields)._cap3D;
                                  pVVar9 = GizmoLineSlider3D_GetRealDirection
                                                      (&VStack_10,this,(MethodInfo *)0x0);
                                  uStack_11._0_4_ = pVVar9->x;
                                  uStack_11._4_4_ = pVVar9->y;
                                  fVar12 = pVVar9->z;
                                  pVVar9 = GizmoLineSlider3D_GetRealEndPosition
                                                      (&VStack_10,this,zoomFactor,(MethodInfo *)0x0)
                                  ;
                                  if (pGVar5 != (GizmoCap3D *)0x0) {
                                    sliderDirection.z = fVar12;
                                    sliderDirection.x = (float)(undefined4)uStack_11;
                                    sliderDirection.y = (float)uStack_11._4_4_;
                                    GizmoCap3D::GizmoCap3D_CapSlider3D
                                              (pGVar5,sliderDirection,*pVVar9,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnHoverableStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnHoverableStateChanged
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._._handle;
  if (this_00 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_SetHoverable(this_00,(this->fields)._._isHoverable,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnTransformChanged
               (GizmoLineSlider3D *this,GizmoTransform *transform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    cRam_? = '\x01';
  }
  if ((changeData.ChangeReason != 1) && (changeData.TRSDimension != 2)) {
    return;
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._sharedLookAndFeel;
    if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      zoomFactor = _UNK_?;
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar2 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
         (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._lineType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3],
                          zoomFactor);
          this_02 = (this->fields)._cap3D;
          pVVar4 = GizmoLineSlider3D_GetRealDirection(&VStack_5,this,(MethodInfo *)0x0);
          uStack_6._0_4_ = pVVar4->x;
          uStack_6._4_4_ = pVVar4->y;
          fVar7 = pVVar4->z;
          pVVar4 = GizmoLineSlider3D_GetRealEndPosition
                             (&VStack_5,this,zoomFactor,(MethodInfo *)0x0);
          if (this_02 != (GizmoCap3D *)0x0) {
            sliderDirection.z = fVar7;
            sliderDirection.x = (float)(undefined4)uStack_6;
            sliderDirection.y = (float)uStack_6._4_4_;
            GizmoCap3D::GizmoCap3D_CapSlider3D(this_02,sliderDirection,*pVVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnVisibilityStateChanged
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pIVar2 = (this->fields)._controllers;
  if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._lineType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3]);
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._sharedLookAndFeel;
        if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
           (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
          zoomFactor = _UNK_?;
          if ((pGVar1->fields)._useZoomFactor != 0) {
            this_01 = (this->fields)._._handle;
            if (this_01 == (GizmoHandle *)0x0) goto code_?;
            zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
          }
          pGVar1 = (this->fields)._sharedLookAndFeel;
          pIVar2 = (this->fields)._controllers;
          if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
              (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0))
             && (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
            uVar3 = (pGVar1->fields)._lineType;
            if (pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
              func_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3],
                              zoomFactor);
              pGVar1 = (this->fields)._sharedLookAndFeel;
              pIVar2 = (this->fields)._controllers;
              if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
                  (pGVar1 = (this->fields)._lookAndFeel,
                  pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
                 (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
                uVar3 = (pGVar1->fields)._lineType;
                if (pIVar2->max_length <= uVar3) goto code_?;
                if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,
                                  pIVar2->vector[uVar3],zoomFactor);
                  this_02 = (this->fields)._cap3D;
                  pVVar4 = GizmoLineSlider3D_GetRealDirection(&VStack_5,this,(MethodInfo *)0x0);
                  uStack_6._0_4_ = pVVar4->x;
                  uStack_6._4_4_ = pVVar4->y;
                  fVar7 = pVVar4->z;
                  pVVar4 = GizmoLineSlider3D_GetRealEndPosition
                                     (&VStack_5,this,zoomFactor,(MethodInfo *)0x0);
                  if (this_02 != (GizmoCap3D *)0x0) {
                    sliderDirection.z = fVar7;
                    sliderDirection.x = (float)(undefined4)uStack_6;
                    sliderDirection.y = (float)uStack_6._4_4_;
                    GizmoCap3D::GizmoCap3D_CapSlider3D
                              (this_02,sliderDirection,*pVVar4,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_Refresh
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._sharedLookAndFeel;
    if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      zoomFactor = _UNK_?;
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar2 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
         (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._lineType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
          func_?(0,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3]);
          pGVar1 = (this->fields)._sharedLookAndFeel;
          pIVar2 = (this->fields)._controllers;
          if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
              (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0))
             && (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
            uVar3 = (pGVar1->fields)._lineType;
            if (pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
              func_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3],
                              zoomFactor);
              pGVar1 = (this->fields)._sharedLookAndFeel;
              pIVar2 = (this->fields)._controllers;
              if (((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
                  (pGVar1 = (this->fields)._lookAndFeel,
                  pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
                 (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
                uVar3 = (pGVar1->fields)._lineType;
                if (pIVar2->max_length <= uVar3) goto code_?;
                if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,
                                  pIVar2->vector[uVar3],zoomFactor);
                  this_02 = (this->fields)._cap3D;
                  pVVar4 = GizmoLineSlider3D_GetRealDirection(&VStack_5,this,(MethodInfo *)0x0);
                  uStack_6._0_4_ = pVVar4->x;
                  uStack_6._4_4_ = pVVar4->y;
                  fVar7 = pVVar4->z;
                  pVVar4 = GizmoLineSlider3D_GetRealEndPosition
                                     (&VStack_5,this,zoomFactor,(MethodInfo *)0x0);
                  if (this_02 != (GizmoCap3D *)0x0) {
                    sliderDirection.z = fVar7;
                    sliderDirection.x = (float)(undefined4)uStack_6;
                    sliderDirection.y = (float)uStack_6._4_4_;
                    GizmoCap3D::GizmoCap3D_CapSlider3D
                              (this_02,sliderDirection,*pVVar4,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RegisterScalerHandle(Int32, IEnumerable`1[System.Int32]) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_RegisterScalerHandle
               (GizmoLineSlider3D *this,int32_t handleId,
               IEnumerable_1_System_Int32_ *scaleDragAxisIndices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoScalerHandle);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__Add_RTG__GizmoScalerHandle_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Count__
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
                   );
    func_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)handleId;
    pLVar1 = (this->fields)._scalerHandles;
    this_00 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,value,
               MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
               ,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_RTG_GizmoScalerHandle_ *)0x0) {
      pLVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)pLVar1,this_00,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                         );
      if (pLVar2 != (List_1_System_Object_ *)0x0) {
        if ((pLVar2->fields)._size == 0) {
          pLVar1 = (this->fields)._scalerHandles;
          this_01 = (GizmoScalerHandle *)func_?(TypeInfo__RTG__GizmoScalerHandle);
          GizmoScalerHandle::GizmoScalerHandle__ctor
                    (this_01,handleId,scaleDragAxisIndices,(MethodInfo *)0x0);
          if (pLVar1 == (List_1_RTG_GizmoScalerHandle_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar1,(Object *)this_01,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__Add_RTG__GizmoScalerHandle_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_RemoveTargetTransform
               (GizmoLineSlider3D *this,GizmoTransform *transform,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_RemoveTargetTransform_1
               (GizmoLineSlider3D *this,GizmoTransform *transform,GizmoDragChannel__Enum dragChannel
               ,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    this_00 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    this_00 = (this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_Render
               (GizmoLineSlider3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    cRam_? = '\x01';
  }
  if ((this->fields)._._isVisible == 0) {
    pGVar1 = (this->fields)._cap3D;
    if (pGVar1 == (GizmoCap3D *)0x0) goto code_?;
    if ((pGVar1->fields)._._isVisible == 0) {
      return;
    }
  }
  pGVar2 = (this->fields)._overrideColor;
  if (pGVar2 != (GizmoOverrideColor *)0x0) {
    if ((pGVar2->fields)._isActive == 0) {
      this_00 = (this->fields)._._gizmo;
      if (this_00 == (Gizmo *)0x0) goto code_?;
      iVar3 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
               PointerCaptureEventBase`1[System::Object]::
               PointerCaptureEventBase_1_System_Object__get_pointerId
                         ((PointerCaptureEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
      iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
               SparselyPopulatedArrayFragment_1_System_Object__get_Length
                         ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0)
      ;
      pGVar5 = (this->fields)._sharedLookAndFeel;
      if (iVar3 == iVar4) {
        if ((pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar5 = (this->fields)._lookAndFeel, pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0))
        goto code_?;
        puStack_6 = (undefined *)(pGVar5->fields)._hoveredColor.r;
        puVar7 = (undefined *)(pGVar5->fields)._hoveredColor.g;
        puVar8 = (undefined *)(pGVar5->fields)._hoveredColor.b;
        pGVar9 = (GizmoSolidMaterial *)(pGVar5->fields)._hoveredColor.a;
      }
      else {
        if ((pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar5 = (this->fields)._lookAndFeel, pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0))
        goto code_?;
        puStack_6 = (undefined *)(pGVar5->fields)._color.r;
        puVar7 = (undefined *)(pGVar5->fields)._color.g;
        puVar8 = (undefined *)(pGVar5->fields)._color.b;
        pGVar9 = (GizmoSolidMaterial *)(pGVar5->fields)._color.a;
      }
    }
    else {
      puStack_6 = (undefined *)(pGVar2->fields)._color.r;
      puVar7 = (undefined *)(pGVar2->fields)._color.g;
      puVar8 = (undefined *)(pGVar2->fields)._color.b;
      pGVar9 = (GizmoSolidMaterial *)(pGVar2->fields)._color.a;
    }
    pGVar5 = (this->fields)._sharedLookAndFeel;
    if ((pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar5 = (this->fields)._lookAndFeel, pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      if ((pGVar5->fields)._isRotationArcVisible != 0) {
        pGVar10 = (this->fields)._rotationDrag;
        if (pGVar10 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
        cVar11 = (*(code *)(pGVar10->klass->vtable).get_IsActive_1.method)
                           (pGVar10,(pGVar10->klass->vtable).get_DragChannel_1.methodPtr);
        if (cVar11 != '\0') {
          pGVar10 = (this->fields)._rotationDrag;
          if (((pGVar10 == (GizmoSglAxisRotationDrag3D *)0x0) ||
              (pGVar12 = (this->fields)._rotationArc, pGVar12 == (GizmoRotationArc3D *)0x0)) ||
             (pAVar13 = (pGVar12->fields)._arc, pAVar13 == (ArcShape3D *)0x0)) goto code_?;
          ArcShape3D::ArcShape3D_set_DegreeAngleFromStart
                    (pAVar13,(pGVar10->fields)._totalRotation,(MethodInfo *)0x0);
          pGVar5 = (this->fields)._sharedLookAndFeel;
          pGVar12 = (this->fields)._rotationArc;
          if ((pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
             (pGVar5 = (this->fields)._lookAndFeel, pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0)
             ) goto code_?;
          uVar14._0_4_ = _UNK_?;
          if ((pGVar5->fields)._useZoomFactor != 0) {
            pGVar15 = (this->fields)._._handle;
            if (pGVar15 == (GizmoHandle *)0x0) goto code_?;
            uVar14._0_4_ = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar15,camera,(MethodInfo *)0x0);
          }
          uVar14._0_4_ = GizmoLineSlider3D_GetRealLength(this,(float)uVar14,(MethodInfo *)0x0);
          if ((pGVar12 == (GizmoRotationArc3D *)0x0) ||
             (pAVar13 = (pGVar12->fields)._arc, pAVar13 == (ArcShape3D *)0x0)) goto code_?;
          ArcShape3D::ArcShape3D_set_Radius(pAVar13,(float)uVar14,(MethodInfo *)0x0);
          pGVar5 = (this->fields)._sharedLookAndFeel;
          pGVar12 = (this->fields)._rotationArc;
          if (((pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
              (pGVar5 = (this->fields)._lookAndFeel, pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0
              )) || (pGVar12 == (GizmoRotationArc3D *)0x0)) goto code_?;
          GizmoRotationArc3D::GizmoRotationArc3D_Render
                    (pGVar12,(pGVar5->fields)._rotationArcLookAndFeel,(MethodInfo *)0x0);
        }
      }
      pGVar5 = (this->fields)._sharedLookAndFeel;
      if ((pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = (this->fields)._lookAndFeel, pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
        uVar14._0_4_ = _UNK_?;
        if ((pGVar5->fields)._useZoomFactor != 0) {
          pGVar15 = (this->fields)._._handle;
          if (pGVar15 == (GizmoHandle *)0x0) goto code_?;
          uVar14._0_4_ = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar15,camera,(MethodInfo *)0x0);
        }
        pVVar16 = GizmoLineSlider3D_GetRealEndPosition
                            ((Vector3 *)&stack0xfffffff0,this,(float)uVar14,(MethodInfo *)0x0);
        uVar17 = pVVar16->x;
        uVar18 = pVVar16->y;
        fVar19 = pVVar16->z;
        pVVar16 = GizmoLineSlider3D_GetRealDirection
                            ((Vector3 *)&stack0xffffffdc,this,(MethodInfo *)0x0);
        uVar14._0_4_ = pVVar16->x;
        uVar14._4_4_ = pVVar16->y;
        fVar20 = pVVar16->z;
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__CameraEx);
        }
        point.y = (float)uVar18;
        point.x = (float)uVar17;
        point.z = fVar19;
        pointNormal.z = fVar20;
        pointNormal.x = (float)(int)uVar14;
        pointNormal.y = (float)(int)((ulonglong)uVar14 >> 0x20);
        bVar21 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,pointNormal,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._cap3D;
        if (pGVar1 != (GizmoCap3D *)0x0) {
          if (((pGVar1->fields)._._isVisible & bVar21 == 0) != 0) {
            (*(code *)(pGVar1->klass->vtable).Render_1.method)
                      (pGVar1,camera,(pGVar1->klass->vtable).OnVisibilityStateChanged.methodPtr);
          }
          if ((this->fields)._._isVisible != 0) {
            pGVar5 = (this->fields)._sharedLookAndFeel;
            pGVar22 = pGVar5;
            if ((pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
               (pGVar22 = (this->fields)._lookAndFeel,
               pGVar22 == (GizmoLineSlider3DLookAndFeel *)0x0)) goto code_?;
            if ((pGVar22->fields)._fillMode == 0) {
              pGVar22 = pGVar5;
              if ((pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
                 (pGVar22 = (this->fields)._lookAndFeel,
                 pGVar22 == (GizmoLineSlider3DLookAndFeel *)0x0)) goto code_?;
              if ((pGVar22->fields)._shadeMode == 0) {
                if ((pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
                   (pGVar5 = (this->fields)._lookAndFeel,
                   pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0)) goto code_?;
                bVar23 = (pGVar5->fields)._lineType != 0;
              }
              else {
                bVar23 = false;
              }
              isLit = bVar23;
              if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
              }
              this_02 = (GizmoSolidMaterial *)
                        Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                  (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
              if (this_02 == (GizmoSolidMaterial *)0x0) goto code_?;
              GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                        (this_02,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_02,isLit,(MethodInfo *)0x0);
              if (bVar23 != false) {
                if (camera == (Camera *)0x0) goto code_?;
                this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)camera,(MethodInfo *)0x0);
                if (this_03 == (Transform *)0x0) goto code_?;
                puVar7 = &UNK_?;
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&stack0xffffffdc,this_03,(MethodInfo *)0x0);
                puVar8 = &UNK_?;
                pGVar9 = this_02;
                GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection
                          (this_02,*pVVar16,(MethodInfo *)0x0);
              }
              color_00.g = (float)puVar7;
              color_00.r = (float)puStack_6;
              color_00.b = (float)puVar8;
              color_00.a = (float)pGVar9;
              GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_02,color_00,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_02,0,(MethodInfo *)0x0);
              pGVar15 = (this->fields)._._handle;
              if (pGVar15 == (GizmoHandle *)0x0) goto code_?;
              GizmoHandle::GizmoHandle_Render3DSolid(pGVar15,(MethodInfo *)0x0);
            }
            else {
              if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
              }
              this_01 = (GizmoLineMaterial *)
                        Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                  (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
              if (this_01 == (GizmoLineMaterial *)0x0) goto code_?;
              GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                        (this_01,(MethodInfo *)0x0);
              color.g = (float)puVar7;
              color.r = (float)puStack_6;
              color.b = (float)puVar8;
              color.a = (float)pGVar9;
              GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,color,(MethodInfo *)0x0);
              GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
              pGVar15 = (this->fields)._._handle;
              if (pGVar15 == (GizmoHandle *)0x0) goto code_?;
              GizmoHandle::GizmoHandle_Render3DWire(pGVar15,(MethodInfo *)0x0);
            }
          }
          pGVar1 = (this->fields)._cap3D;
          if (pGVar1 != (GizmoCap3D *)0x0) {
            if (((pGVar1->fields)._._isVisible != 0) && (bVar21 != 0)) {
              (*(code *)(pGVar1->klass->vtable).Render_1.method)
                        (pGVar1,camera,(pGVar1->klass->vtable).OnVisibilityStateChanged.methodPtr);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Set3DCapHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapHoverable
               (GizmoLineSlider3D *this,bool isHoverable,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pGStack_2 = (this->fields)._cap3D;
  if (pGStack_2 != (GizmoCap3D *)0x0) {
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


/* Void Set3DCapVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
               (GizmoLineSlider3D *this,bool isVisible,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._cap3D;
  if (pGStack_2 != (GizmoCap3D *)0x0) {
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


/* Void SetDirection(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetDirection
               (GizmoLineSlider3D *this,Vector3 directionAxis,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 == (GizmoTransformAxisMap3D *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetAxis
              (this_00,directionAxis,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
               (GizmoLineSlider3D *this,GizmoDragChannel__Enum dragChannel,MethodInfo *method)

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
    this_00 = (this->fields)._cap3D;
    if (this_00 != (GizmoCap3D *)0x0) {
      GizmoCap3D::GizmoCap3D_set_DragSession
                (this_00,(this->fields)._selectedDragSession,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDragRotationAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetDragRotationAxis
               (GizmoLineSlider3D *this,Vector3 rotationAxis,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pGVar2 = (this->fields)._dragRotationAxisMap;
  if (pGVar2 != (GizmoTransformAxisMap3D *)0x0) {
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Unmap(pGVar2,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._dragRotationAxisMap;
    if (pGVar2 != (GizmoTransformAxisMap3D *)0x0) {
      GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetAxis
                (pGVar2,rotationAxis,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetSnapEnabled
               (GizmoLineSlider3D *this,bool isEnabled,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  ppGStack_1 = (GizmoCap3DLookAndFeel **)&stack0xfffffffc;
  pGVar2 = (this->fields)._sharedLookAndFeel;
  pGVar3 = (this->fields)._cap3D;
  if (((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
      (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
     (pGVar3 != (GizmoCap3D *)0x0)) {
    ppGStack_1 = &(pGVar3->fields)._sharedLookAndFeel;
    *ppGStack_1 = (pGVar2->fields)._capLookAndFeel;
    func_?();
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UnmapDragRotationAxis() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_UnmapDragRotationAxis
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((this->fields)._dragRotationAxisMap != (GizmoTransformAxisMap3D *)0x0) {
    *(undefined4 *)(in_stack_2 + 0x18) = 0;
    uStack3 = 0;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnregisterScalerHandle(Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_UnregisterScalerHandle
               (GizmoLineSlider3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__RemoveAll_System__Predicate<RTG::GizmoScalerHandle>_
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass81_0___UnregisterScalerHandle_b__0_RTG__GizmoScalerHandle_
                   );
    func_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass81_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass81_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)handleId;
    this_00 = (this->fields)._scalerHandles;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
               MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass81_0___UnregisterScalerHandle_b__0_RTG__GizmoScalerHandle_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoScalerHandle_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAll
                ((List_1_System_Object_ *)this_00,this_01,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__RemoveAll_System__Predicate<RTG::GizmoScalerHandle>_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GizmoLineSlider3D(Gizmo, Int32, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D__ctor
               (GizmoLineSlider3D *this,Gizmo *gizmo,int32_t handleId,int32_t capHandleId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxShape3D);
    func_?(&TypeInfo__RTG__CylinderShape3D);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoBoxLineSlider3DController);
    func_?(&TypeInfo__RTG__GizmoCap3D);
    func_?(&TypeInfo__RTG__GizmoCylinderLineSlider3DController);
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&TypeRef__RTG__GizmoLine3DType);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DControllerData);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                   );
    func_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverExit_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostDisabled_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostEnabled_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    func_?(&TypeInfo__RTG__GizmoOverrideColor);
    func_?(&TypeInfo__RTG__GizmoPostDisabledHandler);
    func_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    func_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    func_?(&TypeInfo__RTG__GizmoPreHoverEnterHandler);
    func_?(&TypeInfo__RTG__GizmoPreHoverExitHandler);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoRotationArc3D);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
    func_?(&TypeInfo__RTG__GizmoSglAxisScaleDrag3D);
    func_?(&TypeInfo__RTG__GizmoThinLineSlider3DController);
    func_?(&TypeInfo__RTG__GizmoTransformAxisMap3D);
    func_?(&TypeInfo__RTG__GizmoTransform);
    func_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>);
    func_?(&TypeInfo__RTG__SegmentShape3D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  this_00 = (SegmentShape3D *)func_?(TypeInfo__RTG__SegmentShape3D);
  SegmentShape3D::SegmentShape3D__ctor(this_00,(MethodInfo *)0x0);
  ppSVar1 = &(this->fields)._segment;
  *ppSVar1 = this_00;
  func_?(ppSVar1,this_00);
  this_01 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(this_01,(MethodInfo *)0x0);
  ppBVar2 = &(this->fields)._box;
  *ppBVar2 = this_01;
  func_?(ppBVar2,this_01);
  this_02 = (CylinderShape3D *)func_?(TypeInfo__RTG__CylinderShape3D);
  CylinderShape3D::CylinderShape3D__ctor(this_02,(MethodInfo *)0x0);
  ppCVar3 = &(this->fields)._cylinder;
  *ppCVar3 = this_02;
  func_?(ppCVar3,this_02);
  handle = TypeRef__RTG__GizmoLine3DType;
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
    pIVar4 = (IGizmoLineSlider3DController__Array *)func_?();
    (this->fields)._controllers = pIVar4;
    func_?();
    method_04 = TypeInfo__RTG__GizmoLineSlider3DControllerData;
    pGVar5 = (GizmoLineSlider3DControllerData *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_04);
    (this->fields)._controllerData = pGVar5;
    func_?();
    (this->fields)._dragChannel = 3;
    pGVar6 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D)
    ;
    GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar6,(MethodInfo *)0x0);
    ppGVar7 = &(this->fields)._offsetDrag;
    *ppGVar7 = (GizmoSglAxisOffsetDrag3D *)pGVar6;
    func_?(ppGVar7,pGVar6);
    pGVar6 = (GizmoSglAxisRotationDrag3D *)func_?();
    GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar6,(MethodInfo *)0x0);
    (this->fields)._rotationDrag = pGVar6;
    func_?();
    value = (GizmoRotationArc3D *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_04 = (ArcShape3D *)func_?();
    ArcShape3D::ArcShape3D__ctor(this_04,(MethodInfo *)0x0);
    (value->fields)._arc = this_04;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)&value->fields);
    handleId_00 = &(this->fields)._rotationArc;
    *handleId_00 = value;
    func_?();
    handleId_01 = TypeInfo__RTG__GizmoSglAxisScaleDrag3D;
    pGVar8 = (Gizmo *)func_?();
    GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D__ctor
              ((GizmoSglAxisScaleDrag3D *)pGVar8,(MethodInfo *)0x0);
    (this->fields)._scaleDrag = (GizmoSglAxisScaleDrag3D *)pGVar8;
    func_?();
    this_05 = (List_1_RTG_GizmoScalerHandle_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_05,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__List__);
    (this->fields)._scalerHandles = this_05;
    func_?();
    pGVar9 = (GizmoTransform *)func_?();
    GizmoTransform::GizmoTransform__ctor(pGVar9,(MethodInfo *)0x0);
    (this->fields)._transform = pGVar9;
    func_?();
    pGVar10 = (GizmoTransformAxisMap3D *)func_?();
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D__ctor(pGVar10,(MethodInfo *)0x0);
    (this->fields)._directionAxisMap = pGVar10;
    func_?();
    pGVar10 = (GizmoTransformAxisMap3D *)func_?();
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D__ctor(pGVar10,(MethodInfo *)0x0);
    (this->fields)._dragRotationAxisMap = pGVar10;
    func_?();
    this_06 = (GizmoOverrideColor *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_06,(MethodInfo *)0x0);
    (this->fields)._overrideColor = this_06;
    func_?();
    method_00 = TypeInfo__RTG__GizmoLineSlider3DSettings;
    value_00 = (GizmoLineSlider3DSettings *)func_?();
    (value_00->fields)._lineHoverEps = 0.7;
    (value_00->fields)._boxHoverEps = 0.5;
    (value_00->fields)._cylinderHoverEps = 0.5;
    (value_00->fields)._offsetSnapStep = 1.0;
    (value_00->fields)._rotationSnapStep = 15.0;
    (value_00->fields)._scaleSnapStep = 0.1;
    (value_00->fields)._offsetSensitivity = 1.0;
    (value_00->fields)._rotationSensitivity = 0.45;
    (value_00->fields)._scaleSensitivity = 1.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._settings = value_00;
    func_?();
    pGVar11 = (GizmoLineSlider3DLookAndFeel *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    (pGVar11->fields)._length = 5.0;
    (pGVar11->fields)._scale = 1.0;
    (pGVar11->fields)._useZoomFactor = 1;
    (pGVar11->fields)._boxHeight = 0.18;
    (pGVar11->fields)._boxDepth = 0.18;
    (pGVar11->fields)._cylinderRadius = 0.15;
    (pGVar11->fields)._isRotationArcVisible = 1;
    method_01 = TypeInfo__RTG__GizmoRotationArc3DLookAndFeel;
    value_01 = (GizmoRotationArc3DLookAndFeel *)func_?();
    (value_01->fields)._useShortestRotation = 1;
    (value_01->fields)._fillFlags = 3;
    pCVar12 = RTSystemValues::RTSystemValues_get_GuideFillColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar13 = pCVar12->g;
    fVar14 = pCVar12->b;
    fVar15 = pCVar12->a;
    (value_01->fields)._color.r = pCVar12->r;
    (value_01->fields)._color.g = fVar13;
    (value_01->fields)._color.b = fVar14;
    (value_01->fields)._color.a = fVar15;
    pCVar12 = RTSystemValues::RTSystemValues_get_GuideBorderColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar13 = pCVar12->g;
    fVar14 = pCVar12->b;
    fVar15 = pCVar12->a;
    (value_01->fields)._borderColor.r = pCVar12->r;
    (value_01->fields)._borderColor.g = fVar13;
    (value_01->fields)._borderColor.b = fVar14;
    (value_01->fields)._borderColor.a = fVar15;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pGVar11->fields)._rotationArcLookAndFeel = value_01;
    func_?();
    pCVar12 = RTSystemValues::RTSystemValues_get_XAxisColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar13 = pCVar12->g;
    fVar14 = pCVar12->b;
    fVar15 = pCVar12->a;
    (pGVar11->fields)._color.r = pCVar12->r;
    (pGVar11->fields)._color.g = fVar13;
    (pGVar11->fields)._color.b = fVar14;
    (pGVar11->fields)._color.a = fVar15;
    pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar13 = pCVar12->g;
    fVar14 = pCVar12->b;
    fVar15 = pCVar12->a;
    (pGVar11->fields)._hoveredColor.r = pCVar12->r;
    (pGVar11->fields)._hoveredColor.g = fVar13;
    (pGVar11->fields)._hoveredColor.b = fVar14;
    (pGVar11->fields)._hoveredColor.a = fVar15;
    this_07 = (GizmoCap3DLookAndFeel *)func_?();
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(this_07,(MethodInfo *)0x0);
    method_02 = &(pGVar11->fields)._capLookAndFeel;
    *method_02 = this_07;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar11,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    (this->fields)._lookAndFeel = pGVar11;
    func_?();
    GizmoSlider::GizmoSlider__ctor
              ((GizmoSlider *)this,pGVar8,(int32_t)handleId_01,(MethodInfo *)0x0);
    pGVar16 = (this->fields)._._handle;
    if (pGVar16 == (GizmoHandle *)0x0) goto code_?;
    iVar17 = GizmoHandle::GizmoHandle_Add3DShape(pGVar16,(Shape3D *)*ppSVar1,(MethodInfo *)0x0);
    (this->fields)._segmentIndex = iVar17;
    pGVar16 = (this->fields)._._handle;
    if (pGVar16 == (GizmoHandle *)0x0) goto code_?;
    iVar17 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar16,(Shape3D *)(this->fields)._box,(MethodInfo *)0x0);
    (this->fields)._boxIndex = iVar17;
    pGVar16 = (this->fields)._._handle;
    if (pGVar16 == (GizmoHandle *)0x0) goto code_?;
    iVar17 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar16,(Shape3D *)(this->fields)._cylinder,(MethodInfo *)0x0);
    pGVar8 = (this->fields)._._gizmo;
    (this->fields)._cylinderIndex = iVar17;
    pGVar18 = (GizmoCap3D *)func_?();
    GizmoCap3D::GizmoCap3D__ctor(pGVar18,pGVar8,(int32_t)handleId_00,(MethodInfo *)0x0);
    ppGVar19 = &(this->fields)._cap3D;
    *ppGVar19 = pGVar18;
    func_?();
    pGVar11 = (this->fields)._sharedLookAndFeel;
    if (((pGVar11 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
        (pGVar11 = (this->fields)._lookAndFeel, pGVar11 == (GizmoLineSlider3DLookAndFeel *)0x0)) ||
       (*ppGVar19 == (GizmoCap3D *)0x0)) goto code_?;
    ((*ppGVar19)->fields)._sharedLookAndFeel = (pGVar11->fields)._capLookAndFeel;
    func_?();
    bVar20 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
    if (bVar20 == 0) {
      pGVar10 = (this->fields)._directionAxisMap;
      if (pGVar10 == (GizmoTransformAxisMap3D *)0x0) goto code_?;
      GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
                (pGVar10,(this->fields)._transform,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    }
    ppIVar21 = &(this->fields)._selectedDragSession;
    (this->fields)._dragChannel = 1;
    *ppIVar21 = (IGizmoDragSession *)(this->fields)._offsetDrag;
    func_?();
    pGVar16 = (this->fields)._._handle;
    if (pGVar16 == (GizmoHandle *)0x0) goto code_?;
    (pGVar16->fields)._DragSession_k__BackingField = *ppIVar21;
    func_?();
    if (*ppGVar19 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession(*ppGVar19,*ppIVar21,(MethodInfo *)0x0);
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).Gizmo = (this->fields)._._gizmo;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).Slider = this;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).SliderHandle = (this->fields)._._handle;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).Segment = (this->fields)._segment;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).Box = (this->fields)._box;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).Cylinder = (this->fields)._cylinder;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).SegmentIndex = (this->fields)._segmentIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).BoxIndex = (this->fields)._boxIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar5->fields).CylinderIndex = (this->fields)._cylinderIndex;
    pOVar22 = (Object__Class *)(this->fields)._controllerData;
    method_03 = TypeInfo__RTG__GizmoThinLineSlider3DController;
    pOVar23 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar23,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    pOVar24 = pOVar23 + 1;
    pOVar24->klass = pOVar22;
    func_?();
    if (pOVar24 == (Object *)0x0) goto code_?;
    puVar25 = &UNK_?;
    iVar26 = func_?();
    if (iVar26 == 0) goto code_?;
    if (*(int *)(puVar25 + 0xc) == 0) goto code_?;
    *(Object **)(puVar25 + 0x10) = pOVar23;
    func_?();
    pIVar4 = (this->fields)._controllers;
    pOVar22 = (Object__Class *)(this->fields)._controllerData;
    pOVar23 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar23,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar4);
    pOVar23[1].klass = pOVar22;
    func_?();
    if (pIVar4 == (IGizmoLineSlider3DController__Array *)0x0) goto code_?;
    puVar25 = &UNK_?;
    iVar26 = func_?();
    if (iVar26 == 0) goto code_?;
    if (*(uint *)(puVar25 + 0xc) < 2) goto code_?;
    *(Object **)(puVar25 + 0x14) = pOVar23;
    func_?();
    pIVar4 = (this->fields)._controllers;
    pOVar22 = (Object__Class *)(this->fields)._controllerData;
    method_05 = TypeInfo__RTG__GizmoCylinderLineSlider3DController;
    pOVar23 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar23,ExceptionArgument__Enum_obj,(MethodInfo *)method_05);
    pOVar23[1].klass = pOVar22;
    func_?();
    if (pIVar4 == (IGizmoLineSlider3DController__Array *)0x0) goto code_?;
    iVar26 = func_?();
    if (iVar26 != 0) {
      if (pIVar4->max_length < 3) goto code_?;
      pIVar4->vector[2] = (IGizmoLineSlider3DController *)pOVar23;
      func_?();
      pGVar9 = (this->fields)._transform;
      value_02 = (GizmoEntityTransformChangedHandler *)func_?();
      Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
      SerializationCallback__ctor
                ((SerializationCallback *)value_02,(Object *)this,
                 MethodInfo__RTG__GizmoLineSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 ,(MethodInfo *)0x0);
      if (pGVar9 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_add_Changed(pGVar9,value_02,(MethodInfo *)0x0);
        pGVar8 = (this->fields)._._gizmo;
        value_03 = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_03,(Object *)this,
                   MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (pGVar8 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(pGVar8,value_03,(MethodInfo *)0x0);
          pGVar8 = (this->fields)._._gizmo;
          value_04 = (GizmoPreDragBeginAttemptHandler *)func_?();
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    ((EventHandler_1_Object_ *)value_04,(Object *)this,
                     MethodInfo__RTG__GizmoLineSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                     ,(MethodInfo *)0x0);
          if (pGVar8 != (Gizmo *)0x0) {
            Gizmo::Gizmo_add_PreDragBeginAttempt(pGVar8,value_04,(MethodInfo *)0x0);
            pGVar8 = (this->fields)._._gizmo;
            value_05 = (GizmoPreHoverEnterHandler *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      ((EventHandler_1_Object_ *)value_05,(Object *)this,
                       MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_,
                       (MethodInfo *)0x0);
            if (pGVar8 != (Gizmo *)0x0) {
              Gizmo::Gizmo_add_PreHoverEnter(pGVar8,value_05,(MethodInfo *)0x0);
              pGVar8 = (this->fields)._._gizmo;
              value_06 = (GizmoPreHoverExitHandler *)func_?();
              mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                        ((EventHandler_1_Object_ *)value_06,(Object *)this,
                         MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverExit_RTG__Gizmo__int_
                         ,(MethodInfo *)0x0);
              if (pGVar8 != (Gizmo *)0x0) {
                Gizmo::Gizmo_add_PreHoverExit(pGVar8,value_06,(MethodInfo *)0x0);
                pGVar8 = (this->fields)._._gizmo;
                value_07 = (GizmoPostEnabledHandler *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                VideoCapture+OnVideoCaptureResourceCreatedCallback::
                VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                          ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_07,
                           (Object *)this,
                           MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostEnabled_RTG__Gizmo_,
                           (MethodInfo *)0x0);
                if (pGVar8 != (Gizmo *)0x0) {
                  Gizmo::Gizmo_add_PostEnabled(pGVar8,value_07,(MethodInfo *)0x0);
                  pGVar8 = (this->fields)._._gizmo;
                  value_08 = (GizmoPostDisabledHandler *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                  VideoCapture+OnVideoCaptureResourceCreatedCallback::
                  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_08,
                             (Object *)this,
                             MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostDisabled_RTG__Gizmo_,
                             (MethodInfo *)0x0);
                  if (pGVar8 != (Gizmo *)0x0) {
                    Gizmo::Gizmo_add_PostDisabled(pGVar8,value_08,(MethodInfo *)0x0);
                    pGVar27 = (this->fields)._offsetDrag;
                    if (pGVar27 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                      pGVar9 = (this->fields)._transform;
                      GizmoDragSession::GizmoDragSession_AddTargetTransform
                                ((GizmoDragSession *)pGVar27,pGVar9,(MethodInfo *)0x0);
                      pGVar6 = (this->fields)._rotationDrag;
                      if (pGVar6 != (GizmoSglAxisRotationDrag3D *)0x0) {
                        GizmoDragSession::GizmoDragSession_AddTargetTransform
                                  ((GizmoDragSession *)pGVar6,pGVar9,(MethodInfo *)0x0);
                        pGVar28 = (this->fields)._scaleDrag;
                        if (pGVar28 != (GizmoSglAxisScaleDrag3D *)0x0) {
                          GizmoDragSession::GizmoDragSession_AddTargetTransform
                                    ((GizmoDragSession *)pGVar28,pGVar9,(MethodInfo *)0x0);
                          pGVar8 = (this->fields)._._gizmo;
                          if ((pGVar8 != (Gizmo *)0x0) &&
                             (pGVar27 = (this->fields)._offsetDrag,
                             pGVar27 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
                            pGVar9 = (pGVar8->fields)._transform;
                            GizmoDragSession::GizmoDragSession_AddTargetTransform
                                      ((GizmoDragSession *)pGVar27,pGVar9,(MethodInfo *)0x0);
                            pGVar6 = (this->fields)._rotationDrag;
                            if (pGVar6 != (GizmoSglAxisRotationDrag3D *)0x0) {
                              GizmoDragSession::GizmoDragSession_AddTargetTransform
                                        ((GizmoDragSession *)pGVar6,pGVar9,(MethodInfo *)0x0);
                              pGVar28 = (this->fields)._scaleDrag;
                              if (pGVar28 != (GizmoSglAxisScaleDrag3D *)0x0) {
                                GizmoDragSession::GizmoDragSession_AddTargetTransform
                                          ((GizmoDragSession *)pGVar28,pGVar9,(MethodInfo *)0x0);
                                pGVar18 = (this->fields)._cap3D;
                                if (pGVar18 != (GizmoCap3D *)0x0) {
                                  GizmoCap3D::GizmoCap3D_RegisterTransformAsDragTarget
                                            (pGVar18,(IGizmoDragSession *)(this->fields)._offsetDrag
                                             ,(MethodInfo *)0x0);
                                  pGVar18 = (this->fields)._cap3D;
                                  if (pGVar18 != (GizmoCap3D *)0x0) {
                                    GizmoCap3D::GizmoCap3D_RegisterTransformAsDragTarget
                                              (pGVar18,(IGizmoDragSession *)
                                                       (this->fields)._rotationDrag,
                                               (MethodInfo *)0x0);
                                    pGVar18 = (this->fields)._cap3D;
                                    if (pGVar18 != (GizmoCap3D *)0x0) {
                                      GizmoCap3D::GizmoCap3D_RegisterTransformAsDragTarget
                                                (pGVar18,(IGizmoDragSession *)
                                                         (this->fields)._scaleDrag,(MethodInfo *)0x0
                                                );
                                      pGVar8 = (this->fields)._._gizmo;
                                      if ((pGVar8 != (Gizmo *)0x0) &&
                                         (pGVar9 = (this->fields)._transform,
                                         pGVar9 != (GizmoTransform *)0x0)) {
                                        GizmoTransform::GizmoTransform_SetParent
                                                  (pGVar9,(pGVar8->fields)._transform,
                                                   (MethodInfo *)0x0);
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
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Int32 get_Cap3DHandleId() */

int32_t Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Cap3DHandleId
                  (GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap3D;
  if ((pGVar1 != (GizmoCap3D *)0x0) &&
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


/* GizmoOverrideColor get_Cap3DOverrideColor() */

GizmoOverrideColor *
Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Cap3DOverrideColor
          (GizmoLineSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._cap3D;
  if (pGVar2 != (GizmoCap3D *)0x0) {
    return (pGVar2->fields)._overrideColor;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pGVar6 = (GizmoOverrideColor *)(*pcVar5)();
  return pGVar6;
}


/* Vector3 get_Direction() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Direction
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._directionAxisMap;
  if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
    pVVar1 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                       (&VStack_2,this_00,(MethodInfo *)0x0);
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


/* Vector3 get_DragRotationAxis() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_DragRotationAxis
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._dragRotationAxisMap;
  if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
    pVVar1 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                       (&VStack_2,this_00,(MethodInfo *)0x0);
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


/* Boolean get_Is3DCapHoverable() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Is3DCapHoverable
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._cap3D;
  if (pGVar2 != (GizmoCap3D *)0x0) {
    return (pGVar2->fields)._._isHoverable;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_Is3DCapVisible() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Is3DCapVisible
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._cap3D;
  if (pGVar2 != (GizmoCap3D *)0x0) {
    return (pGVar2->fields)._._isVisible;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsDragged() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_IsDragged
               (GizmoLineSlider3D *this,MethodInfo *method)

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
        this_01 = (this->fields)._cap3D;
        if (this_01 != (GizmoCap3D *)0x0) {
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

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_IsMoving
               (GizmoLineSlider3D *this,MethodInfo *method)

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

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_IsScaling
               (GizmoLineSlider3D *this,MethodInfo *method)

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


/* Vector3 get_RelativeDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_RelativeDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_RelativeDragRotation
                (GizmoLineSlider3D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_RelativeDragScale
                (GizmoLineSlider3D *this,MethodInfo *method)

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


/* Vector3 get_StartPosition() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_StartPosition
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

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


/* Vector3 get_TotalDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_TotalDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_TotalDragRotation
                (GizmoLineSlider3D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_TotalDragScale
                (GizmoLineSlider3D *this,MethodInfo *method)

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


/* Void set_ScaleDragAxisIndex(Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
               (GizmoLineSlider3D *this,int32_t value,MethodInfo *method)

{
  if (value < 0) {
    (this->fields)._scaleDragAxisIndex = 0;
    return;
  }
  if (2 < value) {
    (this->fields)._scaleDragAxisIndex = 2;
    return;
  }
  (this->fields)._scaleDragAxisIndex = value;
  return;
}


/* Void set_SharedLookAndFeel(GizmoLineSlider3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
               (GizmoLineSlider3D *this,GizmoLineSlider3DLookAndFeel *value,MethodInfo *method)

{
  ppGVar1 = &(this->fields)._sharedLookAndFeel;
  *ppGVar1 = value;
  func_?(ppGVar1,value);
  pGVar2 = *ppGVar1;
  pGVar3 = (this->fields)._cap3D;
  if (((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
      (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
     (pGVar3 != (GizmoCap3D *)0x0)) {
    pGVar4 = (pGVar2->fields)._capLookAndFeel;
    ppGVar5 = &(pGVar3->fields)._sharedLookAndFeel;
    *ppGVar5 = pGVar4;
    func_?(ppGVar5,pGVar4);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_StartPosition(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_set_StartPosition
               (GizmoLineSlider3D *this,Vector3 value,MethodInfo *method)

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

