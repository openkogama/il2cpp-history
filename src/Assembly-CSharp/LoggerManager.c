
/* Void ApplySettingsFromIniFile() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_ApplySettingsFromIniFile
               (LoggerManager *this,MethodInfo *method)

{
  pUVar1 = (UnityWebRequest *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  (this->fields).appendAll = 0;
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar2,StringLiteral________LogSetup_ini,(MethodInfo *)0x0);
  this_01 = (FileStream *)func_?();
  mscorlib.dll::System::IO::FileStream::FileStream__ctor_2
            (this_01,pSVar2,FileMode__Enum_OpenOrCreate,FileAccess__Enum_Read,(MethodInfo *)0x0);
  separator = (IDisposable__Class *)func_?(TypeInfo__System__IO__StreamReader);
  mscorlib.dll::System::IO::StreamReader::StreamReader__ctor_1
            ((StreamReader *)separator,(Stream *)this_01,(MethodInfo *)0x0);
  if (separator != (IDisposable__Class *)0x0) {
    item = (UnityWebRequest *)&UNK_?;
    pIVar3 = separator;
    pSVar2 = (String *)(*(code *)(separator->_0).image[6].assembly)();
    if (pSVar2 == (String *)0x0) {
code_?:
      iVar4 = 0;
      (pIVar3->_0).image = (Il2CppImage *)0xa6;
      if (separator != (IDisposable__Class *)0x0) {
        item = (UnityWebRequest *)0x0;
        pIVar3 = TypeInfo__System__IDisposable;
        func_?();
      }
      if ((pIVar3->_0).image == (Il2CppImage *)0xa6) {
        iVar4 = -1;
      }
      (&(pIVar3->_0).gc_desc)[iVar4] = (void *)0xb8;
      if (item != (UnityWebRequest *)0x0) {
        func_?();
      }
      *unaff_FS_OFFSET = pUVar1;
      return;
    }
    item = (UnityWebRequest *)&UNK_?;
    pIVar3 = (IDisposable__Class *)TypeInfo__System__Char;
    separator = (IDisposable__Class *)func_?();
    if (separator != (IDisposable__Class *)0x0) {
      if ((separator->_0).namespaze == (char *)0x0) {
        func_?();
        func_?();
code_?:
        func_?();
        func_?();
      }
      else {
        *(undefined2 *)&(separator->_0).byval_arg.data = 0x2c;
        pSVar5 = mscorlib.dll::System::String::String_Split
                           (pSVar2,(Char__Array *)separator,(MethodInfo *)0x0);
        uVar6 = 0;
        while (pSVar5 != (String__Array *)0x0) {
          if ((int)pSVar5->max_length <= (int)uVar6) goto code_?;
          if (pSVar5->max_length <= uVar6) goto code_?;
          item = (UnityWebRequest *)pSVar5->vector[uVar6];
          if (item == (UnityWebRequest *)0x0) break;
          pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)item,(MethodInfo *)0x0);
          if (0 < (int)pIVar7) {
            this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                      (this->fields).interestingLoggers;
            if (this_00 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) break;
            pUVar1 = item;
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      (this_00,item,
                       MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                      );
          }
          pIVar3 = (IDisposable__Class *)StringLiteral_Ptr;
          bVar8 = mscorlib.dll::System::String::String_Equals_2
                            ((String *)item,StringLiteral_Ptr,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            (this->fields).appendAll = 1;
          }
          uVar6 = uVar6 + 1;
        }
      }
    }
  }
  func_?();
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  TypeInfo__LoggerManager->static_fields->instance = (LoggerManager *)0x0;
  return;
}


/* ILogger GetLogger(Type) */

ILogger_1 *
Assembly-CSharp.dll::LoggerManager::LoggerManager_GetLogger
          (LoggerManager *this,Type *type,MethodInfo *method)

