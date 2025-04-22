
/* Void ApplySettingsFromIniFile() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_ApplySettingsFromIniFile
               (LoggerManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__IO__FileStream);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__IO__StreamReader);
    func_?(&StringLiteral_Ptr);
    func_?(&StringLiteral________LogSetup_ini);
    cRam_? = '\x01';
  }
  (this->fields).appendAll = 0;
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                     ((MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar4,StringLiteral________LogSetup_ini,(MethodInfo *)0x0);
  this_01 = (FileStream *)func_?(TypeInfo__System__IO__FileStream);
  mscorlib.dll::System::IO::FileStream::FileStream__ctor_2
            (this_01,pSVar4,FileMode__Enum_OpenOrCreate,FileAccess__Enum_Read,(MethodInfo *)0x0);
  uStack_1._0_1_ = 1;
  uStack_1._1_3_ = 0;
  this_02 = (StreamReader *)func_?(TypeInfo__System__IO__StreamReader);
  mscorlib.dll::System::IO::StreamReader::StreamReader__ctor_1
            (this_02,(Stream *)this_01,(MethodInfo *)0x0);
  uStack_1 = CONCAT31(uStack_1._1_3_,3);
  if (this_02 != (StreamReader *)0x0) {
    pSVar5 = (StreamReader *)(this_02->klass->vtable).get_CurrentEncoding.methodPtr;
    pSVar4 = (String *)(*(code *)(this_02->klass->vtable).ReadLine.method)();
    if (pSVar4 == (String *)0x0) {
code_?:
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      if (this_02 != (StreamReader *)0x0) {
        func_?();
        pSVar5 = this_02;
      }
      uStack_1 = 0xffffffff;
      if (pSVar5 != (StreamReader *)0x0) {
        func_?();
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pSVar5 = (StreamReader *)0x1;
    separator = (Char__Array *)func_?();
    if (separator != (Char__Array *)0x0) {
      if (separator->max_length == 0) {
        func_?();
code_?:
        func_?();
      }
      else {
        separator->vector[0] = 0x2c;
        this_03 = mscorlib.dll::System::String::String_Split_1(pSVar4,separator,(MethodInfo *)0x0);
        uVar6 = 0;
        if (this_03 != (String__Array *)0x0) {
          for (; (int)uVar6 < (int)this_03->max_length; uVar6 = uVar6 + 1) {
            if (this_03->max_length <= uVar6) goto code_?;
            this_03 = (String__Array *)this_03->vector[uVar6];
            if (this_03 == (String__Array *)0x0) goto code_?;
            if (0 < ((String__Fields *)&this_03->bounds)->_stringLength) {
              this_00 = (this->fields).interestingLoggers;
              if (this_00 == (HashSet_1_System_String_ *)0x0) goto code_?;
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                        ((HashSet_1_System_Object_ *)this_00,(Object *)this_03,
                         MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                        );
            }
            pSVar5 = (StreamReader *)0x0;
            bVar7 = mscorlib.dll::System::String::String_Equals_1
                              ((String *)this_03,StringLiteral_Ptr,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              (this->fields).appendAll = 1;
            }
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LoggerManager);
    cRam_? = '\x01';
  }
  TypeInfo__LoggerManager->static_fields->instance = (LoggerManager *)0x0;
  func_?(TypeInfo__LoggerManager->static_fields,0);
  return;
}


/* ILogger GetLogger(Type) */

ILogger * Assembly-CSharp.dll::LoggerManager::LoggerManager_GetLogger
                    (LoggerManager *this,Type *type,MethodInfo *method)

{
  if (type != (Type *)0x0) {
    key = (Type__Class *)
          (*(code *)(type->klass->vtable).__unknown.method)
                    (type,(type->klass->vtable).get_DeclaringType.methodPtr);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                     );
      func_?(&TypeInfo__LoggerManager__Logger);
      cRam_? = '\x01';
    }
    type = (Type *)0x0;
    pDVar1 = (this->fields).loggers;
    if (pDVar1 != (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)key,
                         (Object **)&type,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                        );
      method_00 = TypeInfo__LoggerManager__Logger;
      if (bVar2 == 0) {
        value = (Type *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        (value->fields)._impl.value = this;
        func_?(&value->fields);
        value[1].klass = key;
        func_?(value + 1,key);
        pDVar1 = (this->fields).loggers;
        type = value;
        if (pDVar1 == (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)key,(Object *)value
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                  );
      }
      return (ILogger *)type;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (ILogger *)(*pcVar3)();
  return pIVar4;
}


