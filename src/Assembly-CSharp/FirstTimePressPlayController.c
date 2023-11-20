
/* Void OnFirstTimePlayIsPressed() */

void Assembly-CSharp.dll::FirstTimePressPlayController::
     FirstTimePressPlayController_OnFirstTimePlayIsPressed(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__FirstTimePressPlayController);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FpsCounter);
    cRam_? = '\x01';
  }
  TypeInfo__FpsCounter->static_fields->_StartedPlaying_k__BackingField = 1;
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  NotificationController::NotificationController_PushNotification_2
            (NotificationType__Enum_XPBoost,(Dictionary_2_System_Object_System_Object_ *)this,
             NotificationLifetime__Enum_High,(MethodInfo *)0x0);
  return;
}


/* Boolean get_HaveBeenPressed() */

bool Assembly-CSharp.dll::FirstTimePressPlayController::
     FirstTimePressPlayController_get_HaveBeenPressed(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimePressPlayController);
    cRam_? = '\x01';
  }
  return TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed;
}

