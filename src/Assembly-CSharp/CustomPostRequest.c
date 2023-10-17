
/* CustomPostRequest(UnityWebRequest, Action`1[UnityEngine.Networking.UnityWebRequest],
   WWWRequestPriority) */

void Assembly-CSharp.dll::CustomPostRequest::CustomPostRequest__ctor
               (CustomPostRequest *this,UnityWebRequest *request,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  AsyncWebRequest::AsyncWebRequest__ctor
            ((AsyncWebRequest *)this,::StringLiteral__,callback,requestPriority,(MethodInfo *)0x0);
  (this->fields)._.request = request;
  func_?(&(this->fields)._.request,request);
  return;
}

