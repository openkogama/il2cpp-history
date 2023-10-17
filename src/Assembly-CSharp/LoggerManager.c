
/* Void ApplySettingsFromIniFile() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_ApplySettingsFromIniFile
               (LoggerManager *this,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
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
  pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                     ((MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar4,StringLiteral________LogSetup_ini,(MethodInfo *)0x0);
  this_01 = (FileStream *)func_?(TypeInfo__System__IO__FileStream);
  if (this_01 != (FileStream *)0x0) {
    mscorlib.dll::System::IO::FileStream::FileStream__ctor_2
              (this_01,pSVar4,FileMode__Enum_OpenOrCreate,FileAccess__Enum_Read,(MethodInfo *)0x0);
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    this_02 = (StreamReader *)func_?();
    if (this_02 != (StreamReader *)0x0) {
      mscorlib.dll::System::IO::StreamReader::StreamReader__ctor_1
                (this_02,(Stream *)this_01,(MethodInfo *)0x0);
      uStack_1._0_1_ = 3;
      if (this_02 != (StreamReader *)0x0) {
        pSVar4 = (String *)(*(this_02->klass->vtable).ReadLine.methodPtr)();
        if (pSVar4 == (String *)0x0) {
code_?:
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          if (this_02 != (StreamReader *)0x0) {
            func_?();
          }
          uStack_1 = 0xffffffff;
          if (this_01 != (FileStream *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        separator = (Char__Array *)func_?();
        if (separator != (Char__Array *)0x0) {
          if (separator->max_length == 0) {
            func_?();
code_?:
            func_?();
          }
          else {
            separator->vector[0] = 0x2c;
            pSVar5 = mscorlib.dll::System::String::String_Split_1
                               (pSVar4,separator,(MethodInfo *)0x0);
            uVar6 = 0;
            if (pSVar5 != (String__Array *)0x0) {
              for (; (int)uVar6 < (int)pSVar5->max_length; uVar6 = uVar6 + 1) {
                if (pSVar5->max_length <= uVar6) goto code_?;
                pSVar4 = pSVar5->vector[uVar6];
                if (pSVar4 == (String *)0x0) goto code_?;
                if (0 < (pSVar4->fields)._stringLength) {
                  this_00 = (this->fields).interestingLoggers;
                  if (this_00 == (HashSet_1_System_String_ *)0x0) goto code_?;
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                  HashSet_1_System_Object__Add
                            ((HashSet_1_System_Object_ *)this_00,(Object *)pSVar4,
                             MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                            );
                }
                bVar7 = mscorlib.dll::System::String::String_Equals_1
                                  (pSVar4,StringLiteral_Ptr,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  (this->fields).appendAll = 1;
                }
              }
              goto code_?;
            }
          }
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
          (*(type->klass->vtable).__unknown.methodPtr)(type,(type->klass->vtable).__unknown.method);
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
      if (bVar2 != 0) {
        return (ILogger *)type;
      }
      type = unaff_ESI;
      value = (Type *)func_?();
      if (value != (Type *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,unaff_EBP);
        (value->fields)._impl.value = this;
        func_?(&value->fields,this);
        value[1].klass = key;
        func_?(value + 1,key);
        pDVar1 = (this->fields).loggers;
        type = value;
        if (pDVar1 != (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)key,
                     (Object *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                    );
          return (ILogger *)type;
        }
      }
    }
  }
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
  pLStack_1 = (LoggerManager_Logger__Class *)0x0;
  pDVar2 = (this->fields).loggers;
  if (pDVar2 != (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)name,
                       (Object **)&pLStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                      );
    if (bVar3 != 0) {
      return (ILogger *)pLStack_1;
    }
    pLStack_1 = TypeInfo__LoggerManager__Logger;
    value = (LoggerManager_Logger__Class *)func_?();
    if (value != (LoggerManager_Logger__Class *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
      (value->_0).name = (char *)this;
      func_?(&(value->_0).name,this);
      (value->_0).namespaze = (char *)name;
      func_?(&(value->_0).namespaze,name);
      pDVar2 = (this->fields).loggers;
      pLStack_1 = value;
      if (pDVar2 != (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)name,
                   (Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                  );
        return (ILogger *)pLStack_1;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar5 = (ILogger *)(*pcVar4)();
  return pIVar5;
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
    uVar3 = 0;
    uVar4 = (pIVar2->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (pIVar2->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__IAppender) {
          pIVar5 = &pIVar2->klass->vtable + pIVar2->klass->interfaceOffsets[uVar3].offset;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pIVar5 = (IAppender__VTable *)func_?(pIVar2,TypeInfo__IAppender,0);
code_?:
    (*(pIVar5->Log).methodPtr)(pIVar2,loggerName,message,(pIVar5->Log).method);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_00 = (Dictionary_2_System_String_LoggerManager_Logger_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                           );
  if (this_00 != (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
              );
    (this->fields).loggers = this_00;
    func_?(&this->fields,this_00);
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
      method_00 = (MethodInfo *)&(this->fields).interestingLoggers;
      (this->fields).interestingLoggers = (HashSet_1_System_String_ *)this_01;
      func_?(method_00,this_01);
      (this->fields).appendAll = 1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      value = (Object *)func_?(TypeInfo__UnityLogAppender);
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EDI);
        (this->fields).appender = (IAppender *)value;
        func_?(&(this->fields).appender,value);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_isDebugBuild
                          ((MethodInfo *)0x0);
        (this->fields).appendAll = bVar1;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* LoggerManager get_Instance() */

LoggerManager * Assembly-CSharp.dll::LoggerManager::LoggerManager_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LoggerManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__LoggerManager->static_fields->instance == (LoggerManager *)0x0) {
    pLVar1 = (LoggerManager *)func_?(TypeInfo__LoggerManager);
    if (pLVar1 != (LoggerManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__
                       );
        func_?(&TypeInfo__System__Collections__Generic__HashSet<System::String>);
        func_?(&TypeInfo__UnityLogAppender);
        cRam_? = '\x01';
      }
      this = (Dictionary_2_System_String_LoggerManager_Logger_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                            );
      if (this != (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
                  );
        (pLVar1->fields).loggers = this;
        func_?(&pLVar1->fields,this);
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)
                  func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
        if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
          method_00 = (MethodInfo *)&(pLVar1->fields).interestingLoggers;
          (pLVar1->fields).interestingLoggers = (HashSet_1_System_String_ *)this_00;
          func_?(method_00,this_00);
          (pLVar1->fields).appendAll = 1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)pLVar1,ExceptionArgument__Enum_obj,method_00);
          value = (Object *)func_?(TypeInfo__UnityLogAppender);
          if (value != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (value,ExceptionArgument__Enum_obj,unaff_ESI);
            (pLVar1->fields).appender = (IAppender *)value;
            func_?(&(pLVar1->fields).appender,value);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_isDebugBuild
                              ((MethodInfo *)0x0);
            (pLVar1->fields).appendAll = bVar2;
            TypeInfo__LoggerManager->static_fields->instance = pLVar1;
            func_?();
            goto code_?;
          }
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    pLVar1 = (LoggerManager *)(*pcVar3)();
    return pLVar1;
  }
code_?:
  return TypeInfo__LoggerManager->static_fields->instance;
}

