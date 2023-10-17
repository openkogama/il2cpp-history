
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::OpenInventoryNotification::OpenInventoryNotification_Initialize
               (OpenInventoryNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationLifetime);
    cRam_? = '\x01';
  }
  pOVar1 = this;
  this = (OpenInventoryNotification *)CONCAT13(2,this._0_3_);
  (pOVar1->fields)._.timeSinceStart = 0.0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_01 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__NotificationLifetime,pOVar2);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__NotificationLifetime->_0).element_class)
      goto code_?;
      piVar4 = (int32_t *)func_?(pOVar2);
      (pOVar1->fields).lifeTime = *piVar4;
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar4 = (int32_t *)func_?(pOVar2);
        (pOVar1->fields).category = *piVar4;
        pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar4 = (int32_t *)func_?(pOVar2);
          (pOVar1->fields).slot = *piVar4;
          pNVar5 = (pOVar1->fields).fader;
          if (pNVar5 != (NotificationFade *)0x0) {
            (pNVar5->fields).pauseAt = (pNVar5->fields).duration;
            this_00 = (pNVar5->fields).group;
            (pNVar5->fields).playing = 1;
            if (this_00 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,0.0,(MethodInfo *)0x0);
              (pNVar5->fields).currentTime = 0.0;
              return;
            }
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void NotificationClicked() */

void Assembly-CSharp.dll::OpenInventoryNotification::OpenInventoryNotification_NotificationClicked
               (OpenInventoryNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__OpenInventoryNotification___NotificationClicked_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                      );
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__OpenInventoryNotification___NotificationClicked_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    iVar1 = (*(this->klass->vtable).get_Lifetime.methodPtr)();
    (this->fields)._.timeSinceStart = (float)(iVar1 + 1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <NotificationClicked>b__7_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::OpenInventoryNotification::
     OpenInventoryNotification__NotificationClicked_b__7_0
               (OpenInventoryNotification *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).category;
  iVar2 = (this->fields).slot;
  if (x == (IPlayerInventory *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  uVar5 = (x->klass->_1).interface_offsets_count;
  if (uVar5 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        pVVar6 = &(x->klass->vtable).ActivateAtCategoryWithSlot +
                 x->klass->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,1);
code_?:
  (*pVVar6->methodPtr)(x,1,iVar1,iVar2,pVVar6->method);
  return;
}

