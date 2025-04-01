
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
    this_02 = (pSVar1->fields)._sharedLookAndFeel;
    if (this_02 == (SceneGizmoLookAndFeel *)0x0) {
      this_02 = (pSVar1->fields)._lookAndFeel;
    }
    pRVar2 = (pSVar1->fields)._sceneGizmoCamera;
    if ((pRVar2 == (RTSceneGizmoCamera *)0x0) ||
       (this_00 = (pRVar2->fields)._camera, this_02 == (SceneGizmoLookAndFeel *)0x0))
    goto code_?;
    if ((this_02->fields)._isCamPrjSwitchLabelVisible == 0) {
      return;
    }
    x = (((pSVar1->fields)._sceneGizmoCamera)->fields)._sceneCamera;
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
        SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                  (this_02,(MethodInfo *)0x0);
        texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                              (this_02,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pRVar5 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if (pRVar5 == (RTFocusCamera *)0x0) goto code_?;
        CVar6 = RTFocusCamera::RTFocusCamera_get_PrjSwitchTransitionType(pRVar5,(MethodInfo *)0x0);
        if (CVar6 == CameraPrjSwitchTransition_Type__Enum_ToPerspective) {
          SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                    (this_02,(MethodInfo *)0x0);
          texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                                (this_02,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_EaseInOut
                  (0.0,(this_02->fields)._camPrjSwitchLabelTint.a,1.0,0.0,(MethodInfo *)0x0);
        texture2D_00 = (Texture2D *)(this_02->fields)._camPrjSwitchLabelTint.a;
        this_03 = (AnimationCurve *)0x0;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_EaseInOut
                            (0.0,0.0,1.0,(float)texture2D_00,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pRVar5 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pRVar5 == (RTFocusCamera *)0x0) ||
           (fVar7 = RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress(pRVar5,(MethodInfo *)0x0),
           this_01 == (AnimationCurve *)0x0)) goto code_?;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_01,fVar7,(MethodInfo *)0x0);
        pRVar5 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pRVar5 == (RTFocusCamera *)0x0) ||
           (fVar8 = RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress(pRVar5,(MethodInfo *)0x0),
           this_03 == (AnimationCurve *)0x0)) goto code_?;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_03,fVar8,(MethodInfo *)0x0);
        pCVar9 = ColorEx::ColorEx_KeepAllButAlpha
                           ((Color *)&stack0xffffffdc,(this_02->fields)._camPrjSwitchLabelTint,
                            fVar8,(MethodInfo *)0x0);
        fVar8 = pCVar9->r;
        fVar10 = pCVar9->g;
        fVar11 = pCVar9->b;
        fVar12 = pCVar9->a;
        if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        color.g = fVar10;
        color.r = fVar8;
        color.b = fVar11;
        color.a = fVar12;
        GUIEx::GUIEx_PushColor(color,(MethodInfo *)0x0);
        pRVar13 = RectEx::RectEx_FromTexture2D((Rect *)&stack0xffffffdc,texture2D,(MethodInfo *)0x0)
        ;
        fVar8 = pRVar13->m_XMin;
        fVar10 = pRVar13->m_YMin;
        fVar11 = pRVar13->m_Width;
        fVar12 = pRVar13->m_Height;
        if (this_00 == (Camera *)0x0) goto code_?;
        pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                            ((Rect *)&stack0xffffffcc,this_00,(MethodInfo *)0x0);
        rect.m_YMin = fVar10;
        rect.m_XMin = fVar8;
        rect.m_Width = fVar11;
        rect.m_Height = fVar12;
        pRVar13 = RectEx::RectEx_PlaceBelowCenterHrz
                            ((Rect *)&stack0xffffffcc,rect,*pRVar13,(MethodInfo *)0x0);
        pRVar13 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffcc,*pRVar13,(MethodInfo *)0x0);
        fVar8 = pRVar13->m_XMin;
        fVar10 = pRVar13->m_Width;
        fVar11 = pRVar13->m_Height;
        iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        pQVar15 = (this->fields)._labelQuad;
        if (pQVar15 == (QuadShape2D *)0x0) goto code_?;
        fVar8 = (fVar8 + fVar10 * _UNK_?) - fVar10 * _UNK_?;
        fVar12 = ((float)(iVar14 + -1) - (pQVar15->fields)._center.y) - fVar11 * _UNK_?;
        if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        position.m_YMin = fVar12;
        position.m_XMin = fVar8;
        position.m_Width = fVar10;
        position.m_Height = fVar11;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_DrawTexture
                  (position,(Texture *)texture2D,(MethodInfo *)0x0);
        GUIEx::GUIEx_PopColor((MethodInfo *)0x0);
        pCVar9 = ColorEx::ColorEx_KeepAllButAlpha
                           ((Color *)&stack0xffffffcc,(this_02->fields)._camPrjSwitchLabelTint,
                            fVar7,(MethodInfo *)0x0);
        GUIEx::GUIEx_PushColor(*pCVar9,(MethodInfo *)0x0);
        pRVar13 = RectEx::RectEx_FromTexture2D
                            ((Rect *)&stack0xffffffcc,texture2D_00,(MethodInfo *)0x0);
        fVar7 = pRVar13->m_XMin;
        fVar8 = pRVar13->m_YMin;
        fVar10 = pRVar13->m_Width;
        fVar11 = pRVar13->m_Height;
        pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                            ((Rect *)&stack0xffffffcc,this_00,(MethodInfo *)0x0);
        rect_00.m_YMin = fVar8;
        rect_00.m_XMin = fVar7;
        rect_00.m_Width = fVar10;
        rect_00.m_Height = fVar11;
        pRVar13 = RectEx::RectEx_PlaceBelowCenterHrz
                            ((Rect *)&stack0xffffffcc,rect_00,*pRVar13,(MethodInfo *)0x0);
        pRVar13 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffcc,*pRVar13,(MethodInfo *)0x0);
        fVar10 = pRVar13->m_XMin;
        fVar7 = pRVar13->m_Width;
        fVar8 = pRVar13->m_Height;
        iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        pQVar15 = (this->fields)._labelQuad;
        if (pQVar15 == (QuadShape2D *)0x0) goto code_?;
        fVar10 = (fVar10 + fVar7 * _UNK_?) - fVar7 * _UNK_?;
        fVar11 = ((float)(iVar14 + -1) - (pQVar15->fields)._center.y) - fVar8 * _UNK_?;
        goto code_?;
      }
    }
    if (this_00 != (Camera *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (this_00,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        texture2D_00 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                                 (this_02,(MethodInfo *)0x0);
      }
      else {
        texture2D_00 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                                 (this_02,(MethodInfo *)0x0);
      }
      fVar7 = (this_02->fields)._camPrjSwitchLabelTint.r;
      fVar8 = (this_02->fields)._camPrjSwitchLabelTint.g;
      fVar10 = (this_02->fields)._camPrjSwitchLabelTint.b;
      fVar11 = (this_02->fields)._camPrjSwitchLabelTint.a;
      if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      color_00.g = fVar8;
      color_00.r = fVar7;
      color_00.b = fVar10;
      color_00.a = fVar11;
      GUIEx::GUIEx_PushColor(color_00,(MethodInfo *)0x0);
      pRVar13 = RectEx::RectEx_FromTexture2D
                          ((Rect *)&stack0xffffffcc,texture2D_00,(MethodInfo *)0x0);
      fVar7 = pRVar13->m_XMin;
      fVar8 = pRVar13->m_YMin;
      fVar10 = pRVar13->m_Width;
      fVar11 = pRVar13->m_Height;
      pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                          ((Rect *)&stack0xffffffcc,this_00,(MethodInfo *)0x0);
      rect_01.m_YMin = fVar8;
      rect_01.m_XMin = fVar7;
      rect_01.m_Width = fVar10;
      rect_01.m_Height = fVar11;
      pRVar13 = RectEx::RectEx_PlaceBelowCenterHrz
                          ((Rect *)&stack0xffffffcc,rect_01,*pRVar13,(MethodInfo *)0x0);
      pRVar13 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffcc,*pRVar13,(MethodInfo *)0x0);
      fVar10 = pRVar13->m_XMin;
      fVar7 = pRVar13->m_Width;
      fVar8 = pRVar13->m_Height;
      iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0)
      ;
      pQVar15 = (this->fields)._labelQuad;
      if (pQVar15 != (QuadShape2D *)0x0) {
        fVar10 = (fVar10 + fVar7 * _UNK_?) - fVar7 * _UNK_?;
        fVar11 = ((float)(iVar14 + -1) - (pQVar15->fields)._center.y) - fVar8 * _UNK_?;
        if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__GUI);
        }
