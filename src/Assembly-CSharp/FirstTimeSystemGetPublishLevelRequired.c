
/* Void Start() */

void Assembly-CSharp.dll::FirstTimeSystemGetPublishLevelRequired::
     FirstTimeSystemGetPublishLevelRequired_Start
               (FirstTimeSystemGetPublishLevelRequired *this,MethodInfo *method)

{
  pTVar1 = (this->fields).levelRequired;
  pMVar2 = (MVGameControllerBase *)0x0;
  if (pTVar1 != (Text *)0x0) {
    pSVar3 = (String *)
             (*(pTVar1->klass->vtable).get_text.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).get_text.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    method = (MethodInfo *)TypeInfo__MVGameControllerBase->static_fields;
    pMVar2 = (MVGameControllerBase *)method->parameters;
    if ((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar4 = (pMVar2->fields).game, pMVar4 != (MVNetworkGame *)0x0)) {
      aiStackX_8[0] = (pMVar4->fields)._PublishLevel_k__BackingField;
      arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
      PStack_5._arg0 = (Object *)0x0;
      PStack_5._arg1 = (Object *)0x0;
      PStack_5._arg2 = (Object *)0x0;
      PStack_5._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_5,arg0,(MethodInfo *)0x0);
      PStack_6._arg0 = PStack_5._arg0;
      PStack_6._arg1 = PStack_5._arg1;
      PStack_6._arg2 = PStack_5._arg2;
      PStack_6._args = PStack_5._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_6,(MethodInfo *)0x0);
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method);
      return;
    }
  }
  FUN_?(pMVar2,method);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

