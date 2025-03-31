
/* Void KogamaLogHandlerOnOnLogReceived(Object, ProxyLogHandler+LogFormatData) */

void Assembly-CSharp.dll::KogamaLogHandlerTest::KogamaLogHandlerTest_KogamaLogHandlerOnOnLogReceived
               (KogamaLogHandlerTest *this,Object *sender,ProxyLogHandler_LogFormatData *e,
               MethodInfo *method)

{
  if (e != (ProxyLogHandler_LogFormatData *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Format_3
                       ((e->fields).format,(e->fields).args,(MethodInfo *)0x0);
    (this->fields).s = pSVar1;
    func_?(&(this->fields).s,pSVar1);
    (this->fields).logType = (e->fields).LogType;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::KogamaLogHandlerTest::KogamaLogHandlerTest_Start
               (KogamaLogHandlerTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    func_?(&
                    MethodInfo__KogamaLogHandlerTest__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                   );
    func_?(&TypeInfo__ProxyLogHandler);
    func_?(&StringLiteral_test);
    cRam_? = '\x01';
  }
  pPVar1 = (ProxyLogHandler *)func_?(TypeInfo__ProxyLogHandler);
  ProxyLogHandler::ProxyLogHandler__ctor(pPVar1,(MethodInfo *)0x0);
  (this->fields).kogamaLogHandler = pPVar1;
  func_?(&(this->fields).kogamaLogHandler,pPVar1);
  pPVar1 = (this->fields).kogamaLogHandler;
  this_00 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__KogamaLogHandlerTest__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
             ,(MethodInfo *)0x0);
  if (pPVar1 != (ProxyLogHandler *)0x0) {
    ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
              (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_test,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

