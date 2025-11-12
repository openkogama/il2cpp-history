
/* Void Start() */

void Assembly-CSharp.dll::FirstTimePlayModeWelcome::FirstTimePlayModeWelcome_Start
               (FirstTimePlayModeWelcome *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Welcome_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Welcome_,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar4 != (MVLocalPlayer *)0x0) &&
       (pUVar5 = (pMVar4->fields)._._UserProfileData_k__BackingField,
       pUVar5 != (UserProfileData *)0x0)) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_5
                         (pSVar1,::StringLiteral__,(pUVar5->fields).UserName,(MethodInfo *)0x0);
      pTVar6 = (this->fields).welcomeText;
      if (pTVar6 != (Text *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar6,pSVar1,(pTVar6->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

