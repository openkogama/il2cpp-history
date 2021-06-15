
/* CubeModelingStateMachine+HoverType CurrentlyHovered() */

CubeModelingStateMachine_HoverType__Enum
Assembly-CSharp.dll::DesktopCubeModelingToolsController::
DesktopCubeModelingToolsController_CurrentlyHovered
          (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  pCVar1 = (this->fields).cubeModelingStateMachine;
  if (pCVar1 == (CubeModelingStateMachine *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    CVar3 = (*pcVar2)();
    return CVar3;
  }
  pCVar4 = (pCVar1->fields)._SelectedCube_k__BackingField;
  if (pCVar4 == (CubePickingInfo *)0x0) {
    return CubeModelingStateMachine_HoverType__Enum_None;
  }
  if (((pCVar4->fields).pickedEdgeIndex0 == 0) && ((pCVar4->fields).pickedEdgeIndex1 == 0)) {
    return CubeModelingStateMachine_HoverType__Enum_Face - ((pCVar4->fields).pickedEdge != 0);
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
    func_?(_UNK_?);
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
    DesktopCubeModelingToolsController_SetAlpha
              (this,pIVar2,(this->fields).disabledAlpha,(MethodInfo *)0x0);
    pBVar1 = (this->fields).deletecube;
    if (pBVar1 != (Button *)0x0) {
      pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                         ((Selectable *)pBVar1,(MethodInfo *)0x0);
      DesktopCubeModelingToolsController_SetAlpha
                (this,pIVar2,(this->fields).disabledAlpha,(MethodInfo *)0x0);
      pBVar1 = (this->fields).paintCube;
      if (pBVar1 != (Button *)0x0) {
        pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                           ((Selectable *)pBVar1,(MethodInfo *)0x0);
        DesktopCubeModelingToolsController_SetAlpha
                  (this,pIVar2,(this->fields).disabledAlpha,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  func_?(0);
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
    image = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                      ((Selectable *)this_00,(MethodInfo *)0x0);
    DesktopCubeModelingToolsController_SetAlpha
              (this,image,(this->fields).enabledAlpha,(MethodInfo *)0x0);
    return;
  }
  func_?();
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
  DesktopCubeModelingToolsController_SetAllToTransparent(this,(MethodInfo *)0x0);
  if (cubeTool == CubeModelingEvent__Enum_EditCubes) {
    this_01 = (this->fields).editCube;
code_?:
    if (this_01 == (Button *)0x0) goto code_?;
    image = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                      ((Selectable *)this_01,(MethodInfo *)0x0);
    DesktopCubeModelingToolsController_SetAlpha
              (this,image,(this->fields).enabledAlpha,(MethodInfo *)0x0);
  }
  else {
    if (cubeTool == CubeModelingEvent__Enum_DeleteCubes) {
      this_01 = (this->fields).deletecube;
      goto code_?;
    }
    if (cubeTool == CubeModelingEvent__Enum_PaintCubes) {
      this_01 = (this->fields).paintCube;
      goto code_?;
    }
  }
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_02 == (GameObject *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                    (this_02,(MethodInfo *)0x0);
  if (bVar2 != 0) {
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


/* Void SetupButtons() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsController::
     DesktopCubeModelingToolsController_SetupButtons
               (DesktopCubeModelingToolsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HoverCraftMotor *)(this->fields).editCube;
  if (pHVar1 != (HoverCraftMotor *)0x0) {
    pUVar2 = (UnityEvent *)
             HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__DesktopCubeModelingToolsController___SetupButtons_m__0__,
               (MethodInfo *)0x0);
    if (pUVar2 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
      pHVar1 = (HoverCraftMotor *)(this->fields).deletecube;
      if (pHVar1 != (HoverCraftMotor *)0x0) {
        pUVar2 = (UnityEvent *)
                 HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__DesktopCubeModelingToolsController___SetupButtons_m__1__,
                   (MethodInfo *)0x0);
        if (pUVar2 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
          pHVar1 = (HoverCraftMotor *)(this->fields).paintCube;
          if (pHVar1 != (HoverCraftMotor *)0x0) {
            pUVar2 = (UnityEvent *)
                     HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__DesktopCubeModelingToolsController___SetupButtons_m__2__,
                       (MethodInfo *)0x0);
            if (pUVar2 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
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
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pBVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      DesktopCubeModelingToolsController_SetButtonTransparency
                (this,(this->fields)._ActiveTool_k__BackingField,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HoverCraftMotor *)(this->fields).defaultTool;
    if ((this_00 != (HoverCraftMotor *)0x0) &&
       (unityEventBase =
             (DesktopCubeModelingToolsController *)
             HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0),
       unityEventBase != (DesktopCubeModelingToolsController *)0x0)) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (*(bool *)&(unityEventBase->fields).defaultTool != 0) {
        pCVar1 = (unityEventBase->fields).cubeModelingStateMachine;
        if (pCVar1 == (CubeModelingStateMachine *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
        PersistentCallGroup_Initialize
                  ((PersistentCallGroup *)pCVar1,(unityEventBase->fields)._._._._.m_CachedPtr,
                   (UnityEventBase *)unityEventBase,(MethodInfo *)0x0);
        *(bool *)&(unityEventBase->fields).defaultTool = 0;
      }
      pIVar7 = (unityEventBase->fields)._._._._.m_CachedPtr;
      if (pIVar7 == (InvokableCallList *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this = unityEventBase;
      if ((pIVar7->fields).m_NeedsUpdate != 0) {
        this_01 = (List_1_UnityEngine_UIVertex_ *)(pIVar7->fields).m_ExecutingCalls;
        if (this_01 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Clear__
                  );
        pLVar8 = (List_1_VoxelHit_ *)(pIVar7->fields).m_ExecutingCalls;
        if (pLVar8 == (List_1_VoxelHit_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                  (pLVar8,(IEnumerable_1_VoxelHit_ *)(pIVar7->fields).m_PersistentCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        pLVar8 = (List_1_VoxelHit_ *)(pIVar7->fields).m_ExecutingCalls;
        if (pLVar8 == (List_1_VoxelHit_ *)0x0) goto code_?;
        this = (DesktopCubeModelingToolsController *)(pIVar7->fields).m_RuntimeCalls;
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                  (pLVar8,(IEnumerable_1_VoxelHit_ *)this,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        (pIVar7->fields).m_NeedsUpdate = 0;
      }
      pBVar5 = (Button *)(pIVar7->fields).m_ExecutingCalls;
      index = 0;
      if (pBVar5 != (Button *)0x0) {
        do {
          while( true ) {
            iVar9 = index;
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pBVar5,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                               );
            if ((int)pOVar2 <= iVar9) {
              return;
            }
            pIVar10 = (InvokableCall *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pBVar5,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                                );
            if (pIVar10 == (InvokableCall *)0x0) break;
            bVar11 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
            if (((pIVar10->klass->_1).naturalAligment < bVar11) ||
               (unityEventBase = this,
               (pIVar10->klass->_1).typeHierarchy[bVar11 - 1] !=
               (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            this_02 = (InvokableCall *)0x0;
            if (bVar12) {
              this_02 = pIVar10;
            }
            if (this_02 == (InvokableCall *)0x0) break;
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      (this_02,(MethodInfo *)0x0);
            index = index + 1;
          }
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
          IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pBVar5,index,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                    );
          this = (DesktopCubeModelingToolsController *)TypeInfo__UnityEngine__Events__InvokableCall;
          this_02 = (InvokableCall *)func_?();
          if (this_02 != (InvokableCall *)0x0) goto code_?;
          pIVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pBVar5,index
                               ,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                              );
          if ((unityEventBase->fields).editCube == (Button *)0x0) {
            pBVar5 = (Button *)func_?(TypeInfo__System__Object,0);
            (unityEventBase->fields).editCube = pBVar5;
          }
          if (pIVar13 == (IEventSystemHandler *)0x0) break;
          pBVar5 = (unityEventBase->fields).editCube;
          func_?(4,pIVar13);
          index = index + 1;
        } while( true );
      }
code_?:
      func_?(0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  func_?(0);
  pOVar2 = extraout_ECX;
  pCVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pCVar3);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

