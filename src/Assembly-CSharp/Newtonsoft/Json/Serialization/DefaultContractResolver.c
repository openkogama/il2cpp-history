
/* Boolean CanConvertToString(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_CanConvertToString(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  this = Json::Utilities::ConvertUtils::ConvertUtils_GetConverter(type,(MethodInfo *)0x0);
  if (this != (TypeConverter *)0x0) {
    bVar1 = (TypeInfo__System__ComponentModel__ComponentConverter->_1).naturalAligment;
    if (((this->klass->_1).naturalAligment < bVar1) ||
       ((this->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__System__ComponentModel__ComponentConverter)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pTVar3 = (TypeConverter *)0x0;
    if (bVar2) {
      pTVar3 = this;
    }
    if ((pTVar3 == (TypeConverter *)0x0) &&
       (iVar4 = func_?(this,TypeInfo__System__ComponentModel__ReferenceConverter),
       iVar4 == 0)) {
      pTVar5 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      pIVar6 = TypeRef__System__ComponentModel__TypeConverter;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      pIVar6 = TypeRef__System__String;
      if (pTVar5 != pTVar7) {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        bVar8 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertTo
                          (this,pTVar5,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          return 1;
        }
      }
    }
  }
  pIVar6 = TypeRef__System__Type;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
  pIVar6 = TypeRef__System__Type;
  if (type != pTVar5) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    if (type == (Type *)0x0) {
      func_?();
      pcVar9 = (code *)swi(3);
      bVar8 = (*pcVar9)();
      return bVar8;
    }
    cVar10 = (*(code *)(type->klass->vtable).IsSubclassOf.method)(type);
    if (cVar10 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* JsonArrayContract CreateArrayContract(Type) */

JsonArrayContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateArrayContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonArrayContract *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
  JsonArrayContract::JsonArrayContract__ctor(this_00,objectType,(MethodInfo *)0x0);
  DefaultContractResolver_InitializeContract(this,(JsonContract *)this_00,(MethodInfo *)0x0);
  return this_00;
}


/* IList`1[Newtonsoft.Json.Serialization.JsonProperty] CreateConstructorParameters(ConstructorInfo,
   JsonPropertyCollection) */

IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateConstructorParameters
          (DefaultContractResolver *this,ConstructorInfo *constructor,
          JsonPropertyCollection *memberProperties,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (constructor != (ConstructorInfo *)0x0) {
    iVar1 = (*(code *)(constructor->klass->vtable).__unknown_6.method)
                      (constructor,(constructor->klass->vtable).GetParameterCount.methodPtr);
    pTVar2 = (Type *)(*(code *)(constructor->klass->vtable).__unknown.method)
                               (constructor,(constructor->klass->vtable).get_MemberType.methodPtr);
    this_00 = (JsonProperty *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::
    Json::Serialization::JsonProperty]::
    KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
              ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)
               this_00,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
              );
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)pTVar2,StringLiteral_type,(MethodInfo *)0x0);
    (this_00->fields)._PropertyType_k__BackingField = pTVar2;
    constructor = (ConstructorInfo *)0x0;
    if (iVar1 != 0) {
      ppMVar3 = (MonitorData **)(iVar1 + 0x10);
      while( true ) {
        if ((int)*(ConstructorInfo **)(iVar1 + 0xc) <= (int)constructor) {
          return (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00;
        }
        if (*(ConstructorInfo **)(iVar1 + 0xc) <= constructor) break;
        pMVar4 = *ppMVar3;
        if (pMVar4 == (MonitorData *)0x0) goto code_?;
        propertyName = (String *)
                       (**(code **)(*(int *)pMVar4 + 0x108))
                                 (pMVar4,*(undefined4 *)(*(int *)pMVar4 + 0x10c));
        if (memberProperties == (JsonPropertyCollection *)0x0) goto code_?;
        this_00 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                            (memberProperties,propertyName,StringComparison__Enum_Ordinal,
                             (MethodInfo *)0x0);
        if (this_00 == (JsonProperty *)0x0) {
          this_00 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                              (memberProperties,(String *)0x0,
                               StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0);
          if (this_00 != (JsonProperty *)0x0) goto code_?;
        }
        else {
code_?:
          pTVar2 = (this_00->fields)._PropertyType_k__BackingField;
          pTVar5 = (Type *)func_?(6,pMVar4);
          if (pTVar2 != pTVar5) {
            this_00 = (JsonProperty *)0x0;
          }
        }
        property = (JsonProperty *)func_?();
        if (property != (JsonProperty *)0x0) {
          JsonPropertyCollection::JsonPropertyCollection_AddProperty
                    ((JsonPropertyCollection *)this_00,property,(MethodInfo *)0x0);
        }
        constructor = (ConstructorInfo *)((int)&constructor->klass + 1);
        iVar1 = 9;
        ppMVar3 = &this->monitor;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pIVar8 = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)(*pcVar7)();
  return pIVar8;
}


/* JsonContract CreateContract(Type) */

JsonContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  type = Json::Utilities::ReflectionUtils::ReflectionUtils_EnsureNotNullableType
                   (objectType,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonConvert::JsonConvert_IsJsonPrimitiveType(type,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pJVar2 = (JsonContract *)(*(code *)(this->klass->vtable).CreatePrimitiveContract.method)(this);
    return pJVar2;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?();
  }
  pJVar3 = JsonTypeReflector::JsonTypeReflector_GetJsonObjectAttribute(type,(MethodInfo *)0x0);
  if (pJVar3 != (JsonObjectAttribute *)0x0) {
    pJVar2 = (JsonContract *)(**(code **)(iRam_? + 0xf8))();
    return pJVar2;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?();
  }
  pJVar4 = JsonTypeReflector::JsonTypeReflector_GetJsonArrayAttribute(type,(MethodInfo *)0x0);
  pIVar5 = TypeRef__Newtonsoft__Json__Linq__JToken;
  if (pJVar4 != (JsonArrayAttribute *)0x0) {
    pJVar2 = (JsonContract *)(**(code **)(_UNK_? + 0x120))();
    return pJVar2;
  }
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
  pIVar5 = TypeRef__Newtonsoft__Json__Linq__JToken;
  if (type != pTVar6) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    if (type != (Type *)0x0) {
      cVar7 = (*(code *)(type->klass->vtable).IsSubclassOf.method)();
      if (cVar7 != '\0') goto code_?;
      bVar1 = Json::Utilities::CollectionUtils::CollectionUtils_IsDictionaryType
                        (type,(MethodInfo *)0x0);
      pIVar5 = TypeRef__System__Collections__IEnumerable;
      if (bVar1 != 0) {
        pJVar2 = (JsonContract *)(**(code **)(_UNK_? + 0x118))();
        return pJVar2;
      }
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTStack8 =
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
      if (pTStack8 != (Type *)0x0) {
        pTStack9 = type;
        cVar7 = func_?();
        if (cVar7 != '\0') {
          pJVar2 = (JsonContract *)func_?();
          return pJVar2;
        }
        if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                    Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
            == 0)) {
          func_?();
        }
        bVar1 = DefaultContractResolver_CanConvertToString(type,(MethodInfo *)0x0);
        pIVar5 = TypeRef__System__Runtime__Serialization__ISerializable;
        if (bVar1 != 0) {
          pJVar2 = (JsonContract *)(**(code **)(_UNK_? + 0x140))();
          return pJVar2;
        }
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pTStack8 =
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
        if (pTStack8 != (Type *)0x0) {
          pTStack9 = type;
          cVar7 = func_?();
          if (cVar7 == '\0') {
            pTStack9 = type;
            pJVar2 = (JsonContract *)func_?();
            return pJVar2;
          }
          pTStack9 = *(Type **)(_UNK_? + 0x13c);
          pTStack8 = type;
          pJVar2 = (JsonContract *)(**(code **)(_UNK_? + 0x138))();
          return pJVar2;
        }
      }
    }
    pTStack9 = (Type *)0x0;
    func_?();
    pcVar10 = (code *)swi(3);
    pJVar2 = (JsonContract *)(*pcVar10)();
    return pJVar2;
  }
code_?:
  pJVar2 = (JsonContract *)(**(code **)(_UNK_? + 0x130))();
  return pJVar2;
}


/* JsonDictionaryContract CreateDictionaryContract(Type) */

JsonDictionaryContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateDictionaryContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonDictionaryContract *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
  JsonDictionaryContract::JsonDictionaryContract__ctor(pJVar1,objectType,(MethodInfo *)0x0);
  DefaultContractResolver_InitializeContract(this,(JsonContract *)pJVar1,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Func<System::String,_System::String>);
  if (this != (DefaultContractResolver *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,this->klass[1]._0.image,
               MethodInfo__System__Func<System::String,_System::String>__Func_System__Object__void__
              );
    if (pJVar1 != (JsonDictionaryContract *)0x0) {
      (pJVar1->fields)._PropertyNameResolver_k__BackingField = (Func_2_String_String_ *)this_00;
      return pJVar1;
    }
  }
  uStack2 = 0;
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JsonDictionaryContract *)(*pcVar3)();
  return pJVar1;
}


/* JsonISerializableContract CreateISerializableContract(Type) */

JsonISerializableContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateISerializableContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonISerializableContract *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)pJVar1,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)objectType,StringLiteral_underlyingType,(MethodInfo *)0x0);
  (pJVar1->fields)._._UnderlyingType_k__BackingField = objectType;
  (pJVar1->fields)._._CreatedType_k__BackingField = objectType;
  DefaultContractResolver_InitializeContract(this,(JsonContract *)pJVar1,(MethodInfo *)0x0);
  types = (Type__Array *)func_?(TypeInfo__System__Type,2);
  handle = TypeRef__System__Runtime__Serialization__SerializationInfo;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (types == (Type__Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    if ((pTVar2 != (Type *)0x0) && (iVar3 = func_?(), iVar3 == 0)) goto code_?;
    if (types->max_length == 0) goto code_?;
    types->vector[0] = pTVar2;
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__System__Runtime__Serialization__StreamingContext
                        ,(MethodInfo *)0x0);
    if ((pTVar2 == (Type *)0x0) || (iVar3 = func_?(), iVar3 != 0)) {
      if (types->max_length < 2) goto code_?;
      types->vector[1] = pTVar2;
      pCVar4 = mscorlib.dll::System::Type::Type_GetConstructor_1
                         ((Type *)&UNK_?,
                          BindingFlags__Enum_NonPublic|BindingFlags__Enum_Public|
                          BindingFlags__Enum_Instance,(Binder *)0x0,types,
                          (ParameterModifier__Array *)0x0,(MethodInfo *)0x0);
      if (pCVar4 == (ConstructorInfo *)0x0) {
        return pJVar1;
      }
      this_00 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
        func_?();
      }
      pRVar5 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory((MethodInfo *)0x0)
      ;
      if (pRVar5 != (ReflectionDelegateFactory *)0x0) {
        puVar6 = (undefined4 *)func_?();
        pvVar7 = (void *)(*(code *)*puVar6)();
        if (this_00 != (ScaleAnimationBase *)0x0) {
          (this_00->fields)._._._._.m_CachedPtr = pvVar7;
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)this_00,
                     MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___CreateISerializableContract_c__AnonStorey0____m__0_System__Object____
                     ,
                     MethodInfo__Newtonsoft__Json__Serialization__ObjectConstructor<System::Object>__ObjectConstructor_System__Object__void__
                    );
          (pJVar1->fields)._ISerializableCreator_k__BackingField =
               (ObjectConstructor_1_System_Object_ *)this_01;
          return pJVar1;
        }
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar1 = (JsonISerializableContract *)(*pcVar8)();
  return pJVar1;
}


