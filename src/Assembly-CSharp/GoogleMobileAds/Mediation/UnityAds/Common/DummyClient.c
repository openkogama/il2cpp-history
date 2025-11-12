
/* Void SetConsentMetaData(String, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Common::DummyClient::
     DummyClient_SetConsentMetaData
               (DummyClient *this,String *key,bool metaDataValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,key,CONCAT71(in_register_00000081,metaDataValue));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__SetConsentMetaData_System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__SetConsentMetaData_System__String__bool_
  ;
  if (MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__SetConsentMetaData_System__String__bool_
      ->is_inflated != 0) {
    pMVar1 = ((
              MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__SetConsentMetaData_System__String__bool_
              ->field8_0x40).genericMethod)->methodDefinition;
  }
  plVar2 = (longlong *)FUN_?(pMVar1,pMVar1->klass);
  if (plVar2 == (longlong *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (String *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Dummy_,pSVar4,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar5 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,3,pSVar4);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* DummyClient() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Common::DummyClient::
     DummyClient__ctor(DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar1 = ((MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
              ->field8_0x40).genericMethod)->methodDefinition;
  }
  plVar2 = (longlong *)FUN_?(pMVar1,pMVar1->klass);
  if (plVar2 == (longlong *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (String *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Dummy_,pSVar4,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar5 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,3,pSVar4);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

