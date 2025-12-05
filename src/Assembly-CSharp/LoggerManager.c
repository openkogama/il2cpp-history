
/* Void ApplySettingsFromIniFile() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_ApplySettingsFromIniFile
               (LoggerManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__FileStream);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__StreamReader);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ptr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral________LogSetup_ini);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  (this->fields).appendAll = 0;
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                     ((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar2,StringLiteral________LogSetup_ini,(MethodInfo *)0x0);
  this_01 = (FileStream *)FUN_?(TypeInfo__System__IO__FileStream);
  mscorlib.dll::System::IO::FileStream::FileStream__ctor_8
            (this_01,pSVar2,FileMode__Enum_OpenOrCreate,FileAccess__Enum_Read,FileShare__Enum_Read,
             0x1000,0,FileOptions__Enum_None,(MethodInfo *)0x0);
  this_02 = (StreamReader *)FUN_?();
  encoding = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  mscorlib.dll::System::IO::StreamReader::StreamReader__ctor_5
            (this_02,(Stream *)this_01,encoding,1,0x400,0,(MethodInfo *)0x0);
  if (this_02 != (StreamReader *)0x0) {
    pSVar2 = (String *)
             (*(this_02->klass->vtable).ReadLine.methodPtr)
                       (this_02,(this_02->klass->vtable).ReadLine.method);
    if (pSVar2 == (String *)0x0) {
code_?:
      if (this_02 != (StreamReader *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,this_02);
      }
      if (this_01 != (FileStream *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,this_01);
      }
      return;
    }
    lVar3 = FUN_?(TypeInfo__System__Char,1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
      }
      else {
        *(undefined2 *)(lVar3 + 0x20) = 0x2c;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        RStack_4._8_8_ = RStack_4._8_8_ & 0xffffffff;
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        RStack_4._pointer._value = (void *)(lVar3 + 0x20);
        RStack_4._length = *(undefined4 *)(lVar3 + 0x18);
        pSVar5 = mscorlib.dll::System::String::String_SplitInternal
                           (pSVar2,&RStack_4,0x7fffffff,StringSplitOptions__Enum_None,
                            (MethodInfo *)0x0);
        if (pSVar5 != (String__Array *)0x0) {
          for (; uVar6 = (uint)pSVar5->max_length, (int)uVar1 < (int)uVar6; uVar1 = uVar1 + 1) {
            if (uVar6 <= uVar1) goto code_?;
            pSVar2 = pSVar5->vector[(int)uVar1];
            if (pSVar2 == (String *)0x0) goto code_?;
            if (0 < (pSVar2->fields)._stringLength) {
              this_00 = (this->fields).interestingLoggers;
              if (this_00 == (HashSet_1_System_String_ *)0x0) goto code_?;
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__AddIfNotPresent
                        ((HashSet_1_System_Object_ *)this_00,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                         ->klass->rgctx_data[0x15].method);
            }
            if (pSVar2 == StringLiteral_Ptr) {
code_?:
              (this->fields).appendAll = 1;
            }
            else if ((StringLiteral_Ptr != (String *)0x0) &&
                    ((pSVar2->fields)._stringLength == (StringLiteral_Ptr->fields)._stringLength)) {
              bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar2->fields)._firstChar,
                                 (uint8_t *)&(StringLiteral_Ptr->fields)._firstChar,
                                 (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
              if (bVar7 != 0) goto code_?;
            }
          }
          goto code_?;
        }
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
  FUN_?();
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LoggerManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__LoggerManager->static_fields->instance = (LoggerManager *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__LoggerManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* ILogger GetLogger(Type) */

ILogger * Assembly-CSharp.dll::LoggerManager::LoggerManager_GetLogger
                    (LoggerManager *this,Type *type,MethodInfo *method)

{
  if (type == (Type *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pIVar2 = (ILogger *)(*pcVar1)();
    return pIVar2;
  }
  key = (Object *)
        (*(type->klass->vtable).__unknown.methodPtr)(type,(type->klass->vtable).__unknown.method);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LoggerManager__Logger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = (this->fields).loggers;
  apOStackX_10[0] = (Object *)0x0;
  if (pDVar3 == (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pIVar2 = (ILogger *)(*pcVar1)();
    return pIVar2;
  }
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar3,key,apOStackX_10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                    );
  if (bVar4 == 0) {
    apOStackX_10[0] = (Object *)FUN_?(TypeInfo__LoggerManager__Logger);
    apOStackX_10[0][1].klass = (Object__Class *)this;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(apOStackX_10[0] + 1) >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    iVar10 = iRam_?;
    apOStackX_10[0][1].monitor = (MonitorData *)key;
    if (iVar10 != 0) {
      uVar5 = (uint)((ulonglong)&apOStackX_10[0][1].monitor >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pDVar3 = (this->fields).loggers;
    if (pDVar3 == (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) goto DAT_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar3,key,apOStackX_10[0],0x82dcb702,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
               ->klass->rgctx_data[0x22].method);
  }
  return (ILogger *)apOStackX_10[0];
}


/* ILogger GetLogger(String) */

ILogger * Assembly-CSharp.dll::LoggerManager::LoggerManager_GetLogger_1
                    (LoggerManager *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LoggerManager__Logger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).loggers;
  pOStackX_8 = (Object *)0x0;
  if (pDVar1 == (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (ILogger *)(*pcVar2)();
    return pIVar3;
  }
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)name,&pOStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                    );
  if (bVar4 == 0) {
    pOStackX_8 = (Object *)FUN_?(TypeInfo__LoggerManager__Logger);
    pOStackX_8[1].klass = (Object__Class *)this;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(pOStackX_8 + 1) >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    iVar10 = iRam_?;
    pOStackX_8[1].monitor = (MonitorData *)name;
    if (iVar10 != 0) {
      uVar5 = (uint)((ulonglong)&pOStackX_8[1].monitor >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pDVar1 = (this->fields).loggers;
    if (pDVar1 == (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)name,pOStackX_8,
               0x82dcb702,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
               ->klass->rgctx_data[0x22].method);
  }
  return (ILogger *)pOStackX_8;
}


/* Void Log(String, String) */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_Log
               (LoggerManager *this,String *loggerName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAppender);
    LOCK();
    UNLOCK();
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
    FUN_?(0,TypeInfo__IAppender,pIVar2,loggerName,message);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* LoggerManager() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager__ctor(LoggerManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityLogAppender);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).loggers = (Dictionary_2_System_String_LoggerManager_Logger_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (HashSet_1_System_String_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields).interestingLoggers = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).interestingLoggers >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).appendAll = 1;
  pIVar6 = (IAppender *)FUN_?(TypeInfo__UnityLogAppender);
  bVar1 = iRam_? != 0;
  (this->fields).appender = pIVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).appender >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  bVar9 = (*pcRam_?)();
  (this->fields).appendAll = bVar9;
  return;
}


/* LoggerManager get_Instance() */

LoggerManager * Assembly-CSharp.dll::LoggerManager::LoggerManager_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LoggerManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = TypeInfo__LoggerManager->static_fields;
  if (pLVar1->instance == (LoggerManager *)0x0) {
    this = (LoggerManager *)FUN_?();
    LoggerManager__ctor(this,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    TypeInfo__LoggerManager->static_fields->instance = this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)TypeInfo__LoggerManager->static_fields >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLVar1 = TypeInfo__LoggerManager->static_fields;
  }
  return pLVar1->instance;
}

