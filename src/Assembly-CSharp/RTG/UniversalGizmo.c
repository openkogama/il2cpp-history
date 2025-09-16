
/* UniversalGizmo+MvVertexSnapState GetMvVertexSnapState() */

UniversalGizmo_MvVertexSnapState__Enum
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvVertexSnapState
          (UniversalGizmo *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if ((this->fields)._isMvVertexSnapEnabled == 0) {
    return UniversalGizmo_MvVertexSnapState__Enum_Inactive;
  }
  pGStack_2 = (this->fields)._mvVertexSnapDrag;
  if (pGStack_2 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    pIStack_1 = (pGStack_2->klass->vtable).get_DragChannel_1.methodPtr;
    cVar3 = (*(code *)(pGStack_2->klass->vtable).get_IsActive_1.method)();
    return (uint)(cVar3 != '\0');
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  UVar7 = (*pcVar6)();
  return UVar7;
}


/* Single GetMvZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvZoomFactor
                (UniversalGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    pUVar1 = (this->fields)._lookAndFeel3D;
    if (pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedLookAndFeel3D;
code_?:
    pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
        if ((pGVar2->vector[0]->fields)._useZoomFactor == 0) {
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
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetMvZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvZoomFactor_1
                (UniversalGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    pUVar1 = (this->fields)._lookAndFeel3D;
    if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      func_?();
      func_?();
      pcVar3 = (code *)swi(3);
      fVar4 = (float10)(*pcVar3)();
      return (float)fVar4;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      if ((pGVar2->vector[0]->fields)._useZoomFactor != 0) {
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar5 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
        return fVar5;
      }
      return 1.0;
    }
  }
code_?:
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetRtZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetRtZoomFactor
                (UniversalGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    pUVar1 = (this->fields)._lookAndFeel3D;
    if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pUVar1->fields)._rtMidCapLookAndFeel;
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


/* Single GetRtZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetRtZoomFactor_1
                (UniversalGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    pUVar1 = (this->fields)._lookAndFeel3D;
    if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pUVar1->fields)._rtMidCapLookAndFeel;
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


/* Single GetScZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetScZoomFactor
                (UniversalGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    pUVar1 = (this->fields)._lookAndFeel3D;
    if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pUVar1->fields)._scMidCapLookAndFeel;
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


/* Single GetScZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetScZoomFactor_1
                (UniversalGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    pUVar1 = (this->fields)._lookAndFeel3D;
    if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pUVar1->fields)._scMidCapLookAndFeel;
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


/* Void Hide2DModeHandles() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Hide2DModeHandles
               (UniversalGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mv2DModeSliders;
  if (pGVar1 != (GizmoLineSlider2DCollection *)0x0) {
    GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible(pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._mv2DModeSliders;
    if (pGVar1 != (GizmoLineSlider2DCollection *)0x0) {
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Set2DCapsVisible
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._mv2DModeDblSlider;
      if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
        GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)pGVar2,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._mv2DModeDblSlider;
        if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
          GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(pGVar2,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsDraggingMoveHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingMoveHandle
               (UniversalGizmo *this,MethodInfo *method)

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
      handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerEventBase`1[System::Object]::
                 PointerEventBase_1_System_Object__get_pointerType
                           ((PointerEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0);
      bVar1 = UniversalGizmo_IsMoveHandle(this,(int32_t)handleId,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsDraggingRotationHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingRotationHandle
               (UniversalGizmo *this,MethodInfo *method)

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
      handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerEventBase`1[System::Object]::
                 PointerEventBase_1_System_Object__get_pointerType
                           ((PointerEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0);
      bVar1 = UniversalGizmo_IsRotationHandle(this,(int32_t)handleId,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsDraggingScaleHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingScaleHandle
               (UniversalGizmo *this,MethodInfo *method)

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
      this_02 = (this->fields)._scMidCap;
      if (this_02 != (GizmoCap3D *)0x0) {
        pSVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_02,(MethodInfo *)0x0);
        return pSVar3 == pSVar2;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Boolean IsMoveHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsMoveHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvAxesSliders;
  if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
    bVar2 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
                      (pGVar1,handleId,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 1;
    }
    pGVar1 = (this->fields)._mvAxesSliders;
    if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
      bVar2 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ContainsCapId
                        (pGVar1,handleId,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 1;
      }
      this_00 = (this->fields)._mvDblSliders;
      if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
        bVar2 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                          (this_00,handleId,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return 1;
        }
        pGVar3 = (this->fields)._mv2DModeSliders;
        if (pGVar3 != (GizmoLineSlider2DCollection *)0x0) {
          bVar2 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Contains_1
                            (pGVar3,handleId,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return 1;
          }
          pGVar3 = (this->fields)._mv2DModeSliders;
          if (pGVar3 != (GizmoLineSlider2DCollection *)0x0) {
            bVar2 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_ContainsCapId
                              (pGVar3,handleId,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              return 1;
            }
            this_01 = (this->fields)._mv2DModeDblSlider;
            if (this_01 != (GizmoPlaneSlider2D *)0x0) {
              iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::
                      Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                ((SparselyPopulatedArrayFragment_1_System_Object_ *)this_01,
                                 (MethodInfo *)0x0);
              return iVar4 == handleId;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Boolean IsRotationHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsRotationHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._rtAxesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    bVar1 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                      (this_00,handleId,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    this_01 = (this->fields)._rtMidCap;
    if (this_01 != (GizmoCap3D *)0x0) {
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_01,(MethodInfo *)0x0);
      if (pvVar2 == (void *)handleId) {
        return 1;
      }
      this_02 = (this->fields)._rtCamLookSlider;
      if (this_02 != (GizmoPlaneSlider2D *)0x0) {
        iVar3 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
                SparselyPopulatedArrayFragment_1_System_Object__get_Length
                          ((SparselyPopulatedArrayFragment_1_System_Object_ *)this_02,
                           (MethodInfo *)0x0);
        return iVar3 == handleId;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Boolean IsScaleHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsScaleHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._scMidCap;
  if (this_00 != (GizmoCap3D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    return pvVar1 == (void *)handleId;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnAttached
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&TypeInfo__RTG__GizmoCap3D);
    func_?(&TypeInfo__RTG__GizmoLineSlider2D);
    func_?(&TypeInfo__RTG__GizmoLineSlider3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_Name::Datatype_Name_get_TypeCode
                     ((Datatype_Name *)0x0,unaff_EDI);
  pGVar3 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
  (this->fields)._mvXYSlider = pGVar3;
  func_?(&(this->fields)._mvXYSlider,pGVar3);
  pGVar1 = (this->fields)._._gizmo;
  iVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_SizeOf_25((MethodInfo *)0x0);
  pGVar3 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar3,pGVar1,iVar4,(MethodInfo *)0x0);
  (this->fields)._mvYZSlider = pGVar3;
  func_?(&(this->fields)._mvYZSlider,pGVar3);
  pGVar1 = (this->fields)._._gizmo;
  XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_ID::Datatype_ID_get_TypeCode
                     ((Datatype_ID *)0x0,in_stack_5);
  pGVar3 = (GizmoPlaneSlider3D *)func_?();
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
  (this->fields)._mvZXSlider = pGVar3;
  func_?();
  pGVar6 = (this->fields)._mvDblSliders;
  if (pGVar6 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
              (pGVar6,(this->fields)._mvXYSlider,(MethodInfo *)0x0);
    pGVar6 = (this->fields)._mvDblSliders;
    if (pGVar6 != (GizmoPlaneSlider3DCollection *)0x0) {
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                (pGVar6,(this->fields)._mvYZSlider,(MethodInfo *)0x0);
      pGVar6 = (this->fields)._mvDblSliders;
      if (pGVar6 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                  (pGVar6,(this->fields)._mvZXSlider,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._gizmo;
        iVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_SizeOf_23((MethodInfo *)0x0);
        XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
                 Datatype_hexBinary_get_TypeCode((Datatype_hexBinary *)0x0,in_stack_7);
        pGVar8 = TypeInfo__RTG__GizmoLineSlider3D;
        pGVar9 = (GizmoLineSlider3D *)func_?();
        GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar9,pGVar1,iVar4,XVar2,(MethodInfo *)0x0);
        *(GizmoLineSlider3D **)(iVar4 + 0x10) = pGVar9;
        func_?();
        if (*(GizmoLineSlider3D **)(iVar4 + 0x10) != (GizmoLineSlider3D *)0x0) {
          GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                    (*(GizmoLineSlider3D **)(iVar4 + 0x10),GizmoDragChannel__Enum_Offset,
                     (MethodInfo *)0x0);
          if (*(GizmoLineSlider3D **)(iVar4 + 0x10) != (GizmoLineSlider3D *)0x0) {
            GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                      (*(GizmoLineSlider3D **)(iVar4 + 0x10),0,AxisSign__Enum_Positive,
                       (MethodInfo *)0x0);
            pGVar1 = *(Gizmo **)(iVar4 + 8);
            EVar10 = System.Core.dll::System::Linq::Expressions::MemberExpression::
                     MemberExpression_get_NodeType((MemberExpression *)0x0,(MethodInfo *)pGVar8);
            XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_QName::
                     Datatype_QName_get_TypeCode((Datatype_QName *)0x0,in_stack_7);
            pGVar8 = TypeInfo__RTG__GizmoLineSlider3D;
            pGVar9 = (GizmoLineSlider3D *)func_?();
            GizmoLineSlider3D::GizmoLineSlider3D__ctor
                      (pGVar9,pGVar1,EVar10,XVar2,(MethodInfo *)0x0);
            *(GizmoLineSlider3D **)(EVar10 + ExpressionType__Enum_1_Negate) = pGVar9;
            func_?();
            if (*(GizmoLineSlider3D **)(EVar10 + ExpressionType__Enum_1_Negate) !=
                (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                        (*(GizmoLineSlider3D **)(EVar10 + ExpressionType__Enum_1_Negate),
                         GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
              if (*(GizmoLineSlider3D **)(EVar10 + ExpressionType__Enum_1_Negate) !=
                  (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                          (*(GizmoLineSlider3D **)(EVar10 + ExpressionType__Enum_1_Negate),0,
                           AxisSign__Enum_Negative,(MethodInfo *)0x0);
                pGVar1 = *(Gizmo **)(EVar10 + ExpressionType__Enum_1_Conditional);
                XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_yearMonth::
                         Datatype_yearMonth_get_TypeCode
                                   ((Datatype_yearMonth *)0x0,(MethodInfo *)pGVar8);
                XVar11 = System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
                         Datatype_base64Binary_get_TypeCode
                                   ((Datatype_base64Binary *)0x0,in_stack_7);
                pGVar9 = (GizmoLineSlider3D *)func_?();
                GizmoLineSlider3D::GizmoLineSlider3D__ctor
                          (pGVar9,pGVar1,XVar2,XVar11,(MethodInfo *)0x0);
                *(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date) = pGVar9;
                func_?();
                if (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date) !=
                    (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                            (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date),
                             GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                  if (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date) !=
                      (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                              (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date),1,
                               AxisSign__Enum_Positive,(MethodInfo *)0x0);
                    pGVar1 = *(Gizmo **)(XVar2 + XmlTypeCode__Enum_Comment);
                    iVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_SizeOf_11((MethodInfo *)0x0);
                    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::
                             Datatype_NOTATION_get_TypeCode
                                       ((Datatype_NOTATION *)0x0,in_stack_7);
                    pGVar8 = TypeInfo__RTG__GizmoLineSlider3D;
                    pGVar9 = (GizmoLineSlider3D *)func_?();
                    GizmoLineSlider3D::GizmoLineSlider3D__ctor
                              (pGVar9,pGVar1,iVar4,XVar2,(MethodInfo *)0x0);
                    *(GizmoLineSlider3D **)(iVar4 + 0x20) = pGVar9;
                    func_?();
                    if (*(GizmoLineSlider3D **)(iVar4 + 0x20) != (GizmoLineSlider3D *)0x0) {
                      GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                (*(GizmoLineSlider3D **)(iVar4 + 0x20),
                                 GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                      if (*(GizmoLineSlider3D **)(iVar4 + 0x20) != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                  (*(GizmoLineSlider3D **)(iVar4 + 0x20),1,AxisSign__Enum_Negative,
                                   (MethodInfo *)0x0);
                        pGVar1 = *(Gizmo **)(iVar4 + 8);
                        XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_year::
                                 Datatype_year_get_TypeCode
                                           ((Datatype_year *)0x0,(MethodInfo *)pGVar8);
                        iVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                                 UnsafeUtility::UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
                        pGVar8 = TypeInfo__RTG__GizmoLineSlider3D;
                        pGVar9 = (GizmoLineSlider3D *)func_?();
                        GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                  (pGVar9,pGVar1,XVar2,iVar4,(MethodInfo *)0x0);
                        *(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay) = pGVar9;
                        func_?();
                        if (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay) !=
                            (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                    (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay),
                                     GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                          if (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay) !=
                              (GizmoLineSlider3D *)0x0) {
                            GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                      (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay),2,
                                       AxisSign__Enum_Positive,(MethodInfo *)0x0);
                            pGVar1 = *(Gizmo **)(XVar2 + XmlTypeCode__Enum_Comment);
                            XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_month::
                                     Datatype_month_get_TypeCode
                                               ((Datatype_month *)0x0,(MethodInfo *)pGVar8);
                            XVar11 = System.Xml.dll::System::Xml::Schema::
                                     Datatype_normalizedStringV1Compat::
                                     Datatype_normalizedStringV1Compat_get_TypeCode
                                               ((Datatype_normalizedStringV1Compat *)0x0,
                                                (MethodInfo *)pGVar8);
                            pGVar9 = (GizmoLineSlider3D *)func_?();
                            GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                      (pGVar9,pGVar1,XVar2,XVar11,(MethodInfo *)0x0);
                            *(GizmoLineSlider3D **)(XVar11 + XmlTypeCode__Enum_NCName) = pGVar9;
                            func_?();
                            if (*(GizmoLineSlider3D **)(XVar11 + XmlTypeCode__Enum_NCName) !=
                                (GizmoLineSlider3D *)0x0) {
                              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                        (*(GizmoLineSlider3D **)(XVar11 + XmlTypeCode__Enum_NCName),
                                         GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                              if (*(GizmoLineSlider3D **)(XVar11 + XmlTypeCode__Enum_NCName) !=
                                  (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                          (*(GizmoLineSlider3D **)
                                            (XVar11 + XmlTypeCode__Enum_NCName),2,
                                           AxisSign__Enum_Negative,(MethodInfo *)0x0);
                                if (*(GizmoLineSlider3DCollection **)
                                     (XVar11 + XmlTypeCode__Enum_Integer) !=
                                    (GizmoLineSlider3DCollection *)0x0) {
                                  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                            (*(GizmoLineSlider3DCollection **)
                                              (XVar11 + XmlTypeCode__Enum_Integer),
                                             *(GizmoLineSlider3D **)
                                              (XVar11 + XmlTypeCode__Enum_Double),(MethodInfo *)0x0)
                                  ;
                                  if (*(GizmoLineSlider3DCollection **)
                                       (XVar11 + XmlTypeCode__Enum_Integer) !=
                                      (GizmoLineSlider3DCollection *)0x0) {
                                    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                              (*(GizmoLineSlider3DCollection **)
                                                (XVar11 + XmlTypeCode__Enum_Integer),
                                               *(GizmoLineSlider3D **)
                                                (XVar11 + XmlTypeCode__Enum_Date),(MethodInfo *)0x0)
                                    ;
                                    if (*(GizmoLineSlider3DCollection **)
                                         (XVar11 + XmlTypeCode__Enum_Integer) !=
                                        (GizmoLineSlider3DCollection *)0x0) {
                                      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                (*(GizmoLineSlider3DCollection **)
                                                  (XVar11 + XmlTypeCode__Enum_Integer),
                                                 *(GizmoLineSlider3D **)
                                                  (XVar11 + XmlTypeCode__Enum_GDay),
                                                 (MethodInfo *)0x0);
                                      if (*(GizmoLineSlider3DCollection **)
                                           (XVar11 + XmlTypeCode__Enum_Integer) !=
                                          (GizmoLineSlider3DCollection *)0x0) {
                                        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                  (*(GizmoLineSlider3DCollection **)
                                                    (XVar11 + XmlTypeCode__Enum_Integer),
                                                   *(GizmoLineSlider3D **)
                                                    (XVar11 + XmlTypeCode__Enum_AnyUri),
                                                   (MethodInfo *)0x0);
                                        if (*(GizmoLineSlider3DCollection **)
                                             (XVar11 + XmlTypeCode__Enum_Integer) !=
                                            (GizmoLineSlider3DCollection *)0x0) {
                                          GizmoLineSlider3DCollection::
                                          GizmoLineSlider3DCollection_Add
                                                    (*(GizmoLineSlider3DCollection **)
                                                      (XVar11 + XmlTypeCode__Enum_Integer),
                                                     *(GizmoLineSlider3D **)
                                                      (XVar11 + XmlTypeCode__Enum_Token),
                                                     (MethodInfo *)0x0);
                                          if (*(GizmoLineSlider3DCollection **)
                                               (XVar11 + XmlTypeCode__Enum_Integer) !=
                                              (GizmoLineSlider3DCollection *)0x0) {
                                            GizmoLineSlider3DCollection::
                                            GizmoLineSlider3DCollection_Add
                                                      (*(GizmoLineSlider3DCollection **)
                                                        (XVar11 + XmlTypeCode__Enum_Integer),
                                                       *(GizmoLineSlider3D **)
                                                        (XVar11 + XmlTypeCode__Enum_NCName),
                                                       (MethodInfo *)0x0);
                                            pGVar12 = *(GizmoLineSlider3DCollection **)
                                                      (XVar11 + XmlTypeCode__Enum_Integer);
                                            if (*(GizmoSlider **)(XVar11 + XmlTypeCode__Enum_Int) !=
                                                (GizmoSlider *)0x0) {
                                              pPVar13 = GizmoSlider::GizmoSlider_get_HoverPriority3D
                                                                  (*(GizmoSlider **)
                                                                    (XVar11 + XmlTypeCode__Enum_Int)
                                                                   ,(MethodInfo *)0x0);
                                              if (pGVar12 != (GizmoLineSlider3DCollection *)0x0) {
                                                GizmoLineSlider3DCollection::
                                                GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                          (pGVar12,pPVar13,(MethodInfo *)0x0);
                                                pGVar12 = *(GizmoLineSlider3DCollection **)
                                                          (XVar11 + XmlTypeCode__Enum_Integer);
                                                if (*(GizmoSlider **)
                                                     (XVar11 + XmlTypeCode__Enum_UnsignedLong) !=
                                                    (GizmoSlider *)0x0) {
                                                  pPVar13 = GizmoSlider::
                                                            GizmoSlider_get_HoverPriority3D
                                                                      (*(GizmoSlider **)
                                                                        (XVar11 + 
                                                  XmlTypeCode__Enum_UnsignedLong),(MethodInfo *)0x0)
                                                  ;
                                                  if (pGVar12 != (GizmoLineSlider3DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar12,pPVar13,(MethodInfo *)0x0);
                                                  pGVar12 = *(GizmoLineSlider3DCollection **)
                                                            (XVar11 + XmlTypeCode__Enum_Integer);
                                                  if (*(GizmoSlider **)
                                                       (XVar11 + XmlTypeCode__Enum_PositiveInteger)
                                                      != (GizmoSlider *)0x0) {
                                                    pPVar13 = GizmoSlider::
                                                              GizmoSlider_get_HoverPriority3D
                                                                        (*(GizmoSlider **)
                                                                          (XVar11 + 
                                                  XmlTypeCode__Enum_PositiveInteger),
                                                  (MethodInfo *)0x0);
                                                  if (pGVar12 != (GizmoLineSlider3DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar12,pPVar13,(MethodInfo *)0x0);
                                                  pGVar1 = *(Gizmo **)
                                                             (XVar11 + XmlTypeCode__Enum_Comment);
                                                  iVar4 = GizmoHandleId::GizmoHandleId_get_VertSnap
                                                                     ((MethodInfo *)0x0);
                                                  this_02 = (GizmoCap2D *)func_?();
                                                  GizmoCap2D::GizmoCap2D__ctor
                                                            (this_02,pGVar1,iVar4,
                                                             (MethodInfo *)0x0);
                                                  *(GizmoCap2D **)(iVar4 + 0x40) = this_02;
                                                  func_?();
                                                  if (*(GizmoCap **)(iVar4 + 0x40) !=
                                                      (GizmoCap *)0x0) {
                                                    GizmoCap::GizmoCap_SetVisible
                                                              (*(GizmoCap **)(iVar4 + 0x40),0,
                                                               (MethodInfo *)0x0);
                                                    if (*(GizmoCap3D **)(iVar4 + 0x40) !=
                                                        (GizmoCap3D *)0x0) {
                                                      GizmoCap3D::GizmoCap3D_set_DragSession
                                                                (*(GizmoCap3D **)(iVar4 + 0x40),
                                                                 *(IGizmoDragSession **)
                                                                  (iVar4 + 0x44),(MethodInfo *)0x0)
                                                      ;
                                                      if ((*(int *)(iVar4 + 8) != 0) &&
                                                         (*(GizmoDragSession **)(iVar4 + 0x44) !=
                                                          (GizmoDragSession *)0x0)) {
                                                        GizmoDragSession::
                                                        GizmoDragSession_AddTargetTransform
                                                                  (*(GizmoDragSession **)
                                                                    (iVar4 + 0x44),
                                                                   *(GizmoTransform **)
                                                                    (*(int *)(iVar4 + 8) + 0xf8),
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = *(Gizmo **)(iVar4 + 8);
                                                        EVar10 = System.Core.dll::System::Linq::
                                                                 Expressions::AssignBinaryExpression
                                                                 ::
                                                  AssignBinaryExpression_get_NodeType
                                                            ((AssignBinaryExpression *)0x0,
                                                             (MethodInfo *)pGVar8);
                                                  method_00 = TypeInfo__RTG__GizmoPlaneSlider2D;
                                                  pGVar14 = (GizmoPlaneSlider2D *)func_?();
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar14,pGVar1,EVar10,
                                                             (MethodInfo *)0x0);
                                                  (pGVar1->fields)._hoverInfo._handleDimension =
                                                       (int32_t)pGVar14;
                                                  func_?();
                                                  pGVar14 = (GizmoPlaneSlider2D *)
                                                            (pGVar1->fields)._hoverInfo.
                                                            _handleDimension;
                                                  if (pGVar14 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (pGVar14,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar15 = (GizmoSlider *)
                                                             (pGVar1->fields)._hoverInfo.
                                                             _handleDimension;
                                                    if (pGVar15 != (GizmoSlider *)0x0) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                (pGVar15,0,(MethodInfo *)0x0);
                                                      pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                         PostEnabled;
                                                      EVar10 = System.Core.dll::System::Linq::
                                                               Expressions::ParameterExpression::
                                                               ParameterExpression_get_NodeType
                                                                         ((ParameterExpression *)0x0
                                                                          ,(MethodInfo *)method_00);
                                                      XVar2 = System.Xml.dll::System::Xml::Schema::
                                                               Datatype_negativeInteger::
                                                               Datatype_negativeInteger_get_TypeCode
                                                                         ((Datatype_negativeInteger
                                                                           *)0x0,in_stack_7);
                                                      pGVar16 = TypeInfo__RTG__GizmoLineSlider2D;
                                                      pGVar17 = (GizmoLineSlider2D *)
                                                                func_?();
                                                      GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                                (pGVar17,pGVar1,EVar10,XVar2,
                                                                 (MethodInfo *)0x0);
                                                      *(GizmoLineSlider2D **)
                                                       &(pGVar1->fields)._isEnabled = pGVar17;
                                                      func_?();
                                                      pGVar18 = *(GizmoLineSlider2D **)
                                                                 &(pGVar1->fields)._isEnabled;
                                                      if (pGVar18 != (GizmoLineSlider2D *)0x0) {
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetDragChannel
                                                                  (pGVar18,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  pGVar18 = *(GizmoLineSlider2D **)
                                                             &(pGVar1->fields)._isEnabled;
                                                  if (pGVar18 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_MapDirection
                                                              (pGVar18,0,AxisSign__Enum_Positive,
                                                               (MethodInfo *)0x0);
                                                    pXVar19 = *(XmlNodeReader **)
                                                              &(pGVar1->fields)._isEnabled;
                                                    if (pXVar19 != (XmlNodeReader *)0x0) {
                                                      pPVar13 = (Priority *)
                                                                System.Xml.dll::System::Xml::
                                                                XmlNodeReader::
                                                                XmlNodeReader_get_NameTable
                                                                          (pXVar19,(MethodInfo *)0x0)
                                                      ;
                                                      pXVar19 = (XmlNodeReader *)
                                                               (pGVar1->fields)._hoverInfo.
                                                               _handleDimension;
                                                      if (pXVar19 != (XmlNodeReader *)0x0) {
                                                        pPVar20 = (Priority *)
                                                                  System.Xml.dll::System::Xml::
                                                                  XmlNodeReader::
                                                                  XmlNodeReader_get_NameTable
                                                                            (pXVar19,(MethodInfo *)
                                                                                    0x0);
                                                        if (pPVar13 != (Priority *)0x0) {
                                                          Priority::Priority_MakeLowerThan
                                                                    (pPVar13,pPVar20,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          XVar2 = System.Xml.dll::System::Xml::
                                                                   Schema::Datatype_ENTITY::
                                                                   Datatype_ENTITY_get_TypeCode
                                                                             ((Datatype_ENTITY *)0x0
                                                                              ,(MethodInfo *)pGVar17
                                                                             );
                                                          XVar11 = System.Xml.dll::System::Xml::
                                                                   Schema::Datatype_long::
                                                                   Datatype_long_get_TypeCode
                                                                             ((Datatype_long *)0x0,
                                                                              (MethodInfo *)pGVar16);
                                                          pGVar16 = TypeInfo__RTG__GizmoLineSlider2D;
                                                          pGVar18 = (GizmoLineSlider2D *)
                                                                    func_?();
                                                          GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                                    (pGVar18,pGVar1,XVar2,XVar11,
                                                                     (MethodInfo *)0x0);
                                                          (pGVar1->fields)._handles =
                                                               (GizmoHandleCollection *)pGVar18;
                                                          func_?();
                                                          pGVar18 = (GizmoLineSlider2D *)
                                                                    (pGVar1->fields)._handles;
                                                          if (pGVar18 != (GizmoLineSlider2D *)0x0) {
                                                            GizmoLineSlider2D::
                                                            GizmoLineSlider2D_SetDragChannel
                                                                      (pGVar18,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  pGVar18 = (GizmoLineSlider2D *)
                                                            (pGVar1->fields)._handles;
                                                  if (pGVar18 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_MapDirection
                                                              (pGVar18,1,AxisSign__Enum_Positive,
                                                               (MethodInfo *)0x0);
                                                    pXVar19 = (XmlNodeReader *)
                                                             (pGVar1->fields)._handles;
                                                    if (pXVar19 != (XmlNodeReader *)0x0) {
                                                      pPVar13 = (Priority *)
                                                                System.Xml.dll::System::Xml::
                                                                XmlNodeReader::
                                                                XmlNodeReader_get_NameTable
                                                                          (pXVar19,(MethodInfo *)0x0)
                                                      ;
                                                      pXVar19 = (XmlNodeReader *)
                                                               (pGVar1->fields)._hoverInfo.
                                                               _handleDimension;
                                                      if (pXVar19 != (XmlNodeReader *)0x0) {
                                                        pPVar20 = (Priority *)
                                                                  System.Xml.dll::System::Xml::
                                                                  XmlNodeReader::
                                                                  XmlNodeReader_get_NameTable
                                                                            (pXVar19,(MethodInfo *)
                                                                                    0x0);
                                                        if (pPVar13 != (Priority *)0x0) {
                                                          Priority::Priority_MakeLowerThan
                                                                    (pPVar13,pPVar20,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          iVar4 = UnityEngine.CoreModule.dll::Unity
                                                                   ::Collections::LowLevel::Unsafe::
                                                                   UnsafeUtility::
                                                                   UnsafeUtility_SizeOf
                                                                             ((MethodInfo *)0x0);
                                                          XVar2 = System.Xml.dll::System::Xml::
                                                                   Schema::Datatype_int::
                                                                   Datatype_int_get_TypeCode
                                                                             ((Datatype_int *)0x0,
                                                                              (MethodInfo *)pGVar16);
                                                          pGVar16 = TypeInfo__RTG__GizmoLineSlider2D;
                                                          pGVar17 = (GizmoLineSlider2D *)
                                                                    func_?();
                                                          GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                                    (pGVar17,pGVar1,iVar4,XVar2,
                                                                     (MethodInfo *)0x0);
                                                          (pGVar1->fields)._behaviours =
                                                               (GizmoBehaviourCollection *)pGVar17;
                                                          func_?();
                                                          pGVar18 = (GizmoLineSlider2D *)
                                                                    (pGVar1->fields)._behaviours;
                                                          if (pGVar18 != (GizmoLineSlider2D *)0x0) {
                                                            GizmoLineSlider2D::
                                                            GizmoLineSlider2D_SetDragChannel
                                                                      (pGVar18,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  pGVar18 = (GizmoLineSlider2D *)
                                                            (pGVar1->fields)._behaviours;
                                                  if (pGVar18 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_MapDirection
                                                              (pGVar18,0,AxisSign__Enum_Negative,
                                                               (MethodInfo *)0x0);
                                                    pXVar19 = (XmlNodeReader *)
                                                             (pGVar1->fields)._behaviours;
                                                    if (pXVar19 != (XmlNodeReader *)0x0) {
                                                      pPVar13 = (Priority *)
                                                                System.Xml.dll::System::Xml::
                                                                XmlNodeReader::
                                                                XmlNodeReader_get_NameTable
                                                                          (pXVar19,(MethodInfo *)0x0)
                                                      ;
                                                      pXVar19 = (XmlNodeReader *)
                                                               (pGVar1->fields)._hoverInfo.
                                                               _handleDimension;
                                                      if (pXVar19 != (XmlNodeReader *)0x0) {
                                                        pPVar20 = (Priority *)
                                                                  System.Xml.dll::System::Xml::
                                                                  XmlNodeReader::
                                                                  XmlNodeReader_get_NameTable
                                                                            (pXVar19,(MethodInfo *)
                                                                                    0x0);
                                                        if (pPVar13 != (Priority *)0x0) {
                                                          Priority::Priority_MakeLowerThan
                                                                    (pPVar13,pPVar20,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          XVar2 = System.Xml.dll::System::Xml::
                                                                   Schema::
                                                  Datatype_nonPositiveInteger::
                                                  Datatype_nonPositiveInteger_get_TypeCode
                                                            ((Datatype_nonPositiveInteger *)0x0,
                                                             (MethodInfo *)pGVar17);
                                                  XVar11 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_short::
                                                           Datatype_short_get_TypeCode
                                                                     ((Datatype_short *)0x0,
                                                                      (MethodInfo *)pGVar16);
                                                  pGVar17 = (GizmoLineSlider2D *)func_?();
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar17,pGVar1,XVar2,XVar11,
                                                             (MethodInfo *)0x0);
                                                  *(GizmoLineSlider2D **)
                                                   &(pGVar1->fields)._hoverInfo = pGVar17;
                                                  func_?();
                                                  pGVar18 = *(GizmoLineSlider2D **)
                                                             &(pGVar1->fields)._hoverInfo;
                                                  if (pGVar18 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar18,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar18 = *(GizmoLineSlider2D **)
                                                               &(pGVar1->fields)._hoverInfo;
                                                    if (pGVar18 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar18,1,AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      pXVar19 = *(XmlNodeReader **)
                                                                &(pGVar1->fields)._hoverInfo;
                                                      if (pXVar19 != (XmlNodeReader *)0x0) {
                                                        pPVar13 = (Priority *)
                                                                  System.Xml.dll::System::Xml::
                                                                  XmlNodeReader::
                                                                  XmlNodeReader_get_NameTable
                                                                            (pXVar19,(MethodInfo *)
                                                                                    0x0);
                                                        pXVar19 = (XmlNodeReader *)
                                                                 (pGVar1->fields)._hoverInfo.
                                                                 _handleDimension;
                                                        if (pXVar19 != (XmlNodeReader *)0x0) {
                                                          pPVar20 = (Priority *)
                                                                    System.Xml.dll::System::Xml::
                                                                    XmlNodeReader::
                                                                    XmlNodeReader_get_NameTable
                                                                              (pXVar19,(MethodInfo *)
                                                                                      0x0);
                                                          if (pPVar13 != (Priority *)0x0) {
                                                            Priority::Priority_MakeLowerThan
                                                                      (pPVar13,pPVar20,
                                                                       (MethodInfo *)0x0);
                                                            pGVar21 = (GizmoLineSlider2DCollection *)
                                                                     (pGVar1->fields)._hoverInfo.
                                                                     _handleId;
                                                            if (pGVar21 != (
                                                  GizmoLineSlider2DCollection *)0x0) {
                                                    GizmoLineSlider2DCollection::
                                                    GizmoLineSlider2DCollection_Add
                                                              (pGVar21,*(GizmoLineSlider2D **)
                                                                       &(pGVar1->fields)._isEnabled
                                                               ,(MethodInfo *)0x0);
                                                    pGVar21 = (GizmoLineSlider2DCollection *)
                                                             (pGVar1->fields)._hoverInfo._handleId;
                                                    if (pGVar21 != (GizmoLineSlider2DCollection *)0x0
                                                       ) {
                                                      GizmoLineSlider2DCollection::
                                                      GizmoLineSlider2DCollection_Add
                                                                (pGVar21,(GizmoLineSlider2D *)
                                                                        (pGVar1->fields)._handles,
                                                                 (MethodInfo *)0x0);
                                                      pGVar21 = (GizmoLineSlider2DCollection *)
                                                               (pGVar1->fields)._hoverInfo.
                                                               _handleId;
                                                      if (pGVar21 != (GizmoLineSlider2DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider2DCollection::
                                                        GizmoLineSlider2DCollection_Add
                                                                  (pGVar21,(GizmoLineSlider2D *)
                                                                          (pGVar1->fields).
                                                                          _behaviours,
                                                                   (MethodInfo *)0x0);
                                                        pGVar21 = (GizmoLineSlider2DCollection *)
                                                                 (pGVar1->fields)._hoverInfo.
                                                                 _handleId;
                                                        if (pGVar21 != (GizmoLineSlider2DCollection *
                                                                      )0x0) {
                                                          GizmoLineSlider2DCollection::
                                                          GizmoLineSlider2DCollection_Add
                                                                    (pGVar21,*(GizmoLineSlider2D **)
                                                                             &(pGVar1->fields).
                                                                              _hoverInfo,
                                                                     (MethodInfo *)0x0);
                                                          UniversalGizmo_Hide2DModeHandles
                                                                    ((UniversalGizmo *)pGVar1,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          EVar10 = System.Core.dll::System::Linq::
                                                                   Expressions::BlockExpression::
                                                                   BlockExpression_get_NodeType
                                                                             ((BlockExpression *)0x0
                                                                              ,(MethodInfo *)pGVar17
                                                                             );
                                                          pGVar22 = (GizmoCap3D *)func_?();
                                                          GizmoCap3D::GizmoCap3D__ctor
                                                                    (pGVar22,pGVar1,EVar10,
                                                                     (MethodInfo *)0x0);
                                                          (pGVar1->fields)._dragInfo._handleId =
                                                               (int32_t)pGVar22;
                                                          func_?();
                                                          pGVar22 = (GizmoCap3D *)
                                                                    (pGVar1->fields)._dragInfo.
                                                                    _handleId;
                                                          if (pGVar22 != (GizmoCap3D *)0x0) {
                                                            GizmoCap3D::GizmoCap3D_set_DragSession
                                                                      (pGVar22,(IGizmoDragSession *)
                                                                               (pGVar1->fields).
                                                                               _dragInfo.
                                                                               _dragBeginPoint.x,
                                                                       (MethodInfo *)0x0);
                                                            pGVar23 = (pGVar1->fields).PostEnabled;
                                                            if ((pGVar23 != (GizmoPostEnabledHandler
                                                                            *)0x0) &&
                                                               (this_00 = (GizmoDragSession *)
                                                                          (pGVar1->fields).
                                                                          _dragInfo._dragBeginPoint.
                                                                          x,
                                                               this_00 != (GizmoDragSession *)0x0))
                                                            {
                                                              GizmoDragSession::
                                                              GizmoDragSession_AddTargetTransform
                                                                        (this_00,*(GizmoTransform **
                                                                                  )&pGVar23[3].fields
                                                                                    ._._.
                                                  method_is_virtual,(MethodInfo *)0x0);
                                                  pGVar1 = (Gizmo *)(pGVar1->fields).PostEnabled;
                                                  iVar4 = UnityEngine.CoreModule.dll::Unity::
                                                           Collections::LowLevel::Unsafe::
                                                           UnsafeUtility::UnsafeUtility_SizeOf_29
                                                                     ((MethodInfo *)0x0);
                                                  method_01 = TypeInfo__RTG__GizmoPlaneSlider3D;
                                                  pGVar3 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar3,pGVar1,iVar4,
                                                             (MethodInfo *)0x0);
                                                  (pGVar1->fields)._hoverInfo._hoverPoint.x =
                                                       (float)pGVar3;
                                                  func_?();
                                                  pGVar3 = (GizmoPlaneSlider3D *)
                                                            (pGVar1->fields)._hoverInfo._hoverPoint
                                                            .x;
                                                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar3,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar3 = (GizmoPlaneSlider3D *)
                                                            (pGVar1->fields)._hoverInfo._hoverPoint
                                                            .x;
                                                  auVar24._4_8_ = 0;
                                                  auVar24._0_4_ = _UNK_?;
                                                  pQVar25 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::
                                                            Quaternion_Internal_FromEulerRad
                                                                      ((Quaternion *)
                                                                       &stack0xffffffd8,
                                                                       (Vector3)(auVar24 << 0x20),
                                                                       (MethodInfo *)0x0);
                                                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_set_LocalRotation
                                                              (pGVar3,*pQVar25,(MethodInfo *)0x0);
                                                    pGVar15 = (GizmoSlider *)
                                                             (pGVar1->fields)._hoverInfo.
                                                             _hoverPoint.x;
                                                    if (pGVar15 != (GizmoSlider *)0x0) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                (pGVar15,0,(MethodInfo *)0x0);
                                                      pGVar6 = *(GizmoPlaneSlider3DCollection **)
                                                                &(pGVar1->fields)._dragInfo;
                                                      if (pGVar6 != (GizmoPlaneSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoPlaneSlider3DCollection::
                                                        GizmoPlaneSlider3DCollection_Add
                                                                  (pGVar6,(GizmoPlaneSlider3D *)
                                                                          (pGVar1->fields).
                                                                          _hoverInfo._hoverPoint.x,
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                           PostEnabled;
                                                        EVar10 = System.Core.dll::System::Linq::
                                                                 Expressions::
                                                                 NewArrayBoundsExpression::
                                                                                                                                  
                                                  NewArrayBoundsExpression_get_NodeType
                                                            ((NewArrayBoundsExpression *)0x0,
                                                             (MethodInfo *)method_01);
                                                  pGVar3 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar3,pGVar1,EVar10,
                                                             (MethodInfo *)0x0);
                                                  *(GizmoPlaneSlider3D **)
                                                   (EVar10 + (ExpressionType__Enum_1_AndAssign|
                                                             ExpressionType__Enum_1_DebugInfo)) =
                                                       pGVar3;
                                                  func_?();
                                                  pGVar3 = *(GizmoPlaneSlider3D **)
                                                             (EVar10 + (
                                                  ExpressionType__Enum_1_AndAssign|
                                                  ExpressionType__Enum_1_DebugInfo));
                                                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar3,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  this_01 = *(GizmoPlaneSlider3D **)
                                                             (EVar10 + (
                                                  ExpressionType__Enum_1_AndAssign|
                                                  ExpressionType__Enum_1_DebugInfo));
                                                  euler.y = 0.0;
                                                  euler.z = 0.0;
                                                  euler.x = (float)pGVar3;
                                                  pQVar25 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::
                                                            Quaternion_Internal_FromEulerRad
                                                                      ((Quaternion *)
                                                                       &stack0xffffffc0,euler,
                                                                       (MethodInfo *)0x0);
                                                  if (this_01 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_set_LocalRotation
                                                              (this_01,*pQVar25,(MethodInfo *)0x0);
                                                    if (*(GizmoSlider **)
                                                         (EVar10 + (ExpressionType__Enum_1_AndAssign
                                                                   |ExpressionType__Enum_1_DebugInfo
                                                                   )) != (GizmoSlider *)0x0) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                (*(GizmoSlider **)
                                                                  (EVar10 + (
                                                  ExpressionType__Enum_1_AndAssign|
                                                  ExpressionType__Enum_1_DebugInfo)),0,
                                                  (MethodInfo *)0x0);
                                                  if (*(GizmoPlaneSlider3DCollection **)
                                                       (EVar10 + (ExpressionType__Enum_1_AndAssign|
                                                                 ExpressionType__Enum_1_Label)) !=
                                                      (GizmoPlaneSlider3DCollection *)0x0) {
                                                    GizmoPlaneSlider3DCollection::
                                                    GizmoPlaneSlider3DCollection_Add
                                                              (*(GizmoPlaneSlider3DCollection **)
                                                                (EVar10 + (
                                                  ExpressionType__Enum_1_AndAssign|
                                                  ExpressionType__Enum_1_Label)),
                                                  *(GizmoPlaneSlider3D **)
                                                   (EVar10 + (ExpressionType__Enum_1_AndAssign|
                                                             ExpressionType__Enum_1_DebugInfo)),
                                                  (MethodInfo *)0x0);
                                                  pGVar1 = *(Gizmo **)
                                                             (EVar10 + 
                                                  ExpressionType__Enum_1_Conditional);
                                                  XVar2 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_NMTOKEN::
                                                           Datatype_NMTOKEN_get_TypeCode
                                                                     ((Datatype_NMTOKEN *)0x0,
                                                                      (MethodInfo *)method_01);
                                                  pGVar3 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar3,pGVar1,XVar2,
                                                             (MethodInfo *)0x0);
                                                  *(GizmoPlaneSlider3D **)(XVar2 + 0x74) = pGVar3;
                                                  func_?();
                                                  if (*(GizmoPlaneSlider3D **)(XVar2 + 0x74) !=
                                                      (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (*(GizmoPlaneSlider3D **)
                                                                (XVar2 + 0x74),
                                                               GizmoDragChannel__Enum_Rotation,
                                                               (MethodInfo *)0x0);
                                                    if (*(GizmoSlider **)(XVar2 + 0x74) !=
                                                        (GizmoSlider *)0x0) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                (*(GizmoSlider **)(XVar2 + 0x74),0,
                                                                 (MethodInfo *)0x0);
                                                      if (*(GizmoPlaneSlider3DCollection **)
                                                           (XVar2 + 0x78) !=
                                                          (GizmoPlaneSlider3DCollection *)0x0) {
                                                        GizmoPlaneSlider3DCollection::
                                                        GizmoPlaneSlider3DCollection_Add
                                                                  (*(GizmoPlaneSlider3DCollection **
                                                                    )(XVar2 + 0x78),
                                                                   *(GizmoPlaneSlider3D **)
                                                                    (XVar2 + 0x74),
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = *(Gizmo **)
                                                                   (XVar2 + 
                                                  XmlTypeCode__Enum_Comment);
                                                  iVar4 = UnityEngine.CoreModule.dll::Unity::
                                                           Collections::LowLevel::Unsafe::
                                                           UnsafeUtility::UnsafeUtility_SizeOf_45
                                                                     ((MethodInfo *)0x0);
                                                  pGVar14 = (GizmoPlaneSlider2D *)func_?();
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar14,pGVar1,iVar4,
                                                             (MethodInfo *)0x0);
                                                  (pGVar1->fields)._dragInfo._dragBeginPoint.y =
                                                       (float)pGVar14;
                                                  func_?();
                                                  pGVar14 = (GizmoPlaneSlider2D *)
                                                            (pGVar1->fields)._dragInfo.
                                                            _dragBeginPoint.y;
                                                  if (pGVar14 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (pGVar14,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar15 = (GizmoSlider *)
                                                           (pGVar1->fields)._dragInfo.
                                                           _dragBeginPoint.y;
                                                  if (pGVar15 != (GizmoSlider *)0x0) {
                                                    GizmoSlider::GizmoSlider_SetVisible
                                                              (pGVar15,0,(MethodInfo *)0x0);
                                                    pGVar1 = (Gizmo *)(pGVar1->fields).PostEnabled
                                                    ;
                                                    this_03 = (UniversalGizmo *)
                                                              GizmoHandleId::
                                                              GizmoHandleId_get_MidScaleCap
                                                                        ((MethodInfo *)0x0);
                                                    pGVar22 = (GizmoCap3D *)func_?();
                                                    GizmoCap3D::GizmoCap3D__ctor
                                                              (pGVar22,pGVar1,(int32_t)this_03,
                                                               (MethodInfo *)0x0);
                                                    (this_03->fields)._scMidCap = pGVar22;
                                                    func_?();
                                                    pGVar22 = (this_03->fields)._scMidCap;
                                                    if (pGVar22 != (GizmoCap3D *)0x0) {
                                                      GizmoCap3D::GizmoCap3D_set_DragSession
                                                                (pGVar22,(IGizmoDragSession *)
                                                                         (this_03->fields).
                                                                         _scUnformScaleDrag,
                                                                 (MethodInfo *)0x0);
                                                      pGVar22 = (this_03->fields)._rtMidCap;
                                                      pGVar6 = (this_03->fields)._rtAxesSliders;
                                                      if (pGVar22 != (GizmoCap3D *)0x0) {
                                                        pSVar26 = Newtonsoft.Json.dll::Newtonsoft::
                                                                  Json::Converters::
                                                                  XDocumentTypeWrapper::
                                                                                                                                    
                                                  XDocumentTypeWrapper_get_InternalSubset
                                                            ((XDocumentTypeWrapper *)pGVar22,
                                                             (MethodInfo *)0x0);
                                                  if (pGVar6 != (GizmoPlaneSlider3DCollection *)0x0)
                                                  {
                                                    GizmoPlaneSlider3DCollection::
                                                                                                        
                                                  GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar6,(Priority *)pSVar26,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this_03->fields)._rtXSlider;
                                                  pGVar12 = (this_03->fields)._mvAxesSliders;
                                                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                    pPVar13 = GizmoSlider::
                                                              GizmoSlider_get_HoverPriority3D
                                                                        ((GizmoSlider *)pGVar3,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar12 != (GizmoLineSlider3DCollection *)0x0
                                                       ) {
                                                      GizmoLineSlider3DCollection::
                                                                                                            
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar12,pPVar13,(MethodInfo *)0x0);
                                                  pGVar9 = (this_03->fields)._mvPXSlider;
                                                  pGVar6 = (this_03->fields)._mvDblSliders;
                                                  if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                    pPVar13 = GizmoSlider::
                                                              GizmoSlider_get_HoverPriority3D
                                                                        ((GizmoSlider *)pGVar9,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar6 != (GizmoPlaneSlider3DCollection *)
                                                                  0x0) {
                                                      GizmoPlaneSlider3DCollection::
                                                                                                            
                                                  GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar6,pPVar13,(MethodInfo *)0x0);
                                                  pGVar22 = (this_03->fields)._scMidCap;
                                                  if (pGVar22 != (GizmoCap3D *)0x0) {
                                                    pSVar26 = Newtonsoft.Json.dll::Newtonsoft::Json
                                                              ::Converters::XDocumentTypeWrapper::
                                                                                                                            
                                                  XDocumentTypeWrapper_get_InternalSubset
                                                            ((XDocumentTypeWrapper *)pGVar22,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this_03->fields)._mvXYSlider;
                                                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                    pPVar13 = GizmoSlider::
                                                              GizmoSlider_get_HoverPriority3D
                                                                        ((GizmoSlider *)pGVar3,
                                                                         (MethodInfo *)0x0);
                                                    if (pSVar26 != (String *)0x0) {
                                                      Priority::Priority_MakeHigherThan
                                                                ((Priority *)pSVar26,pPVar13,
                                                                 (MethodInfo *)0x0);
                                                      UniversalGizmo_SetupSharedLookAndFeel
                                                                (this_03,(MethodInfo *)0x0);
                                                      UniversalGizmo_SetupSharedSettings
                                                                (this_03,(MethodInfo *)0x0);
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
  }
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnDetached
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnDisabled
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnEnabled
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoAttemptHandleDragBegin
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCap;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar2) {
      pGVar3 = (this->fields)._._gizmo;
      if (((pGVar3 != (Gizmo *)0x0) &&
          (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
          pCVar4 != (Camera *)0x0)) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                  ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._._gizmo;
        if (((pGVar3 != (Gizmo *)0x0) &&
            (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
            pCVar4 != (Camera *)0x0)) &&
           (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar4,(MethodInfo *)0x0),
           pTVar5 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                    ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).x;
          uVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).y;
          uVar8 = uVar6 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          uVar9 = uVar7 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fVar10 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
          fVar11 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
          if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
            pUVar12 = (this->fields)._settings3D;
            if (pUVar12 == (UniversalGizmoSettings3D *)0x0) goto code_?;
          }
          else {
            pUVar12 = (this->fields)._sharedSettings3D;
          }
          UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtSnapMode
                    (pUVar12,(MethodInfo *)0x0);
          if (((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) ||
             ((this->fields)._settings3D != (UniversalGizmoSettings3D *)0x0)) {
            if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
              pUVar12 = (this->fields)._settings3D;
              if (pUVar12 == (UniversalGizmoSettings3D *)0x0) goto code_?;
            }
            else {
              pUVar12 = (this->fields)._sharedSettings3D;
            }
            this_01 = (this->fields)._rtCamXYRotationDrag;
            if (this_01 != (GizmoDblAxisRotationDrag3D *)0x0) {
              fVar13 = (pUVar12->fields)._rtCamRightSnapStep;
              GizmoDblAxisRotationDrag3D::GizmoDblAxisRotationDrag3D_SetWorkData
                        (this_01,(GizmoDblAxisRotationDrag3D_WorkData)
                                 CONCAT448(fVar13,CONCAT444((float)uVar9,
                                                            CONCAT440(uVar8,CONCAT436((float)
                                                  this_01,CONCAT432(fVar11,CONCAT428(fVar10,CONCAT424(
                                                  (float)uVar9,
                                                  CONCAT420((float)uVar8,
                                                            CONCAT416((float)this_01,
                                                                      CONCAT412(fVar11,CONCAT48(fVar10
                                                  ,CONCAT44((float)uVar9,(float)uVar8)))))))))))),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      pGVar1 = (this->fields)._scMidCap;
      if (pGVar1 != (GizmoCap3D *)0x0) {
        pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                  AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
        if ((void *)handleId != pvVar2) {
          return;
        }
        pGVar1 = (this->fields)._scMidCap;
        if (pGVar1 != (GizmoCap3D *)0x0) {
          GizmoCap3D::GizmoCap3D_get_Position((Vector3 *)&stack0xfffffff0,pGVar1,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._._gizmo;
          if (((pGVar3 != (Gizmo *)0x0) &&
              (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
              pCVar4 != (Camera *)0x0)) &&
             (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar4,(MethodInfo *)0x0),
             pTVar5 != (Transform *)0x0)) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
            uVar15 = pVVar14->x;
            uVar16 = pVVar14->y;
            fVar10 = pVVar14->z;
            pGVar3 = (this->fields)._._gizmo;
            if (((pGVar3 != (Gizmo *)0x0) &&
                (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
                pCVar4 != (Camera *)0x0)) &&
               (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar4,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
              uVar17 = pVVar14->x;
              uVar18 = pVVar14->y;
              if ((((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) ||
                  ((this->fields)._settings3D != (UniversalGizmoSettings3D *)0x0)) &&
                 (this_00 = (this->fields)._scUnformScaleDrag,
                 this_00 != (GizmoUniformScaleDrag3D *)0x0)) {
                this = (UniversalGizmo *)uVar17;
                fVar13 = fVar10;
                fVar19 = (float)uVar16;
                fVar20 = (float)uVar15;
                uVar21 = CONCAT44(fVar19,fVar20);
                fVar22 = fVar10;
                auVar23 = CONCAT48(fVar22,uVar21);
                fVar24 = (float)uVar17;
                auVar25 = CONCAT412(fVar24,auVar23);
                fVar26 = (float)uVar18;
                auVar27 = CONCAT416(fVar26,auVar25);
                fVar28 = (float)this_00;
                auVar29 = CONCAT420(fVar28,auVar27);
                fVar30 = (float)uVar15;
                auVar31 = CONCAT424(fVar30,auVar29);
                fVar32 = (float)uVar16;
                workData._0_32_ = CONCAT428(fVar32,auVar31);
                workData = (GizmoUniformScaleDrag3D_WorkData)CONCAT832(uVar33,workData._0_32_);
                GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                          (this_00,workData,(MethodInfo *)0x0);
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
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void OnGizmoDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoDragBegin
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = UniversalGizmo_IsMoveHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = UniversalGizmo_IsRotationHandle(this,handleId,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = (this->fields)._scMidCap;
      if (pGVar2 != (GizmoCap3D *)0x0) {
        pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
        if (pvVar3 == (void *)handleId) {
          UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
          UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
    UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
  }
  else {
    this_00 = (this->fields)._rtAxesSliders;
    if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetBorderVisible
              (this_00,0,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._rtMidCap;
    if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar2,0,(MethodInfo *)0x0);
    this_01 = (this->fields)._rtCamLookSlider;
    if (this_01 == (GizmoPlaneSlider2D *)0x0) goto code_?;
    in_stack_4 = '\0';
    in_stack_5 = (int *)0x0;
    GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(this_01,0,(MethodInfo *)0x0);
  }
  if ((this->fields)._scMidCap != (GizmoCap3D *)0x0) {
    if ((char)in_stack_5[4] != in_stack_4) {
      *(char *)(in_stack_5 + 4) = in_stack_4;
      (**(code **)(*in_stack_5 + 0x128))();
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoDragEnd
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._scMidCap;
  if (this_00 != (GizmoCap3D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if ((pvVar1 == (void *)handleId) || ((this->fields)._is2DModeEnabled != 0)) {
      return;
    }
    if ((this->fields)._scMidCap != (GizmoCap3D *)0x0) {
      if (cRam_? != in_stack_2) {
        cRam_? = in_stack_2;
        (**(code **)(iRam_? + 0x128))(0);
      }
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoDragUpdate
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  if ((this->fields)._isMvVertexSnapEnabled != 0) {
    fStack_1 = (this->fields)._mvPostVSnapPosRestore.z;
    uStack_2._0_4_ = (this->fields)._mvPostVSnapPosRestore.x;
    uStack_2._4_4_ = (this->fields)._mvPostVSnapPosRestore.y;
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pVVar4 = Gizmo::Gizmo_get_RelativeDragOffset(&VStack_5,this_00,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    fVar8 = pVVar4->z;
    (this->fields)._mvPostVSnapPosRestore.x = (float)uVar6 + (float)uStack_2;
    (this->fields)._mvPostVSnapPosRestore.y = uStack_2._4_4_ + (float)uVar7;
    (this->fields)._mvPostVSnapPosRestore.z = fStack_1 + fVar8;
  }
  return;
}


/* Void OnGizmoEnabled() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoEnabled
               (UniversalGizmo *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).OnGizmoUpdateBegin_1.method)
            (this,(this->klass->vtable).OnGizmoUpdateEnd_1.methodPtr);
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoRender
               (UniversalGizmo *this,Camera *camera,MethodInfo *method)

{
  camera_00 = camera;
  *unaff_FS_OFFSET = (int)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  this_03 = (RTGizmosEngine *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_03 == (RTGizmosEngine *)0x0) goto code_?;
  iVar1 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_03,(MethodInfo *)0x0);
  if (1 < iVar1) {
    pGVar2 = (this->fields)._mvAxesSliders;
    if (pGVar2 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ApplyZoomFactor
              (pGVar2,camera,(MethodInfo *)0x0);
    if (((this->fields)._isMvVertexSnapEnabled == 0) && ((this->fields)._is2DModeEnabled == 0)) {
      pGVar3 = (this->fields)._mvDblSliders;
      if (pGVar3 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
                (pGVar3,camera,(MethodInfo *)0x0);
      UniversalGizmo_PlaceMvDblSlidersInSliderPlanes(this,camera,(MethodInfo *)0x0);
    }
    UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
    if ((this->fields)._is2DModeEnabled != 0) {
      UniversalGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
    }
    pGVar4 = (this->fields)._rtMidCap;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar4,camera,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._rtAxesSliders;
    if (pGVar3 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
              (pGVar3,camera,(MethodInfo *)0x0);
    pGVar5 = (this->fields)._rtCamLookSlider;
    if (pGVar5 == (GizmoPlaneSlider2D *)0x0) goto code_?;
    if ((pGVar5->fields)._isBorderVisible != 0) {
      camera = (Camera *)this;
      UniversalGizmo_UpdateRtCamLookSlider(this,camera_00,(MethodInfo *)0x0);
    }
    pGVar4 = (this->fields)._scMidCap;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar4,camera_00,(MethodInfo *)0x0);
  }
  pGVar6 = (this->fields)._rtXSlider;
  if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
    (*(code *)(pGVar6->klass->vtable).Render_1.method)();
    pGVar6 = (this->fields)._rtYSlider;
    if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
      (*(code *)(pGVar6->klass->vtable).Render_1.method)();
      pGVar6 = (this->fields)._rtZSlider;
      if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
        (*(code *)(pGVar6->klass->vtable).Render_1.method)();
        pGVar4 = (this->fields)._rtMidCap;
        if (pGVar4 != (GizmoCap3D *)0x0) {
          method_00 = (MethodInfo *)camera_00;
          (*(code *)(pGVar4->klass->vtable).Render_1.method)();
          pGVar2 = (this->fields)._mvAxesSliders;
          if ((pGVar2 != (GizmoLineSlider3DCollection *)0x0) &&
             (this_04 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        GizmoLineSlider3DCollection::
                        GizmoLineSlider3DCollection_GetRenderSortedSliders
                                  (pGVar2,camera_00,(MethodInfo *)0x0),
             this_04 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
            pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)&stack0xffffffdc,this_04,
                                MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                               );
            RVar8 = pLVar7->_current;
            while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Object]::List_1_T_Enumerator_System_Object__MoveNext
                                     ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                                     ), bVar9 != 0) {
              if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
              (**(code **)(*(int *)RVar8 + 0x130))();
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffc8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                       ,method_00);
            pGVar5 = (this->fields)._rtCamLookSlider;
            if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
              (*(code *)(pGVar5->klass->vtable).Render_1.method)();
              pGVar6 = (this->fields)._mvXYSlider;
              if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                (*(code *)(pGVar6->klass->vtable).Render_1.method)();
                pGVar6 = (this->fields)._mvYZSlider;
                if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                  (*(code *)(pGVar6->klass->vtable).Render_1.method)();
                  pGVar6 = (this->fields)._mvZXSlider;
                  if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                    (*(code *)(pGVar6->klass->vtable).Render_1.method)();
                    pGVar4 = (this->fields)._scMidCap;
                    if (pGVar4 != (GizmoCap3D *)0x0) {
                      (*(code *)(pGVar4->klass->vtable).Render_1.method)();
                      pGVar10 = (this->fields)._mvVertSnapCap;
                      if (pGVar10 != (GizmoCap2D *)0x0) {
                        (*(code *)(pGVar10->klass->vtable).Render_1.method)();
                        this_00 = (this->fields)._mv2DModeSliders;
                        if (this_00 != (GizmoLineSlider2DCollection *)0x0) {
                          GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Render
                                    (this_00,camera,(MethodInfo *)0x0);
                          pGVar5 = (this->fields)._mv2DModeDblSlider;
                          if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                            (*(code *)(((List_1_UnityEngine_GameObject___Class *)pGVar5->klass)->
                                      vtable).CopyTo.method)();
                            if ((this->fields)._sharedLookAndFeel3D ==
                                (UniversalGizmoLookAndFeel3D *)0x0) {
                              pUVar11 = (this->fields)._lookAndFeel3D;
                              if (pUVar11 == (UniversalGizmoLookAndFeel3D *)0x0)
                              goto code_?;
                            }
                            else {
                              pUVar11 = (this->fields)._sharedLookAndFeel3D;
                            }
                            if ((pUVar11->fields)._isScScaleGuideVisible == 0) {
code_?:
                              *unaff_FS_OFFSET = (int)pGVar5;
                              return;
                            }
                            this_01 = (DataTable *)(this->fields)._._gizmo;
                            if (this_01 != (DataTable *)0x0) {
                              bVar9 = System.Data.dll::System::Data::DataTable::
                                      DataTable_get_CaseSensitive(this_01,(MethodInfo *)0x0);
                              if (bVar9 == 0) goto code_?;
                              this_02 = (this->fields)._._gizmo;
                              if (this_02 != (Gizmo *)0x0) {
                                UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                PointerEventBase`1[System::Object]::
                                PointerEventBase_1_System_Object__get_pointerType
                                          ((PointerEventBase_1_System_Object_ *)this_02,
                                           (MethodInfo *)0x0);
                                pGVar4 = (this->fields)._scMidCap;
                                if (pGVar4 != (GizmoCap3D *)0x0) {
                                  RVar12.First = 0;
                                  RVar12.Last = 0;
                                  RVar8 = (RegexCharClass_SingleRange)
                                           UnityEngine.AndroidJNIModule.dll::UnityEngine::
                                           AndroidJavaObject::AndroidJavaObject__GetRawClass
                                                     ((AndroidJavaObject *)pGVar4,(MethodInfo *)0x0)
                                  ;
                                  if (RVar8 == RVar12) {
                                    gameObjects = (this->fields)._scScaleGuideTargetObjects;
                                    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor
                                        == 0) {
                                      func_?();
                                    }
                                    RVar8 = (RegexCharClass_SingleRange)&UNK_?;
                                    pGVar5 = (GizmoPlaneSlider2D *)
                                              GameObjectEx::GameObjectEx_FilterParentsOnly_1
                                                        (gameObjects,(MethodInfo *)0x0);
                                    if (RVar8 == (RegexCharClass_SingleRange)0x0)
                                    goto code_?;
                                    GizmoScaleGuide::GizmoScaleGuide_Render
                                              ((GizmoScaleGuide *)RVar8,
                                               (IEnumerable_1_UnityEngine_GameObject_ *)pGVar5,
                                               camera,(MethodInfo *)0x0);
                                  }
                                  goto code_?;
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
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnGizmoTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoTransformChanged
               (UniversalGizmo *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
  if ((changeData.ChangeReason == 1) || (changeData.TRSDimension == 2)) {
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    UniversalGizmo_UpdateRtCamLookSlider(this,camera,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoUpdateBegin
               (UniversalGizmo *this,MethodInfo *method)

{
  this_03 = this;
  if ((this->fields)._useSnapEnableHotkey != 0) {
    if ((this->fields)._sharedHotkeys == (UniversalGizmoHotkeys *)0x0) {
      pUVar1 = (this->fields)._hotkeys;
      if (pUVar1 != (UniversalGizmoHotkeys *)0x0) goto code_?;
    }
    else {
      pUVar1 = (this->fields)._sharedHotkeys;
code_?:
      pHVar2 = (pUVar1->fields)._enableSnapping;
      if (pHVar2 != (Hotkeys *)0x0) {
        bVar3 = Hotkeys::Hotkeys_IsActive(pHVar2,1,(MethodInfo *)0x0);
        this_00 = (this->fields)._mvAxesSliders;
        if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
          GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
                    (this_00,bVar3,(MethodInfo *)0x0);
          this_01 = (this->fields)._mv2DModeSliders;
          if (this_01 != (GizmoLineSlider2DCollection *)0x0) {
            GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetSnapEnabled
                      (this_01,bVar3,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._mvDblSliders;
            if (pGVar4 != (GizmoPlaneSlider3DCollection *)0x0) {
              GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                        (pGVar4,bVar3,(MethodInfo *)0x0);
              pGVar5 = (this->fields)._mv2DModeDblSlider;
              if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                (*(code *)(pGVar5->klass->vtable).SetSnapEnabled_1.method)();
                pGVar4 = (this->fields)._rtAxesSliders;
                if (pGVar4 != (GizmoPlaneSlider3DCollection *)0x0) {
                  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                            (pGVar4,bVar3,(MethodInfo *)0x0);
                  pGVar6 = (this->fields)._rtCamXYRotationDrag;
                  if (pGVar6 != (GizmoDblAxisRotationDrag3D *)0x0) {
                    (pGVar6->fields)._._isSnapEnabled = bVar3;
                    pGVar5 = (this->fields)._rtCamLookSlider;
                    if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                      (*(code *)(pGVar5->klass->vtable).SetSnapEnabled_1.method)();
                      pGVar7 = (this->fields)._scUnformScaleDrag;
                      if (pGVar7 != (GizmoUniformScaleDrag3D *)0x0) {
                        (pGVar7->fields)._._isSnapEnabled = bVar3;
                        goto code_?;
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
code_?:
  if ((this->fields)._use2DModeEnableHotkey != 0) {
    if ((this->fields)._sharedHotkeys == (UniversalGizmoHotkeys *)0x0) {
      pUVar1 = (this->fields)._hotkeys;
      if (pUVar1 == (UniversalGizmoHotkeys *)0x0) goto code_?;
    }
    else {
      pUVar1 = (this->fields)._sharedHotkeys;
    }
    pHVar2 = (pUVar1->fields)._enable2DMode;
    if (pHVar2 == (Hotkeys *)0x0) goto code_?;
    bVar3 = Hotkeys::Hotkeys_IsActive(pHVar2,1,(MethodInfo *)0x0);
    UniversalGizmo_Set2DModeEnabled(this,bVar3,(MethodInfo *)0x0);
  }
  UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
  if ((this->fields)._is2DModeEnabled == 0) {
    bVar3 = (this->fields)._isMvVertexSnapEnabled;
    if (bVar3 == 0) {
      pGVar8 = (this->fields)._._gizmo;
      if ((pGVar8 == (Gizmo *)0x0) ||
         (pGVar9 = (pGVar8->fields)._transform, pGVar9 == (GizmoTransform *)0x0))
      goto code_?;
      fVar10 = (pGVar9->fields)._position3D.y;
      fVar11 = (pGVar9->fields)._position3D.z;
      (this->fields)._mvPostVSnapPosRestore.x = (pGVar9->fields)._position3D.x;
      (this->fields)._mvPostVSnapPosRestore.y = fVar10;
      (this->fields)._mvPostVSnapPosRestore.z = fVar11;
    }
    if ((this->fields)._useVertSnapEnableHotkey == 0) {
code_?:
      if ((bVar3 != 0) && ((this_03->fields)._isMvVertexSnapEnabled == 0)) {
        pGVar8 = (this_03->fields)._._gizmo;
        if ((pGVar8 == (Gizmo *)0x0) ||
           (pGVar9 = (pGVar8->fields)._transform, pGVar9 == (GizmoTransform *)0x0))
        goto code_?;
        GizmoTransform::GizmoTransform_set_Position3D
                  (pGVar9,(this_03->fields)._mvPostVSnapPosRestore,(MethodInfo *)0x0);
      }
      pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
      if (pDVar12 != (DataTable *)0x0) {
        bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                           (pDVar12,(MethodInfo *)0x0);
        if ((bVar3 != 0) &&
           (bVar3 = UniversalGizmo_IsDraggingMoveHandle(this_03,(MethodInfo *)0x0), bVar3 == 0))
        goto code_?;
        pGVar13 = (this_03->fields)._mvPXSlider;
        if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
          pUVar14 = (this_03->fields)._lookAndFeel3D;
          if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
        }
        else {
          pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
        }
        pBVar15 = (pUVar14->fields)._mvSglSliderVis;
        if (pBVar15 != (Boolean__Array *)0x0) {
          if (pBVar15->max_length == 0) goto code_?;
          if (pGVar13 != (GizmoLineSlider3D *)0x0) {
            GizmoSlider::GizmoSlider_SetVisible
                      ((GizmoSlider *)pGVar13,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
            pGVar13 = (this_03->fields)._mvPXSlider;
            if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
              pUVar14 = (this_03->fields)._lookAndFeel3D;
              if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
            }
            else {
              pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
            }
            pBVar15 = (pUVar14->fields)._mvSglSliderCapVis;
            if (pBVar15 != (Boolean__Array *)0x0) {
              if (pBVar15->max_length == 0) goto code_?;
              if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                          (pGVar13,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
                pGVar13 = (this_03->fields)._mvPYSlider;
                if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
                  pUVar14 = (this_03->fields)._lookAndFeel3D;
                  if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
                }
                else {
                  pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                }
                pBVar15 = (pUVar14->fields)._mvSglSliderVis;
                if (pBVar15 != (Boolean__Array *)0x0) {
                  if (pBVar15->max_length < 2) goto code_?;
                  if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                    GizmoSlider::GizmoSlider_SetVisible
                              ((GizmoSlider *)pGVar13,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                    pGVar13 = (this_03->fields)._mvPYSlider;
                    if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0
                       ) {
                      pUVar14 = (this_03->fields)._lookAndFeel3D;
                      if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
                    }
                    else {
                      pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                    }
                    pBVar15 = (pUVar14->fields)._mvSglSliderCapVis;
                    if (pBVar15 != (Boolean__Array *)0x0) {
                      if (pBVar15->max_length < 2) goto code_?;
                      if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                  (pGVar13,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                        pGVar13 = (this_03->fields)._mvPZSlider;
                        if ((this_03->fields)._sharedLookAndFeel3D ==
                            (UniversalGizmoLookAndFeel3D *)0x0) {
                          pUVar14 = (this_03->fields)._lookAndFeel3D;
                          if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
                        }
                        else {
                          pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                        }
                        pBVar15 = (pUVar14->fields)._mvSglSliderVis;
                        if (pBVar15 != (Boolean__Array *)0x0) {
                          if (pBVar15->max_length < 3) goto code_?;
                          if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                            GizmoSlider::GizmoSlider_SetVisible
                                      ((GizmoSlider *)pGVar13,pBVar15->vector[2] != 0,
                                       (MethodInfo *)0x0);
                            pGVar13 = (this_03->fields)._mvPZSlider;
                            if ((this_03->fields)._sharedLookAndFeel3D ==
                                (UniversalGizmoLookAndFeel3D *)0x0) {
                              pUVar14 = (this_03->fields)._lookAndFeel3D;
                              if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0)
                              goto code_?;
                            }
                            else {
                              pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                            }
                            pBVar15 = (pUVar14->fields)._mvSglSliderCapVis;
                            if (pBVar15 != (Boolean__Array *)0x0) {
                              if (pBVar15->max_length < 3) goto code_?;
                              if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                          (pGVar13,pBVar15->vector[2] != 0,(MethodInfo *)0x0);
                                pGVar13 = (this_03->fields)._mvNXSlider;
                                if ((this_03->fields)._sharedLookAndFeel3D ==
                                    (UniversalGizmoLookAndFeel3D *)0x0) {
                                  pUVar14 = (this_03->fields)._lookAndFeel3D;
                                  if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0)
                                  goto code_?;
                                }
                                else {
                                  pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                                }
                                pBVar15 = (pUVar14->fields)._mvSglSliderVis;
                                if (pBVar15 != (Boolean__Array *)0x0) {
                                  if (pBVar15->max_length < 4) goto code_?;
                                  if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                                    GizmoSlider::GizmoSlider_SetVisible
                                              ((GizmoSlider *)pGVar13,pBVar15->vector[3] != 0,
                                               (MethodInfo *)0x0);
                                    pGVar13 = (this_03->fields)._mvNXSlider;
                                    if ((this_03->fields)._sharedLookAndFeel3D ==
                                        (UniversalGizmoLookAndFeel3D *)0x0) {
                                      pUVar14 = (this_03->fields)._lookAndFeel3D;
                                      if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0)
                                      goto code_?;
                                    }
                                    else {
                                      pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                                    }
                                    pBVar15 = (pUVar14->fields)._mvSglSliderCapVis;
                                    if (pBVar15 != (Boolean__Array *)0x0) {
                                      if (pBVar15->max_length < 4) goto code_?;
                                      if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                                        GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                                  (pGVar13,pBVar15->vector[3] != 0,(MethodInfo *)0x0)
                                        ;
                                        pGVar13 = (this_03->fields)._mvNYSlider;
                                        if ((this_03->fields)._sharedLookAndFeel3D ==
                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                          pUVar14 = (this_03->fields)._lookAndFeel3D;
                                          if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0)
                                          goto code_?;
                                        }
                                        else {
                                          pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                                        }
                                        pBVar15 = (pUVar14->fields)._mvSglSliderVis;
                                        if (pBVar15 != (Boolean__Array *)0x0) {
                                          if (pBVar15->max_length < 5) goto code_?;
                                          if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                                            GizmoSlider::GizmoSlider_SetVisible
                                                      ((GizmoSlider *)pGVar13,pBVar15->vector[4] != 0
                                                       ,(MethodInfo *)0x0);
                                            pGVar13 = (this_03->fields)._mvNYSlider;
                                            if ((this_03->fields)._sharedLookAndFeel3D ==
                                                (UniversalGizmoLookAndFeel3D *)0x0) {
                                              pUVar14 = (this_03->fields)._lookAndFeel3D;
                                              if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0)
                                              goto code_?;
                                            }
                                            else {
                                              pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                                            }
                                            pBVar15 = (pUVar14->fields)._mvSglSliderCapVis;
                                            if (pBVar15 != (Boolean__Array *)0x0) {
                                              if (pBVar15->max_length < 5) goto code_?;
                                              if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                                                GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                                          (pGVar13,pBVar15->vector[4] != 0,
                                                           (MethodInfo *)0x0);
                                                pGVar13 = (this_03->fields)._mvNZSlider;
                                                if ((this_03->fields)._sharedLookAndFeel3D ==
                                                    (UniversalGizmoLookAndFeel3D *)0x0) {
                                                  pUVar14 = (this_03->fields)._lookAndFeel3D;
                                                  if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0)
                                                  goto code_?;
                                                }
                                                else {
                                                  pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                                                }
                                                pBVar15 = (pUVar14->fields)._mvSglSliderVis;
                                                if (pBVar15 != (Boolean__Array *)0x0) {
                                                  if (pBVar15->max_length < 6)
                                                  goto code_?;
                                                  if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                                                    GizmoSlider::GizmoSlider_SetVisible
                                                              ((GizmoSlider *)pGVar13,
                                                               pBVar15->vector[5] != 0,
                                                               (MethodInfo *)0x0);
                                                    pGVar13 = (this_03->fields)._mvNZSlider;
                                                    if ((this_03->fields)._sharedLookAndFeel3D ==
                                                        (UniversalGizmoLookAndFeel3D *)0x0) {
                                                      pUVar14 = (this_03->fields)._lookAndFeel3D;
                                                      if (pUVar14 ==
                                                          (UniversalGizmoLookAndFeel3D *)0x0)
                                                      goto code_?;
                                                    }
                                                    else {
                                                      pUVar14 = (this_03->fields).
                                                                _sharedLookAndFeel3D;
                                                    }
                                                    pBVar15 = (pUVar14->fields)._mvSglSliderCapVis;
                                                    if (pBVar15 != (Boolean__Array *)0x0) {
                                                      if (pBVar15->max_length < 6)
                                                      goto code_?;
                                                      if (pGVar13 != (GizmoLineSlider3D *)0x0) {
                                                        GizmoLineSlider3D::
                                                        GizmoLineSlider3D_Set3DCapVisible
                                                                  (pGVar13,pBVar15->vector[5] != 0,
                                                                   (MethodInfo *)0x0);
                                                        goto code_?;
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
    else {
      if ((this->fields)._sharedHotkeys == (UniversalGizmoHotkeys *)0x0) {
        pUVar1 = (this->fields)._hotkeys;
        if (pUVar1 == (UniversalGizmoHotkeys *)0x0) goto code_?;
      }
      else {
        pUVar1 = (this->fields)._sharedHotkeys;
      }
      pHVar2 = (pUVar1->fields)._enableVertexSnapping;
      if (pHVar2 != (Hotkeys *)0x0) {
        bVar16 = Hotkeys::Hotkeys_IsActive(pHVar2,1,(MethodInfo *)0x0);
        if ((((this->fields)._isMvVertexSnapEnabled == bVar16) ||
            ((this->fields)._is2DModeEnabled != 0)) || ((this->fields)._._isEnabled == 0))
        goto code_?;
        pDVar12 = (DataTable *)(this->fields)._._gizmo;
        if (pDVar12 != (DataTable *)0x0) {
          bVar17 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                             (pDVar12,(MethodInfo *)0x0);
          if (bVar17 != 0) goto code_?;
          this_02 = (this->fields)._mvVertSnapCap;
          if (bVar16 == 0) {
            if (this_02 != (GizmoCap2D *)0x0) {
              GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_02,0,(MethodInfo *)0x0);
              this._0_1_ = 1;
code_?:
              UniversalGizmo_SetScaleHandlesVisible(this_03,(bool)this,(MethodInfo *)0x0);
              (this_03->fields)._isMvVertexSnapEnabled = bVar16;
              goto code_?;
            }
          }
          else if (this_02 != (GizmoCap2D *)0x0) {
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_02,1,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._mvDblSliders;
            if (pGVar4 != (GizmoPlaneSlider3DCollection *)0x0) {
              GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                        (pGVar4,0,1,(MethodInfo *)0x0);
              UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
              this._0_1_ = 0;
              goto code_?;
            }
          }
        }
      }
    }
    goto code_?;
  }
code_?:
  if ((this_03->fields)._isMvVertexSnapEnabled == 0) {
    if ((this_03->fields)._is2DModeEnabled == 0) {
      pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
      if (pDVar12 == (DataTable *)0x0) goto code_?;
      bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                         (pDVar12,(MethodInfo *)0x0);
      if ((bVar3 != 0) &&
         (bVar3 = UniversalGizmo_IsDraggingMoveHandle(this_03,(MethodInfo *)0x0), bVar3 == 0))
      goto code_?;
      pGVar18 = (this_03->fields)._mvXYSlider;
      if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
        pUVar14 = (this_03->fields)._lookAndFeel3D;
        if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
      }
      else {
        pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
      }
      pBVar15 = (pUVar14->fields)._mvDblSliderVis;
      if (pBVar15 == (Boolean__Array *)0x0) goto code_?;
      if (pBVar15->max_length == 0) goto code_?;
      if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
        GizmoSlider::GizmoSlider_SetVisible
                  ((GizmoSlider *)pGVar18,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
        pGVar18 = (this_03->fields)._mvXYSlider;
        if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                    ((this_03->fields)._mvXYSlider,(pGVar18->fields)._._isVisible,(MethodInfo *)0x0)
          ;
          pGVar18 = (this_03->fields)._mvYZSlider;
          if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
            pUVar14 = (this_03->fields)._lookAndFeel3D;
            if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
          }
          else {
            pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
          }
          pBVar15 = (pUVar14->fields)._mvDblSliderVis;
          if (pBVar15 != (Boolean__Array *)0x0) {
            if (pBVar15->max_length < 2) goto code_?;
            if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
              GizmoSlider::GizmoSlider_SetVisible
                        ((GizmoSlider *)pGVar18,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
              pGVar18 = (this_03->fields)._mvYZSlider;
              if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                          ((this_03->fields)._mvYZSlider,(pGVar18->fields)._._isVisible,
                           (MethodInfo *)0x0);
                pGVar18 = (this_03->fields)._mvZXSlider;
                if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
                  pUVar14 = (this_03->fields)._lookAndFeel3D;
                  if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
                }
                else {
                  pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                }
                pBVar15 = (pUVar14->fields)._mvDblSliderVis;
                if (pBVar15 != (Boolean__Array *)0x0) {
                  if (pBVar15->max_length < 3) goto code_?;
                  if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                    GizmoSlider::GizmoSlider_SetVisible
                              ((GizmoSlider *)pGVar18,pBVar15->vector[2] != 0,(MethodInfo *)0x0);
                    pGVar18 = (this_03->fields)._mvZXSlider;
                    if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                ((this_03->fields)._mvZXSlider,(pGVar18->fields)._._isVisible,
                                 (MethodInfo *)0x0);
                      pGVar8 = (this_03->fields)._._gizmo;
                      if (pGVar8 != (Gizmo *)0x0) {
                        pCVar19 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
                        UniversalGizmo_PlaceMvDblSlidersInSliderPlanes
                                  (this_03,pCVar19,(MethodInfo *)0x0);
                        goto code_?;
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
      if ((this_03->fields)._isMvVertexSnapEnabled != 0) goto code_?;
      if ((this_03->fields)._is2DModeEnabled != 0) {
        pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
        if (pDVar12 != (DataTable *)0x0) {
          bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                             (pDVar12,(MethodInfo *)0x0);
          if ((bVar3 != 0) &&
             (bVar3 = UniversalGizmo_IsDraggingMoveHandle(this_03,(MethodInfo *)0x0), bVar3 == 0))
          goto code_?;
          pGVar20 = (this_03->fields)._mvP2DModeXSlider;
          if ((this_03->fields)._sharedLookAndFeel2D == (UniversalGizmoLookAndFeel2D *)0x0) {
            pUVar21 = (this_03->fields)._lookAndFeel2D;
            if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0) goto code_?;
          }
          else {
            pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
          }
          pBVar15 = (pUVar21->fields)._mvSglSliderVis;
          if (pBVar15 != (Boolean__Array *)0x0) {
            if (pBVar15->max_length == 0) goto code_?;
            if (pGVar20 != (GizmoLineSlider2D *)0x0) {
              GizmoSlider::GizmoSlider_SetVisible
                        ((GizmoSlider *)pGVar20,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
              pGVar20 = (this_03->fields)._mvP2DModeXSlider;
              if ((this_03->fields)._sharedLookAndFeel2D == (UniversalGizmoLookAndFeel2D *)0x0) {
                pUVar21 = (this_03->fields)._lookAndFeel2D;
                if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0) goto code_?;
              }
              else {
                pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
              }
              pBVar15 = (pUVar21->fields)._mvSglSliderCapVis;
              if (pBVar15 != (Boolean__Array *)0x0) {
                if (pBVar15->max_length == 0) goto code_?;
                if (pGVar20 != (GizmoLineSlider2D *)0x0) {
                  GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                            (pGVar20,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
                  pGVar20 = (this_03->fields)._mvP2DModeYSlider;
                  if ((this_03->fields)._sharedLookAndFeel2D == (UniversalGizmoLookAndFeel2D *)0x0)
                  {
                    pUVar21 = (this_03->fields)._lookAndFeel2D;
                    if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0) goto code_?;
                  }
                  else {
                    pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
                  }
                  pBVar15 = (pUVar21->fields)._mvSglSliderVis;
                  if (pBVar15 != (Boolean__Array *)0x0) {
                    if (pBVar15->max_length < 2) goto code_?;
                    if (pGVar20 != (GizmoLineSlider2D *)0x0) {
                      GizmoSlider::GizmoSlider_SetVisible
                                ((GizmoSlider *)pGVar20,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                      pGVar20 = (this_03->fields)._mvP2DModeYSlider;
                      if ((this_03->fields)._sharedLookAndFeel2D ==
                          (UniversalGizmoLookAndFeel2D *)0x0) {
                        pUVar21 = (this_03->fields)._lookAndFeel2D;
                        if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0) goto code_?;
                      }
                      else {
                        pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
                      }
                      pBVar15 = (pUVar21->fields)._mvSglSliderCapVis;
                      if (pBVar15 != (Boolean__Array *)0x0) {
                        if (pBVar15->max_length < 2) goto code_?;
                        if (pGVar20 != (GizmoLineSlider2D *)0x0) {
                          GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                    (pGVar20,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                          pGVar20 = (this_03->fields)._mvN2DModeXSlider;
                          if ((this_03->fields)._sharedLookAndFeel2D ==
                              (UniversalGizmoLookAndFeel2D *)0x0) {
                            pUVar21 = (this_03->fields)._lookAndFeel2D;
                            if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0)
                            goto code_?;
                          }
                          else {
                            pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
                          }
                          pBVar15 = (pUVar21->fields)._mvSglSliderVis;
                          if (pBVar15 != (Boolean__Array *)0x0) {
                            if (pBVar15->max_length < 3) goto code_?;
                            if (pGVar20 != (GizmoLineSlider2D *)0x0) {
                              GizmoSlider::GizmoSlider_SetVisible
                                        ((GizmoSlider *)pGVar20,pBVar15->vector[2] != 0,
                                         (MethodInfo *)0x0);
                              pGVar20 = (this_03->fields)._mvN2DModeXSlider;
                              if ((this_03->fields)._sharedLookAndFeel2D ==
                                  (UniversalGizmoLookAndFeel2D *)0x0) {
                                pUVar21 = (this_03->fields)._lookAndFeel2D;
                                if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0)
                                goto code_?;
                              }
                              else {
                                pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
                              }
                              pBVar15 = (pUVar21->fields)._mvSglSliderCapVis;
                              if (pBVar15 != (Boolean__Array *)0x0) {
                                if (pBVar15->max_length < 3) goto code_?;
                                if (pGVar20 != (GizmoLineSlider2D *)0x0) {
                                  GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                            (pGVar20,pBVar15->vector[2] != 0,(MethodInfo *)0x0);
                                  pGVar20 = (this_03->fields)._mvN2DModeYSlider;
                                  if ((this_03->fields)._sharedLookAndFeel2D ==
                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                    pUVar21 = (this_03->fields)._lookAndFeel2D;
                                    if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0)
                                    goto code_?;
                                  }
                                  else {
                                    pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
                                  }
                                  pBVar15 = (pUVar21->fields)._mvSglSliderVis;
                                  if (pBVar15 != (Boolean__Array *)0x0) {
                                    if (pBVar15->max_length < 4) goto code_?;
                                    if (pGVar20 != (GizmoLineSlider2D *)0x0) {
                                      GizmoSlider::GizmoSlider_SetVisible
                                                ((GizmoSlider *)pGVar20,pBVar15->vector[3] != 0,
                                                 (MethodInfo *)0x0);
                                      pGVar20 = (this_03->fields)._mvN2DModeYSlider;
                                      if ((this_03->fields)._sharedLookAndFeel2D ==
                                          (UniversalGizmoLookAndFeel2D *)0x0) {
                                        pUVar21 = (this_03->fields)._lookAndFeel2D;
                                        if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0)
                                        goto code_?;
                                      }
                                      else {
                                        pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
                                      }
                                      pBVar15 = (pUVar21->fields)._mvSglSliderCapVis;
                                      if (pBVar15 != (Boolean__Array *)0x0) {
                                        if (pBVar15->max_length < 4) goto code_?;
                                        if (pGVar20 != (GizmoLineSlider2D *)0x0) {
                                          GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                                    (pGVar20,pBVar15->vector[3] != 0,
                                                     (MethodInfo *)0x0);
                                          pGVar5 = (this_03->fields)._mv2DModeDblSlider;
                                          if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                                            bVar3 = (pGVar5->fields)._._isVisible;
                                            if ((this_03->fields)._sharedLookAndFeel2D ==
                                                (UniversalGizmoLookAndFeel2D *)0x0) {
                                              pUVar21 = (this_03->fields)._lookAndFeel2D;
                                              if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0)
                                              goto code_?;
                                            }
                                            else {
                                              pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
                                            }
                                            GizmoSlider::GizmoSlider_SetVisible
                                                      ((GizmoSlider *)
                                                       (this_03->fields)._mv2DModeDblSlider,
                                                       (pUVar21->fields)._isMvDblSliderVisible,
                                                       (MethodInfo *)0x0);
                                            pGVar5 = (this_03->fields)._mv2DModeDblSlider;
                                            if ((this_03->fields)._sharedLookAndFeel2D ==
                                                (UniversalGizmoLookAndFeel2D *)0x0) {
                                              pUVar21 = (this_03->fields)._lookAndFeel2D;
                                              if (pUVar21 == (UniversalGizmoLookAndFeel2D *)0x0)
                                              goto code_?;
                                            }
                                            else {
                                              pUVar21 = (this_03->fields)._sharedLookAndFeel2D;
                                            }
                                            if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                                              GizmoPlaneSlider2D::
                                              GizmoPlaneSlider2D_SetBorderVisible
                                                        (pGVar5,(pUVar21->fields).
                                                                _isMvDblSliderVisible,
                                                         (MethodInfo *)0x0);
                                              if (bVar3 == 0) {
                                                pGVar5 = (this_03->fields)._mv2DModeDblSlider;
                                                if (pGVar5 == (GizmoPlaneSlider2D *)0x0)
                                                goto code_?;
                                                if ((pGVar5->fields)._._isVisible != 0) {
                                                  UniversalGizmo_Update2DModeHandlePositions
                                                            (this_03,(MethodInfo *)0x0);
                                                }
                                              }
                                              goto code_?;
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
code_?:
      if ((this_03->fields)._isMvVertexSnapEnabled != 0) goto code_?;
      pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
      if (pDVar12 != (DataTable *)0x0) {
        bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                           (pDVar12,(MethodInfo *)0x0);
        if (bVar3 == 0) {
code_?:
          pGVar22 = (this_03->fields)._rtMidCap;
          if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
            pUVar14 = (this_03->fields)._lookAndFeel3D;
            if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
          }
          else {
            pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
          }
          if (pGVar22 != (GizmoCap3D *)0x0) {
            GizmoCap::GizmoCap_SetVisible
                      ((GizmoCap *)pGVar22,(pUVar14->fields)._isRtMidCapVisible,(MethodInfo *)0x0);
            pGVar6 = (this_03->fields)._rtCamXYRotationDrag;
            if ((this_03->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
              pUVar23 = (this_03->fields)._settings3D;
              if (pUVar23 == (UniversalGizmoSettings3D *)0x0) goto code_?;
            }
            else {
              pUVar23 = (this_03->fields)._sharedSettings3D;
            }
            fVar11 = UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtDragSensitivity
                               (pUVar23,(MethodInfo *)0x0);
            if (pGVar6 != (GizmoDblAxisRotationDrag3D *)0x0) {
              GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                        ((GizmoScreenDrag *)pGVar6,fVar11,(MethodInfo *)0x0);
              pGVar18 = (this_03->fields)._rtXSlider;
              if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
                pUVar14 = (this_03->fields)._lookAndFeel3D;
                if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
              }
              else {
                pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
              }
              pBVar15 = (pUVar14->fields)._rtAxesVis;
              if (pBVar15 != (Boolean__Array *)0x0) {
                if (pBVar15->max_length == 0) goto code_?;
                if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                  GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                            (pGVar18,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
                  pGVar18 = (this_03->fields)._rtYSlider;
                  if ((this_03->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0)
                  {
                    pUVar14 = (this_03->fields)._lookAndFeel3D;
                    if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
                  }
                  else {
                    pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                  }
                  pBVar15 = (pUVar14->fields)._rtAxesVis;
                  if (pBVar15 != (Boolean__Array *)0x0) {
                    if (pBVar15->max_length < 2) goto code_?;
                    if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                (pGVar18,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                      pGVar18 = (this_03->fields)._rtZSlider;
                      if ((this_03->fields)._sharedLookAndFeel3D ==
                          (UniversalGizmoLookAndFeel3D *)0x0) {
                        pUVar14 = (this_03->fields)._lookAndFeel3D;
                        if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
                      }
                      else {
                        pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                      }
                      pBVar15 = (pUVar14->fields)._rtAxesVis;
                      if (pBVar15 != (Boolean__Array *)0x0) {
                        if (pBVar15->max_length < 3) goto code_?;
                        if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                    (pGVar18,pBVar15->vector[2] != 0,(MethodInfo *)0x0);
                          pGVar5 = (this_03->fields)._rtCamLookSlider;
                          if ((this_03->fields)._sharedLookAndFeel3D ==
                              (UniversalGizmoLookAndFeel3D *)0x0) {
                            pUVar14 = (this_03->fields)._lookAndFeel3D;
                            if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0)
                            goto code_?;
                          }
                          else {
                            pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                          }
                          if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                            GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible
                                      (pGVar5,(pUVar14->fields)._isRtCamLookSliderVisible,
                                       (MethodInfo *)0x0);
                            pGVar5 = (this_03->fields)._rtCamLookSlider;
                            if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                              if ((pGVar5->fields)._isBorderVisible != 0) {
                                pGVar8 = (this_03->fields)._._gizmo;
                                if (pGVar8 == (Gizmo *)0x0) goto code_?;
                                pCVar19 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
                                UniversalGizmo_UpdateRtCamLookSlider
                                          (this_03,pCVar19,(MethodInfo *)0x0);
                              }
code_?:
                              pGVar22 = (this_03->fields)._scMidCap;
                              if ((this_03->fields)._sharedLookAndFeel3D ==
                                  (UniversalGizmoLookAndFeel3D *)0x0) {
                                pUVar14 = (this_03->fields)._lookAndFeel3D;
                                if (pUVar14 == (UniversalGizmoLookAndFeel3D *)0x0)
                                goto code_?;
                              }
                              else {
                                pUVar14 = (this_03->fields)._sharedLookAndFeel3D;
                              }
                              if ((pUVar14->fields)._isScMidCapVisible == 0) {
                                isVisible = false;
                              }
                              else {
                                isVisible = (this_03->fields)._is2DModeEnabled == 0;
                              }
                              if (pGVar22 != (GizmoCap3D *)0x0) {
                                GizmoCap::GizmoCap_SetVisible
                                          ((GizmoCap *)pGVar22,isVisible,(MethodInfo *)0x0);
                                pGVar7 = (this_03->fields)._scUnformScaleDrag;
                                if ((this_03->fields)._sharedSettings3D ==
                                    (UniversalGizmoSettings3D *)0x0) {
                                  pUVar23 = (this_03->fields)._settings3D;
                                  if (pUVar23 == (UniversalGizmoSettings3D *)0x0)
                                  goto code_?;
                                }
                                else {
                                  pUVar23 = (this_03->fields)._sharedSettings3D;
                                }
                                fVar11 = UniversalGizmoSettings3D::
                                         UniversalGizmoSettings3D_get_ScDragSensitivity
                                                   (pUVar23,(MethodInfo *)0x0);
                                if (pGVar7 != (GizmoUniformScaleDrag3D *)0x0) {
                                  GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                                            ((GizmoScreenDrag *)pGVar7,fVar11,(MethodInfo *)0x0);
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
        else {
          pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
          if (pDVar12 != (DataTable *)0x0) {
            bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                               (pDVar12,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              pGVar8 = (this_03->fields)._._gizmo;
              if (pGVar8 == (Gizmo *)0x0) goto code_?;
              handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                         PointerEventBase`1[System::Object]::
                         PointerEventBase_1_System_Object__get_pointerType
                                   ((PointerEventBase_1_System_Object_ *)pGVar8,(MethodInfo *)0x0);
              bVar3 = UniversalGizmo_IsRotationHandle(this_03,(int32_t)handleId,(MethodInfo *)0x0);
              if (bVar3 != 0) goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
  }
  else {
code_?:
    pGVar24 = (this_03->fields)._mvVertexSnapDrag;
    if (pGVar24 != (GizmoObjectVertexSnapDrag3D *)0x0) {
      cVar25 = (*(code *)(pGVar24->klass->vtable).get_IsActive_1.method)();
      if (cVar25 == '\0') {
        pGVar24 = (this_03->fields)._mvVertexSnapDrag;
        if (pGVar24 == (GizmoObjectVertexSnapDrag3D *)0x0) goto code_?;
        bVar3 = GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_SelectSnapPivotPoint
                           (pGVar24,(this_03->fields)._._gizmo,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pGVar8 = (this_03->fields)._._gizmo;
          if (((pGVar8 == (Gizmo *)0x0) ||
              (pGVar24 = (this_03->fields)._mvVertexSnapDrag,
              pGVar24 == (GizmoObjectVertexSnapDrag3D *)0x0)) ||
             (pGVar9 = (pGVar8->fields)._transform, pGVar9 == (GizmoTransform *)0x0))
          goto code_?;
          GizmoTransform::GizmoTransform_set_Position3D
                    (pGVar9,(pGVar24->fields)._snapPivot,(MethodInfo *)0x0);
        }
      }
code_?:
      if ((this_03->fields)._is2DModeEnabled == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OwnsHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = UniversalGizmo_IsMoveHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = UniversalGizmo_IsRotationHandle(this,handleId,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = (this->fields)._scMidCap;
      if (this_00 != (GizmoCap3D *)0x0) {
        pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
        return pvVar2 == (void *)handleId;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
  }
  return 1;
}


/* Void PlaceMvDblSlidersInSliderPlanes(Camera) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_PlaceMvDblSlidersInSliderPlanes
               (UniversalGizmo *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvXYSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar1->fields)._._isVisible != 0) {
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 == (Gizmo *)0x0) goto code_?;
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                ((this->fields)._mvXYSlider,(pGVar2->fields)._transform,PlaneId__Enum_XY,
                 (this->fields)._mvPXSlider,(this->fields)._mvPYSlider,camera,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._mvYZSlider;
    if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar1->fields)._._isVisible != 0) {
        pGVar2 = (this->fields)._._gizmo;
        if (pGVar2 == (Gizmo *)0x0) goto code_?;
        GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                  ((this->fields)._mvYZSlider,(pGVar2->fields)._transform,PlaneId__Enum_YZ,
                   (this->fields)._mvPYSlider,(this->fields)._mvPZSlider,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._mvZXSlider;
      if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar1->fields)._._isVisible != 0) {
          pGVar2 = (this->fields)._._gizmo;
          if (pGVar2 == (Gizmo *)0x0) goto code_?;
          GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                    ((this->fields)._mvZXSlider,(pGVar2->fields)._transform,PlaneId__Enum_ZX,
                     (this->fields)._mvPZSlider,(this->fields)._mvPXSlider,camera,(MethodInfo *)0x0)
          ;
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


/* Void Set2DModeEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Set2DModeEnabled
               (UniversalGizmo *this,bool isEnabled,MethodInfo *method)

{
  if ((((this->fields)._is2DModeEnabled == isEnabled) ||
      ((this->fields)._isMvVertexSnapEnabled != 0)) || ((this->fields)._._isEnabled == 0)) {
    return;
  }
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if (isEnabled == 0) {
      UniversalGizmo_Hide2DModeHandles(this,(MethodInfo *)0x0);
      UniversalGizmo_SetScaleHandlesVisible(this,1,(MethodInfo *)0x0);
      (this->fields)._is2DModeEnabled = 0;
      return;
    }
    pGVar2 = (this->fields)._mv2DModeSliders;
    if (pGVar2 != (GizmoLineSlider2DCollection *)0x0) {
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible
                (pGVar2,1,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._mv2DModeSliders;
      if (pGVar2 != (GizmoLineSlider2DCollection *)0x0) {
        GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Set2DCapsVisible
                  (pGVar2,1,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._mv2DModeDblSlider;
        if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
          GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)pGVar3,1,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._mv2DModeDblSlider;
          if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
            GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(pGVar3,1,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._._gizmo;
            if (((pGVar4 != (Gizmo *)0x0) &&
                (pGVar5 = (pGVar4->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) &&
               (pGVar2 = (this->fields)._mv2DModeSliders,
               pGVar2 != (GizmoLineSlider2DCollection *)0x0)) {
              GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetOffsetDragOrigin
                        (pGVar2,(pGVar5->fields)._position3D,(MethodInfo *)0x0);
              pGVar4 = (this->fields)._._gizmo;
              if ((pGVar4 != (Gizmo *)0x0) &&
                 (pGVar5 = (pGVar4->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) {
                fVar6 = (pGVar5->fields)._position3D.y;
                fVar7 = (pGVar5->fields)._position3D.z;
                pGVar3 = (this->fields)._mv2DModeDblSlider;
                if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
                  (pGVar3->fields)._offsetDragOrigin.x = (pGVar5->fields)._position3D.x;
                  (pGVar3->fields)._offsetDragOrigin.y = fVar6;
                  (pGVar3->fields)._offsetDragOrigin.z = fVar7;
                  UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
                  UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
                  UniversalGizmo_SetScaleHandlesVisible(this,0,(MethodInfo *)0x0);
                  UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
                  UniversalGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
                  (this->fields)._is2DModeEnabled = isEnabled;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetMoveHandlesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMoveHandlesVisible
               (UniversalGizmo *this,bool visible,MethodInfo *method)

{
  this_00 = (this->fields)._mvDblSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
              (this_00,visible,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._mvAxesSliders;
    if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetVisible
                (pGVar1,visible,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvAxesSliders;
      if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Set3DCapsVisible
                  (pGVar1,visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvAxesLinesHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvAxesLinesHoverable
               (UniversalGizmo *this,bool hoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvPXSlider;
  if (pGVar1 != (GizmoLineSlider3D *)0x0) {
    GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._mvNXSlider;
    if (pGVar1 != (GizmoLineSlider3D *)0x0) {
      GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvPYSlider;
      if (pGVar1 != (GizmoLineSlider3D *)0x0) {
        GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._mvNYSlider;
        if (pGVar1 != (GizmoLineSlider3D *)0x0) {
          GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._mvPZSlider;
          if (pGVar1 != (GizmoLineSlider3D *)0x0) {
            GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0)
            ;
            pGVar1 = (this->fields)._mvNZSlider;
            if (pGVar1 != (GizmoLineSlider3D *)0x0) {
              GizmoSlider::GizmoSlider_SetHoverable
                        ((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvVertexSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvVertexSnapEnabled
               (UniversalGizmo *this,bool isEnabled,MethodInfo *method)

{
  bVar1 = isEnabled;
  if ((((this->fields)._isMvVertexSnapEnabled != isEnabled) &&
      ((this->fields)._is2DModeEnabled == 0)) && ((this->fields)._._isEnabled != 0)) {
    this_00 = (DataTable *)(this->fields)._._gizmo;
    if (this_00 == (DataTable *)0x0) goto code_?;
    bVar2 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    this_01 = (this->fields)._mvVertSnapCap;
    if (isEnabled == 0) {
      if (this_01 == (GizmoCap2D *)0x0) goto code_?;
      GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,0,(MethodInfo *)0x0);
      isEnabled = 1;
    }
    else {
      if (this_01 == (GizmoCap2D *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,1,(MethodInfo *)0x0);
      this_02 = (this->fields)._mvDblSliders;
      if (this_02 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                (this_02,0,1,(MethodInfo *)0x0);
      UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
      isEnabled = 0;
    }
    UniversalGizmo_SetScaleHandlesVisible(this,isEnabled,(MethodInfo *)0x0);
    (this->fields)._isMvVertexSnapEnabled = bVar1;
  }
  return;
}


/* Void SetMvVertexSnapTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvVertexSnapTargetObjects
               (UniversalGizmo *this,IEnumerable_1_UnityEngine_GameObject_ *targetObjects,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertexSnapDrag;
  if (pGVar1 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    pIStack_2 = (IEnumerable_1_UnityEngine_GameObject_ *)
                (pGVar1->klass->vtable).get_DragChannel_1.methodPtr;
    pGStack_3 = pGVar1;
    cVar4 = (*(code *)(pGVar1->klass->vtable).get_IsActive_1.method)();
    if (cVar4 == '\0') {
      pIStack_2 = targetObjects;
      (pGVar1->fields)._targetObjects = targetObjects;
      pGStack_3 = (GizmoObjectVertexSnapDrag3D *)&(pGVar1->fields)._targetObjects;
      func_?();
    }
    return;
  }
  uVar5 = func_?(&pGStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetRotationHandlesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetRotationHandlesVisible
               (UniversalGizmo *this,bool visible,MethodInfo *method)

{
  this_00 = (this->fields)._rtAxesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetBorderVisible
              (this_00,visible,(MethodInfo *)0x0);
    this_01 = (this->fields)._rtMidCap;
    if (this_01 != (GizmoCap3D *)0x0) {
      GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,visible,(MethodInfo *)0x0);
      this_02 = (this->fields)._rtCamLookSlider;
      if (this_02 != (GizmoPlaneSlider2D *)0x0) {
        GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(this_02,visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetRtMidCapHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetRtMidCapHoverable
               (UniversalGizmo *this,bool hoverable,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pGStack_2 = (this->fields)._rtMidCap;
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


/* Void SetScaleHandlesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetScaleHandlesVisible
               (UniversalGizmo *this,bool visible,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._scMidCap;
  if (pGStack_2 != (GizmoCap3D *)0x0) {
    if ((pGStack_2->fields)._._isVisible != visible) {
      (pGStack_2->fields)._._isVisible = visible;
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


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetSnapEnabled
               (UniversalGizmo *this,bool isEnabled,MethodInfo *method)

{
  this_00 = (this->fields)._mvAxesSliders;
  if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
              (this_00,isEnabled,(MethodInfo *)0x0);
    this_01 = (this->fields)._mv2DModeSliders;
    if (this_01 != (GizmoLineSlider2DCollection *)0x0) {
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetSnapEnabled
                (this_01,isEnabled,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvDblSliders;
      if (pGVar1 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                  (pGVar1,isEnabled,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._mv2DModeDblSlider;
        if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
          (*(code *)(pGVar2->klass->vtable).SetSnapEnabled_1.method)();
          pGVar1 = (this->fields)._rtAxesSliders;
          if (pGVar1 != (GizmoPlaneSlider3DCollection *)0x0) {
            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                      (pGVar1,isEnabled,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._rtCamXYRotationDrag;
            if (pGVar3 != (GizmoDblAxisRotationDrag3D *)0x0) {
              (pGVar3->fields)._._isSnapEnabled = isEnabled;
              pGVar2 = (this->fields)._rtCamLookSlider;
              if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
                (*(code *)(pGVar2->klass->vtable).SetSnapEnabled_1.method)
                          (pGVar2,_isEnabled,(pGVar2->klass->vtable).Render_1.methodPtr);
                pGVar4 = (this->fields)._scUnformScaleDrag;
                if (pGVar4 != (GizmoUniformScaleDrag3D *)0x0) {
                  (pGVar4->fields)._._isSnapEnabled = isEnabled;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetupSharedLookAndFeel
               (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    pUVar1 = (this->fields)._lookAndFeel3D;
    if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
  pGVar3 = (this->fields)._mvPXSlider;
  if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
  if (pGVar2->max_length != 0) {
    if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
              (pGVar3,pGVar2->vector[0],(MethodInfo *)0x0);
    if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
      pUVar1 = (this->fields)._lookAndFeel3D;
      if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
    }
    else {
      pUVar1 = (this->fields)._sharedLookAndFeel3D;
    }
    pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
    pGVar3 = (this->fields)._mvPYSlider;
    if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if (1 < pGVar2->max_length) {
      if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
      GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                (pGVar3,pGVar2->vector[1],(MethodInfo *)0x0);
      if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
        pUVar1 = (this->fields)._lookAndFeel3D;
        if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
      }
      else {
        pUVar1 = (this->fields)._sharedLookAndFeel3D;
      }
      pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
      pGVar3 = (this->fields)._mvPZSlider;
      if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
      if (2 < pGVar2->max_length) {
        if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
        GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                  (pGVar3,pGVar2->vector[2],(MethodInfo *)0x0);
        if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
          pUVar1 = (this->fields)._lookAndFeel3D;
          if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
        }
        else {
          pUVar1 = (this->fields)._sharedLookAndFeel3D;
        }
        pGVar3 = (this->fields)._mvNXSlider;
        pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
        if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
        if (3 < pGVar2->max_length) {
          if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
          GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                    (pGVar3,pGVar2->vector[3],(MethodInfo *)0x0);
          if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
            pUVar1 = (this->fields)._lookAndFeel3D;
            if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
          }
          else {
            pUVar1 = (this->fields)._sharedLookAndFeel3D;
          }
          pGVar3 = (this->fields)._mvNYSlider;
          pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
          if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
          if (4 < pGVar2->max_length) {
            if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
            GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                      (pGVar3,pGVar2->vector[4],(MethodInfo *)0x0);
            if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
              pUVar1 = (this->fields)._lookAndFeel3D;
              if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
            }
            else {
              pUVar1 = (this->fields)._sharedLookAndFeel3D;
            }
            pGVar3 = (this->fields)._mvNZSlider;
            pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
            if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
            if (5 < pGVar2->max_length) {
              if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
              GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                        (pGVar3,pGVar2->vector[5],(MethodInfo *)0x0);
              if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
                pUVar1 = (this->fields)._lookAndFeel3D;
                if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
              }
              else {
                pUVar1 = (this->fields)._sharedLookAndFeel3D;
              }
              pGVar4 = (pUVar1->fields)._mvDblSlidersLookAndFeel;
              pGVar5 = (this->fields)._mvXYSlider;
              if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
              if (pGVar4->max_length != 0) {
                if (pGVar5 != (GizmoPlaneSlider3D *)0x0) {
                  pGStack6 = pGVar4->vector[0];
                  (pGVar5->fields)._sharedLookAndFeel = pGStack6;
                  ppGStack7 = &(pGVar5->fields)._sharedLookAndFeel;
                  func_?();
                  return;
                }
                goto code_?;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetupSharedSettings
               (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvSliderSettings
            (pUVar1,(this->fields)._mvPXSlider,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvSliderSettings
            (pUVar1,(this->fields)._mvPYSlider,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvSliderSettings
            (pUVar1,(this->fields)._mvPZSlider,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvSliderSettings
            (pUVar1,(this->fields)._mvNXSlider,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvSliderSettings
            (pUVar1,(this->fields)._mvNYSlider,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvSliderSettings
            (pUVar1,(this->fields)._mvNZSlider,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvDblSliderSettings
            (pUVar1,(this->fields)._mvXYSlider,PlaneId__Enum_XY,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvDblSliderSettings
            (pUVar1,(this->fields)._mvYZSlider,PlaneId__Enum_YZ,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectMvDblSliderSettings
            (pUVar1,(this->fields)._mvZXSlider,PlaneId__Enum_ZX,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (UniversalGizmoSettings2D *)0x0) {
    pUVar2 = (this->fields)._settings2D;
    if (pUVar2 == (UniversalGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pUVar2 = (this->fields)._sharedSettings2D;
  }
  UniversalGizmoSettings2D::UniversalGizmoSettings2D_ConnectMvSliderSettings
            (pUVar2,(this->fields)._mvP2DModeXSlider,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (UniversalGizmoSettings2D *)0x0) {
    pUVar2 = (this->fields)._settings2D;
    if (pUVar2 == (UniversalGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pUVar2 = (this->fields)._sharedSettings2D;
  }
  UniversalGizmoSettings2D::UniversalGizmoSettings2D_ConnectMvSliderSettings
            (pUVar2,(this->fields)._mvP2DModeYSlider,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (UniversalGizmoSettings2D *)0x0) {
    pUVar2 = (this->fields)._settings2D;
    if (pUVar2 == (UniversalGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pUVar2 = (this->fields)._sharedSettings2D;
  }
  UniversalGizmoSettings2D::UniversalGizmoSettings2D_ConnectMvSliderSettings
            (pUVar2,(this->fields)._mvN2DModeXSlider,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (UniversalGizmoSettings2D *)0x0) {
    pUVar2 = (this->fields)._settings2D;
    if (pUVar2 == (UniversalGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pUVar2 = (this->fields)._sharedSettings2D;
  }
  UniversalGizmoSettings2D::UniversalGizmoSettings2D_ConnectMvSliderSettings
            (pUVar2,(this->fields)._mvN2DModeYSlider,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (UniversalGizmoSettings2D *)0x0) {
    pUVar2 = (this->fields)._settings2D;
    if (pUVar2 == (UniversalGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pUVar2 = (this->fields)._sharedSettings2D;
  }
  UniversalGizmoSettings2D::UniversalGizmoSettings2D_ConnectMvDblSliderSettings
            (pUVar2,(this->fields)._mv2DModeDblSlider,(MethodInfo *)0x0);
  this_00 = (this->fields)._mvVertexSnapDrag;
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  if (this_00 == (GizmoObjectVertexSnapDrag3D *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_set_Settings
            (this_00,(pUVar1->fields)._mvVertexSnapSettings,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectRtSliderSettings
            (pUVar1,(this->fields)._rtXSlider,0,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectRtSliderSettings
            (pUVar1,(this->fields)._rtYSlider,1,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectRtSliderSettings
            (pUVar1,(this->fields)._rtZSlider,2,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    pUVar1 = (this->fields)._settings3D;
    if (pUVar1 == (UniversalGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedSettings3D;
  }
  UniversalGizmoSettings3D::UniversalGizmoSettings3D_ConnectRtCamLookSliderSettings
            (pUVar1,(this->fields)._rtCamLookSlider,(MethodInfo *)0x0);
  return;
}


/* Void Update2DGizmoPosition() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Update2DGizmoPosition
               (UniversalGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    this_01 = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    if (((pGVar1 != (Gizmo *)0x0) &&
        (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
       (this_01 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                ((Vector3 *)&stack0xfffffff0,this_01,(pGVar2->fields)._position3D,(MethodInfo *)0x0)
      ;
      if (this_00 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_set_Position2D(this_00,(Vector2)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update2DModeHandlePositions() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Update2DModeHandlePositions
               (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel2D == (UniversalGizmoLookAndFeel2D *)0x0) {
    pUVar1 = (this->fields)._lookAndFeel2D;
    if (pUVar1 == (UniversalGizmoLookAndFeel2D *)0x0) goto code_?;
  }
  else {
    pUVar1 = (this->fields)._sharedLookAndFeel2D;
  }
  if ((pUVar1->fields)._isMvDblSliderVisible == 0) {
    pGVar2 = (this->fields)._._gizmo;
    if ((pGVar2 != (Gizmo *)0x0) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      pVVar4 = &(pGVar3->fields)._position2D;
      value_00 = *pVVar4;
      value = *pVVar4;
      VVar5 = *pVVar4;
      pGVar6 = (this->fields)._mvP2DModeXSlider;
      if (pGVar6 != (GizmoLineSlider2D *)0x0) {
        GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,*pVVar4,(MethodInfo *)0x0);
        pGVar6 = (this->fields)._mvP2DModeYSlider;
        if (pGVar6 != (GizmoLineSlider2D *)0x0) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
          pGVar6 = (this->fields)._mvN2DModeXSlider;
          if (pGVar6 != (GizmoLineSlider2D *)0x0) {
            GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,value,(MethodInfo *)0x0);
            pGVar6 = (this->fields)._mvN2DModeYSlider;
            if (pGVar6 != (GizmoLineSlider2D *)0x0) {
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                        (pGVar6,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    pGVar7 = (this->fields)._mv2DModeDblSlider;
    pGVar6 = (this->fields)._mvP2DModeXSlider;
    if ((pGVar7 != (GizmoPlaneSlider2D *)0x0) &&
       (VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                          (pGVar7,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0),
       pGVar6 != (GizmoLineSlider2D *)0x0)) {
      GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._mv2DModeDblSlider;
      pGVar6 = (this->fields)._mvP2DModeYSlider;
      if ((pGVar7 != (GizmoPlaneSlider2D *)0x0) &&
         (VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                            (pGVar7,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0),
         pGVar6 != (GizmoLineSlider2D *)0x0)) {
        GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
        pGVar7 = (this->fields)._mv2DModeDblSlider;
        pGVar6 = (this->fields)._mvN2DModeXSlider;
        if ((pGVar7 != (GizmoPlaneSlider2D *)0x0) &&
           (VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                              (pGVar7,Shape2DExtentPoint__Enum_Left,(MethodInfo *)0x0),
           pGVar6 != (GizmoLineSlider2D *)0x0)) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._mv2DModeDblSlider;
          pGVar6 = (this->fields)._mvN2DModeYSlider;
          if ((pGVar7 != (GizmoPlaneSlider2D *)0x0) &&
             (VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                (pGVar7,Shape2DExtentPoint__Enum_Bottom,(MethodInfo *)0x0),
             pGVar6 != (GizmoLineSlider2D *)0x0)) {
            GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateRtCamLookSlider(Camera) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_UpdateRtCamLookSlider
               (UniversalGizmo *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCap;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    fVar2 = GizmoCap3D::GizmoCap3D_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._._gizmo;
    this_00 = (this->fields)._rtCamLookSlider;
    if ((pGVar3 != (Gizmo *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      fVar5 = (pGVar4->fields)._position3D.z;
      pGVar1 = (this->fields)._rtMidCap;
      if (pGVar1 != (GizmoCap3D *)0x0) {
        GizmoCap3D::GizmoCap3D_GetRealSphereRadius(pGVar1,fVar2,(MethodInfo *)0x0);
        if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
          pUVar6 = (this->fields)._lookAndFeel3D;
          if (pUVar6 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
        }
        else {
          pUVar6 = (this->fields)._sharedLookAndFeel3D;
        }
        if (this_00 != (GizmoPlaneSlider2D *)0x0) {
          fVar2 = fVar2 * (pUVar6->fields)._rtCamLookSliderRadiusOffset + 0.0;
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


/* UniversalGizmo() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo__ctor
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoDblAxisRotationDrag3D);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DCollection);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DCollection);
    func_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    func_?(&TypeInfo__RTG__GizmoScaleGuide);
    func_?(&TypeInfo__RTG__GizmoUniformScaleDrag3D);
    func_?(&TypeInfo__RTG__UniversalGizmoHotkeys);
    func_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel2D);
    func_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__UniversalGizmoSettings2D);
    func_?(&TypeInfo__RTG__UniversalGizmoSettings3D);
    cRam_? = '\x01';
  }
  this_00 = (GizmoLineSlider3DCollection *)
            func_?(TypeInfo__RTG__GizmoLineSlider3DCollection);
  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._mvAxesSliders = this_00;
  func_?(&(this->fields)._mvAxesSliders,this_00);
  pGVar1 = (GizmoPlaneSlider3DCollection *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._mvDblSliders = pGVar1;
  func_?(&(this->fields)._mvDblSliders,pGVar1);
  this_01 = (GizmoObjectVertexSnapDrag3D *)
            func_?(TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
  GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._mvVertexSnapDrag = this_01;
  func_?(&(this->fields)._mvVertexSnapDrag,this_01);
  this_02 = (GizmoLineSlider2DCollection *)
            func_?(TypeInfo__RTG__GizmoLineSlider2DCollection);
  GizmoLineSlider2DCollection::GizmoLineSlider2DCollection__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._mv2DModeSliders = this_02;
  func_?();
  pGVar1 = (GizmoPlaneSlider3DCollection *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._rtAxesSliders = pGVar1;
  func_?(&(this->fields)._rtAxesSliders,pGVar1);
  this_03 = (GizmoDblAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoDblAxisRotationDrag3D)
  ;
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor
            ((GizmoSglAxisRotationDrag3D *)this_03,(MethodInfo *)0x0);
  (this->fields)._rtCamXYRotationDrag = this_03;
  func_?(&(this->fields)._rtCamXYRotationDrag,this_03);
  this_04 = (GizmoUniformScaleDrag3D *)func_?(TypeInfo__RTG__GizmoUniformScaleDrag3D);
  GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor(this_04,(MethodInfo *)0x0);
  (this->fields)._scUnformScaleDrag = this_04;
  ppGStack2 = &(this->fields)._scUnformScaleDrag;
  pUStack3 = (UniversalGizmoHotkeys__Class *)this_04;
  func_?();
  pGStack4 = TypeInfo__RTG__GizmoScaleGuide;
  this_05 = (GizmoScaleGuide *)func_?();
  GizmoScaleGuide::GizmoScaleGuide__ctor(this_05,(MethodInfo *)0x0);
  (this->fields)._scScaleGuide = this_05;
  func_?();
  pUStack5 = TypeInfo__RTG__UniversalGizmoSettings2D;
  this_06 = (UniversalGizmoSettings2D *)func_?();
  UniversalGizmoSettings2D::UniversalGizmoSettings2D__ctor(this_06,(MethodInfo *)0x0);
  (this->fields)._settings2D = this_06;
  func_?();
  this_07 = (UniversalGizmoSettings3D *)func_?();
  UniversalGizmoSettings3D::UniversalGizmoSettings3D__ctor(this_07,(MethodInfo *)0x0);
  (this->fields)._settings3D = this_07;
  func_?(&(this->fields)._settings3D);
  this_08 = (UniversalGizmoLookAndFeel2D *)func_?();
  UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D__ctor(this_08,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel2D = this_08;
  func_?();
  this_09 = (UniversalGizmoLookAndFeel3D *)func_?();
  UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D__ctor(this_09,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel3D = this_09;
  func_?();
  pUStack3 = TypeInfo__RTG__UniversalGizmoHotkeys;
  this_10 = (UniversalGizmoHotkeys *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pHVar6 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar6,StringLiteral_Enable_2D_mode,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar6 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar6->fields)._lShift = 1;
    (this_10->fields)._enable2DMode = pHVar6;
    func_?();
    pHVar6 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar6,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar6 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar6->fields)._lCtrl = 1;
      (this_10->fields)._enableSnapping = pHVar6;
      func_?();
      pHVar6 = (Hotkeys *)func_?();
      Hotkeys::Hotkeys__ctor_1
                (pHVar6,StringLiteral_Enable_vertex_snapping,(HotkeysStaticData)0x0,
                 (MethodInfo *)0x0);
      if (pHVar6 != (Hotkeys *)0x0) {
        (pHVar6->fields)._useStrictModifierCheck = 0;
        Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_V,(MethodInfo *)0x0);
        (this_10->fields)._enableVertexSnapping = pHVar6;
        func_?();
        Settings::Settings__ctor((Settings *)this_10,(MethodInfo *)0x0);
        (this->fields)._hotkeys = this_10;
        func_?();
        (this->fields)._useSnapEnableHotkey = 1;
        (this->fields)._useVertSnapEnableHotkey = 1;
        (this->fields)._use2DModeEnableHotkey = 1;
        GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* UniversalGizmoHotkeys get_Hotkeys() */

UniversalGizmoHotkeys *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Hotkeys
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (UniversalGizmoHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return (this->fields)._sharedHotkeys;
}


/* UniversalGizmoLookAndFeel2D get_LookAndFeel2D() */

UniversalGizmoLookAndFeel2D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_LookAndFeel2D
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel2D == (UniversalGizmoLookAndFeel2D *)0x0) {
    return (this->fields)._lookAndFeel2D;
  }
  return (this->fields)._sharedLookAndFeel2D;
}


