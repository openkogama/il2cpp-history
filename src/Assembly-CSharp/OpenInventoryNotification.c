
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::OpenInventoryNotification::OpenInventoryNotification_Initialize
               (OpenInventoryNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(2,data._0_3_);
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 != (Pool *)0x0) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__NotificationLifetime->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?();
      (this->fields).lifeTime = *piVar3;
      pTVar1 = (Type *)func_?(CONCAT13(0xd,(int3)TypeInfo__System__Byte));
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar3 = (int32_t *)func_?();
        (this->fields).category = *piVar3;
        pTVar1 = (Type *)func_?(CONCAT13((char)((uint)TypeInfo__System__Byte >> 0x18),
                                                  CONCAT12(0xe,(short)TypeInfo__System__Byte)));
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar2 != (Pool *)0x0) {
          if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar3 = (int32_t *)func_?();
          (this->fields).slot = *piVar3;
          this_00 = (this->fields).fader;
          if (this_00 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void NotificationClicked() */

void Assembly-CSharp.dll::OpenInventoryNotification::OpenInventoryNotification_NotificationClicked
               (OpenInventoryNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__OpenInventoryNotification___NotificationClicked_m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
            );
  Notification::Notification_Close((Notification *)this,(MethodInfo *)0x0);
  return;
}


/* Void <NotificationClicked>m__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::OpenInventoryNotification::
     OpenInventoryNotification__NotificationClicked_m__0
               (OpenInventoryNotification *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).category;
  iVar2 = (this->fields).slot;
  if (x == (IPlayerInventory *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        ppMVar7 = &(&(x->klass->vtable).ActivateAtCategoryWithSlot)
                   [pIVar4->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,1);
code_?:
  (*(code *)*ppMVar7)(x,1,iVar1,iVar2,ppMVar7[1]);
  return;
}

