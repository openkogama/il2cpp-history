
/* Void Initialize(UnityAction`1[System.Boolean], String, AccessoryDataClient, String, String) */

void Assembly-CSharp.dll::AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
               (AvatarAccessoryErrorPopup *this,UnityAction_1_System_Boolean_ *resultCallback,
               String *previewImageUrl,AccessoryDataClient *accessoryData,String *header,
               String *buttonText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarAccessoryErrorPopup__OnPreviewImageDownLoaded__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).buttonText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,buttonText,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).header;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,header,(pTVar1->klass->vtable).set_text.method);
      pGVar2 = (this->fields).loadingWheel;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pSVar3 = (this->fields).preview;
        if (pSVar3 != (StreamedSpriteToImageManual *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pSVar3,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            pSVar3 = (this->fields).preview;
            this_01 = (NavMesh_OnNavMeshPreUpdate *)
                      func_?(TypeInfo__UnityEngine__Events__UnityAction);
            if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_01,(Object *)this,
                         MethodInfo__AvatarAccessoryErrorPopup__OnPreviewImageDownLoaded__,
                         (MethodInfo *)0x0);
              if (pSVar3 != (StreamedSpriteToImageManual *)0x0) {
                StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                          (pSVar3,previewImageUrl,(UnityAction *)this_01,(MethodInfo *)0x0);
                (this->fields).resultCallback = resultCallback;
                func_?(&(this->fields).resultCallback,resultCallback);
                this_00 = (this->fields).itemBackground;
                if (this_00 != (AccessoryItemBackground *)0x0) {
                  AccessoryItemBackground::AccessoryItemBackground_Initialize
                            (this_00,accessoryData,(MethodInfo *)0x0);
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


/* Void OnButtonPressed(Boolean) */

void Assembly-CSharp.dll::AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_OnButtonPressed
               (AvatarAccessoryErrorPopup *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarAccessoryErrorPopup____c___OnButtonPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryErrorPopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarAccessoryErrorPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarAccessoryErrorPopup____c);
  }
  callbackFunction = TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9__8_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__AvatarAccessoryErrorPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarAccessoryErrorPopup____c);
    }
    object = TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarAccessoryErrorPopup____c___OnButtonPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9__8_0 = callbackFunction;
    func_?(&TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9__8_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).resultCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    pUVar2 = (this->fields).resultCallback;
    (*(pUVar2->fields)._._.invoke_impl)((pUVar2->fields)._._.method_code,_confirmed);
  }
  return;
}


/* Void OnPreviewImageDownLoaded() */

void Assembly-CSharp.dll::AvatarAccessoryErrorPopup::
     AvatarAccessoryErrorPopup_OnPreviewImageDownLoaded
               (AvatarAccessoryErrorPopup *this,MethodInfo *method)

{
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).emptyFrame;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).preview;
      if (this_00 != (StreamedSpriteToImageManual *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

