
/* Void Increment(Boolean, Boolean) */

void Assembly-CSharp.dll::DebugLogHandler+StatHatErrorCount::
     DebugLogHandler_StatHatErrorCount_Increment
               (DebugLogHandler_StatHatErrorCount *this,bool errorDetected,bool onGoingErrorDetected
               ,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  if (errorDetected == onGoingErrorDetected) {
    bStack4 = errorDetected;
    arg1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_An_errorDetected_and_onGoingErro,arg1,
                         (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)message,(MethodInfo *)0x0);
  }
  else {
    if (onGoingErrorDetected != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((this->fields).reportedOngoingError == 0) {
        if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__StatHatWrapper);
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcountongoing,1,(MethodInfo *)0x0);
        (this->fields).reportedOngoingError = 1;
      }
    }
    if (errorDetected != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((this->fields).reportedError == 0) {
        if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__StatHatWrapper);
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcount,1,(MethodInfo *)0x0);
        (this->fields).reportedError = 1;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void IncrementErrorCount() */

void Assembly-CSharp.dll::DebugLogHandler+StatHatErrorCount::
     DebugLogHandler_StatHatErrorCount_IncrementErrorCount
               (DebugLogHandler_StatHatErrorCount *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).reportedError == 0) {
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcount,1,(MethodInfo *)0x0);
    (this->fields).reportedError = 1;
  }
  return;
}


/* Void IncrementErrorCountOnGoing() */

void Assembly-CSharp.dll::DebugLogHandler+StatHatErrorCount::
     DebugLogHandler_StatHatErrorCount_IncrementErrorCountOnGoing
               (DebugLogHandler_StatHatErrorCount *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).reportedOngoingError == 0) {
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcountongoing,1,(MethodInfo *)0x0);
    (this->fields).reportedOngoingError = 1;
  }
  return;
}

