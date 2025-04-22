
/* Void OnGUI() */

void Assembly-CSharp.dll::RTG::SceneGizmoCamPrjSwitchLabel::SceneGizmoCamPrjSwitchLabel_OnGUI
               (SceneGizmoCamPrjSwitchLabel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GUIEx);
    func_?(&TypeInfo__UnityEngine__GUI);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      this_02 = (pSVar1->fields)._lookAndFeel;
    }
    else {
      this_02 = (pSVar1->fields)._sharedLookAndFeel;
    }
    pRVar2 = (pSVar1->fields)._sceneGizmoCamera;
    if ((pRVar2 == (RTSceneGizmoCamera *)0x0) ||
       (this_00 = (pRVar2->fields)._camera, this_02 == (SceneGizmoLookAndFeel *)0x0))
    goto code_?;
    if ((this_02->fields)._isCamPrjSwitchLabelVisible == 0) {
      return;
    }
    x = (((((this->fields)._sceneGizmo)->fields)._sceneGizmoCamera)->fields)._sceneCamera;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    }
    pOVar3 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if (pOVar3 == (Object *)0x0) goto code_?;
    y = (Object_1 *)pOVar3[4].monitor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,y,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
      }
      pRVar5 = (RTFocusCamera *)
               MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (pRVar5 == (RTFocusCamera *)0x0) goto code_?;
      bVar4 = RTFocusCamera::RTFocusCamera_get_IsDoingProjectionSwitch(pRVar5,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pTStack_6 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                               (this_02,(MethodInfo *)0x0);
        pTStack_7 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                               (this_02,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
        }
        pRVar5 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if (pRVar5 == (RTFocusCamera *)0x0) goto code_?;
        CVar8 = RTFocusCamera::RTFocusCamera_get_PrjSwitchTransitionType(pRVar5,(MethodInfo *)0x0);
        if (CVar8 == CameraPrjSwitchTransition_Type__Enum_ToPerspective) {
          pTStack_6 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                                 (this_02,(MethodInfo *)0x0);
          pTStack_7 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                                 (this_02,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_EaseInOut
                  (0.0,(this_02->fields)._camPrjSwitchLabelTint.a,1.0,0.0,(MethodInfo *)0x0);
        this_03 = (AnimationCurve *)(this_02->fields)._camPrjSwitchLabelTint.a;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_EaseInOut
                            (0.0,0.0,1.0,(float)this_03,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pRVar5 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pRVar5 == (RTFocusCamera *)0x0) ||
           (fVar9 = RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress(pRVar5,(MethodInfo *)0x0),
           this_01 == (AnimationCurve *)0x0)) goto code_?;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_01,fVar9,(MethodInfo *)0x0);
        pRVar5 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pRVar5 == (RTFocusCamera *)0x0) ||
           (fVar10 = RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress(pRVar5,(MethodInfo *)0x0),
           this_03 == (AnimationCurve *)0x0)) goto code_?;
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_03,fVar10,(MethodInfo *)0x0);
        pCVar11 = ColorEx::ColorEx_KeepAllButAlpha
                           ((Color *)&stack0xffffffb0,(this_02->fields)._camPrjSwitchLabelTint,
                            fVar10,(MethodInfo *)0x0);
        fVar10 = pCVar11->r;
        fVar12 = pCVar11->g;
        fVar13 = pCVar11->b;
        fVar14 = pCVar11->a;
        if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        color.g = fVar12;
        color.r = fVar10;
        color.b = fVar13;
        color.a = fVar14;
        GUIEx::GUIEx_PushColor(color,(MethodInfo *)0x0);
        pRVar15 = RectEx::RectEx_FromTexture2D
                            ((Rect *)&stack0xffffffb0,pTStack_7,(MethodInfo *)0x0);
        fVar10 = pRVar15->m_XMin;
        fVar12 = pRVar15->m_YMin;
        fVar13 = pRVar15->m_Width;
        fVar14 = pRVar15->m_Height;
        pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                            ((Rect *)&stack0xffffffb0,(Camera *)&UNK_?,(MethodInfo *)0x0);
        rect.m_YMin = fVar12;
        rect.m_XMin = fVar10;
        rect.m_Width = fVar13;
        rect.m_Height = fVar14;
        pRVar15 = RectEx::RectEx_PlaceBelowCenterHrz
                            ((Rect *)&stack0xffffffb0,rect,*pRVar15,(MethodInfo *)0x0);
        pRVar15 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffb0,*pRVar15,(MethodInfo *)0x0);
        fVar10 = pRVar15->m_Width;
        fVar12 = pRVar15->m_Height;
        fVar14 = fVar10 * _UNK_? + pRVar15->m_XMin;
        fVar13 = fVar10;
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        pQVar17 = (this->fields)._labelQuad;
        if (pQVar17 == (QuadShape2D *)0x0) goto code_?;
        fVar14 = fVar14 - fVar10 * _UNK_?;
        fVar10 = ((float)(iVar16 + -1) - (pQVar17->fields)._center.y) - fVar12 * _UNK_?;
        if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        position.m_YMin = fVar10;
        position.m_XMin = fVar14;
        position.m_Width = fVar13;
        position.m_Height = fVar12;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_DrawTexture
                  (position,(Texture *)pTStack_7,(MethodInfo *)0x0);
        GUIEx::GUIEx_PopColor((MethodInfo *)0x0);
        pCVar11 = ColorEx::ColorEx_KeepAllButAlpha
                           ((Color *)&stack0xffffffb0,(this_02->fields)._camPrjSwitchLabelTint,
                            fVar9,(MethodInfo *)0x0);
        GUIEx::GUIEx_PushColor(*pCVar11,(MethodInfo *)0x0);
        pRVar15 = RectEx::RectEx_FromTexture2D
                            ((Rect *)&stack0xffffffb0,pTStack_6,(MethodInfo *)0x0);
        fVar9 = pRVar15->m_XMin;
        fVar10 = pRVar15->m_YMin;
        fVar12 = pRVar15->m_Width;
        fVar13 = pRVar15->m_Height;
        pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                            ((Rect *)&stack0xffffffc8,(Camera *)&UNK_?,(MethodInfo *)0x0);
        rect_00.m_YMin = fVar10;
        rect_00.m_XMin = fVar9;
        rect_00.m_Width = fVar12;
        rect_00.m_Height = fVar13;
        pRVar15 = RectEx::RectEx_PlaceBelowCenterHrz
                            ((Rect *)&stack0xffffffb0,rect_00,*pRVar15,(MethodInfo *)0x0);
        pRVar15 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffb0,*pRVar15,(MethodInfo *)0x0);
        fVar10 = pRVar15->m_Width;
        fVar9 = pRVar15->m_Height;
        fVar13 = fVar10 * _UNK_? + pRVar15->m_XMin;
        fVar12 = fVar10;
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        pQVar17 = (this->fields)._labelQuad;
        if (pQVar17 == (QuadShape2D *)0x0) goto code_?;
        fVar13 = fVar13 - fVar10 * _UNK_?;
        fVar10 = ((float)(iVar16 + -1) - (pQVar17->fields)._center.y) - fVar9 * _UNK_?;
        goto code_?;
      }
    }
    if (this_00 != (Camera *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (this_00,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pTStack_6 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                               (this_02,(MethodInfo *)0x0);
      }
      else {
        pTStack_6 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                               (this_02,(MethodInfo *)0x0);
      }
      fVar9 = (this_02->fields)._camPrjSwitchLabelTint.r;
      fVar10 = (this_02->fields)._camPrjSwitchLabelTint.g;
      fVar12 = (this_02->fields)._camPrjSwitchLabelTint.b;
      fVar13 = (this_02->fields)._camPrjSwitchLabelTint.a;
      if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__GUIEx);
      }
      color_00.g = fVar10;
      color_00.r = fVar9;
      color_00.b = fVar12;
      color_00.a = fVar13;
      GUIEx::GUIEx_PushColor(color_00,(MethodInfo *)0x0);
      pRVar15 = RectEx::RectEx_FromTexture2D((Rect *)&stack0xffffffb0,pTStack_6,(MethodInfo *)0x0);
      fVar9 = pRVar15->m_XMin;
      fVar10 = pRVar15->m_YMin;
      fVar12 = pRVar15->m_Width;
      fVar13 = pRVar15->m_Height;
      pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                          ((Rect *)&stack0xffffffc8,this_00,(MethodInfo *)0x0);
      rect_01.m_YMin = fVar10;
      rect_01.m_XMin = fVar9;
      rect_01.m_Width = fVar12;
      rect_01.m_Height = fVar13;
      pRVar15 = RectEx::RectEx_PlaceBelowCenterHrz
                          ((Rect *)&stack0xffffffb0,rect_01,*pRVar15,(MethodInfo *)0x0);
      pRVar15 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffb0,*pRVar15,(MethodInfo *)0x0);
      fVar10 = pRVar15->m_Width;
      fVar9 = pRVar15->m_Height;
      fVar13 = fVar10 * _UNK_? + pRVar15->m_XMin;
      fVar12 = fVar10;
      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0)
      ;
      pQVar17 = (this->fields)._labelQuad;
      if (pQVar17 != (QuadShape2D *)0x0) {
        fVar13 = fVar13 - fVar10 * _UNK_?;
        fVar10 = ((float)(iVar16 + -1) - (pQVar17->fields)._center.y) - fVar9 * _UNK_?;
        if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__GUI);
        }