/* JsonLinqContract CreateLinqContract(Type) */

JsonLinqContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateLinqContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  contract = (JsonContract *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)contract,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)objectType,StringLiteral_underlyingType,(MethodInfo *)0x0);
  (contract->fields)._UnderlyingType_k__BackingField = objectType;
  (contract->fields)._CreatedType_k__BackingField = objectType;
  DefaultContractResolver_InitializeContract(this,contract,(MethodInfo *)0x0);
  return (JsonLinqContract *)contract;
}


/* IValueProvider CreateMemberValueProvider(MemberInfo) */

IValueProvider *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateMemberValueProvider
          (DefaultContractResolver *this,MemberInfo_1 *member,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ReflectionValueProvider *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__ReflectionValueProvider);
  ReflectionValueProvider::ReflectionValueProvider__ctor(this_00,member,(MethodInfo *)0x0);
  return (IValueProvider *)this_00;
}


/* JsonObjectContract CreateObjectContract(Type) */

JsonObjectContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateObjectContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonObjectContract *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)pJVar1,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)objectType,StringLiteral_underlyingType,(MethodInfo *)0x0);
  (pJVar1->fields)._._UnderlyingType_k__BackingField = objectType;
  (pJVar1->fields)._._CreatedType_k__BackingField = objectType;
  pJVar2 = (JsonPropertyCollection *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Serialization::JsonProperty]::
  KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar2,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
            );
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)objectType,StringLiteral_type,(MethodInfo *)0x0);
  (pJVar2->fields)._type = objectType;
  value = (pJVar1->fields)._._UnderlyingType_k__BackingField;
  (pJVar1->fields)._Properties_k__BackingField = pJVar2;
  pJVar2 = (JsonPropertyCollection *)func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Serialization::JsonProperty]::
  KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar2,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
            );
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)value,StringLiteral_type,(MethodInfo *)0x0);
  (pJVar2->fields)._type = (Type *)&UNK_?;
  (pJVar1->fields)._ConstructorParameters_k__BackingField = pJVar2;
  DefaultContractResolver_InitializeContract(this,(JsonContract *)pJVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?();
  }
  MVar3 = JsonTypeReflector::JsonTypeReflector_GetObjectMemberSerialization
                    (objectType,(MethodInfo *)0x0);
  pJVar2 = (pJVar1->fields)._Properties_k__BackingField;
  (pJVar1->fields)._MemberSerialization_k__BackingField = MVar3;
  pIVar4 = (IEnumerable_1_System_Reflection_MemberInfo_ *)
           (*(code *)(this->klass->vtable).CreateProperties.method)();
  Json::Utilities::CollectionUtils::CollectionUtils_AddRange_4
            ((IList_1_System_Reflection_MemberInfo_ *)pJVar2,pIVar4,
             void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<Newtonsoft::Json::Serialization::JsonProperty>_System__Collections__Generic__IList<Newtonsoft::Json::Serialization::JsonProperty>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_
            );
  if (objectType != (Type *)0x0) {
    source = (IEnumerable_1_System_Reflection_ConstructorInfo_ *)
             (*(code *)(objectType->klass->vtable).__unknown_29.method)();
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?();
    }
    if (TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
        __f__am_cache2 == (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___CreateObjectContract_m__2_System__Reflection__ConstructorInfo_
                 ,
                 MethodInfo__System__Func<System::Reflection::ConstructorInfo,_bool>__Func_System__Object__void__
                );
      if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                  Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started ==
          0)) {
        func_?();
      }
      TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
      __f__am_cache2 = (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)this_00;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?();
    }
    bVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_8
                      (source,TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                              static_fields->__f__am_cache2,
                       bool_MethodInfo__System__Linq__Enumerable__Any<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>__System__Func<System::Reflection::ConstructorInfo,_bool>_
                      );
    if (bVar5 == 0) {
      if (((pJVar1->fields)._._DefaultCreator_k__BackingField != (Func_1_Object_ *)0x0) &&
         ((pJVar1->fields)._._DefaultCreatorNonPublic_k__BackingField == 0)) {
        return pJVar1;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      iVar6 = (*(code *)(objectType->klass->vtable).__unknown_29.method)();
      if (iVar6 == 0) goto code_?;
      iVar6 = func_?();
      if (iVar6 != 1) {
        return pJVar1;
      }
      pCStack7 = (ConstructorInfo *)func_?();
      if (pCStack7 == (ConstructorInfo *)0x0) {
        return pJVar1;
      }
      (pJVar1->fields)._ParametrizedConstructor_k__BackingField = pCStack7;
      pDVar8 = this->klass;
      pIStack9 = (pDVar8->vtable).CreatePropertyFromConstructorParameter.methodPtr;
      pJStack10 = (pJVar1->fields)._Properties_k__BackingField;
    }
    else {
      pCStack7 =
           DefaultContractResolver_GetAttributeConstructor(this,objectType,(MethodInfo *)0x0);
      if (pCStack7 == (ConstructorInfo *)0x0) {
        return pJVar1;
      }
      (pJVar1->fields)._OverrideConstructor_k__BackingField = pCStack7;
      pDVar8 = this->klass;
      pIStack9 = (pDVar8->vtable).CreatePropertyFromConstructorParameter.methodPtr;
      pJStack10 = (pJVar1->fields)._Properties_k__BackingField;
    }
    pJVar2 = (pJVar1->fields)._ConstructorParameters_k__BackingField;
    pIVar4 = (IEnumerable_1_System_Reflection_MemberInfo_ *)
             (*(code *)(pDVar8->vtable).CreateConstructorParameters.method)();
    Json::Utilities::CollectionUtils::CollectionUtils_AddRange_4
              ((IList_1_System_Reflection_MemberInfo_ *)pJVar2,pIVar4,
               void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<Newtonsoft::Json::Serialization::JsonProperty>_System__Collections__Generic__IList<Newtonsoft::Json::Serialization::JsonProperty>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_
              );
    return pJVar1;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pJVar1 = (JsonObjectContract *)(*pcVar11)();
  return pJVar1;
}


/* JsonPrimitiveContract CreatePrimitiveContract(Type) */

JsonPrimitiveContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreatePrimitiveContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  contract = (JsonContract *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)contract,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)objectType,StringLiteral_underlyingType,(MethodInfo *)0x0);
  (contract->fields)._UnderlyingType_k__BackingField = objectType;
  (contract->fields)._CreatedType_k__BackingField = objectType;
  DefaultContractResolver_InitializeContract(this,contract,(MethodInfo *)0x0);
  return (JsonPrimitiveContract *)contract;
}


/* IList`1[Newtonsoft.Json.Serialization.JsonProperty] CreateProperties(Type, MemberSerialization)
    */

IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateProperties
          (DefaultContractResolver *this,Type *type,MemberSerialization__Enum memberSerialization,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)
            (*(code *)(this->klass->vtable).GetSerializableMembers.method)
                      (this,type,(this->klass->vtable).CreateObjectContract.methodPtr);
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
    this_03 = (JsonSchemaException *)
              func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (this_03,StringLiteral_Null_collection_of_seralizable_m,(MethodInfo *)0x0);
    func_?();
  }
  else {
    this_01 = (JsonPropertyCollection *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::
    Json::Serialization::JsonProperty]::
    KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
              ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)
               this_01,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
              );
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
    (this_01->fields)._type = type;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_00,
               MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      do {
        cVar4 = func_?();
        if (cVar4 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
              == 0)) {
            func_?();
          }
          if (TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
              __f__am_cache4 == (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Int32_ *)0x0) {
            this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_02,(Object *)0x0,
                       MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___CreateProperties_m__4_Newtonsoft__Json__Serialization__JsonProperty_
                       ,
                       MethodInfo__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_int>__Func_System__Object__void__
                      );
            if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable)
                        .Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
                cctor_started == 0)) {
              func_?();
            }
            TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
            __f__am_cache4 = (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Int32_ *)this_02;
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
              == 0)) {
            func_?();
          }
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                             ((IOrderedEnumerable_1_System_Object_ *)this_01,
                              (Func_2_Object_Int64_ *)
                              TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                              static_fields->__f__am_cache4,
                              System__Linq__IOrderedEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_MethodInfo__System__Linq__Enumerable__OrderBy<Newtonsoft::Json::Serialization::JsonProperty,_int>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_int>_
                             );
          pLVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                             ((IEnumerable_1_UseInteractor_ *)source,
                              System__Collections__Generic__List<Newtonsoft::Json::Serialization::JsonProperty>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Serialization::JsonProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_
                             );
          *unaff_FS_OFFSET = uStack_3;
          return (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5;
        }
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization
        ::JsonProperty]::
        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&stack0xffffffd4,
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__get_Current__
                  );
        property = (JsonProperty *)(*(code *)(this->klass->vtable).CreateProperty.method)();
      } while (property == (JsonProperty *)0x0);
      if (this_01 == (JsonPropertyCollection *)0x0) break;
      JsonPropertyCollection::JsonPropertyCollection_AddProperty(this_01,property,(MethodInfo *)0x0)
      ;
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar7 = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)(*pcVar6)();
  return pIVar7;
}


/* JsonProperty CreateProperty(MemberInfo, MemberSerialization) */

JsonProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateProperty
          (DefaultContractResolver *this,MemberInfo_1 *member,
          MemberSerialization__Enum memberSerialization,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = uStack_1 & 0xffffff00;
  pIStack_2 = (Il2CppMethodPointer)((uint)pIStack_2 & 0xffffff00);
  method_00 = TypeInfo__Newtonsoft__Json__Serialization__JsonProperty;
  pJVar3 = (JsonProperty *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)pJVar3,0.0,(MethodInfo *)method_00);
  pTVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberUnderlyingType
                     (member,(MethodInfo *)0x0);
  if (pJVar3 != (JsonProperty *)0x0) {
    (pJVar3->fields)._PropertyType_k__BackingField = pTVar4;
    pIStack_2 = (this->klass->vtable).CreateProperty.methodPtr;
    pIVar5 = (IValueProvider *)
             (*(code *)(this->klass->vtable).CreateMemberValueProvider.method)(this,member);
    (pJVar3->fields)._ValueProvider_k__BackingField = pIVar5;
    if (member != (MemberInfo_1 *)0x0) {
      pIStack_2 = (member->klass->vtable).__unknown_3.methodPtr;
      name = (String *)(*(code *)(member->klass->vtable).__unknown_2.method)(member);
      pTVar4 = (Type *)(*(code *)(member->klass->vtable).__unknown.method)
                                 (member,(member->klass->vtable).__unknown_1.methodPtr);
      DefaultContractResolver_SetPropertySettingsFromAttributes
                (this,pJVar3,(ICustomAttributeProvider *)member,name,pTVar4,memberSerialization,
                 (bool *)&uStack_1,(bool *)&pIStack_2,(MethodInfo *)0x0);
      nonPublic = (bool)uStack_1;
      bVar6 = Json::Utilities::ReflectionUtils::ReflectionUtils_CanReadMemberValue
                        (member,nonPublic,(MethodInfo *)0x0);
      (pJVar3->fields)._Readable_k__BackingField = bVar6;
      bVar6 = Json::Utilities::ReflectionUtils::ReflectionUtils_CanSetMemberValue
                        (member,nonPublic,(bool)pIStack_2,(MethodInfo *)0x0);
      (pJVar3->fields)._Writable_k__BackingField = bVar6;
      pPVar7 = DefaultContractResolver_CreateShouldSerializeTest(this,member,(MethodInfo *)0x0);
      (pJVar3->fields)._ShouldSerialize_k__BackingField = pPVar7;
      DefaultContractResolver_SetIsSpecifiedActions(this,pJVar3,member,nonPublic,(MethodInfo *)0x0);
      return pJVar3;
    }
  }
  pIStack_2 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar3 = (JsonProperty *)(*pcVar8)();
  return pJVar3;
}


