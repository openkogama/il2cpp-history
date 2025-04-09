
/* Single GetRealBoxDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_GetRealBoxDepth
                (GizmoQuad3DBorder *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._planeSlider;
  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar2->fields)._sharedLookAndFeel != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (((pGVar2->fields)._sharedLookAndFeel)->fields)._borderBoxDepth * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._sharedLookAndFeel)->fields)._scale;
    }
    pGVar3 = (pGVar2->fields)._lookAndFeel;
    if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar3->fields)._borderBoxDepth * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._lookAndFeel)->fields)._scale;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Single GetRealBoxHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_GetRealBoxHeight
                (GizmoQuad3DBorder *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._planeSlider;
  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar2->fields)._sharedLookAndFeel != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (((pGVar2->fields)._sharedLookAndFeel)->fields)._borderBoxHeight * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._sharedLookAndFeel)->fields)._scale;
    }
    pGVar3 = (pGVar2->fields)._lookAndFeel;
    if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar3->fields)._borderBoxHeight * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._lookAndFeel)->fields)._scale;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_OnGizmoPreUpdateBegin
               (GizmoQuad3DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._planeSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        pGVar3 = (pGVar2->fields)._lookAndFeel;
        if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
      }
      fVar4 = _UNK_?;
      if ((pGVar3->fields)._useZoomFactor != 0) {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        fVar4 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar5 = (this->fields)._controllers;
      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          pGVar3 = (pGVar2->fields)._lookAndFeel;
          if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
        }
        if (pIVar5 != (IGizmoQuad3DBorderController__Array *)0x0) {
          uVar6 = (pGVar3->fields)._quadBorderType;
          if (pIVar5->max_length <= uVar6) goto code_?;
          if (pIVar5->vector[uVar6] != (IGizmoQuad3DBorderController *)0x0) {
            func_?(0,TypeInfo__RTG__IGizmoQuad3DBorderController,pIVar5->vector[uVar6]);
            pGVar2 = (this->fields)._planeSlider;
            pIVar5 = (this->fields)._controllers;
            if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
              if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                pGVar3 = (pGVar2->fields)._lookAndFeel;
                if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
              }
              if (pIVar5 != (IGizmoQuad3DBorderController__Array *)0x0) {
                uVar6 = (pGVar3->fields)._quadBorderType;
                if (pIVar5->max_length <= uVar6) goto code_?;
                if (pIVar5->vector[uVar6] != (IGizmoQuad3DBorderController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoQuad3DBorderController,
                                  pIVar5->vector[uVar6],fVar4);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnQuadShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_OnQuadShapeChanged
               (GizmoQuad3DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._planeSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        pGVar3 = (pGVar2->fields)._lookAndFeel;
        if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
      }
      if ((pGVar3->fields)._useZoomFactor != 0) {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar4 = (this->fields)._controllers;
      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          pGVar3 = (pGVar2->fields)._lookAndFeel;
          if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
        }
        if (pIVar4 != (IGizmoQuad3DBorderController__Array *)0x0) {
          uVar5 = (pGVar3->fields)._quadBorderType;
          if (pIVar4->max_length <= uVar5) goto code_?;
          if (pIVar4->vector[uVar5] != (IGizmoQuad3DBorderController *)0x0) {
            func_?(2,TypeInfo__RTG__IGizmoQuad3DBorderController,pIVar4->vector[uVar5]);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_Render
               (GizmoQuad3DBorder *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<int>);
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_
                   );
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    func_?(&
                    MethodInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0___Render_b__0_int__int_
                   );
    func_?(&TypeInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = TypeInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0;
  value = (Object *)func_?();
  pOStack_6 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) goto code_?;
  value[1].klass = (Object__Class *)this;
  func_?();
  if ((this->fields)._isVisible == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  pGVar7 = (this->fields)._planeSlider;
  if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar7->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      pGVar8 = (pGVar7->fields)._lookAndFeel;
      if (pGVar8 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar8 = (pGVar7->fields)._sharedLookAndFeel;
    }
    auStack_9._0_4_ = (pGVar8->fields)._borderColor.r;
    auStack_9._4_4_ = (pGVar8->fields)._borderColor.g;
    fStack_10 = (pGVar8->fields)._borderColor.b;
    RStack_11 = (RegexCharClass_SingleRange)(pGVar8->fields)._borderColor.a;
    pGVar12 = (this->fields)._targetHandle;
    if ((pGVar12 != (GizmoHandle *)0x0) &&
       (this_00 = (pGVar12->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
      iVar13 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              PointerCaptureEventBase`1[System::Object]::
              PointerCaptureEventBase_1_System_Object__get_pointerId
                        ((PointerCaptureEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
      pGVar12 = (this->fields)._targetHandle;
      if (pGVar12 != (GizmoHandle *)0x0) {
        if (iVar13 == (pGVar12->fields)._id) {
          auStack_9._0_4_ = (pGVar8->fields)._hoveredBorderColor.r;
          auStack_9._4_4_ = (pGVar8->fields)._hoveredBorderColor.g;
          fStack_10 = (pGVar8->fields)._hoveredBorderColor.b;
          RStack_11 = (RegexCharClass_SingleRange)(pGVar8->fields)._hoveredBorderColor.a;
        }
        if ((pGVar8->fields)._quadBorderType == 0) {
          if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          this_01 = (GizmoLineMaterial *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
          if (this_01 != (GizmoLineMaterial *)0x0) {
            GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                      (this_01,(MethodInfo *)0x0);
            color_00.g = (float)auStack_9._4_4_;
            color_00.r = (float)auStack_9._0_4_;
            color_00.b = fStack_10;
            color_00.a = (float)RStack_11;
            GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,color_00,(MethodInfo *)0x0);
            GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
            pGVar12 = (this->fields)._targetHandle;
            if (pGVar12 != (GizmoHandle *)0x0) {
              GizmoHandle::GizmoHandle_Render3DWire_1
                        (pGVar12,(this->fields)._borderQuadIndex,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        else {
          if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          pLStack_14 = (List_1_System_UInt32_ *)
                       Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                 (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
          if (pLStack_14 != (List_1_System_UInt32_ *)0x0) {
            GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                      ((GizmoSolidMaterial *)pLStack_14,(MethodInfo *)0x0);
            color.g = (float)auStack_9._4_4_;
            color.r = (float)auStack_9._0_4_;
            color.b = fStack_10;
            color.a = (float)RStack_11;
            GizmoSolidMaterial::GizmoSolidMaterial_SetColor
                      ((GizmoSolidMaterial *)pLStack_14,color,(MethodInfo *)0x0);
            GizmoSolidMaterial::GizmoSolidMaterial_SetLit
                      ((GizmoSolidMaterial *)pLStack_14,(pGVar8->fields)._borderShadeMode == 0,
                       (MethodInfo *)0x0);
            bVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_IsLit
                              ((GizmoSolidMaterial *)pLStack_14,(MethodInfo *)0x0);
            if (bVar15 == 0) {
              GizmoSolidMaterial::GizmoSolidMaterial_SetPass
                        ((GizmoSolidMaterial *)pLStack_14,0,(MethodInfo *)0x0);
              if (camera == (Camera *)0x0) goto code_?;
            }
            else {
              if (camera == (Camera *)0x0) goto code_?;
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)camera,(MethodInfo *)0x0);
              if (pTVar16 == (Transform *)0x0) goto code_?;
              pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  ((Vector3 *)(auStack_9 + 4),pTVar16,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection
                        ((GizmoSolidMaterial *)pLStack_14,*pVVar17,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetPass
                        ((GizmoSolidMaterial *)pLStack_14,0,(MethodInfo *)0x0);
            }
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)camera,(MethodInfo *)0x0);
            if (pTVar16 != (Transform *)0x0) {
              pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)(auStack_9 + 4),pTVar16,(MethodInfo *)0x0);
              pMVar18 = (MonitorData *)pVVar17->z;
              *(undefined8 *)&pOStack_6[1].monitor = *(undefined8 *)pVVar17;
              pOStack_6[2].monitor = pMVar18;
              pLStack_14 = (List_1_System_UInt32_ *)(this->fields)._sortedBoxIndices;
              method_01 = (MethodInfo *)&UNK_?;
              RStack_11 = (RegexCharClass_SingleRange)func_?();
              mscorlib.dll::System::Comparison`1[UInt32]::Comparison_1_UInt32___ctor
                        ((Comparison_1_UInt32_ *)RStack_11,pOStack_6,
                         MethodInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0___Render_b__0_int__int_
                         ,(MethodInfo *)0x0);
              if (pLStack_14 != (List_1_System_UInt32_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
                List_1_System_UInt32__Sort_1
                          (pLStack_14,(Comparison_1_UInt32_ *)RStack_11,
                           MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_
                          );
                if ((pGVar8->fields)._borderFillMode == 0) {
                  pLVar19 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields)._sortedBoxIndices;
                  if (pLVar19 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                    pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)auStack_9,pLVar19,
                                         MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                                        );
                    RStack_11 = (RegexCharClass_SingleRange)&stack0xffffffbc;
                    RVar21 = pLVar20->_current;
                    fStack_10 = 0.0;
                    uStack_1 = 1;
                    while( true ) {
                      bVar15 = mscorlib.dll::System::Collections::Generic::
                              List`1[T]+Enumerator[System::Text::RegularExpressions::
                              RegexCharClass+SingleRange]::
                              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)&stack0xffffffbc,
                                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                        );
                      if (bVar15 == 0) break;
                      pGVar12 = (this->fields)._targetHandle;
                      if (pGVar12 == (GizmoHandle *)0x0) goto code_?;
                      GizmoHandle::GizmoHandle_Render3DSolid_1
                                (pGVar12,(int32_t)RVar21,(MethodInfo *)0x0);
                    }
code_?:
                    uStack_1 = 0xffffffff;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)&stack0xffffffbc,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                               ,method_01);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                }
                else {
                  pLVar19 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields)._sortedBoxIndices;
                  if (pLVar19 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                    pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)auStack_9,pLVar19,
                                         MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                                        );
                    RStack_11 = (RegexCharClass_SingleRange)&stack0xffffffbc;
                    RVar21 = pLVar20->_current;
                    fStack_10 = 0.0;
                    uStack_1 = 4;
                    while( true ) {
                      bVar15 = mscorlib.dll::System::Collections::Generic::
                              List`1[T]+Enumerator[System::Text::RegularExpressions::
                              RegexCharClass+SingleRange]::
                              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)&stack0xffffffbc,
                                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                        );
                      if (bVar15 == 0) break;
                      pGVar12 = (this->fields)._targetHandle;
                      if (pGVar12 == (GizmoHandle *)0x0) goto code_?;
                      GizmoHandle::GizmoHandle_Render3DWire_1
                                (pGVar12,(int32_t)RVar21,(MethodInfo *)0x0);
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
code_?:
  func_?();
  func_?();
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_SetHoverable
               (GizmoQuad3DBorder *this,bool isHoverable,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pGVar6 = (this->fields)._targetHandle;
  (this->fields)._isHoverable = isHoverable;
  if (pGVar6 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set3DShapeHoverable
              (pGVar6,(this->fields)._borderQuadIndex,isHoverable,(MethodInfo *)0x0);
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._sortedBoxIndices;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_8,this_00,
                          MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      shapeIndex = pLVar7->_current;
      LStack_8._version = 0;
      uStack_1 = 1;
      LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pGVar6 = (this->fields)._targetHandle;
        if (pGVar6 == (GizmoHandle *)0x0) break;
        GizmoHandle::GizmoHandle_Set3DShapeHoverable
                  (pGVar6,(int32_t)shapeIndex,isHoverable,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_SetVisible
               (GizmoQuad3DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  pGVar2 = (this->fields)._planeSlider;
  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      pGVar3 = (pGVar2->fields)._lookAndFeel;
      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
    }
    if (pIVar1 != (IGizmoQuad3DBorderController__Array *)0x0) {
      uVar4 = (pGVar3->fields)._quadBorderType;
      if (pIVar1->max_length <= uVar4) goto code_?;
      if (pIVar1->vector[uVar4] != (IGizmoQuad3DBorderController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoQuad3DBorderController,pIVar1->vector[uVar4]);
        if ((this->fields)._isVisible == 0) {
          return;
        }
        pGVar5 = (this->fields)._targetHandle;
        if ((pGVar5 != (GizmoHandle *)0x0) &&
           (this_00 = (pGVar5->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          fVar6 = GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                            ((GizmoRATriangle3DBorder *)this,camera,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._planeSlider;
          pIVar1 = (this->fields)._controllers;
          if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
            if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              pGVar3 = (pGVar2->fields)._lookAndFeel;
              if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
            }
            else {
              pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
            }
            if (pIVar1 != (IGizmoQuad3DBorderController__Array *)0x0) {
              uVar4 = (pGVar3->fields)._quadBorderType;
              if (pIVar1->max_length <= uVar4) goto code_?;
              if (pIVar1->vector[uVar4] != (IGizmoQuad3DBorderController *)0x0) {
                func_?(1,TypeInfo__RTG__IGizmoQuad3DBorderController,pIVar1->vector[uVar4],
                                fVar6);
                GizmoQuad3DBorder_OnQuadShapeChanged(this,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* GizmoQuad3DBorder(GizmoPlaneSlider3D, GizmoHandle, QuadShape3D) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder__ctor
               (GizmoQuad3DBorder *this,GizmoPlaneSlider3D *planeSlider,GizmoHandle *targetHandle,
               QuadShape3D *targetQuad,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxShape3D);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoBoxQuad3DBorderController);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoQuad3DBorderControllerData);
    func_?(&TypeRef__RTG__GizmoQuad3DBorderType);
    func_?(&MethodInfo__RTG__GizmoQuad3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&TypeInfo__RTG__GizmoThinQuad3DBorderController);
    func_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__RTG__QuadShape3D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pQVar1 = (QuadShape3D *)func_?(TypeInfo__RTG__QuadShape3D);
  QuadShape3D::QuadShape3D__ctor(pQVar1,(MethodInfo *)0x0);
  (this->fields)._borderQuad = pQVar1;
  func_?(&(this->fields)._borderQuad,pQVar1);
  pBVar2 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar2,(MethodInfo *)0x0);
  (this->fields)._topBox = pBVar2;
  func_?(&(this->fields)._topBox,pBVar2);
  pBVar2 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar2,(MethodInfo *)0x0);
  (this->fields)._rightBox = pBVar2;
  func_?(&(this->fields)._rightBox,pBVar2);
  pBVar2 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar2,(MethodInfo *)0x0);
  (this->fields)._bottomBox = pBVar2;
  func_?();
  pBVar2 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar2,(MethodInfo *)0x0);
  (this->fields)._leftBox = pBVar2;
  func_?(&(this->fields)._leftBox,pBVar2);
  pBVar2 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar2,(MethodInfo *)0x0);
  (this->fields)._topLeftBox = pBVar2;
  func_?(&(this->fields)._topLeftBox,pBVar2);
  pBVar2 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar2,(MethodInfo *)0x0);
  (this->fields)._topRightBox = pBVar2;
  func_?();
  pBVar2 = (BoxShape3D *)func_?();
  BoxShape3D::BoxShape3D__ctor(pBVar2,(MethodInfo *)0x0);
  (this->fields)._bottomRightBox = pBVar2;
  func_?();
  pBVar3 = TypeInfo__RTG__BoxShape3D;
  pBVar2 = (BoxShape3D *)func_?();
  BoxShape3D::BoxShape3D__ctor(pBVar2,(MethodInfo *)0x0);
  (this->fields)._bottomLeftBox = pBVar2;
  func_?();
  pLVar4 = (List_1_System_Int32_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields)._sortedBoxIndices = pLVar4;
  func_?(&(this->fields)._sortedBoxIndices);
  method_00 = TypeInfo__RTG__GizmoQuad3DBorderControllerData;
  pGVar5 = (GizmoQuad3DBorderControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._controllerData = pGVar5;
  func_?();
  handle = TypeRef__RTG__GizmoQuad3DBorderType;
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
    pIVar6 = (IGizmoQuad3DBorderController__Array *)func_?();
    (this->fields)._controllers = pIVar6;
    pMVar7 = (MethodInfo *)&(this->fields)._controllers;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar7);
    (this->fields)._planeSlider = (GizmoPlaneSlider3D *)&(this->fields)._bottomLeftBox;
    func_?();
    (this->fields)._targetHandle = (GizmoHandle *)pBVar2;
    func_?();
    (this->fields)._targetQuad = (QuadShape3D *)pBVar3;
    func_?();
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._borderQuad,(MethodInfo *)0x0);
    (this->fields)._borderQuadIndex = iVar9;
    pQVar1 = (this->fields)._borderQuad;
    if (pQVar1 == (QuadShape3D *)0x0) goto code_?;
    (pQVar1->fields)._raycastMode = 1;
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._topBox,(MethodInfo *)0x0);
    (this->fields)._topBoxIndex = iVar9;
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._rightBox,(MethodInfo *)0x0);
    (this->fields)._rightBoxIndex = iVar9;
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._bottomBox,(MethodInfo *)0x0);
    (this->fields)._bottomBoxIndex = iVar9;
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._leftBox,(MethodInfo *)0x0);
    (this->fields)._leftBoxIndex = iVar9;
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._topLeftBox,(MethodInfo *)0x0);
    (this->fields)._topLeftBoxIndex = iVar9;
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._topRightBox,(MethodInfo *)0x0);
    (this->fields)._topRightBoxIndex = iVar9;
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._bottomRightBox,(MethodInfo *)0x0);
    (this->fields)._bottomRightBoxIndex = iVar9;
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar8,(Shape3D *)(this->fields)._bottomLeftBox,(MethodInfo *)0x0);
    pLVar4 = (this->fields)._sortedBoxIndices;
    iVar9 = (this->fields)._topBoxIndex;
    (this->fields)._bottomLeftBoxIndex = iVar10;
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar11 = &(pLVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    pIVar12 = (pLVar4->fields)._items;
    if (pIVar12 == (Int32__Array *)0x0) goto code_?;
    uVar13 = (pLVar4->fields)._size;
    if (uVar13 < pIVar12->max_length) {
      (pLVar4->fields)._size = uVar13 + 1;
      if (pIVar12->max_length <= uVar13) goto code_?;
      pIVar12->vector[uVar13] = iVar9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar4,iVar9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar4 = (this->fields)._sortedBoxIndices;
    iVar9 = (this->fields)._rightBoxIndex;
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar11 = &(pLVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    pIVar12 = (pLVar4->fields)._items;
    if (pIVar12 == (Int32__Array *)0x0) goto code_?;
    uVar13 = (pLVar4->fields)._size;
    if (uVar13 < pIVar12->max_length) {
      (pLVar4->fields)._size = uVar13 + 1;
      if (pIVar12->max_length <= uVar13) goto code_?;
      pIVar12->vector[uVar13] = iVar9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar4,iVar9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar4 = (this->fields)._sortedBoxIndices;
    iVar9 = (this->fields)._bottomBoxIndex;
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar11 = &(pLVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    pIVar12 = (pLVar4->fields)._items;
    if (pIVar12 == (Int32__Array *)0x0) goto code_?;
    uVar13 = (pLVar4->fields)._size;
    if (uVar13 < pIVar12->max_length) {
      (pLVar4->fields)._size = uVar13 + 1;
      if (pIVar12->max_length <= uVar13) goto code_?;
      pIVar12->vector[uVar13] = iVar9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar4,iVar9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar4 = (this->fields)._sortedBoxIndices;
    iVar9 = (this->fields)._leftBoxIndex;
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar11 = &(pLVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    pIVar12 = (pLVar4->fields)._items;
    if (pIVar12 == (Int32__Array *)0x0) goto code_?;
    uVar13 = (pLVar4->fields)._size;
    if (uVar13 < pIVar12->max_length) {
      (pLVar4->fields)._size = uVar13 + 1;
      if (pIVar12->max_length <= uVar13) goto code_?;
      pIVar12->vector[uVar13] = iVar9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar4,iVar9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar4 = (this->fields)._sortedBoxIndices;
    iVar9 = (this->fields)._topLeftBoxIndex;
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar11 = &(pLVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    pIVar12 = (pLVar4->fields)._items;
    if (pIVar12 == (Int32__Array *)0x0) goto code_?;
    uVar13 = (pLVar4->fields)._size;
    if (uVar13 < pIVar12->max_length) {
      (pLVar4->fields)._size = uVar13 + 1;
      if (pIVar12->max_length <= uVar13) goto code_?;
      pIVar12->vector[uVar13] = iVar9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar4,iVar9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar4 = (this->fields)._sortedBoxIndices;
    iVar9 = (this->fields)._topRightBoxIndex;
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar11 = &(pLVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    pIVar12 = (pLVar4->fields)._items;
    if (pIVar12 == (Int32__Array *)0x0) goto code_?;
    uVar13 = (pLVar4->fields)._size;
    if (uVar13 < pIVar12->max_length) {
      (pLVar4->fields)._size = uVar13 + 1;
      if (pIVar12->max_length <= uVar13) goto code_?;
      pIVar12->vector[uVar13] = iVar9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar4,iVar9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar4 = (this->fields)._sortedBoxIndices;
    iVar9 = (this->fields)._bottomRightBoxIndex;
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar11 = &(pLVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    pIVar12 = (pLVar4->fields)._items;
    if (pIVar12 == (Int32__Array *)0x0) goto code_?;
    uVar13 = (pLVar4->fields)._size;
    if (uVar13 < pIVar12->max_length) {
      (pLVar4->fields)._size = uVar13 + 1;
      if (pIVar12->max_length <= uVar13) goto code_?;
      pIVar12->vector[uVar13] = iVar9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar4,iVar9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar4 = (this->fields)._sortedBoxIndices;
    iVar9 = (this->fields)._bottomLeftBoxIndex;
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar11 = &(pLVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    pIVar12 = (pLVar4->fields)._items;
    if (pIVar12 == (Int32__Array *)0x0) goto code_?;
    uVar13 = (pLVar4->fields)._size;
    if (uVar13 < pIVar12->max_length) {
      (pLVar4->fields)._size = uVar13 + 1;
      if (pIVar12->max_length <= uVar13) goto code_?;
      pIVar12->vector[uVar13] = iVar9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar4,iVar9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).Border = this;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    pGVar8 = (this->fields)._targetHandle;
    if (pGVar8 == (GizmoHandle *)0x0) goto code_?;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).Gizmo = (pGVar8->fields)._gizmo;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).TargetHandle = (this->fields)._targetHandle;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).TargetQuad = (this->fields)._targetQuad;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).BorderQuad = (this->fields)._borderQuad;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).TopBox = (this->fields)._topBox;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).RightBox = (this->fields)._rightBox;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).BottomBox = (this->fields)._bottomBox;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).LeftBox = (this->fields)._leftBox;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).TopLeftBox = (this->fields)._topLeftBox;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).TopRightBox = (this->fields)._topRightBox;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).BottomRightBox = (this->fields)._bottomRightBox;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).BottomLeftBox = (this->fields)._bottomLeftBox;
    func_?();
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).BorderQuadIndex = (this->fields)._borderQuadIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).TopBoxIndex = (this->fields)._topBoxIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).RightBoxIndex = (this->fields)._rightBoxIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).BottomBoxIndex = (this->fields)._bottomBoxIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).LeftBoxIndex = (this->fields)._leftBoxIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).TopLeftBoxIndex = (this->fields)._topLeftBoxIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).TopRightBoxIndex = (this->fields)._topRightBoxIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).BottomRightBoxIndex = (this->fields)._bottomRightBoxIndex;
    pGVar5 = (this->fields)._controllerData;
    if (pGVar5 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
    (pGVar5->fields).BottomLeftBoxIndex = (this->fields)._bottomLeftBoxIndex;
    pIVar6 = (this->fields)._controllers;
    pOVar14 = (Object__Class *)(this->fields)._controllerData;
    method_02 = TypeInfo__RTG__GizmoThinQuad3DBorderController;
    pOVar15 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar15,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    pOVar15[1].klass = pOVar14;
    func_?();
    if (pIVar6 == (IGizmoQuad3DBorderController__Array *)0x0) goto code_?;
    iVar16 = func_?();
    if (iVar16 == 0) goto code_?;
    if (pIVar6->max_length == 0) goto code_?;
    pIVar6->vector[0] = (IGizmoQuad3DBorderController *)pOVar15;
    func_?();
    pIVar6 = (this->fields)._controllers;
    pOVar14 = (Object__Class *)(this->fields)._controllerData;
    method_01 = TypeInfo__RTG__GizmoBoxQuad3DBorderController;
    pOVar15 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar15,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    pOVar15[1].klass = pOVar14;
    func_?();
    if (pIVar6 == (IGizmoQuad3DBorderController__Array *)0x0) goto code_?;
    iVar16 = func_?();
    if (iVar16 != 0) {
      if (pIVar6->max_length < 2) goto code_?;
      pIVar6->vector[1] = (IGizmoQuad3DBorderController *)pOVar15;
      func_?();
      pGVar8 = (this->fields)._targetHandle;
      if (pGVar8 != (GizmoHandle *)0x0) {
        this_00 = (pGVar8->fields)._gizmo;
        value = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
                   MethodInfo__RTG__GizmoQuad3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (this_00 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

