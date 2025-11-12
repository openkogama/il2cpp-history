
/* Void DetectRenderPipeline() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_DetectRenderPipeline(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Rendering__GraphicsSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RLD__Unsupported_render_pipeline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Universal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._renderPipelineId = 0;
  if (*(int *)&(TypeInfo__UnityEngine__Rendering__GraphicsSettings->_1).field_0x1c == 0) {
    FUN_?();
  }
  pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Rendering::GraphicsSettings::
           GraphicsSettings_get_currentRenderPipeline((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar1 != (RenderPipelineAsset *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Rendering__GraphicsSettings->_1).field_0x1c == 0) {
        FUN_?();
      }
      pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Rendering::GraphicsSettings::
               GraphicsSettings_get_currentRenderPipeline((MethodInfo *)0x0);
      if (((pRVar1 == (RenderPipelineAsset *)0x0) ||
          (plVar2 = (longlong *)FUN_?(&(pRVar1->klass->_0).byval_arg),
          plVar2 == (longlong *)0x0)) ||
         (this_00 = (String *)
                    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170)),
         this_00 == (String *)0x0)) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = mscorlib.dll::System::String::String_Contains
                        (this_00,StringLiteral_Universal,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        (this->fields)._renderPipelineId = 1;
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_RLD__Unsupported_render_pipeline,(MethodInfo *)0x0);
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)();
    }
  }
  return;
}


/* Void OnBeginCameraRendering(ScriptableRenderContext, Camera) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnBeginCameraRendering
               (RTGApp *this,ScriptableRenderContext context,Camera *camera,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._renderCamera = camera;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._renderCamera >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void OnCanCameraProcessInput(YesNoAnswer) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnCanCameraProcessInput
               (RTGApp *this,YesNoAnswer *answer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
    FUN_?();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnCanCameraUseScrollWheel(YesNoAnswer) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnCanCameraUseScrollWheel
               (RTGApp *this,YesNoAnswer *answer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (RTScene *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if (this_00 != (RTScene *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = RTScene::RTScene_GetHoveredUIElements(this_00,(MethodInfo *)0x0);
    if ((pLVar1 != (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) &&
       (answer != (YesNoAnswer *)0x0)) {
      if ((pLVar1->fields)._size == 0) {
        (answer->fields)._hasYes = 1;
        return;
      }
      (answer->fields)._hasNo = 1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnCanDoGizmoHoverUpdate(YesNoAnswer) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnCanDoGizmoHoverUpdate
               (RTGApp *this,YesNoAnswer *answer,MethodInfo *method)

{
  if (answer != (YesNoAnswer *)0x0) {
    (answer->fields)._hasYes = 1;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnCanUndoRedo(UndoRedoOpType, YesNoAnswer) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnCanUndoRedo
               (RTGApp *this,UndoRedoOpType__Enum undoRedoOpType,YesNoAnswer *answer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
    FUN_?();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnDisable(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Rendering__GraphicsSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTGApp__OnBeginCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTGApp__OnEndCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Rendering__GraphicsSettings->_1).field_0x1c == 0) {
    FUN_?();
  }
  pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Rendering::GraphicsSettings::
           GraphicsSettings_get_currentRenderPipeline((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar1 != (RenderPipelineAsset *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pDVar2 = (Delegate *)
               FUN_?(
                            TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                            );
      FUN_?(pDVar2,this);
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Rendering__RenderPipelineManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar3 = TypeInfo__UnityEngine__Rendering__RenderPipelineManager->static_fields->
                beginCameraRendering;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar3,pDVar2,(MethodInfo *)0x0);
        pAVar5 = 
        TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
        ;
        if (pDVar4 == (Delegate *)0x0) {
          pAVar6 = (Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_ *)0x0
          ;
        }
        else {
          pAVar6 = (Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_ *)
                   FUN_?(pDVar4,
                                 TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                                );
          if (pAVar6 == (Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_
                         *)0x0) {
            FUN_?(pDVar4,pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        ppAVar8 = &TypeInfo__UnityEngine__Rendering__RenderPipelineManager->static_fields->
                    beginCameraRendering;
        LOCK();
        pAVar9 = *ppAVar8;
        bVar10 = pAVar3 == pAVar9;
        if (bVar10) {
          *ppAVar8 = pAVar6;
          pAVar9 = pAVar3;
        }
        UNLOCK();
        pAVar6 = pAVar3;
        if (!bVar10) {
          pAVar6 = pAVar9;
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)ppAVar8 >> 0xc);
          lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
          do {
            uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
            puVar14 = (ulonglong *)(lVar12 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (ulonglong)(uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        bVar10 = pAVar6 != pAVar3;
        pAVar3 = pAVar6;
      } while (bVar10);
      pDVar2 = (Delegate *)
               FUN_?(
                            TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                            );
      FUN_?(pDVar2,this);
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Rendering__RenderPipelineManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar3 = TypeInfo__UnityEngine__Rendering__RenderPipelineManager->static_fields->
                endCameraRendering;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar3,pDVar2,(MethodInfo *)0x0);
        pAVar5 = 
        TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
        ;
        if (pDVar4 == (Delegate *)0x0) {
          pAVar6 = (Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_ *)0x0
          ;
        }
        else {
          pAVar6 = (Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_ *)
                   FUN_?(pDVar4,
                                 TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                                );
          if (pAVar6 == (Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_
                         *)0x0) {
            FUN_?(pDVar4,pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        ppAVar8 = &TypeInfo__UnityEngine__Rendering__RenderPipelineManager->static_fields->
                    endCameraRendering;
        LOCK();
        pAVar9 = *ppAVar8;
        bVar10 = pAVar3 == pAVar9;
        if (bVar10) {
          *ppAVar8 = pAVar6;
          pAVar9 = pAVar3;
        }
        UNLOCK();
        pAVar6 = pAVar3;
        if (!bVar10) {
          pAVar6 = pAVar9;
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)ppAVar8 >> 0xc);
          uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar15 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar15 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        bVar10 = pAVar6 != pAVar3;
        pAVar3 = pAVar6;
      } while (bVar10);
    }
  }
  return;
}


/* Void OnRenderObject() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnRenderObject(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__);
    LOCK();
    UNLOCK();
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    LOCK();
    UNLOCK();
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    LOCK();
    UNLOCK();
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>);
    LOCK();
    UNLOCK();
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._renderPipelineId == 0) {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_currentInternal
                        ((MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields)._renderCamera = pCVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._renderCamera >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>->_1).field_0x1c == 0) {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?();
  }
  LStack_1._list = (List_1_System_Object_ *)&UNK_?;
  pOVar8 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar8 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      LStack_1._list = (List_1_System_Object_ *)&UNK_?;
      FUN_?();
    }
    if (pOVar8[1].klass != (Object__Class *)0x0) {
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>->_1).field_0x1c == 0) {
        LStack_1._list = (List_1_System_Object_ *)&UNK_?;
        FUN_?();
      }
      LStack_1._list = (List_1_System_Object_ *)&UNK_?;
      this_03 = (RTCameraBackground *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__);
      if (this_03 == (RTCameraBackground *)0x0) goto code_?;
      LStack_1._list = (List_1_System_Object_ *)&UNK_?;
      RTCameraBackground::RTCameraBackground_Render_SystemCall
                (this_03,(this->fields)._renderCamera,(MethodInfo *)0x0);
    }
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).field_0x1c == 0) {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?();
  }
  LStack_1._list = (List_1_System_Object_ *)&UNK_?;
  this_04 = (RTSceneGrid *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
  if (this_04 != (RTSceneGrid *)0x0) {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    RTSceneGrid::RTSceneGrid_Render_SystemCall
              (this_04,(this->fields)._renderCamera,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
      LStack_1._list = (List_1_System_Object_ *)&UNK_?;
      FUN_?();
    }
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    this_05 = (RTGizmosEngine *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (this_05 != (RTGizmosEngine *)0x0) {
      pCVar2 = (this->fields)._renderCamera;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Comparison<RTG::Gizmo>,pCVar2,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Sort_System__Comparison<RTG::Gizmo>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List_System__Collections__Generic__IEnumerable<RTG::Gizmo>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__RTG__RTGizmosEngine____c__DisplayClass106_0___Render_SystemCall_b__0_RTG__Gizmo__RTG__Gizmo_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass106_0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      LStack_1._list = (List_1_System_Object_ *)0x0;
      LStack_1._index = 0;
      LStack_1._version = 0;
      LStack_1._current = (Object *)0x0;
      (this_05->fields)._pipelineStage = 2;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this_05->fields)._renderCameras != (List_1_UnityEngine_Camera_ *)0x0) {
        cVar9 = FUN_?();
        if (cVar9 == '\0') {
code_?:
          (this_05->fields)._pipelineStage = 3;
          return;
        }
        pGVar10 = (this_05->fields)._settings;
        if (pGVar10 != (GizmoEngineSettings *)0x0) {
          if ((pGVar10->fields)._enableGizmoSorting == 0) {
            pPVar11 = CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes
                                (pCVar2,(MethodInfo *)0x0);
            pLVar12 = (this_05->fields)._gizmos;
            if (pLVar12 != (List_1_RTG_Gizmo_ *)0x0) {
              if (iRam_? != 0) {
                uVar4 = (uint)((ulonglong)&pOStack_13 >> 0xc);
                lVar14 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar5 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar3 = uVar7 == *puVar5;
                  if (bVar3) {
                    *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              pLStack_15 = (List_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)(uint)(pLVar12->fields)._version << 0x20);
              uStack_16 = 0;
              LStack_1._8_8_ = pLStack_15;
              LStack_1._current = (Object *)0x0;
              pOStack_13 = (Object__Class *)0x0;
              pLStack_15 = &LStack_1;
              LStack_1._list = (List_1_System_Object_ *)pLVar12;
              while (bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                             ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                       (&LStack_1,
                                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                                       ), bVar17 != 0) {
                if ((Gizmo *)LStack_1._current == (Gizmo *)0x0) goto code_?;
                Gizmo::Gizmo_Render_SystemCall
                          ((Gizmo *)LStack_1._current,pCVar2,pPVar11,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
          else {
            pOVar8 = (Object *)FUN_?(TypeInfo__RTG__RTGizmosEngine____c__DisplayClass106_0)
            ;
            this_00 = RTGizmosEngine::RTGizmosEngine_get_RenderStageCamera
                                (this_05,(MethodInfo *)0x0);
            if ((this_00 != (Camera *)0x0) &&
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0), obj != (Transform *)0x0))
            {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOStack_13 = (Object__Class *)0x0;
              pLStack_15 = (List_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)pLStack_15 & 0xffffffff00000000);
              pvVar18 = (obj->fields)._._.m_CachedPtr;
              if (pvVar18 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
code_?:
                FUN_?();
                FUN_?();
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
              pcVar19 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                uVar20 = func_?(&UNK_?);
                FUN_?(uVar20,0);
code_?:
                FUN_?();
                FUN_?();
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
              pcRam_? = pcVar19;
              (*pcRam_?)(pvVar18,&pOStack_13);
              if (pOVar8 != (Object *)0x0) {
                pOVar8[1].klass = pOStack_13;
                *(undefined4 *)&pOVar8[1].monitor = pLStack_15._0_4_;
                pLVar12 = (this_05->fields)._gizmos;
                this_01 = (List_1_RTG_Gizmo_ *)
                          FUN_?(TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object___ctor_1
                          ((List_1_System_Object_ *)this_01,(IEnumerable_1_System_Object_ *)pLVar12,
                           MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List_System__Collections__Generic__IEnumerable<RTG::Gizmo>_
                          );
                this_02 = (Func_3_Object_Object_Int32_ *)
                          FUN_?(TypeInfo__System__Comparison<RTG::Gizmo>);
                mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
                          (this_02,pOVar8,
                           MethodInfo__RTG__RTGizmosEngine____c__DisplayClass106_0___Render_SystemCall_b__0_RTG__Gizmo__RTG__Gizmo_
                           ,(MethodInfo *)0x0);
                if (this_01 != (List_1_RTG_Gizmo_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Sort_1
                            ((List_1_System_Object_ *)this_01,(Comparison_1_Object_ *)this_02,
                             MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Sort_System__Comparison<RTG::Gizmo>_
                            );
                  pPVar11 = CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes
                                      (pCVar2,(MethodInfo *)0x0);
                  if (iRam_? != 0) {
                    uVar4 = (uint)((ulonglong)&pOStack_13 >> 0xc);
                    lVar14 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar7 = *(ulonglong *)(lVar14 + 0xADDR);
                      puVar5 = (ulonglong *)(lVar14 + 0xADDR);
                      LOCK();
                      bVar3 = uVar7 == *puVar5;
                      if (bVar3) {
                        *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar3);
                  }
                  pLStack_15 = (List_1_T_Enumerator_System_Object_ *)
                               ((ulonglong)(uint)(this_01->fields)._version << 0x20);
                  uStack_16 = 0;
                  LStack_1._8_8_ = pLStack_15;
                  LStack_1._current = (Object *)0x0;
                  pOStack_13 = (Object__Class *)0x0;
                  pLStack_15 = &LStack_1;
                  LStack_1._list = (List_1_System_Object_ *)this_01;
                  while (bVar17 = mscorlib.dll::System::Collections::Generic::
                                 List`1[T]+Enumerator[System::Object]::
                                 List_1_T_Enumerator_System_Object__MoveNext
                                           (&LStack_1,
                                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                                           ), bVar17 != 0) {
                    if ((Gizmo *)LStack_1._current == (Gizmo *)0x0) goto code_?;
                    Gizmo::Gizmo_Render_SystemCall
                              ((Gizmo *)LStack_1._current,pCVar2,pPVar11,(MethodInfo *)0x0);
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
  }
code_?:
  LStack_1._list = (List_1_System_Object_ *)&UNK_?;
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnViewportCameraRemoved(Camera) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnViewportCameraRemoved
               (RTGApp *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
    ;
    this_00 = (List_1_System_Object_ *)pOVar1[7].monitor;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      index = mscorlib.dll::System::Array::Array_IndexOf_69
                        ((this_00->fields)._items,(Object *)camera,0,(this_00->fields)._size,
                         (MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                          ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
      if (index < 0) {
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt(this_00,index,pMVar2->klass->rgctx_data[0x2b].method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnViewportsCameraAdded(Camera) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_OnViewportsCameraAdded
               (RTGApp *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                  ,camera,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar1[7].monitor != (MonitorData *)0x0) {
    cVar3 = FUN_?(pOVar1[7].monitor,camera);
    if (cVar3 == '\0') {
      if (pOVar1[7].monitor == (MonitorData *)0x0) goto code_?;
      FUN_?(pOVar1[7].monitor,camera);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_Start(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraCanProcessInputHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraCanUseScrollWheelHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CanUndoRedoHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTGApp__OnBeginCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGApp__OnCanCameraProcessInput_RTG__YesNoAnswer_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGApp__OnCanCameraUseScrollWheel_RTG__YesNoAnswer_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGApp__OnCanDoGizmoHoverUpdate_RTG__YesNoAnswer_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGApp__OnCanUndoRedo_RTG__UndoRedoOpType__RTG__YesNoAnswer_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTGApp__OnEndCameraRendering_UnityEngine__Rendering__ScriptableRenderContext__UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGApp__OnViewportCameraRemoved_UnityEngine__Camera_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGApp__OnViewportsCameraAdded_UnityEngine__Camera_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::RTCameraViewports>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RTGApp_DetectRenderPipeline(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  pDVar2 = (Delegate *)FUN_?(TypeInfo__RTG__CanUndoRedoHandler);
  pMVar3 = MethodInfo__RTG__RTGApp__OnCanUndoRedo_RTG__UndoRedoOpType__RTG__YesNoAnswer_;
  bVar4 = iRam_? != 0;
  (pDVar2->fields).method_ptr =
       MethodInfo__RTG__RTGApp__OnCanUndoRedo_RTG__UndoRedoOpType__RTG__YesNoAnswer_->
       virtualMethodPointer;
  (pDVar2->fields).method = pMVar3;
  (pDVar2->fields).m_target = (Object *)this;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pDVar2->fields).m_target >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar9 = pMVar3->parameters_count;
  (pDVar2->fields).method_code = pDVar2;
  if ((pMVar3->flags & 0x10) == 0) {
    if (this == (RTGApp *)0x0) {
      uVar10 = func_?();
      FUN_?(uVar10,0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
code_?:
    (pDVar2->fields).method_code = (pDVar2->fields).m_target;
    puVar12 = (pDVar2->fields).method_ptr;
  }
  else {
    if (uVar9 != 2) goto code_?;
    puVar12 = &UNK_?;
  }
  (pDVar2->fields).invoke_impl = puVar12;
  (pDVar2->fields).extra_arg = FUN_?;
  if (pOVar1 == (Object *)0x0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CanUndoRedoHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar13 = (Object__Class *)0x0;
  pOVar14 = pOVar1[4].klass;
  do {
    pOVar15 = (Object__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pOVar14,pDVar2,(MethodInfo *)0x0);
    pOVar16 = pOVar13;
    if (pOVar15 != (Object__Class *)0x0) {
      if ((CanUndoRedoHandler__Class *)(pOVar15->_0).image == TypeInfo__RTG__CanUndoRedoHandler) {
        pOVar16 = pOVar15;
      }
      if (pOVar16 == (Object__Class *)0x0) {
        FUN_?(pOVar15);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    LOCK();
    pOVar15 = pOVar1[4].klass;
    bVar4 = pOVar14 == pOVar15;
    if (bVar4) {
      pOVar1[4].klass = pOVar16;
      pOVar15 = pOVar14;
    }
    UNLOCK();
    pOVar16 = pOVar14;
    if (!bVar4) {
      pOVar16 = pOVar15;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(pOVar1 + 4) >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pOVar16 != pOVar14;
    pOVar14 = pOVar16;
  } while (bVar4);
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  pUVar17 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__RTG__CameraCanProcessInputHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar17,(Object *)this,
             MethodInfo__RTG__RTGApp__OnCanCameraProcessInput_RTG__YesNoAnswer_,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0x0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraCanProcessInputHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (Delegate *)pOVar1[3].monitor;
  do {
    pOVar16 = (Object__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar2,(Delegate *)pUVar17,(MethodInfo *)0x0);
    pOVar14 = pOVar13;
    if (pOVar16 != (Object__Class *)0x0) {
      if ((CameraCanProcessInputHandler__Class *)(pOVar16->_0).image ==
          TypeInfo__RTG__CameraCanProcessInputHandler) {
        pOVar14 = pOVar16;
      }
      if (pOVar14 == (Object__Class *)0x0) {
        FUN_?(pOVar16);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    LOCK();
    pDVar18 = (Delegate *)pOVar1[3].monitor;
    bVar4 = pDVar2 == pDVar18;
    if (bVar4) {
      pOVar1[3].monitor = (MonitorData *)pOVar14;
      pDVar18 = pDVar2;
    }
    UNLOCK();
    pDVar19 = pDVar2;
    if (!bVar4) {
      pDVar19 = pDVar18;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pOVar1[3].monitor >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pDVar19 != pDVar2;
    pDVar2 = pDVar19;
  } while (bVar4);
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  pUVar17 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__RTG__CameraCanUseScrollWheelHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar17,(Object *)this,
             MethodInfo__RTG__RTGApp__OnCanCameraUseScrollWheel_RTG__YesNoAnswer_,(MethodInfo *)0x0)
  ;
  if (pOVar1 == (Object *)0x0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraCanUseScrollWheelHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar14 = pOVar1[4].klass;
  do {
    pOVar15 = (Object__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pOVar14,(Delegate *)pUVar17,(MethodInfo *)0x0);
    pOVar16 = pOVar13;
    if (pOVar15 != (Object__Class *)0x0) {
      if ((CameraCanUseScrollWheelHandler__Class *)(pOVar15->_0).image ==
          TypeInfo__RTG__CameraCanUseScrollWheelHandler) {
        pOVar16 = pOVar15;
      }
      if (pOVar16 == (Object__Class *)0x0) {
        FUN_?(pOVar15);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    LOCK();
    pOVar15 = pOVar1[4].klass;
    bVar4 = pOVar14 == pOVar15;
    if (bVar4) {
      pOVar1[4].klass = pOVar16;
      pOVar15 = pOVar14;
    }
    UNLOCK();
    pOVar16 = pOVar14;
    if (!bVar4) {
      pOVar16 = pOVar15;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(pOVar1 + 4) >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pOVar16 != pOVar14;
    pOVar14 = pOVar16;
  } while (bVar4);
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::RTCameraViewports>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__get_Get__);
  pDVar2 = (Delegate *)FUN_?(TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
  pMVar3 = MethodInfo__RTG__RTGApp__OnViewportsCameraAdded_UnityEngine__Camera_;
  bVar4 = iRam_? != 0;
  (pDVar2->fields).method_ptr =
       MethodInfo__RTG__RTGApp__OnViewportsCameraAdded_UnityEngine__Camera_->virtualMethodPointer;
  (pDVar2->fields).method = pMVar3;
  (pDVar2->fields).m_target = (Object *)this;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pDVar2->fields).m_target >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar9 = pMVar3->parameters_count;
  (pDVar2->fields).method_code = pDVar2;
  if ((pMVar3->flags & 0x10) == 0) {
    if (uVar9 != 0) {
      if (this == (RTGApp *)0x0) {
        uVar10 = func_?();
        FUN_?(uVar10,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto code_?;
    }
    pcVar11 = FUN_?;
  }
  else if (uVar9 == 1) {
    pcVar11 = (code *)&UNK_?;
  }
  else {
code_?:
    (pDVar2->fields).method_code = (pDVar2->fields).m_target;
    pcVar11 = (pDVar2->fields).method_ptr;
  }
  (pDVar2->fields).invoke_impl = pcVar11;
  (pDVar2->fields).extra_arg = FUN_?;
  if (pOVar1 == (Object *)0x0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar14 = pOVar1[1].klass;
  do {
    pOVar15 = (Object__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pOVar14,pDVar2,(MethodInfo *)0x0);
    pOVar16 = pOVar13;
    if (pOVar15 != (Object__Class *)0x0) {
      if ((RTCameraViewports_CameraAddedHandler__Class *)(pOVar15->_0).image ==
          TypeInfo__RTG__RTCameraViewports__CameraAddedHandler) {
        pOVar16 = pOVar15;
      }
      if (pOVar16 == (Object__Class *)0x0) {
        FUN_?(pOVar15);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    LOCK();
    pOVar15 = pOVar1[1].klass;
    bVar4 = pOVar14 == pOVar15;
    if (bVar4) {
      pOVar1[1].klass = pOVar16;
      pOVar15 = pOVar14;
    }
    UNLOCK();
    pOVar16 = pOVar14;
    if (!bVar4) {
      pOVar16 = pOVar15;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pOVar16 != pOVar14;
    pOVar14 = pOVar16;
  } while (bVar4);
  pOVar1 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__get_Get__);
  pDVar2 = (Delegate *)FUN_?(TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
  pMVar3 = MethodInfo__RTG__RTGApp__OnViewportCameraRemoved_UnityEngine__Camera_;
  bVar4 = iRam_? != 0;
  (pDVar2->fields).method_ptr =
       MethodInfo__RTG__RTGApp__OnViewportCameraRemoved_UnityEngine__Camera_->virtualMethodPointer;
  (pDVar2->fields).method = pMVar3;
  (pDVar2->fields).m_target = (Object *)this;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pDVar2->fields).m_target >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar9 = pMVar3->parameters_count;
  (pDVar2->fields).method_code = pDVar2;
  if ((pMVar3->flags & 0x10) == 0) {
    if (uVar9 != 0) {
      if (this == (RTGApp *)0x0) {
        uVar10 = func_?();
        FUN_?(uVar10,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto code_?;
    }
    pcVar11 = FUN_?;
  }
  else if (uVar9 == 1) {
    pcVar11 = (code *)&UNK_?;
  }
  else {
code_?:
    (pDVar2->fields).method_code = (pDVar2->fields).m_target;
    pcVar11 = (pDVar2->fields).method_ptr;
  }
  (pDVar2->fields).invoke_impl = pcVar11;
  (pDVar2->fields).extra_arg = FUN_?;
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar18 = (Delegate *)pOVar1[1].monitor;
    do {
      pOVar16 = (Object__Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine(pDVar18,pDVar2,(MethodInfo *)0x0);
      pOVar14 = pOVar13;
      if (pOVar16 != (Object__Class *)0x0) {
        if ((RTCameraViewports_CameraRemovedHandler__Class *)(pOVar16->_0).image ==
            TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler) {
          pOVar14 = pOVar16;
        }
        if (pOVar14 == (Object__Class *)0x0) {
          FUN_?(pOVar16);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      LOCK();
      pDVar19 = (Delegate *)pOVar1[1].monitor;
      bVar4 = pDVar18 == pDVar19;
      if (bVar4) {
        pOVar1[1].monitor = (MonitorData *)pOVar14;
        pDVar19 = pDVar18;
      }
      UNLOCK();
      pDVar20 = pDVar18;
      if (!bVar4) {
        pDVar20 = pDVar19;
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      bVar4 = pDVar20 != pDVar18;
      pDVar18 = pDVar20;
    } while (bVar4);
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar21 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Add_RTG__IHoverableSceneEntityContainer_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Contains_RTG__IHoverableSceneEntityContainer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar22 = pOVar1[2].monitor;
      if (pMVar22 != (MonitorData *)0x0) {
        if ((*(int *)(pMVar22 + 0x18) == 0) ||
           (iVar23 = mscorlib.dll::System::Array::Array_IndexOf_69
                               (*(Object__Array **)(pMVar22 + 0x10),pOVar21,0,
                                *(int32_t *)(pMVar22 + 0x18),
                                (MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Contains_RTG__IHoverableSceneEntityContainer_
                                 ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method),
           iVar23 == -1)) {
          pMVar3 = 
          MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Add_RTG__IHoverableSceneEntityContainer_
          ;
          this_00 = (List_1_System_Object_ *)pOVar1[2].monitor;
          if (this_00 == (List_1_System_Object_ *)0x0) goto DAT_?;
          piVar24 = &(this_00->fields)._version;
          *piVar24 = *piVar24 + 1;
          pOVar25 = (this_00->fields)._items;
          if (pOVar25 == (Object__Array *)0x0) goto DAT_?;
          uVar5 = (this_00->fields)._size;
          if (uVar5 < (uint)pOVar25->max_length) {
            (this_00->fields)._size = uVar5 + 1;
            FUN_?(pOVar25,(longlong)(int)uVar5,pOVar21);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      (this_00,pOVar21,pMVar3->klass->rgctx_data[0xe].method);
          }
        }
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
        if (pOVar1 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__IInputDevice);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__RTG__InputDeviceDoubleTapHandler);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__RTG__RTSceneGrid__OnInputDeviceDoubleTap_RTG__IInputDevice__UnityEngine__Vector2_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar21 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
          if (pOVar21 != (Object *)0x0) {
            pOVar14 = pOVar21[2].klass;
            this_01 = (InputDeviceDoubleTapHandler *)
                      FUN_?(TypeInfo__RTG__InputDeviceDoubleTapHandler);
            InputDeviceDoubleTapHandler::InputDeviceDoubleTapHandler__ctor
                      (this_01,pOVar1,
                       MethodInfo__RTG__RTSceneGrid__OnInputDeviceDoubleTap_RTG__IInputDevice__UnityEngine__Vector2_
                       ,(MethodInfo *)0x0);
            if (pOVar14 != (Object__Class *)0x0) {
              pIVar26 = (pOVar14->_0).image;
              uVar27 = 0;
              uVar28 = *(ushort *)((longlong)&pIVar26[4].nameNoExt + 6);
              if (uVar28 != 0) {
                do {
                  if (*(IInputDevice__Class **)
                       (*(longlong *)&pIVar26[2].customAttributeCount + (ulonglong)uVar27 * 0x10) ==
                      TypeInfo__RTG__IInputDevice) {
                    puVar29 = &pIVar26[4].typeCount +
                              (longlong)
                              *(int *)(*(longlong *)&pIVar26[2].customAttributeCount + 8 +
                                      (ulonglong)uVar27 * 0x10) * 4;
                    goto code_?;
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar28);
              }
              puVar29 = (uint32_t *)FUN_?(pOVar14,TypeInfo__RTG__IInputDevice,0);
code_?:
              (**(code **)puVar29)(pOVar14,this_01,*(undefined8 *)(puVar29 + 2));
              pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                  (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
              pUVar17 = (UnityAction_1_System_Object_ *)
                        FUN_?(TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (pUVar17,(Object *)this,
                         MethodInfo__RTG__RTGApp__OnCanDoGizmoHoverUpdate_RTG__YesNoAnswer_,
                         (MethodInfo *)0x0);
              if (pOVar1 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar14 = pOVar1[2].klass;
                do {
                  pOVar15 = (Object__Class *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pOVar14,(Delegate *)pUVar17,(MethodInfo *)0x0);
                  pOVar16 = pOVar13;
                  if (pOVar15 != (Object__Class *)0x0) {
                    if ((GizmoEngineCanDoHoverUpdateHandler__Class *)(pOVar15->_0).image ==
                        TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler) {
                      pOVar16 = pOVar15;
                    }
                    if (pOVar16 == (Object__Class *)0x0) {
                      FUN_?(pOVar15);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                  }
                  LOCK();
                  pOVar15 = pOVar1[2].klass;
                  bVar4 = pOVar14 == pOVar15;
                  if (bVar4) {
                    pOVar1[2].klass = pOVar16;
                    pOVar15 = pOVar14;
                  }
                  UNLOCK();
                  pOVar16 = pOVar14;
                  if (!bVar4) {
                    pOVar16 = pOVar15;
                  }
                  if (iRam_? != 0) {
                    uVar5 = (uint)((ulonglong)(pOVar1 + 2) >> 0xc);
                    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                      LOCK();
                      bVar4 = uVar7 == *puVar8;
                      if (bVar4) {
                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar4);
                  }
                  bVar4 = pOVar16 != pOVar14;
                  pOVar14 = pOVar16;
                } while (bVar4);
                this_02 = (RTGizmosEngine *)
                          MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                    (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__)
                ;
                pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                    (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
                if ((pOVar1 != (Object *)0x0) && (this_02 != (RTGizmosEngine *)0x0)) {
                  RTGizmosEngine::RTGizmosEngine_AddRenderCamera
                            (this_02,(Camera *)pOVar1[4].monitor,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
                  if (pOVar1 != (Object *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsByType<UnityEngine::GameObject>_UnityEngine__FindObjectsSortMode_____
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__UnityEngine__Object);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pOVar25 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_FindObjectsByType_2
                                        (FindObjectsSortMode__Enum_None,
                                         UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsByType<UnityEngine::GameObject>_UnityEngine__FindObjectsSortMode_____
                                        );
                    if (pOVar25 != (Object__Array *)0x0) {
                      ppOVar30 = pOVar25->vector;
                      pOVar14 = pOVar13;
                      while (uVar5 = (uint)pOVar14, (int)uVar5 < (int)pOVar25->max_length) {
                        if ((uint)pOVar25->max_length <= uVar5) {
                          FUN_?();
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        RTMeshCompiler::RTMeshCompiler_CompileForObject
                                  ((GameObject *)*ppOVar30,(MethodInfo *)0x0);
                        ppOVar30 = ppOVar30 + 1;
                        pOVar14 = (Object__Class *)(ulonglong)(uVar5 + 1);
                      }
                      if ((this->fields)._renderPipelineId != 0) {
                        pDVar2 = (Delegate *)
                                  FUN_?(
                                               TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                                               );
                        FUN_?(pDVar2,this);
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&TypeInfo__UnityEngine__Rendering__RenderPipelineManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pAVar31 = TypeInfo__UnityEngine__Rendering__RenderPipelineManager->
                                  static_fields->beginCameraRendering;
                        do {
                          pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pAVar31,pDVar2,(MethodInfo *)0x0);
                          pAVar32 = 
                          TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                          ;
                          pOVar14 = pOVar13;
                          if ((pDVar18 != (Delegate *)0x0) &&
                             (pOVar14 = (Object__Class *)
                                        FUN_?(pDVar18,
                                                  TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                                                  ), pOVar14 == (Object__Class *)0x0)) {
                            FUN_?(pDVar18,pAVar32);
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          ppAVar33 = &TypeInfo__UnityEngine__Rendering__RenderPipelineManager->
                                      static_fields->beginCameraRendering;
                          LOCK();
                          pAVar34 = *ppAVar33;
                          bVar4 = pAVar31 == pAVar34;
                          if (bVar4) {
                            *ppAVar33 = (Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_
                                         *)pOVar14;
                            pAVar34 = pAVar31;
                          }
                          UNLOCK();
                          pAVar35 = pAVar31;
                          if (!bVar4) {
                            pAVar35 = pAVar34;
                          }
                          if (iRam_? != 0) {
                            uVar5 = (uint)((ulonglong)ppAVar33 >> 0xc);
                            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                              LOCK();
                              bVar4 = uVar7 == *puVar8;
                              if (bVar4) {
                                *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar4);
                          }
                          bVar4 = pAVar35 != pAVar31;
                          pAVar31 = pAVar35;
                        } while (bVar4);
                        pDVar2 = (Delegate *)
                                  FUN_?(
                                               TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                                               );
                        FUN_?(pDVar2,this);
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&TypeInfo__UnityEngine__Rendering__RenderPipelineManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pAVar31 = TypeInfo__UnityEngine__Rendering__RenderPipelineManager->
                                  static_fields->endCameraRendering;
                        do {
                          pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pAVar31,pDVar2,(MethodInfo *)0x0);
                          pAVar32 = 
                          TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                          ;
                          pOVar14 = pOVar13;
                          if ((pDVar18 != (Delegate *)0x0) &&
                             (pOVar14 = (Object__Class *)
                                        FUN_?(pDVar18,
                                                  TypeInfo__System__Action<UnityEngine::Rendering::ScriptableRenderContext,_UnityEngine::Camera>
                                                  ), pOVar14 == (Object__Class *)0x0)) {
                            FUN_?(pDVar18,pAVar32);
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          ppAVar33 = &TypeInfo__UnityEngine__Rendering__RenderPipelineManager->
                                      static_fields->endCameraRendering;
                          LOCK();
                          pAVar34 = *ppAVar33;
                          bVar4 = pAVar31 == pAVar34;
                          if (bVar4) {
                            *ppAVar33 = (Action_2_UnityEngine_Rendering_ScriptableRenderContext_UnityEngine_Camera_
                                         *)pOVar14;
                            pAVar34 = pAVar31;
                          }
                          UNLOCK();
                          pAVar35 = pAVar31;
                          if (!bVar4) {
                            pAVar35 = pAVar34;
                          }
                          if (iRam_? != 0) {
                            uVar5 = (uint)((ulonglong)ppAVar33 >> 0xc);
                            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                              LOCK();
                              bVar4 = uVar7 == *puVar8;
                              if (bVar4) {
                                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar4);
                          }
                          bVar4 = pAVar35 != pAVar31;
                          pAVar31 = pAVar35;
                        } while (bVar4);
                      }
                      if ((this->fields).Initialized != (RTGAppInitializedHandler *)0x0) {
                        pRVar36 = (this->fields).Initialized;
                        (*(pRVar36->fields)._._.invoke_impl)
                                  ((pRVar36->fields)._._.method_code,(pRVar36->fields)._._.method);
                      }
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
DAT_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_Update(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__IInputDevice);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar1[2].klass != (Object__Class *)0x0) {
      FUN_?(0x11);
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_00 = (RTFocusCamera *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (this_00 != (RTFocusCamera *)0x0) {
        RTFocusCamera::RTFocusCamera_Update_SystemCall(this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_01 = (RTScene *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
        if (this_01 != (RTScene *)0x0) {
          RTScene::RTScene_Update_SystemCall(this_01,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).field_0x1c == 0) {
            FUN_?();
          }
          this_02 = (RTSceneGrid *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
          if (this_02 != (RTSceneGrid *)0x0) {
            RTSceneGrid::RTSceneGrid_Update_SystemCall(this_02,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_03 = (RTGizmosEngine *)
                      MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
            if (this_03 != (RTGizmosEngine *)0x0) {
              RTGizmosEngine::RTGizmosEngine_Update_SystemCall(this_03,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).field_0x1c == 0) {
                FUN_?();
              }
              pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                  (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
              if (pOVar1 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Application);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(char *)&pOVar1[4].monitor != '\0') {
                  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pcVar2 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    pcVar2 = (code *)FUN_?(&UNK_?);
                    if (pcVar2 == (code *)0x0) {
                      uVar3 = func_?(&UNK_?);
                      FUN_?(uVar3,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                  pcRam_? = pcVar2;
                  cVar4 = (*pcRam_?)(0x7a);
                  if (cVar4 != '\0') {
                    bVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                                       (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
                    if (bVar5 != 0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                                      ,0);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__RTG__IUndoRedoAction);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__RTG__YesNoAnswer);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(char *)&pOVar1[4].monitor == '\0') {
                        return;
                      }
                      if (*(int *)&pOVar1[5].monitor < 0) {
                        return;
                      }
                      pOVar6 = pOVar1[5].klass;
                      uVar7 = *(uint *)&pOVar1[5].monitor;
                      if (pOVar6 != (Object__Class *)0x0) {
                        if (*(uint *)&(pOVar6->_0).namespaze <= uVar7) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcVar8 = (pOVar6->_0).name;
                        if (pcVar8 != (char *)0x0) {
                          if (*(uint *)(pcVar8 + 0x18) <= uVar7) {
                            FUN_?();
code_?:
                            FUN_?();
                            FUN_?();
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          lVar9 = *(longlong *)(pcVar8 + (ulonglong)uVar7 * 8 + 0x20);
                          lVar10 = FUN_?();
                          if (pOVar1[4].klass != (Object__Class *)0x0) {
                            pOVar6 = pOVar1[4].klass;
                            uVar3._0_2_ = (pOVar6->_0).byval_arg.attrs;
                            uVar3._2_1_ = (pOVar6->_0).byval_arg.type;
                            uVar3._3_5_ = *(undefined5 *)&(pOVar6->_0).byval_arg.field_0xb;
                            (*(code *)(pOVar6->_0).namespaze)
                                      ((pOVar6->_0).element_class,0,lVar10,uVar3);
                          }
                          if (lVar10 != 0) {
                            if (*(char *)(lVar10 + 0x11) == '\0') {
                              *(int *)&pOVar1[5].monitor = *(int *)&pOVar1[5].monitor + -1;
                              if ((lVar9 == 0) ||
                                 (LStack_11._list = *(List_1_System_Object_ **)(lVar9 + 0x10),
                                 LStack_11._list == (List_1_System_Object_ *)0x0))
                              goto code_?;
                              if (iRam_? != 0) {
                                uVar7 = (uint)((ulonglong)&uStack_12 >> 0xc);
                                puVar13 = (ulonglong *)
                                         ((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                                do {
                                  uVar14 = *puVar13;
                                  LOCK();
                                  uVar15 = *puVar13;
                                  if (uVar14 == uVar15) {
                                    *puVar13 = uVar14 | 1L << (uVar7 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (uVar14 != uVar15);
                              }
                              pLStack_16 = (List_1_T_Enumerator_System_Object_ *)
                                           ((ulonglong)(uint)((LStack_11._list)->fields)._version <<
                                           0x20);
                              puStack_17 = (undefined *)0x0;
                              LStack_11._8_8_ = pLStack_16;
                              LStack_11._current = (Object *)0x0;
                              uStack_12 = 0;
                              pLStack_16 = &LStack_11;
                              while (bVar5 = mscorlib.dll::System::Collections::Generic::
                                              List`1[T]+Enumerator[System::Object]::
                                              List_1_T_Enumerator_System_Object__MoveNext
                                                        (&LStack_11,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                                                  ), pOVar18 = LStack_11._current, bVar5 != 0) {
                                if (pOVar1[2].klass != (Object__Class *)0x0) {
                                  pOVar6 = pOVar1[2].klass;
                                  uVar19._0_2_ = (pOVar6->_0).byval_arg.attrs;
                                  uVar19._2_1_ = (pOVar6->_0).byval_arg.type;
                                  uVar19._3_5_ = *(undefined5 *)&(pOVar6->_0).byval_arg.field_0xb;
                                  (*(code *)(pOVar6->_0).namespaze)
                                            ((pOVar6->_0).element_class,LStack_11._current,uVar19);
                                }
                                if (pOVar18 == (Object *)0x0) goto code_?;
                                FUN_?(1,TypeInfo__RTG__IUndoRedoAction,pOVar18);
                                if (pOVar1[2].monitor != (MonitorData *)0x0) {
                                  pMVar20 = pOVar1[2].monitor;
                                  (**(code **)(pMVar20 + 0x18))
                                            (*(undefined8 *)(pMVar20 + 0x40),pOVar18,
                                             *(undefined8 *)(pMVar20 + 0x28));
                                }
                              }
                            }
                            return;
                          }
                        }
                      }
code_?:
                      FUN_?();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                  pcVar2 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    pcVar2 = (code *)FUN_?(&UNK_?);
                    if (pcVar2 == (code *)0x0) {
                      uVar3 = func_?(&UNK_?);
                      FUN_?(uVar3,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                  pcRam_? = pcVar2;
                  cVar4 = (*pcRam_?)(0x79);
                  if (cVar4 != '\0') {
                    bVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                                       (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
                    if (bVar5 != 0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                                      ,0);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__RTG__IUndoRedoAction);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__RTG__YesNoAnswer);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(char *)&pOVar1[4].monitor == '\0') {
                        return;
                      }
                      pOVar6 = pOVar1[5].klass;
                      if (pOVar6 != (Object__Class *)0x0) {
                        if (*(int *)&(pOVar6->_0).namespaze == 0) {
                          return;
                        }
                        if (*(int *)&pOVar1[5].monitor == *(int *)&(pOVar6->_0).namespaze + -1) {
                          return;
                        }
                        if (*(uint *)&(pOVar6->_0).namespaze <= *(int *)&pOVar1[5].monitor + 1U) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcVar8 = (pOVar6->_0).name;
                        if (pcVar8 != (char *)0x0) {
                          lVar9 = (longlong)*(int *)&pOVar1[5].monitor + 1;
                          if (*(uint *)(pcVar8 + 0x18) <= (uint)lVar9) {
                            FUN_?();
code_?:
                            FUN_?();
                            FUN_?();
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          lVar9 = *(longlong *)(pcVar8 + lVar9 * 8 + 0x20);
                          lVar10 = FUN_?();
                          if (pOVar1[4].klass != (Object__Class *)0x0) {
                            pOVar6 = pOVar1[4].klass;
                            uVar21._0_2_ = (pOVar6->_0).byval_arg.attrs;
                            uVar21._2_1_ = (pOVar6->_0).byval_arg.type;
                            uVar21._3_5_ = *(undefined5 *)&(pOVar6->_0).byval_arg.field_0xb;
                            (*(code *)(pOVar6->_0).namespaze)
                                      ((pOVar6->_0).element_class,1,lVar10,uVar21);
                          }
                          if (lVar10 != 0) {
                            if (*(char *)(lVar10 + 0x11) != '\0') {
                              return;
                            }
                            *(int *)&pOVar1[5].monitor = *(int *)&pOVar1[5].monitor + 1;
                            if ((lVar9 != 0) &&
                               (LStack_11._list = *(List_1_System_Object_ **)(lVar9 + 0x10),
                               LStack_11._list != (List_1_System_Object_ *)0x0)) {
                              if (iRam_? != 0) {
                                uVar7 = (uint)((ulonglong)&uStack_12 >> 0xc);
                                puVar13 = (ulonglong *)
                                         ((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                                do {
                                  uVar14 = *puVar13;
                                  LOCK();
                                  uVar15 = *puVar13;
                                  if (uVar14 == uVar15) {
                                    *puVar13 = uVar14 | 1L << (uVar7 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (uVar14 != uVar15);
                              }
                              pLStack_16 = (List_1_T_Enumerator_System_Object_ *)
                                           ((ulonglong)(uint)((LStack_11._list)->fields)._version <<
                                           0x20);
                              puStack_17 = (undefined *)0x0;
                              LStack_11._8_8_ = pLStack_16;
                              LStack_11._current = (Object *)0x0;
                              uStack_12 = 0;
                              pLStack_16 = &LStack_11;
                              while( true ) {
                                bVar5 = mscorlib.dll::System::Collections::Generic::
                                         List`1[T]+Enumerator[System::Object]::
                                         List_1_T_Enumerator_System_Object__MoveNext
                                                   (&LStack_11,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                                                  );
                                pOVar18 = LStack_11._current;
                                if (bVar5 == 0) {
                                  return;
                                }
                                if (pOVar1[3].klass != (Object__Class *)0x0) {
                                  pOVar6 = pOVar1[3].klass;
                                  uVar22._0_2_ = (pOVar6->_0).byval_arg.attrs;
                                  uVar22._2_1_ = (pOVar6->_0).byval_arg.type;
                                  uVar22._3_5_ = *(undefined5 *)&(pOVar6->_0).byval_arg.field_0xb;
                                  (*(code *)(pOVar6->_0).namespaze)
                                            ((pOVar6->_0).element_class,LStack_11._current,uVar22);
                                }
                                if (pOVar18 == (Object *)0x0) break;
                                FUN_?(2,TypeInfo__RTG__IUndoRedoAction,pOVar18);
                                if (pOVar1[3].monitor != (MonitorData *)0x0) {
                                  pMVar20 = pOVar1[3].monitor;
                                  (**(code **)(pMVar20 + 0x18))
                                            (*(undefined8 *)(pMVar20 + 0x40),pOVar18,
                                             *(undefined8 *)(pMVar20 + 0x28));
                                }
                              }
                              goto code_?;
                            }
                          }
                        }
                      }
                      FUN_?();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RTGApp() */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp__ctor(RTGApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__MonoSingleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar2 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar3 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar4 = ppMVar2;
  if (lVar3 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar3 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar4;
      LOCK();
      bVar6 = uVar5 != uRam_?;
      uVar7 = uVar5;
      uVar8 = uVar5 + 1;
      if (bVar6) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar6) && (ppMVar4 = (MethodInfo **)(ulonglong)uVar7, uVar5 = uVar7, uVar7 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar3;
  puVar9 = &(pOVar1->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar9 == 1;
  if (bVar6) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar1->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar10 == 1;
  if (bVar6) {
    *puVar10 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar11 = &(pOVar1->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar5 == *psVar11;
    if (bVar6) {
      *psVar11 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar1->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar9 == 1;
      if (bVar6) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar3._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
      lVar3._4_4_ = (pOVar1->_1).cctor_started;
      if (lVar3 == 0) {
        (pOVar1->_1).initializationExceptionGCHandle = 0;
        (pOVar1->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar3 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar1->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pOVar1->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pOVar1->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar1->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar1);
      ppMVar4 = ppMVar2;
      pIVar13 = (Il2CppClass *)pOVar1;
code_?:
      do {
        if (ppMVar4 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar4 = pIVar13->methods;
            pMVar14 = *ppMVar4;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar2;
                while (ppMVar16 = ppMVar15 + 0x30528cee,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar4 = ppMVar4 + 1;
          if (ppMVar4 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar4;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar4 = ppMVar2;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar1->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar1->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar1->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar3 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar3 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar3;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar1,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar1->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void add_Initialized(RTGAppInitializedHandler) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_add_Initialized
               (RTGApp *this,RTGAppInitializedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTGAppInitializedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).Initialized;
  a = (this->fields).Initialized;
  do {
    pRVar2 = (RTGAppInitializedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RTGAppInitializedHandler *)0x0;
    if (pRVar2 != (RTGAppInitializedHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RTGAppInitializedHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RTGAppInitializedHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = a == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = a;
    }
    UNLOCK();
    pRVar3 = a;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != a;
    a = pRVar3;
  } while (bVar5);
  return;
}


/* Void remove_Initialized(RTGAppInitializedHandler) */

void Assembly-CSharp.dll::RTG::RTGApp::RTGApp_remove_Initialized
               (RTGApp *this,RTGAppInitializedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTGAppInitializedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).Initialized;
  source = (this->fields).Initialized;
  do {
    pRVar2 = (RTGAppInitializedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RTGAppInitializedHandler *)0x0;
    if (pRVar2 != (RTGAppInitializedHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RTGAppInitializedHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RTGAppInitializedHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = source == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = source;
    }
    UNLOCK();
    pRVar3 = source;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != source;
    source = pRVar3;
  } while (bVar5);
  return;
}

