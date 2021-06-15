
/* Void KogamaLogHandlerOnOnLogReceived(Object, ProxyLogHandler+LogFormatData) */

void Assembly-CSharp.dll::KogamaLogHandlerTest::KogamaLogHandlerTest_KogamaLogHandlerOnOnLogReceived
               (KogamaLogHandlerTest *this,Object *sender,ProxyLogHandler_LogFormatData *e,
               MethodInfo *method)

{
  if (e != (ProxyLogHandler_LogFormatData *)0x0) {
    pSVar1 = ProxyLogHandler+LogFormatData::ProxyLogHandler_LogFormatData_get_Message
                       (e,(MethodInfo *)0x0);
    (this->fields).s = pSVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ProxyLogHandler *)func_?(TypeInfo__ProxyLogHandler);
  ProxyLogHandler::ProxyLogHandler__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).kogamaLogHandler = this_00;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__KogamaLogHandlerTest__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
             ,
             MethodInfo__System__EventHandler<ProxyLogHandler::LogFormatData>__EventHandler_System__Object__void__
            );
  if (this_00 != (ProxyLogHandler *)0x0) {
    ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
              (this_00,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_test,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