/* JsonProperty CreatePropertyFromConstructorParameter(JsonProperty, ParameterInfo) */

JsonProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreatePropertyFromConstructorParameter
          (DefaultContractResolver *this,JsonProperty *matchingMemberProperty,
          ParameterInfo *parameterInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  abStack_1[0] = 0;
  abStack_1[1] = 0;
  uStack_2 = (MethodInfo *)((uint)uStack_2._2_2_ << 0x10);
  uStack_3 = 0;
  _puStack_24 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  method_00 = TypeInfo__Newtonsoft__Json__Serialization__JsonProperty;
  pJVar6 = (JsonProperty *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)pJVar6,0.0,(MethodInfo *)method_00);
  if ((parameterInfo != (ParameterInfo *)0x0) &&
     (pTVar7 = (Type *)(*(code *)(parameterInfo->klass->vtable).get_ParameterType.method)
                                 (parameterInfo,
                                  (parameterInfo->klass->vtable).get_Attributes.methodPtr),
     pJVar6 != (JsonProperty *)0x0)) {
    (pJVar6->fields)._PropertyType_k__BackingField = pTVar7;
    pSVar8 = (String *)
             (*(code *)(parameterInfo->klass->vtable).get_Name.method)
                       (parameterInfo,(parameterInfo->klass->vtable).get_Position.methodPtr);
    piVar9 = (int *)(*(code *)(parameterInfo->klass->vtable).get_Member.method)
                              (parameterInfo,(parameterInfo->klass->vtable).get_Name.methodPtr);
    if (piVar9 != (int *)0x0) {
      pTVar7 = (Type *)(**(code **)(*piVar9 + 0xf0))(piVar9,*(undefined4 *)(*piVar9 + 0xf4));
      DefaultContractResolver_SetPropertySettingsFromAttributes
                (this,pJVar6,(ICustomAttributeProvider *)parameterInfo,pSVar8,pTVar7,
                 MemberSerialization__Enum_OptOut,abStack_1,abStack_1 + 1,(MethodInfo *)0x0);
      (pJVar6->fields)._Readable_k__BackingField = 0;
      (pJVar6->fields)._Writable_k__BackingField = 1;
      if (matchingMemberProperty != (JsonProperty *)0x0) {
        pSVar8 = (pJVar6->fields)._PropertyName_k__BackingField;
        _puStack_24 = CONCAT44(&UNK_?,puStack_10);
        b = (String *)(*(code *)(parameterInfo->klass->vtable).get_Name.method)();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        _puStack_24 = CONCAT44(pSVar8,&UNK_?);
        bVar11 = mscorlib.dll::System::String::String_op_Inequality(pSVar8,b,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          pSVar8 = (matchingMemberProperty->fields)._PropertyName_k__BackingField;
        }
        else {
          pSVar8 = (pJVar6->fields)._PropertyName_k__BackingField;
        }
        (pJVar6->fields)._PropertyName_k__BackingField = pSVar8;
        pJVar12 = (pJVar6->fields)._Converter_k__BackingField;
        if (pJVar12 == (JsonConverter *)0x0) {
          pJVar12 = (matchingMemberProperty->fields)._Converter_k__BackingField;
        }
        (pJVar6->fields)._Converter_k__BackingField = pJVar12;
        pJVar12 = (pJVar6->fields)._MemberConverter_k__BackingField;
        if (pJVar12 == (JsonConverter *)0x0) {
          pJVar12 = (matchingMemberProperty->fields)._MemberConverter_k__BackingField;
        }
        (pJVar6->fields)._MemberConverter_k__BackingField = pJVar12;
        pOVar13 = (pJVar6->fields)._DefaultValue_k__BackingField;
        if (pOVar13 == (Object *)0x0) {
          pOVar13 = (matchingMemberProperty->fields)._DefaultValue_k__BackingField;
        }
        (pJVar6->fields)._DefaultValue_k__BackingField = pOVar13;
        iVar14 = (pJVar6->fields)._Required_k__BackingField;
        if (iVar14 == 0) {
          iVar14 = (matchingMemberProperty->fields)._Required_k__BackingField;
        }
        (pJVar6->fields)._Required_k__BackingField = iVar14;
        uStack_2._2_2_ = (ushort)((uint)MethodInfo__System__Nullable<bool>__get_HasValue__ >> 0x10);
        uStack_2 = (MethodInfo *)
                   CONCAT22(uStack_2._2_2_,(pJVar6->fields)._IsReference_k__BackingField);
        uStack_3 = CONCAT44(&uStack_2,&UNK_?);
        cVar15 = func_?();
        if (cVar15 == '\0') {
          uStack_2._0_2_ = (matchingMemberProperty->fields)._IsReference_k__BackingField;
        }
        else {
        }
        (pJVar6->fields)._IsReference_k__BackingField = uStack_2._0_2_;
        uStack_2 = MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__get_HasValue__
        ;
        uStack_3._4_4_ = &uStack_3;
        uStack_3._0_4_ = &UNK_?;
        cVar15 = func_?();
        if (cVar15 == '\0') {
          uStack_3._0_4_ =
               (undefined *)
               (matchingMemberProperty->fields)._NullValueHandling_k__BackingField.value;
          uStack_3._4_4_ =
               *(undefined8 **)
                &(matchingMemberProperty->fields)._NullValueHandling_k__BackingField.has_value;
        }
        (pJVar6->fields)._NullValueHandling_k__BackingField.value = (int32_t)(undefined *)uStack_3;
        *(undefined8 **)&(pJVar6->fields)._NullValueHandling_k__BackingField.has_value =
             uStack_3._4_4_;
        iVar16 = (pJVar6->fields)._DefaultValueHandling_k__BackingField.value;
        uStack_2 = 
        MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__get_HasValue__;
        uVar17 = *(undefined4 *)&(pJVar6->fields)._DefaultValueHandling_k__BackingField.has_value;
        uStack_3 = CONCAT44(&stack0xffffffe4,&UNK_?);
        cVar15 = func_?();
        if (cVar15 == '\0') {
          iVar16 = (matchingMemberProperty->fields)._DefaultValueHandling_k__BackingField.value;
          uVar17 = *(undefined4 *)
                    &(matchingMemberProperty->fields)._DefaultValueHandling_k__BackingField.
                     has_value;
        }
        (pJVar6->fields)._DefaultValueHandling_k__BackingField.value = iVar16;
        *(undefined4 *)&(pJVar6->fields)._DefaultValueHandling_k__BackingField.has_value = uVar17;
        puStack_10 = (undefined *)(pJVar6->fields)._ReferenceLoopHandling_k__BackingField.value;
        uStack_2 = 
        MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__get_HasValue__;
        uVar18 = *(undefined4 *)&(pJVar6->fields)._ReferenceLoopHandling_k__BackingField.has_value;
        uStack_3 = CONCAT44(&puStack_10,&UNK_?);
        cVar15 = func_?();
        puVar19 = puStack_10;
        if (cVar15 == '\0') {
          uVar18 = *(undefined4 *)
                    &(matchingMemberProperty->fields)._ReferenceLoopHandling_k__BackingField.
                     has_value;
          puVar19 = (undefined *)
                    (matchingMemberProperty->fields)._ReferenceLoopHandling_k__BackingField.value;
        }
        (pJVar6->fields)._ReferenceLoopHandling_k__BackingField.value = (int32_t)puVar19;
        *(undefined4 *)&(pJVar6->fields)._ReferenceLoopHandling_k__BackingField.has_value = uVar18;
        uStack_4._0_4_ = (pJVar6->fields)._ObjectCreationHandling_k__BackingField.value;
        uStack_2 = 
        MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__get_HasValue__;
        uStack_4._4_4_ =
             *(undefined4 *)&(pJVar6->fields)._ObjectCreationHandling_k__BackingField.has_value;
        uStack_3 = CONCAT44(&uStack_4,&UNK_?);
        cVar15 = func_?();
        iVar16 = (int32_t)uStack_4;
        uVar18 = uStack_4._4_4_;
        if (cVar15 == '\0') {
          iVar16 = (matchingMemberProperty->fields)._ObjectCreationHandling_k__BackingField.value;
          uVar18 = *(undefined4 *)
                    &(matchingMemberProperty->fields)._ObjectCreationHandling_k__BackingField.
                     has_value;
        }
        (pJVar6->fields)._ObjectCreationHandling_k__BackingField.value = iVar16;
        *(undefined4 *)&(pJVar6->fields)._ObjectCreationHandling_k__BackingField.has_value = uVar18;
        uStack_5._0_4_ = (pJVar6->fields)._TypeNameHandling_k__BackingField.value;
        uStack_2 = MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_HasValue__;
        uStack_5._4_4_ =
             *(undefined4 *)&(pJVar6->fields)._TypeNameHandling_k__BackingField.has_value;
        uStack_3 = CONCAT44(&uStack_5,&UNK_?);
        cVar15 = func_?();
        if (cVar15 == '\0') {
          bVar11 = (matchingMemberProperty->fields)._TypeNameHandling_k__BackingField.has_value;
          uVar20 = *(undefined3 *)
                   &(matchingMemberProperty->fields)._TypeNameHandling_k__BackingField.field_0x5;
          (pJVar6->fields)._TypeNameHandling_k__BackingField.value =
               (matchingMemberProperty->fields)._TypeNameHandling_k__BackingField.value;
          (pJVar6->fields)._TypeNameHandling_k__BackingField.has_value = bVar11;
          *(undefined3 *)&(pJVar6->fields)._TypeNameHandling_k__BackingField.field_0x5 = uVar20;
          return pJVar6;
        }
        (pJVar6->fields)._TypeNameHandling_k__BackingField.value = (int32_t)uStack_5;
        *(undefined4 *)&(pJVar6->fields)._TypeNameHandling_k__BackingField.has_value =
             uStack_5._4_4_;
      }
      return pJVar6;
    }
  }
  func_?(0);
  pcVar21 = (code *)swi(3);
  pJVar6 = (JsonProperty *)(*pcVar21)();
  return pJVar6;
}


/* Predicate`1[Object] CreateShouldSerializeTest(MemberInfo) */

