
/* Void DontEquip() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_DontEquip
               (AvatarAccessoryEquipPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarAccessoryEquipPopup->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AvatarAccessoryEquipPopup___DontEquip_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarAccessoryEquipPopup->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarAccessoryEquipPopup->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).resultCallback == (UnityAction *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_2 + 0x2c) !=
      (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_2 + 0x2c),in_stack_3)
    ;
  }
  pcVar1 = *(code **)(in_stack_2 + 8);
  method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(in_stack_2 + 0x14);
  piVar4 = *(int **)(in_stack_2 + 0x10);
  if ((short)method_00[5].key == -1) {
    func_?();
  }
  cVar5 = func_?();
  if (cVar5 == '\0') {
    if (*(char *)((int)&method_00[5].key + 2) == '\0') {
      (*pcVar1)();
      return;
    }
  }
  else if (((short)method_00[5].key != -1) &&
          (((piVar4 == (int *)0x0 || ((*(uint *)(*piVar4 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(in_stack_2 + 0xc) != 0)))) {
    cVar5 = func_?();
    if (cVar5 != '\0') {
      return;
    }
    cVar5 = func_?();
    mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::Object]
    ::KeyValuePair_2_WinningConditionType_System_Object__get_Value
              (method_00,(MethodInfo *)method_00);
    cVar6 = func_?();
    if (cVar5 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?();
      return;
    }
    if (cVar6 != '\0') {
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
      Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                (method_00,in_stack_7);
      func_?();
      return;
    }
    func_?();
    return;
  }
  (*pcVar1)();
  return;
}


/* Void Equip() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Equip
               (AvatarAccessoryEquipPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__AvatarAccessoryEquipPopup___Equip_m__0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarAccessoryEquipPopup->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__AvatarAccessoryEquipPopup___Equip_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarAccessoryEquipPopup->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarAccessoryEquipPopup->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).resultCallback == (UnityAction *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_4 + 0x2c) !=
      (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_4 + 0x2c),in_stack_5)
    ;
  }
  pcVar3 = *(code **)(in_stack_4 + 8);
  method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(in_stack_4 + 0x14);
  piVar6 = *(int **)(in_stack_4 + 0x10);
  if ((short)method_00[5].key == -1) {
    func_?();
  }
  cVar7 = func_?();
  if (cVar7 == '\0') {
    if (*(char *)((int)&method_00[5].key + 2) == '\0') {
      (*pcVar3)();
      return;
    }
  }
  else if (((short)method_00[5].key != -1) &&
          (((piVar6 == (int *)0x0 || ((*(uint *)(*piVar6 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(in_stack_4 + 0xc) != 0)))) {
    cVar7 = func_?();
    if (cVar7 != '\0') {
      return;
    }
    cVar7 = func_?();
    mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::Object]
    ::KeyValuePair_2_WinningConditionType_System_Object__get_Value
              (method_00,(MethodInfo *)method_00);
    cVar8 = func_?();
    if (cVar7 != '\0') {
      if (cVar8 != '\0') {
        func_?();
        return;
      }
      func_?();
      return;
    }
    if (cVar8 != '\0') {
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
      Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                (method_00,in_stack_9);
      func_?();
      return;
    }
    func_?();
    return;
  }
  (*pcVar3)();
  return;
}


/* Void Initialize(UnityAction, String, AccessoryDataClient, Single, Single) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Initialize
               (AvatarAccessoryEquipPopup *this,UnityAction *resultCallback,String *previewImageUrl,
               AccessoryDataClient *accessoryData,float accessoryOffset,float accessoryScale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).preview;
    if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pSVar2,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pSVar2 = (this->fields).preview;
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__AvatarAccessoryEquipPopup__OnPreviewImageDownLoaded__,
                   (MethodInfo *)0x0);
        if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
          StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                    (pSVar2,previewImageUrl,(UnityAction *)this_01,(MethodInfo *)0x0);
          (this->fields).resultCallback = resultCallback;
          this_00 = (this->fields).itemBackground;
          if (this_00 != (AccessoryItemBackground *)0x0) {
            AccessoryItemBackground::AccessoryItemBackground_Initialize
                      (this_00,accessoryData,(MethodInfo *)0x0);
            (this->fields).accessoryOffset = accessoryOffset;
            (this->fields).accessoryDataClient = accessoryData;
            (this->fields).accessoryScale = accessoryScale;
            return;
          }
        }
      }
    }
  }
  func_?(0);
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
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
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


/* Void <DontEquip>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup__DontEquip_m__2
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Equip>m__0(IAttachToBody, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup__Equip_m__0
               (AvatarAccessoryEquipPopup *this,IAttachToBody *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if (pAVar1 != (AccessoryDataClient *)0x0) {
    fVar2 = (this->fields).accessoryOffset;
    fVar3 = (this->fields).accessoryScale;
    iVar4 = (pAVar1->fields)._.sAID;
    if (x != (IAttachToBody *)0x0) {
      pIVar5 = x->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pIVar5->_1).rank;
      uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAttachToBody) {
            ppMVar8 = &(&x->klass->vtable)[pIVar5->interfaceOffsets[uVar6].offset].AttachToBody.
                       method;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      ppMVar8 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IAttachToBody,0);
code_?:
      (*(code *)*ppMVar8)(x,iVar4,fVar2,fVar3,ppMVar8[1]);
      return;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <Equip>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup__Equip_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

