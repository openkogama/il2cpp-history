
/* Void UpdateJoinStateForUI(MVEventCodes) */

void Assembly-CSharp.dll::JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
               (MVEventCodes__Enum eventCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__JoinUIUpdater);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Enqueue_MV__Common__MVEventCodes_
                   );
    cRam_? = '\x01';
  }
  uVar1 = (uint8_t)eventCode;
  if (uVar1 != 0x49) {
    if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__JoinUIUpdater);
    }
    if ((TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent != 0x3e) || (uVar1 == 0x3f)) {
      if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__JoinUIUpdater);
      }
      this = (Queue_1_System_ByteEnum_ *)TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
      if (this == (Queue_1_System_ByteEnum_ *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::Queue`1[System::ByteEnum]::
      Queue_1_System_ByteEnum__Enqueue
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
    func_?(&TypeInfo__JoinUIUpdater);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>);
    cRam_? = '\x01';
  }
  this = (Queue_1_MV_Common_MVEventCodes_ *)
         func_?(TypeInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>);
  if (this != (Queue_1_MV_Common_MVEventCodes_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Queue__);
    TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes = this;
    func_?(TypeInfo__JoinUIUpdater->static_fields,this);
    TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent = 0x3a;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

