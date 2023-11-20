
/* Void OnQuit() */

void Assembly-CSharp.dll::QuitBrowserRequest::QuitBrowserRequest_OnQuit
               (QuitBrowserRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_QuitBrowserRequest);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_QuitBrowserRequest,(MethodInfo *)0x0);
  url = (this->fields).url;
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  BrowserComm::BrowserComm_ExecuteBrowserRequest(url,(MethodInfo *)0x0);
  return;
}

