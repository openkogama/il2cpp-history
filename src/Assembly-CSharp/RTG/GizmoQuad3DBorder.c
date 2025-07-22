
/* Single GetRealBoxDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_GetRealBoxDepth
                (GizmoQuad3DBorder *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar3 = (pGVar2->fields)._borderBoxDepth;
      pGVar1 = (this->fields)._planeSlider;
      if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
        pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          return fVar3 * zoomFactor * (pGVar2->fields)._scale;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetRealBoxHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_GetRealBoxHeight
                (GizmoQuad3DBorder *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar3 = (pGVar2->fields)._borderBoxHeight;
      pGVar1 = (this->fields)._planeSlider;
      if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
        pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          return fVar3 * zoomFactor * (pGVar2->fields)._scale;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
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
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor(pGVar2,camera,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._planeSlider;
      pIVar3 = (this->fields)._controllers;
      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
        pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0);
        if ((pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
           (pIVar3 != (IGizmoQuad3DBorderController__Array *)0x0)) {
          uVar5 = (pGVar4->fields)._quadBorderType;
          if (pIVar3->max_length <= uVar5) goto code_?;
          if (pIVar3->vector[uVar5] != (IGizmoQuad3DBorderController *)0x0) {
            func_?();
            pGVar2 = (this->fields)._planeSlider;
            pIVar3 = (this->fields)._controllers;
            if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
              pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                 (pGVar2,(MethodInfo *)0x0);
              if ((pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
                 (pIVar3 != (IGizmoQuad3DBorderController__Array *)0x0)) {
                uVar5 = (pGVar4->fields)._quadBorderType;
                if (pIVar3->max_length <= uVar5) goto code_?;
                if (pIVar3->vector[uVar5] != (IGizmoQuad3DBorderController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoQuad3DBorderController,
                                  pIVar3->vector[uVar5],0);
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
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor(pGVar2,camera,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._planeSlider;
      pIVar3 = (this->fields)._controllers;
      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
        pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0);
        if ((pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
           (pIVar3 != (IGizmoQuad3DBorderController__Array *)0x0)) {
          uVar5 = (pGVar4->fields)._quadBorderType;
          if (pIVar3->max_length <= uVar5) goto code_?;
          if (pIVar3->vector[uVar5] != (IGizmoQuad3DBorderController *)0x0) {
            puStack6 = (undefined *)0x0;
            func_?();
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  pLVar6 = (List_1_System_UInt32_ *)func_?();
  pLStack_7 = pLVar6;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pLVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pLVar6 == (List_1_System_UInt32_ *)0x0) goto code_?;
  (pLVar6->fields)._items = (UInt32__Array *)this;
  func_?();
  if ((this->fields)._isVisible == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_00 = (this->fields)._planeSlider;
  if (this_00 != (GizmoPlaneSlider3D *)0x0) {
    pGVar8 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(this_00,(MethodInfo *)0x0);
    pGStack_9 = pGVar8;
    if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      auStack_10._0_4_ = (pGVar8->fields)._borderColor.r;
      auStack_10._4_4_ = (pGVar8->fields)._borderColor.g;
      fStack_11 = (pGVar8->fields)._borderColor.b;
      RStack_12 = (RegexCharClass_SingleRange)(pGVar8->fields)._borderColor.a;
      pGVar13 = (this->fields)._targetHandle;
      if ((pGVar13 != (GizmoHandle *)0x0) &&
         (this_01 = (pGVar13->fields)._gizmo, this_01 != (Gizmo *)0x0)) {
        iVar14 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerCaptureEventBase`1[System::Object]::
                 PointerCaptureEventBase_1_System_Object__get_pointerId
                           ((PointerCaptureEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0);
        pGVar13 = (this->fields)._targetHandle;
        if (pGVar13 != (GizmoHandle *)0x0) {
          if (iVar14 == (pGVar13->fields)._id) {
            auStack_10._0_4_ = (pGVar8->fields)._hoveredBorderColor.r;
            auStack_10._4_4_ = (pGVar8->fields)._hoveredBorderColor.g;
            fStack_11 = (pGVar8->fields)._hoveredBorderColor.b;
            RStack_12 = (RegexCharClass_SingleRange)(pGVar8->fields)._hoveredBorderColor.a;
          }
          if ((pGVar8->fields)._quadBorderType == 0) {
            if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?();
            }
            this_03 = (GizmoLineMaterial *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
            if (this_03 != (GizmoLineMaterial *)0x0) {
              GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                        (this_03,(MethodInfo *)0x0);
              color_00.g = (float)auStack_10._4_4_;
              color_00.r = (float)auStack_10._0_4_;
              color_00.b = fStack_11;
              color_00.a = (float)RStack_12;
              GizmoLineMaterial::GizmoLineMaterial_SetColor(this_03,color_00,(MethodInfo *)0x0);
              GizmoLineMaterial::GizmoLineMaterial_SetPass(this_03,0,(MethodInfo *)0x0);
              pGVar13 = (this->fields)._targetHandle;
              if (pGVar13 != (GizmoHandle *)0x0) {
                GizmoHandle::GizmoHandle_Render3DWire_1
                          (pGVar13,(this->fields)._borderQuadIndex,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          else {
            if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            this_02 = (GizmoSolidMaterial *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
            if (this_02 != (GizmoSolidMaterial *)0x0) {
              GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                        (this_02,(MethodInfo *)0x0);
              color.g = (float)auStack_10._4_4_;
              color.r = (float)auStack_10._0_4_;
              color.b = fStack_11;
              color.a = (float)RStack_12;
              GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_02,color,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetLit
                        (this_02,(pGStack_9->fields)._borderShadeMode == 0,(MethodInfo *)0x0);
              bVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_IsLit(this_02,(MethodInfo *)0x0);
              if (bVar15 == 0) {
                GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_02,0,(MethodInfo *)0x0);
                if (camera == (Camera *)0x0) goto code_?;
              }
              else {
                if (camera == (Camera *)0x0) goto code_?;
                pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)camera,(MethodInfo *)0x0);
                if (pTVar16 == (Transform *)0x0) goto code_?;
                pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)(auStack_10 + 4),pTVar16,(MethodInfo *)0x0);
                GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection
                          (this_02,*pVVar17,(MethodInfo *)0x0);
                GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_02,0,(MethodInfo *)0x0);
              }
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)camera,(MethodInfo *)0x0);
              if (pTVar16 != (Transform *)0x0) {
                pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)(auStack_10 + 4),pTVar16,(MethodInfo *)0x0);
                pLVar6 = pLStack_7;
                fVar18 = pVVar17->y;
                pOVar19 = (Object *)pVVar17->z;
                (pLStack_7->fields)._size = (int32_t)pVVar17->x;
                (pLStack_7->fields)._version = (int32_t)fVar18;
                (pLStack_7->fields)._syncRoot = pOVar19;
                pLStack_7 = (List_1_System_UInt32_ *)(this->fields)._sortedBoxIndices;
                method_01 = (MethodInfo *)&UNK_?;
                RStack_12 = (RegexCharClass_SingleRange)func_?();
                mscorlib.dll::System::Comparison`1[UInt32]::Comparison_1_UInt32___ctor
                          ((Comparison_1_UInt32_ *)RStack_12,(Object *)pLVar6,
                           MethodInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0___Render_b__0_int__int_
                           ,(MethodInfo *)0x0);
                if (pLStack_7 != (List_1_System_UInt32_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
                  List_1_System_UInt32__Sort_1
                            (pLStack_7,(Comparison_1_UInt32_ *)RStack_12,
                             MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_
                            );
                  if ((pGStack_9->fields)._borderFillMode == 0) {
                    pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields)._sortedBoxIndices;
                    if (pLVar20 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) {
                      pLVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                            *)auStack_10,pLVar20,
                                           MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                                          );
                      RStack_12 = (RegexCharClass_SingleRange)&stack0xffffffbc;
                      RVar22 = pLVar21->_current;
                      fStack_11 = 0.0;
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
                        pGVar13 = (this->fields)._targetHandle;
                        if (pGVar13 == (GizmoHandle *)0x0) goto code_?;
                        GizmoHandle::GizmoHandle_Render3DSolid_1
                                  (pGVar13,(int32_t)RVar22,(MethodInfo *)0x0);
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
                    pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields)._sortedBoxIndices;
                    if (pLVar20 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) {
                      pLVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                            *)auStack_10,pLVar20,
                                           MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                                          );
                      RStack_12 = (RegexCharClass_SingleRange)&stack0xffffffbc;
                      RVar22 = pLVar21->_current;
                      fStack_11 = 0.0;
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
                        pGVar13 = (this->fields)._targetHandle;
                        if (pGVar13 == (GizmoHandle *)0x0) goto code_?;
                        GizmoHandle::GizmoHandle_Render3DWire_1
                                  (pGVar13,(int32_t)RVar22,(MethodInfo *)0x0);
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
code_?:
  func_?();
  func_?();
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
      (pGVar3 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0),
      pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
     (pIVar1 != (IGizmoQuad3DBorderController__Array *)0x0)) {
    uVar4 = (pGVar3->fields)._quadBorderType;
    if (pIVar1->max_length <= uVar4) goto code_?;
    if (pIVar1->vector[uVar4] != (IGizmoQuad3DBorderController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoQuad3DBorderController,pIVar1->vector[uVar4]);
      if ((this->fields)._isVisible == 0) {
        return;
      }
      pGVar5 = (this->fields)._targetHandle;
      if ((pGVar5 != (GizmoHandle *)0x0) &&
         (pGVar6 = (pGVar5->fields)._gizmo, pGVar6 != (Gizmo *)0x0)) {
        pCVar7 = Gizmo::Gizmo_GetWorkCamera(pGVar6,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._planeSlider;
        if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
          fVar8 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor
                            (pGVar2,pCVar7,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._planeSlider;
          pIVar1 = (this->fields)._controllers;
          if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
              (pGVar3 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                  (pGVar2,(MethodInfo *)0x0),
              pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
             (pIVar1 != (IGizmoQuad3DBorderController__Array *)0x0)) {
            uVar4 = (pGVar3->fields)._quadBorderType;
            if (pIVar1->max_length <= uVar4) goto code_?;
            if (pIVar1->vector[uVar4] != (IGizmoQuad3DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoQuad3DBorderController,pIVar1->vector[uVar4],
                              fVar8);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
                cRam_? = '\x01';
              }
              pGVar5 = (this->fields)._targetHandle;
              if ((pGVar5 != (GizmoHandle *)0x0) &&
                 (pGVar6 = (pGVar5->fields)._gizmo, pGVar6 != (Gizmo *)0x0)) {
                pCVar7 = Gizmo::Gizmo_GetWorkCamera(pGVar6,(MethodInfo *)0x0);
                pGVar2 = (this->fields)._planeSlider;
                if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                  fVar8 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor
                                    (pGVar2,pCVar7,(MethodInfo *)0x0);
                  pGVar2 = (this->fields)._planeSlider;
                  pIVar1 = (this->fields)._controllers;
                  if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
                      (pGVar3 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                          (pGVar2,(MethodInfo *)0x0),
                      pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
                     (pIVar1 != (IGizmoQuad3DBorderController__Array *)0x0)) {
                    uVar4 = (pGVar3->fields)._quadBorderType;
                    if (pIVar1->max_length <= uVar4) goto code_?;
                    if (pIVar1->vector[uVar4] != (IGizmoQuad3DBorderController *)0x0) {
                      func_?(2,TypeInfo__RTG__IGizmoQuad3DBorderController,
                                      pIVar1->vector[uVar4],fVar8);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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