code_?:
        position_00.m_YMin = fVar10;
        position_00.m_XMin = fVar13;
        position_00.m_Width = fVar12;
        position_00.m_Height = fVar9;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_DrawTexture
                  (position_00,(Texture *)pTStack_6,(MethodInfo *)0x0);
        GUIEx::GUIEx_PopColor((MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnGizmoHandlePicked(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::SceneGizmoCamPrjSwitchLabel::
     SceneGizmoCamPrjSwitchLabel_OnGizmoHandlePicked
               (SceneGizmoCamPrjSwitchLabel *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppMStack_1 = &TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>;
    func_?();
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields)._handle;
  if (pGVar2 != (GizmoHandle *)0x0) {
    if (handleId == (pGVar2->fields)._id) {
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_00 = (RTFocusCamera *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (this_00 == (RTFocusCamera *)0x0) goto code_?;
      RTFocusCamera::RTFocusCamera_PerformProjectionSwitch(this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::SceneGizmoCamPrjSwitchLabel::
     SceneGizmoCamPrjSwitchLabel_OnGizmoPreUpdateBegin
               (SceneGizmoCamPrjSwitchLabel *this,Gizmo *gizmo,MethodInfo *method)

{
  pSVar1 = (this->fields)._sceneGizmo;
  pGVar2 = (this->fields)._handle;
  if (pSVar1 != (SceneGizmo *)0x0) {
    if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      pSVar3 = (pSVar1->fields)._lookAndFeel;
      if (pSVar3 == (SceneGizmoLookAndFeel *)0x0) goto code_?;
    }
    else {
      pSVar3 = (pSVar1->fields)._sharedLookAndFeel;
    }
    if (pGVar2 != (GizmoHandle *)0x0) {
      (pGVar2->fields)._Is2DVisible_k__BackingField = (pSVar3->fields)._isCamPrjSwitchLabelVisible;
      pSVar1 = (this->fields)._sceneGizmo;
      if (pSVar1 != (SceneGizmo *)0x0) {
        if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
          pSVar3 = (pSVar1->fields)._lookAndFeel;
        }
        else {
          pSVar3 = (pSVar1->fields)._sharedLookAndFeel;
        }
        pRVar4 = (pSVar1->fields)._sceneGizmoCamera;
        if ((pRVar4 != (RTSceneGizmoCamera *)0x0) &&
           (pCVar5 = (pRVar4->fields)._camera, pCVar5 != (Camera *)0x0)) {
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                            (pCVar5,(MethodInfo *)0x0);
          if (pSVar3 != (SceneGizmoLookAndFeel *)0x0) {
            if (bVar6 == 0) {
              texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                                    (pSVar3,(MethodInfo *)0x0);
            }
            else {
              texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                                    (pSVar3,(MethodInfo *)0x0);
            }
            pRVar7 = RectEx::RectEx_FromTexture2D
                                ((Rect *)&stack0xffffffdc,texture2D,(MethodInfo *)0x0);
            pSVar3 = (SceneGizmoLookAndFeel *)pRVar7->m_XMin;
            method_00 = (MethodInfo *)pRVar7->m_YMin;
            SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_CalculateMaxPrjSwitchLabelRectSize
                      (pSVar3,method_00);
            pSVar1 = (this->fields)._sceneGizmo;
            if (((pSVar1 != (SceneGizmo *)0x0) &&
                (pRVar4 = (pSVar1->fields)._sceneGizmoCamera, pRVar4 != (RTSceneGizmoCamera *)0x0))
               && (pCVar5 = (pRVar4->fields)._camera, pCVar5 != (Camera *)0x0)) {
              puVar8 = &UNK_?;
              pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                                  ((Rect *)&stack0xffffffec,pCVar5,(MethodInfo *)0x0);
              rect.m_YMin = (float)method_00;
              rect.m_XMin = (float)pSVar3;
              rect.m_Width = in_stack_9;
              rect.m_Height = (float)puVar8;
              pRVar7 = RectEx::RectEx_PlaceBelowCenterHrz
                                  ((Rect *)&stack0xffffffdc,rect,*pRVar7,(MethodInfo *)0x0);
              fVar10 = pRVar7->m_YMin;
              value.x = pRVar7->m_Width;
              value.y = pRVar7->m_Height;
              pQVar11 = (this->fields)._labelQuad;
              fVar12 = pRVar7->m_Height * _UNK_?;
              if (pQVar11 != (QuadShape2D *)0x0) {
                (pQVar11->fields)._center.x = pRVar7->m_Width * _UNK_? + pRVar7->m_XMin;
                (pQVar11->fields)._center.y = fVar12 + fVar10;
                pQVar11 = (this->fields)._labelQuad;
                if (pQVar11 != (QuadShape2D *)0x0) {
                  QuadShape2D::QuadShape2D_set_Size(pQVar11,value,(MethodInfo *)0x0);
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateTransform() */

void Assembly-CSharp.dll::RTG::SceneGizmoCamPrjSwitchLabel::
     SceneGizmoCamPrjSwitchLabel_UpdateTransform
               (SceneGizmoCamPrjSwitchLabel *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      pSVar2 = (pSVar1->fields)._lookAndFeel;
    }
    else {
      pSVar2 = (pSVar1->fields)._sharedLookAndFeel;
    }
    pRVar3 = (pSVar1->fields)._sceneGizmoCamera;
    if ((pRVar3 != (RTSceneGizmoCamera *)0x0) &&
       (pCVar4 = (pRVar3->fields)._camera, pCVar4 != (Camera *)0x0)) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (pCVar4,(MethodInfo *)0x0);
      if (pSVar2 != (SceneGizmoLookAndFeel *)0x0) {
        if (bVar5 == 0) {
          texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                                (pSVar2,(MethodInfo *)0x0);
        }
        else {
          texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                                (pSVar2,(MethodInfo *)0x0);
        }
        pRVar6 = RectEx::RectEx_FromTexture2D((Rect *)&stack0xffffffdc,texture2D,(MethodInfo *)0x0);
        pSVar2 = (SceneGizmoLookAndFeel *)pRVar6->m_XMin;
        method_00 = (MethodInfo *)pRVar6->m_YMin;
        SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_CalculateMaxPrjSwitchLabelRectSize
                  (pSVar2,method_00);
        pSVar1 = (this->fields)._sceneGizmo;
        if (((pSVar1 != (SceneGizmo *)0x0) &&
            (pRVar3 = (pSVar1->fields)._sceneGizmoCamera, pRVar3 != (RTSceneGizmoCamera *)0x0)) &&
           (pCVar4 = (pRVar3->fields)._camera, pCVar4 != (Camera *)0x0)) {
          puVar7 = &UNK_?;
          pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                             ((Rect *)&stack0xffffffec,pCVar4,(MethodInfo *)0x0);
          rect.m_YMin = (float)method_00;
          rect.m_XMin = (float)pSVar2;
          rect.m_Width = in_stack_8;
          rect.m_Height = (float)puVar7;
          pRVar6 = RectEx::RectEx_PlaceBelowCenterHrz
                             ((Rect *)&stack0xffffffdc,rect,*pRVar6,(MethodInfo *)0x0);
          fVar9 = pRVar6->m_YMin;
          value.x = pRVar6->m_Width;
          value.y = pRVar6->m_Height;
          pQVar10 = (this->fields)._labelQuad;
          fVar11 = pRVar6->m_Height * _UNK_?;
          if (pQVar10 != (QuadShape2D *)0x0) {
            (pQVar10->fields)._center.x = pRVar6->m_Width * _UNK_? + pRVar6->m_XMin;
            (pQVar10->fields)._center.y = fVar11 + fVar9;
            pQVar10 = (this->fields)._labelQuad;
            if (pQVar10 != (QuadShape2D *)0x0) {
              QuadShape2D::QuadShape2D_set_Size(pQVar10,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* SceneGizmoCamPrjSwitchLabel(SceneGizmo) */

void Assembly-CSharp.dll::RTG::SceneGizmoCamPrjSwitchLabel::SceneGizmoCamPrjSwitchLabel__ctor
               (SceneGizmoCamPrjSwitchLabel *this,SceneGizmo *sceneGizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__QuadShape2D);
    func_?(&
                    MethodInfo__RTG__SceneGizmoCamPrjSwitchLabel__OnGizmoHandlePicked_RTG__Gizmo__int_
                   );
    func_?(&MethodInfo__RTG__SceneGizmoCamPrjSwitchLabel__OnGizmoPreUpdateBegin_RTG__Gizmo_
                   );
    cRam_? = '\x01';
  }
  this_00 = (QuadShape2D *)func_?(TypeInfo__RTG__QuadShape2D);
  QuadShape2D::QuadShape2D__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._labelQuad;
  (this->fields)._labelQuad = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._sceneGizmo = sceneGizmo;
  func_?(&this->fields,sceneGizmo);
  pSVar1 = (this->fields)._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    pGVar2 = (pSVar1->fields)._._gizmo;
    id = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
         UnsafeUtility_SizeOf_10((MethodInfo *)0x0);
    if (pGVar2 != (Gizmo *)0x0) {
      pGVar3 = Gizmo::Gizmo_CreateHandle(pGVar2,id,(MethodInfo *)0x0);
      (this->fields)._handle = pGVar3;
      func_?();
      pGVar3 = (this->fields)._handle;
      if (pGVar3 != (GizmoHandle *)0x0) {
        GizmoHandle::GizmoHandle_Add2DShape
                  (pGVar3,(Shape2D *)(this->fields)._labelQuad,(MethodInfo *)0x0);
        if (sceneGizmo != (SceneGizmo *)0x0) {
          pGVar2 = (sceneGizmo->fields)._._gizmo;
          this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
          VideoCapture+OnVideoCaptureResourceCreatedCallback::
          VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                    (this_01,(Object *)this,
                     MethodInfo__RTG__SceneGizmoCamPrjSwitchLabel__OnGizmoPreUpdateBegin_RTG__Gizmo_
                     ,(MethodInfo *)0x0);
          if (pGVar2 != (Gizmo *)0x0) {
            Gizmo::Gizmo_add_PreUpdateBegin
                      (pGVar2,(GizmoPreUpdateBeginHandler *)0x0,(MethodInfo *)0x0);
            pGVar2 = (sceneGizmo->fields)._._gizmo;
            value = (GizmoPreHandlePickedHandler *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      ((EventHandler_1_Object_ *)value,(Object *)this,
                       MethodInfo__RTG__SceneGizmoCamPrjSwitchLabel__OnGizmoHandlePicked_RTG__Gizmo__int_
                       ,(MethodInfo *)0x0);
            if (pGVar2 != (Gizmo *)0x0) {
              Gizmo::Gizmo_add_PreHandlePicked(pGVar2,value,(MethodInfo *)0x0);
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

