
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
  if ((pCVar2->fields)._SelectedCube_k__BackingField != (CubePickingInfo *)0x0) {
    pCVar7 = (pCVar2->fields)._SelectedCube_k__BackingField;
    if (((pCVar7->fields).pickedEdgeIndex0 == 0) && ((pCVar7->fields).pickedEdgeIndex1 == 0)) {
      return CubeModelingStateMachine_HoverType__Enum_Face - ((pCVar7->fields).pickedEdge != 0);
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
               (*(code *)(pIVar2->klass->vtable).get_color.method)
                         (&uStack_5,pIVar2,(pIVar2->klass->vtable).set_color.methodPtr);
      uStack_5 = *puVar4;
      uStack_6 = puVar4[1];
      uStack_7 = puVar4[2];
      fStack_8 = fVar3;
      (*(code *)(pIVar2->klass->vtable).set_color.method)
                (pIVar2,uStack_5,uStack_6,uStack_7,fVar3,
                 (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
      pBVar1 = (this->fields).deletecube;
      if (pBVar1 != (Button *)0x0) {
        pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                           ((Selectable *)pBVar1,(MethodInfo *)0x0);
        fVar3 = (this->fields).disabledAlpha;
        if (pIVar2 != (Image *)0x0) {
          puVar4 = (undefined4 *)
                   (*(code *)(pIVar2->klass->vtable).get_color.method)
                             (&uStack_5,pIVar2,(pIVar2->klass->vtable).set_color.methodPtr);
          uStack_5 = *puVar4;
          uStack_6 = puVar4[1];
          uStack_7 = puVar4[2];
          fStack_8 = fVar3;
          (*(code *)(pIVar2->klass->vtable).set_color.method)
                    (pIVar2,uStack_5,uStack_6,uStack_7,fVar3,
                     (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
          pBVar1 = (this->fields).paintCube;
          if (pBVar1 != (Button *)0x0) {
            pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                               ((Selectable *)pBVar1,(MethodInfo *)0x0);
            fVar3 = (this->fields).disabledAlpha;
            if (pIVar2 != (Image *)0x0) {
              puVar4 = (undefined4 *)
                       (*(code *)(pIVar2->klass->vtable).get_color.method)
                                 (&uStack_5,pIVar2,(pIVar2->klass->vtable).set_color.methodPtr);
              uStack_5 = *puVar4;
              uStack_6 = puVar4[1];
              uStack_7 = puVar4[2];
              fStack_8 = fVar3;
              (*(code *)(pIVar2->klass->vtable).set_color.method)
                        (pIVar2,uStack_5,uStack_6,uStack_7,fVar3,
                         (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
              pBVar1 = (this->fields).pickCubeColor;
              if (pBVar1 != (Button *)0x0) {
                pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                   ((Selectable *)pBVar1,(MethodInfo *)0x0);
                fVar3 = (this->fields).disabledAlpha;
                if (pIVar2 != (Image *)0x0) {
                  puVar4 = (undefined4 *)
                           (*(code *)(pIVar2->klass->vtable).get_color.method)
                                     (&uStack_5,pIVar2,(pIVar2->klass->vtable).set_color.methodPtr)
                  ;
                  uStack_5 = *puVar4;
                  uStack_6 = puVar4[1];
                  uStack_7 = puVar4[2];
                  fStack_8 = fVar3;
                  (*(code *)(pIVar2->klass->vtable).set_color.method)
                            (pIVar2,uStack_5,uStack_6,uStack_7,fVar3,
                             (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
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
             (*(code *)(image->klass->vtable).get_color.method)
                       (&uStack_2,image,(image->klass->vtable).set_color.methodPtr);
    uStack_2 = *puVar1;
    uStack_3 = puVar1[1];
    uStack_4 = puVar1[2];
    fStack_5 = alpha;
    (*(code *)(image->klass->vtable).set_color.method)
              (image,uStack_2,uStack_3,uStack_4,alpha,
               (image->klass->vtable).get_raycastTarget.methodPtr);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void SetButtonTransparency(CubeModelingEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetButtonTransparency
               (DesktopCubeModelingToolsController *this,CubeModelingEvent__Enum cubeTool,
               MethodInfo *method)

{
  DesktopCubeModelingToolsController_SetAllToTransparent(this,(MethodInfo *)0x0);
  switch(cubeTool) {
  case CubeModelingEvent__Enum_EditCubes:
    this_01 = (this->fields).editCube;
    break;
  case CubeModelingEvent__Enum_DeleteCubes:
    this_01 = (this->fields).deletecube;
    break;
  case CubeModelingEvent__Enum_PaintCubes:
    this_01 = (this->fields).paintCube;
    break;
  default:
    goto code_?;
  case CubeModelingEvent__Enum_ColorPicker:
    this_01 = (this->fields).pickCubeColor;
  }
  if (this_01 != (Button *)0x0) {
    pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)this_01,(MethodInfo *)0x0);
    pIVar2 = (Image *)(this->fields).enabledAlpha;
    if (pIVar1 != (Image *)0x0) {
      pIStack_3 = pIVar1;
      puVar4 = (undefined4 *)(*(code *)(pIVar1->klass->vtable).get_color.method)(&pIStack_3);
      pIStack_3 = pIVar2;
      (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,*puVar4,puVar4[1],puVar4[2]);
code_?:
      return;
    }
  }
  uVar5 = func_?();
  if ((GameObject *)(uVar5 | 1) != (GameObject *)0x0) {
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      ((GameObject *)(uVar5 | 1),in_stack_7);
    if (bVar6 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (this->fields).cubeModelingStateMachine;
      value = (Object *)func_?();
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_0__);
    func_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_1__);
    func_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_2__);
    func_?(&MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_3__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).editCube;
  if (pBVar1 != (Button *)0x0) {
    pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
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
                 func_?(TypeInfo__UnityEngine__Events__UnityAction);
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
                     func_?(TypeInfo__UnityEngine__Events__UnityAction);
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
                pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
                pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                         func_?(TypeInfo__UnityEngine__Events__UnityAction);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar3,(Object *)this,
                           MethodInfo__DesktopCubeModelingToolsController___SetupButtons_b__14_3__,
                           (MethodInfo *)0x0);
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
  if ((pCVar1 != (CubeModelingStateMachine *)0x0) &&
     (pOVar2 = (pCVar1->fields)._.curEvent, pOVar2 != (Object *)0x0)) {
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
       (unityEventBase = (pBVar5->fields).m_OnClick,
       unityEventBase != (Button_ButtonClickedEvent *)0x0)) {
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
      if ((unityEventBase->fields)._._.m_CallsDirty != 0) {
        this_00 = (unityEventBase->fields)._._.m_PersistentCalls;
        if (this_00 == (PersistentCallGroup *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
        PersistentCallGroup_Initialize
                  (this_00,(unityEventBase->fields)._._.m_Calls,(UnityEventBase *)unityEventBase,
                   (MethodInfo *)0x0);
        (unityEventBase->fields)._._.m_CallsDirty = 0;
      }
      pIVar7 = (unityEventBase->fields)._._.m_Calls;
      if (pIVar7 == (InvokableCallList *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Clear__
                       );
        cRam_? = '\x01';
      }
      if ((pIVar7->fields).m_NeedsUpdate != 0) {
        pLVar8 = (pIVar7->fields).m_ExecutingCalls;
        if (pLVar8 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) goto code_?;
        iVar9 = (pLVar8->fields)._size;
        piVar4 = &(pLVar8->fields)._version;
        *piVar4 = *piVar4 + 1;
        (pLVar8->fields)._size = 0;
        if (0 < iVar9) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar8->fields)._items,0,iVar9,(MethodInfo *)0x0);
        }
        pLVar10 = (List_1_System_Object_ *)(pIVar7->fields).m_ExecutingCalls;
        if (pLVar10 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar10,(IEnumerable_1_System_Object_ *)(pIVar7->fields).m_PersistentCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        pLVar10 = (List_1_System_Object_ *)(pIVar7->fields).m_ExecutingCalls;
        if (pLVar10 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar10,(IEnumerable_1_System_Object_ *)(pIVar7->fields).m_RuntimeCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        (pIVar7->fields).m_NeedsUpdate = 0;
      }
      RVar11 = (RegexCharClass_SingleRange)(pIVar7->fields).m_ExecutingCalls;
      iVar9 = 0;
      this = (DesktopCubeModelingToolsController *)RVar11;
      if (RVar11 != (RegexCharClass_SingleRange)0x0) {
code_?:
        do {
          while( true ) {
            if (*(int *)((int)RVar11 + 0xc) <= iVar9) {
              return;
            }
            RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )RVar11,iVar9,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                               );
            if (RVar12 == (RegexCharClass_SingleRange)0x0) break;
            if ((*(byte *)(*(int *)RVar12 + 0xb8) <
                 (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment) ||
               (*(InvokableCall__Class **)
                 (*(int *)(*(int *)RVar12 + 100) + -4 +
                 (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment * 4) !=
                TypeInfo__UnityEngine__Events__InvokableCall)) {
              bVar13 = false;
            }
            else {
              bVar13 = true;
            }
            this_01.First = 0;
            this_01.Last = 0;
            if (bVar13) {
              this_01 = RVar12;
            }
            RVar11 = (RegexCharClass_SingleRange)this;
            if (this_01 == (RegexCharClass_SingleRange)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      ((InvokableCall *)this_01,(MethodInfo *)0x0);
            iVar9 = iVar9 + 1;
            RVar11 = this_01;
            this = (DesktopCubeModelingToolsController *)this_01;
          }
          this = (DesktopCubeModelingToolsController *)
                 mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            RVar11,iVar9,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
          this_02 = (InvokableCall *)func_?();
          if (this_02 == (InvokableCall *)0x0) {
            RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )RVar11,iVar9,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                               );
            if ((unityEventBase->fields)._.m_InvokeArray == (Object__Array *)0x0) {
              pOVar14 = (Object__Array *)func_?(TypeInfo__System__Object,0);
              (unityEventBase->fields)._.m_InvokeArray = pOVar14;
              func_?(&(unityEventBase->fields)._.m_InvokeArray,pOVar14);
            }
            if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
            func_?(4,RVar11,(unityEventBase->fields)._.m_InvokeArray);
            iVar9 = iVar9 + 1;
            RVar11 = (RegexCharClass_SingleRange)this;
            goto code_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                    (this_02,(MethodInfo *)0x0);
          iVar9 = iVar9 + 1;
        } while( true );
      }
code_?:
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  func_?();
  pOVar2 = extraout_ECX;
  pCVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pCVar3);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SwitchToDefaultTool() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SwitchToDefaultTool
               (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  pBVar1 = (this->fields).defaultTool;
  if (pBVar1 != (Button *)0x0) {
    unityEventBase = (pBVar1->fields).m_OnClick;
    if (unityEventBase == (Button_ButtonClickedEvent *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&TypeInfo__System__Object);
      cRam_? = '\x01';
    }
    if ((unityEventBase->fields)._._.m_CallsDirty != 0) {
      this_00 = (unityEventBase->fields)._._.m_PersistentCalls;
      if (this_00 == (PersistentCallGroup *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
      PersistentCallGroup_Initialize
                (this_00,(unityEventBase->fields)._._.m_Calls,(UnityEventBase *)unityEventBase,
                 (MethodInfo *)0x0);
      (unityEventBase->fields)._._.m_CallsDirty = 0;
    }
    pIVar2 = (unityEventBase->fields)._._.m_Calls;
    if (pIVar2 != (InvokableCallList *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((pIVar2->fields).m_NeedsUpdate != 0) {
        pLVar3 = (pIVar2->fields).m_ExecutingCalls;
        if (pLVar3 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) goto code_?;
        iVar4 = (pLVar3->fields)._size;
        piVar5 = &(pLVar3->fields)._version;
        *piVar5 = *piVar5 + 1;
        (pLVar3->fields)._size = 0;
        if (0 < iVar4) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar3->fields)._items,0,iVar4,(MethodInfo *)0x0);
        }
        pLVar6 = (List_1_System_Object_ *)(pIVar2->fields).m_ExecutingCalls;
        if (pLVar6 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar6,(IEnumerable_1_System_Object_ *)(pIVar2->fields).m_PersistentCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        pLVar6 = (List_1_System_Object_ *)(pIVar2->fields).m_ExecutingCalls;
        if (pLVar6 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar6,(IEnumerable_1_System_Object_ *)(pIVar2->fields).m_RuntimeCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        (pIVar2->fields).m_NeedsUpdate = 0;
      }
      RVar7 = (RegexCharClass_SingleRange)(pIVar2->fields).m_ExecutingCalls;
      iVar4 = 0;
      this = (DesktopCubeModelingToolsController *)RVar7;
      if (RVar7 != (RegexCharClass_SingleRange)0x0) {
code_?:
        do {
          while( true ) {
            if (*(int *)((int)RVar7 + 0xc) <= iVar4) {
              return;
            }
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               RVar7,iVar4,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                              );
            if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
            if ((*(byte *)(*(int *)RVar8 + 0xb8) <
                 (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment) ||
               (*(InvokableCall__Class **)
                 (*(int *)(*(int *)RVar8 + 100) + -4 +
                 (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment * 4) !=
                TypeInfo__UnityEngine__Events__InvokableCall)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            this_01.First = 0;
            this_01.Last = 0;
            if (bVar9) {
              this_01 = RVar8;
            }
            RVar7 = (RegexCharClass_SingleRange)this;
            if (this_01 == (RegexCharClass_SingleRange)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      ((InvokableCall *)this_01,(MethodInfo *)0x0);
            iVar4 = iVar4 + 1;
            RVar7 = this_01;
            this = (DesktopCubeModelingToolsController *)this_01;
          }
          this = (DesktopCubeModelingToolsController *)
                 mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            RVar7,iVar4,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
          this_02 = (InvokableCall *)func_?();
          if (this_02 == (InvokableCall *)0x0) {
            RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )RVar7,iVar4,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                               );
            if ((unityEventBase->fields)._.m_InvokeArray == (Object__Array *)0x0) {
              pOVar10 = (Object__Array *)func_?();
              (unityEventBase->fields)._.m_InvokeArray = pOVar10;
              func_?();
            }
            if (RVar7 == (RegexCharClass_SingleRange)0x0) break;
            func_?();
            iVar4 = iVar4 + 1;
            RVar7 = (RegexCharClass_SingleRange)this;
            goto code_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                    (this_02,(MethodInfo *)0x0);
          iVar4 = iVar4 + 1;
        } while( true );
      }
    }
  }
code_?:
  uVar11 = func_?(&stack0xfffffff0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