/* UniversalGizmoLookAndFeel3D get_LookAndFeel3D() */

UniversalGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_LookAndFeel3D
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return (this->fields)._sharedLookAndFeel3D;
}


/* UniversalGizmoSettings2D get_Settings2D() */

UniversalGizmoSettings2D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Settings2D
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings2D == (UniversalGizmoSettings2D *)0x0) {
    return (this->fields)._settings2D;
  }
  return (this->fields)._sharedSettings2D;
}


/* UniversalGizmoSettings3D get_Settings3D() */

UniversalGizmoSettings3D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Settings3D
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return (this->fields)._sharedSettings3D;
}


/* UniversalGizmoLookAndFeel2D get_SharedLookAndFeel2D() */

UniversalGizmoLookAndFeel2D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_SharedLookAndFeel2D
          (UniversalGizmo *this,MethodInfo *method)

{
  return (this->fields)._sharedLookAndFeel2D;
}


/* Boolean get_Use2DModeEnableHotkey() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Use2DModeEnableHotkey
               (UniversalGizmo *this,MethodInfo *method)

{
  return (this->fields)._use2DModeEnableHotkey;
}


/* Boolean get_UseVertSnapEnableHotkey() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_UseVertSnapEnableHotkey
               (UniversalGizmo *this,MethodInfo *method)

{
  return (this->fields)._useVertSnapEnableHotkey;
}


/* Void set_SharedLookAndFeel2D(UniversalGizmoLookAndFeel2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel2D
               (UniversalGizmo *this,UniversalGizmoLookAndFeel2D *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel2D = value;
  func_?(&(this->fields)._sharedLookAndFeel2D,value);
  UniversalGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedLookAndFeel3D(UniversalGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel3D
               (UniversalGizmo *this,UniversalGizmoLookAndFeel3D *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel3D = value;
  func_?(&(this->fields)._sharedLookAndFeel3D,value);
  UniversalGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings2D(UniversalGizmoSettings2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedSettings2D
               (UniversalGizmo *this,UniversalGizmoSettings2D *value,MethodInfo *method)

{
  (this->fields)._sharedSettings2D = value;
  func_?(&(this->fields)._sharedSettings2D,value);
  UniversalGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings3D(UniversalGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedSettings3D
               (UniversalGizmo *this,UniversalGizmoSettings3D *value,MethodInfo *method)

{
  (this->fields)._sharedSettings3D = value;
  func_?(&(this->fields)._sharedSettings3D,value);
  UniversalGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
  return;
}


/* Void set_Use2DModeEnableHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_Use2DModeEnableHotkey
               (UniversalGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._use2DModeEnableHotkey = value;
  return;
}


/* Void set_UseSnapEnableHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_UseSnapEnableHotkey
               (UniversalGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._useSnapEnableHotkey = value;
  return;
}


/* Void set_UseVertSnapEnableHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_UseVertSnapEnableHotkey
               (UniversalGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._useVertSnapEnableHotkey = value;
  return;
}

