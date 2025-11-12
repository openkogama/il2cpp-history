
/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RequestReward::TimeReward_RequestReward_Update
          (TimeReward_RequestReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimeReward__RewardDone);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (Il2CppClass *)TypeInfo__TimeReward__RewardDone;
  FUN_?();
  if (((((TimeReward_RewardDone__Class *)pIVar1)->_0).generic_class != (Il2CppGenericClass *)0x0) &&
     (((((TimeReward_RewardDone__Class *)pIVar1)->_1).field_0x6d & 8) != 0)) {
    pIVar1 = (((TimeReward_RewardDone__Class *)pIVar1)->_0).element_class;
  }
  uVar2 = pIVar1->instance_size;
  if ((pIVar1->field_0x135 & 0x20) == 0) {
    pTVar3 = (TimeReward_RewardStateBase *)FUN_?(uVar2);
    pTVar3->klass = (TimeReward_RewardStateBase__Class *)pIVar1;
    pTVar4 = &pTVar3->fields;
    pTVar3->monitor = (MonitorData *)0x0;
    if (pIVar1->instance_size < 0x80) {
      puVar5 = (undefined1 *)((longlong)&pTVar3->klass + (ulonglong)pIVar1->instance_size);
      uVar6 = (ulonglong)(puVar5 + (7 - (longlong)pTVar4)) >> 3;
      if (puVar5 < pTVar4) {
        uVar6 = 0;
      }
      if (uVar6 != 0) {
        FUN_?(pTVar4,0,uVar6 << 3);
      }
    }
    else {
      FUN_?(pTVar4,0,(ulonglong)pIVar1->instance_size - 0x10);
    }
  }
  else {
    if (pIVar1->gc_desc != (void *)0x0) {
      pTVar3 = (TimeReward_RewardStateBase *)FUN_?(uVar2,pIVar1);
      goto code_?;
    }
    pTVar3 = (TimeReward_RewardStateBase *)FUN_?(uVar2,1);
    pTVar3->klass = (TimeReward_RewardStateBase__Class *)pIVar1;
  }
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
code_?:
  if ((pIVar1->field_0x136 & 2) != 0) {
    FUN_?(pTVar3,FUN_?);
  }
  if ((bRam_? & 0x80) != 0) {
    FUN_?(pTVar3,pIVar1);
  }
  FUN_?(pIVar1);
  return pTVar3;
}


/* TimeReward+RequestReward() */

void Assembly-CSharp.dll::TimeReward+RequestReward::TimeReward_RequestReward__ctor
               (TimeReward_RequestReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WWWForm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profile_id);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planet_id);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_s_gameRewardURL__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  this_00 = (WWWForm *)FUN_?(TypeInfo__UnityEngine__WWWForm);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
            (this_00,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_token;
  if ((pGVar1 == (GameSessionData *)0x0) || (this_00 == (WWWForm *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (pGVar1->fields).token;
  pEVar5 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
            (this_00,pSVar2,pSVar4,pEVar5,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_profile_id;
  aIStackX_18[0].m_value = (pGVar1->fields).profileID;
  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
  pEVar5 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
            (this_00,pSVar2,pSVar4,pEVar5,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_planet_id;
  aIStackX_18[0].m_value = (pGVar1->fields).planetID;
  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
  pEVar5 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
            (this_00,pSVar2,pSVar4,pEVar5,(MethodInfo *)0x0);
  pSVar2 = (pGVar1->fields).gameRewardURL;
  this_01 = (PostRequest *)FUN_?(TypeInfo__PostRequest);
  PostRequest::PostRequest__ctor
            (this_01,pSVar2,this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
             WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_s_gameRewardURL__,(pGVar1->fields).gameRewardURL,
                      (MethodInfo *)0x0);
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
  pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar6 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,3,pSVar2);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