Predicate_1_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateShouldSerializeTest
          (DefaultContractResolver *this,MemberInfo_1 *member,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___CreateShouldSerializeTest_c__AnonStorey1
  ;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (member != (MemberInfo_1 *)0x0) {
    pTVar1 = (Type *)(*(code *)(member->klass->vtable).__unknown.method)
                               (member,(member->klass->vtable).__unknown_1.methodPtr);
    pSVar2 = (String *)
             (*(code *)(member->klass->vtable).__unknown_2.method)
                       (member,(member->klass->vtable).__unknown_3.methodPtr);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_ShouldSerialize,pSVar2,(MethodInfo *)0x0);
    types = (Type__Array *)func_?(TypeInfo__System__Type,0);
    if (pTVar1 != (Type *)0x0) {
      pMVar3 = mscorlib.dll::System::Type::Type_GetMethod_2(pTVar1,pSVar2,types,(MethodInfo *)0x0);
      if (pMVar3 != (MethodInfo_1 *)0x0) {
        pTVar1 = (Type *)(*(code *)(pMVar3->klass->vtable).get_ReturnType.method)();
        handle = TypeRef__System__Boolean;
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        if (pTVar1 == pTVar4) {
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)
             ) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
          }
          pRVar5 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                             ((MethodInfo *)0x0);
          if (pRVar5 != (ReflectionDelegateFactory *)0x0) {
            puVar6 = (undefined4 *)
                     func_?((&(pRVar5->klass->vtable).Finalize)
                                     [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                                      ->flags].methodPtr,
                                     Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                                    );
            pvVar7 = (void *)(*(code *)*puVar6)(pRVar5,pMVar3,puVar6);
            if (this_00 != (ScaleAnimationBase *)0x0) {
              (this_00->fields)._._._._.m_CachedPtr = pvVar7;
              this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(TypeInfo__System__Predicate<System::Object>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_01,(Object *)this_00,
                         MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___CreateShouldSerializeTest_c__AnonStorey1____m__0_System__Object_
                         ,
                         MethodInfo__System__Predicate<System::Object>__Predicate_System__Object__void__
                        );
              return (Predicate_1_Object_ *)this_01;
            }
          }
          goto code_?;
        }
      }
      return (Predicate_1_Object_ *)0x0;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  pPVar9 = (Predicate_1_Object_ *)(*pcVar8)();
  return pPVar9;
}


/* JsonStringContract CreateStringContract(Type) */

JsonStringContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateStringContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  contract = (JsonContract *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract);
  JsonStringContract::JsonStringContract__ctor
            ((JsonStringContract *)contract,objectType,(MethodInfo *)0x0);
  DefaultContractResolver_InitializeContract(this,contract,(MethodInfo *)0x0);
  return (JsonStringContract *)contract;
}


/* ConstructorInfo GetAttributeConstructor(Type) */

ConstructorInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_GetAttributeConstructor
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (objectType != (Type *)0x0) {
    pIVar1 = (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
             (*(code *)(objectType->klass->vtable).__unknown_29.method)
                       (objectType,0x34,(objectType->klass->vtable).FindMembers.methodPtr);
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    if (TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
        __f__am_cache3 == (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Func<System::Reflection::ConstructorInfo,_bool>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___GetAttributeConstructor_m__3_System__Reflection__ConstructorInfo_
                 ,
                 MethodInfo__System__Func<System::Reflection::ConstructorInfo,_bool>__Func_System__Object__void__
                );
      if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                  Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started ==
          0)) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
      }
      TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
      __f__am_cache3 = (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)this_00;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                       (pIVar1,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                                *)TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver
                                  ->static_fields->__f__am_cache3,
                        System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>__System__Func<System::Reflection::ConstructorInfo,_bool>_
                       );
    pLVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                       ((IEnumerable_1_UseInteractor_ *)pIVar1,
                        System__Collections__Generic__List<System::Reflection::ConstructorInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>_
                       );
    if (pLVar2 != (List_1_UseInteractor_ *)0x0) {
      iVar3 = func_?(0,
                              TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ConstructorInfo>
                              ,pLVar2);
      if (iVar3 < 2) {
        iVar3 = func_?(0,
                                TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ConstructorInfo>
                                ,pLVar2);
        if (iVar3 != 1) {
          return (ConstructorInfo *)0x0;
        }
        pCVar4 = (ConstructorInfo *)
                 func_?(3,
                                 TypeInfo__System__Collections__Generic__IList<System::Reflection::ConstructorInfo>
                                 ,pLVar2,0);
        return pCVar4;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_Multiple_constructors_with_the_J,(MethodInfo *)0x0);
  func_?(this_01);
  pcVar5 = (code *)swi(3);
  pCVar4 = (ConstructorInfo *)(*pcVar5)();
  return pCVar4;
}


/* Dictionary`2[Newtonsoft.Json.Serialization.ResolverContractKey,Newtonsoft.Json.Serialization.JsonContract]
   GetCache() */

Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
* Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
  DefaultContractResolver_GetCache(DefaultContractResolver *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedCache != 0) {
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    this = (DefaultContractResolver *)
           TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields;
  }
  return ((DefaultContractResolver__StaticFields *)this)->_sharedContractCache;
}


/* Void GetCallbackMethodsForType(Type, MethodInfo ByRef, MethodInfo ByRef, MethodInfo ByRef,
   MethodInfo ByRef, MethodInfo ByRef) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_GetCallbackMethodsForType
               (DefaultContractResolver *this,Type *type,MethodInfo_1 **onSerializing,
               MethodInfo_1 **onSerialized,MethodInfo_1 **onDeserializing,
               MethodInfo_1 **onDeserialized,MethodInfo_1 **onError,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppMVar1 = onSerializing;
  *onSerializing = (MethodInfo_1 *)0x0;
  *onSerialized = (MethodInfo_1 *)0x0;
  *onDeserializing = (MethodInfo_1 *)0x0;
  *onDeserialized = (MethodInfo_1 *)0x0;
  *onError = (MethodInfo_1 *)0x0;
  if (type != (Type *)0x0) {
    iVar2 = (*(code *)(type->klass->vtable).__unknown_18.method)
                      (type,0x36,(type->klass->vtable).__unknown_19.methodPtr);
    uStack_3 = 0;
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(iVar2 + 0x10);
      while( true ) {
        if ((int)*(uint *)(iVar2 + 0xc) <= (int)uStack_3) {
          return;
        }
        if (*(uint *)(iVar2 + 0xc) <= uStack_3) break;
        method_1 = (MethodInfo_1 *)*puVar4;
        if (method_1 == (MethodInfo_1 *)0x0) goto code_?;
        cVar5 = (*(code *)(method_1->klass->vtable).get_ContainsGenericParameters.method)
                          (method_1,(method_1->klass->vtable).get_IsGenericMethodDefinition.
                                    methodPtr);
        if (cVar5 == '\0') {
          type = (Type *)0x0;
          parameters = (ParameterInfo__Array *)func_?(0xe,method_1);
          pIVar6 = TypeRef__System__Runtime__Serialization__OnSerializingAttribute;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *ppMVar1;
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
              == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&type,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onSerializing = method_1;
          }
          pIVar6 = TypeRef__System__Runtime__Serialization__OnSerializedAttribute;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onSerialized;
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
              == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&type,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onSerialized = method_1;
          }
          pIVar6 = TypeRef__System__Runtime__Serialization__OnDeserializingAttribute;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onDeserializing;
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
              == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&type,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onDeserializing = method_1;
          }
          pIVar6 = TypeRef__System__Runtime__Serialization__OnDeserializedAttribute;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onDeserialized;
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
              == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&type,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onDeserialized = method_1;
          }
          pIVar6 = TypeRef__Newtonsoft__Json__Serialization__OnErrorAttribute;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onError;
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                      Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
              == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&type,(MethodInfo *)0x0);
          ppMVar1 = onSerializing;
          if (bVar9 != 0) {
            *onError = method_1;
          }
        }
        uStack_3 = uStack_3 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar10 = func_?(0,0);
      func_?(uVar10);
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* String GetClrTypeFullName(Type) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
         DefaultContractResolver_GetClrTypeFullName(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type == (Type *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    cVar2 = (*(code *)(type->klass->vtable).get_IsGenericTypeDefinition.method)
                      (type,(type->klass->vtable).GetGenericTypeDefinition.methodPtr);
    if (cVar2 != '\0') {
code_?:
      pSVar3 = (String *)
               (*(code *)(type->klass->vtable).__unknown_8.method)
                         (type,(type->klass->vtable).get_HasElementType.methodPtr);
      return pSVar3;
    }
    cVar2 = (*(code *)(type->klass->vtable).get_ContainsGenericParameters.method)
                      (type,(type->klass->vtable).get_IsGenericTypeDefinition.methodPtr);
    if (cVar2 == '\0') goto code_?;
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,2);
    pOVar4 = (Object *)
             (*(code *)(type->klass->vtable).__unknown_9.method)
                       (type,(type->klass->vtable).get_TypeHandle.methodPtr);
    if (args == (Object__Array *)0x0) goto code_?;
    if (pOVar4 != (Object *)0x0) {
      iVar5 = func_?(pOVar4,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar4;
    pOVar4 = (Object *)
             (*(code *)(type->klass->vtable).__unknown.method)
                       (type,(type->klass->vtable).get_ReflectedType.methodPtr);
    if (pOVar4 == (Object *)0x0) {
code_?:
      if (1 < args->max_length) {
        args->vector[1] = pOVar4;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar3 = mscorlib.dll::System::String::String_Format_4
                           ((IFormatProvider *)provider,StringLiteral__0___1_,args,(MethodInfo *)0x0
                           );
        return pSVar3;
      }
      goto code_?;
    }
    iVar5 = func_?(pOVar4,(args->klass->_0).element_class);
    if (iVar5 != 0) goto code_?;
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


/* Func`1[Object] GetDefaultCreator(Type) */