{
  if (type != (Type *)0x0) {
    key = (MethodInfo *)
          (*(code *)(type->klass->vtable).__unknown.method)
                    (type,(type->klass->vtable).get_ReflectedType.methodPtr);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    type = (Type *)0x0;
    this_00 = (Dictionary_2_System_String_UnityEngine_Sprite_ *)(this->fields).loggers;
    if (this_00 != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
      method_00 = key;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
              Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                        (this_00,(String *)key,(Sprite **)&type,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                        );
      if (bVar1 == 0) {
        this_02 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
        (this_02->fields)._._._._.m_CachedPtr = this;
        (this_02->fields).state = (int32_t)key;
        this_01 = (this->fields).loggers;
        type = (Type *)this_02;
        if (this_01 == (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)this_01,(String *)key,(CrossPlatformInputManager_VirtualButton *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                  );
      }
      return (ILogger_1 *)type;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (ILogger_1 *)(*pcVar2)();
  return pIVar3;
}


/* ILogger GetLogger(String) */

ILogger_1 *
Assembly-CSharp.dll::LoggerManager::LoggerManager_GetLogger_1
          (LoggerManager *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLStack_1 = (LoggerManager_Logger__Class *)0x0;
  this_00 = (Dictionary_2_System_String_UnityEngine_Sprite_ *)(this->fields).loggers;
  if (this_00 != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
    method_00 = (MethodInfo *)name;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
            Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                      (this_00,name,(Sprite **)&pLStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__TryGetValue_System__String__LoggerManager__Logger__
                      );
    if (bVar2 == 0) {
      pLStack_1 = TypeInfo__LoggerManager__Logger;
      this_02 = (LoggerManager_Logger__Class *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this_02,0.0,method_00);
      (((ScaleAnimationBase__Fields *)&(this_02->_0).name)->_)._._._.m_CachedPtr = this;
      (this_02->_0).namespaze = (char *)name;
      this_01 = (this->fields).loggers;
      pLStack_1 = this_02;
      if (this_01 == (Dictionary_2_System_String_LoggerManager_Logger_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_01,name,(CrossPlatformInputManager_VirtualButton *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Add_System__String__LoggerManager__Logger_
                );
    }
    return (ILogger_1 *)pLStack_1;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar4 = (ILogger_1 *)(*pcVar3)();
  return pIVar4;
}


/* Void Log(String, String) */

void Assembly-CSharp.dll::LoggerManager::LoggerManager_Log
               (LoggerManager *this,String *loggerName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).appendAll == 0) {
    this_00 = (this->fields).interestingLoggers;
    if (this_00 == (HashSet_1_System_String_ *)0x0) goto code_?;
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)this_00,
                       (NativeAdType__Enum)loggerName,
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
          ppMVar6 = &(&pIVar2->klass->vtable)[pIVar3->interfaceOffsets[uVar4].offset].Log.method;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_LoggerManager_Logger_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
            );
  (this->fields).loggers = this_00;
  method_00 = TypeInfo__System__Collections__Generic__HashSet<System::String>;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
  (this->fields).interestingLoggers = (HashSet_1_System_String_ *)this_01;
  (this->fields).appendAll = 1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__UnityLogAppender);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).appender = (IAppender *)this_02;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_isDebugBuild
                    ((MethodInfo *)0x0);
  (this->fields).appendAll = bVar1;
  return;
}


/* LoggerManager get_Instance() */

LoggerManager * Assembly-CSharp.dll::LoggerManager::LoggerManager_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  if (TypeInfo__LoggerManager->static_fields->instance == (LoggerManager *)0x0) {
    this = (ScaleAnimationBase *)func_?(TypeInfo__LoggerManager);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_LoggerManager::Logger>__Dictionary__
              );
    (this->fields)._._._._.m_CachedPtr = pHVar1;
    method_00 = TypeInfo__System__Collections__Generic__HashSet<System::String>;
    pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar1,MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
    (this->fields).state = (int32_t)pHVar1;
    *(undefined1 *)&(this->fields).originalScale.x = 1;
    ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
    this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__UnityLogAppender);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).originalScale.y = (float)this_00;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_isDebugBuild
                      ((MethodInfo *)0x0);
    *(bool *)&(this->fields).originalScale.x = bVar2;
    if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__LoggerManager);
    }
    TypeInfo__LoggerManager->static_fields->instance = (LoggerManager *)this;
  }
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
    return TypeInfo__LoggerManager->static_fields->instance;
  }
  return TypeInfo__LoggerManager->static_fields->instance;
}

