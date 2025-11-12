
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::ToggleDrawplaneHandler::ToggleDrawplaneHandler_ExecuteToggleState
               (ToggleDrawplaneHandler *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane,CONCAT71(in_register_00000011,toggleState));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if (pDVar1 != (DrawPlaneControllerUUI *)0x0) {
    DrawPlaneControllerUUI::DrawPlaneControllerUUI_ToggleDrawPlane(pDVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DrawPlane);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
    if (((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
        (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) &&
       (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0)) {
      (*(toggleCallback->fields)._._.invoke_impl)
                ((toggleCallback->fields)._._.method_code,(pWVar2->fields).isActive,
                 (toggleCallback->fields)._._.method);
      obj = (this->fields).drawPlaneControls;
      if (obj != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DrawPlane);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
           (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0))
        {
          bVar3 = (pWVar2->fields).isActive;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,bVar3,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (GameObject *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar5 = (obj->fields)._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar5,bVar3);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ToggleDrawplaneHandler::ToggleDrawplaneHandler_OnEnable
               (ToggleDrawplaneHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).toggleStatHandlerBase;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if (((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
      (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) &&
     (this_00 != (ToggleStatHandlerBase *)0x0)) {
    ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
              (this_00,(pWVar2->fields).isActive,(MethodInfo *)0x0);
    obj = (this->fields).drawPlaneControls;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__DrawPlane);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
      if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
         (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
        bVar3 = (pWVar2->fields).isActive;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar3,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (GameObject *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (obj->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,bVar3);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

