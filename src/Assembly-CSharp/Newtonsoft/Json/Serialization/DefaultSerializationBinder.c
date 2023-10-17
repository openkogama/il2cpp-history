
/* Type BindToType(String, String) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder::
       DefaultSerializationBinder_BindToType
                 (DefaultSerializationBinder *this,String *assemblyName,String *typeName,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__Get_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._typeCache;
  uStack_1 = ZEXT48(assemblyName);
  func_?(&uStack_1,assemblyName);
  uStack_1._4_4_ = typeName;
  func_?((int)&uStack_1 + 4,typeName);
  if (this_00 !=
      (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Type_
       *)0x0) {
    key.TypeName = uStack_1._4_4_;
    key.AssemblyName = (String *)uStack_1;
    pTVar2 = (Type *)Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::Serialization::
                     DefaultSerializationBinder+TypeNameKey,System::Object]::
                     ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Get
                               ((ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                                 *)this_00,key,
                                MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__Get_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                               );
    return pTVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar3)();
  return pTVar2;
}


/* Type GetTypeFromTypeNameKey(DefaultSerializationBinder+TypeNameKey) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder::
       DefaultSerializationBinder_GetTypeFromTypeNameKey
                 (DefaultSerializationBinder_TypeNameKey typeNameKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                   );
    func_?(&MethodInfo__System__Type__GetType_System__String_);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (typeNameKey.AssemblyName == (String *)0x0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar1 = (Type *)func_?(typeNameKey.TypeName,
                                     MethodInfo__System__Type__GetType_System__String_,
                                     MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                                    );
    return pTVar1;
  }
  left = mscorlib.dll::System::Reflection::Assembly::Assembly_Load
                   (typeNameKey.AssemblyName,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::Reflection::Assembly::Assembly_op_Equality
                    (left,(Assembly *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (left == (Assembly *)0x0) goto code_?;
    pTVar1 = (Type *)(*(left->klass->vtable).GetType.methodPtr)(left,typeNameKey.TypeName);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar1,(Object **)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return pTVar1;
    }
    func_?();
    func_?();
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    uVar3 = func_?();
    func_?(args);
    func_?(args,uVar3);
    func_?();
    ppSVar4 = &StringLiteral_Could_not_find_type___0___in_ass;
  }
  else {
    uVar3 = func_?();
    func_?(uVar3);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?(args);
    func_?(args,typeNameKey.AssemblyName);
    func_?();
    ppSVar4 = &StringLiteral_Could_not_load_assembly___0___;
  }
  method_00 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(ppSVar4);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar5,(IFormatProvider *)provider,args,method_00);
  uVar3 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this = (JsonSerializationException *)func_?(uVar3);
  func_?(this);
  JsonSerializationException::JsonSerializationException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                 );
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar6)();
  return pTVar1;
}


/* DefaultSerializationBinder() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder::
     DefaultSerializationBinder__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
    cRam_? = '\x01';
  }
  this = (TweenRunner_1_FloatTween_ *)
         func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  if (this != (TweenRunner_1_FloatTween_ *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                     );
      func_?(&
                      TypeInfo__System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                     );
      func_?(&
                      MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__ThreadSafeStore_System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>_
                     );
      func_?(&
                      TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                     );
      cRam_? = '\x01';
    }
    this_00 = (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *
              )func_?(
                              TypeInfo__System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                              );
    if (this_00 !=
        (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *)0x0)
    {
      mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
      DefaultSerializationBinder+TypeNameKey,Object]::
      Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                 ,(MethodInfo *)0x0);
      this_01 = (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                 *)func_?(
                                  TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                                  );
      if (this_01 !=
          (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
           *)0x0) {
        Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::Serialization::
        DefaultSerializationBinder+TypeNameKey,System::Object]::
        ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object___ctor
                  (this_01,this_00,
                   MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__ThreadSafeStore_System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>_
                  );
        (this->fields).m_CoroutineContainer = (MonoBehaviour *)this_01;
        func_?(&this->fields,this_01);
        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
        TweenRunner_1_FloatTween___ctor(this,(MethodInfo *)0x0);
        TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
        Instance = (DefaultSerializationBinder *)this;
        func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->
                        static_fields,this);
        return;
      }
    }
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
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
                   );
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__ThreadSafeStore_System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *)
            func_?(
                           TypeInfo__System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                           );
  if (this_00 !=
      (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *)0x0) {
    mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,Object]::
    Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
              (this_00,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__GetTypeFromTypeNameKey_Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey_
               ,(MethodInfo *)0x0);
    this_01 = (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Type_
               *)func_?(
                                TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>
                                );
    if (this_01 !=
        (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Type_
         *)0x0) {
      Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::Serialization::
      DefaultSerializationBinder+TypeNameKey,System::Object]::
      ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object___ctor
                ((ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                  *)this_01,this_00,
                 MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>__ThreadSafeStore_System__Func<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,_System::Type>_
                );
      (this->fields)._typeCache = this_01;
      func_?(&this->fields,this_01);
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

