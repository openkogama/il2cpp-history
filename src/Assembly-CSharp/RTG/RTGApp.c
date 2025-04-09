
/* Void DetectRenderPipeline() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_DetectRenderPipeline(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RLD__Unsupported_render_pipeline);
    func_?(&StringLiteral_Universal);
    cRam_? = '\x01';
  }
  (this->fields)._renderPipelineId = 0;
  pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Rendering::GraphicsSettings::
           GraphicsSettings_get_currentRenderPipeline((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Rendering::GraphicsSettings::
           GraphicsSettings_get_currentRenderPipeline((MethodInfo *)0x0);
  if (((pRVar1 != (RenderPipelineAsset *)0x0) &&
      (pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)pRVar1,(MethodInfo *)0x0),
      pTVar3 != (Type *)0x0)) &&
     (this_00 = (String *)(*(code *)(pTVar3->klass->vtable).ToString.method)(),
     this_00 != (String *)0x0)) {
    bVar2 = mscorlib.dll::System::String::String_Contains
                      (this_00,StringLiteral_Universal,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_RLD__Unsupported_render_pipeline,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
      return;
    }
    (this->fields)._renderPipelineId = 1;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnBeginCameraRendering(ScriptableRenderContext, Camera) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnBeginCameraRendering
               (RTGApp *this,ScriptableRenderContext context,Camera *camera,MethodInfo *method)

{
  (this->fields)._renderCamera = camera;
  func_?(&(this->fields)._renderCamera,camera);
  return;
}


/* Void OnCanCameraProcessInput(YesNoAnswer) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnCanCameraProcessInput
               (RTGApp *this,YesNoAnswer *answer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if ((pOVar1 != (Object *)0x0) && (answer != (YesNoAnswer *)0x0)) {
    if (pOVar1[4].klass == (Object__Class *)0x0) {
      (answer->fields)._hasYes = 1;
      return;
    }
    (answer->fields)._hasNo = 1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnCanCameraUseScrollWheel(YesNoAnswer) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnCanCameraUseScrollWheel
               (RTGApp *this,YesNoAnswer *answer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
  }
  this_00 = (RTScene *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if (this_00 != (RTScene *)0x0) {
    bVar1 = RTScene::RTScene_IsAnyUIElementHovered(this_00,(MethodInfo *)0x0);
    if (answer != (YesNoAnswer *)0x0) {
      if (bVar1 == 0) {
        (answer->fields)._hasYes = 1;
        return;
      }
      (answer->fields)._hasNo = 1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnCanDoGizmoHoverUpdate(YesNoAnswer) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnCanDoGizmoHoverUpdate
               (RTGApp *this,YesNoAnswer *answer,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (answer != (YesNoAnswer *)0x0) {
    (answer->fields)._hasYes = 1;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnCanUndoRedo(UndoRedoOpType, YesNoAnswer) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnCanUndoRedo
               (RTGApp *this,UndoRedoOpType__Enum undoRedoOpType,YesNoAnswer *answer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if ((pOVar1 != (Object *)0x0) && (answer != (YesNoAnswer *)0x0)) {
    if (pOVar1[4].klass != (Object__Class *)0x0) {
      (answer->fields)._hasNo = 1;
      return;
    }
    (answer->fields)._hasYes = 1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnDisable(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__RTG__RTGApp__OnBeginCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                   );
    func_?(&
                    MethodInfo__RTG__RTGApp__OnEndCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                   );
    func_?(&TypeInfo__UnityEngine__Rendering__RenderPipelineManager);
    cRam_? = '\x01';
  }
  x = UnityEngine.CoreModule.dll::UnityEngine::Rendering::GraphicsSettings::
      GraphicsSettings_get_currentRenderPipeline((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  object = 
  TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>;
  if (bVar1 != 0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,System::Int32Enum]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum___ctor
              (pUVar2,(Object *)object,
               MethodInfo__RTG__RTGApp__OnBeginCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Rendering__RenderPipelineManager->_1).cctor_finished_or_no_cctor ==
        0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Rendering::RenderPipelineManager::
    RenderPipelineManager_remove_beginCameraRendering
              ((Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_ *)pUVar2,
               (MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,System::Int32Enum]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum___ctor
              (pUVar2,(Object *)object,
               MethodInfo__RTG__RTGApp__OnEndCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
               ,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Rendering::RenderPipelineManager::
    RenderPipelineManager_remove_endCameraRendering
              ((Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_ *)pUVar2,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void OnRenderObject() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnRenderObject(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._renderPipelineId == 0) {
    pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_current((MethodInfo *)0x0);
    (this->fields)._renderCamera = pCVar1;
    func_?(&(this->fields)._renderCamera,pCVar1);
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  pRVar2 = (RTGizmosEngine *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pRVar2 != (RTGizmosEngine *)0x0) {
    bVar3 = RTGizmosEngine::RTGizmosEngine_IsSceneGizmoCamera
                      (pRVar2,(this->fields)._renderCamera,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>->_1).cctor_finished_or_no_cctor ==
          0) {
        func_?();
      }
      x = (Object_1 *)
          MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                    (MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>->_1).cctor_finished_or_no_cctor
            == 0) {
          func_?();
        }
        this_00 = (RTCameraBackground *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__);
        if (this_00 == (RTCameraBackground *)0x0) goto code_?;
        RTCameraBackground::RTCameraBackground_Render_SystemCall
                  (this_00,(this->fields)._renderCamera,(MethodInfo *)0x0);
      }
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = (RTSceneGrid *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
      if (this_01 == (RTSceneGrid *)0x0) goto code_?;
      RTSceneGrid::RTSceneGrid_Render_SystemCall
                (this_01,(this->fields)._renderCamera,(MethodInfo *)0x0);
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pRVar2 = (RTGizmosEngine *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (pRVar2 != (RTGizmosEngine *)0x0) {
      RTGizmosEngine::RTGizmosEngine_Render_SystemCall
                (pRVar2,(this->fields)._renderCamera,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnViewportCameraRemoved(Camera) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnViewportCameraRemoved
               (RTGApp *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = camera[6].fields._._._.m_CachedPtr;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                (this_00,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                );
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnViewportsCameraAdded(Camera) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnViewportsCameraAdded
               (RTGApp *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                     );
      cRam_? = '\x01';
    }
    pLVar2 = camera[6].fields._._._.m_CachedPtr;
    if (pLVar2 != (List_1_System_Object_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        (pLVar2,(Object *)0x0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                        );
      if ((bVar3 == 0) &&
         (bVar3 = RTGizmosEngine::RTGizmosEngine_IsSceneGizmoCamera
                            ((RTGizmosEngine *)camera,(Camera *)0x0,(MethodInfo *)0x0), bVar3 == 0))
      {
        pLVar2 = camera[6].fields._._._.m_CachedPtr;
        if (pLVar2 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar2,(Object *)0x0,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                  );
      }
      return;
    }
  }
code_?:
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_Start(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                   );
    func_?(&TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
    func_?(&TypeInfo__RTG__CameraCanProcessInputHandler);
    func_?(&TypeInfo__RTG__CameraCanUseScrollWheelHandler);
    func_?(&TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
    func_?(&TypeInfo__RTG__CanUndoRedoHandler);
    func_?(&TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    func_?(&
                    MethodInfo__RTG__RTGApp__OnBeginCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                   );
    func_?(&MethodInfo__RTG__RTGApp__OnCanCameraProcessInput_RTG__YesNoAnswer_);
    func_?(&MethodInfo__RTG__RTGApp__OnCanCameraUseScrollWheel_RTG__YesNoAnswer_);
    func_?(&MethodInfo__RTG__RTGApp__OnCanDoGizmoHoverUpdate_RTG__YesNoAnswer_);
    func_?(&MethodInfo__RTG__RTGApp__OnCanUndoRedo_RTG__UndoRedoOpType__RTG__YesNoAnswer_);
    func_?(&
                    MethodInfo__RTG__RTGApp__OnEndCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                   );
    func_?(&MethodInfo__RTG__RTGApp__OnViewportCameraRemoved_UnityEngine__Camera_);
    func_?(&MethodInfo__RTG__RTGApp__OnViewportsCameraAdded_UnityEngine__Camera_);
    func_?(&TypeInfo__UnityEngine__Rendering__RenderPipelineManager);
    func_?(&MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::RTCameraViewports>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RLD__Unsupported_render_pipeline);
    func_?(&StringLiteral_Universal);
    cRam_? = '\x01';
  }
  (this->fields)._renderPipelineId = 0;
  pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Rendering::GraphicsSettings::
           GraphicsSettings_get_currentRenderPipeline((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Rendering::GraphicsSettings::
             GraphicsSettings_get_currentRenderPipeline((MethodInfo *)0x0);
    if (((pRVar1 == (RenderPipelineAsset *)0x0) ||
        (pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)pRVar1,(MethodInfo *)0x0),
        pTVar3 == (Type *)0x0)) ||
       (this_00 = (String *)(*(code *)(pTVar3->klass->vtable).ToString.method)(pTVar3),
       this_00 == (String *)0x0)) goto code_?;
    bVar2 = mscorlib.dll::System::String::String_Contains
                      (this_00,StringLiteral_Universal,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_RLD__Unsupported_render_pipeline,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
    }
    else {
      (this->fields)._renderPipelineId = 1;
    }
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = (RTUndoRedo *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  value = (CanUndoRedoHandler *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            ((UnityAction_2_System_Int32_System_Int32_ *)value,(Object *)this,
             MethodInfo__RTG__RTGApp__OnCanUndoRedo_RTG__UndoRedoOpType__RTG__YesNoAnswer_,
             (MethodInfo *)0x0);
  if (this_01 == (RTUndoRedo *)0x0) goto code_?;
  RTUndoRedo::RTUndoRedo_add_CanUndoRedo(this_01,value,(MethodInfo *)0x0);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  b = (Delegate *)func_?();
  pMVar5 = MethodInfo__RTG__RTGApp__OnCanCameraProcessInput_RTG__YesNoAnswer_;
  (b->fields).method_ptr =
       MethodInfo__RTG__RTGApp__OnCanCameraProcessInput_RTG__YesNoAnswer_->virtualMethodPointer;
  object = &(b->fields).m_target;
  (b->fields).method = pMVar5;
  (b->fields).m_target = (Object *)this;
  func_?();
  uVar6 = pMVar5->parameters_count;
  (b->fields).method_code = b;
  cVar7 = func_?();
  if (cVar7 == '\0') {
    if (uVar6 == 0) {
      if ((b->fields).method_is_virtual == 0) {
        puVar8 = &UNK_?;
      }
      else {
        cVar7 = func_?();
        if (cVar7 == '\0') {
          cVar7 = func_?();
          if (cVar7 == '\0') {
            puVar8 = &UNK_?;
          }
          else {
            puVar8 = &UNK_?;
          }
        }
        else {
          cVar7 = func_?();
          puVar8 = &UNK_?;
          if (cVar7 == '\0') {
            puVar8 = &UNK_?;
          }
        }
      }
    }
    else {
      puVar8 = (b->fields).method_ptr;
      (b->fields).method_code = (b->fields).m_target;
    }
  }
  else if (uVar6 == 1) {
    puVar8 = &UNK_?;
  }
  else {
    puVar8 = (b->fields).method_ptr;
    (b->fields).method_code = (b->fields).m_target;
  }
  (b->fields).invoke_impl = puVar8;
  (b->fields).extra_arg = &UNK_?;
  if (pOVar4 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pDVar9 = (Delegate *)pOVar4[3].monitor;
  do {
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar9,b,(MethodInfo *)0x0);
    pDVar11 = (Delegate *)0x0;
    if (pDVar10 != (Delegate *)0x0) {
      if ((CameraCanProcessInputHandler__Class *)pDVar10->klass ==
          TypeInfo__RTG__CameraCanProcessInputHandler) {
        pDVar11 = pDVar10;
      }
      pCVar12 = (CameraCanUseScrollWheelHandler__Class *)TypeInfo__RTG__CameraCanProcessInputHandler
      ;
      if (pDVar11 == (Delegate *)0x0) goto code_?;
    }
    pDVar11 = (Delegate *)func_?(&(pDVar9->fields).extra_arg,pDVar11);
    bVar13 = pDVar11 != pDVar9;
    pDVar9 = pDVar11;
  } while (bVar13);
  pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  pDVar9 = (Delegate *)func_?(TypeInfo__RTG__CameraCanUseScrollWheelHandler);
  pMVar5 = MethodInfo__RTG__RTGApp__OnCanCameraUseScrollWheel_RTG__YesNoAnswer_;
  (pDVar9->fields).method_ptr =
       MethodInfo__RTG__RTGApp__OnCanCameraUseScrollWheel_RTG__YesNoAnswer_->virtualMethodPointer;
  (pDVar9->fields).method = pMVar5;
  (pDVar9->fields).m_target = (Object *)object;
  func_?(&(pDVar9->fields).m_target,object);
  uVar6 = pMVar5->parameters_count;
  (pDVar9->fields).method_code = pDVar9;
  cVar7 = func_?(pMVar5);
  if (cVar7 == '\0') {
    if (uVar6 == 0) {
      if ((pDVar9->fields).method_is_virtual == 0) {
        puVar8 = &UNK_?;
      }
      else {
        cVar7 = func_?();
        if (cVar7 == '\0') {
          cVar7 = func_?();
          if (cVar7 == '\0') {
            puVar8 = &UNK_?;
          }
          else {
            puVar8 = &UNK_?;
          }
        }
        else {
          cVar7 = func_?();
          puVar8 = &UNK_?;
          if (cVar7 == '\0') {
            puVar8 = &UNK_?;
          }
        }
      }
    }
    else {
      puVar8 = (pDVar9->fields).method_ptr;
      (pDVar9->fields).method_code = (pDVar9->fields).m_target;
    }
  }
  else if (uVar6 == 1) {
    puVar8 = &UNK_?;
  }
  else {
    puVar8 = (pDVar9->fields).method_ptr;
    (pDVar9->fields).method_code = (pDVar9->fields).m_target;
  }
  (pDVar9->fields).invoke_impl = puVar8;
  (pDVar9->fields).extra_arg = &UNK_?;
  if (pOVar4 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar14 = pOVar4[4].klass;
  do {
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pOVar14,pDVar9,(MethodInfo *)0x0);
    pDVar11 = (Delegate *)0x0;
    if (pDVar10 != (Delegate *)0x0) {
      if ((CameraCanUseScrollWheelHandler__Class *)pDVar10->klass ==
          TypeInfo__RTG__CameraCanUseScrollWheelHandler) {
        pDVar11 = pDVar10;
      }
      pCVar12 = TypeInfo__RTG__CameraCanUseScrollWheelHandler;
      if (pDVar11 == (Delegate *)0x0) goto code_?;
    }
    ppIVar15 = &(pOVar14->_0).element_class;
    pOVar16 = (Object__Class *)func_?(ppIVar15,pDVar11);
    bVar13 = pOVar16 != pOVar14;
    pOVar14 = pOVar16;
  } while (bVar13);
  if ((TypeInfo__RTG__Singleton<RTG::RTCameraViewports>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::RTCameraViewports>);
  }
  pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__get_Get__);
  pDVar9 = (Delegate *)
            func_?(TypeInfo__RTG__RTCameraViewports__CameraAddedHandler,ppIVar15,pDVar11,
                            pOVar4);
  pMVar5 = MethodInfo__RTG__RTGApp__OnViewportsCameraAdded_UnityEngine__Camera_;
  pIVar17 = MethodInfo__RTG__RTGApp__OnViewportsCameraAdded_UnityEngine__Camera_->
           virtualMethodPointer;
  (pDVar9->fields).m_target = (Object *)object;
  (pDVar9->fields).method_ptr = pIVar17;
  (pDVar9->fields).method = pMVar5;
  func_?(&(pDVar9->fields).m_target,object);
  uVar6 = pMVar5->parameters_count;
  (pDVar9->fields).method_code = pDVar9;
  cVar7 = func_?(pMVar5);
  if (cVar7 == '\0') {
    if (uVar6 != 0) goto code_?;
    puVar8 = &UNK_?;
  }
  else if (uVar6 == 1) {
    puVar8 = &UNK_?;
  }
  else {
code_?:
    (pDVar9->fields).method_code = (pDVar9->fields).m_target;
    puVar8 = (pDVar9->fields).method_ptr;
  }
  (pDVar9->fields).invoke_impl = puVar8;
  (pDVar9->fields).extra_arg = &UNK_?;
  if (pOVar4 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar14 = pOVar4[1].klass;
  do {
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pOVar14,pDVar9,(MethodInfo *)0x0);
    pDVar11 = (Delegate *)0x0;
    if (pDVar10 != (Delegate *)0x0) {
      if ((RTCameraViewports_CameraAddedHandler__Class *)pDVar10->klass ==
          TypeInfo__RTG__RTCameraViewports__CameraAddedHandler) {
        pDVar11 = pDVar10;
      }
      pCVar12 = (CameraCanUseScrollWheelHandler__Class *)
                TypeInfo__RTG__RTCameraViewports__CameraAddedHandler;
      if (pDVar11 == (Delegate *)0x0) goto code_?;
    }
    ppcVar18 = &(pOVar14->_0).name;
    pOVar16 = (Object__Class *)func_?(ppcVar18,pDVar11);
    bVar13 = pOVar16 != pOVar14;
    pOVar14 = pOVar16;
  } while (bVar13);
  pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__get_Get__);
  pDVar9 = (Delegate *)
            func_?(TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler,ppcVar18,pDVar11,
                            pOVar4);
  pMVar5 = MethodInfo__RTG__RTGApp__OnViewportCameraRemoved_UnityEngine__Camera_;
  pIVar17 = MethodInfo__RTG__RTGApp__OnViewportCameraRemoved_UnityEngine__Camera_->
           virtualMethodPointer;
  (pDVar9->fields).m_target = (Object *)object;
  (pDVar9->fields).method_ptr = pIVar17;
  (pDVar9->fields).method = pMVar5;
  func_?(&(pDVar9->fields).m_target,object);
  uVar6 = pMVar5->parameters_count;
  (pDVar9->fields).method_code = pDVar9;
  cVar7 = func_?(pMVar5);
  if (cVar7 == '\0') {
    if (uVar6 != 0) goto code_?;
    puVar8 = &UNK_?;
  }
  else if (uVar6 == 1) {
    puVar8 = &UNK_?;
  }
  else {
code_?:
    (pDVar9->fields).method_code = (pDVar9->fields).m_target;
    puVar8 = (pDVar9->fields).method_ptr;
  }
  (pDVar9->fields).invoke_impl = puVar8;
  (pDVar9->fields).extra_arg = &UNK_?;
  if (pOVar4 != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar11 = (Delegate *)pOVar4[1].monitor;
    do {
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar11,pDVar9,(MethodInfo *)0x0);
      pDVar19 = (Delegate *)0x0;
      if (pDVar10 != (Delegate *)0x0) {
        if ((RTCameraViewports_CameraRemovedHandler__Class *)pDVar10->klass ==
            TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler) {
          pDVar19 = pDVar10;
        }
        pCVar12 = (CameraCanUseScrollWheelHandler__Class *)
                  TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler;
        if (pDVar19 == (Delegate *)0x0) goto code_?;
      }
      pDVar10 = (Delegate *)func_?(&(pDVar11->fields).invoke_impl,pDVar19);
      bVar13 = pDVar10 != pDVar11;
      pDVar11 = pDVar10;
    } while (bVar13);
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    }
    this_02 = (RTScene *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    }
    pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (this_02 != (RTScene *)0x0) {
      RTScene::RTScene_RegisterHoverableSceneEntityContainer
                (this_02,(IHoverableSceneEntityContainer *)pOVar4,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
      }
      this_03 = (RTSceneGrid *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
      if (this_03 != (RTSceneGrid *)0x0) {
        RTSceneGrid::RTSceneGrid_Initialize_SystemCall(this_03,(MethodInfo *)0x0);
        pRVar20 = (RTGizmosEngine *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        value_00 = (GizmoEngineCanDoHoverUpdateHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)value_00,(Object *)object,
                   MethodInfo__RTG__RTGApp__OnCanDoGizmoHoverUpdate_RTG__YesNoAnswer_,
                   (MethodInfo *)0x0);
        if (pRVar20 != (RTGizmosEngine *)0x0) {
          RTGizmosEngine::RTGizmosEngine_add_CanDoHoverUpdate(pRVar20,value_00,(MethodInfo *)0x0);
          if ((b->fields).interp_invoke_impl == (void *)0x0) {
            if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
            }
            pRVar20 = (RTGizmosEngine *)
                      MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
            if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
            }
            pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                               (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
            if ((pOVar4 == (Object *)0x0) || (pRVar20 == (RTGizmosEngine *)0x0))
            goto code_?;
            RTGizmosEngine::RTGizmosEngine_CreateSceneGizmo
                      (pRVar20,(Camera *)pOVar4[4].monitor,(MethodInfo *)0x0);
          }
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
          }
          pRVar20 = (RTGizmosEngine *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
          }
          pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                             (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
          if ((pOVar4 != (Object *)0x0) && (pRVar20 != (RTGizmosEngine *)0x0)) {
            RTGizmosEngine::RTGizmosEngine_AddRenderCamera
                      (pRVar20,(Camera *)pOVar4[4].monitor,(MethodInfo *)0x0);
            RTMeshCompiler::RTMeshCompiler_CompileEntireScene((MethodInfo *)0x0);
            if ((b->fields).interp_invoke_impl != (void *)0x0) {
              pAStack21 =
                   TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
              ;
              pUVar22 = (UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ *)
                        func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,System::Int32Enum]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum___ctor
                        (pUVar22,(Object *)object,
                         MethodInfo__RTG__RTGApp__OnBeginCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Rendering__RenderPipelineManager->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Rendering::RenderPipelineManager::
              RenderPipelineManager_add_beginCameraRendering
                        ((Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_
                          *)pUVar22,(MethodInfo *)0x0);
              pUVar22 = (UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ *)
                        func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,System::Int32Enum]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum___ctor
                        (pUVar22,(Object *)object,
                         MethodInfo__RTG__RTGApp__OnEndCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                         ,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Rendering::RenderPipelineManager::
              RenderPipelineManager_add_endCameraRendering
                        ((Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_
                          *)pUVar22,(MethodInfo *)0x0);
            }
            if ((b->fields).method_code != (void *)0x0) {
              pvVar23 = (b->fields).method_code;
              pAStack21 =
                   *(Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera___Class
                     **)((int)pvVar23 + 0x14);
              (**(code **)((int)pvVar23 + 0xc))();
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pDVar10 = extraout_ECX;
  pCVar12 = (CameraCanUseScrollWheelHandler__Class *)extraout_EDX;
code_?:
  func_?(pDVar10,pCVar12);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_Update(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pRVar1 = (RTInputDevice *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pRVar1 == (RTInputDevice *)0x0) goto code_?;
  RTInputDevice::RTInputDevice_Update_SystemCall(pRVar1,(MethodInfo *)0x0);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (RTFocusCamera *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pCVar2 = (this_00->fields)._settings;
  if (pCVar2 == (CameraSettings *)0x0) goto code_?;
  if (((pCVar2->fields)._canProcessInput != 0) && ((this_00->fields)._isDoingFocus == 0)) {
    pCVar3 = (this_00->fields)._prjSwitchTranstion;
    if (pCVar3 == (CameraPrjSwitchTransition *)0x0) goto code_?;
    if (((pCVar3->fields)._transitionType == 0) && ((this_00->fields)._isDoingRotationSwitch == 0))
    {
      if ((this_00->fields).CanProcessInput != (CameraCanProcessInputHandler *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,method_00);
        pCVar4 = (this_00->fields).CanProcessInput;
        if (pCVar4 == (CameraCanProcessInputHandler *)0x0) goto code_?;
        (*(pCVar4->fields)._._.invoke_impl)();
        if (value == (Object *)0x0) goto code_?;
        if (*(char *)&value[1].klass == '\0') {
          bVar5 = false;
        }
        else {
          bVar5 = *(char *)((int)&value[1].klass + 1) == '\0';
        }
        if (!bVar5) goto code_?;
      }
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
      }
      pRVar1 = (RTInputDevice *)
               MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if (pRVar1 == (RTInputDevice *)0x0) goto code_?;
      IVar6 = RTInputDevice::RTInputDevice_get_DeviceType(pRVar1,(MethodInfo *)0x0);
      if (IVar6 == InputDeviceType__Enum_Mouse) {
        RTFocusCamera::RTFocusCamera_HandleMouseAndKeyboardInput(this_00,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  pWVar7 = (this_00->fields)._worldTransformSnapshot;
  if (pWVar7 != (WorldTransformSnapshot *)0x0) {
    bVar8 = WorldTransformSnapshot::WorldTransformSnapshot_SameAs
                      (pWVar7,(this_00->fields)._targetTransform,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      pWVar7 = (this_00->fields)._worldTransformSnapshot;
      (this_00->fields)._isObjectVisibilityDirty = 1;
      if (pWVar7 == (WorldTransformSnapshot *)0x0) goto code_?;
      WorldTransformSnapshot::WorldTransformSnapshot_Snaphot
                (pWVar7,(this_00->fields)._targetTransform,(MethodInfo *)0x0);
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    }
    this_01 = (RTScene *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if (this_01 != (RTScene *)0x0) {
      RTScene::RTScene_Update_SystemCall(this_01,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
      }
      this_02 = (RTSceneGrid *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
      if (this_02 != (RTSceneGrid *)0x0) {
        RTSceneGrid::RTSceneGrid_Update_SystemCall(this_02,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
        }
        this_03 = (RTGizmosEngine *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        if (this_03 != (RTGizmosEngine *)0x0) {
          RTGizmosEngine::RTGizmosEngine_Update_SystemCall(this_03,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this_04 = (RTUndoRedo *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
          if (this_04 != (RTUndoRedo *)0x0) {
            RTUndoRedo::RTUndoRedo_Update_SystemCall(this_04,(MethodInfo *)0x0);
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


/* RTGApp() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp__ctor(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__MonoSingleton__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
  }
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor
            ((Singleton_1_System_Object_ *)this,
             MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__MonoSingleton__);
  return;
}


/* Void add_Initialized(RTGAppInitializedHandler) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_add_Initialized
               (RTGApp *this,RTGAppInitializedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTGAppInitializedHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).Initialized;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RTGAppInitializedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__RTGAppInitializedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RTGAppInitializedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RTGAppInitializedHandler *)func_?(&(this->fields).Initialized,pDVar2,a);
    bVar5 = pRVar4 == a;
    a = pRVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_Initialized(RTGAppInitializedHandler) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_remove_Initialized
               (RTGApp *this,RTGAppInitializedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTGAppInitializedHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).Initialized;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RTGAppInitializedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__RTGAppInitializedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RTGAppInitializedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RTGAppInitializedHandler *)func_?(&(this->fields).Initialized,pDVar2,source);
    bVar5 = pRVar4 == source;
    source = pRVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}

