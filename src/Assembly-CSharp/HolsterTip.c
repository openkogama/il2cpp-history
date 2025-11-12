
/* Void Show() */

void Assembly-CSharp.dll::HolsterTip::HolsterTip_Show(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Press__Q__to_toggle_Holster__Pre);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    key = (Object *)FUN_?(uRam_?);
    value = TM::TM__(StringLiteral_Press__Q__to_toggle_Holster__Pre,(MethodInfo *)0x0);
    if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,key,(Object *)value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_PlayerTip,(Dictionary_2_System_Object_System_Object_ *)this,
               NotificationLifetime__Enum_High,(MethodInfo *)0x0);
  }
  return;
}