/* ILogger GetLogger(String) */

ILogger * Assembly-CSharp.dll::LoggerManager::LoggerManager_GetLogger_1
                    (LoggerManager *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                   );
    func_?(&TypeInfo__LoggerManager__Logger);
    cRam_? = '\x01';
  }
  value = (Object *)0x0;
  pDVar1 = (this->fields).loggers;
  if (pDVar1 != (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)name,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                      );
    if (bVar2 == 0) {
      method_00 = TypeInfo__LoggerManager__Logger;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)this;
      func_?(value + 1,this);
      value[1].monitor = (MonitorData *)name;
      func_?(&value[1].monitor,name);
      pDVar1 = (this->fields).loggers;
      if (pDVar1 == (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)name,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                );
    }
    return (ILogger *)value;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (ILogger *)(*pcVar3)();
  return pIVar4;
}


/* Void Log(String, String) */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_Log
               (LoggerManager *this,String *loggerName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                   );
    func_?(&TypeInfo__IAppender);
    cRam_? = '\x01';
  }
  if ((this->fields).appendAll == 0) {
    this_00 = (this->fields).interestingLoggers;
    if (this_00 == (HashSet_1_System_String_ *)0x0) goto code_?;
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Contains
                      ((HashSet_1_System_Object_ *)this_00,(Object *)loggerName,
                       MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                      );
    if (bVar1 == 0) {
      return;
    }
  }
  pIVar2 = (this->fields).appender;
  if (pIVar2 != (IAppender *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pIVar3->_1).rank;
    uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType == (Il2CppClass *)TypeInfo__IAppender) {
          ppMVar6 = &(&pIVar2->klass->vtable)[pIVar2->klass->interfaceOffsets[uVar4].offset].Log.
                     method;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppMVar6 = (MethodInfo **)func_?(pIVar2,TypeInfo__IAppender,0);
code_?:
    (*(code *)*ppMVar6)(pIVar2,loggerName,message,ppMVar6[1]);
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* LoggerManager() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager__ctor(LoggerManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<System::String>);
    func_?(&TypeInfo__UnityLogAppender);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
            );
  (this->fields).loggers = (Dictionary_2_System_String_LoggerManager_Logger_ *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (HashSet_1_System_String_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
  method_01 = (MethodInfo *)&(this->fields).interestingLoggers;
  (this->fields).interestingLoggers = this_01;
  func_?(method_01,this_01);
  (this->fields).appendAll = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_01);
  method_00 = TypeInfo__UnityLogAppender;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).appender = (IAppender *)value;
  func_?(&(this->fields).appender,value);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                    ((MethodInfo *)0x0);
  (this->fields).appendAll = bVar1;
  return;
}


/* LoggerManager get_Instance() */

LoggerManager * Assembly-CSharp.dll::LoggerManager::LoggerManager_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LoggerManager);
    cRam_? = '\x01';
  }
  pLVar1 = TypeInfo__LoggerManager->static_fields;
  if (pLVar1->instance == (LoggerManager *)0x0) {
    value = (LoggerManager *)func_?(TypeInfo__LoggerManager);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                     );
      func_?(&MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__)
      ;
      func_?(&TypeInfo__System__Collections__Generic__HashSet<System::String>);
      func_?(&TypeInfo__UnityLogAppender);
      cRam_? = '\x01';
    }
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
              );
    (value->fields).loggers = (Dictionary_2_System_String_LoggerManager_Logger_ *)this;
    func_?(&value->fields,this);
    this_00 = (HashSet_1_System_String_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object___ctor
              ((HashSet_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
    method_01 = (MethodInfo *)&(value->fields).interestingLoggers;
    (value->fields).interestingLoggers = this_00;
    func_?(method_01,this_00);
    (value->fields).appendAll = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,method_01);
    method_00 = TypeInfo__UnityLogAppender;
    value_00 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (value->fields).appender = (IAppender *)value_00;
    func_?(&(value->fields).appender,value_00);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                      ((MethodInfo *)0x0);
    (value->fields).appendAll = bVar2;
    TypeInfo__LoggerManager->static_fields->instance = value;
    pLStack3 = TypeInfo__LoggerManager->static_fields;
    func_?();
    pLVar1 = TypeInfo__LoggerManager->static_fields;
  }
  return pLVar1->instance;
}

