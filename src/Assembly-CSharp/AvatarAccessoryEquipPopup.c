
/* Void DontEquip() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_DontEquip
               (AvatarAccessoryEquipPopup *this,MethodInfo *method)

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
                    MethodInfo__AvatarAccessoryEquipPopup____c___DontEquip_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryEquipPopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarAccessoryEquipPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarAccessoryEquipPopup____c);
  }
  callbackFunction = TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__10_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__AvatarAccessoryEquipPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarAccessoryEquipPopup____c);
    }
    object = TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarAccessoryEquipPopup____c___DontEquip_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__10_0 = callbackFunction;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pUVar1 = (this->fields).resultCallback;
  if (pUVar1 != (UnityAction *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)();
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Equip() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Equip
               (AvatarAccessoryEquipPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarAccessoryEquipPopup___Equip_b__9_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarAccessoryEquipPopup____c___Equip_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryEquipPopup____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                      );
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__AvatarAccessoryEquipPopup___Equip_b__9_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pGVar2 = pGVar1;
    if ((TypeInfo__AvatarAccessoryEquipPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction_00 = TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__9_1;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pGVar1 = pGVar2;
      if ((TypeInfo__AvatarAccessoryEquipPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pGVar1 = pGVar2;
      }
      object = TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9;
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)object,
                 MethodInfo__AvatarAccessoryEquipPopup____c___Equip_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__9_1 = callbackFunction_00;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pUVar3 = (this->fields).resultCallback;
    if (pUVar3 != (UnityAction *)0x0) {
      (*(pUVar3->fields)._._.invoke_impl)();
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(UnityAction, String, AccessoryDataClient, Single, Single) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Initialize
               (AvatarAccessoryEquipPopup *this,UnityAction *resultCallback,String *previewImageUrl,
               AccessoryDataClient *accessoryData,float accessoryOffset,float accessoryScale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarAccessoryEquipPopup__OnPreviewImageDownLoaded__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).preview;
    if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pSVar2,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pSVar2 = (this->fields).preview;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,
                     MethodInfo__AvatarAccessoryEquipPopup__OnPreviewImageDownLoaded__,
                     (MethodInfo *)0x0);
          if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
            StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                      (pSVar2,previewImageUrl,(UnityAction *)this_01,(MethodInfo *)0x0);
            (this->fields).resultCallback = resultCallback;
            func_?(&(this->fields).resultCallback,resultCallback);
            this_00 = (this->fields).itemBackground;
            if (this_00 != (AccessoryItemBackground *)0x0) {
              AccessoryItemBackground::AccessoryItemBackground_Initialize
                        (this_00,accessoryData,(MethodInfo *)0x0);
              (this->fields).accessoryDataClient = accessoryData;
              func_?(&(this->fields).accessoryDataClient,accessoryData);
              (this->fields).accessoryOffset = accessoryOffset;
              (this->fields).accessoryScale = accessoryScale;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPreviewImageDownLoaded() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::
     AvatarAccessoryEquipPopup_OnPreviewImageDownLoaded
               (AvatarAccessoryEquipPopup *this,MethodInfo *method)

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


/* Void <Equip>b__9_0(IAttachToBody, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup__Equip_b__9_0
               (AvatarAccessoryEquipPopup *this,IAttachToBody *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IAttachToBody);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if (pAVar1 != (AccessoryDataClient *)0x0) {
    fVar2 = (this->fields).accessoryOffset;
    fVar3 = (this->fields).accessoryScale;
    iVar4 = (pAVar1->fields)._.sAID;
    if (x != (IAttachToBody *)0x0) {
      uVar5 = 0;
      uVar6 = (x->klass->_1).interface_offsets_count;
      if (uVar6 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAttachToBody) {
            pIVar7 = &x->klass->vtable + x->klass->interfaceOffsets[uVar5].offset;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      pIVar7 = (IAttachToBody__VTable *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IAttachToBody,0);
code_?:
      (*(pIVar7->AttachToBody).methodPtr)(x,iVar4,fVar2,fVar3,(pIVar7->AttachToBody).method);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

