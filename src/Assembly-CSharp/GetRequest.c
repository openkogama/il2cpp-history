
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::GetRequest::GetRequest_Create(GetRequest *this,MethodInfo *method)

{
  pUVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_Get((this->fields)._.path,(MethodInfo *)0x0);
  return pUVar1;
}


/* GetRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest], WWWRequestPriority) */

void Assembly-CSharp.dll::GetRequest::GetRequest__ctor
               (GetRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  (this->fields)._.retries = TypeInfo__AsyncWWWManager->static_fields->retries;
  uStack_1 = 0;
  func_?(&uStack_1,0,0,0);
  *(undefined4 *)&(this->fields)._.currentTimeout._ticks = (undefined4)uStack_1;
  *(undefined4 *)((int)&(this->fields)._.currentTimeout._ticks + 4) = uStack_1._4_4_;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_3,(MethodInfo *)0x0);
  uVar4 = *(undefined4 *)((int)&(pDVar2->ticks)._ticks + 4);
  iVar5 = pDVar2->kind;
  uVar6 = *(undefined4 *)&pDVar2->field_0xc;
  *(int *)&(this->fields)._.retryTime.ticks._ticks = (int)(pDVar2->ticks)._ticks;
  *(undefined4 *)((int)&(this->fields)._.retryTime.ticks._ticks + 4) = uVar4;
  (this->fields)._.retryTime.kind = iVar5;
  *(undefined4 *)&(this->fields)._.retryTime.field_0xc = uVar6;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._.requestPriority = requestPriority;
  (this->fields)._.path = path;
  (this->fields)._.callback = callback;
  return;
}