Func_1_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_GetDefaultCreator
          (DefaultContractResolver *this,Type *createdType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pRVar1 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory((MethodInfo *)0x0);
  if (pRVar1 != (ReflectionDelegateFactory *)0x0) {
    puVar2 = (undefined4 *)
             func_?((&(pRVar1->klass->vtable).Finalize)
                             [System__Func<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateDefaultConstructor<System::Object>_System__Type_
                              ->flags].methodPtr,
                             System__Func<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateDefaultConstructor<System::Object>_System__Type_
                            );
    pFVar3 = (Func_1_Object_ *)(*(code *)*puVar2)(pRVar1,createdType,puVar2);
    return pFVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pFVar3 = (Func_1_Object_ *)(*pcVar4)();
  return pFVar3;
}


/* ConstructorInfo GetParametrizedConstructor(Type) */

ConstructorInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_GetParametrizedConstructor
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (objectType != (Type *)0x0) {
    iVar1 = (*(code *)(objectType->klass->vtable).__unknown_29.method)
                      (objectType,0x14,(objectType->klass->vtable).FindMembers.methodPtr);
    if (iVar1 != 0) {
      iVar2 = func_?(0,
                              TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ConstructorInfo>
                              ,iVar1);
      if (iVar2 != 1) {
        return (ConstructorInfo *)0x0;
      }
      pCVar3 = (ConstructorInfo *)
               func_?(3,
                               TypeInfo__System__Collections__Generic__IList<System::Reflection::ConstructorInfo>
                               ,iVar1,0);
      return pCVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pCVar3 = (ConstructorInfo *)(*pcVar4)();
  return pCVar3;
}


/* List`1[System.Reflection.MemberInfo] GetSerializableMembers(Type) */

List_1_System_Reflection_MemberInfo_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_GetSerializableMembers
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pDVar1 = JsonTypeReflector::JsonTypeReflector_GetDataContractAttribute
                     (objectType,(MethodInfo *)0x0);
  pLVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetFieldsAndProperties
                     (objectType,(this->fields)._DefaultMembersSearchFlags_k__BackingField,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0))
  {
    func_?();
  }
  if (TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
      __f__am_cache0 == (Func_2_System_Reflection_MemberInfo_Boolean_ *)0x0) {
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___GetSerializableMembers_m__0_System__Reflection__MemberInfo_
               ,
               MethodInfo__System__Func<System::Reflection::MemberInfo,_bool>__Func_System__Object__void__
              );
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?();
    }
    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
    __f__am_cache0 = (Func_2_System_Reflection_MemberInfo_Boolean_ *)pUVar3;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0))
  {
    func_?();
  }
  pIVar4 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                     ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pLVar2,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                       *)TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                         static_fields->__f__am_cache0,
                      System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                     );
  System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
            ((IEnumerable_1_UseInteractor_ *)pIVar4,
             System__Collections__Generic__List<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
            );
  pLVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetFieldsAndProperties
                     (objectType,
                      BindingFlags__Enum_NonPublic|BindingFlags__Enum_Public|
                      BindingFlags__Enum_Static|BindingFlags__Enum_Instance,(MethodInfo *)0x0);
  if (TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
      __f__am_cache1 == (Func_2_System_Reflection_MemberInfo_Boolean_ *)0x0) {
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___GetSerializableMembers_m__1_System__Reflection__MemberInfo_
               ,
               MethodInfo__System__Func<System::Reflection::MemberInfo,_bool>__Func_System__Object__void__
              );
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?();
    }
    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
    __f__am_cache1 = (Func_2_System_Reflection_MemberInfo_Boolean_ *)pUVar3;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0))
  {
    func_?();
  }
  pIVar4 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                     ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pLVar2,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                       *)TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                         static_fields->__f__am_cache1,
                      System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                     );
  this_00 = (List_1_UnityEngine_Color32_ *)
            System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                      ((IEnumerable_1_UseInteractor_ *)pIVar4,
                       System__Collections__Generic__List<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                      );
  this_01 = (List_1_T_Enumerator_UnityEngine_Color32_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List__)
  ;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    pLVar2 = (List_1_System_Reflection_MemberInfo_ *)(*pcVar5)();
    return pLVar2;
  }
  __return_storage_ptr__ = (List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb0;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
  List_1_UnityEngine_Color32__GetEnumerator
            (__return_storage_ptr__,this_00,
             MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__GetEnumerator__
            );
code_?:
  cVar6 = func_?();
  if (cVar6 == '\0') {
    func_?();
    match = (Type **)&stack0xffffffd4;
    bVar7 = Json::Utilities::ReflectionUtils::ReflectionUtils_AssignableToTypeName
                      (objectType,StringLiteral_System_Data_Objects_DataClasses_,match,
                       (MethodInfo *)0x0);
    object = TypeInfo__System__Func<System::Reflection::MemberInfo,_bool>;
    if (bVar7 != 0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      match = (Type **)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)object,
                 MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__ShouldSerializeEntityMember_System__Reflection__MemberInfo_
                 ,
                 MethodInfo__System__Func<System::Reflection::MemberInfo,_bool>__Func_System__Object__void__
                );
      pIVar4 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                         ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)objectType,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                           *)pUVar3,
                          System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                         );
      this_01 = (List_1_T_Enumerator_UnityEngine_Color32_ *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                          ((IEnumerable_1_UseInteractor_ *)pIVar4,
                           System__Collections__Generic__List<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                          );
    }
    *unaff_FS_OFFSET = match;
    return (List_1_System_Reflection_MemberInfo_ *)this_01;
  }
  attributeProvider =
       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization
       ::JsonProperty]::
       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&stack0xffffffc0,
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__get_Current__
                 );
  handle = TypeRef__System__Runtime__CompilerServices__CompilerGeneratedAttribute;
  if ((this->fields)._SerializeCompilerGeneratedMembers_k__BackingField != 0) goto code_?;
  this_01 = __return_storage_ptr__;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
    this_01 = __return_storage_ptr__;
  }
  unaff_retaddr =
       (MethodInfo *)
       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                 ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (attributeProvider != (Object *)0x0) goto code_?;
  goto code_?;
code_?:
  this = (DefaultContractResolver *)0x1;
  cVar6 = func_?();
  __return_storage_ptr__ = this_01;
  if (cVar6 == '\0') {
code_?:
    if (pLStack_8 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Contains_System__Reflection__MemberInfo_
    ;
    item.rgba = (int32_t)attributeProvider;
    bVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(pLStack_8,item,unaff_retaddr);
    if (bVar7 == 0) {
      if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
        objectType = (Type *)TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector;
        this = (DefaultContractResolver *)&UNK_?;
        func_?();
      }
      pJVar9 = JsonTypeReflector::JsonTypeReflector_GetAttribute_7
                         ((ICustomAttributeProvider *)attributeProvider,
                          Newtonsoft__Json__JsonPropertyAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonPropertyAttribute>_System__Reflection__ICustomAttributeProvider_
                         );
      if (pJVar9 == (JsonConverterAttribute *)0x0) {
        if (pDVar1 == (DataContractAttribute *)0x0) goto code_?;
        if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0))
        {
          this = (DefaultContractResolver *)
                 TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector;
          unaff_retaddr = (MethodInfo *)&UNK_?;
          func_?();
        }
        pJVar9 = JsonTypeReflector::JsonTypeReflector_GetAttribute_7
                           ((ICustomAttributeProvider *)attributeProvider,
                            System__Runtime__Serialization__DataMemberAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<System::Runtime::Serialization::DataMemberAttribute>_System__Reflection__ICustomAttributeProvider_
                           );
        if (pJVar9 == (JsonConverterAttribute *)0x0) goto code_?;
      }
    }
    if (this_01 == (List_1_T_Enumerator_UnityEngine_Color32_ *)0x0) goto code_?;
    __return_storage_ptr__ = this_01;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)attributeProvider,
               MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Add_System__Reflection__MemberInfo_
              );
  }
  goto code_?;
}


