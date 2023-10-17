
/* Void Start() */

void Assembly-CSharp.dll::FirstTimeSystemGetPublishLevelRequired::
     FirstTimeSystemGetPublishLevelRequired_Start
               (FirstTimeSystemGetPublishLevelRequired *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).levelRequired;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(pTVar1->klass->vtable).get_text.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).get_text.method);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      this = (FirstTimeSystemGetPublishLevelRequired *)
             (pMVar3->fields)._PublishLevel_k__BackingField;
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
      pSVar2 = mscorlib.dll::System::String::String_Format(pSVar2,arg0,(MethodInfo *)0x0);
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

