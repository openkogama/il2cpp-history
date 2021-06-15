
/* Void UpdateJoinStateForUI(MVEventCodes) */

void Assembly-CSharp.dll::JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
               (MVEventCodes__Enum eventCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (uint8_t)eventCode;
  if (uVar1 != 0x49) {
    if ((((uint)(TypeInfo__JoinUIUpdater->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__JoinUIUpdater->_1).cctor_started == 0)) {
      func_?(TypeInfo__JoinUIUpdater);
    }
    if ((TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent != 0x3e) || (uVar1 == 0x3f)) {
      if ((((uint)(TypeInfo__JoinUIUpdater->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__JoinUIUpdater->_1).cctor_started == 0)) {
        func_?(TypeInfo__JoinUIUpdater);
      }
      this = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
      if (this == (Queue_1_MV_Common_MVEventCodes_ *)0x0) {
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      System.dll::System::Collections::Generic::Queue`1[MV::Common::MVEventCodes]::
      Queue_1_MV_Common_MVEventCodes__Enqueue
                (this,eventCode,
                 MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Enqueue_MV__Common__MVEventCodes_
                );
      TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent = uVar1;
    }
  }
  return;
}


/* JoinUIUpdater() */

void Assembly-CSharp.dll::JoinUIUpdater::JoinUIUpdater__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Queue_1_SmoothPhysicsMovement_Package_ *)
         func_?(TypeInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>);
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this,MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Queue__
            );
  TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes = (Queue_1_MV_Common_MVEventCodes_ *)this;
  TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent = 0x3a;
  return;
}