code_?:
        position_00.m_YMin = fVar11;
        position_00.m_XMin = fVar10;
        position_00.m_Width = fVar7;
        position_00.m_Height = fVar8;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_DrawTexture
                  (position_00,(Texture *)texture2D_00,(MethodInfo *)0x0);
        GUIEx::GUIEx_PopColor((MethodInfo *)0x0);
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
  if ((pSVar1 != (SceneGizmo *)0x0) &&
     (((pSVar3 = (pSVar1->fields)._sharedLookAndFeel, pSVar3 != (SceneGizmoLookAndFeel *)0x0 ||
       (pSVar3 = (pSVar1->fields)._lookAndFeel, pSVar3 != (SceneGizmoLookAndFeel *)0x0)) &&
      (pGVar2 != (GizmoHandle *)0x0)))) {
    (pGVar2->fields)._Is2DVisible_k__BackingField = (pSVar3->fields)._isCamPrjSwitchLabelVisible;
    SceneGizmoCamPrjSwitchLabel_UpdateTransform(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransform() */

void Assembly-CSharp.dll::RTG::SceneGizmoCamPrjSwitchLabel::
     SceneGizmoCamPrjSwitchLabel_UpdateTransform
               (SceneGizmoCamPrjSwitchLabel *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    pSVar2 = (pSVar1->fields)._sharedLookAndFeel;
    if (pSVar2 == (SceneGizmoLookAndFeel *)0x0) {
      pSVar2 = (pSVar1->fields)._lookAndFeel;
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
        VVar7 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_CalculateMaxPrjSwitchLabelRectSize
                           (pSVar2,method_00);
        fVar8 = VVar7.x;
        pSVar1 = (this->fields)._sceneGizmo;
        if (((pSVar1 != (SceneGizmo *)0x0) &&
            (pRVar3 = (pSVar1->fields)._sceneGizmoCamera, pRVar3 != (RTSceneGizmoCamera *)0x0)) &&
           (pCVar4 = (pRVar3->fields)._camera, pCVar4 != (Camera *)0x0)) {
          puVar9 = &UNK_?;
          pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                             ((Rect *)&stack0xffffffec,pCVar4,(MethodInfo *)0x0);
          rect.m_YMin = (float)method_00;
          rect.m_XMin = (float)pSVar2;
          rect.m_Width = fVar8;
          rect.m_Height = (float)puVar9;
          pRVar6 = RectEx::RectEx_PlaceBelowCenterHrz
                             ((Rect *)&stack0xffffffdc,rect,*pRVar6,(MethodInfo *)0x0);
          fVar8 = pRVar6->m_YMin;
          VVar7.x = pRVar6->m_Width;
          VVar7.y = pRVar6->m_Height;
          pQVar10 = (this->fields)._labelQuad;
          fVar11 = pRVar6->m_Height * _UNK_?;
          if (pQVar10 != (QuadShape2D *)0x0) {
            (pQVar10->fields)._center.x = pRVar6->m_Width * _UNK_? + pRVar6->m_XMin;
            (pQVar10->fields)._center.y = fVar11 + fVar8;
            pQVar10 = (this->fields)._labelQuad;
            if (pQVar10 != (QuadShape2D *)0x0) {
              QuadShape2D::QuadShape2D_set_Size(pQVar10,VVar7,(MethodInfo *)0x0);
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
  *(QuadShape2D **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pSVar1 = &this->fields;
  pSVar1->_sceneGizmo = sceneGizmo;
  func_?(pSVar1,sceneGizmo);
  if (pSVar1->_sceneGizmo != (SceneGizmo *)0x0) {
    pGVar2 = (pSVar1->_sceneGizmo->fields)._._gizmo;
    id = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
         UnsafeUtility_SizeOf_10((MethodInfo *)0x0);
    if (pGVar2 != (Gizmo *)0x0) {
      pGVar3 = Gizmo::Gizmo_CreateHandle(pGVar2,id,(MethodInfo *)0x0);
      ppGVar4 = &(this->fields)._handle;
      *ppGVar4 = pGVar3;
      func_?();
      pGVar3 = *ppGVar4;
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

