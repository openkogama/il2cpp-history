
/* Boolean CanConvertToString(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_CanConvertToString(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__ComponentConverter);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__ComponentModel__ReferenceConverter);
    func_?(&TypeRef__System__String);
    func_?(&TypeRef__System__ComponentModel__TypeConverter);
    func_?(&TypeRef__System__Type);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this = JsonTypeReflector::JsonTypeReflector_GetTypeConverter(type,(MethodInfo *)0x0);
  if (((this != (TypeConverter *)0x0) &&
      (((this->klass->_1).typeHierarchyDepth <
        (TypeInfo__System__ComponentModel__ComponentConverter->_1).typeHierarchyDepth ||
       ((this->klass->_1).typeHierarchy
        [(TypeInfo__System__ComponentModel__ComponentConverter->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__ComponentModel__ComponentConverter)))) &&
     (((this->klass->_1).typeHierarchyDepth <
       (TypeInfo__System__ComponentModel__ReferenceConverter->_1).typeHierarchyDepth ||
      ((this->klass->_1).typeHierarchy
       [(TypeInfo__System__ComponentModel__ReferenceConverter->_1).typeHierarchyDepth - 1] !=
       (Il2CppClass *)TypeInfo__System__ComponentModel__ReferenceConverter)))) {
    left._source = (CancellationTokenSource *)
                   mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    pIVar1 = TypeRef__System__ComponentModel__TypeConverter;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    right._source =
         (CancellationTokenSource *)
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    pIVar1 = TypeRef__System__String;
    if (bVar2 != 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      bVar2 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertTo
                        (this,pTVar3,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 1;
      }
    }
  }
  pIVar1 = TypeRef__System__Type;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)type,(Object **)pTVar3,(MethodInfo *)0x0);
  pIVar1 = TypeRef__System__Type;
  if (bVar2 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTStack4 =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    if (type == (Type *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      bVar2 = (*pcVar5)();
      return bVar2;
    }
    pMStack6 = (type->klass->vtable).IsSubclassOf.method;
    cVar7 = (*(type->klass->vtable).IsSubclassOf.methodPtr)();
    if (cVar7 == '\0') {
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonArrayContract *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
  if (pJVar1 != (JsonArrayContract *)0x0) {
    JsonArrayContract::JsonArrayContract__ctor(pJVar1,objectType,(MethodInfo *)0x0);
    DefaultContractResolver_InitializeContract(this,(JsonContract *)pJVar1,(MethodInfo *)0x0);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonArrayContract *)(*pcVar2)();
  return pJVar1;
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (constructor != (ConstructorInfo *)0x0) {
    iVar1 = (*(constructor->klass->vtable).__unknown_6.methodPtr)
                      (constructor,(constructor->klass->vtable).__unknown_6.method);
    type = (Type *)(*(constructor->klass->vtable).__unknown_1.methodPtr)
                             (constructor,(constructor->klass->vtable).__unknown_1.method);
    this_00 = (JsonPropertyCollection *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
    if (this_00 != (JsonPropertyCollection *)0x0) {
      JsonPropertyCollection::JsonPropertyCollection__ctor(this_00,type,(MethodInfo *)0x0);
      uVar2 = 0;
      if (iVar1 != 0) {
        piVar3 = (int *)(iVar1 + 0x10);
        while( true ) {
          if (*(int *)(iVar1 + 0xc) <= (int)uVar2) {
            return (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00;
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
          piVar4 = (int *)*piVar3;
          if (piVar4 == (int *)0x0) goto code_?;
          propertyName = (String *)
                         (**(code **)(*piVar4 + 0x104))(piVar4,*(undefined4 *)(*piVar4 + 0x108));
          if (memberProperties == (JsonPropertyCollection *)0x0) goto code_?;
          pJVar5 = JsonPropertyCollection::JsonPropertyCollection_GetClosestMatchProperty
                             (memberProperties,propertyName,(MethodInfo *)0x0);
          if (pJVar5 != (JsonProperty *)0x0) {
            left._source = (CancellationTokenSource *)(pJVar5->fields)._PropertyType_k__BackingField
            ;
            right._source = (CancellationTokenSource *)func_?(10,piVar4);
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            bVar6 = mscorlib.dll::System::Threading::CancellationToken::
                    CancellationToken_op_Inequality(left,right,(MethodInfo *)0x0);
            if (bVar6 != 0) {
              pJVar5 = (JsonProperty *)0x0;
            }
          }
          pJVar5 = (JsonProperty *)func_?(9,this,pJVar5,piVar4);
          if (pJVar5 != (JsonProperty *)0x0) {
            JsonPropertyCollection::JsonPropertyCollection_AddProperty
                      (this_00,pJVar5,(MethodInfo *)0x0);
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    func_?(&TypeRef__System__Collections__IEnumerable);
    func_?(&TypeRef__System__Runtime__Serialization__ISerializable);
    func_?(&TypeRef__Newtonsoft__Json__Linq__JToken);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pTVar1 = objectType;
  bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                    (objectType,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(pTVar1,(MethodInfo *)0x0);
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = JsonConvert::JsonConvert_IsJsonPrimitiveType(pTVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    method = *(MethodInfo **)(iRam_? + 0x128);
    objectType = pTVar1;
    pJVar3 = (JsonContract *)(**(code **)(iRam_? + 0x124))();
    return pJVar3;
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    method = (MethodInfo *)TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector;
    objectType = (Type *)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)0x0;
  this = (DefaultContractResolver *)&UNK_?;
  objectType = pTVar1;
  pJVar4 = JsonTypeReflector::JsonTypeReflector_GetJsonObjectAttribute(pTVar1,(MethodInfo *)0x0);
  if (pJVar4 != (JsonObjectAttribute *)0x0) {
    method = (MethodInfo *)&UNK_?;
    objectType = (Type *)&UNK_?;
    pJVar3 = (JsonContract *)(**(code **)(_UNK_? + 0xf4))();
    return pJVar3;
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  method = (MethodInfo *)&UNK_?;
  pJVar5 = JsonTypeReflector::JsonTypeReflector_GetJsonArrayAttribute(pTVar1,(MethodInfo *)0x0);
  pIVar6 = TypeRef__Newtonsoft__Json__Linq__JToken;
  if (pJVar5 != (JsonArrayAttribute *)0x0) {
    pJVar3 = (JsonContract *)(**(code **)(_UNK_? + 0x11c))();
    return pJVar3;
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
  method = (MethodInfo *)&UNK_?;
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTVar1,(Object **)pTVar7,(MethodInfo *)0x0);
  pIVar6 = TypeRef__Newtonsoft__Json__Linq__JToken;
  if (bVar2 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    if (pTVar1 != (Type *)0x0) {
      cVar8 = (*(pTVar1->klass->vtable).IsSubclassOf.methodPtr)();
      if (cVar8 != '\0') goto code_?;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pIVar6 = TypeRef__System__Collections__IDictionary;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      if (pTVar7 != (Type *)0x0) {
        cVar8 = (*(pTVar7->klass->vtable).IsAssignableFrom.methodPtr)();
        pIVar6 = TypeRef__System__Collections__Generic__IDictionary;
        if (cVar8 == '\0') {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          objectType = (Type *)0x0;
          method = (MethodInfo *)&UNK_?;
          method = (MethodInfo *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          this = (DefaultContractResolver *)&UNK_?;
          objectType = pTVar1;
          bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                            (pTVar1,(Type *)method,&objectType,(MethodInfo *)0x0);
          pIVar6 = TypeRef__System__Collections__IEnumerable;
          if (bVar2 == 0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
            if (pTVar7 != (Type *)0x0) {
              cVar8 = func_?();
              if (cVar8 != '\0') {
                pJVar3 = (JsonContract *)func_?();
                return pJVar3;
              }
              if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar2 = DefaultContractResolver_CanConvertToString(pTVar1,(MethodInfo *)0x0);
              pIVar6 = TypeRef__System__Runtime__Serialization__ISerializable;
              if (bVar2 != 0) {
                pJVar3 = (JsonContract *)(**(code **)(_UNK_? + 0x13c))();
                return pJVar3;
              }
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
              if (pTVar1 != (Type *)0x0) {
                cVar8 = func_?();
                if (cVar8 == '\0') {
                  pJVar3 = (JsonContract *)func_?();
                  return pJVar3;
                }
                pJVar3 = (JsonContract *)(**(code **)(_UNK_? + 0x134))();
                return pJVar3;
              }
            }
            goto code_?;
          }
        }
        pJVar3 = (JsonContract *)(*(this->klass->vtable).CreateDictionaryContract.methodPtr)();
        return pJVar3;
      }
    }
code_?:
    func_?();
    pcVar9 = (code *)swi(3);
    pJVar3 = (JsonContract *)(*pcVar9)();
    return pJVar3;
  }
code_?:
  pJVar3 = (JsonContract *)(**(code **)(_UNK_? + 300))();
  return pJVar3;
}


/* JsonDictionaryContract CreateDictionaryContract(Type) */

JsonDictionaryContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateDictionaryContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<System::String,_System::String>);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonDictionaryContract *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
  if (pJVar1 != (JsonDictionaryContract *)0x0) {
    JsonDictionaryContract::JsonDictionaryContract__ctor(pJVar1,objectType,(MethodInfo *)0x0);
    DefaultContractResolver_InitializeContract(this,(JsonContract *)pJVar1,(MethodInfo *)0x0);
    this_00 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__Func<System::String,_System::String>);
    if ((this_00 != (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0) &&
       (this != (DefaultContractResolver *)0x0)) {
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]
      ::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,(this->klass->vtable).ResolvePropertyName.method,
                 (MethodInfo *)0x0);
      (pJVar1->fields)._PropertyNameResolver_k__BackingField = (Func_2_String_String_ *)this_00;
      func_?(&(pJVar1->fields)._PropertyNameResolver_k__BackingField,this_00);
      return pJVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonDictionaryContract *)(*pcVar2)();
  return pJVar1;
}


/* JsonISerializableContract CreateISerializableContract(Type) */

JsonISerializableContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateISerializableContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__ConstructorInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__ObjectConstructor<System::Object>);
    func_?(&
                    Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                   );
    func_?(&TypeRef__System__Runtime__Serialization__SerializationInfo);
    func_?(&TypeRef__System__Runtime__Serialization__StreamingContext);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass39_0___CreateISerializableContract_b__0_System__Object____
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass39_0
                   );
    cRam_? = '\x01';
  }
  pJVar1 = (JsonISerializableContract *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract);
  if (pJVar1 == (JsonISerializableContract *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    JsonStringContract::JsonStringContract__ctor
              ((JsonStringContract *)pJVar1,objectType,(MethodInfo *)0x0);
    DefaultContractResolver_InitializeContract(this,(JsonContract *)pJVar1,(MethodInfo *)0x0);
    types = (Type__Array *)func_?(TypeInfo__System__Type,2);
    handle = TypeRef__System__Runtime__Serialization__SerializationInfo;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (types == (Type__Array *)0x0) goto code_?;
    if ((pTVar3 != (Type *)0x0) &&
       (iVar4 = func_?(pTVar3,(types->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (types->max_length == 0) goto code_?;
    types->vector[0] = pTVar3;
    func_?(types->vector,pTVar3);
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__System__Runtime__Serialization__StreamingContext
                        ,(MethodInfo *)0x0);
    if ((pTVar3 == (Type *)0x0) ||
       (iVar4 = func_?(pTVar3,(types->klass->_0).element_class), iVar4 != 0)) {
      if (types->max_length < 2) goto code_?;
      types->vector[1] = pTVar3;
      func_?(types->vector + 1,pTVar3);
      if (objectType != (Type *)0x0) {
        left = mscorlib.dll::System::Type::Type_GetConstructor_1
                         (objectType,
                          BindingFlags__Enum_NonPublic|BindingFlags__Enum_Public|
                          BindingFlags__Enum_Instance,(Binder *)0x0,types,
                          (ParameterModifier__Array *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                          (left,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return pJVar1;
        }
        value = (Object *)func_?();
        if (value != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,(MethodInfo *)types);
          if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
          }
          pRVar6 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                             ((MethodInfo *)0x0);
          if (pRVar6 != (ReflectionDelegateFactory *)0x0) {
            func_?((&(pRVar6->klass->vtable).Equals)
                            [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                             ->slot].method,
                            Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                            ,&pcStack_7);
            pOVar8 = (Object__Class *)(*pcStack_7)(pRVar6,left,puStack_9);
            value[1].klass = pOVar8;
            func_?(value + 1,pOVar8);
            this_00 = (ObjectConstructor_1_System_Object_ *)
                      func_?(
                                     TypeInfo__Newtonsoft__Json__Serialization__ObjectConstructor<System::Object>
                                     );
            if (this_00 != (ObjectConstructor_1_System_Object_ *)0x0) {
              ObjectConstructor`1[System::Object]::ObjectConstructor_1_System_Object___ctor
                        (this_00,value,
                         MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass39_0___CreateISerializableContract_b__0_System__Object____
                         ,(MethodInfo *)0x0);
              (pJVar1->fields)._ISerializableCreator_k__BackingField = this_00;
              func_?(&(pJVar1->fields)._ISerializableCreator_k__BackingField,this_00);
              return pJVar1;
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pJVar1 = (JsonISerializableContract *)(*pcVar10)();
  return pJVar1;
}


/* JsonLinqContract CreateLinqContract(Type) */

JsonLinqContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateLinqContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract);
    cRam_? = '\x01';
  }
  contract = (JsonContract *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract);
  if (contract != (JsonContract *)0x0) {
    JsonStringContract::JsonStringContract__ctor
              ((JsonStringContract *)contract,objectType,(MethodInfo *)0x0);
    DefaultContractResolver_InitializeContract(this,contract,(MethodInfo *)0x0);
    return (JsonLinqContract *)contract;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JsonLinqContract *)(*pcVar1)();
  return pJVar2;
}


/* IValueProvider CreateMemberValueProvider(MemberInfo) */

IValueProvider *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateMemberValueProvider
          (DefaultContractResolver *this,MemberInfo_1 *member,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__ReflectionValueProvider);
    cRam_? = '\x01';
  }
  this_00 = (ReflectionValueProvider *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__ReflectionValueProvider);
  if (this_00 != (ReflectionValueProvider *)0x0) {
    ReflectionValueProvider::ReflectionValueProvider__ctor(this_00,member,(MethodInfo *)0x0);
    return (IValueProvider *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IValueProvider *)(*pcVar1)();
  return pIVar2;
}


/* JsonObjectContract CreateObjectContract(Type) */

JsonObjectContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateObjectContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<Newtonsoft::Json::Serialization::JsonProperty>_System__Collections__Generic__IList<Newtonsoft::Json::Serialization::JsonProperty>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_
                   );
    func_?(&TypeInfo__System__Reflection__ConstructorInfo);
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Any<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>__System__Func<System::Reflection::ConstructorInfo,_bool>_
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::ConstructorInfo,_bool>);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___CreateObjectContract_b__25_0_System__Reflection__ConstructorInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonObjectContract *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
  if (pJVar1 != (JsonObjectContract *)0x0) {
    JsonObjectContract::JsonObjectContract__ctor(pJVar1,objectType,(MethodInfo *)0x0);
    DefaultContractResolver_InitializeContract(this,(JsonContract *)pJVar1,(MethodInfo *)0x0);
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MVar2 = JsonTypeReflector::JsonTypeReflector_GetObjectMemberSerialization
                      (objectType,(MethodInfo *)0x0);
    pJVar3 = (pJVar1->fields)._Properties_k__BackingField;
    (pJVar1->fields)._MemberSerialization_k__BackingField = MVar2;
    pIVar4 = (IEnumerable_1_System_Object_ *)
             (*(this->klass->vtable).CreateProperties.methodPtr)
                       (this,(pJVar1->fields)._._UnderlyingType_k__BackingField,MVar2);
    Json::Utilities::CollectionUtils::CollectionUtils_AddRange_1
              ((IList_1_System_Object_ *)pJVar3,pIVar4,
               void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<Newtonsoft::Json::Serialization::JsonProperty>_System__Collections__Generic__IList<Newtonsoft::Json::Serialization::JsonProperty>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_
              );
    if (objectType != (Type *)0x0) {
      pIVar4 = (IEnumerable_1_System_Object_ *)
               (*(objectType->klass->vtable).__unknown_19.methodPtr)
                         (objectType,0x34,(objectType->klass->vtable).__unknown_19.method);
      if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
      }
      this_00 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
                static_fields->__9__25_0;
      if (this_00 == (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)0x0) {
        if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
        }
        object = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
                 static_fields->__9;
        this_00 = (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)
                  func_?(TypeInfo__System__Func<System::Reflection::ConstructorInfo,_bool>)
        ;
        if (this_00 == (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                   MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___CreateObjectContract_b__25_0_System__Reflection__ConstructorInfo_
                   ,(MethodInfo *)0x0);
        TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields->
        __9__25_0 = this_00;
        func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
                         static_fields->__9__25_0,this_00);
      }
      bVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_3
                        (pIVar4,(Func_2_Object_Boolean_ *)this_00,
                         bool_MethodInfo__System__Linq__Enumerable__Any<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>__System__Func<System::Reflection::ConstructorInfo,_bool>_
                        );
      if (bVar5 == 0) {
        if (((pJVar1->fields)._._DefaultCreator_k__BackingField != (Func_1_Object_ *)0x0) &&
           ((pJVar1->fields)._._DefaultCreatorNonPublic_k__BackingField == 0)) {
          return pJVar1;
        }
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ConstructorInfo>
                         );
          func_?(&
                          TypeInfo__System__Collections__Generic__IList<System::Reflection::ConstructorInfo>
                         );
          cRam_? = '\x01';
        }
        iVar6 = (*(objectType->klass->vtable).__unknown_19.methodPtr)
                          (objectType,0x14,(objectType->klass->vtable).__unknown_19.method);
        if (iVar6 == 0) goto code_?;
        iVar7 = func_?(0,
                                TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ConstructorInfo>
                                ,iVar6);
        if (iVar7 == 1) {
          left_00 = (ConstructorInfo *)
                    func_?(0,
                                    TypeInfo__System__Collections__Generic__IList<System::Reflection::ConstructorInfo>
                                    ,iVar6,0);
        }
        else {
          left_00 = (ConstructorInfo *)0x0;
        }
        if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Reflection__ConstructorInfo);
        }
        bVar5 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                          (left_00,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return pJVar1;
        }
        (pJVar1->fields)._ParametrizedConstructor_k__BackingField = left_00;
        func_?(&(pJVar1->fields)._ParametrizedConstructor_k__BackingField,left_00);
        pDVar8 = this->klass;
        pMVar9 = (pDVar8->vtable).CreateConstructorParameters.method;
        pJVar3 = (pJVar1->fields)._Properties_k__BackingField;
      }
      else {
        left = DefaultContractResolver_GetAttributeConstructor(this,objectType,(MethodInfo *)0x0);
        if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                          (left,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return pJVar1;
        }
        left_00 = (ConstructorInfo *)&(pJVar1->fields)._OverrideConstructor_k__BackingField;
        (pJVar1->fields)._OverrideConstructor_k__BackingField = left;
        func_?();
        pDVar8 = this->klass;
        pMVar9 = (pDVar8->vtable).CreateConstructorParameters.method;
        pJVar3 = (pJVar1->fields)._Properties_k__BackingField;
      }
      initial = (pJVar1->fields)._ConstructorParameters_k__BackingField;
      pIVar4 = (IEnumerable_1_System_Object_ *)
               (*(pDVar8->vtable).CreateConstructorParameters.methodPtr)
                         (this,left_00,pJVar3,pMVar9);
      Json::Utilities::CollectionUtils::CollectionUtils_AddRange_1
                ((IList_1_System_Object_ *)initial,pIVar4,
                 void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<Newtonsoft::Json::Serialization::JsonProperty>_System__Collections__Generic__IList<Newtonsoft::Json::Serialization::JsonProperty>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_
                );
      return pJVar1;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pJVar1 = (JsonObjectContract *)(*pcVar10)();
  return pJVar1;
}


/* JsonPrimitiveContract CreatePrimitiveContract(Type) */

JsonPrimitiveContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreatePrimitiveContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
    cRam_? = '\x01';
  }
  contract = (JsonContract *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
  if (contract != (JsonContract *)0x0) {
    JsonStringContract::JsonStringContract__ctor
              ((JsonStringContract *)contract,objectType,(MethodInfo *)0x0);
    DefaultContractResolver_InitializeContract(this,contract,(MethodInfo *)0x0);
    return (JsonPrimitiveContract *)contract;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JsonPrimitiveContract *)(*pcVar1)();
  return pJVar2;
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
    func_?(&
                    System__Linq__IOrderedEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_MethodInfo__System__Linq__Enumerable__OrderBy<Newtonsoft::Json::Serialization::JsonProperty,_int>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<Newtonsoft::Json::Serialization::JsonProperty>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Serialization::JsonProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__get_Current__
                   );
    func_?(&TypeInfo__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_int>);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___CreateProperties_b__45_0_Newtonsoft__Json__Serialization__JsonProperty_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (*(this->klass->vtable).GetSerializableMembers.methodPtr)
                      (this,type,(this->klass->vtable).GetSerializableMembers.method);
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    uVar5 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
    this_03 = (JsonSerializationException *)func_?(uVar5);
    func_?(this_03);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Null_collection_of_seralizable_m);
    JsonSerializationException::JsonSerializationException__ctor_1(this_03,message,method_00);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__CreateProperties_System__Type__Newtonsoft__Json__MemberSerialization_
                   );
    func_?();
    func_?();
  }
  else {
    this_01 = (JsonPropertyCollection *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
    if (this_01 != (JsonPropertyCollection *)0x0) {
      JsonPropertyCollection::JsonPropertyCollection__ctor(this_01,type,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 &stack0xffffffd4,this_00,
                 MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__GetEnumerator__
                );
      uStack_1 = 1;
      while( true ) {
        bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__MoveNext__
                          );
        if (bVar6 == 0) break;
        property = (JsonProperty *)(*(this->klass->vtable).CreateProperty.methodPtr)();
        if (property != (JsonProperty *)0x0) {
          JsonPropertyCollection::JsonPropertyCollection_AddProperty
                    (this_01,property,(MethodInfo *)0x0);
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&pOStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__Dispose__
                 ,in_stack_7);
      uStack_1 = 0xffffffff;
      if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_02 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
                static_fields->__9__45_0;
      if (this_02 == (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Int32_ *)0x0) {
        if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
                 static_fields->__9;
        this_02 = (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Int32_ *)func_?();
        if (this_02 == (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Int32_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
        Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                  ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_02,
                   (Object *)object,
                   MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___CreateProperties_b__45_0_Newtonsoft__Json__Serialization__JsonProperty_
                   ,(MethodInfo *)0x0);
        TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields->
        __9__45_0 = this_02;
        func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
                         static_fields->__9__45_0,this_02);
      }
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                         ((IEnumerable_1_System_Object_ *)this_01,(Func_2_Object_Single_ *)this_02,
                          System__Linq__IOrderedEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_MethodInfo__System__Linq__Enumerable__OrderBy<Newtonsoft::Json::Serialization::JsonProperty,_int>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_int>_
                         );
      pLVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                         ((IEnumerable_1_System_Object_ *)source,
                          System__Collections__Generic__List<Newtonsoft::Json::Serialization::JsonProperty>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Serialization::JsonProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>_
                         );
      *unaff_FS_OFFSET = uStack_3;
      return (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pIVar10 = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)(*pcVar9)();
  return pIVar10;
}


/* JsonProperty CreateProperty(MemberInfo, MemberSerialization) */

JsonProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateProperty
          (DefaultContractResolver *this,MemberInfo_1 *member,
          MemberSerialization__Enum memberSerialization,MethodInfo *method)

{
  this_00 = member;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonProperty);
    cRam_? = '\x01';
  }
  this_01 = (DefaultContractResolver *)(in_stack_1 & 0xffffff00);
  bVar2 = 0;
  pJVar3 = (JsonProperty *)func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonProperty);
  if (pJVar3 != (JsonProperty *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)pJVar3,(MethodInfo *)0x0);
    pTVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberUnderlyingType
                       (member,(MethodInfo *)0x0);
    (pJVar3->fields)._PropertyType_k__BackingField = pTVar4;
    func_?(&(pJVar3->fields)._PropertyType_k__BackingField,pTVar4);
    pIVar5 = (IValueProvider *)
             (*(this->klass->vtable).CreateMemberValueProvider.methodPtr)
                       (this,member,(this->klass->vtable).CreateMemberValueProvider.method);
    (pJVar3->fields)._ValueProvider_k__BackingField = pIVar5;
    func_?(&(pJVar3->fields)._ValueProvider_k__BackingField,pIVar5);
    if (member != (MemberInfo_1 *)0x0) {
      name = (String *)
             (*(member->klass->vtable).__unknown_1.methodPtr)
                       (member,(member->klass->vtable).__unknown_1.method);
      pTVar4 = (Type *)(*(member->klass->vtable).__unknown_2.methodPtr)
                                 (member,(member->klass->vtable).__unknown_2.method);
      DefaultContractResolver_SetPropertySettingsFromAttributes
                (this,pJVar3,(ICustomAttributeProvider *)member,name,pTVar4,memberSerialization,
                 &stack0xfffffff8,&stack0xfffffff4,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      iVar6 = (*(member->klass->vtable).__unknown.methodPtr)();
      if (iVar6 == 4) {
        if (((member->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth) ||
           ((member->klass->_1).typeHierarchy
            [(TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) goto code_?;
        if ((bool)this_01 == 0) {
          bVar7 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsPublic
                            ((FieldInfo_1 *)member,(MethodInfo *)0x0);
          bVar7 = bVar7 != 0;
          goto code_?;
        }
code_?:
        bVar7 = 1;
      }
      else {
        if (iVar6 == 0x10) {
          pMVar8 = member->klass;
          if (((pMVar8->_1).typeHierarchyDepth <
               (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth) ||
             ((pMVar8->_1).typeHierarchy
              [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
              (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) goto code_?;
          cVar9 = (*(code *)pMVar8[1]._0.byval_arg.data)();
          if (cVar9 != '\0') {
            if ((bool)this_01 == 0) {
              left = (PropertyInfo_1 *)(*(code *)member->klass[1]._0.declaringType)();
              this_01 = (DefaultContractResolver *)0x0;
              bVar2 = 0;
              bVar7 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                                (left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
              goto code_?;
            }
            goto code_?;
          }
        }
        bVar7 = 0;
      }
code_?:
      (pJVar3->fields)._Readable_k__BackingField = bVar7;
      member._0_1_ = (bool)this_01;
      bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_CanSetMemberValue
                        (this_00,(bool)member,bVar2,(MethodInfo *)0x0);
      (pJVar3->fields)._Writable_k__BackingField = bVar2;
      pPVar10 = DefaultContractResolver_CreateShouldSerializeTest
                          ((DefaultContractResolver *)this_00,this_00,(MethodInfo *)0x0);
      (pJVar3->fields)._ShouldSerialize_k__BackingField = pPVar10;
      func_?();
      DefaultContractResolver_SetIsSpecifiedActions
                (this_01,pJVar3,this_00,(bool)member,(MethodInfo *)0x0);
      return pJVar3;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pJVar3 = (JsonProperty *)(*pcVar11)();
  return pJVar3;
}


/* JsonProperty CreatePropertyFromConstructorParameter(JsonProperty, ParameterInfo) */

JsonProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreatePropertyFromConstructorParameter
          (DefaultContractResolver *this,JsonProperty *matchingMemberProperty,
          ParameterInfo *parameterInfo,MethodInfo *method)

{
  uStack_1._0_2_ = in_CX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonProperty);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__get_HasValue__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__get_HasValue__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_HasValue__
                   );
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__get_HasValue__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__get_HasValue__
                   );
    cRam_? = '\x01';
  }
  uStack_1 = (uint)(ushort)uStack_1;
  pJVar2 = (JsonProperty *)func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonProperty);
  if (pJVar2 != (JsonProperty *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)pJVar2,(MethodInfo *)0x0);
    if (parameterInfo != (ParameterInfo *)0x0) {
      pTVar3 = (Type *)(*(parameterInfo->klass->vtable).get_ParameterType.methodPtr)
                                 (parameterInfo,
                                  (parameterInfo->klass->vtable).get_ParameterType.method);
      (pJVar2->fields)._PropertyType_k__BackingField = pTVar3;
      func_?(&(pJVar2->fields)._PropertyType_k__BackingField,pTVar3);
      pSVar4 = (String *)
               (*(parameterInfo->klass->vtable).get_Name.methodPtr)
                         (parameterInfo,(parameterInfo->klass->vtable).get_Name.method);
      piVar5 = (int *)(*(parameterInfo->klass->vtable).get_Member.methodPtr)
                                (parameterInfo,(parameterInfo->klass->vtable).get_Member.method);
      if (piVar5 != (int *)0x0) {
        pTVar3 = (Type *)(**(code **)(*piVar5 + 0xfc))(piVar5,*(undefined4 *)(*piVar5 + 0x100));
        DefaultContractResolver_SetPropertySettingsFromAttributes
                  (this,pJVar2,(ICustomAttributeProvider *)parameterInfo,pSVar4,pTVar3,
                   MemberSerialization__Enum_OptOut,(bool *)((int)&uStack_1 + 2),
                   (bool *)((int)&uStack_1 + 3),(MethodInfo *)0x0);
        (pJVar2->fields)._Readable_k__BackingField = 0;
        (pJVar2->fields)._Writable_k__BackingField = 1;
        if (matchingMemberProperty != (JsonProperty *)0x0) {
          pSVar4 = (pJVar2->fields)._PropertyName_k__BackingField;
          pMStack6 = (parameterInfo->klass->vtable).get_Name.method;
          b = (String *)(*(parameterInfo->klass->vtable).get_Name.methodPtr)();
          bVar7 = mscorlib.dll::System::String::String_op_Inequality(pSVar4,b,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            pSStack8 = (matchingMemberProperty->fields)._PropertyName_k__BackingField;
          }
          else {
            pSStack8 = (pJVar2->fields)._PropertyName_k__BackingField;
          }
          (pJVar2->fields)._PropertyName_k__BackingField = pSStack8;
          pJStack9 = &pJVar2->fields;
          func_?();
          pSStack8 = (String *)(pJVar2->fields)._Converter_k__BackingField;
          if (pSStack8 == (String *)0x0) {
            pSStack8 = (String *)(matchingMemberProperty->fields)._Converter_k__BackingField;
          }
          (pJVar2->fields)._Converter_k__BackingField = (JsonConverter *)pSStack8;
          pJStack9 = (JsonProperty__Fields *)&(pJVar2->fields)._Converter_k__BackingField;
          func_?();
          pSStack8 = (String *)(pJVar2->fields)._MemberConverter_k__BackingField;
          if (pSStack8 == (String *)0x0) {
            pSStack8 =
                 (String *)(matchingMemberProperty->fields)._MemberConverter_k__BackingField;
          }
          (pJVar2->fields)._MemberConverter_k__BackingField = (JsonConverter *)pSStack8;
          pJStack9 =
               (JsonProperty__Fields *)&(pJVar2->fields)._MemberConverter_k__BackingField;
          func_?();
          pSStack8 = (String *)(pJVar2->fields)._DefaultValue_k__BackingField;
          if (pSStack8 == (String *)0x0) {
            pSStack8 =
                 (String *)(matchingMemberProperty->fields)._DefaultValue_k__BackingField;
          }
          (pJVar2->fields)._DefaultValue_k__BackingField = (Object *)pSStack8;
          pJStack9 = (JsonProperty__Fields *)&(pJVar2->fields)._DefaultValue_k__BackingField;
          func_?();
          if ((pJVar2->fields)._Required_k__BackingField == 0) {
            iVar10 = (matchingMemberProperty->fields)._Required_k__BackingField;
          }
          else {
            iVar10 = (pJVar2->fields)._Required_k__BackingField;
          }
          (pJVar2->fields)._Required_k__BackingField = iVar10;
          NVar11 = (pJVar2->fields)._IsReference_k__BackingField;
          if (NVar11.hasValue == 0) {
            NVar11 = (matchingMemberProperty->fields)._IsReference_k__BackingField;
          }
          iVar10 = (pJVar2->fields)._NullValueHandling_k__BackingField.value;
          (pJVar2->fields)._IsReference_k__BackingField = NVar11;
          uVar12 = *(undefined4 *)&(pJVar2->fields)._NullValueHandling_k__BackingField;
          if ((char)uVar12 == '\0') {
            uVar12 = *(undefined4 *)
                     &(matchingMemberProperty->fields)._NullValueHandling_k__BackingField;
            iVar10 = (matchingMemberProperty->fields)._NullValueHandling_k__BackingField.value;
          }
          *(undefined4 *)&(pJVar2->fields)._NullValueHandling_k__BackingField = uVar12;
          uVar12 = *(undefined4 *)&(pJVar2->fields)._DefaultValueHandling_k__BackingField;
          (pJVar2->fields)._NullValueHandling_k__BackingField.value = iVar10;
          iVar10 = (pJVar2->fields)._DefaultValueHandling_k__BackingField.value;
          if ((char)uVar12 == '\0') {
            uVar12 = *(undefined4 *)
                     &(matchingMemberProperty->fields)._DefaultValueHandling_k__BackingField;
            iVar10 = (matchingMemberProperty->fields)._DefaultValueHandling_k__BackingField.value;
          }
          *(undefined4 *)&(pJVar2->fields)._DefaultValueHandling_k__BackingField = uVar12;
          uVar12 = *(undefined4 *)&(pJVar2->fields)._ReferenceLoopHandling_k__BackingField;
          (pJVar2->fields)._DefaultValueHandling_k__BackingField.value = iVar10;
          iVar10 = (pJVar2->fields)._ReferenceLoopHandling_k__BackingField.value;
          if ((char)uVar12 == '\0') {
            uVar12 = *(undefined4 *)
                     &(matchingMemberProperty->fields)._ReferenceLoopHandling_k__BackingField;
            iVar10 = (matchingMemberProperty->fields)._ReferenceLoopHandling_k__BackingField.value;
          }
          *(undefined4 *)&(pJVar2->fields)._ReferenceLoopHandling_k__BackingField = uVar12;
          uVar12 = *(undefined4 *)&(pJVar2->fields)._ObjectCreationHandling_k__BackingField;
          (pJVar2->fields)._ReferenceLoopHandling_k__BackingField.value = iVar10;
          iVar10 = (pJVar2->fields)._ObjectCreationHandling_k__BackingField.value;
          if ((char)uVar12 == '\0') {
            uVar12 = *(undefined4 *)
                     &(matchingMemberProperty->fields)._ObjectCreationHandling_k__BackingField;
            iVar10 = (matchingMemberProperty->fields)._ObjectCreationHandling_k__BackingField.value;
          }
          *(undefined4 *)&(pJVar2->fields)._ObjectCreationHandling_k__BackingField = uVar12;
          uVar12 = *(undefined4 *)&(pJVar2->fields)._TypeNameHandling_k__BackingField;
          (pJVar2->fields)._ObjectCreationHandling_k__BackingField.value = iVar10;
          iVar10 = (pJVar2->fields)._TypeNameHandling_k__BackingField.value;
          if ((char)uVar12 == '\0') {
            uVar12 = *(undefined4 *)
                     &(matchingMemberProperty->fields)._TypeNameHandling_k__BackingField;
            iVar10 = (matchingMemberProperty->fields)._TypeNameHandling_k__BackingField.value;
          }
          *(undefined4 *)&(pJVar2->fields)._TypeNameHandling_k__BackingField = uVar12;
          (pJVar2->fields)._TypeNameHandling_k__BackingField.value = iVar10;
        }
        return pJVar2;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pJVar2 = (JsonProperty *)(*pcVar13)();
  return pJVar2;
}


/* Predicate`1[Object] CreateShouldSerializeTest(MemberInfo) */

Predicate_1_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateShouldSerializeTest
          (DefaultContractResolver *this,MemberInfo_1 *member,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Boolean);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Predicate<System::Object>);
    func_?(&
                    Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass49_0___CreateShouldSerializeTest_b__0_System__Object_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass49_0
                   );
    func_?(&StringLiteral_ShouldSerialize);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass49_0
                         );
  if ((value != (Object *)0x0) &&
     (mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EDI), member != (MemberInfo_1 *)0x0)) {
    this_00 = (Type *)(*(member->klass->vtable).__unknown_2.methodPtr)
                                (member,(member->klass->vtable).__unknown_2.method);
    pSVar1 = (String *)
             (*(member->klass->vtable).__unknown_1.methodPtr)
                       (member,(member->klass->vtable).__unknown_1.method);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_ShouldSerialize,pSVar1,(MethodInfo *)0x0);
    types = (Type__Array *)func_?(TypeInfo__System__Type,0);
    if (this_00 != (Type *)0x0) {
      left = mscorlib.dll::System::Type::Type_GetMethod_2(this_00,pSVar1,types,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Equality
                        ((PropertyInfo_1 *)left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return (Predicate_1_Object_ *)0x0;
      }
      if (left != (MethodInfo_1 *)0x0) {
        CStack_3._source =
             (CancellationTokenSource *)
             (*(left->klass->vtable).get_ReturnType.methodPtr)
                       (left,(left->klass->vtable).get_ReturnType.method);
        handle = TypeRef__System__Boolean;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        right._source =
             (CancellationTokenSource *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                          (CStack_3,right,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return (Predicate_1_Object_ *)0x0;
        }
        if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
        }
        pRVar4 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                           ((MethodInfo *)0x0);
        if (pRVar4 != (ReflectionDelegateFactory *)0x0) {
          func_?((&(pRVar4->klass->vtable).Equals)
                          [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                           ->slot].method,
                          Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                          ,&pcStack_5);
          pOVar6 = (Object__Class *)(*pcStack_5)(pRVar4,left,CStack_3._source);
          value[1].klass = pOVar6;
          func_?(value + 1,pOVar6);
          pPVar7 = (Predicate_1_Object_ *)
                   func_?(TypeInfo__System__Predicate<System::Object>);
          if (pPVar7 != (Predicate_1_Object_ *)0x0) {
            mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                      (pPVar7,value,
                       MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass49_0___CreateShouldSerializeTest_b__0_System__Object_
                       ,(MethodInfo *)0x0);
            return pPVar7;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pPVar7 = (Predicate_1_Object_ *)(*pcVar8)();
  return pPVar7;
}


/* JsonStringContract CreateStringContract(Type) */

JsonStringContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_CreateStringContract
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract);
    cRam_? = '\x01';
  }
  contract = (JsonContract *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract);
  if (contract != (JsonContract *)0x0) {
    JsonStringContract::JsonStringContract__ctor
              ((JsonStringContract *)contract,objectType,(MethodInfo *)0x0);
    DefaultContractResolver_InitializeContract(this,contract,(MethodInfo *)0x0);
    return (JsonStringContract *)contract;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JsonStringContract *)(*pcVar1)();
  return pJVar2;
}


/* ConstructorInfo GetAttributeConstructor(Type) */

ConstructorInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_GetAttributeConstructor
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__List<System::Reflection::ConstructorInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>__System__Func<System::Reflection::ConstructorInfo,_bool>_
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::ConstructorInfo,_bool>);
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ConstructorInfo>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<System::Reflection::ConstructorInfo>
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___GetAttributeConstructor_b__26_0_System__Reflection__ConstructorInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
    cRam_? = '\x01';
  }
  if (objectType != (Type *)0x0) {
    pIVar1 = (IEnumerable_1_System_Object_ *)
             (*(objectType->klass->vtable).__unknown_19.methodPtr)
                       (objectType,0x34,(objectType->klass->vtable).__unknown_19.method);
    if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
    }
    this_00 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields
              ->__9__26_0;
    if (this_00 == (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)0x0) {
      if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
      }
      object = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
               static_fields->__9;
      this_00 = (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)
                func_?(TypeInfo__System__Func<System::Reflection::ConstructorInfo,_bool>);
      if (this_00 == (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                 MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___GetAttributeConstructor_b__26_0_System__Reflection__ConstructorInfo_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields->
      __9__26_0 = this_00;
      func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
                       static_fields->__9__26_0,this_00);
    }
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                       (pIVar1,(Func_2_Object_Boolean_ *)this_00,
                        System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>__System__Func<System::Reflection::ConstructorInfo,_bool>_
                       );
    pLVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                       (pIVar1,
                        System__Collections__Generic__List<System::Reflection::ConstructorInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::ConstructorInfo>_System__Collections__Generic__IEnumerable<System::Reflection::ConstructorInfo>_
                       );
    if (pLVar2 != (List_1_System_Object_ *)0x0) {
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
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IList<System::Reflection::ConstructorInfo>
                                 ,pLVar2,0);
        return pCVar4;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar5);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Multiple_constructors_with_the_J);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__GetAttributeConstructor_System__Type_
                 );
  func_?();
  pcVar6 = (code *)swi(3);
  pCVar4 = (ConstructorInfo *)(*pcVar6)();
  return pCVar4;
}


/* Dictionary`2[Newtonsoft.Json.Serialization.ResolverContractKey,Newtonsoft.Json.Serialization.JsonContract]
   GetCache() */

Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
* Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
  DefaultContractResolver_GetCache(DefaultContractResolver *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedCache != 0) {
    if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    this = (DefaultContractResolver *)
           TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields;
  }
  return (this->fields)._instanceContractCache;
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    func_?(&TypeRef__System__Runtime__Serialization__OnDeserializedAttribute);
    func_?(&TypeRef__System__Runtime__Serialization__OnDeserializingAttribute);
    func_?(&TypeRef__Newtonsoft__Json__Serialization__OnErrorAttribute);
    func_?(&TypeRef__System__Runtime__Serialization__OnSerializedAttribute);
    func_?(&TypeRef__System__Runtime__Serialization__OnSerializingAttribute);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pTStack_1 = (Type *)0x0;
  *onSerializing = (MethodInfo_1 *)0x0;
  func_?(onSerializing,0);
  *onSerialized = (MethodInfo_1 *)0x0;
  func_?(onSerialized,0);
  *onDeserializing = (MethodInfo_1 *)0x0;
  func_?(onDeserializing,0);
  *onDeserialized = (MethodInfo_1 *)0x0;
  func_?(onDeserialized,0);
  *onError = (MethodInfo_1 *)0x0;
  func_?(onError,0);
  if (type != (Type *)0x0) {
    iVar2 = (*(type->klass->vtable).__unknown_25.methodPtr)
                      (type,0x36,(type->klass->vtable).__unknown_25.method);
    uStack_3 = 0;
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(iVar2 + 0x10);
      while( true ) {
        if (*(int *)(iVar2 + 0xc) <= (int)uStack_3) {
          return;
        }
        if (*(uint *)(iVar2 + 0xc) <= uStack_3) break;
        method_1 = (MethodInfo_1 *)*puVar4;
        if (method_1 == (MethodInfo_1 *)0x0) goto code_?;
        cVar5 = (*(method_1->klass->vtable).get_ContainsGenericParameters.methodPtr)
                          (method_1,(method_1->klass->vtable).get_ContainsGenericParameters.method);
        if (cVar5 == '\0') {
          pTStack_1 = (Type *)0x0;
          parameters = (ParameterInfo__Array *)func_?(0xf,method_1);
          pIVar6 = TypeRef__System__Runtime__Serialization__OnSerializingAttribute;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onSerializing;
          if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&pTStack_1,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onSerializing = method_1;
            func_?(onSerializing,method_1);
          }
          pIVar6 = TypeRef__System__Runtime__Serialization__OnSerializedAttribute;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onSerialized;
          if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&pTStack_1,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onSerialized = method_1;
            func_?(onSerialized,method_1);
          }
          pIVar6 = TypeRef__System__Runtime__Serialization__OnDeserializingAttribute;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onDeserializing;
          if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&pTStack_1,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onDeserializing = method_1;
            func_?(onDeserializing,method_1);
          }
          pIVar6 = TypeRef__System__Runtime__Serialization__OnDeserializedAttribute;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onDeserialized;
          if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&pTStack_1,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onDeserialized = method_1;
            func_?(onDeserialized,method_1);
          }
          pIVar6 = TypeRef__Newtonsoft__Json__Serialization__OnErrorAttribute;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          pMVar8 = *onError;
          if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          bVar9 = DefaultContractResolver_IsValidCallback
                            (method_1,parameters,pTVar7,pMVar8,&pTStack_1,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            *onError = method_1;
            func_?(onError,method_1);
          }
        }
        uStack_3 = uStack_3 + 1;
        puVar4 = puVar4 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* String GetClrTypeFullName(Type) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
         DefaultContractResolver_GetClrTypeFullName(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral__0___1_);
    cRam_? = '\x01';
  }
  if (type == (Type *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    cVar2 = (*(type->klass->vtable).get_IsGenericTypeDefinition.methodPtr)
                      (type,(type->klass->vtable).get_IsGenericTypeDefinition.method);
    if (cVar2 != '\0') {
code_?:
      pSVar3 = (String *)
               (*(type->klass->vtable).__unknown_6.methodPtr)
                         (type,(type->klass->vtable).__unknown_6.method);
      return pSVar3;
    }
    cVar2 = (*(type->klass->vtable).get_ContainsGenericParameters.methodPtr)
                      (type,(type->klass->vtable).get_ContainsGenericParameters.method);
    if (cVar2 == '\0') goto code_?;
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,2);
    pOVar4 = (Object *)
             (*(type->klass->vtable).__unknown_4.methodPtr)
                       (type,(type->klass->vtable).__unknown_4.method);
    if (args == (Object__Array *)0x0) goto code_?;
    if (pOVar4 != (Object *)0x0) {
      iVar5 = func_?(pOVar4,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar4;
    func_?(args->vector,pOVar4);
    pOVar4 = (Object *)
             (*(type->klass->vtable).__unknown.methodPtr)
                       (type,(type->klass->vtable).__unknown.method);
    if (pOVar4 != (Object *)0x0) {
      iVar5 = func_?(pOVar4,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    if (1 < args->max_length) {
      args->vector[1] = pOVar4;
      func_?(args->vector + 1,pOVar4);
      pSVar3 = mscorlib.dll::System::String::String_Format_7
                         ((IFormatProvider *)provider,StringLiteral__0___1_,args,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
code_?:
  func_?();
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    System__Func<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateDefaultConstructor<System::Object>_System__Type_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pRVar1 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory((MethodInfo *)0x0);
  if (pRVar1 != (ReflectionDelegateFactory *)0x0) {
    func_?((&(pRVar1->klass->vtable).Equals)
                    [System__Func<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateDefaultConstructor<System::Object>_System__Type_
                     ->slot].method,
                    System__Func<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateDefaultConstructor<System::Object>_System__Type_
                    ,&pcStack_2);
    pFVar3 = (Func_1_Object_ *)(*pcStack_2)(pRVar1,createdType,uStack_4);
    return pFVar3;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pFVar3 = (Func_1_Object_ *)(*pcVar5)();
  return pFVar3;
}


/* ConstructorInfo GetParametrizedConstructor(Type) */

ConstructorInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_GetParametrizedConstructor
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ConstructorInfo>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<System::Reflection::ConstructorInfo>
                   );
    cRam_? = '\x01';
  }
  if (objectType != (Type *)0x0) {
    iVar1 = (*(objectType->klass->vtable).__unknown_19.methodPtr)
                      (objectType,0x14,(objectType->klass->vtable).__unknown_19.method);
    if (iVar1 != 0) {
      iVar2 = func_?(0,
                              TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ConstructorInfo>
                              ,iVar1);
      if (iVar2 != 1) {
        return (ConstructorInfo *)0x0;
      }
      pCVar3 = (ConstructorInfo *)
               func_?(0,
                               TypeInfo__System__Collections__Generic__IList<System::Reflection::ConstructorInfo>
                               ,iVar1,0);
      return pCVar3;
    }
  }
  func_?();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Runtime__CompilerServices__CompilerGeneratedAttribute);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__ShouldSerializeEntityMember_System__Reflection__MemberInfo_
                   );
    func_?(&
                    System__Collections__Generic__List<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__get_Current__
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::MemberInfo,_bool>);
    func_?(&
                    System__Runtime__Serialization__DataMemberAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<System::Runtime::Serialization::DataMemberAttribute>_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    Newtonsoft__Json__JsonPropertyAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonPropertyAttribute>_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Add_System__Reflection__MemberInfo_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Contains_System__Reflection__MemberInfo_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___GetSerializableMembers_b__23_0_System__Reflection__MemberInfo_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___GetSerializableMembers_b__23_1_System__Reflection__MemberInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
    func_?(&StringLiteral_System_Data_Objects_DataClasses_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pDVar4 = JsonTypeReflector::JsonTypeReflector_GetDataContractAttribute
                     (objectType,(MethodInfo *)0x0);
  pLVar5 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetFieldsAndProperties
                     (objectType,(this->fields)._DefaultMembersSearchFlags_k__BackingField,
                      (MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pFVar6 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields->
           __9__23_0;
  if (pFVar6 == (Func_2_System_Reflection_MemberInfo_Boolean_ *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar7 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields
             ->__9;
    pFVar6 = (Func_2_System_Reflection_MemberInfo_Boolean_ *)func_?();
    if (pFVar6 == (Func_2_System_Reflection_MemberInfo_Boolean_ *)0x0) goto code_?;
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)pFVar6,(Object *)pDVar7,
               MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___GetSerializableMembers_b__23_0_System__Reflection__MemberInfo_
               ,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields->
    __9__23_0 = pFVar6;
    func_?();
  }
  pIVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                     ((IEnumerable_1_System_Object_ *)pLVar5,(Func_2_Object_Boolean_ *)pFVar6,
                      System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                     );
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                      (pIVar8,
                       System__Collections__Generic__List<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                      );
  pLVar5 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetFieldsAndProperties
                     (objectType,
                      BindingFlags__Enum_NonPublic|BindingFlags__Enum_Public|
                      BindingFlags__Enum_Static|BindingFlags__Enum_Instance,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pFVar6 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields->
           __9__23_1;
  if (pFVar6 == (Func_2_System_Reflection_MemberInfo_Boolean_ *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar7 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields
             ->__9;
    pFVar6 = (Func_2_System_Reflection_MemberInfo_Boolean_ *)func_?();
    if (pFVar6 == (Func_2_System_Reflection_MemberInfo_Boolean_ *)0x0) goto code_?;
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)pFVar6,(Object *)pDVar7,
               MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c___GetSerializableMembers_b__23_1_System__Reflection__MemberInfo_
               ,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields->
    __9__23_1 = pFVar6;
    func_?();
  }
  pIVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                     ((IEnumerable_1_System_Object_ *)pLVar5,(Func_2_Object_Boolean_ *)pFVar6,
                      System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                     );
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                      (pIVar8,
                       System__Collections__Generic__List<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                      );
  this_02 = (MethodInfo *)func_?();
  if ((this_02 != (MethodInfo *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List__
                ),
     this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    method_00 = this_02;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffc0,this_01,
                        MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__GetEnumerator__
                       );
    uStack_1 = 1;
    RVar10 = pLVar9->_current;
code_?:
    item = RVar10;
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__MoveNext__
                      );
    handle = TypeRef__System__Runtime__CompilerServices__CompilerGeneratedAttribute;
    if (bVar11 != 0) {
      if ((this->fields)._SerializeCompilerGeneratedMembers_k__BackingField != 0)
      goto code_?;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Type::Type_GetTypeFromHandle
                ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if (item != (RegexCharClass_SingleRange)0x0) goto code_?;
      goto code_?;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffb0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Reflection::MemberInfo>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    bVar11 = Json::Utilities::ReflectionUtils::ReflectionUtils_AssignableToTypeName
                      (objectType,StringLiteral_System_Data_Objects_DataClasses_,
                       (Type **)&stack0xffffffd4,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      this_03 = (Func_2_Object_Boolean_ *)func_?();
      if (this_03 == (Func_2_Object_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_03,(Object *)this,
                 MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__ShouldSerializeEntityMember_System__Reflection__MemberInfo_
                 ,(MethodInfo *)0x0);
      pIVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                         ((IEnumerable_1_System_Object_ *)this_02,this_03,
                          System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                         );
      this_02 = (MethodInfo *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                          (pIVar8,
                           System__Collections__Generic__List<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__ToList<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                          );
    }
    *unaff_FS_OFFSET = uStack_3;
    return (List_1_System_Reflection_MemberInfo_ *)this_02;
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pLVar5 = (List_1_System_Reflection_MemberInfo_ *)(*pcVar12)();
  return pLVar5;
code_?:
  RVar10.First = 1;
  RVar10.Last = 0;
  cVar13 = func_?();
  if (cVar13 == '\0') {
code_?:
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (this_00,item,
                       MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Contains_System__Reflection__MemberInfo_
                      );
    if (bVar11 == 0) {
      if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      RVar10 = item;
      pOVar14 = JsonTypeReflector::JsonTypeReflector_GetAttribute
                          ((ICustomAttributeProvider *)item,
                           Newtonsoft__Json__JsonPropertyAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonPropertyAttribute>_System__Reflection__ICustomAttributeProvider_
                          );
      if (pOVar14 == (Object *)0x0) {
        if (pDVar4 == (DataContractAttribute *)0x0) goto code_?;
        if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar14 = JsonTypeReflector::JsonTypeReflector_GetAttribute
                            ((ICustomAttributeProvider *)item,
                             System__Runtime__Serialization__DataMemberAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<System::Runtime::Serialization::DataMemberAttribute>_System__Reflection__ICustomAttributeProvider_
                            );
        if (pOVar14 == (Object *)0x0) goto code_?;
      }
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_02,(Object *)item,
               MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Add_System__Reflection__MemberInfo_
              );
    RVar10 = item;
  }
  goto code_?;
}


/* Void InitializeContract(JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_InitializeContract
               (DefaultContractResolver *this,JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__ConstructorInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    cRam_? = '\x01';
  }
  contract_00 = contract;
  if (contract == (JsonContract *)0x0) goto code_?;
  pTVar1 = (contract->fields)._UnderlyingType_k__BackingField;
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pJVar2 = JsonTypeReflector::JsonTypeReflector_GetJsonContainerAttribute(pTVar1,(MethodInfo *)0x0);
  if (pJVar2 == (JsonContainerAttribute *)0x0) {
    pTVar1 = (contract_00->fields)._UnderlyingType_k__BackingField;
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    pDVar3 = JsonTypeReflector::JsonTypeReflector_GetDataContractAttribute(pTVar1,(MethodInfo *)0x0)
    ;
    if ((pDVar3 != (DataContractAttribute *)0x0) &&
       ((pDVar3->fields)._IsReference_k__BackingField != 0)) {
      contract = (JsonContract *)((uint)contract & 0xffff0000);
      in_stack_4 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
      mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                ((Nullable_1_SByte_ *)&contract,1,MethodInfo__System__Nullable<bool>__Nullable_bool_
                );
      NVar5 = contract._0_2_;
      goto code_?;
    }
  }
  else {
    NVar5 = (pJVar2->fields)._isReference;
code_?:
    (contract_00->fields)._IsReference_k__BackingField = NVar5;
  }
  pJVar6 = (JsonConverter *)
           (*(this->klass->vtable).ResolveContractConverter.methodPtr)
                     (this,(contract_00->fields)._UnderlyingType_k__BackingField,
                      (this->klass->vtable).ResolveContractConverter.method);
  (contract_00->fields)._Converter_k__BackingField = pJVar6;
  func_?(&(contract_00->fields)._Converter_k__BackingField,pJVar6);
  if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
  pJVar6 = JsonSerializer::JsonSerializer_GetMatchingConverter_1
                     (TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                      static_fields->BuiltInConverters,
                      (contract_00->fields)._UnderlyingType_k__BackingField,(MethodInfo *)0x0);
  (contract_00->fields)._InternalConverter_k__BackingField = pJVar6;
  func_?(&(contract_00->fields)._InternalConverter_k__BackingField,pJVar6);
  bVar7 = Json::Utilities::ReflectionUtils::ReflectionUtils_HasDefaultConstructor_1
                    ((contract_00->fields)._CreatedType_k__BackingField,1,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    pTVar1 = (contract_00->fields)._CreatedType_k__BackingField;
    if (pTVar1 == (Type *)0x0) goto code_?;
    bVar7 = mscorlib.dll::System::Type::Type_get_IsValueType(pTVar1,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if (cRam_? == '\0') {
    contract = (JsonContract *)&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector;
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    contract = (JsonContract *)TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector;
    func_?();
  }
  contract = (JsonContract *)0x0;
  pRVar8 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory((MethodInfo *)0x0);
  if (pRVar8 != (ReflectionDelegateFactory *)0x0) {
    method = (MethodInfo *)&stack0xfffffff4;
    contract = (JsonContract *)
               System__Func<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateDefaultConstructor<System::Object>_System__Type_
    ;
    func_?();
    pFVar9 = (Func_1_Object_ *)(*(code *)in_stack_4)();
    (contract_00->fields)._DefaultCreator_k__BackingField = pFVar9;
    func_?(&(contract_00->fields)._DefaultCreator_k__BackingField);
    pTVar1 = (contract_00->fields)._CreatedType_k__BackingField;
    if (pTVar1 != (Type *)0x0) {
      bVar7 = mscorlib.dll::System::Type::Type_get_IsValueType(pTVar1,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        pTVar1 = (contract_00->fields)._CreatedType_k__BackingField;
        if (cRam_? == '\0') {
          contract = (JsonContract *)&TypeInfo__System__Type;
          func_?();
          cRam_? = '\x01';
        }
        contract = (JsonContract *)0x0;
        types = (Type__Array *)func_?();
        if (pTVar1 == (Type *)0x0) goto code_?;
        left = mscorlib.dll::System::Type::Type_GetConstructor_1
                         (pTVar1,BindingFlags__Enum_Public|BindingFlags__Enum_Instance,(Binder *)0x0
                          ,types,(ParameterModifier__Array *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar7 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Equality
                          ((PropertyInfo_1 *)left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
      }
      else {
        bVar7 = 0;
      }
      (contract_00->fields)._DefaultCreatorNonPublic_k__BackingField = bVar7;
code_?:
      contract = (JsonContract *)0x0;
      DefaultContractResolver_ResolveCallbackMethods
                (this,contract_00,(contract_00->fields)._UnderlyingType_k__BackingField,
                 (MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsValidCallback(MethodInfo, ParameterInfo[], Type, MethodInfo, Type ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_IsValidCallback
               (MethodInfo_1 *method_1,ParameterInfo__Array *parameters,Type *attributeType,
               MethodInfo_1 *currentCallback,Type **prevAttributeType,MethodInfo *method)

{
  pMVar1 = method_1;
  if (cRam_? == '\0') {
    func_?(&TypeRef__Newtonsoft__Json__Serialization__ErrorContext);
    func_?(&TypeRef__Newtonsoft__Json__Serialization__OnErrorAttribute);
    func_?(&TypeRef__System__Runtime__Serialization__StreamingContext);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeRef__System__Void);
    cRam_? = '\x01';
  }
  if (method_1 == (MethodInfo_1 *)0x0) goto code_?;
  cVar2 = (*(method_1->klass->vtable).__unknown_3.methodPtr)
                    (method_1,attributeType,0,(method_1->klass->vtable).__unknown_3.method);
  if (cVar2 == '\0') {
    return 0;
  }
  bVar3 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    ((PropertyInfo_1 *)currentCallback,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    CVar4._source = (CancellationTokenSource *)*prevAttributeType;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar3 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (CVar4,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      bVar3 = mscorlib.dll::System::Reflection::MethodBase::MethodBase_get_IsVirtual
                        ((MethodBase *)method_1,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        ppMVar5 = &method_1->klass;
        method_1 = (MethodInfo_1 *)&UNK_?;
        CVar4._source =
             (CancellationTokenSource *)(*((*ppMVar5)->vtable).get_ReturnType.methodPtr)();
        pIVar6 = TypeRef__System__Void;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        CVar7._source =
             (CancellationTokenSource *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                          (CVar4,CVar7,(MethodInfo *)0x0);
        pIVar6 = TypeRef__Newtonsoft__Json__Serialization__OnErrorAttribute;
        if (bVar3 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)attributeType,(Object **)pTVar8,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            if ((pMVar1 != (MethodInfo_1 *)0x0) && (pMVar1[1].monitor == (MonitorData *)0x1)) {
              if (pMVar1[2].klass == (MethodInfo_1__Class *)0x0) goto code_?;
              CVar4._source = (CancellationTokenSource *)func_?(10,pMVar1[2].klass);
              pIVar6 = TypeRef__System__Runtime__Serialization__StreamingContext;
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Type);
              }
              CVar7._source =
                   (CancellationTokenSource *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
              bVar3 = mscorlib.dll::System::Threading::CancellationToken::
                      CancellationToken_op_Inequality(CVar4,CVar7,(MethodInfo *)0x0);
              if (bVar3 == 0) {
code_?:
                *prevAttributeType = attributeType;
                func_?(prevAttributeType,attributeType);
                return 1;
              }
            }
code_?:
            uVar9 = func_?(&TypeInfo__System__Globalization__CultureInfo);
            func_?(uVar9);
            provider = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            uVar9 = func_?(&TypeInfo__System__Object,3);
            args = (Object__Array *)func_?(uVar9);
            func_?(method_1);
            pTVar8 = (Type *)func_?(8,method_1);
            uVar9 = func_?(&
                                     TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver
                                    );
            func_?(uVar9);
            pSVar10 = DefaultContractResolver_GetClrTypeFullName(pTVar8,(MethodInfo *)0x0);
            func_?(args);
            func_?(args,pSVar10);
            func_?(0,pSVar10);
            func_?(args);
            func_?(args,method_1);
            func_?(1,method_1);
            RVar11.value = (void *)func_?(&
                                                  TypeRef__System__Runtime__Serialization__StreamingContext
                                                  );
            uVar9 = func_?(&TypeInfo__System__Type);
            func_?(uVar9);
            pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar11,(MethodInfo *)0x0);
            func_?(args);
            func_?(args,pTVar8);
            func_?(2,pTVar8);
            ppSVar12 = &StringLiteral_Serialization_Callback___1___in_;
          }
          else {
            if ((pMVar1 != (MethodInfo_1 *)0x0) && (pMVar1[1].monitor == (MonitorData *)0x2)) {
              if (pMVar1[2].klass == (MethodInfo_1__Class *)0x0) {
code_?:
                func_?();
                goto code_?;
              }
              CVar4._source = (CancellationTokenSource *)func_?(10,pMVar1[2].klass);
              pIVar6 = TypeRef__System__Runtime__Serialization__StreamingContext;
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Type);
              }
              CVar7._source =
                   (CancellationTokenSource *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
              bVar3 = mscorlib.dll::System::Threading::CancellationToken::
                      CancellationToken_op_Inequality(CVar4,CVar7,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                if (pMVar1[1].monitor < (MonitorData *)0x2) goto code_?;
                if (pMVar1[2].monitor == (MonitorData *)0x0) goto code_?;
                CVar4._source = (CancellationTokenSource *)func_?(10,pMVar1[2].monitor);
                pIVar6 = TypeRef__Newtonsoft__Json__Serialization__ErrorContext;
                if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__System__Type);
                }
                CVar7._source =
                     (CancellationTokenSource *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
                bVar3 = mscorlib.dll::System::Threading::CancellationToken::
                        CancellationToken_op_Inequality(CVar4,CVar7,(MethodInfo *)0x0);
                if (bVar3 == 0) goto code_?;
              }
            }
            uVar9 = func_?(&TypeInfo__System__Globalization__CultureInfo);
            func_?(uVar9);
            provider = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            uVar9 = func_?(&TypeInfo__System__Object,4);
            args = (Object__Array *)func_?(uVar9);
            func_?(&UNK_?);
            pTVar8 = (Type *)func_?(8,&UNK_?);
            uVar9 = func_?(&
                                     TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver
                                    );
            func_?(uVar9);
            pSVar10 = DefaultContractResolver_GetClrTypeFullName(pTVar8,(MethodInfo *)0x0);
            func_?(args);
            func_?(args,pSVar10);
            func_?(0,pSVar10);
            func_?(args);
            func_?(args,&UNK_?);
            func_?(1,&UNK_?);
            RVar11.value = (void *)func_?(&
                                                  TypeRef__System__Runtime__Serialization__StreamingContext
                                                  );
            uVar9 = func_?(&TypeInfo__System__Type);
            func_?(uVar9);
            pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar11,(MethodInfo *)0x0);
            func_?(args);
            func_?(args,pTVar8);
            func_?(2,pTVar8);
            RVar11.value = (void *)func_?(&
                                                  TypeRef__Newtonsoft__Json__Serialization__ErrorContext
                                                  );
            pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar11,(MethodInfo *)0x0);
            func_?(args);
            func_?(args,pTVar8);
            func_?(3,pTVar8);
            ppSVar12 = &StringLiteral_Serialization_Error_Callback___1;
          }
        }
        else {
          uVar9 = func_?(&TypeInfo__System__Globalization__CultureInfo);
          func_?(uVar9);
          provider = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uVar9 = func_?(&TypeInfo__System__Object,2);
          args = (Object__Array *)func_?(uVar9);
          func_?(&UNK_?);
          pTVar8 = (Type *)func_?(8,&UNK_?);
          uVar9 = func_?(&
                                   TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver
                                  );
          func_?(uVar9);
          pSVar10 = DefaultContractResolver_GetClrTypeFullName(pTVar8,(MethodInfo *)0x0);
          func_?(args);
          func_?(args,pSVar10);
          func_?(0,pSVar10);
          func_?(args);
          func_?(args,&UNK_?);
          func_?(1,&UNK_?);
          ppSVar12 = &StringLiteral_Serialization_Callback___1___in_;
        }
      }
      else {
        func_?();
        func_?();
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        func_?();
        args = (Object__Array *)func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        pTVar8 = (Type *)func_?();
        uVar9 = func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver
                                );
        func_?(uVar9);
        pSVar10 = DefaultContractResolver_GetClrTypeFullName(pTVar8,(MethodInfo *)0x0);
        func_?(args);
        func_?(args,pSVar10);
        func_?();
        func_?();
        func_?();
        func_?();
        ppSVar12 = &StringLiteral_Virtual_Method___0___of_type___1;
      }
    }
    else {
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      pTVar8 = *prevAttributeType;
      func_?();
      func_?(args,pTVar8);
      func_?();
      func_?();
      func_?(args,attributeType);
      func_?(1);
      func_?(0);
      pTVar8 = (Type *)func_?(8,0);
      uVar9 = func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
      func_?(uVar9);
      pSVar10 = DefaultContractResolver_GetClrTypeFullName(pTVar8,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pSVar10);
      func_?(2);
      func_?(args);
      func_?(args,0);
      func_?(3,0);
      ppSVar12 = &StringLiteral_Invalid_Callback__Method___3___i;
    }
  }
  else {
    uVar9 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar9);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar9 = func_?(&TypeInfo__System__Object,4);
    args = (Object__Array *)func_?(uVar9);
    func_?(args);
    func_?(args,method_1);
    func_?(0,method_1);
    func_?(args);
    func_?(args,currentCallback);
    func_?(1,currentCallback);
    func_?(method_1);
    pTVar8 = (Type *)func_?(8,method_1);
    uVar9 = func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    func_?(uVar9);
    pSVar10 = DefaultContractResolver_GetClrTypeFullName(pTVar8,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pSVar10);
    func_?(2,pSVar10);
    func_?(args);
    func_?(args,attributeType);
    func_?(3,attributeType);
    ppSVar12 = &StringLiteral_Invalid_attribute__Both___0___an;
  }
  method_00 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(ppSVar12);
  pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar10,(IFormatProvider *)provider,args,method_00);
  uVar9 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar9);
  func_?(this);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar10,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver__IsValidCallback_System__Reflection__MethodInfo__System__Reflection__ParameterInfo_____System__Type__System__Reflection__MethodInfo__System__Type__
                 );
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar3 = (*pcVar13)();
  return bVar3;
}


/* Void ResolveCallbackMethods(JsonContract, Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_ResolveCallbackMethods
               (DefaultContractResolver *this,JsonContract *contract,Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pMStack_1 = (MethodInfo_1 *)0x0;
  pMStack_2 = (MethodInfo_1 *)0x0;
  pMStack_3 = (MethodInfo_1 *)0x0;
  pMStack_4 = (MethodInfo_1 *)0x0;
  pMStack_5 = (MethodInfo_1 *)0x0;
  if (t != (Type *)0x0) {
    left._source = (CancellationTokenSource *)
                   (*(t->klass->vtable).__unknown_29.methodPtr)
                             (t,(t->klass->vtable).__unknown_29.method);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar6 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      t_00 = (Type *)(*(t->klass->vtable).__unknown_29.methodPtr)
                               (t,(t->klass->vtable).__unknown_29.method);
      DefaultContractResolver_ResolveCallbackMethods(this,contract,t_00,(MethodInfo *)0x0);
    }
    DefaultContractResolver_GetCallbackMethodsForType
              (this,t,&pMStack_1,&pMStack_2,&pMStack_3,&pMStack_4,&pMStack_5,(MethodInfo *)0x0);
    bVar6 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      ((PropertyInfo_1 *)pMStack_1,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnSerializing_k__BackingField = pMStack_1;
      func_?(&(contract->fields)._OnSerializing_k__BackingField,pMStack_1);
    }
    bVar6 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      ((PropertyInfo_1 *)pMStack_2,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnSerialized_k__BackingField = pMStack_2;
      func_?(&(contract->fields)._OnSerialized_k__BackingField,pMStack_2);
    }
    bVar6 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      ((PropertyInfo_1 *)pMStack_3,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnDeserializing_k__BackingField = pMStack_3;
      func_?(&(contract->fields)._OnDeserializing_k__BackingField,pMStack_3);
    }
    bVar6 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      ((PropertyInfo_1 *)pMStack_4,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnDeserialized_k__BackingField = pMStack_4;
      func_?(&(contract->fields)._OnDeserialized_k__BackingField,pMStack_4);
    }
    bVar6 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      ((PropertyInfo_1 *)pMStack_5,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      if (contract == (JsonContract *)0x0) goto code_?;
      (contract->fields)._OnError_k__BackingField = pMStack_5;
      func_?(&(contract->fields)._OnError_k__BackingField,pMStack_5);
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* JsonContract ResolveContract(Type) */

JsonContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_ResolveContract(DefaultContractResolver *this,Type *type,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  puStack_2 = &stack0xffffffbc;
  puVar3 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__TryGetValue_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__Dictionary_System__Collections__Generic__IDictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__set_Item_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar3 = puStack_2;
  }
  puStack_2 = puVar3;
  pJStack_4 = (JsonContract *)0x0;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)type,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pSVar6 = (String *)
             mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    func_?();
    key.TypeName = (String *)type;
    key.AssemblyName = pSVar6;
    func_?(&stack0xffffffd8);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((this->fields)._sharedCache == 0) {
      this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                 *)(this->fields)._instanceContractCache;
    }
    else {
      if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                 *)TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields
                   ->_sharedContractCache;
    }
    if (this_00 !=
        (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
         *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
              Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
              Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__TryGetValue
                        (this_00,key,(Object **)&pJStack_4,
                         MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__TryGetValue_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract__
                        );
      if (bVar5 != 0) goto code_?;
    }
    pJStack_4 = (JsonContract *)(*(this->klass->vtable).CreateContract.methodPtr)();
    if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bStack_7 = 0;
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
              (TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
               _typeContractCacheLock,&bStack_7,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((this->fields)._sharedCache == 0) {
      dictionary = (this->fields)._instanceContractCache;
    }
    else {
      if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dictionary = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields
                   ->_sharedContractCache;
    }
    this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )func_?();
    if (dictionary ==
        (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
         *)0x0) {
      if (this_01 ==
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) goto code_?;
      key_00.TypeName =
           (String *)
           MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__Dictionary__
      ;
      key_00.AssemblyName = (String *)this_01;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__Dictionary__
                );
    }
    else {
      if (this_01 ==
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) goto code_?;
      key_00.TypeName =
           (String *)
           MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__Dictionary_System__Collections__Generic__IDictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>_
      ;
      key_00.AssemblyName = (String *)dictionary;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
                (this_01,(IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)dictionary,
                 MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__Dictionary_System__Collections__Generic__IDictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>_
                );
    }
    obj = 
    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__set_Item_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__set_Item
              ((Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                *)this_01,key_00,(Object *)pJStack_4,
               MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,_Newtonsoft::Json::Serialization::JsonContract>__set_Item_Newtonsoft__Json__Serialization__ResolverContractKey__Newtonsoft__Json__Serialization__JsonContract_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((this->fields)._sharedCache == 0) {
      (this->fields)._instanceContractCache =
           (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
            *)this_01;
    }
    else {
      if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
      _sharedContractCache =
           (Dictionary_2_Newtonsoft_Json_Serialization_ResolverContractKey_Newtonsoft_Json_Serialization_JsonContract_
            *)this_01;
      this = (DefaultContractResolver *)
             TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields;
    }
    pMVar1 = (MethodInfo *)&this->fields;
    func_?();
    if (bStack_7 != 0) {
      mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit((Object *)obj,(MethodInfo *)0x0);
      pMVar1 = obj;
    }
code_?:
    *unaff_FS_OFFSET = pMVar1;
    return pJStack_4;
  }
  func_?();
  this_02 = (ArgumentNullException *)func_?();
  func_?();
  pMVar1 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?();
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(this_02,pSVar6,pMVar1);
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar9 = (JsonContract *)(*pcVar8)();
  return pJVar9;
}


/* JsonConverter ResolveContractConverter(Type) */

JsonConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
DefaultContractResolver_ResolveContractConverter
          (DefaultContractResolver *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__Get_System__Reflection__ICustomAttributeProvider_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this_00 = (ThreadSafeStore_2_System_Object_System_Object_ *)
            TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
            JsonConverterTypeCache;
  if (this_00 != (ThreadSafeStore_2_System_Object_System_Object_ *)0x0) {
    left._source = (CancellationTokenSource *)
                   Json::Utilities::ThreadSafeStore`2[System::Object,System::Object]::
                   ThreadSafeStore_2_System_Object_System_Object__Get
                             (this_00,(Object *)objectType,
                              MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__Get_System__Reflection__ICustomAttributeProvider_
                             );
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return (JsonConverter *)0x0;
    }
    unaff_ESI = JsonConverterAttribute::JsonConverterAttribute_CreateJsonConverterInstance
                          ((Type *)left._source,(MethodInfo *)0x0);
    if (unaff_ESI != (JsonConverter *)0x0) {
      cVar2 = (*(unaff_ESI->klass->vtable).__unknown_2.methodPtr)
                        (unaff_ESI,objectType,(unaff_ESI->klass->vtable).__unknown_2.method);
      if (cVar2 != '\0') {
        return unaff_ESI;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar3);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar3 = func_?(&TypeInfo__System__Object,3);
  args = (Object__Array *)func_?(uVar3);
  func_?(unaff_ESI);
  pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)unaff_ESI,(MethodInfo *)0x0);
  func_?(pTVar4);
  uVar3 = func_?(7,pTVar4);
  func_?(args);
  func_?(args,uVar3);
  func_?(0,uVar3);
  func_?(args);
  func_?(args,objectType);
  func_?(1,objectType);
  func_?(objectType);
  uVar3 = func_?(7,objectType);
  func_?(args);
  func_?(args,uVar3);
  func_?(2,uVar3);
  method_00 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_JsonConverter__0__on__1__is_not_);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar5,(IFormatProvider *)provider,args,method_00);
  uVar3 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this_01 = (JsonSerializationException *)func_?(uVar3);
  func_?(this_01);
  JsonSerializationException::JsonSerializationException__ctor_1(this_01,pSVar5,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetJsonConverter_System__Reflection__ICustomAttributeProvider__System__Type_
                 );
  func_?(this_01);
  pcVar6 = (code *)swi(3);
  pJVar7 = (JsonConverter *)(*pcVar6)();
  return pJVar7;
}


/* Void SetIsSpecifiedActions(JsonProperty, MemberInfo, Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_SetIsSpecifiedActions
               (DefaultContractResolver *this,JsonProperty *property,MemberInfo_1 *member,
               bool allowNonPublicAccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Boolean);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Predicate<System::Object>);
    func_?(&
                    System__Func<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateGet<System::Object>_System__Reflection__MemberInfo_
                   );
    func_?(&
                    System__Action<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateSet<System::Object>_System__Reflection__MemberInfo_
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass50_0___SetIsSpecifiedActions_b__0_System__Object_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass50_0
                   );
    func_?(&StringLiteral_Specified);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass50_0
                         );
  if ((value != (Object *)0x0) &&
     (mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EDI), member != (MemberInfo_1 *)0x0)) {
    pTVar1 = (Type *)(*(member->klass->vtable).__unknown_2.methodPtr)
                               (member,(member->klass->vtable).__unknown_2.method);
    pSVar2 = (String *)
             (*(member->klass->vtable).__unknown_1.methodPtr)
                       (member,(member->klass->vtable).__unknown_1.method);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral_Specified,(MethodInfo *)0x0);
    if (pTVar1 != (Type *)0x0) {
      left = (FieldInfo_1 *)
             mscorlib.dll::System::Type::Type_GetProperty(pTVar1,pSVar2,(MethodInfo *)0x0);
      bVar3 = mscorlib.dll::System::Reflection::MemberInfo::MemberInfo_1_op_Equality
                        ((MemberInfo_1 *)left,(MemberInfo_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pTVar1 = (Type *)(*(member->klass->vtable).__unknown_2.methodPtr)
                                   (member,(member->klass->vtable).__unknown_2.method);
        pSVar2 = (String *)
                 (*(member->klass->vtable).__unknown_1.methodPtr)
                           (member,(member->klass->vtable).__unknown_1.method);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar2,StringLiteral_Specified,(MethodInfo *)0x0);
        if (pTVar1 == (Type *)0x0) goto code_?;
        left = mscorlib.dll::System::Type::Type_GetField(pTVar1,pSVar2,(MethodInfo *)0x0);
      }
      bVar3 = mscorlib.dll::System::Reflection::MemberInfo::MemberInfo_1_op_Equality
                        ((MemberInfo_1 *)left,(MemberInfo_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        left_00._source =
             (CancellationTokenSource *)
             Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberUnderlyingType
                       ((MemberInfo_1 *)left,(MethodInfo *)0x0);
        handle = TypeRef__System__Boolean;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        right._source =
             (CancellationTokenSource *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                          (left_00,right,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
          }
          pRVar4 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                             ((MethodInfo *)0x0);
          if (pRVar4 != (ReflectionDelegateFactory *)0x0) {
            pOVar5 = (Object__Class *)
                     Json::Utilities::ReflectionDelegateFactory::
                     ReflectionDelegateFactory_CreateGet_1
                               (pRVar4,(MemberInfo_1 *)left,
                                System__Func<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateGet<System::Object>_System__Reflection__MemberInfo_
                               );
            value[1].klass = pOVar5;
            func_?(value + 1,pOVar5);
            this_00 = (Predicate_1_Object_ *)
                      func_?(TypeInfo__System__Predicate<System::Object>);
            if ((this_00 != (Predicate_1_Object_ *)0x0) &&
               (mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                          (this_00,value,
                           MethodInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c__DisplayClass50_0___SetIsSpecifiedActions_b__0_System__Object_
                           ,(MethodInfo *)0x0), property != (JsonProperty *)0x0)) {
              (property->fields)._GetIsSpecified_k__BackingField = this_00;
              func_?(&(property->fields)._GetIsSpecified_k__BackingField,this_00);
              bVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_CanSetMemberValue
                                ((MemberInfo_1 *)left,allowNonPublicAccess,0,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return;
              }
              if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
              }
              pRVar4 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                                 ((MethodInfo *)0x0);
              if (pRVar4 != (ReflectionDelegateFactory *)0x0) {
                pAVar6 = Json::Utilities::ReflectionDelegateFactory::
                         ReflectionDelegateFactory_CreateSet_1
                                   (pRVar4,(MemberInfo_1 *)left,
                                    System__Action<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateSet<System::Object>_System__Reflection__MemberInfo_
                                   );
                (property->fields)._SetIsSpecified_k__BackingField = pAVar6;
                func_?(&(property->fields)._SetIsSpecified_k__BackingField,pAVar6);
                return;
              }
            }
          }
          goto code_?;
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(&
                    System__ComponentModel__DefaultValueAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<System::ComponentModel::DefaultValueAttribute>_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    Newtonsoft__Json__JsonIgnoreAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonIgnoreAttribute>_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    Newtonsoft__Json__JsonPropertyAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonPropertyAttribute>_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Reflection__MemberInfo);
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    cRam_? = '\x01';
  }
  *hasExplicitAttribute = 0;
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pDVar1 = JsonTypeReflector::JsonTypeReflector_GetDataContractAttribute
                     (declaringType,(MethodInfo *)0x0);
  if ((((pDVar1 == (DataContractAttribute *)0x0) ||
       (attributeProvider == (ICustomAttributeProvider *)0x0)) ||
      ((attributeProvider->klass->_1).typeHierarchyDepth <
       (TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth)) ||
     ((attributeProvider->klass->_1).typeHierarchy
      [(TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth - 1] !=
      (Il2CppClass *)TypeInfo__System__Reflection__MemberInfo)) {
    pDVar2 = (DataMemberAttribute *)0x0;
  }
  else {
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    pMVar3 = TypeInfo__System__Reflection__MemberInfo;
    pOVar4 = (Object *)attributeProvider;
    if (((attributeProvider->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth) ||
       ((attributeProvider->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__MemberInfo)) goto code_?;
    pDVar2 = JsonTypeReflector::JsonTypeReflector_GetDataMemberAttribute
                       ((MemberInfo_1 *)attributeProvider,(MethodInfo *)0x0);
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pOVar4 = JsonTypeReflector::JsonTypeReflector_GetAttribute
                     (attributeProvider,
                      Newtonsoft__Json__JsonPropertyAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonPropertyAttribute>_System__Reflection__ICustomAttributeProvider_
                     );
  if (pOVar4 != (Object *)0x0) {
    *hasExplicitAttribute = 1;
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pOVar5 = JsonTypeReflector::JsonTypeReflector_GetAttribute
                     (attributeProvider,
                      Newtonsoft__Json__JsonIgnoreAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonIgnoreAttribute>_System__Reflection__ICustomAttributeProvider_
                     );
  pSVar6 = (String *)(*(this->klass->vtable).ResolvePropertyName.methodPtr)();
  if (property == (JsonProperty *)0x0) {
    func_?();
    pMVar3 = extraout_EDX;
code_?:
    func_?(pOVar4,pMVar3);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (property->fields)._PropertyName_k__BackingField = pSVar6;
  func_?();
  (property->fields)._UnderlyingName_k__BackingField = name;
  func_?(&(property->fields)._UnderlyingName_k__BackingField);
  if (pOVar4 == (Object *)0x0) {
    if (pDVar2 == (DataMemberAttribute *)0x0) {
      (property->fields)._Required_k__BackingField = 0;
      goto code_?;
    }
    (property->fields)._Required_k__BackingField = (uint)((pDVar2->fields).is_required != 0);
    NVar8.hasValue = 0;
    NVar8._1_3_ = 0;
    NVar8.value = 0;
    if ((pDVar2->fields).order != -1) {
      value = (pDVar2->fields).order;
      NVar8.value = value;
      NVar8._0_4_ = (Nullable_1_UInt32_ *)&stack0xfffffff4;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                ((Nullable_1_UInt32_ *)&stack0xfffffff4,value,
                 MethodInfo__System__Nullable<int>__Nullable_int_);
    }
    pMVar9 = NVar8._0_4_;
    pOVar10 = (Object__Class *)NVar8.value;
  }
  else {
    (property->fields)._Required_k__BackingField = (int32_t)pOVar4[8].klass;
    pMVar9 = pOVar4[6].monitor;
    pOVar10 = pOVar4[7].klass;
  }
  (property->fields)._Order_k__BackingField.value = (int32_t)pOVar10;
  *(MonitorData **)&(property->fields)._Order_k__BackingField = pMVar9;
code_?:
  if (pOVar5 == (Object *)0x0) {
    if ((memberSerialization == MemberSerialization__Enum_OptIn) && (pOVar4 == (Object *)0x0)) {
      bVar11 = pDVar2 == (DataMemberAttribute *)0x0;
    }
    else {
      bVar11 = false;
    }
  }
  else {
    bVar11 = true;
  }
  (property->fields)._Ignored_k__BackingField = bVar11;
  targetConvertedType = (property->fields)._PropertyType_k__BackingField;
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pJVar12 = JsonTypeReflector::JsonTypeReflector_GetJsonConverter
                      (attributeProvider,targetConvertedType,(MethodInfo *)0x0);
  (property->fields)._Converter_k__BackingField = pJVar12;
  func_?();
  pJVar12 = JsonTypeReflector::JsonTypeReflector_GetJsonConverter
                      (attributeProvider,(property->fields)._PropertyType_k__BackingField,
                       (MethodInfo *)0x0);
  (property->fields)._MemberConverter_k__BackingField = pJVar12;
  func_?();
  pOVar5 = JsonTypeReflector::JsonTypeReflector_GetAttribute
                     (attributeProvider,
                      System__ComponentModel__DefaultValueAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<System::ComponentModel::DefaultValueAttribute>_System__Reflection__ICustomAttributeProvider_
                     );
  if (pOVar5 == (Object *)0x0) {
    pOStack13 = (Object *)0x0;
  }
  else {
    pOVar10 = pOVar5->klass;
    pOStack13._0_2_ = pOVar10[1]._0.this_arg.attrs;
    pOStack13._2_1_ = pOVar10[1]._0.this_arg.type;
    pOStack13._3_1_ = pOVar10[1]._0.this_arg.field_0x7;
    pOStack13 = (Object *)(*(code *)pOVar10[1]._0.this_arg.data)();
  }
  (property->fields)._DefaultValue_k__BackingField = pOStack13;
  func_?();
  if (pOVar4 == (Object *)0x0) {
    *(undefined4 *)&(property->fields)._NullValueHandling_k__BackingField = 0;
    NVar14.hasValue = 0;
    NVar14.value = 0;
    (property->fields)._NullValueHandling_k__BackingField.value = 0;
    *(undefined4 *)&(property->fields)._DefaultValueHandling_k__BackingField = 0;
    (property->fields)._DefaultValueHandling_k__BackingField.value = 0;
    *(undefined4 *)&(property->fields)._ReferenceLoopHandling_k__BackingField = 0;
    (property->fields)._ReferenceLoopHandling_k__BackingField.value = 0;
    *(undefined4 *)&(property->fields)._ObjectCreationHandling_k__BackingField = 0;
    (property->fields)._ObjectCreationHandling_k__BackingField.value = 0;
    *(undefined4 *)&(property->fields)._TypeNameHandling_k__BackingField = 0;
    (property->fields)._TypeNameHandling_k__BackingField.value = 0;
  }
  else {
    pMVar9 = pOVar4[1].monitor;
    *(Object__Class **)&(property->fields)._NullValueHandling_k__BackingField = pOVar4[1].klass;
    (property->fields)._NullValueHandling_k__BackingField.value = (int32_t)pMVar9;
    pMVar9 = pOVar4[2].monitor;
    *(Object__Class **)&(property->fields)._DefaultValueHandling_k__BackingField = pOVar4[2].klass;
    (property->fields)._DefaultValueHandling_k__BackingField.value = (int32_t)pMVar9;
    pMVar9 = pOVar4[3].monitor;
    *(Object__Class **)&(property->fields)._ReferenceLoopHandling_k__BackingField = pOVar4[3].klass;
    (property->fields)._ReferenceLoopHandling_k__BackingField.value = (int32_t)pMVar9;
    pMVar9 = pOVar4[4].monitor;
    *(Object__Class **)&(property->fields)._ObjectCreationHandling_k__BackingField = pOVar4[4].klass
    ;
    (property->fields)._ObjectCreationHandling_k__BackingField.value = (int32_t)pMVar9;
    pMVar9 = pOVar4[5].monitor;
    *(Object__Class **)&(property->fields)._TypeNameHandling_k__BackingField = pOVar4[5].klass;
    (property->fields)._TypeNameHandling_k__BackingField.value = (int32_t)pMVar9;
    NVar14 = *(Nullable_1_Boolean_ *)&pOVar4[6].klass;
  }
  (property->fields)._IsReference_k__BackingField = NVar14;
  *allowNonPublicAccess = 0;
  bVar15 = *allowNonPublicAccess;
  if (((property->fields)._Required_k__BackingField & 0x20) != 0) {
    bVar15 = 1;
  }
  *allowNonPublicAccess = bVar15;
  if (pOVar4 != (Object *)0x0) {
    bVar15 = 1;
  }
  *allowNonPublicAccess = bVar15;
  if (pDVar2 != (DataMemberAttribute *)0x0) {
    *allowNonPublicAccess = 1;
    UNK_? = 1;
  }
  return;
}


/* Boolean ShouldSerializeEntityMember(MemberInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver_ShouldSerializeEntityMember
               (DefaultContractResolver *this,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    func_?(&StringLiteral_System_Data_Objects_DataClasses_);
    cRam_? = '\x01';
  }
  if (memberInfo == (MemberInfo_1 *)0x0) {
    left = (PropertyInfo_1 *)0x0;
  }
  else {
    if (((memberInfo->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth) ||
       ((memberInfo->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    left = (PropertyInfo_1 *)0x0;
    if (bVar1) {
      left = (PropertyInfo_1 *)memberInfo;
    }
  }
  bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    (left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  if ((left != (PropertyInfo_1 *)0x0) &&
     (piVar3 = (int *)(*(left->klass->vtable).__unknown_6.methodPtr)(left), piVar3 != (int *)0x0)) {
    cVar4 = (**(code **)(*piVar3 + 500))(piVar3);
    if (cVar4 == '\0') {
      return 1;
    }
    piVar3 = (int *)(*(left->klass->vtable).__unknown_6.methodPtr)(left);
    if ((piVar3 != (int *)0x0) &&
       (piVar3 = (int *)(**(code **)(*piVar3 + 0x234))(piVar3), piVar3 != (int *)0x0)) {
      a = (String *)(**(code **)(*piVar3 + 0x184))(piVar3);
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_System_Data_Objects_DataClasses_,(MethodInfo *)0x0);
      return bVar2 == 0;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedCache == 0) {
    (this->fields)._instanceContractCache = cache;
    func_?(&this->fields,cache);
    return;
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
  TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
  _sharedContractCache = cache;
  func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields
                   ->_sharedContractCache,cache);
  return;
}


/* DefaultContractResolver() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Converters__BsonObjectIdConverter);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Converters__KeyValuePairConverter);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__Add_Newtonsoft__Json__JsonConverter_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>);
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  if (pOVar1 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    pOVar1[2].klass = (Object__Class *)0x14;
    *(undefined1 *)&pOVar1[1].monitor = 1;
    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->_instance =
         (IContractResolver *)pOVar1;
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                    static_fields,pOVar1);
    this = (List_1_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>
                          );
    if (this != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__List__
                );
      pTVar2 = (ThemeAttribute_1_System_Single_ *)
               func_?(TypeInfo__Newtonsoft__Json__Converters__KeyValuePairConverter);
      if (pTVar2 != (ThemeAttribute_1_System_Single_ *)0x0) {
        ThemeAttributes::ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single___ctor
                  (pTVar2,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (this,(Object *)pTVar2,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__Add_Newtonsoft__Json__JsonConverter_
                  );
        pTVar2 = (ThemeAttribute_1_System_Single_ *)
                 func_?(TypeInfo__Newtonsoft__Json__Converters__BsonObjectIdConverter);
        if (pTVar2 != (ThemeAttribute_1_System_Single_ *)0x0) {
          ThemeAttributes::ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single___ctor
                    (pTVar2,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this,(Object *)pTVar2,
                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__Add_Newtonsoft__Json__JsonConverter_
                    );
          TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
          BuiltInConverters = (IList_1_Newtonsoft_Json_JsonConverter_ *)this;
          func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                           static_fields->BuiltInConverters,this);
          pOVar1 = (Object *)func_?(TypeInfo__System__Object);
          if (pOVar1 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar1,ExceptionArgument__Enum_obj,unaff_ESI);
            TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
            _typeContractCacheLock = pOVar1;
            func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                             static_fields->_typeContractCacheLock,pOVar1);
            return;
          }
        }
      }
    }
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._DefaultMembersSearchFlags_k__BackingField = 0x14;
  (this->fields)._sharedCache = 0;
  return;
}


/* DefaultContractResolver(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver::
     DefaultContractResolver__ctor_1
               (DefaultContractResolver *this,bool shareCache,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
  return TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
         _instance;
}