/* Void InitializeContract(JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_InitializeContract
               (DefaultContractResolver *this,JsonContract *contract,MethodInfo *method)

{
  contract_00 = contract;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (contract == (JsonContract *)0x0) goto code_?;
  pTVar1 = (contract->fields)._UnderlyingType_k__BackingField;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pJVar2 = JsonTypeReflector::JsonTypeReflector_GetJsonContainerAttribute(pTVar1,(MethodInfo *)0x0);
  if (pJVar2 == (JsonContainerAttribute *)0x0) {
    pTVar1 = (contract->fields)._UnderlyingType_k__BackingField;
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    this_00 = JsonTypeReflector::JsonTypeReflector_GetDataContractAttribute
                        (pTVar1,(MethodInfo *)0x0);
    if (this_00 != (DataContractAttribute *)0x0) {
      bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
              CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                        ((CrossPlatformInputManager_VirtualAxis *)this_00,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        this = (DefaultContractResolver *)0x1;
        func_?();
        contract._0_1_ = 0;
        contract._1_1_ = 0;
        goto code_?;
      }
    }
  }
  else {
    contract._0_2_ = (pJVar2->fields)._isReference;
code_?:
    (contract_00->fields)._IsReference_k__BackingField = contract._0_2_;
  }
  pJVar4 = (JsonConverter *)
           (*(code *)(this->klass->vtable).ResolveContractConverter.method)
                     (this,(contract_00->fields)._UnderlyingType_k__BackingField,
                      (this->klass->vtable).CreateDictionaryContract.methodPtr);
  (contract_00->fields)._Converter_k__BackingField = pJVar4;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0))
  {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
  pJVar4 = JsonSerializer::JsonSerializer_GetMatchingConverter_1
                     (TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                      static_fields->BuiltInConverters,
                      (contract_00->fields)._UnderlyingType_k__BackingField,(MethodInfo *)0x0);
  (contract_00->fields)._InternalConverter_k__BackingField = pJVar4;
  bVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_HasDefaultConstructor_1
                    ((contract_00->fields)._CreatedType_k__BackingField,1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pTVar1 = (contract_00->fields)._CreatedType_k__BackingField;
    if (pTVar1 == (Type *)0x0) goto code_?;
    bVar3 = mscorlib.dll::System::Type::Type_get_IsValueType(pTVar1,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
  }
  pTVar1 = (contract_00->fields)._CreatedType_k__BackingField;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?();
  }
  pRVar5 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory((MethodInfo *)0x0);
  if (pRVar5 != (ReflectionDelegateFactory *)0x0) {
    puVar6 = (undefined4 *)
             func_?((&(pRVar5->klass->vtable).Finalize)
                             [System__Func<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateDefaultConstructor<System::Object>_System__Type_
                              ->flags].methodPtr,
                             System__Func<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateDefaultConstructor<System::Object>_System__Type_
                            );
    pFVar7 = (Func_1_Object_ *)(*(code *)*puVar6)(pRVar5,pTVar1,puVar6);
    (contract_00->fields)._DefaultCreator_k__BackingField = pFVar7;
    pTVar1 = (contract_00->fields)._CreatedType_k__BackingField;
    if (pTVar1 != (Type *)0x0) {
      bVar3 = mscorlib.dll::System::Type::Type_get_IsValueType(pTVar1,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pCVar8 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetDefaultConstructor
                           ((contract_00->fields)._CreatedType_k__BackingField,(MethodInfo *)0x0);
        bVar3 = 1 - (pCVar8 != (ConstructorInfo *)0x0);
      }
      else {
        bVar3 = 0;
      }
      (contract_00->fields)._DefaultCreatorNonPublic_k__BackingField = bVar3;
code_?:
      DefaultContractResolver_ResolveCallbackMethods
                (this,contract_00,(contract_00->fields)._UnderlyingType_k__BackingField,
                 (MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsValidCallback(MethodInfo, ParameterInfo[], Type, MethodInfo, Type ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_IsValidCallback
               (MethodInfo_1 *method_1,ParameterInfo__Array *parameters,Type *attributeType,
               MethodInfo_1 *currentCallback,Type **prevAttributeType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (method_1 == (MethodInfo_1 *)0x0) {
code_?:
    func_?(0);
code_?:
    func_?(unaff_EBX,unaff_ESI);
    func_?(0,unaff_ESI);
    func_?(unaff_EBX,method_1);
    func_?(1,method_1);
    pIVar1 = TypeRef__System__Runtime__Serialization__StreamingContext;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    func_?(unaff_EBX,0);
    func_?(unaff_EBX,pTVar2);
    func_?(2,pTVar2);
    unaff_ESI = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Serialization_Callback___1___in_,
                           (IFormatProvider *)attributeType,(Object__Array *)unaff_EBX,
                           (MethodInfo *)0x0);
    method_1 = (MethodInfo_1 *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              ((IsolatedStorageException *)method_1,unaff_ESI,(MethodInfo *)0x0);
    func_?(method_1,0,
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__IsValidCallback_System__Reflection__MethodInfo__System__Reflection__ParameterInfo_____System__Type__System__Reflection__MethodInfo__System__Type__
                   );
code_?:
    func_?(unaff_EBX,unaff_ESI);
    func_?(0,unaff_ESI);
    func_?(unaff_EBX,method_1);
    func_?(1,method_1);
    pIVar1 = TypeRef__System__Runtime__Serialization__StreamingContext;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    func_?(unaff_EBX,0);
    func_?(unaff_EBX,pTVar2);
    func_?(2,pTVar2);
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__Newtonsoft__Json__Serialization__ErrorContext,
                        (MethodInfo *)0x0);
    func_?(unaff_EBX,0);
    func_?(unaff_EBX,pTVar2);
    func_?(3,pTVar2);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Serialization_Error_Callback___1,
                        (IFormatProvider *)attributeType,(Object__Array *)unaff_EBX,
                        (MethodInfo *)0x0);
    pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
    func_?(pIVar4,0,
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__IsValidCallback_System__Reflection__MethodInfo__System__Reflection__ParameterInfo_____System__Type__System__Reflection__MethodInfo__System__Type__
                   );
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,2);
    pTVar2 = (Type *)func_?(6,pIVar4);
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?();
    }
    pSVar3 = DefaultContractResolver_GetClrTypeFullName(pTVar2,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pSVar3);
    method_1 = (MethodInfo_1 *)0x0;
    func_?();
    func_?(args);
    func_?(args,pIVar4);
    func_?(1);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Serialization_Callback___1___in_,(IFormatProvider *)pCVar5,
                        args,(MethodInfo *)0x0);
    attributeType = (Type *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              ((IsolatedStorageException *)attributeType,pSVar3,(MethodInfo *)0x0);
    func_?();
    pIVar4 = (IsolatedStorageException *)attributeType;
    pCVar5 = (CultureInfo *)method_1;
code_?:
    method_1 = (MethodInfo_1 *)pCVar5;
    func_?(args,pIVar4);
    func_?(0,pIVar4);
    pTVar2 = (Type *)(*(code *)(pIVar4->klass->vtable).get_Message.method)
                               (pIVar4,(pIVar4->klass->vtable).get_Source.methodPtr);
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    pSVar3 = DefaultContractResolver_GetClrTypeFullName(pTVar2,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pSVar3);
    func_?(1,pSVar3);
    func_?(args,0);
    func_?(args,attributeType);
    func_?(2,attributeType);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Virtual_Method___0___of_type___1,(IFormatProvider *)method_1,
                        args,(MethodInfo *)0x0);
    pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
    func_?(pIVar4,0,
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__IsValidCallback_System__Reflection__MethodInfo__System__Reflection__ParameterInfo_____System__Type__System__Reflection__MethodInfo__System__Type__
                   );
    pCVar5 = (CultureInfo *)method_1;
    pTVar2 = attributeType;
code_?:
    attributeType = pTVar2;
    method_1 = (MethodInfo_1 *)pCVar5;
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    args->vector[1] = (Object *)pSVar3;
    pTVar2 = (Type *)(*(code *)(pIVar4->klass->vtable).get_Message.method)
                               (pIVar4,(pIVar4->klass->vtable).get_Source.methodPtr);
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    pSVar3 = DefaultContractResolver_GetClrTypeFullName(pTVar2,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pSVar3);
    func_?(2,pSVar3);
    func_?(args,0);
    func_?(args,pIVar4);
    func_?(3,pIVar4);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Invalid_Callback__Method___3___i,(IFormatProvider *)method_1,
                        args,(MethodInfo *)0x0);
    pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
    method_1 = (MethodInfo_1 *)
               MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__IsValidCallback_System__Reflection__MethodInfo__System__Reflection__ParameterInfo_____System__Type__System__Reflection__MethodInfo__System__Type__
    ;
    func_?(pIVar4);
    pCVar5 = (CultureInfo *)method_1;
code_?:
    method_1 = (MethodInfo_1 *)pCVar5;
    uVar6 = func_?(0,0);
    func_?(uVar6);
    pCVar5 = (CultureInfo *)method_1;
code_?:
    method_1 = (MethodInfo_1 *)pCVar5;
    currentCallback = (MethodInfo_1 *)pSVar3;
    uVar6 = func_?(0,0);
    func_?(uVar6);
    pCVar5 = (CultureInfo *)method_1;
code_?:
    method_1 = (MethodInfo_1 *)pCVar5;
    uVar6 = func_?(0,0);
    func_?(uVar6);
  }
  else {
    cVar7 = (*(code *)(method_1->klass->vtable).__unknown_3.method)
                      (method_1,attributeType,0,(method_1->klass->vtable).__unknown_4.methodPtr);
    if (cVar7 == '\0') {
      return 0;
    }
    unaff_ESI = (String *)attributeType;
    if (currentCallback == (MethodInfo_1 *)0x0) {
      if (*prevAttributeType == (Type *)0x0) {
        bVar8 = mscorlib.dll::System::Reflection::MethodBase::MethodBase_get_IsVirtual
                          ((MethodBase *)method_1,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          unaff_EBX = (ParameterInfo__Array *)
                      (*(code *)(method_1->klass->vtable).get_ReturnType.method)
                                (method_1,(method_1->klass->vtable).MakeGenericMethod.methodPtr);
          pIVar1 = TypeRef__System__Void;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pPVar9 = (ParameterInfo__Array *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
          unaff_ESI = (String *)TypeRef__Newtonsoft__Json__Serialization__OnErrorAttribute;
          pIVar4 = (IsolatedStorageException *)method_1;
          if (unaff_EBX == pPVar9) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)unaff_ESI,(MethodInfo *)0x0);
            if (attributeType != pTVar2) {
              if ((parameters != (ParameterInfo__Array *)0x0) && (parameters->max_length == 1)) {
                iVar10 = func_?();
                if (iVar10 == 0) goto code_?;
                pTVar2 = (Type *)func_?(6,iVar10);
                pIVar1 = TypeRef__System__Runtime__Serialization__StreamingContext;
                if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__Type);
                }
                pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                   ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
                if (pTVar2 == pTVar11) {
code_?:
                  *prevAttributeType = attributeType;
                  return 1;
                }
              }
              if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                func_?();
              }
              attributeType =
                   (Type *)mscorlib.dll::System::Globalization::CultureInfo::
                           CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              unaff_EBX = (ParameterInfo__Array *)func_?();
              pTVar2 = (Type *)func_?(6,method_1);
              if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                          vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
                  cctor_started == 0)) {
                func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
              }
              unaff_ESI = DefaultContractResolver_GetClrTypeFullName(pTVar2,(MethodInfo *)0x0);
              if (unaff_EBX == (ParameterInfo__Array *)0x0) goto code_?;
              goto code_?;
            }
            if ((parameters != (ParameterInfo__Array *)0x0) && (parameters->max_length == 2)) {
              iVar10 = func_?();
              unaff_EBX = parameters;
              if (iVar10 == 0) goto code_?;
              pTVar2 = (Type *)func_?(6,iVar10);
              unaff_ESI = (String *)TypeRef__System__Runtime__Serialization__StreamingContext;
              if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__Type);
              }
              pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)unaff_ESI,(MethodInfo *)0x0);
              if (pTVar2 == pTVar11) {
                iVar10 = func_?();
                if (iVar10 == 0) goto code_?;
                pTVar2 = (Type *)func_?(6,iVar10);
                pIVar1 = TypeRef__Newtonsoft__Json__Serialization__ErrorContext;
                if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__Type);
                }
                pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                   ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
                if (pTVar2 == pTVar11) goto code_?;
              }
            }
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            attributeType =
                 (Type *)mscorlib.dll::System::Globalization::CultureInfo::
                         CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            unaff_EBX = (ParameterInfo__Array *)func_?();
            pTVar2 = (Type *)func_?(6,method_1);
            if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable)
                        .Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
                cctor_started == 0)) {
              func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
            }
            unaff_ESI = DefaultContractResolver_GetClrTypeFullName(pTVar2,(MethodInfo *)0x0);
            if (unaff_EBX == (ParameterInfo__Array *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        args = (Object__Array *)func_?(TypeInfo__System__Object,3);
        pIVar4 = (IsolatedStorageException *)method_1;
        if (args == (Object__Array *)0x0) {
          unaff_EBX = (ParameterInfo__Array *)0x0;
          goto code_?;
        }
        goto code_?;
      }
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      args = (Object__Array *)func_?(TypeInfo__System__Object,4);
      unaff_EBX = (ParameterInfo__Array *)0x0;
      if (args == (Object__Array *)0x0) goto code_?;
      pTVar2 = *prevAttributeType;
      func_?(args,pTVar2);
      pSVar3 = (String *)attributeType;
      pIVar4 = (IsolatedStorageException *)method_1;
      if (args->max_length == 0) goto code_?;
      args->vector[0] = (Object *)pTVar2;
      func_?(args,attributeType);
      method_1 = (MethodInfo_1 *)pCVar5;
      attributeType = pTVar2;
      if (args->max_length < 2) goto code_?;
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    unaff_EBX = (ParameterInfo__Array *)0x0;
    if (args == (Object__Array *)0x0) goto code_?;
    iVar10 = func_?(method_1,(args->klass->_0).element_class);
    pSVar3 = (String *)attributeType;
    pIVar4 = (IsolatedStorageException *)method_1;
    if (iVar10 == 0) goto code_?;
    pSVar3 = (String *)attributeType;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)method_1;
    iVar10 = func_?(currentCallback,(args->klass->_0).element_class);
    if (iVar10 == 0) goto code_?;
    method_1 = (MethodInfo_1 *)pCVar5;
    if (1 < args->max_length) goto code_?;
  }
  uVar6 = func_?(0,0);
  func_?(uVar6);
code_?:
  args->vector[1] = (Object *)currentCallback;
  pTVar2 = (Type *)(*(code *)(pIVar4->klass->vtable).get_Message.method)
                             (pIVar4,(pIVar4->klass->vtable).get_Source.methodPtr);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0))
  {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
  pSVar3 = DefaultContractResolver_GetClrTypeFullName(pTVar2,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar3);
  func_?(2,pSVar3);
  func_?(args,0);
  func_?(args,attributeType);
  func_?(3,attributeType);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Invalid_attribute__Both___0___an,(IFormatProvider *)method_1,
                      args,(MethodInfo *)0x0);
  pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
  func_?(pIVar4);
  pcVar12 = (code *)swi(3);
  bVar8 = (*pcVar12)();
  return bVar8;
}


/* Void ResolveCallbackMethods(JsonContract, Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_ResolveCallbackMethods
               (DefaultContractResolver *this,JsonContract *contract,Type *t,MethodInfo *method)

{
  pMStack_1 = (MethodInfo_1 *)0x0;
  pMStack_2 = (MethodInfo_1 *)0x0;
  pMStack_3 = (MethodInfo_1 *)0x0;
  pMStack_4 = (MethodInfo_1 *)0x0;
  pMStack_5 = (MethodInfo_1 *)0x0;
  if (t != (Type *)0x0) {
    iVar6 = (*(code *)(t->klass->vtable).__unknown_7.method)
                      (t,(t->klass->vtable).__unknown_8.methodPtr);
    if (iVar6 != 0) {
      t_00 = (Type *)(*(code *)(t->klass->vtable).__unknown_7.method)
                               (t,(t->klass->vtable).__unknown_8.methodPtr);
      DefaultContractResolver_ResolveCallbackMethods(this,contract,t_00,(MethodInfo *)0x0);
    }
    DefaultContractResolver_GetCallbackMethodsForType
              (this,t,&pMStack_1,&pMStack_2,&pMStack_3,&pMStack_4,&pMStack_5,(MethodInfo *)0x0);
    if (pMStack_1 != (MethodInfo_1 *)0x0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnSerializing_k__BackingField = pMStack_1;
    }
    if (pMStack_2 != (MethodInfo_1 *)0x0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnSerialized_k__BackingField = pMStack_2;
    }
    if (pMStack_3 != (MethodInfo_1 *)0x0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnDeserializing_k__BackingField = pMStack_3;
    }
    if (pMStack_4 != (MethodInfo_1 *)0x0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnDeserialized_k__BackingField = pMStack_4;
    }
    if (pMStack_5 != (MethodInfo_1 *)0x0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnError_k__BackingField = pMStack_5;
    }
    return;
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* JsonContract ResolveContract(Type) */

JsonContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_ResolveContract(DefaultContractResolver *this,Type *type,MethodInfo *method)

