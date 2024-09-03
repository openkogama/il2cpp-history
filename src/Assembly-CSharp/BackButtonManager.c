
/* Boolean ContainsHandler(BackButtonHandler) */

bool Assembly-CSharp.dll::BackButtonManager::BackButtonManager_ContainsHandler
               (BackButtonHandler *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) break;
    if ((pLVar1->fields)._size <= index) {
      return 0;
    }
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BackButtonManager);
    }
    this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           TypeInfo__BackButtonManager->static_fields->subscribers;
    if (this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this,index,
                       MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                      );
    if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
    x = *(Object_1 **)((int)RVar2 + 8);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)handler,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    index = index + 1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_PostDestroyCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral__0__subscribers_are_never_unsubs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BackButtonManager);
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((pLVar1->fields)._size < 1) {
      return;
    }
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if ((TypeInfo__BackButtonManager->static_fields->subscribers ==
         (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) ||
       (pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8),
       args == (Object__Array *)0x0)) goto code_?;
    if ((pOVar2 == (Object *)0x0) ||
       (iVar3 = func_?(pOVar2,(args->klass->_0).element_class), iVar3 != 0)) {
      if (args->max_length == 0) goto code_?;
      args->vector[0] = pOVar2;
      func_?(args->vector,pOVar2);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarningFormat
                (StringLiteral__0__subscribers_are_never_unsubs,args,(MethodInfo *)0x0);
      pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
      if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
        iVar3 = (pLVar1->fields)._size;
        piVar4 = &(pLVar1->fields)._version;
        *piVar4 = *piVar4 + 1;
        (pLVar1->fields)._size = 0;
        if (0 < iVar3) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar1->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  func_?();
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
    func_?(&TypeInfo__BackButtonManager);
    func_?(&TypeInfo__BackButtonManager__BackButtonSubscriber);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__Add_BackButtonManager__BackButtonSubscriber_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BackButtonManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) break;
    if ((pLVar1->fields)._size <= index) {
      if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BackButtonManager);
      }
      pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
      method_00 = TypeInfo__BackButtonManager__BackButtonSubscriber;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)handler;
      func_?(value + 1,handler);
      value[1].monitor = (MonitorData *)button;
      value[2].klass = (Object__Class *)state;
      value[2].monitor = (MonitorData *)callback;
      func_?(&value[2].monitor,callback);
      if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,value,
                   MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__Add_BackButtonManager__BackButtonSubscriber_
                  );
        return;
      }
      break;
    }
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BackButtonManager);
    }
    this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           TypeInfo__BackButtonManager->static_fields->subscribers;
    if ((this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this,index,
                           MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    x = *(Object_1 **)((int)RVar2 + 8);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)handler,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    index = index + 1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Unsubscribe(BackButtonHandler) */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_Unsubscribe
               (BackButtonHandler *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BackButtonManager);
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    index = (pLVar1->fields)._size;
    do {
      index = index + -1;
      if (index < 1) {
        return;
      }
      if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BackButtonManager);
      }
      this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             TypeInfo__BackButtonManager->static_fields->subscribers;
      if ((this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this,index,
                             MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                            ), RVar2 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      x = *(Object_1 **)((int)RVar2 + 8);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)handler,(MethodInfo *)0x0);
    } while (bVar3 == 0);
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__RemoveAt_int_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                   );
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BackButtonManager);
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      return;
    }
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BackButtonManager);
    }
    this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           TypeInfo__BackButtonManager->static_fields->subscribers;
    if ((this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this,(this->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                          ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
      iVar3 = *(int *)((int)RVar2 + 0x10);
      if (iVar3 == 0) {
        KVar4 = *(KogamaControls__Enum *)((int)RVar2 + 0xc);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KVar4,(MethodInfo *)0x0);
      }
      else if (iVar3 == 1) {
        KVar4 = *(KogamaControls__Enum *)((int)RVar2 + 0xc);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown(KVar4,(MethodInfo *)0x0);
      }
      else {
        if (iVar3 != 2) {
          return;
        }
        KVar4 = *(KogamaControls__Enum *)((int)RVar2 + 0xc);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl(KVar4,(MethodInfo *)0x0);
      }
      if (bVar5 != 0) {
        iVar3 = *(int *)((int)RVar2 + 0x14);
        if (iVar3 == 0) goto code_?;
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* BackButtonManager() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>
                   );
    cRam_? = '\x01';
  }
  this = (List_1_BackButtonManager_BackButtonSubscriber_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>
                        );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__List__
            );
  TypeInfo__BackButtonManager->static_fields->subscribers = this;
  func_?(TypeInfo__BackButtonManager->static_fields,this);
  return;
}

