
/* CustomPostRequest(UnityWebRequest, Action`1[UnityEngine.Networking.UnityWebRequest],
   WWWRequestPriority) */

void Assembly-CSharp.dll::CustomPostRequest::CustomPostRequest__ctor
               (CustomPostRequest *this,UnityWebRequest *request,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  AsyncWebRequest::AsyncWebRequest__ctor
            ((AsyncWebRequest *)this,TypeInfo__System__String->static_fields->Empty,callback,
             requestPriority,(MethodInfo *)0x0);
  (this->fields)._.request = request;
  return;
}

