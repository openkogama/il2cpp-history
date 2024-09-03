
/* Single GetZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_GetZoomFactor
                (RotationGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
    pRVar1 = (this->fields)._lookAndFeel3D;
    if (pRVar1 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pRVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pRVar1->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    if ((pGVar2->fields)._useZoomFactor == 0) {
      return 1.0;
    }
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_GetZoomFactor_1
                (RotationGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
    pRVar1 = (this->fields)._lookAndFeel3D;
    if (pRVar1 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pRVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pRVar1->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    if ((pGVar2->fields)._useZoomFactor != 0) {
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
    return 1.0;
  }
code_?:
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnAttached
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    cRam_? = '\x01';
  }
  pGStack_1 = (this->fields)._._gizmo;
  EVar2 = System.Core.dll::System::Linq::Expressions::BlockExpression::BlockExpression_get_NodeType
                    ((BlockExpression *)0x0,unaff_EDI);
  pGVar3 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
  GizmoCap3D::GizmoCap3D__ctor(pGVar3,pGStack_1,EVar2,(MethodInfo *)0x0);
  (this->fields)._midCap = pGVar3;
  func_?(&(this->fields)._midCap,pGVar3);
  pGVar3 = (this->fields)._midCap;
  if (pGVar3 != (GizmoCap3D *)0x0) {
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._camXYRotationDrag,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._._gizmo;
    if ((pGVar4 != (Gizmo *)0x0) &&
       (this_00 = (this->fields)._camXYRotationDrag, this_00 != (GizmoDblAxisRotationDrag3D *)0x0))
    {
      GizmoDragSession::GizmoDragSession_AddTargetTransform
                ((GizmoDragSession *)this_00,(pGVar4->fields)._transform,(MethodInfo *)0x0);
      pGStack_1 = (this->fields)._._gizmo;
      iVar5 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_SizeOf_29((MethodInfo *)0x0);
      pGVar6 = TypeInfo__RTG__GizmoPlaneSlider3D;
      pGVar7 = (GizmoPlaneSlider3D *)func_?();
      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar7,pGStack_1,iVar5,(MethodInfo *)0x0);
      (this->fields)._xSlider = pGVar7;
      func_?();
      pGVar7 = (this->fields)._xSlider;
      if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
        GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetDragChannel
                  (pGVar7,GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0);
        pGVar7 = (this->fields)._xSlider;
        QStack_8.z = 0.0;
        auVar9._4_8_ = 0;
        auVar9._0_4_ = _UNK_?;
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            (&QStack_8,(Vector3)(auVar9 << 0x20),(MethodInfo *)0x0);
        if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
          GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_LocalRotation
                    (pGVar7,*pQVar10,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._xSlider;
          if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
            pGVar11 = pGVar7->klass;
            (pGVar7->fields)._._isVisible = 0;
            (*(code *)(pGVar11->vtable).OnVisibilityStateChanged.method)();
            pGVar12 = (this->fields)._axesSliders;
            if (pGVar12 != (GizmoPlaneSlider3DCollection *)0x0) {
              GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                        (pGVar12,(this->fields)._xSlider,(MethodInfo *)0x0);
              pGStack_1 = (this->fields)._._gizmo;
              EVar2 = System.Core.dll::System::Linq::Expressions::NewArrayBoundsExpression::
                      NewArrayBoundsExpression_get_NodeType
                                ((NewArrayBoundsExpression *)0x0,(MethodInfo *)pGVar6);
              pGVar7 = (GizmoPlaneSlider3D *)func_?();
              pGVar13 = pGVar7;
              GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                        (pGVar7,pGStack_1,EVar2,(MethodInfo *)0x0);
              (this->fields)._ySlider = pGVar7;
              func_?();
              pGVar7 = (this->fields)._ySlider;
              if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetDragChannel
                          (pGVar7,GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0);
                pGVar7 = (this->fields)._ySlider;
                QStack_8.z = 0.0;
                euler.y = 0.0;
                euler.z = 0.0;
                euler.x = (float)pGVar13;
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
                if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                  GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_LocalRotation
                            (pGVar7,*pQVar10,(MethodInfo *)0x0);
                  pGVar7 = (this->fields)._ySlider;
                  if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                    pGVar11 = pGVar7->klass;
                    (pGVar7->fields)._._isVisible = 0;
                    (*(code *)(pGVar11->vtable).OnVisibilityStateChanged.method)();
                    pGVar12 = (this->fields)._axesSliders;
                    if (pGVar12 != (GizmoPlaneSlider3DCollection *)0x0) {
                      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                                (pGVar12,(this->fields)._ySlider,(MethodInfo *)0x0);
                      pGStack_1 = (this->fields)._._gizmo;
                      handleId = System.Xml.dll::System::Xml::Schema::Datatype_NMTOKEN::
                                 Datatype_NMTOKEN_get_TypeCode
                                           ((Datatype_NMTOKEN *)0x0,(MethodInfo *)pGVar6);
                      pGVar7 = (GizmoPlaneSlider3D *)func_?();
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                (pGVar7,pGStack_1,handleId,(MethodInfo *)0x0);
                      (this->fields)._zSlider = pGVar7;
                      func_?();
                      pGVar7 = (this->fields)._zSlider;
                      if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                        GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetDragChannel
                                  (pGVar7,GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0);
                        pGVar7 = (this->fields)._zSlider;
                        if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                          pGVar6 = pGVar7->klass;
                          (pGVar7->fields)._._isVisible = 0;
                          (*(code *)(pGVar6->vtable).OnVisibilityStateChanged.method)();
                          pGVar12 = (this->fields)._axesSliders;
                          if (pGVar12 != (GizmoPlaneSlider3DCollection *)0x0) {
                            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                                      (pGVar12,(this->fields)._zSlider,(MethodInfo *)0x0);
                            pGVar3 = (this->fields)._midCap;
                            pGVar12 = (this->fields)._axesSliders;
                            if (pGVar3 != (GizmoCap3D *)0x0) {
                              priority = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                         XDocumentTypeWrapper::
                                         XDocumentTypeWrapper_get_InternalSubset
                                                   ((XDocumentTypeWrapper *)pGVar3,(MethodInfo *)0x0
                                                   );
                              if (pGVar12 != (GizmoPlaneSlider3DCollection *)0x0) {
                                GizmoPlaneSlider3DCollection::
                                GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
                                          (pGVar12,(Priority *)priority,(MethodInfo *)0x0);
                                pGStack_1 = (this->fields)._._gizmo;
                                iVar5 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::
                                        Unsafe::UnsafeUtility::UnsafeUtility_SizeOf_45
                                                  ((MethodInfo *)0x0);
                                pGVar14 = (GizmoPlaneSlider2D *)func_?();
                                GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                          (pGVar14,pGStack_1,iVar5,(MethodInfo *)0x0);
                                (this->fields)._camLookSlider = pGVar14;
                                func_?();
                                pGVar14 = (this->fields)._camLookSlider;
                                if (pGVar14 != (GizmoPlaneSlider2D *)0x0) {
                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetDragChannel
                                            (pGVar14,GizmoDragChannel__Enum_Rotation,
                                             (MethodInfo *)0x0);
                                  pGVar14 = (this->fields)._camLookSlider;
                                  if (pGVar14 != (GizmoPlaneSlider2D *)0x0) {
                                    pGVar15 = pGVar14->klass;
                                    (pGVar14->fields)._._isVisible = 0;
                                    (*(code *)(pGVar15->vtable).OnVisibilityStateChanged.method)();
                                    RotationGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
                                    RotationGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
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
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnDetached
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_remove_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisabled() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnDisabled
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_remove_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnabled() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnEnabled
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_add_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnGizmoAttemptHandleDragBegin
               (RotationGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._midCap;
  if (this_00 != (GizmoCap3D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar1) {
      return;
    }
    pGVar2 = (this->fields)._._gizmo;
    if (((pGVar2 != (Gizmo *)0x0) &&
        (pCVar3 = Gizmo::Gizmo_get_FocusCamera(pGVar2,(MethodInfo *)0x0), pCVar3 != (Camera *)0x0))
       && (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pCVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)
       ) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                ((Vector3 *)&stack0xfffffff0,pTVar4,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        puVar5 = &UNK_?;
        pCVar3 = Gizmo::Gizmo_get_FocusCamera(pGVar2,(MethodInfo *)0x0);
        if ((pCVar3 != (Camera *)0x0) &&
           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0
           )) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              ((Vector3 *)&stack0xfffffff0,pTVar4,(MethodInfo *)0x0);
          uVar7 = pVVar6->x;
          fVar8 = pVVar6->z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          uVar9 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).x;
          uVar10 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).y;
          uVar11 = uVar9 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          uVar12 = uVar10 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          uVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
          uVar14 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
          if ((this->fields)._sharedSettings3D == (RotationGizmoSettings3D *)0x0) {
            pRVar15 = (this->fields)._settings3D;
            if (pRVar15 == (RotationGizmoSettings3D *)0x0) goto code_?;
          }
          else {
            pRVar15 = (this->fields)._sharedSettings3D;
          }
          pGVar16 = (pRVar15->fields)._sliderSettings;
          if (pGVar16 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar16->max_length == 0) goto code_?;
            if (pGVar16->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              if ((this->fields)._sharedSettings3D == (RotationGizmoSettings3D *)0x0) {
                pRVar15 = (this->fields)._settings3D;
                if (pRVar15 == (RotationGizmoSettings3D *)0x0) goto code_?;
              }
              else {
                pRVar15 = (this->fields)._sharedSettings3D;
              }
              if ((this->fields)._sharedSettings3D == (RotationGizmoSettings3D *)0x0) {
                pRVar17 = (this->fields)._settings3D;
                if (pRVar17 == (RotationGizmoSettings3D *)0x0) goto code_?;
              }
              else {
                pRVar17 = (this->fields)._sharedSettings3D;
              }
              this_01 = (this->fields)._camXYRotationDrag;
              if (this_01 != (GizmoDblAxisRotationDrag3D *)0x0) {
                workData.ScreenAxis0.y = (float)uVar12;
                workData.ScreenAxis0.x = (float)uVar11;
                workData.ScreenAxis1.x = (float)uVar13;
                workData.ScreenAxis1.y = (float)uVar14;
                workData.Axis0.x = (float)uVar14;
                workData.Axis0.y = (float)puVar5;
                workData.Axis0.z = (float)pGVar2;
                workData.Axis1.x = (float)uVar7;
                workData.Axis1.y = (float)uVar7;
                workData.Axis1.z = fVar8;
                workData.SnapMode = (pGVar16->vector[0]->fields)._rotationSnapMode;
                workData.SnapStep0 = (pRVar15->fields)._camUpSnapStep;
                workData.SnapStep1 = (pRVar17->fields)._camRightSnapStep;
                GizmoDblAxisRotationDrag3D::GizmoDblAxisRotationDrag3D_SetWorkData
                          (this_01,workData,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnGizmoRender
               (RotationGizmo *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  this_01 = (RTGizmosEngine *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_01 == (RTGizmosEngine *)0x0) goto code_?;
  iVar1 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_01,(MethodInfo *)0x0);
  if (1 < iVar1) {
    pGVar2 = (this->fields)._midCap;
    if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar2,camera,(MethodInfo *)0x0);
    this_00 = (this->fields)._axesSliders;
    if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
              (this_00,camera,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._camLookSlider;
    if (pGVar3 == (GizmoPlaneSlider2D *)0x0) goto code_?;
    if ((pGVar3->fields)._isBorderVisible != 0) {
      RotationGizmo_UpdateCamLookSlider(this,camera,(MethodInfo *)0x0);
    }
  }
  pGVar4 = (this->fields)._xSlider;
  if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
    pGVar5 = pGVar4->klass;
    pIStack6 = (pGVar5->vtable).OnVisibilityStateChanged.methodPtr;
    (*(code *)(pGVar5->vtable).Render_1.method)();
    pGVar4 = (this->fields)._ySlider;
    if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
      pGVar5 = pGVar4->klass;
      pIStack6 = (pGVar5->vtable).OnVisibilityStateChanged.methodPtr;
      (*(code *)(pGVar5->vtable).Render_1.method)();
      pGVar4 = (this->fields)._zSlider;
      if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
        pGVar5 = pGVar4->klass;
        pIStack6 = (pGVar5->vtable).OnVisibilityStateChanged.methodPtr;
        (*(code *)(pGVar5->vtable).Render_1.method)();
        pGVar2 = (this->fields)._midCap;
        if (pGVar2 != (GizmoCap3D *)0x0) {
          pGVar7 = pGVar2->klass;
          pIStack6 = (pGVar7->vtable).OnVisibilityStateChanged.methodPtr;
          (*(code *)(pGVar7->vtable).Render_1.method)();
          pGVar3 = (this->fields)._camLookSlider;
          if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
            pGVar8 = pGVar3->klass;
            pIStack6 = (pGVar8->vtable).OnVisibilityStateChanged.methodPtr;
            (*(code *)(pGVar8->vtable).Render_1.method)();
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnGizmoTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnGizmoTransformChanged
               (RotationGizmo *this,GizmoTransform *gizmoTransform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if ((changeData.ChangeReason == 1) || (changeData.TRSDimension == 2)) {
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    RotationGizmo_UpdateCamLookSlider(this,camera,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnGizmoUpdateBegin
               (RotationGizmo *this,MethodInfo *method)

{
  if ((this->fields)._useSnapEnableHotkey != 0) {
    if ((this->fields)._sharedHotkeys == (RotationGizmoHotkeys *)0x0) {
      pRVar1 = (this->fields)._hotkeys;
      if (pRVar1 == (RotationGizmoHotkeys *)0x0) goto code_?;
    }
    else {
      pRVar1 = (this->fields)._sharedHotkeys;
    }
    this_00 = (pRVar1->fields)._enableSnapping;
    if (this_00 == (Hotkeys *)0x0) goto code_?;
    isEnabled = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    this_01 = (this->fields)._axesSliders;
    if (this_01 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
              (this_01,isEnabled,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._camXYRotationDrag;
    if (pGVar2 == (GizmoDblAxisRotationDrag3D *)0x0) goto code_?;
    (pGVar2->fields)._._isSnapEnabled = isEnabled;
    pGVar3 = (this->fields)._camLookSlider;
    if (pGVar3 == (GizmoPlaneSlider2D *)0x0) goto code_?;
    (*(code *)(pGVar3->klass->vtable).SetSnapEnabled_1.method)();
  }
  this_02 = (this->fields)._midCap;
  if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
    pRVar4 = (this->fields)._lookAndFeel3D;
    if (pRVar4 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pRVar4 = (this->fields)._sharedLookAndFeel3D;
  }
  if (this_02 != (GizmoCap3D *)0x0) {
    GizmoCap::GizmoCap_SetVisible
              ((GizmoCap *)this_02,(pRVar4->fields)._isMidCapVisible,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._camXYRotationDrag;
    if ((this->fields)._sharedSettings3D == (RotationGizmoSettings3D *)0x0) {
      pRVar5 = (this->fields)._settings3D;
      if (pRVar5 == (RotationGizmoSettings3D *)0x0) goto code_?;
    }
    else {
      pRVar5 = (this->fields)._sharedSettings3D;
    }
    pGVar6 = (pRVar5->fields)._sliderSettings;
    if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
      if (pGVar6->max_length != 0) {
        if ((pGVar6->vector[0] == (GizmoPlaneSlider3DSettings *)0x0) ||
           (pGVar2 == (GizmoDblAxisRotationDrag3D *)0x0)) goto code_?;
        GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                  ((GizmoScreenDrag *)pGVar2,(pGVar6->vector[0]->fields)._rotationSensitivity,
                   (MethodInfo *)0x0);
        pGVar7 = (this->fields)._xSlider;
        if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
          pRVar4 = (this->fields)._lookAndFeel3D;
          if (pRVar4 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
        }
        else {
          pRVar4 = (this->fields)._sharedLookAndFeel3D;
        }
        pBVar8 = (pRVar4->fields)._axesVis;
        if (pBVar8 == (Boolean__Array *)0x0) goto code_?;
        if (pBVar8->max_length != 0) {
          if (pGVar7 == (GizmoPlaneSlider3D *)0x0) goto code_?;
          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                    (pGVar7,pBVar8->vector[0] != 0,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._ySlider;
          if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
            pRVar4 = (this->fields)._lookAndFeel3D;
            if (pRVar4 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
          }
          else {
            pRVar4 = (this->fields)._sharedLookAndFeel3D;
          }
          pBVar8 = (pRVar4->fields)._axesVis;
          if (pBVar8 == (Boolean__Array *)0x0) goto code_?;
          if (1 < pBVar8->max_length) {
            if (pGVar7 == (GizmoPlaneSlider3D *)0x0) goto code_?;
            GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                      (pGVar7,pBVar8->vector[1] != 0,(MethodInfo *)0x0);
            pGVar7 = (this->fields)._zSlider;
            if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
              pRVar4 = (this->fields)._lookAndFeel3D;
              if (pRVar4 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
            }
            else {
              pRVar4 = (this->fields)._sharedLookAndFeel3D;
            }
            pBVar8 = (pRVar4->fields)._axesVis;
            if (pBVar8 == (Boolean__Array *)0x0) goto code_?;
            if (2 < pBVar8->max_length) {
              if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                          (pGVar7,pBVar8->vector[2] != 0,(MethodInfo *)0x0);
                pGVar3 = (this->fields)._camLookSlider;
                if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
                  pRVar4 = (this->fields)._lookAndFeel3D;
                  if (pRVar4 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
                }
                else {
                  pRVar4 = (this->fields)._sharedLookAndFeel3D;
                }
                if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
                  GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible
                            (pGVar3,(pRVar4->fields)._isCamLookSliderVisible,(MethodInfo *)0x0);
                  pGVar3 = (this->fields)._camLookSlider;
                  if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
                    if ((pGVar3->fields)._isBorderVisible != 0) {
                      this_03 = (this->fields)._._gizmo;
                      if (this_03 == (Gizmo *)0x0) goto code_?;
                      camera = Gizmo::Gizmo_get_FocusCamera(this_03,(MethodInfo *)0x0);
                      RotationGizmo_UpdateCamLookSlider(this,camera,(MethodInfo *)0x0);
                    }
                    return;
                  }
                }
              }
              goto code_?;
            }
          }
        }
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OwnsHandle
               (RotationGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._axesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    bVar1 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                      (this_00,handleId,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    this_01 = (this->fields)._midCap;
    if (this_01 != (GizmoCap3D *)0x0) {
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_01,(MethodInfo *)0x0);
      return pvVar2 == (void *)handleId;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void SetMidCapHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_SetMidCapHoverable
               (RotationGizmo *this,bool hoverable,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pGStack_2 = (this->fields)._midCap;
  if (pGStack_2 != (GizmoCap3D *)0x0) {
    if ((pGStack_2->fields)._._isHoverable != hoverable) {
      (pGStack_2->fields)._._isHoverable = hoverable;
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


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_SetSnapEnabled
               (RotationGizmo *this,bool isEnabled,MethodInfo *method)

{
  this_00 = (this->fields)._axesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
              (this_00,isEnabled,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._camXYRotationDrag;
    if (pGVar1 != (GizmoDblAxisRotationDrag3D *)0x0) {
      (pGVar1->fields)._._isSnapEnabled = isEnabled;
      pGVar2 = (this->fields)._camLookSlider;
      if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
        (*(code *)(pGVar2->klass->vtable).SetSnapEnabled_1.method)
                  (pGVar2,_isEnabled,(pGVar2->klass->vtable).Render_1.methodPtr);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_SetupSharedLookAndFeel
               (RotationGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
    pRVar1 = (this->fields)._lookAndFeel3D;
    if (pRVar1 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pRVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pRVar1->fields)._axesLookAndFeel;
  pGVar3 = (this->fields)._xSlider;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      func_?();
    }
    else if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
      pGVar4 = pGVar2->vector[0];
      (pGVar3->fields)._sharedLookAndFeel = pGVar4;
      ppGVar5 = &(pGVar3->fields)._sharedLookAndFeel;
      func_?(ppGVar5,&stack0xfffffffc,&UNK_?,ppGVar5,pGVar4);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_SetupSharedSettings
               (RotationGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (RotationGizmoSettings3D *)0x0) {
    pRVar1 = (this->fields)._settings3D;
    if (pRVar1 == (RotationGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pRVar1 = (this->fields)._sharedSettings3D;
  }
  pGVar2 = (pRVar1->fields)._sliderSettings;
  pGVar3 = (this->fields)._xSlider;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      func_?();
    }
    else if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
      pGVar4 = pGVar2->vector[0];
      (pGVar3->fields)._sharedSettings = pGVar4;
      ppGVar5 = &(pGVar3->fields)._sharedSettings;
      func_?(ppGVar5,&stack0xfffffffc,&UNK_?,ppGVar5,pGVar4);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateCamLookSlider(Camera) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_UpdateCamLookSlider
               (RotationGizmo *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCap;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    fVar2 = GizmoCap3D::GizmoCap3D_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._._gizmo;
    this_00 = (this->fields)._camLookSlider;
    if ((pGVar3 != (Gizmo *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      fVar5 = (pGVar4->fields)._position3D.z;
      pGVar1 = (this->fields)._midCap;
      if (pGVar1 != (GizmoCap3D *)0x0) {
        GizmoCap3D::GizmoCap3D_GetRealSphereRadius(pGVar1,fVar2,(MethodInfo *)0x0);
        if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
          pRVar6 = (this->fields)._lookAndFeel3D;
          if (pRVar6 == (RotationGizmoLookAndFeel3D *)0x0) goto code_?;
        }
        else {
          pRVar6 = (this->fields)._sharedLookAndFeel3D;
        }
        if (this_00 != (GizmoPlaneSlider2D *)0x0) {
          fVar2 = fVar2 * (pRVar6->fields)._camLookSliderRadiusOffset + 0.0;
          sphereCenter.y = 1.4013e-43;
          sphereCenter.x = fVar2;
          sphereCenter.z = fVar5;
          GizmoPlaneSlider2D::GizmoPlaneSlider2D_MakePolySphereBorder
                    (this_00,sphereCenter,fVar2,100,camera,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* RotationGizmo() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo__ctor
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoDblAxisRotationDrag3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    func_?(&TypeInfo__RTG__RotationGizmoHotkeys);
    func_?(&TypeInfo__RTG__RotationGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__RotationGizmoSettings3D);
    cRam_? = '\x01';
  }
  this_00 = (GizmoPlaneSlider3DCollection *)
            func_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._axesSliders = this_00;
  func_?(&(this->fields)._axesSliders,this_00);
  this_01 = (GizmoDblAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoDblAxisRotationDrag3D)
  ;
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor
            ((GizmoSglAxisRotationDrag3D *)this_01,(MethodInfo *)0x0);
  (this->fields)._camXYRotationDrag = this_01;
  func_?(&(this->fields)._camXYRotationDrag,this_01);
  this_02 = (RotationGizmoHotkeys *)func_?(TypeInfo__RTG__RotationGizmoHotkeys);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&StringLiteral_Enable_snapping);
    cRam_? = '\x01';
  }
  this_03 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor_1
            (this_03,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (this_03 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(this_03,KeyCode__Enum_None,(MethodInfo *)0x0);
    (this_03->fields)._lCtrl = 1;
    (this_02->fields)._enableSnapping = this_03;
    func_?();
    Settings::Settings__ctor((Settings *)this_02,(MethodInfo *)0x0);
    (this->fields)._hotkeys = this_02;
    func_?();
    this_04 = (RotationGizmoSettings3D *)func_?(TypeInfo__RTG__RotationGizmoSettings3D);
    RotationGizmoSettings3D::RotationGizmoSettings3D__ctor(this_04,(MethodInfo *)0x0);
    (this->fields)._settings3D = this_04;
    func_?(&(this->fields)._settings3D,this_04);
    this_05 = (RotationGizmoLookAndFeel3D *)
              func_?(TypeInfo__RTG__RotationGizmoLookAndFeel3D);
    RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D__ctor(this_05,(MethodInfo *)0x0);
    (this->fields)._lookAndFeel3D = this_05;
    ppRStack1 = &(this->fields)._lookAndFeel3D;
    pRStack2 = this_05;
    func_?();
    (this->fields)._useSnapEnableHotkey = 1;
    GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* RotationGizmoHotkeys get_Hotkeys() */

RotationGizmoHotkeys *
Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_get_Hotkeys
          (RotationGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (RotationGizmoHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return (this->fields)._sharedHotkeys;
}


/* RotationGizmoLookAndFeel3D get_LookAndFeel3D() */

RotationGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_get_LookAndFeel3D
          (RotationGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return (this->fields)._sharedLookAndFeel3D;
}


/* RotationGizmoSettings3D get_Settings3D() */

RotationGizmoSettings3D *
Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_get_Settings3D
          (RotationGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (RotationGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return (this->fields)._sharedSettings3D;
}


/* Void set_SharedLookAndFeel3D(RotationGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_set_SharedLookAndFeel3D
               (RotationGizmo *this,RotationGizmoLookAndFeel3D *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel3D = value;
  func_?(&(this->fields)._sharedLookAndFeel3D,value);
  RotationGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings3D(RotationGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_set_SharedSettings3D
               (RotationGizmo *this,RotationGizmoSettings3D *value,MethodInfo *method)

{
  (this->fields)._sharedSettings3D = value;
  func_?(&(this->fields)._sharedSettings3D,value);
  RotationGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
  return;
}

