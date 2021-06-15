
/* Void OnActivate() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnActivate
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__);
  pAStack2 =
       (Action_2_Int32_EditCubeChange_ *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)0x0;
  if (pAStack2 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    if (pAStack2->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      pAStack3 = TypeInfo__System__Action<int,_EditCubeChange>;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
  return;
}


/* Void OnClosed() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnClosed
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__);
  pAVar3 = (Action_2_Int32_EditCubeChange_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)0x0;
  if (pAVar3 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
  if ((this->fields).completed != 0) {
    return;
  }
  this_00 = (this->fields).popup;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
             ,MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__);
  if (this_00 != (FirstTimeEventPopupWithProgress *)0x0) {
    this_01 = (this_00->fields)._.fader;
    targetGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (FirstTimeFadeHandler *)0x0) {
      FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                (this_01,(Action_1_UnityEngine_GameObject_ *)this,targetGameObject,(MethodInfo *)0x0
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnCubeChanged(Int32, EditCubeChange) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnCubeChanged
               (FirstTimeActivatablePointerWaitForCubeTool *this,int32_t cubeCount,
               EditCubeChange__Enum changeMade,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).checkCubeCount == 0) {
    index = 0;
    pLVar1 = (this->fields).cubeChangesToCheck;
    while (pLVar1 != (List_1_EditCubeChange_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Count__
                         );
      if ((int)pOVar2 <= index) goto code_?;
      pLVar1 = (this->fields).cubeChangesToCheck;
      if (pLVar1 == (List_1_EditCubeChange_ *)0x0) break;
      EVar3 = mscorlib.dll::System::Collections::Generic::List`1[EditCubeChange]::
              List_1_EditCubeChange__get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Item_int_
                        );
      if (EVar3 == changeMade) {
        piVar4 = &(this->fields).currentChangeCount;
        *piVar4 = *piVar4 + 1;
        goto code_?;
      }
      index = index + 1;
      pLVar1 = (this->fields).cubeChangesToCheck;
    }
  }
  else {
    (this->fields).currentChangeCount = cubeCount;
code_?:
    if ((this->fields).isShown == 0) {
      return;
    }
    pFVar5 = (this->fields).popup;
    if (pFVar5 != (FirstTimeEventPopupWithProgress *)0x0) {
      FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress_SetProgress
                (pFVar5,(float)(this->fields).currentChangeCount,
                 (float)(this->fields).numberOfChangesBeforePointer,(MethodInfo *)0x0);
      if ((this->fields).currentChangeCount < (this->fields).numberOfChangesBeforePointer) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      (this->fields).canShow = 0;
      (this->fields).completed = 1;
      if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
        func_?(TypeInfo__CubeModelTool);
      }
      pAVar6 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<int,_EditCubeChange>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)this,
                 MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                 ,MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__);
      pAVar8 = (Action_2_Int32_EditCubeChange_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
      pAVar6 = (Action_2_Int32_EditCubeChange_ *)0x0;
      if (pAVar8 != (Action_2_Int32_EditCubeChange_ *)0x0) {
        if (pAVar8->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
          pAVar6 = pAVar8;
        }
        if (pAVar6 == (Action_2_Int32_EditCubeChange_ *)0x0) {
          func_?();
          goto code_?;
        }
      }
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar6;
      pFVar5 = (this->fields).popup;
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)this,
                 MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
                 ,MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__
                );
      if (pFVar5 != (FirstTimeEventPopupWithProgress *)0x0) {
        this_00 = (pFVar5->fields)._.fader;
        targetGameObject =
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pFVar5,(MethodInfo *)0x0);
        if (this_00 != (FirstTimeFadeHandler *)0x0) {
          FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                    (this_00,(Action_1_UnityEngine_GameObject_ *)pUVar7,targetGameObject,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnDestroy
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__);
  pAStack2 =
       (Action_2_Int32_EditCubeChange_ *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)0x0;
  if (pAStack2 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    if (pAStack2->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      pAStack3 = TypeInfo__System__Action<int,_EditCubeChange>;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
  return;
}


/* Void OnPopupRemoved(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnPopupRemoved
               (FirstTimeActivatablePointerWaitForCubeTool *this,GameObject *popupGameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatablePointerWaitForCubeTool___OnPopupRemoved_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = popupGameObject;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__FirstTimeActivatablePointerWaitForCubeTool___OnPopupRemoved_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)this_01,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
    firstTimeEvent = (this->fields)._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnShow
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isShown == 0) {
    pFVar1 = (this->fields).meanwhilePopup;
    (this->fields).isShown = 1;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pFVar1 = (FirstTimeEventPopupWithProgress *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pFVar1,
                        FirstTimeEventPopupWithProgress_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopupWithProgress>_FirstTimeEventPopupWithProgress_
                       );
    (this->fields).popup = pFVar1;
    if (pFVar1 != (FirstTimeEventPopupWithProgress *)0x0) {
      FirstTimeEventPopup::FirstTimeEventPopup_SetSkippable
                ((FirstTimeEventPopup *)pFVar1,(this->fields).skipAllowed,(MethodInfo *)0x0);
      pFVar1 = (this->fields).popup;
      if ((pFVar1 != (FirstTimeEventPopupWithProgress *)0x0) &&
         (pFVar2 = (pFVar1->fields)._.fader, pFVar2 != (FirstTimeFadeHandler *)0x0)) {
        this_00 = (pFVar2->fields).canvasGroup;
        (pFVar2->fields).fadingIn = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pFVar2->fields).currentFadeInTime = 0.0;
          pFVar1 = (this->fields).popup;
          if (pFVar1 != (FirstTimeEventPopupWithProgress *)0x0) {
            FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress_SetProgress
                      (pFVar1,(float)(this->fields).currentChangeCount,
                       (float)(this->fields).numberOfChangesBeforePointer,(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
            this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_01,(Object *)this,
                       MethodInfo__FirstTimeActivatablePointerWaitForCubeTool___OnShow_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Shown_called_more_than_once,(MethodInfo *)0x0);
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnShown
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).canShow = 0;
  (this->fields).completed = 1;
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__);
  pAVar3 = (Action_2_Int32_EditCubeChange_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)0x0;
  if (pAVar3 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
  this_00 = (this->fields).popup;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
             ,(MethodInfo *)pUVar2);
  if (this_00 != (FirstTimeEventPopupWithProgress *)0x0) {
    this_01 = (this_00->fields)._.fader;
    targetGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (FirstTimeFadeHandler *)0x0) {
      FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                (this_01,(Action_1_UnityEngine_GameObject_ *)pUVar2,targetGameObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <OnShow>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool__OnShow_m__0
               (FirstTimeActivatablePointerWaitForCubeTool *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (FirstTimeEventPopupWithProgress *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnClosed__,(MethodInfo *)0x0)
    ;
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,0,this_01,0x20);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FirstTimeActivatablePointerWaitForCubeTool() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool__ctor
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  (this->fields).canShow = 1;
  (this->fields).skipAllowed = 1;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_get_CanShow
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return (this->fields).canShow != 0;
    }
  }
  return 0;
}

