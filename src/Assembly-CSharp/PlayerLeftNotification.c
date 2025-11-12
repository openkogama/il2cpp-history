
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerLeftNotification::PlayerLeftNotification_Initialize
               (PlayerLeftNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__left_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PlayerNotification::PlayerNotification_Initialize
            ((PlayerNotification *)this,data,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).playerContainer;
    auStackX_10[0] = 9;
    pOVar4 = (Object *)FUN_?(uRam_?,auStackX_10);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((pMVar3 != (MVPlayerContainer *)0x0) && (pOVar4 != (Object *)0x0)) {
        if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar4,lRam_?);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        key = *(int32_t *)&pOVar4[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar3->fields).players;
        if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                             );
          pTVar6 = (this->fields)._.NameLabel;
          if ((pOVar4 != (Object *)0x0) && (pOVar4[7].klass != (Object__Class *)0x0)) {
            pSVar7 = (String *)((pOVar4[7].klass)->_0).namespaze;
            str1 = TM::TM__(StringLiteral__left_,(MethodInfo *)0x0);
            pSVar7 = mscorlib.dll::System::String::String_Concat_4(pSVar7,str1,(MethodInfo *)0x0);
            if (pTVar6 != (Text *)0x0) {
              (*(pTVar6->klass->vtable).set_text.methodPtr)
                        (pTVar6,pSVar7,(pTVar6->klass->vtable).set_text.method);
              this_01 = (this->fields)._.tertiaryNotificationUI;
              l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                            (this,(this->klass->vtable).get_Lifetime.method);
              if (this_01 != (TertiaryNotificationUI *)0x0) {
                TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                          (this_01,(Notification *)this,l,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

