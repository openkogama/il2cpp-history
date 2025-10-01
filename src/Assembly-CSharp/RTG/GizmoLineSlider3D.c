
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
  pGVar1 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    if ((pGVar1->fields)._useZoomFactor == 0) {
      return;
    }
    this_00 = (this->fields)._._handle;
    if (this_00 != (GizmoHandle *)0x0) {
      zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      pIVar2 = (this->fields)._controllers;
      pGVar1 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
      if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
         (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._lineType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3],
                          zoomFactor);
          pGVar4 = (this->fields)._cap3D;
          if (pGVar4 != (GizmoCap3D *)0x0) {
            GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar4,camera,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._cap3D;
            pVVar5 = GizmoLineSlider3D_GetRealDirection(&VStack_6,this,(MethodInfo *)0x0);
            uStack_7._0_4_ = pVVar5->x;
            uStack_7._4_4_ = pVVar5->y;
            fVar8 = pVVar5->z;
            pVVar5 = GizmoLineSlider3D_GetRealEndPosition
                               (&VStack_6,this,zoomFactor,(MethodInfo *)0x0);
            if (pGVar4 != (GizmoCap3D *)0x0) {
              sliderDirection.z = fVar8;
              sliderDirection.x = (float)(undefined4)uStack_7;
              sliderDirection.y = (float)uStack_7._4_4_;
              GizmoCap3D::GizmoCap3D_CapSlider3D(pGVar4,sliderDirection,*pVVar5,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Single GetRealBoxDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxDepth
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  return ((&(this->fields)._lookAndFeel)
          [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->fields)._scale
         * ((&(this->fields)._lookAndFeel)
            [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->fields).
           _boxDepth * zoomFactor;
}


/* Single GetRealBoxHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxHeight
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  return ((&(this->fields)._lookAndFeel)
          [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->fields)._scale
         * ((&(this->fields)._lookAndFeel)
            [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->fields).
           _boxHeight * zoomFactor;
}


/* Single GetRealCylinderRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealCylinderRadius
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  return ((&(this->fields)._lookAndFeel)
          [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->fields)._scale
         * ((&(this->fields)._lookAndFeel)
            [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->fields).
           _cylinderRadius * zoomFactor;
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
  pGVar1 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    if ((pGVar1->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    pGVar2 = (this->fields)._scaleDrag;
    fVar3 = ((&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->fields).
            _scale * ((&(this->fields)._lookAndFeel)
                      [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->
                     fields)._length * zoomFactor;
    fStack_4 = fVar3;
    if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
      cVar5 = (*(code *)(pGVar2->klass->vtable).get_IsActive_1.method)
                        (pGVar2,(pGVar2->klass->vtable).get_DragChannel_1.methodPtr);
      if (cVar5 == '\0') {
        this_00 = (DataTable *)(this->fields)._._gizmo;
        if (this_00 != (DataTable *)0x0) {
          bVar6 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                            (this_00,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            return fVar3;
          }
          pGVar7 = (this->fields)._._gizmo;
          if (pGVar7 != (Gizmo *)0x0) {
            handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                       PointerEventBase`1[System::Object]::
                       PointerEventBase_1_System_Object__get_pointerType
                                 ((PointerEventBase_1_System_Object_ *)pGVar7,(MethodInfo *)0x0);
            bVar6 = GizmoLineSlider3D_IsScalerHandleRegistered_1
                              (this,(int32_t)handleId,(this->fields)._scaleDragAxisIndex,
                               (MethodInfo *)0x0);
            if (bVar6 == 0) {
              return fVar3;
            }
            pGVar7 = (this->fields)._._gizmo;
            if (pGVar7 != (Gizmo *)0x0) {
              pVVar8 = Gizmo::Gizmo_get_TotalDragScale(&VStack_9,pGVar7,(MethodInfo *)0x0);
              VStack_10.x = pVVar8->x;
              VStack_10.y = pVVar8->y;
              VStack_10.z = pVVar8->z;
              fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 (&VStack_10,(this->fields)._scaleDragAxisIndex,(MethodInfo *)0x0);
              return fVar11 * fVar3;
            }
          }
        }
      }
      else {
        pGVar2 = (this->fields)._scaleDrag;
        if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
          return fStack_4 * (pGVar2->fields)._totalScale;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  fVar13 = (float10)(*pcVar12)();
  return (float)fVar13;
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
  pIVar1 = (this->fields)._controllers;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
     (pIVar1 != (IGizmoLineSlider3DController__Array *)0x0)) {
    uVar3 = (pGVar2->fields)._lineType;
    if (pIVar1->max_length <= uVar3) goto code_?;
    this_00 = (this->fields)._._gizmo;
    pIVar4 = pIVar1->vector[uVar3];
    if (this_00 != (Gizmo *)0x0) {
      camera_00 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      pGVar2 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
      if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
        fVar5 = _UNK_?;
        if ((pGVar2->fields)._useZoomFactor != 0) {
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
                           [pIVar4->klass->interfaceOffsets[uVar7].offset].method;
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

/* decompilation failed: Exception while decompiling 1058b700: Decompiler process died */


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
      *(AxisDescriptor **)(axisIndex + 0x14) = this_00;
      func_?(axisIndex + 0x14,this_00);
      *(AxisSign__Enum *)(axisIndex + 0x18) = axisSign;
      func_?(axisIndex + 0x18,axisSign);
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
    if ((this->fields)._dragChannel == 1) {
      pGVar3 = (this->fields)._directionAxisMap;
      if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
        pVVar4 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                            ((Vector3 *)&stack0xffffffc8,pGVar3,(MethodInfo *)0x0);
        uVar5 = pVVar4->x;
        uVar6 = pVVar4->y;
        pGVar7 = (this->fields)._transform;
        if (pGVar7 != (GizmoTransform *)0x0) {
          pGVar8 = (&(this->fields)._settings)
                    [(this->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0];
          if (pGVar8 != (GizmoLineSlider3DSettings *)0x0) {
            this_05 = (this->fields)._offsetDrag;
            if (this_05 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              workData_01.Axis.x = (float)uVar5;
              workData_01.DragOrigin = (pGVar7->fields)._position3D;
              workData_01.Axis.y = (float)uVar6;
              workData_01.Axis.z = pVVar4->z;
              workData_01.SnapStep = (pGVar8->fields)._offsetSnapStep;
              GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
                        (this_05,workData_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if ((this->fields)._dragChannel == 2) {
      pGVar3 = (this->fields)._dragRotationAxisMap;
      if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
        pVVar4 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                            ((Vector3 *)&stack0xffffffd4,pGVar3,(MethodInfo *)0x0);
        uVar9 = pVVar4->x;
        uVar10 = pVVar4->y;
        pGVar7 = (this->fields)._transform;
        if (pGVar7 != (GizmoTransform *)0x0) {
          pGVar8 = (&(this->fields)._settings)
                    [(this->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0];
          if (pGVar8 != (GizmoLineSlider3DSettings *)0x0) {
            pGVar11 = (&(this->fields)._settings)
                      [(this->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0];
            if (pGVar11 != (GizmoLineSlider3DSettings *)0x0) {
              this_02 = (this->fields)._rotationDrag;
              if (this_02 != (GizmoSglAxisRotationDrag3D *)0x0) {
                workData_00.Axis.x = (float)uVar9;
                workData_00.RotationPlanePos = (pGVar7->fields)._position3D;
                workData_00.Axis.y = (float)uVar10;
                workData_00.Axis.z = pVVar4->z;
                workData_00.SnapMode = (pGVar11->fields)._rotationSnapMode;
                workData_00.SnapStep = (pGVar8->fields)._rotationSnapStep;
                GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                          (this_02,workData_00,(MethodInfo *)0x0);
                pGVar3 = (this->fields)._dragRotationAxisMap;
                this_03 = (this->fields)._rotationArc;
                if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
                  pVVar4 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                                      ((Vector3 *)&stack0xffffffd4,pGVar3,(MethodInfo *)0x0);
                  fVar12 = pVVar4->z;
                  pGVar7 = (this->fields)._transform;
                  if (pGVar7 != (GizmoTransform *)0x0) {
                    fVar13 = (pGVar7->fields)._position3D.z;
                    pGVar3 = (this->fields)._directionAxisMap;
                    if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
                      pVVar4 = (Vector3 *)&stack0xffffffc8;
                      pVVar14 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                                          (pVVar4,pGVar3,(MethodInfo *)0x0);
                      uVar15 = pVVar14->x;
                      uVar16 = pVVar14->y;
                      uVar17._4_4_ = (float)uVar16 + (float)pGVar3;
                      uVar17._0_4_ = (float)uVar15 + (float)pVVar4;
                      this_04 = (this->fields)._._gizmo;
                      if (this_04 != (Gizmo *)0x0) {
                        camera = Gizmo::Gizmo_get_FocusCamera(this_04,(MethodInfo *)0x0);
                        puVar18 = &UNK_?;
                        fVar19 = GizmoLineSlider3D_GetZoomFactor(this,camera,(MethodInfo *)0x0);
                        fVar19 = GizmoLineSlider3D_GetRealLength(this,fVar19,(MethodInfo *)0x0);
                        if (this_03 != (GizmoRotationArc3D *)0x0) {
                          rotationAxis.y = (float)uVar17;
                          rotationAxis.x = (float)this;
                          rotationAxis.z = fVar12;
                          arcOrigin.y = (float)uVar17;
                          arcOrigin.x = (float)this;
                          arcOrigin.z = fVar13;
                          arcStart.z = (float)puVar18;
                          arcStart.x = (float)uVar17;
                          arcStart.y = SUB84(uVar17,4);
                          GizmoRotationArc3D::GizmoRotationArc3D_SetArcData
                                    (this_03,rotationAxis,arcOrigin,arcStart,fVar19,
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
      if ((this->fields)._dragChannel != 3) {
        return;
      }
      pVVar4 = GizmoLineSlider3D_get_Direction((Vector3 *)&stack0xffffffd4,this,(MethodInfo *)0x0);
      uVar20 = pVVar4->x;
      uVar21 = pVVar4->y;
      pGVar7 = (this->fields)._transform;
      if (pGVar7 != (GizmoTransform *)0x0) {
        uVar22 = (pGVar7->fields)._position3D.x;
        uVar23 = (pGVar7->fields)._position3D.y;
        pGVar8 = (&(this->fields)._settings)
                  [(this->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0];
        if (pGVar8 != (GizmoLineSlider3DSettings *)0x0) {
          this_01 = (this->fields)._scaleDrag;
          if (this_01 != (GizmoSglAxisScaleDrag3D *)0x0) {
            workData.DragOrigin.x = (float)uVar22;
            workData.AxisIndex = (this->fields)._scaleDragAxisIndex;
            workData.DragOrigin.y = (float)uVar23;
            workData.DragOrigin.z = (pGVar7->fields)._position3D.z;
            workData.Axis.x = (float)uVar20;
            workData.Axis.y = (float)uVar21;
            workData.Axis.z = pVVar4->z;
            workData.SnapStep = (pGVar8->fields)._scaleSnapStep;
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
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
    pGVar4 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
    if ((pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
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
    pGVar3 = (this->fields)._overrideColor;
    pGVar4 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
    if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
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
  pGVar1 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    pIVar2 = (this->fields)._controllers;
    uVar3 = (pGVar1->fields)._lineType;
    if (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0) {
      if (pIVar2->max_length <= uVar3) goto code_?;
      if ((pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) &&
         (func_?(0,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3]),
         gizmo != (Gizmo *)0x0)) {
        camera = Gizmo::Gizmo_get_FocusCamera(gizmo,(MethodInfo *)0x0);
        pGVar1 = (&(this->fields)._lookAndFeel)
                 [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
        if (pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) {
          zoomFactor = _UNK_?;
          if ((pGVar1->fields)._useZoomFactor != 0) {
            this_00 = (this->fields)._._handle;
            if (this_00 == (GizmoHandle *)0x0) goto code_?;
            zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
          }
          this_01 = (this->fields)._offsetDrag;
          pGVar4 = (&(this->fields)._settings)
                   [(this->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0];
          if ((pGVar4 != (GizmoLineSlider3DSettings *)0x0) &&
             (this_01 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
            GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                      ((GizmoScreenDrag *)this_01,(pGVar4->fields)._offsetSensitivity,
                       (MethodInfo *)0x0);
            this_02 = (this->fields)._rotationDrag;
            pGVar4 = (&(this->fields)._settings)
                     [(this->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0];
            if ((pGVar4 != (GizmoLineSlider3DSettings *)0x0) &&
               (this_02 != (GizmoSglAxisRotationDrag3D *)0x0)) {
              GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                        ((GizmoScreenDrag *)this_02,(pGVar4->fields)._rotationSensitivity,
                         (MethodInfo *)0x0);
              this_03 = (this->fields)._scaleDrag;
              pGVar4 = (&(this->fields)._settings)
                       [(this->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0];
              if ((pGVar4 != (GizmoLineSlider3DSettings *)0x0) &&
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
                                                     ((XDocumentTypeWrapper *)pGVar5,
                                                      (MethodInfo *)0x0);
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
                                                        (&VStack_10,this,zoomFactor,
                                                         (MethodInfo *)0x0);
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
    pGVar1 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
    if (pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      zoomFactor = _UNK_?;
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      pIVar2 = (this->fields)._controllers;
      pGVar1 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
      if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
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
  pIVar1 = (this->fields)._controllers;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
     (pIVar1 != (IGizmoLineSlider3DController__Array *)0x0)) {
    uVar3 = (pGVar2->fields)._lineType;
    if (pIVar1->max_length <= uVar3) goto code_?;
    if (pIVar1->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar1->vector[uVar3]);
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        pGVar2 = (&(this->fields)._lookAndFeel)
                 [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
        if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
          zoomFactor = _UNK_?;
          if ((pGVar2->fields)._useZoomFactor != 0) {
            this_01 = (this->fields)._._handle;
            if (this_01 == (GizmoHandle *)0x0) goto code_?;
            zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
          }
          pIVar1 = (this->fields)._controllers;
          pGVar2 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
          if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
             (pIVar1 != (IGizmoLineSlider3DController__Array *)0x0)) {
            uVar3 = (pGVar2->fields)._lineType;
            if (pIVar1->max_length <= uVar3) goto code_?;
            if (pIVar1->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
              func_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar1->vector[uVar3],
                              zoomFactor);
              pIVar1 = (this->fields)._controllers;
              pGVar2 = (&(this->fields)._lookAndFeel)
                       [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
              if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
                 (pIVar1 != (IGizmoLineSlider3DController__Array *)0x0)) {
                uVar3 = (pGVar2->fields)._lineType;
                if (pIVar1->max_length <= uVar3) goto code_?;
                if (pIVar1->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,
                                  pIVar1->vector[uVar3],zoomFactor);
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
    pGVar1 = (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
    if (pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      zoomFactor = _UNK_?;
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      pIVar2 = (this->fields)._controllers;
      pGVar1 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
      if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
         (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._lineType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
          func_?(0,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3]);
          pIVar2 = (this->fields)._controllers;
          pGVar1 = (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
          if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
             (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
            uVar3 = (pGVar1->fields)._lineType;
            if (pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[uVar3] != (IGizmoLineSlider3DController *)0x0) {
              func_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar2->vector[uVar3],
                              zoomFactor);
              pIVar2 = (this->fields)._controllers;
              pGVar1 = (&(this->fields)._lookAndFeel)
                       [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
              if ((pGVar1 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
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
  if (pGVar2 == (GizmoOverrideColor *)0x0) goto code_?;
  if ((pGVar2->fields)._isActive == 0) {
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) goto code_?;
    iVar3 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
             PointerCaptureEventBase`1[System::Object]::
             PointerCaptureEventBase_1_System_Object__get_pointerId
                       ((PointerCaptureEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
             SparselyPopulatedArrayFragment_1_System_Object__get_Length
                       ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,(MethodInfo *)0x0);
    pGVar5 = (this->fields)._sharedLookAndFeel;
    if (iVar3 == iVar4) {
      pGVar6 = (&(this->fields)._lookAndFeel)[pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0];
      if (pGVar6 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      fStack_7 = (pGVar6->fields)._hoveredColor.r;
      fStack_8 = (pGVar6->fields)._hoveredColor.g;
      fStack_9 = (pGVar6->fields)._hoveredColor.b;
      fStack_10 = (pGVar6->fields)._hoveredColor.a;
    }
    else {
      pGVar6 = (&(this->fields)._lookAndFeel)[pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0];
      if (pGVar6 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      fStack_7 = (pGVar6->fields)._color.r;
      fStack_8 = (pGVar6->fields)._color.g;
      fStack_9 = (pGVar6->fields)._color.b;
      fStack_10 = (pGVar6->fields)._color.a;
    }
    pGVar5 = (&(this->fields)._lookAndFeel)[pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0];
  }
  else {
    fStack_7 = (pGVar2->fields)._color.r;
    fStack_8 = (pGVar2->fields)._color.g;
    fStack_9 = (pGVar2->fields)._color.b;
    fStack_10 = (pGVar2->fields)._color.a;
    pGVar5 = (&(this->fields)._lookAndFeel)
              [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
    if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
  }
  if ((pGVar5->fields)._isRotationArcVisible != 0) {
    pGVar11 = (this->fields)._rotationDrag;
    if (pGVar11 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
    cVar12 = (*(code *)(pGVar11->klass->vtable).get_IsActive_1.method)
                      (pGVar11,(pGVar11->klass->vtable).get_DragChannel_1.methodPtr);
    if (cVar12 != '\0') {
      pGVar11 = (this->fields)._rotationDrag;
      if ((pGVar11 == (GizmoSglAxisRotationDrag3D *)0x0) ||
         (pGVar13 = (this->fields)._rotationArc, pGVar13 == (GizmoRotationArc3D *)0x0))
      goto code_?;
      GizmoRotationArc3D::GizmoRotationArc3D_set_RotationAngle
                (pGVar13,(pGVar11->fields)._totalRotation,(MethodInfo *)0x0);
      pGVar13 = (this->fields)._rotationArc;
      fVar14 = GizmoLineSlider3D_GetZoomFactor(this,camera,(MethodInfo *)0x0);
      fVar14 = GizmoLineSlider3D_GetRealLength(this,fVar14,(MethodInfo *)0x0);
      if (pGVar13 == (GizmoRotationArc3D *)0x0) goto code_?;
      GizmoRotationArc3D::GizmoRotationArc3D_set_Radius(pGVar13,fVar14,(MethodInfo *)0x0);
      pGVar13 = (this->fields)._rotationArc;
      pGVar5 = (&(this->fields)._lookAndFeel)
                [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
      if ((pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) || (pGVar13 == (GizmoRotationArc3D *)0x0))
      goto code_?;
      GizmoRotationArc3D::GizmoRotationArc3D_Render
                (pGVar13,(pGVar5->fields)._rotationArcLookAndFeel,(MethodInfo *)0x0);
    }
  }
  pGVar5 = (&(this->fields)._lookAndFeel)
            [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if (pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    fVar14 = _UNK_?;
    if ((pGVar5->fields)._useZoomFactor != 0) {
      pGVar15 = (this->fields)._._handle;
      if (pGVar15 == (GizmoHandle *)0x0) goto code_?;
      fVar14 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar15,camera,(MethodInfo *)0x0);
    }
    pVVar16 = GizmoLineSlider3D_GetRealEndPosition
                        ((Vector3 *)auStack_17,this,fVar14,(MethodInfo *)0x0);
    uStack_18._0_4_ = pVVar16->x;
    uStack_18._4_4_ = pVVar16->y;
    fVar14 = pVVar16->z;
    pVVar16 = GizmoLineSlider3D_GetRealDirection(&VStack_19,this,(MethodInfo *)0x0);
    auStack_17._4_4_ = pVVar16->x;
    auStack_17._8_4_ = pVVar16->y;
    fVar20 = pVVar16->z;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__CameraEx);
    }
    point.z = fVar14;
    point.x = (float)(undefined4)uStack_18;
    point.y = (float)uStack_18._4_4_;
    pointNormal.z = fVar20;
    pointNormal.x = (float)auStack_17._4_4_;
    pointNormal.y = (float)auStack_17._8_4_;
    bVar21 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,pointNormal,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._cap3D;
    if (pGVar1 != (GizmoCap3D *)0x0) {
      if (((pGVar1->fields)._._isVisible & (bVar21 ^ 1)) != 0) {
        (*(code *)(pGVar1->klass->vtable).Render_1.method)
                  (pGVar1,camera,(pGVar1->klass->vtable).OnVisibilityStateChanged.methodPtr);
      }
      if ((this->fields)._._isVisible != 0) {
        pGVar5 = (&(this->fields)._lookAndFeel)
                  [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
        if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
        if ((pGVar5->fields)._fillMode == 0) {
          pGVar5 = (&(this->fields)._lookAndFeel)
                    [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
          if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
          if ((pGVar5->fields)._shadeMode == 0) {
            bVar22 = ((&(this->fields)._lookAndFeel)
                      [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0]->
                     fields)._lineType != 0;
          }
          else {
            bVar22 = false;
          }
          auStack_17[8] = bVar22;
          if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
          }
          this_02 = (GizmoSolidMaterial *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
          if (this_02 == (GizmoSolidMaterial *)0x0) goto code_?;
          GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                    (this_02,(MethodInfo *)0x0);
          GizmoSolidMaterial::GizmoSolidMaterial_SetLit
                    (this_02,SUB81(auStack_17._4_8_,4),(MethodInfo *)0x0);
          if (bVar22 != false) {
            if ((camera == (Camera *)0x0) ||
               (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)camera,(MethodInfo *)0x0),
               this_03 == (Transform *)0x0)) goto code_?;
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_19,this_03,(MethodInfo *)0x0);
            GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection
                      (this_02,*pVVar16,(MethodInfo *)0x0);
          }
          color_00.g = fStack_8;
          color_00.r = fStack_7;
          color_00.b = fStack_9;
          color_00.a = fStack_10;
          GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_02,color_00,(MethodInfo *)0x0);
          GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_02,0,(MethodInfo *)0x0);
          pGVar15 = (this->fields)._._handle;
          if (pGVar15 == (GizmoHandle *)0x0) goto code_?;
          GizmoHandle::GizmoHandle_Render3DSolid(pGVar15,(MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
          }
          this_01 = (GizmoLineMaterial *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
          if (this_01 == (GizmoLineMaterial *)0x0) goto code_?;
          GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                    (this_01,(MethodInfo *)0x0);
          color.g = fStack_8;
          color.r = fStack_7;
          color.b = fStack_9;
          color.a = fStack_10;
          GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,color,(MethodInfo *)0x0);
          GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
          pGVar15 = (this->fields)._._handle;
          if (pGVar15 == (GizmoHandle *)0x0) goto code_?;
          GizmoHandle::GizmoHandle_Render3DWire(pGVar15,(MethodInfo *)0x0);
        }
      }
      pGVar1 = (this->fields)._cap3D;
      if (pGVar1 != (GizmoCap3D *)0x0) {
        if (((pGVar1->fields)._._isVisible != 0) && (bVar21 == 1)) {
          (*(code *)(pGVar1->klass->vtable).Render_1.method)
                    (pGVar1,camera,(pGVar1->klass->vtable).OnVisibilityStateChanged.methodPtr);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  (this->fields)._selectedDragSession = (IGizmoDragSession *)pGVar1;
  func_?(&(this->fields)._selectedDragSession,pGVar1);
code_?:
  pGVar2 = (this->fields)._._handle;
  if (pGVar2 != (GizmoHandle *)0x0) {
    pIVar3 = (this->fields)._selectedDragSession;
    (pGVar2->fields)._DragSession_k__BackingField = pIVar3;
    func_?(&(pGVar2->fields)._DragSession_k__BackingField,pIVar3);
    this_00 = (this->fields)._cap3D;
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
  pGVar2 = (this->fields)._cap3D;
  pGVar3 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if ((pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar2 != (GizmoCap3D *)0x0)) {
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
  (this->fields)._segment = this_00;
  func_?(&(this->fields)._segment,this_00);
  this_01 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._box = this_01;
  func_?(&(this->fields)._box,this_01);
  this_02 = (CylinderShape3D *)func_?(TypeInfo__RTG__CylinderShape3D);
  CylinderShape3D::CylinderShape3D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._cylinder = this_02;
  func_?(&(this->fields)._cylinder,this_02);
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
    pIVar1 = (IGizmoLineSlider3DController__Array *)func_?();
    (this->fields)._controllers = pIVar1;
    func_?();
    method_01 = TypeInfo__RTG__GizmoLineSlider3DControllerData;
    pGVar2 = (GizmoLineSlider3DControllerData *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (this->fields)._controllerData = pGVar2;
    func_?();
    (this->fields)._dragChannel = 3;
    pGVar3 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D)
    ;
    GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar3,(MethodInfo *)0x0);
    (this->fields)._offsetDrag = (GizmoSglAxisOffsetDrag3D *)pGVar3;
    func_?(&(this->fields)._offsetDrag,pGVar3);
    pGVar3 = (GizmoSglAxisRotationDrag3D *)func_?();
    GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar3,(MethodInfo *)0x0);
    (this->fields)._rotationDrag = pGVar3;
    func_?();
    this_04 = (GizmoRotationArc3D *)func_?();
    GizmoRotationArc3D::GizmoRotationArc3D__ctor(this_04,(MethodInfo *)0x0);
    (this->fields)._rotationArc = this_04;
    func_?();
    pGVar4 = (GizmoSglAxisScaleDrag3D *)func_?();
    GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D__ctor(pGVar4,(MethodInfo *)0x0);
    (this->fields)._scaleDrag = pGVar4;
    func_?();
    this_05 = (List_1_RTG_GizmoScalerHandle_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_05,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__List__);
    (this->fields)._scalerHandles = this_05;
    func_?();
    pGVar5 = (GizmoTransform *)func_?();
    GizmoTransform::GizmoTransform__ctor(pGVar5,(MethodInfo *)0x0);
    (this->fields)._transform = pGVar5;
    func_?();
    pGVar6 = (GizmoTransformAxisMap3D *)func_?();
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D__ctor(pGVar6,(MethodInfo *)0x0);
    (this->fields)._directionAxisMap = pGVar6;
    func_?();
    pGVar6 = (GizmoTransformAxisMap3D *)func_?();
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D__ctor(pGVar6,(MethodInfo *)0x0);
    (this->fields)._dragRotationAxisMap = pGVar6;
    func_?();
    this_06 = (GizmoOverrideColor *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_06,(MethodInfo *)0x0);
    (this->fields)._overrideColor = this_06;
    func_?();
    method_00 = TypeInfo__RTG__GizmoLineSlider3DSettings;
    value = (GizmoLineSlider3DSettings *)func_?();
    (value->fields)._lineHoverEps = 0.7;
    (value->fields)._boxHoverEps = 0.5;
    (value->fields)._cylinderHoverEps = 0.5;
    (value->fields)._offsetSnapStep = 1.0;
    (value->fields)._rotationSnapStep = 15.0;
    (value->fields)._scaleSnapStep = 0.1;
    (value->fields)._offsetSensitivity = 1.0;
    (value->fields)._rotationSensitivity = 0.45;
    (value->fields)._scaleSensitivity = 1.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._settings = value;
    func_?();
    pGVar7 = (GizmoLineSlider3DLookAndFeel *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    (pGVar7->fields)._length = 5.0;
    (pGVar7->fields)._scale = 1.0;
    (pGVar7->fields)._useZoomFactor = 1;
    (pGVar7->fields)._boxHeight = 0.18;
    (pGVar7->fields)._boxDepth = 0.18;
    (pGVar7->fields)._cylinderRadius = 0.15;
    (pGVar7->fields)._isRotationArcVisible = 1;
    this_07 = (GizmoRotationArc3DLookAndFeel *)func_?();
    GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_07,(MethodInfo *)0x0);
    (pGVar7->fields)._rotationArcLookAndFeel = this_07;
    func_?();
    pCVar8 = RTSystemValues::RTSystemValues_get_XAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar9 = pCVar8->g;
    fVar10 = pCVar8->b;
    fVar11 = pCVar8->a;
    (pGVar7->fields)._color.r = pCVar8->r;
    (pGVar7->fields)._color.g = fVar9;
    (pGVar7->fields)._color.b = fVar10;
    (pGVar7->fields)._color.a = fVar11;
    pCVar8 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar9 = pCVar8->g;
    fVar10 = pCVar8->b;
    fVar11 = pCVar8->a;
    (pGVar7->fields)._hoveredColor.r = pCVar8->r;
    (pGVar7->fields)._hoveredColor.g = fVar9;
    (pGVar7->fields)._hoveredColor.b = fVar10;
    (pGVar7->fields)._hoveredColor.a = fVar11;
    this_08 = (GizmoCap3DLookAndFeel *)func_?();
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(this_08,(MethodInfo *)0x0);
    (pGVar7->fields)._capLookAndFeel = this_08;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar7,ExceptionArgument__Enum_obj,
               (MethodInfo *)&(pGVar7->fields)._capLookAndFeel);
    (this->fields)._lookAndFeel = pGVar7;
    func_?();
    GizmoSlider::GizmoSlider__ctor
              ((GizmoSlider *)this,(Gizmo *)&UNK_?,(int32_t)pGVar6,(MethodInfo *)0x0);
    pGVar12 = (this->fields)._._handle;
    if (pGVar12 == (GizmoHandle *)0x0) goto code_?;
    iVar13 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar12,(Shape3D *)(this->fields)._segment,(MethodInfo *)0x0);
    (this->fields)._segmentIndex = iVar13;
    pGVar12 = (this->fields)._._handle;
    if (pGVar12 == (GizmoHandle *)0x0) goto code_?;
    iVar13 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar12,(Shape3D *)(this->fields)._box,(MethodInfo *)0x0);
    (this->fields)._boxIndex = iVar13;
    pGVar12 = (this->fields)._._handle;
    if (pGVar12 == (GizmoHandle *)0x0) goto code_?;
    iVar13 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar12,(Shape3D *)(this->fields)._cylinder,(MethodInfo *)0x0);
    pGVar14 = (this->fields)._._gizmo;
    (this->fields)._cylinderIndex = iVar13;
    pGVar15 = (GizmoCap3D *)func_?();
    GizmoCap3D::GizmoCap3D__ctor(pGVar15,pGVar14,0,(MethodInfo *)0x0);
    (this->fields)._cap3D = pGVar15;
    func_?();
    pGVar15 = (this->fields)._cap3D;
    pGVar7 = (&(this->fields)._lookAndFeel)
              [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
    if ((pGVar7 == (GizmoLineSlider3DLookAndFeel *)0x0) || (pGVar15 == (GizmoCap3D *)0x0))
    goto code_?;
    (pGVar15->fields)._sharedLookAndFeel = (pGVar7->fields)._capLookAndFeel;
    func_?();
    bVar16 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
    if (bVar16 == 0) {
      pGVar6 = (this->fields)._directionAxisMap;
      if (pGVar6 == (GizmoTransformAxisMap3D *)0x0) goto code_?;
      GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
                (pGVar6,(this->fields)._transform,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    }
    (this->fields)._selectedDragSession = (IGizmoDragSession *)(this->fields)._offsetDrag;
    (this->fields)._dragChannel = 1;
    func_?();
    pGVar12 = (this->fields)._._handle;
    if (pGVar12 == (GizmoHandle *)0x0) goto code_?;
    (pGVar12->fields)._DragSession_k__BackingField = (this->fields)._selectedDragSession;
    func_?();
    pGVar15 = (this->fields)._cap3D;
    if (pGVar15 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar15,(this->fields)._selectedDragSession,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).Gizmo = (this->fields)._._gizmo;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).Slider = this;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).SliderHandle = (this->fields)._._handle;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).Segment = (this->fields)._segment;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).Box = (this->fields)._box;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).Cylinder = (this->fields)._cylinder;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).SegmentIndex = (this->fields)._segmentIndex;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).BoxIndex = (this->fields)._boxIndex;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
    (pGVar2->fields).CylinderIndex = (this->fields)._cylinderIndex;
    pIVar1 = (this->fields)._controllers;
    pGVar2 = (this->fields)._controllerData;
    value_00 = (Il2CppClass *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar1);
    value_00->name = (char *)pGVar2;
    func_?();
    if (pIVar1 == (IGizmoLineSlider3DController__Array *)0x0) goto code_?;
    iVar17 = func_?();
    if (iVar17 == 0) goto code_?;
    if ((char *)pIVar1->max_length == (char *)0x0) goto code_?;
    pIVar1->vector[0] = (IGizmoLineSlider3DController *)value_00;
    func_?();
    pIVar1 = (this->fields)._controllers;
    pOVar18 = (Object__Class *)(this->fields)._controllerData;
    method_02 = TypeInfo__RTG__GizmoBoxLineSlider3DController;
    pOVar19 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar19,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    pOVar19[1].klass = pOVar18;
    func_?();
    if (pIVar1 == (IGizmoLineSlider3DController__Array *)0x0) goto code_?;
    iVar17 = func_?();
    if (iVar17 == 0) goto code_?;
    if (pIVar1->max_length < 2) goto code_?;
    pIVar1->vector[1] = (IGizmoLineSlider3DController *)pOVar19;
    func_?();
    pIVar1 = (this->fields)._controllers;
    pOVar18 = (Object__Class *)(this->fields)._controllerData;
    method_03 = TypeInfo__RTG__GizmoCylinderLineSlider3DController;
    pOVar19 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar19,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    pOVar19[1].klass = pOVar18;
    func_?();
    if (pIVar1 == (IGizmoLineSlider3DController__Array *)0x0) goto code_?;
    iVar17 = func_?();
    if (iVar17 != 0) {
      if (pIVar1->max_length < 3) goto code_?;
      pIVar1->vector[2] = (IGizmoLineSlider3DController *)pOVar19;
      func_?();
      pGVar5 = (this->fields)._transform;
      value_01 = (GizmoEntityTransformChangedHandler *)func_?();
      Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
      SerializationCallback__ctor
                ((SerializationCallback *)value_01,(Object *)this,
                 MethodInfo__RTG__GizmoLineSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 ,(MethodInfo *)0x0);
      if (pGVar5 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_add_Changed(pGVar5,value_01,(MethodInfo *)0x0);
        pGVar14 = (this->fields)._._gizmo;
        value_02 = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_02,(Object *)this,
                   MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (pGVar14 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(pGVar14,value_02,(MethodInfo *)0x0);
          pGVar14 = (this->fields)._._gizmo;
          value_03 = (GizmoPreDragBeginAttemptHandler *)func_?();
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    ((EventHandler_1_Object_ *)value_03,(Object *)this,
                     MethodInfo__RTG__GizmoLineSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                     ,(MethodInfo *)0x0);
          if (pGVar14 != (Gizmo *)0x0) {
            Gizmo::Gizmo_add_PreDragBeginAttempt(pGVar14,value_03,(MethodInfo *)0x0);
            pGVar14 = (this->fields)._._gizmo;
            value_04 = (GizmoPreHoverEnterHandler *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      ((EventHandler_1_Object_ *)value_04,(Object *)this,
                       MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_,
                       (MethodInfo *)0x0);
            if (pGVar14 != (Gizmo *)0x0) {
              Gizmo::Gizmo_add_PreHoverEnter(pGVar14,value_04,(MethodInfo *)0x0);
              pGVar14 = (this->fields)._._gizmo;
              value_05 = (GizmoPreHoverExitHandler *)func_?();
              mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                        ((EventHandler_1_Object_ *)value_05,(Object *)this,
                         MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverExit_RTG__Gizmo__int_
                         ,(MethodInfo *)0x0);
              if (pGVar14 != (Gizmo *)0x0) {
                Gizmo::Gizmo_add_PreHoverExit(pGVar14,value_05,(MethodInfo *)0x0);
                pGVar14 = (this->fields)._._gizmo;
                value_06 = (GizmoPostEnabledHandler *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                VideoCapture+OnVideoCaptureResourceCreatedCallback::
                VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                          ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_06,
                           (Object *)this,
                           MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostEnabled_RTG__Gizmo_,
                           (MethodInfo *)0x0);
                if (pGVar14 != (Gizmo *)0x0) {
                  Gizmo::Gizmo_add_PostEnabled(pGVar14,value_06,(MethodInfo *)0x0);
                  pGVar14 = (this->fields)._._gizmo;
                  value_07 = (GizmoPostDisabledHandler *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                  VideoCapture+OnVideoCaptureResourceCreatedCallback::
                  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_07,
                             (Object *)this,
                             MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostDisabled_RTG__Gizmo_,
                             (MethodInfo *)0x0);
                  if (pGVar14 != (Gizmo *)0x0) {
                    Gizmo::Gizmo_add_PostDisabled(pGVar14,value_07,(MethodInfo *)0x0);
                    pGVar20 = (this->fields)._offsetDrag;
                    pGVar5 = (this->fields)._transform;
                    if (pGVar20 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                      GizmoDragSession::GizmoDragSession_AddTargetTransform
                                ((GizmoDragSession *)pGVar20,pGVar5,(MethodInfo *)0x0);
                      pGVar3 = (this->fields)._rotationDrag;
                      if (pGVar3 != (GizmoSglAxisRotationDrag3D *)0x0) {
                        GizmoDragSession::GizmoDragSession_AddTargetTransform
                                  ((GizmoDragSession *)pGVar3,pGVar5,(MethodInfo *)0x0);
                        pGVar4 = (this->fields)._scaleDrag;
                        if (pGVar4 != (GizmoSglAxisScaleDrag3D *)0x0) {
                          GizmoDragSession::GizmoDragSession_AddTargetTransform
                                    ((GizmoDragSession *)pGVar4,pGVar5,(MethodInfo *)0x0);
                          pGVar14 = (this->fields)._._gizmo;
                          if (pGVar14 != (Gizmo *)0x0) {
                            pGVar20 = (this->fields)._offsetDrag;
                            pGVar5 = (pGVar14->fields)._transform;
                            if (pGVar20 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                              GizmoDragSession::GizmoDragSession_AddTargetTransform
                                        ((GizmoDragSession *)pGVar20,pGVar5,(MethodInfo *)0x0);
                              pGVar3 = (this->fields)._rotationDrag;
                              if (pGVar3 != (GizmoSglAxisRotationDrag3D *)0x0) {
                                GizmoDragSession::GizmoDragSession_AddTargetTransform
                                          ((GizmoDragSession *)pGVar3,pGVar5,(MethodInfo *)0x0);
                                pGVar4 = (this->fields)._scaleDrag;
                                if (pGVar4 != (GizmoSglAxisScaleDrag3D *)0x0) {
                                  GizmoDragSession::GizmoDragSession_AddTargetTransform
                                            ((GizmoDragSession *)pGVar4,pGVar5,(MethodInfo *)0x0);
                                  pGVar15 = (this->fields)._cap3D;
                                  if (pGVar15 != (GizmoCap3D *)0x0) {
                                    GizmoCap3D::GizmoCap3D_RegisterTransformAsDragTarget
                                              (pGVar15,(IGizmoDragSession *)
                                                       (this->fields)._offsetDrag,(MethodInfo *)0x0)
                                    ;
                                    pGVar15 = (this->fields)._cap3D;
                                    if (pGVar15 != (GizmoCap3D *)0x0) {
                                      GizmoCap3D::GizmoCap3D_RegisterTransformAsDragTarget
                                                (pGVar15,(IGizmoDragSession *)
                                                         (this->fields)._rotationDrag,
                                                 (MethodInfo *)0x0);
                                      pGVar15 = (this->fields)._cap3D;
                                      if (pGVar15 != (GizmoCap3D *)0x0) {
                                        GizmoCap3D::GizmoCap3D_RegisterTransformAsDragTarget
                                                  (pGVar15,(IGizmoDragSession *)
                                                           (this->fields)._scaleDrag,
                                                   (MethodInfo *)0x0);
                                        pGVar14 = (this->fields)._._gizmo;
                                        if ((pGVar14 != (Gizmo *)0x0) &&
                                           (pGVar5 = (this->fields)._transform,
                                           pGVar5 != (GizmoTransform *)0x0)) {
                                          GizmoTransform::GizmoTransform_SetParent
                                                    (pGVar5,(pGVar14->fields)._transform,
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
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  pGVar1 = (this->fields)._cap3D;
  pGVar2 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0];
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar1 != (GizmoCap3D *)0x0)) {
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

