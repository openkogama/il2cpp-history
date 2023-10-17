
/* CubeModelingStateMachine+HoverType CurrentlyHovered() */

CubeModelingStateMachine_HoverType__Enum
Assembly-CSharp.dll::DesktopCubeModelingToolsController::
DesktopCubeModelingToolsController_CurrentlyHovered
          (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).cubeModelingStateMachine;
  if (pCVar2 == (CubeModelingStateMachine *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    CVar6 = (*pcVar5)();
    return CVar6;
  }
  if ((pCVar2->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
    return CubeModelingStateMachine_HoverType__Enum_None;
  }
  pCVar7 = (pCVar2->fields)._SelectedCube_k__BackingField;
  if (((pCVar7->fields).pickedEdgeIndex0 == 0) && ((pCVar7->fields).pickedEdgeIndex1 == 0)) {
    return CubeModelingStateMachine_HoverType__Enum_Face - ((pCVar7->fields).pickedEdge != 0);
  }
  return CubeModelingStateMachine_HoverType__Enum_Corner;
}


/* Void Select(CubeModelingEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_Select
               (DesktopCubeModelingToolsController *this,CubeModelingEvent__Enum tool,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingEvent);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeModelingStateMachine;
  this = (DesktopCubeModelingToolsController *)tool;
  value = (Object *)func_?(TypeInfo__CubeModelingEvent,&this);
  if (this_00 != (CubeModelingStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
                (pIVar2,uStack_5,uStack_6,uStack_7,fVar3,(pIVar2->klass->vtable).set_color.method)
      ;
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
                    (pIVar2,uStack_5,uStack_6,uStack_7,fVar3,
                     (pIVar2->klass->vtable).set_color.method);
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
                        (pIVar2,uStack_5,uStack_6,uStack_7,fVar3,
                         (pIVar2->klass->vtable).set_color.method);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
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
              (image,uStack_2,uStack_3,uStack_4,alpha,(image->klass->vtable).set_color.method);
    return;
  }
  func_?();
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
  else {
    if (cubeTool != CubeModelingEvent__Enum_PaintCubes) {
      return;
    }
    this_00 = (this->fields).paintCube;
  }
  if (this_00 != (Button *)0x0) {
    pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)this_00,(MethodInfo *)0x0);
    pIStack_2 = (Image *)(this->fields).enabledAlpha;
    if (pIVar1 != (Image *)0x0) {
      pMStack_3 = (pIVar1->klass->vtable).get_color.method;
      pIStack_4 = pIVar1;
      puVar5 = (undefined4 *)(*(pIVar1->klass->vtable).get_color.methodPtr)(&pIStack_4);
      pMStack_3 = (MethodInfo *)puVar5[1];
      uStack_6 = puVar5[2];
      pIStack_4 = pIStack_2;
      (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,*puVar5,pMStack_3,uStack_6);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetToolActive(CubeModelingEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetToolActive
               (DesktopCubeModelingToolsController *this,CubeModelingEvent__Enum cubeTool,
               MethodInfo *method)

{
  CVar1 = cubeTool;
  (this->fields)._ActiveTool_k__BackingField = cubeTool;
  DesktopCubeModelingToolsController_SetButtonTransparency(this,cubeTool,(MethodInfo *)0x0);
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (cRam_? == '\0') {
        method = (MethodInfo *)&TypeInfo__CubeModelingEvent;
        cubeTool = (CubeModelingEvent__Enum)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (this->fields).cubeModelingStateMachine;
      method = (MethodInfo *)&cubeTool;
      cubeTool = CVar1;
      value = (Object *)func_?();
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupButtons() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetupButtons
               (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__13_0__);
    func_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__13_1__);
    func_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__13_2__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).editCube;
  if (pBVar1 != (Button *)0x0) {
    pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,
                 MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__13_0__,
                 (MethodInfo *)0x0);
      if (pUVar2 != (UnityEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                  (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
        pBVar1 = (this->fields).deletecube;
        if (pBVar1 != (Button *)0x0) {
          pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
          pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                   func_?(TypeInfo__UnityEngine__Events__UnityAction);
          if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar3,(Object *)this,
                       MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__13_1__,
                       (MethodInfo *)0x0);
            if (pUVar2 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
              pBVar1 = (this->fields).paintCube;
              if (pBVar1 != (Button *)0x0) {
                pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
                pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                         func_?(TypeInfo__UnityEngine__Events__UnityAction);
                if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar3,(Object *)this,
                             MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__13_2__
                             ,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEvent *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                    UnityEvent_AddListener(pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_Start
               (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingEvent);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cubeModelingStateMachine;
  if (pCVar1 != (CubeModelingStateMachine *)0x0) {
    pOVar2 = (pCVar1->fields)._.curEvent;
    if (pOVar2 != (Object *)0x0) {
      pCVar3 = TypeInfo__CubeModelingEvent;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__CubeModelingEvent->_0).element_class)
      goto code_?;
      piVar4 = (int32_t *)func_?(pOVar2);
      pBVar5 = (this->fields).defaultTool;
      (this->fields)._ActiveTool_k__BackingField = *piVar4;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pBVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        DesktopCubeModelingToolsController_SetButtonTransparency
                  (this,(this->fields)._ActiveTool_k__BackingField,(MethodInfo *)0x0);
        return;
      }
      pBVar5 = (this->fields).defaultTool;
      if ((pBVar5 != (Button *)0x0) &&
         (this_00 = (pBVar5->fields).m_OnClick, this_00 != (Button_ButtonClickedEvent *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Events__InvokableCall,unaff_EBP);
          func_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                         );
          func_?(&TypeInfo__System__Object);
          cRam_? = '\x01';
        }
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
                  UnityEventBase_PrepareInvoke((UnityEventBase *)this_00,(MethodInfo *)0x0);
        index = 0;
        if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
          func_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
code_?:
        do {
          if ((this_01->fields)._size <= index) {
            return;
          }
          RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                            );
          if (RVar8 == (RegexCharClass_SingleRange)0x0) {
code_?:
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                              );
            RVar8 = (RegexCharClass_SingleRange)func_?(RVar8);
            if (RVar8 == (RegexCharClass_SingleRange)0x0) {
              RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_01,index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                                );
              if ((this_00->fields)._.m_InvokeArray == (Object__Array *)0x0) {
                pOVar9 = (Object__Array *)func_?(TypeInfo__System__Object,0);
                (this_00->fields)._.m_InvokeArray = pOVar9;
                func_?(&(this_00->fields)._.m_InvokeArray,pOVar9);
              }
              if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
              func_?(4,RVar8,(this_00->fields)._.m_InvokeArray);
              index = index + 1;
              goto code_?;
            }
          }
          else if (((*(byte *)(*(int *)RVar8 + 0xb4) <
                     (TypeInfo__UnityEngine__Events__InvokableCall->_1).typeHierarchyDepth) ||
                   (*(InvokableCall__Class **)
                     (*(int *)(*(int *)RVar8 + 100) + -4 +
                     (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).typeHierarchyDepth * 4
                     ) != TypeInfo__UnityEngine__Events__InvokableCall)) ||
                  (RVar8 == (RegexCharClass_SingleRange)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                    ((InvokableCall *)RVar8,(MethodInfo *)0x0);
          index = index + 1;
        } while( true );
      }
    }
  }
  func_?();
  pOVar2 = extraout_ECX;
  pCVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pCVar3);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

