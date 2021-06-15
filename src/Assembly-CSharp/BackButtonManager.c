
/* Boolean ContainsHandler(BackButtonHandler) */

bool Assembly-CSharp.dll::BackButtonManager::BackButtonManager_ContainsHandler
               (BackButtonHandler *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) break;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return 0;
    }
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) break;
    pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                       );
    if (pIVar3 == (IEventSystemHandler *)0x0) break;
    x = pIVar3[1].klass;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)handler,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return 1;
    }
    index = index + 1;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_PostDestroyCleanup
               (MethodInfo *method)

{
  pOStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BackButtonManager);
  }
  pLVar2 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar2 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                       );
    if ((int)pOVar3 < 1) {
      return;
    }
    pOStack_1 = (Object *)0x1;
    args = (Object__Array *)func_?(TypeInfo__System__Object);
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar2 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar2 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) goto code_?;
    pOStack_1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                           MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                          );
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_1);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar3 == (Object *)0x0) ||
       (iVar4 = func_?(pOVar3,(args->klass->_0).element_class), iVar4 != 0)) {
      if (args->max_length == 0) goto code_?;
      args->vector[0] = pOVar3;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarningFormat
                (StringLiteral__0__subscribers_are_never_unsubs,args,(MethodInfo *)0x0);
      this = (List_1_UnityEngine_UIVertex_ *)TypeInfo__BackButtonManager->static_fields->subscribers
      ;
      if (this != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this,
                   MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__Clear__
                  );
        return;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Subscribe(BackButtonHandler, KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_Subscribe
               (BackButtonHandler *handler,KogamaControls__Enum button,KeyState__Enum state,
               UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BackButtonManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) break;
    method_00 = (MethodInfo *)&UNK_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__BackButtonManager);
      }
      pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
      this = (ScaleAnimationBase *)
             func_?(TypeInfo__BackButtonManager__BackButtonSubscriber);
      ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,method_00);
      (this->fields).state = button;
      (this->fields)._._._._.m_CachedPtr = handler;
      (this->fields).originalScale.x = (float)state;
      (this->fields).originalScale.y = (float)callback;
      if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this,
                   MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__Add_BackButtonManager__BackButtonSubscriber_
                  );
        return;
      }
      break;
    }
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if ((pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                           ), pIVar3 == (IEventSystemHandler *)0x0)) break;
    x = pIVar3[1].klass;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)handler,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    index = index + 1;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Unsubscribe(BackButtonHandler) */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_Unsubscribe
               (BackButtonHandler *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BackButtonManager);
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    while( true ) {
      if ((int)index < 1) {
        return;
      }
      if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__BackButtonManager);
      }
      pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
      if ((pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      x = pIVar3[1].klass;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)handler,(MethodInfo *)0x0);
      if (bVar4 != 0) break;
      index = index + -1;
    }
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?();
    }
    this = (List_1_MVPlayer_ *)TypeInfo__BackButtonManager->static_fields->subscribers;
    if (this != (List_1_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__RemoveAt_int_
                );
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BackButtonManager);
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                       );
    if ((int)pOVar2 < 1) {
      return;
    }
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                         );
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)((int)&pOVar2[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                         );
      if (pIVar3 != (IEventSystemHandler *)0x0) {
        pIVar4 = pIVar3[2].klass;
        if (pIVar4 == (IEventSystemHandler__Class *)0x1) {
          pMVar5 = pIVar3[1].monitor;
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                            ((KogamaControls__Enum)pMVar5,(MethodInfo *)0x0);
        }
        else if (pIVar4 == (IEventSystemHandler__Class *)0x0) {
          pMVar5 = pIVar3[1].monitor;
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                            ((KogamaControls__Enum)pMVar5,(MethodInfo *)0x0);
        }
        else {
          if (pIVar4 != (IEventSystemHandler__Class *)0x2) {
            return;
          }
          pMVar5 = pIVar3[1].monitor;
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                            ((KogamaControls__Enum)pMVar5,(MethodInfo *)0x0);
        }
        if (bVar6 != 0) {
          if ((AvatarMotor_OnActiveBounceDelegate *)pIVar3[2].monitor ==
              (AvatarMotor_OnActiveBounceDelegate *)0x0) goto code_?;
          AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                    ((AvatarMotor_OnActiveBounceDelegate *)pIVar3[2].monitor,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* BackButtonManager() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>
                        );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,
             MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__List__
            );
  TypeInfo__BackButtonManager->static_fields->subscribers =
       (List_1_BackButtonManager_BackButtonSubscriber_ *)this;
  return;
}

