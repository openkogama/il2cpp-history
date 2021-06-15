
/* Void Close() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_Close
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  pUVar1 = (this->fields).closeCallback;
  if (pUVar1 == (UnityAction *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(pUVar1->fields)._.prev;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pcVar2 = (pUVar1->fields)._._.method_ptr;
  this_01 = (pUVar1->fields)._._.method;
  pOVar3 = (pUVar1->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar4 = func_?(this_01);
  if (cVar4 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pUVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar3);
    if (cVar4 != '\0') {
      return;
    }
    method_00 = this_01;
    cVar4 = func_?();
    pOVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar6 = func_?(pOVar5);
    if (cVar4 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,pOVar3);
      return;
    }
    if (cVar6 != '\0') {
      pOVar3 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          unaff_retaddr);
      func_?(this_01->flags,pOVar3);
      return;
    }
    func_?(this_01->flags,pOVar3);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnEnable
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).prevMaterial;
  if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
    func_?(TypeInfo__MaterialsControllerEditMode);
  }
  if (uVar1 != TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial) {
    if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
      func_?(TypeInfo__MaterialsControllerEditMode);
    }
    (*(code *)(this->klass->vtable).OnMaterialChanged_1.method)
              (this,TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial,
               (this->klass->vtable).Open.methodPtr);
  }
  return;
}


/* Void OnMaterialChanged(Byte) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnMaterialChanged
               (MaterialsControllerEditMode *this,uint8_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).prevMaterial = id;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.desktopCubeModelingController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pDVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pDVar2 = (this->fields)._.desktopCubeModelingController;
    if (pDVar2 == (DesktopCubeModelingController *)0x0) goto code_?;
    DesktopCubeModelingController::DesktopCubeModelingController_SetMaterial
              (pDVar2,id,(MethodInfo *)0x0);
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields)._.materialChange;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,_id,
               MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__Invoke_unsigned_char_);
  }
  pDVar2 = (this->fields).desktopCubeModelingControllerEditMode;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pDVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pDVar2 = (this->fields).desktopCubeModelingControllerEditMode;
    if (pDVar2 == (DesktopCubeModelingController *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    DesktopCubeModelingController::DesktopCubeModelingController_SetMaterial
              (pDVar2,id,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnPop
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
    func_?(TypeInfo__MaterialsControllerEditMode);
  }
  if (TypeInfo__MaterialsControllerEditMode->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__MaterialsControllerEditMode___OnPop_m__3_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
      func_?(TypeInfo__MaterialsControllerEditMode);
    }
    TypeInfo__MaterialsControllerEditMode->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)this_01;
  }
  if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
    func_?(TypeInfo__MaterialsControllerEditMode);
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__MaterialsControllerEditMode->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
            );
  this_00 = (this->fields)._.desktopCubeModelingController;
  if (this_00 != (DesktopCubeModelingController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      (this->fields).desktopCubeModelingControllerEditMode = (DesktopCubeModelingController *)0x0;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Open(UnityAction) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_Open
               (MaterialsControllerEditMode *this,UnityAction *closeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MaterialsControllerEditMode___Open_m__0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  this_00 = (this->fields)._.desktopCubeModelingController;
  if (this_00 != (DesktopCubeModelingController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pXVar3 = (XpBoostParticlePreviewer *)
               (this->fields).desktopCubeModelingControllerEditCubeModelPrefab;
      (this->fields).closeCallback = closeCallback;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar3,
                          DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                         );
      (this->fields).desktopCubeModelingControllerEditMode = (DesktopCubeModelingController *)pXVar3
      ;
      if (pXVar3 != (XpBoostParticlePreviewer *)0x0) {
        DesktopCubeModelingController::DesktopCubeModelingController_Initialize
                  ((DesktopCubeModelingController *)pXVar3,(this->fields)._.cubeModelingStateMachine
                   ,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__MaterialsControllerEditMode->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)0x0,
                     MethodInfo__MaterialsControllerEditMode___Open_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
            func_?();
          }
          TypeInfo__MaterialsControllerEditMode->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
        }
        if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
          func_?();
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__MaterialsControllerEditMode->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar1,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__MaterialsControllerEditMode___Open_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        this_01 = (this->fields)._.cubeModelingStateMachine;
        if (this_01 != (CubeModelingStateMachine *)0x0) {
          value = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                            (this_01,(MethodInfo *)0x0);
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (this_01,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PlayModeToggleOverwrite() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::
     MaterialsControllerEditMode_PlayModeToggleOverwrite
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Ignoring,(MethodInfo *)0x0);
  return;
}


/* Transform SetActive() */

Transform *
Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_SetActive
          (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields)._.desktopCubeModelingControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                     );
  (this->fields)._.desktopCubeModelingController = (DesktopCubeModelingController *)pXVar1;
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    DesktopCubeModelingController::DesktopCubeModelingController_Initialize
              ((DesktopCubeModelingController *)pXVar1,(this->fields)._.cubeModelingStateMachine,
               (MethodInfo *)0x0);
    pCVar2 = (this->fields)._.cubeModelingStateMachine;
    if (pCVar2 != (CubeModelingStateMachine *)0x0) {
      uVar3 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                        (pCVar2,(MethodInfo *)0x0);
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (pCVar2,uVar3,(MethodInfo *)0x0);
      pCVar2 = (this->fields)._.cubeModelingStateMachine;
      if (pCVar2 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                  (pCVar2,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).OnMaterialChanged_1.method)();
        this_00 = (this->fields)._.desktopCubeModelingController;
        if (this_00 != (DesktopCubeModelingController *)0x0) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_00,(MethodInfo *)0x0);
          this_01 = (this->fields).createCubeModelController;
          pCVar2 = (this->fields)._.cubeModelingStateMachine;
          if (pCVar2 != (CubeModelingStateMachine *)0x0) {
            uVar3 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                              (pCVar2,(MethodInfo *)0x0);
            if (this_01 != (CreateCubeModelController *)0x0) {
              CreateCubeModelController::CreateCubeModelController_Initialize
                        (this_01,(MaterialsController *)this,pTVar4,uVar3,(MethodInfo *)0x0);
              return pTVar4;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pTVar4 = (Transform *)(*pcVar5)();
  return pTVar4;
}


/* Void <OnPop>m__3(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode__OnPop_m__3
               (IShortcutKeyUnRegister *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IShortcutKeyUnRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister,x,0x16);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Open>m__0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode__Open_m__0
               (MaterialsControllerEditMode *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__MaterialsControllerEditMode__PlayModeToggleOverwrite__,(MethodInfo *)0x0);
  if (x == (IShortcutKeyRegister *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister) {
        ppMVar5 = &(&x->klass->vtable)[pIVar2->interfaceOffsets[uVar3].offset].RegisterShortcutKey.
                   method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,0);
code_?:
  (*(code *)*ppMVar5)(x,0x16,0,ppMVar5[1]);
  return;
}


/* Void <Open>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode__Open_m__1
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0x12);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Open>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode__Open_m__2
               (MaterialsControllerEditMode *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).desktopCubeModelingControllerEditMode;
  if (this_00 != (DesktopCubeModelingController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__MaterialsControllerEditMode__OnPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,8,this_01,1);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

