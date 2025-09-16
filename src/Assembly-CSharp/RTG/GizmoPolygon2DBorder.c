
/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_OnGizmoPreUpdateBegin
               (GizmoPolygon2DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  pIVar2 = (this->fields)._controllers;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      pGVar3 = (pGVar1->fields)._lookAndFeel;
      if (pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar3 = (pGVar1->fields)._sharedLookAndFeel;
    }
    if (pIVar2 != (IGizmoPolygon2DBorderController__Array *)0x0) {
      uVar4 = (pGVar3->fields)._polygonBorderType;
      if (pIVar2->max_length <= uVar4) goto code_?;
      if (pIVar2->vector[uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoPolygon2DBorderController,pIVar2->vector[uVar4]);
        pGVar1 = (this->fields)._planeSlider;
        pIVar2 = (this->fields)._controllers;
        if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            pGVar3 = (pGVar1->fields)._lookAndFeel;
            if (pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar3 = (pGVar1->fields)._sharedLookAndFeel;
          }
          if (pIVar2 != (IGizmoPolygon2DBorderController__Array *)0x0) {
            uVar4 = (pGVar3->fields)._polygonBorderType;
            if (pIVar2->max_length <= uVar4) goto code_?;
            if (pIVar2->vector[uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoPolygon2DBorderController,pIVar2->vector[uVar4]
                             );
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPolygonShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_OnPolygonShapeChanged
               (GizmoPolygon2DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IGizmoPolygon2DBorderController *)&TypeInfo__RTG__IGizmoPolygon2DBorderController;
    func_?();
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields)._controllers;
  pGVar3 = (this->fields)._planeSlider;
  if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      pGVar4 = (pGVar3->fields)._lookAndFeel;
      if (pGVar4 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar4 = (pGVar3->fields)._sharedLookAndFeel;
    }
    if (pIVar2 != (IGizmoPolygon2DBorderController__Array *)0x0) {
      uVar5 = (pGVar4->fields)._polygonBorderType;
      if (pIVar2->max_length <= uVar5) {
        pIStack_1 = (IGizmoPolygon2DBorderController *)0x0;
        pIStack_6 = (IGizmoPolygon2DBorderController__Class *)func_?();
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pIStack_1 = pIVar2->vector[uVar5];
      if (pIStack_1 != (IGizmoPolygon2DBorderController *)0x0) {
        pIStack_6 = TypeInfo__RTG__IGizmoPolygon2DBorderController;
        puStack_8 = (undefined *)0x2;
        func_?();
        return;
      }
    }
  }
code_?:
  pIStack_1 = (IGizmoPolygon2DBorderController *)&stack0xfffffffc;
  uVar9 = func_?(&puStack_8);
  func_?(uVar9);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_Render
               (GizmoPolygon2DBorder *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  if ((this->fields)._isVisible == 0) {
    return;
  }
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      pGVar2 = (pGVar1->fields)._lookAndFeel;
      if (pGVar2 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
    }
    fStack_3 = (pGVar2->fields)._borderColor.r;
    fStack_4 = (pGVar2->fields)._borderColor.g;
    fStack_5 = (pGVar2->fields)._borderColor.b;
    fStack_6 = (pGVar2->fields)._borderColor.a;
    pGVar7 = (this->fields)._targetHandle;
    if ((pGVar7 != (GizmoHandle *)0x0) &&
       (this_00 = (pGVar7->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
      iVar8 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              PointerCaptureEventBase`1[System::Object]::
              PointerCaptureEventBase_1_System_Object__get_pointerId
                        ((PointerCaptureEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._targetHandle;
      if (pGVar7 != (GizmoHandle *)0x0) {
        if (iVar8 == (pGVar7->fields)._id) {
          pGVar1 = (this->fields)._planeSlider;
          if (pGVar1 == (GizmoPlaneSlider2D *)0x0) goto code_?;
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            pGVar2 = (pGVar1->fields)._lookAndFeel;
            if (pGVar2 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
          }
          fStack_3 = (pGVar2->fields)._hoveredBorderColor.r;
          fStack_4 = (pGVar2->fields)._hoveredBorderColor.g;
          fStack_5 = (pGVar2->fields)._hoveredBorderColor.b;
          fStack_6 = (pGVar2->fields)._hoveredBorderColor.a;
        }
        if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
        }
        this_01 = (GizmoLineMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
        if (this_01 != (GizmoLineMaterial *)0x0) {
          GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                    (this_01,(MethodInfo *)0x0);
          color.g = fStack_4;
          color.r = fStack_3;
          color.b = fStack_5;
          color.a = fStack_6;
          GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,color,(MethodInfo *)0x0);
          GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._planeSlider;
          if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
            if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              pGVar2 = (pGVar1->fields)._lookAndFeel;
              if (pGVar2 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
            }
            else {
              pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
            }
            if ((pGVar2->fields)._polygonBorderType != 0) {
              pGVar1 = (this->fields)._planeSlider;
              if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                pGVar2 = (pGVar1->fields)._lookAndFeel;
                if (pGVar2 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
              }
              if ((pGVar2->fields)._polygonBorderType == 1) {
                pGVar7 = (this->fields)._targetHandle;
                if (pGVar7 == (GizmoHandle *)0x0) goto code_?;
                GizmoHandle::GizmoHandle_Render2DWire_1
                          (pGVar7,camera,(this->fields)._thickBorderPolygonIndex,(MethodInfo *)0x0);
              }
              return;
            }
            pGVar7 = (this->fields)._targetHandle;
            if (pGVar7 != (GizmoHandle *)0x0) {
              GizmoHandle::GizmoHandle_Render2DWire_1
                        (pGVar7,camera,(this->fields)._borderPolygonIndex,(MethodInfo *)0x0);
              return;
            }
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


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetHoverable
               (GizmoPolygon2DBorder *this,bool isHoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._targetHandle;
  (this->fields)._isHoverable = isHoverable;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set2DShapeHoverable
              (pGVar1,(this->fields)._borderPolygonIndex,isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._targetHandle;
    if (pGVar1 != (GizmoHandle *)0x0) {
      GizmoHandle::GizmoHandle_Set2DShapeHoverable
                (pGVar1,(this->fields)._thickBorderPolygonIndex,isHoverable,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetVisible
               (GizmoPolygon2DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  pGVar2 = (this->fields)._planeSlider;
  if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
    if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      pGVar3 = (pGVar2->fields)._lookAndFeel;
      if (pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
    }
    if (pIVar1 != (IGizmoPolygon2DBorderController__Array *)0x0) {
      uVar4 = (pGVar3->fields)._polygonBorderType;
      if (pIVar1->max_length <= uVar4) goto code_?;
      if (pIVar1->vector[uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoPolygon2DBorderController,pIVar1->vector[uVar4]);
        if ((this->fields)._isVisible == 0) {
          return;
        }
        pGVar2 = (this->fields)._planeSlider;
        pIVar1 = (this->fields)._controllers;
        if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
          if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            pGVar3 = (pGVar2->fields)._lookAndFeel;
            if (pGVar3 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
          }
          if (pIVar1 != (IGizmoPolygon2DBorderController__Array *)0x0) {
            uVar4 = (pGVar3->fields)._polygonBorderType;
            if (pIVar1->max_length <= uVar4) goto code_?;
            if (pIVar1->vector[uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoPolygon2DBorderController,pIVar1->vector[uVar4]
                             );
              GizmoPolygon2DBorder_OnPolygonShapeChanged(this,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GizmoPolygon2DBorder(GizmoPlaneSlider2D, GizmoHandle, PolygonShape2D) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder__ctor
               (GizmoPolygon2DBorder *this,GizmoPlaneSlider2D *planeSlider,GizmoHandle *targetHandle
               ,PolygonShape2D *targetPolygon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoPolygon2DBorderControllerData);
    func_?(&TypeRef__RTG__GizmoPolygon2DBorderType);
    func_?(&MethodInfo__RTG__GizmoPolygon2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoThickPolygon2DBorderController);
    func_?(&TypeInfo__RTG__GizmoThinPolygon2DBorderController);
    func_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    func_?(&TypeInfo__RTG__PolygonShape2D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pPVar1 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar1,(MethodInfo *)0x0);
  (this->fields)._borderPolygon = pPVar1;
  func_?(&(this->fields)._borderPolygon,pPVar1);
  pPVar1 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar1,(MethodInfo *)0x0);
  (this->fields)._thickBorderPolygon = pPVar1;
  func_?(&(this->fields)._thickBorderPolygon,pPVar1);
  pGVar2 = (GizmoPolygon2DBorderControllerData *)
           func_?(TypeInfo__RTG__GizmoPolygon2DBorderControllerData);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pGVar2,(MethodInfo *)0x0);
  (this->fields)._controllerData = pGVar2;
  func_?(&(this->fields)._controllerData,pGVar2);
  handle = TypeRef__RTG__GizmoPolygon2DBorderType;
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
  }
  else {
    mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0);
    pIVar3 = TypeInfo__RTG__IGizmoPolygon2DBorderController;
    pIVar4 = (IGizmoPolygon2DBorderController__Array *)func_?();
    (this->fields)._controllers = pIVar4;
    method_00 = &(this->fields)._controllers;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._planeSlider = (GizmoPlaneSlider2D *)method_00;
    func_?();
    (this->fields)._targetHandle = (GizmoHandle *)pIVar4;
    func_?(&(this->fields)._targetHandle,pIVar4);
    (this->fields)._targetPolygon = (PolygonShape2D *)pIVar3;
    func_?(&(this->fields)._targetPolygon,pIVar3);
    pGVar5 = (this->fields)._targetHandle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add2DShape
                      (pGVar5,(Shape2D *)(this->fields)._borderPolygon,(MethodInfo *)0x0);
    (this->fields)._borderPolygonIndex = iVar6;
    pPVar1 = (this->fields)._borderPolygon;
    if (pPVar1 == (PolygonShape2D *)0x0) goto code_?;
    (pPVar1->fields)._ptContainMode = 1;
    pGVar5 = (this->fields)._targetHandle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add2DShape
                      (pGVar5,(Shape2D *)(this->fields)._thickBorderPolygon,(MethodInfo *)0x0);
    (this->fields)._thickBorderPolygonIndex = iVar6;
    pPVar1 = (this->fields)._thickBorderPolygon;
    if (pPVar1 == (PolygonShape2D *)0x0) goto code_?;
    (pPVar1->fields)._ptContainMode = 1;
    pPVar1 = (this->fields)._thickBorderPolygon;
    if ((pPVar1 == (PolygonShape2D *)0x0) ||
       (pPVar7 = (pPVar1->fields)._borderRenderDesc,
       pPVar7 == (PolygonShape2D_BorderRenderDescriptor *)0x0)) goto code_?;
    (pPVar7->fields)._borderType = 1;
    pPVar1 = (this->fields)._thickBorderPolygon;
    if ((pPVar1 == (PolygonShape2D *)0x0) ||
       (pPVar7 = (pPVar1->fields)._borderRenderDesc,
       pPVar7 == (PolygonShape2D_BorderRenderDescriptor *)0x0)) goto code_?;
    (pPVar7->fields)._direction = 1;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).Border = this;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).BorderPolygon = (this->fields)._borderPolygon;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).BorderPolygonIndex = (this->fields)._borderPolygonIndex;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).ThickBorderPolygon = (this->fields)._thickBorderPolygon;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if ((pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) ||
       ((pGVar2->fields).ThickBorderPolygonIndex = (this->fields)._thickBorderPolygonIndex,
       pIVar4 == (IGizmoPolygon2DBorderController__Array *)0x0)) goto code_?;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).Gizmo = (Gizmo *)pIVar4->vector[0];
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).TargetHandle = (GizmoHandle *)pIVar4;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).TargetPolygon = (this->fields)._targetPolygon;
    func_?();
    pIVar4 = (this->fields)._controllers;
    pGVar2 = (this->fields)._controllerData;
    pSVar8 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?();
    System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
    Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pSVar8,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)pGVar2,(MethodInfo *)0x0);
    if (pIVar4 == (IGizmoPolygon2DBorderController__Array *)0x0) goto code_?;
    if (pSVar8 != (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)0x0) {
      iVar9 = func_?();
      if (iVar9 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0] = (IGizmoPolygon2DBorderController *)pSVar8;
    func_?();
    pIVar4 = (this->fields)._controllers;
    pGVar2 = (this->fields)._controllerData;
    pSVar8 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?();
    System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
    Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pSVar8,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)pGVar2,(MethodInfo *)0x0);
    if (pIVar4 == (IGizmoPolygon2DBorderController__Array *)0x0) goto code_?;
    if (pSVar8 == (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)0x0) {
code_?:
      if (pIVar4->max_length < 2) goto code_?;
      pIVar4->vector[1] = (IGizmoPolygon2DBorderController *)pSVar8;
      func_?();
      pGVar5 = (this->fields)._targetHandle;
      if (pGVar5 != (GizmoHandle *)0x0) {
        this_00 = (pGVar5->fields)._gizmo;
        value = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
                   MethodInfo__RTG__GizmoPolygon2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (this_00 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    iVar9 = func_?();
    if (iVar9 != 0) goto code_?;
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