{
  pDVar1 = (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
            *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar2 = (JsonContract *)0x0;
  func_?();
  if (type != (Type *)0x0) {
    pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    func_?(&stack0xffffffd4,pTVar3,type,0);
    pDVar4 = DefaultContractResolver_GetCache(this,(MethodInfo *)0x0);
    pMVar5 = 
    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__TryGetValue_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract__
    ;
    pMVar6 = (MethodInfo *)0x0;
    if ((pDVar4 == (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
                    *)0x0) ||
       (key._contractType = (Type *)0x0,
       key._resolverType =
            (Type *)
            MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__TryGetValue_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract__
       , bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
                 Serialization::ResolverContractKey,System::Object]::
                 Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_System_Object__TryGetValue
                           ((Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_System_Object_
                             *)pDVar4,key,(Object **)&stack0xffffffe8,
                            MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__TryGetValue_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract__
                           ), pMVar6 = pMVar5, bVar7 == 0)) {
      (*(code *)(this->klass->vtable).CreateContract.method)();
      if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                  Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started ==
          0)) {
        func_?();
      }
      obj = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
            _typeContractCacheLock;
      mscorlib.dll::System::Threading::Monitor::Monitor_Enter(obj,(MethodInfo *)0x0);
      pJVar2 = (JsonContract *)0x0;
      pDVar8 = this;
      pDVar1 = DefaultContractResolver_GetCache(this,(MethodInfo *)0x0);
      if (pDVar1 == (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
                     *)0x0) {
        pDVar4 = (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
                  *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__Dictionary__
                  );
      }
      else {
        pDVar4 = (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
                  *)func_?();
        pJVar2 = (JsonContract *)&UNK_?;
        System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
        SortedList_2_System_Single_System_Object___ctor_1
                  ((SortedList_2_System_Single_System_Object_ *)pDVar4,(int32_t)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__Dictionary_System__Collections__Generic__IDictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>_
                  );
      }
      if (pDVar4 == (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
                     *)0x0) goto code_?;
      key_00._contractType = (Type *)0x0;
      key_00._resolverType = (Type *)pMVar6;
      pDVar1 = pDVar4;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
      ResolverContractKey,System::Object]::
      Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_System_Object__set_Item
                ((Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_System_Object_ *)
                 pDVar4,key_00,(Object *)pJVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__set_Item_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract_
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((this->fields)._sharedCache == 0) {
        (this->fields)._instanceContractCache = pDVar4;
        pDVar8->klass = (DefaultContractResolver__Class *)0x8a;
      }
      else {
        if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                    Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
            == 0)) {
          func_?();
        }
        TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
        _sharedContractCache = pDVar4;
        pDVar8->klass = (DefaultContractResolver__Class *)0x8a;
      }
      mscorlib.dll::System::Threading::Monitor::Monitor_Exit(obj,(MethodInfo *)0x0);
    }
    *unaff_FS_OFFSET = pDVar1;
    return pJVar2;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,StringLiteral_type,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  uStack9 = 0;
  uStack10 = 0;
  func_?();
  pcVar11 = (code *)swi(3);
  pJVar2 = (JsonContract *)(*pcVar11)();
  return pJVar2;
}


/* JsonConverter ResolveContractConverter(Type) */

JsonConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_ResolveContractConverter
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this_00 = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
            JsonConverterTypeCache;
  if (this_00 != (ThreadSafeStore_2_System_Reflection_ICustomAttributeProvider_System_Type_ *)0x0) {
    pTVar1 = Json::Utilities::ThreadSafeStore`2[System::Type,System::Type]::
             ThreadSafeStore_2_System_Type_System_Type__Get
                       ((ThreadSafeStore_2_System_Type_System_Type_ *)this_00,objectType,
                        MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__Get_System__Reflection__ICustomAttributeProvider_
                       );
    if (pTVar1 == (Type *)0x0) {
      return (JsonConverter *)0x0;
    }
    unaff_ESI = JsonConverterAttribute::JsonConverterAttribute_CreateJsonConverterInstance
                          (pTVar1,(MethodInfo *)0x0);
    if (unaff_ESI != (JsonConverter *)0x0) {
      cVar2 = (*(code *)(unaff_ESI->klass->vtable).__unknown_2.method)(unaff_ESI,objectType);
      if (cVar2 != '\0') {
        return unaff_ESI;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(unaff_ESI,0);
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)unaff_ESI,(MethodInfo *)0x0);
  func_?(pTVar1,0);
  uVar3 = func_?(8,pTVar1);
  func_?(args,0);
  func_?(args,uVar3);
  func_?();
  func_?();
  func_?(args,0);
  func_?();
  func_?(0,0);
  uVar3 = func_?(8,0);
  func_?(args,0);
  func_?(args,uVar3);
  func_?(2,uVar3);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_JsonConverter__0__on__1__is_not_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_01 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_01,message,(MethodInfo *)0x0);
  pMStack4 =
       MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetJsonConverter_System__Reflection__ICustomAttributeProvider__System__Type_
  ;
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar6 = (JsonConverter *)(*pcVar5)();
  return pJVar6;
}


/* Void SetIsSpecifiedActions(JsonProperty, MemberInfo, Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_SetIsSpecifiedActions
               (DefaultContractResolver *this,JsonProperty *property,MemberInfo_1 *member,
               bool allowNonPublicAccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___SetIsSpecifiedActions_c__AnonStorey2
  ;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (member != (MemberInfo_1 *)0x0) {
    pTVar1 = (Type *)(*(code *)(member->klass->vtable).__unknown.method)
                               (member,(member->klass->vtable).__unknown_1.methodPtr);
    pSVar2 = (String *)
             (*(code *)(member->klass->vtable).__unknown_2.method)
                       (member,(member->klass->vtable).__unknown_3.methodPtr);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar2,StringLiteral_Specified,(MethodInfo *)0x0);
    if (pTVar1 != (Type *)0x0) {
      member_00 = mscorlib.dll::System::Type::Type_GetProperty(pTVar1,pSVar2,(MethodInfo *)0x0);
      if (member_00 == (PropertyInfo_1 *)0x0) {
        pTVar1 = (Type *)(*(code *)(member->klass->vtable).__unknown.method)
                                   (member,(member->klass->vtable).__unknown_1.methodPtr);
        pSVar2 = (String *)
                 (*(code *)(member->klass->vtable).__unknown_2.method)
                           (member,(member->klass->vtable).__unknown_3.methodPtr);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar2 = mscorlib.dll::System::String::String_Concat_2
                           (pSVar2,StringLiteral_Specified,(MethodInfo *)0x0);
        if (pTVar1 == (Type *)0x0) goto code_?;
        member_00 = (PropertyInfo_1 *)
                    mscorlib.dll::System::Type::Type_GetField(pTVar1,pSVar2,(MethodInfo *)0x0);
        if (member_00 == (PropertyInfo_1 *)0x0) {
          return;
        }
      }
      pTVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberUnderlyingType
                         ((MemberInfo_1 *)member_00,(MethodInfo *)0x0);
      handle = TypeRef__System__Boolean;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if (pTVar1 != pTVar3) {
        return;
      }
      if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
      }
      pRVar4 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory((MethodInfo *)0x0)
      ;
      if ((pRVar4 != (ReflectionDelegateFactory *)0x0) &&
         (pFVar5 = Json::Utilities::ReflectionDelegateFactory::ReflectionDelegateFactory_CreateGet
                             (pRVar4,(MemberInfo_1 *)member_00,
                              System__Func<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateGet<System::Object>_System__Reflection__MemberInfo_
                             ), this_00 != (ScaleAnimationBase *)0x0)) {
        (this_00->fields)._._._._.m_CachedPtr = pFVar5;
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Predicate<System::Object>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver___SetIsSpecifiedActions_c__AnonStorey2____m__0_System__Object_
                   ,MethodInfo__System__Predicate<System::Object>__Predicate_System__Object__void__)
        ;
        if (property != (JsonProperty *)0x0) {
          (property->fields)._GetIsSpecified_k__BackingField = (Predicate_1_Object_ *)this_01;
          bVar6 = Json::Utilities::ReflectionUtils::ReflectionUtils_CanSetMemberValue
                            ((MemberInfo_1 *)member_00,allowNonPublicAccess,0,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).
                        Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started ==
                0)) {
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
            }
            pRVar4 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                               ((MethodInfo *)0x0);
            if (pRVar4 == (ReflectionDelegateFactory *)0x0) goto code_?;
            pAVar7 = Json::Utilities::ReflectionDelegateFactory::ReflectionDelegateFactory_CreateSet
                               (pRVar4,(MemberInfo_1 *)member_00,
                                System__Action<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateSet<System::Object>_System__Reflection__MemberInfo_
                               );
            (property->fields)._SetIsSpecified_k__BackingField = pAVar7;
          }
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetPropertySettingsFromAttributes(JsonProperty, ICustomAttributeProvider, String, Type,
   MemberSerialization, Boolean ByRef, Boolean ByRef) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_SetPropertySettingsFromAttributes
               (DefaultContractResolver *this,JsonProperty *property,
               ICustomAttributeProvider *attributeProvider,String *name,Type *declaringType,
               MemberSerialization__Enum memberSerialization,bool *allowNonPublicAccess,
               bool *hasExplicitAttribute,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *hasExplicitAttribute = 0;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pDVar1 = JsonTypeReflector::JsonTypeReflector_GetDataContractAttribute
                     (declaringType,(MethodInfo *)0x0);
  if ((pDVar1 != (DataContractAttribute *)0x0) &&
     (attributeProvider != (ICustomAttributeProvider *)0x0)) {
    bVar2 = (TypeInfo__System__Reflection__MemberInfo->_1).naturalAligment;
    if (((attributeProvider->klass->_1).naturalAligment < bVar2) ||
       ((attributeProvider->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__MemberInfo)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pIVar4 = (ICustomAttributeProvider *)0x0;
    if (bVar3) {
      pIVar4 = attributeProvider;
    }
    if (pIVar4 != (ICustomAttributeProvider *)0x0) {
      if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
      }
      method_00 = (MethodInfo *)attributeProvider;
      memberInfo = (MemberInfo_1 *)
                   func_?(attributeProvider,TypeInfo__System__Reflection__MemberInfo,0);
      this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)JsonTypeReflector::JsonTypeReflector_GetDataMemberAttribute(memberInfo,method_00)
      ;
      goto code_?;
    }
  }
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)0x0;
code_?:
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
            JsonTypeReflector::JsonTypeReflector_GetAttribute_7
                      (attributeProvider,
                       Newtonsoft__Json__JsonPropertyAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonPropertyAttribute>_System__Reflection__ICustomAttributeProvider_
                      );
  if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    *hasExplicitAttribute = 1;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?();
  }
  pJVar5 = JsonTypeReflector::JsonTypeReflector_GetAttribute_7
                     (attributeProvider,
                      Newtonsoft__Json__JsonIgnoreAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonIgnoreAttribute>_System__Reflection__ICustomAttributeProvider_
                     );
  declaringType._3_1_ = pJVar5 != (JsonConverterAttribute *)0x0;
  if ((this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) ||
     (pOVar6 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
               TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_01,
                          (MethodInfo *)0x0), pOVar6 == (Object *)0x0)) {
    pSVar7 = name;
    if (this_00 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      this = (DefaultContractResolver *)&UNK_?;
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          (MethodInfo *)0x0);
      if (pOVar6 != (Object *)0x0) {
        declaringType._3_1_ = false;
        pSVar7 = (String *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            (MethodInfo *)0x0);
        name = (String *)this_00;
      }
    }
  }
  else {
    this = (DefaultContractResolver *)0x0;
    pSVar7 = (String *)
             TierOnDeathProgress+<DoTierProgress>c__Iterator0::
             TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                       ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_01,(MethodInfo *)0x0)
    ;
  }
  attributeProvider = (ICustomAttributeProvider *)this->klass[1]._0.image;
  iVar8 = (*(code *)(this->klass->vtable).ResolvePropertyName.method)();
  if (pSVar7 == (String *)0x0) {
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (pSVar7->fields).length = iVar8;
  pSVar7[1].monitor = (MonitorData *)name;
  if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    if (this_00 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      pSVar7[3].klass = (String__Class *)0x0;
    }
    else {
      bVar10 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value
                        ((SubscribableVariableBase_1_System_Boolean_ *)this_00,(MethodInfo *)0x0);
      attributeProvider = (ICustomAttributeProvider *)0x0;
      pSVar7[3].klass = (String__Class *)(uint)(bVar10 != 0);
      this = (DefaultContractResolver *)&UNK_?;
      pOVar6 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_00,(MethodInfo *)0x0);
      if (pOVar6 == (Object *)0xffffffff) {
        *(undefined4 *)&(pSVar7->fields).start_char = 0;
        pSVar7[1].klass = (String__Class *)0x0;
      }
      else {
        memberSerialization =
             (MemberSerialization__Enum)
             System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
        allowNonPublicAccess = (bool *)MethodInfo__System__Nullable<int>__Nullable_int_;
        declaringType._3_1_ = (char)((uint)&stack0xfffffff4 >> 0x18);
        uVar11 = 0;
        func_?();
        *(int *)&(pSVar7->fields).start_char = (int)uVar11;
        pSVar7[1].klass = (String__Class *)((ulonglong)uVar11 >> 0x20);
      }
    }
  }
  else {
    attributeProvider = (ICustomAttributeProvider *)0x0;
    this = (DefaultContractResolver *)&UNK_?;
    pSVar12 = (String__Class *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
              TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                        (this_01,(MethodInfo *)0x0);
    pSVar7[3].klass = pSVar12;
    pSVar12 = (String__Class *)(this_01->fields)._elapsedTime___0;
    *(undefined4 *)&(pSVar7->fields).start_char =
         *(undefined4 *)&(this_01->fields).tweenInfo.m_IgnoreTimeScale;
    pSVar7[1].klass = pSVar12;
  }
  if (declaringType._3_1_ == '\0') {
    if ((memberSerialization == MemberSerialization__Enum_OptIn) &&
       (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0)) {
      bVar3 = this_00 ==
               (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                *)0x0;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  *(bool *)&pSVar7[2].fields.length = bVar3;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar12 = (String__Class *)
            JsonTypeReflector::JsonTypeReflector_GetJsonConverter
                      (attributeProvider,(Type *)0x0,(MethodInfo *)0x0);
  targetConvertedType = *(Type **)&pSVar7[1].fields.start_char;
  pSVar7[2].klass = pSVar12;
  pJVar13 = JsonTypeReflector::JsonTypeReflector_GetJsonConverter
                      (attributeProvider,targetConvertedType,(MethodInfo *)0x0);
  pSVar7[2].monitor = (MonitorData *)pJVar13;
  pJStack14 =
       JsonTypeReflector::JsonTypeReflector_GetAttribute_7
                 (attributeProvider,
                  System__ComponentModel__DefaultValueAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<System::ComponentModel::DefaultValueAttribute>_System__Reflection__ICustomAttributeProvider_
                 );
  if (pJStack14 == (JsonConverterAttribute *)0x0) {
    uVar15 = 0;
  }
  else {
    pcStack16 = pJStack14->klass[1]._0.name;
    uVar15 = (*pJStack14->klass[1]._0.gc_desc)();
  }
  *(undefined4 *)&pSVar7[2].fields.start_char = uVar15;
  if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    fVar17 = 0.0;
    pCVar18 = (ColorTween_ColorTweenCallback *)0x0;
  }
  else {
    pCVar18 = (this_01->fields).tweenInfo.m_Target;
    fVar17 = (this_01->fields).tweenInfo.m_StartColor.r;
  }
  pSVar7[3].fields.length = (int32_t)pCVar18;
  *(float *)&pSVar7[3].fields.start_char = fVar17;
  if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    pMVar19 = (MonitorData *)0x0;
    pSVar12 = (String__Class *)0x0;
  }
  else {
    pSVar12 = (String__Class *)(this_01->fields).tweenInfo.m_StartColor.g;
    pMVar19 = (MonitorData *)(this_01->fields).tweenInfo.m_StartColor.b;
  }
  pSVar7[4].klass = pSVar12;
  pSVar7[4].monitor = pMVar19;
  if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    fVar20 = 0.0;
    fVar17 = 0.0;
  }
  else {
    fVar17 = (this_01->fields).tweenInfo.m_StartColor.a;
    fVar20 = (this_01->fields).tweenInfo.m_TargetColor.r;
  }
  pSVar7[4].fields.length = (int32_t)fVar17;
  *(float *)&pSVar7[4].fields.start_char = fVar20;
  if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    pMVar19 = (MonitorData *)0x0;
    pSVar12 = (String__Class *)0x0;
  }
  else {
    pSVar12 = (String__Class *)(this_01->fields).tweenInfo.m_TargetColor.g;
    pMVar19 = (MonitorData *)(this_01->fields).tweenInfo.m_TargetColor.b;
  }
  pSVar7[5].klass = pSVar12;
  pSVar7[5].monitor = pMVar19;
  if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    iVar8 = 0;
    fVar17 = 0.0;
  }
  else {
    fVar17 = (this_01->fields).tweenInfo.m_TargetColor.a;
    iVar8 = (this_01->fields).tweenInfo.m_TweenMode;
  }
  pSVar7[5].fields.length = (int32_t)fVar17;
  *(int32_t *)&pSVar7[5].fields.start_char = iVar8;
  if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined2 *)&(this_01->fields).tweenInfo.m_Duration;
  }
  *(undefined2 *)&pSVar7[3].monitor = uVar21;
  *allowNonPublicAccess = 0;
  if (((this->fields)._DefaultMembersSearchFlags_k__BackingField & 0x20) != 0) {
    *allowNonPublicAccess = 1;
  }
  if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    *allowNonPublicAccess = 1;
  }
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    *allowNonPublicAccess = 1;
    *hasExplicitAttribute = 1;
  }
  return;
}


/* Boolean ShouldSerializeEntityMember(MemberInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_ShouldSerializeEntityMember
               (DefaultContractResolver *this,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (memberInfo != (MemberInfo_1 *)0x0) {
    bVar1 = (TypeInfo__System__Reflection__PropertyInfo->_1).naturalAligment;
    if (((memberInfo->klass->_1).naturalAligment < bVar1) ||
       ((memberInfo->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pMVar3 = (MemberInfo_1 *)0x0;
    if (bVar2) {
      pMVar3 = memberInfo;
    }
    if (pMVar3 != (MemberInfo_1 *)0x0) {
      piVar4 = (int *)(**(code **)&pMVar3->klass[1]._0.this_arg.attrs)
                                (pMVar3,pMVar3->klass[1]._0.element_class);
      if (piVar4 != (int *)0x0) {
        cVar5 = (**(code **)(*piVar4 + 0x388))(piVar4,*(undefined4 *)(*piVar4 + 0x38c));
        if (cVar5 == '\0') {
          return 1;
        }
        piVar4 = (int *)(**(code **)&pMVar3->klass[1]._0.this_arg.attrs)
                                  (pMVar3,pMVar3->klass[1]._0.element_class);
        if ((piVar4 != (int *)0x0) &&
           (piVar4 = (int *)(**(code **)(*piVar4 + 0x380))(piVar4,*(undefined4 *)(*piVar4 + 900)),
           piVar4 != (int *)0x0)) {
          a = (String *)(**(code **)(*piVar4 + 0x150))(piVar4,*(undefined4 *)(*piVar4 + 0x154));
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar6 = mscorlib.dll::System::String::String_op_Equality
                            (a,StringLiteral_System_Data_Objects_DataClasses_,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            return 1;
          }
          return 0;
        }
      }
      func_?(0);
      pcVar7 = (code *)swi(3);
      bVar6 = (*pcVar7)();
      return bVar6;
    }
  }
  return 1;
}


/* Void 
   UpdateCache(Dictionary`2[Newtonsoft.Json.Serialization.ResolverContractKey,Newtonsoft.Json.Serialization.JsonContract])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_UpdateCache
               (DefaultContractResolver *this,
               Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
               *cache,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedCache != 0) {
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    this = (DefaultContractResolver *)
           TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields;
  }
  ((DefaultContractResolver__StaticFields *)this)->_sharedContractCache = cache;
  return;
}


