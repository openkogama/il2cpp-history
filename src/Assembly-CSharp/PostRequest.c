
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::PostRequest::PostRequest_Create(PostRequest *this,MethodInfo *method)

{
  pUVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_Post((this->fields)._.path,(this->fields).form,(MethodInfo *)0x0);
  return pUVar1;
}


/* PostRequest(String, WWWForm, Action`1[UnityEngine.Networking.UnityWebRequest],
   WWWRequestPriority) */

void Assembly-CSharp.dll::PostRequest::PostRequest__ctor
               (PostRequest *this,String *path,WWWForm *form,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AsyncWebRequest::AsyncWebRequest__ctor
            ((AsyncWebRequest *)this,path,callback,requestPriority,(MethodInfo *)0x0);
  contents = (Byte__Array *)func_?(TypeInfo__System__Byte,1);
  if (form != (WWWForm *)0x0) {
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddBinaryData
              (form,StringLiteral_binary,contents,(MethodInfo *)0x0);
    (this->fields).form = form;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

