
/* Type BindToType(String, String) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder::
       DefaultSerializationBinder_BindToType
                 (DefaultSerializationBinder *this,String *assemblyName,String *typeName,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._typeCache;
  if (this_00 !=
      (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Type_
       *)0x0) {
    key._targetType = (Type *)typeName;
    key._initialType = (Type *)assemblyName;
    pTVar1 = (Type *)Json::Utilities::ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System::Object]
                     ::ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object__Get
                               ((ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *)
                                this_00,key,
                                MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__Get_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                               );
    return pTVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar2)();
  return pTVar1;
}


/* Type GetTypeFromTypeNameKey(DefaultSerializationBinder+TypeNameKey) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder::
       DefaultSerializationBinder_GetTypeFromTypeNameKey
                 (DefaultSerializationBinder_TypeNameKey typeNameKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (typeNameKey.AssemblyName == (String *)0x0) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pSVar1 = (String *)func_?(typeNameKey.TypeName,&UNK_?);
    pTVar2 = mscorlib.dll::System::Type::Type_GetType(pSVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Type *)0x0) {
      pTVar2 = mscorlib.dll::System::Type::Type_GetType(typeNameKey.TypeName,(MethodInfo *)0x0);
    }
    return pTVar2;
  }
  message = mscorlib.dll::System::Reflection::Assembly::Assembly_Load
                      (typeNameKey.AssemblyName,(MethodInfo *)0x0);
  if (message == (Assembly *)0x0) {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(pOVar4,0);
    func_?(pOVar4,typeNameKey.AssemblyName);
    func_?(0,typeNameKey.AssemblyName);
    message = (Assembly *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Could_not_load_assembly___0___,(IFormatProvider *)pCVar3,
                         pOVar4,(MethodInfo *)0x0);
    pJVar5 = (JsonSchemaException *)
             func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (pJVar5,(String *)message,(MethodInfo *)0x0);
    typeNameKey.TypeName = (String *)0x0;
    func_?();
  }
  else {
    pTVar2 = (Type *)(*(code *)(message->klass->vtable).GetType_1.method)
                               (message,typeNameKey.TypeName,
                                (message->klass->vtable).GetType_2.methodPtr);
    if (pTVar2 != (Type *)0x0) {
      return pTVar2;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,2);
  func_?(pOVar4,0);
  func_?(pOVar4,typeNameKey.TypeName);
  func_?(0,typeNameKey.TypeName);
  func_?(message,0);
  uVar6 = func_?(6,message);
  func_?(pOVar4,0);
  func_?(pOVar4,uVar6);
  func_?(1,uVar6);
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Could_not_find_type___0___in_ass,(IFormatProvider *)pCVar3,
                      pOVar4,(MethodInfo *)0x0);
  pJVar5 = (JsonSchemaException *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar5,pSVar1,(MethodInfo *)0x0);
  func_?(pJVar5);
  pcVar7 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar7)();
  return pTVar2;
}


/* DefaultSerializationBinder() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder::
     DefaultSerializationBinder__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
         func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->vtable).Equals
              .methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).cctor_started == 0
     )) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  }
  if (TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
      __f__mg_cache0 ==
      (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Type_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__Func_System__Object__void__
              );
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->vtable).
                Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).cctor_started ==
        0)) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
    }
    TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
    __f__mg_cache0 =
         (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Type_ *)
         this_00;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->vtable).Equals
              .methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).cctor_started == 0
     )) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  }
  creator = (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *)
            TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
            __f__mg_cache0;
  this_01 = (WinningConditionDebriefing *)
            func_?(
                           TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                           );
  Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::Serialization::
  DefaultSerializationBinder+TypeNameKey,System::Object]::
  ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object___ctor
            ((ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
              *)this_01,creator,
             MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__ThreadSafeStore_System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>_
            );
  if (this != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this->fields)._this = this_01;
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->Instance =
         (DefaultSerializationBinder *)this;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DefaultSerializationBinder() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder::
     DefaultSerializationBinder__ctor(DefaultSerializationBinder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->vtable).Equals
              .methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).cctor_started == 0
     )) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  }
  if (TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
      __f__mg_cache0 ==
      (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Type_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__Func_System__Object__void__
              );
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->vtable).
                Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).cctor_started ==
        0)) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
    }
    TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
    __f__mg_cache0 =
         (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Type_ *)
         this_00;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->vtable).Equals
              .methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).cctor_started == 0
     )) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  }
  creator = (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *)
            TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
            __f__mg_cache0;
  this_01 = (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Type_
             *)func_?(
                              TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                              );
  Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::Serialization::
  DefaultSerializationBinder+TypeNameKey,System::Object]::
  ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object___ctor
            ((ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
              *)this_01,creator,
             MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__ThreadSafeStore_System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>_
            );
  if (this != (DefaultSerializationBinder *)0x0) {
    (this->fields)._typeCache = this_01;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