/* Boolean <CreateObjectContract>m__2(ConstructorInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver__CreateObjectContract_m__2(ConstructorInfo *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__JsonConstructorAttribute;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (c != (ConstructorInfo *)0x0) {
    bVar2 = (*(code *)(c->klass->vtable).__unknown_3.method)(c,pTVar1,1);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Int32 <CreateProperties>m__4(JsonProperty) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
        DefaultContractResolver__CreateProperties_m__4(JsonProperty *p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NStack_1.value = 0;
  NStack_1.has_value = 0;
  NStack_1._5_3_ = 0;
  if (p != (JsonProperty *)0x0) {
    NStack_1 = (p->fields)._Order_k__BackingField;
    cVar2 = func_?(&NStack_1,MethodInfo__System__Nullable<int>__get_HasValue__);
    if (cVar2 == '\0') {
      return -1;
    }
    iVar3 = func_?(&NStack_1,MethodInfo__System__Nullable<int>__get_Value__);
    return iVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Boolean <GetAttributeConstructor>m__3(ConstructorInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver__GetAttributeConstructor_m__3(ConstructorInfo *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__JsonConstructorAttribute;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (c != (ConstructorInfo *)0x0) {
    bVar2 = (*(code *)(c->klass->vtable).__unknown_3.method)(c,pTVar1,1);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean <GetSerializableMembers>m__1(MemberInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver__GetSerializableMembers_m__1(MemberInfo_1 *m,MethodInfo *method)

{
  bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsIndexedProperty(m,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* DefaultContractResolver() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
  (pSVar1->fields).originalScale.x = 2.8026e-44;
  *(undefined1 *)&(pSVar1->fields).state = 1;
  TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->_instance =
       (IContractResolver *)pSVar1;
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>
                        );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__List__
            );
  pWVar2 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
           func_?(TypeInfo__Newtonsoft__Json__Converters__KeyValuePairConverter);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(pWVar2,(MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pWVar2,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__Add_Newtonsoft__Json__JsonConverter_
              );
    pWVar2 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(pWVar2,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pWVar2,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__Add_Newtonsoft__Json__JsonConverter_
              );
    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
    BuiltInConverters = (IList_1_Newtonsoft_Json_JsonConverter_ *)this;
    method_00 = TypeInfo__System__Object;
    pSVar1 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
    _typeContractCacheLock = (Object *)pSVar1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* DefaultContractResolver() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver__ctor(DefaultContractResolver *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._DefaultMembersSearchFlags_k__BackingField = 0x14;
  (this->fields)._sharedCache = 0;
  return;
}


/* DefaultContractResolver(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver__ctor_1
               (DefaultContractResolver *this,bool shareCache,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._DefaultMembersSearchFlags_k__BackingField = 0x14;
  (this->fields)._sharedCache = shareCache;
  return;
}


/* Boolean get_DynamicCodeGeneration() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_get_DynamicCodeGeneration
               (DefaultContractResolver *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  bVar1 = JsonTypeReflector::JsonTypeReflector_get_DynamicCodeGeneration((MethodInfo *)0x0);
  return bVar1;
}


/* IContractResolver get_Instance() */

IContractResolver *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0))
  {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
  return TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
         _instance;
}

