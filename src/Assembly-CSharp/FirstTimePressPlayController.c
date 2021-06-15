
/* Void OnFirstTimePlayIsPressed() */

void Assembly-CSharp.dll::FirstTimePressPlayController::
     FirstTimePressPlayController_OnFirstTimePlayIsPressed(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimePressPlayController);
  }
  bVar1 = cRam_? == '\0';
  TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed = 1;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__FpsCounter->static_fields->_StartedPlaying_k__BackingField = 1;
  data = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
    func_?();
  }
  NotificationController::NotificationController_PushNotification_2
            (NotificationType__Enum_XPBoost,data,NotificationLifetime__Enum_High,(MethodInfo *)0x0);
  return;
}


/* Boolean get_HaveBeenPressed() */

bool Assembly-CSharp.dll::FirstTimePressPlayController::
     FirstTimePressPlayController_get_HaveBeenPressed(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimePressPlayController);
  }
  return TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed;
}

