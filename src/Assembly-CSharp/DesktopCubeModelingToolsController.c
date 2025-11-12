
/* CubeModelingStateMachine+HoverType CurrentlyHovered() */

CubeModelingStateMachine_HoverType__Enum
Assembly-CSharp.dll::DesktopCubeModelingToolsController::
DesktopCubeModelingToolsController_CurrentlyHovered
          (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  pCVar1 = (this->fields).cubeModelingStateMachine;
  if (pCVar1 == (CubeModelingStateMachine *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    CVar3 = (*pcVar2)();
    return CVar3;
  }
  if ((pCVar1->fields)._SelectedCube_k__BackingField != (CubePickingInfo *)0x0) {
    pCVar4 = (pCVar1->fields)._SelectedCube_k__BackingField;
    if (((pCVar4->fields).pickedEdgeIndex0 == 0) && ((pCVar4->fields).pickedEdgeIndex1 == 0)) {
      return CubeModelingStateMachine_HoverType__Enum_Face - ((pCVar4->fields).pickedEdge != 0);
    }
    return CubeModelingStateMachine_HoverType__Enum_Corner;
  }
  return CubeModelingStateMachine_HoverType__Enum_None;
}


/* Void Select(CubeModelingEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_Select
               (DesktopCubeModelingToolsController *this,CubeModelingEvent__Enum tool,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelingEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cubeModelingStateMachine;
  evt = (Object *)FUN_?(TypeInfo__CubeModelingEvent,&stack0x00000010);
  if (pCVar1 == (CubeModelingStateMachine *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((pCVar1->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (pCVar1->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pCVar1->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((pCVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (pCVar1->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pCVar1->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (pCVar1->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((pCVar1->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (pCVar1->fields)._.stateName = pSVar3;
      func_?(&(pCVar1->fields)._.stateName);
      (pCVar1->fields)._.currentState = pIVar10;
      func_?(&(pCVar1->fields)._.currentState);
      (pCVar1->fields)._.nextEvent = (Object *)0x0;
      func_?(&(pCVar1->fields)._.nextEvent);
      (pCVar1->fields)._.prevEvent = (pCVar1->fields)._.curEvent;
      func_?(&pCVar1->fields);
      (pCVar1->fields)._.curEvent = evt;
      func_?(&(pCVar1->fields)._.curEvent);
      if ((pCVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(pCVar1->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((pCVar1->fields)._.clearStack == 0) {
      (pCVar1->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (pCVar1->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void SetAllToTransparent() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetAllToTransparent
               (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  pBVar1 = (this->fields).editCube;
  if (pBVar1 != (Button *)0x0) {
    pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)pBVar1,(MethodInfo *)0x0);
    fVar3 = (this->fields).disabledAlpha;
    if (pIVar2 != (Image *)0x0) {
      puVar4 = (undefined4 *)
               (*(pIVar2->klass->vtable).get_color.methodPtr)
                         (&uStack_5,pIVar2,(pIVar2->klass->vtable).get_color.method);
      uStack_5 = *puVar4;
      uStack_6 = puVar4[1];
      uStack_7 = puVar4[2];
      fStack_8 = fVar3;
      (*(pIVar2->klass->vtable).set_color.methodPtr)
                (pIVar2,&uStack_5,(pIVar2->klass->vtable).set_color.method);
      pBVar1 = (this->fields).deletecube;
      if (pBVar1 != (Button *)0x0) {
        pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                           ((Selectable *)pBVar1,(MethodInfo *)0x0);
        fVar3 = (this->fields).disabledAlpha;
        if (pIVar2 != (Image *)0x0) {
          puVar4 = (undefined4 *)
                   (*(pIVar2->klass->vtable).get_color.methodPtr)
                             (&uStack_5,pIVar2,(pIVar2->klass->vtable).get_color.method);
          uStack_5 = *puVar4;
          uStack_6 = puVar4[1];
          uStack_7 = puVar4[2];
          fStack_8 = fVar3;
          (*(pIVar2->klass->vtable).set_color.methodPtr)
                    (pIVar2,&uStack_5,(pIVar2->klass->vtable).set_color.method);
          pBVar1 = (this->fields).paintCube;
          if (pBVar1 != (Button *)0x0) {
            pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                               ((Selectable *)pBVar1,(MethodInfo *)0x0);
            fVar3 = (this->fields).disabledAlpha;
            if (pIVar2 != (Image *)0x0) {
              puVar4 = (undefined4 *)
                       (*(pIVar2->klass->vtable).get_color.methodPtr)
                                 (&uStack_5,pIVar2,(pIVar2->klass->vtable).get_color.method);
              uStack_5 = *puVar4;
              uStack_6 = puVar4[1];
              uStack_7 = puVar4[2];
              fStack_8 = fVar3;
              (*(pIVar2->klass->vtable).set_color.methodPtr)
                        (pIVar2,&uStack_5,(pIVar2->klass->vtable).set_color.method);
              pBVar1 = (this->fields).pickCubeColor;
              if (pBVar1 != (Button *)0x0) {
                pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                   ((Selectable *)pBVar1,(MethodInfo *)0x0);
                fVar3 = (this->fields).disabledAlpha;
                if (pIVar2 != (Image *)0x0) {
                  puVar4 = (undefined4 *)
                           (*(pIVar2->klass->vtable).get_color.methodPtr)
                                     (&uStack_5,pIVar2,(pIVar2->klass->vtable).get_color.method);
                  uStack_5 = *puVar4;
                  uStack_6 = puVar4[1];
                  uStack_7 = puVar4[2];
                  fStack_8 = fVar3;
                  (*(pIVar2->klass->vtable).set_color.methodPtr)
                            (pIVar2,&uStack_5,(pIVar2->klass->vtable).set_color.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetAlpha(Image, Single) */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetAlpha
               (DesktopCubeModelingToolsController *this,Image *image,float alpha,MethodInfo *method
               )

{
  if (image != (Image *)0x0) {
    puVar1 = (undefined4 *)
             (*(image->klass->vtable).get_color.methodPtr)
                       (&uStack_2,image,(image->klass->vtable).get_color.method);
    uStack_2 = *puVar1;
    uStack_3 = puVar1[1];
    uStack_4 = puVar1[2];
    fStack_5 = alpha;
    (*(image->klass->vtable).set_color.methodPtr)
              (image,&uStack_2,(image->klass->vtable).set_color.method);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetButtonTransparency(CubeModelingEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetButtonTransparency
               (DesktopCubeModelingToolsController *this,CubeModelingEvent__Enum cubeTool,
               MethodInfo *method)

{
  DesktopCubeModelingToolsController_SetAllToTransparent(this,(MethodInfo *)0x0);
  if (cubeTool == CubeModelingEvent__Enum_EditCubes) {
    this_00 = (this->fields).editCube;
  }
  else if (cubeTool == CubeModelingEvent__Enum_DeleteCubes) {
    this_00 = (this->fields).deletecube;
  }
  else if (cubeTool == CubeModelingEvent__Enum_PaintCubes) {
    this_00 = (this->fields).paintCube;
  }
  else {
    if (cubeTool == CubeModelingEvent__Enum_SprayCubes) {
      return;
    }
    if (cubeTool != CubeModelingEvent__Enum_ColorPicker) {
      return;
    }
    this_00 = (this->fields).pickCubeColor;
  }
  if (this_00 != (Button *)0x0) {
    image = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                      ((Selectable *)this_00,(MethodInfo *)0x0);
    DesktopCubeModelingToolsController_SetAlpha
              (this,image,(this->fields).enabledAlpha,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetToolActive(CubeModelingEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetToolActive
               (DesktopCubeModelingToolsController *this,CubeModelingEvent__Enum cubeTool,
               MethodInfo *method)

{
  (this->fields)._ActiveTool_k__BackingField = cubeTool;
  DesktopCubeModelingToolsController_SetButtonTransparency(this,cubeTool,(MethodInfo *)0x0);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar4 = (*pcRam_?)(pvVar2);
  if (cVar4 != '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CubeModelingEvent);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (this->fields).cubeModelingStateMachine;
    aCStackX_10[0] = cubeTool;
    value = (Object *)FUN_?(TypeInfo__CubeModelingEvent,aCStackX_10);
    if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetupButtons() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetupButtons
               (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_0__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_1__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_2__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_3__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).editCube;
  if (pBVar1 != (Button *)0x0) {
    pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction)
    ;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_0__,
               (MethodInfo *)0x0);
    if (pUVar2 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
      pBVar1 = (this->fields).deletecube;
      if (pBVar1 != (Button *)0x0) {
        pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                 FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,
                   MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_1__,
                   (MethodInfo *)0x0);
        if (pUVar2 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
          pBVar1 = (this->fields).paintCube;
          if (pBVar1 != (Button *)0x0) {
            pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
            pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                     FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar3,(Object *)this,
                       MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_2__,
                       (MethodInfo *)0x0);
            if (pUVar2 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
              pBVar1 = (this->fields).pickCubeColor;
              if (pBVar1 != (Button *)0x0) {
                pBVar4 = (pBVar1->fields).m_OnClick;
                pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                         FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar3,(Object *)this,
                           MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_3__,
                           (MethodInfo *)0x0);
                if (pBVar4 != (Button_ButtonClickedEvent *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this_00 = (InvokableCall *)
                            FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::
                  InvokableCall_add_Delegate(this_00,(UnityAction *)pNVar3,(MethodInfo *)0x0);
                  pIVar5 = (pBVar4->fields)._._.m_Calls;
                  if (pIVar5 != (InvokableCallList *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pLVar6 = (pIVar5->fields).m_RuntimeCalls;
                    if (pLVar6 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                      FUN_?(pLVar6,this_00);
                      (pIVar5->fields).m_NeedsUpdate = 1;
                      return;
                    }
                  }
                  FUN_?();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_Start
               (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelingEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cubeModelingStateMachine;
  if ((pCVar1 == (CubeModelingStateMachine *)0x0) ||
     (pOVar2 = (pCVar1->fields)._.curEvent, pOVar2 == (Object *)0x0)) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pOVar2->klass->_0).element_class != (TypeInfo__CubeModelingEvent->_0).element_class) {
    FUN_?(pOVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pBVar4 = (this->fields).defaultTool;
  (this->fields)._ActiveTool_k__BackingField = *(int32_t *)&pOVar2[1].klass;
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
  if (pBVar4 != (Button *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pBVar4->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
      pBVar4 = (this->fields).defaultTool;
      if ((pBVar4 != (Button *)0x0) &&
         (this_00 = (pBVar4->fields).m_OnClick, this_00 != (Button_ButtonClickedEvent *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar5 = UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
                 UnityEventBase_PrepareInvoke((UnityEventBase *)this_00,(MethodInfo *)0x0);
        uVar6 = 0;
        if (pLVar5 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar7 = 0x20;
code_?:
        while( true ) {
          if ((pLVar5->fields)._size <= (int)uVar6) {
            return;
          }
          if ((uint)(pLVar5->fields)._size <= uVar6) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pBVar8 = (pLVar5->fields)._items;
          if (pBVar8 == (BaseInvokableCall__Array *)0x0) goto code_?;
          if ((uint)pBVar8->max_length <= uVar6) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pIVar9 = *(InvokableCall **)((longlong)pBVar8->vector + lVar7 + -0x20);
          if (pIVar9 == (InvokableCall *)0x0) break;
          bVar10 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
          if (((pIVar9->klass->_1).naturalAligment < bVar10) ||
             ((pIVar9->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
              (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                    (pIVar9,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 8;
        }
        pIVar9 = (InvokableCall *)FUN_?(pLVar5,uVar6);
        if (pIVar9 != (InvokableCall *)0x0) {
          bVar10 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
          if ((bVar10 <= (pIVar9->klass->_1).naturalAligment) &&
             ((pIVar9->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] ==
              (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      (pIVar9,(MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 8;
            goto code_?;
          }
        }
        plVar11 = (longlong *)FUN_?(pLVar5,uVar6);
        if ((this_00->fields)._.m_InvokeArray == (Object__Array *)0x0) {
          pOVar12 = (Object__Array *)FUN_?(TypeInfo__System__Object,0);
          (this_00->fields)._.m_InvokeArray = pOVar12;
          func_?(&(this_00->fields)._.m_InvokeArray);
        }
        if (plVar11 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar11 + 0x178))
                  (plVar11,(this_00->fields)._.m_InvokeArray,*(undefined8 *)(*plVar11 + 0x180));
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
        goto code_?;
      }
      goto code_?;
    }
  }
  iVar13 = (this->fields)._ActiveTool_k__BackingField;
  DesktopCubeModelingToolsController_SetAllToTransparent(this,(MethodInfo *)0x0);
  if (iVar13 == 0) {
    pBVar4 = (this->fields).editCube;
  }
  else if (iVar13 == 1) {
    pBVar4 = (this->fields).deletecube;
  }
  else if (iVar13 == 2) {
    pBVar4 = (this->fields).paintCube;
  }
  else {
    if (iVar13 == 3) {
      return;
    }
    if (iVar13 != 4) {
      return;
    }
    pBVar4 = (this->fields).pickCubeColor;
  }
  if (pBVar4 != (Button *)0x0) {
    image = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                      ((Selectable *)pBVar4,(MethodInfo *)0x0);
    DesktopCubeModelingToolsController_SetAlpha
              (this,image,(this->fields).enabledAlpha,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SwitchToDefaultTool() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SwitchToDefaultTool
               (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  pBVar1 = (this->fields).defaultTool;
  if (pBVar1 == (Button *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pBVar1->fields).m_OnClick;
  if (this_00 == (Button_ButtonClickedEvent *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar3 = UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
           UnityEventBase_PrepareInvoke((UnityEventBase *)this_00,(MethodInfo *)0x0);
  uVar4 = 0;
  if (pLVar3 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar5 = 0x20;
code_?:
  do {
    if ((pLVar3->fields)._size <= (int)uVar4) {
      return;
    }
    if ((uint)(pLVar3->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pBVar6 = (pLVar3->fields)._items;
    if (pBVar6 == (BaseInvokableCall__Array *)0x0) goto code_?;
    if ((uint)pBVar6->max_length <= uVar4) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar7 = *(InvokableCall **)((longlong)pBVar6->vector + lVar5 + -0x20);
    if (pIVar7 != (InvokableCall *)0x0) {
      bVar8 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
      if ((bVar8 <= (pIVar7->klass->_1).naturalAligment) &&
         ((pIVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
          (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  (pIVar7,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
        goto code_?;
      }
    }
    pIVar7 = (InvokableCall *)FUN_?(pLVar3,uVar4);
    if (pIVar7 != (InvokableCall *)0x0) {
      bVar8 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
      if ((bVar8 <= (pIVar7->klass->_1).naturalAligment) &&
         ((pIVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
          (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  (pIVar7,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
        goto code_?;
      }
    }
    plVar9 = (longlong *)FUN_?(pLVar3,uVar4);
    if ((this_00->fields)._.m_InvokeArray == (Object__Array *)0x0) {
      pOVar10 = (Object__Array *)FUN_?(TypeInfo__System__Object,0);
      (this_00->fields)._.m_InvokeArray = pOVar10;
      func_?(&(this_00->fields)._.m_InvokeArray);
    }
    if (plVar9 == (longlong *)0x0) goto code_?;
    (**(code **)(*plVar9 + 0x178))
              (plVar9,(this_00->fields)._.m_InvokeArray,*(undefined8 *)(*plVar9 + 0x180));
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 8;
  } while( true );
}

