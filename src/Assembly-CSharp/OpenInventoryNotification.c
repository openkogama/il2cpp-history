
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::OpenInventoryNotification::OpenInventoryNotification_Initialize
               (OpenInventoryNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 2;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__NotificationLifetime->_0).element_class) {
        FUN_?(pOVar1,TypeInfo__NotificationLifetime);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).lifeTime = *(int32_t *)&pOVar1[1].klass;
      auStackX_8[0] = 0xd;
      pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->fields).category = *(int32_t *)&pOVar1[1].klass;
        auStackX_8[0] = 0xe;
        pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar1,lRam_?);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (this->fields).slot = *(int32_t *)&pOVar1[1].klass;
          pNVar3 = (this->fields).fader;
          if (pNVar3 != (NotificationFade *)0x0) {
            this_00 = (pNVar3->fields).group;
            (pNVar3->fields).playing = 1;
            (pNVar3->fields).pauseAt = (pNVar3->fields).duration;
            if (this_00 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,0.0,(MethodInfo *)0x0);
              (pNVar3->fields).currentTime = 0.0;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void NotificationClicked() */

void Assembly-CSharp.dll::OpenInventoryNotification::OpenInventoryNotification_NotificationClicked
               (OpenInventoryNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__OpenInventoryNotification___NotificationClicked_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__OpenInventoryNotification___NotificationClicked_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
            );
  iVar1 = (*(this->klass->vtable).get_Lifetime.methodPtr)
                    (this,(this->klass->vtable).get_Lifetime.method);
  (this->fields)._.timeSinceStart = (float)(iVar1 + 1);
  return;
}


/* Void <NotificationClicked>b__7_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::OpenInventoryNotification::
     OpenInventoryNotification__NotificationClicked_b__7_0
               (OpenInventoryNotification *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

