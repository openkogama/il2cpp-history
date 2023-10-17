
/* JsonSchemaType AddNullType(JsonSchemaType, Required) */

JsonSchemaType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_AddNullType
          (JsonSchemaGenerator *this,JsonSchemaType__Enum type,Required__Enum valueRequired,
          MethodInfo *method)

{
  JVar1 = type | JsonSchemaType__Enum_Null;
  if (valueRequired == Required__Enum_Always) {
    JVar1 = type;
  }
  return JVar1;
}


/* JsonSchema Generate(Type) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Generate
          (JsonSchemaGenerator *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaResolver *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  if (this_00 != (JsonSchemaResolver *)0x0) {
    JsonSchemaResolver::JsonSchemaResolver__ctor(this_00,(MethodInfo *)0x0);
    pJVar1 = JsonSchemaGenerator_Generate_3(this,type,this_00,0,(MethodInfo *)0x0);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonSchema *)(*pcVar2)();
  return pJVar1;
}


/* Void GenerateISerializableContract(Type, JsonISerializableContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
     JsonSchemaGenerator_GenerateISerializableContract
               (JsonSchemaGenerator *this,Type *type,JsonISerializableContract *contract,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pJVar2 = (this->fields)._currentSchema;
  if (pJVar2 != (JsonSchema *)0x0) {
    (pJVar2->fields)._AllowAdditionalProperties_k__BackingField = 1;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JsonSchema GenerateInternal(Type, Required, Boolean) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
JsonSchemaGenerator_GenerateInternal
          (JsonSchemaGenerator *this,Type *type,Required__Enum valueRequired,bool required,
          MethodInfo *method)

{
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_1_ = 0xff;
  uStack_1._3_1_ = 0xff;
  _Stack_c.dummy = &DAT_?;
  pSStack_2 = (String *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pSStack_2;
  pcStack_3 = &stack0xffffff8c;
  pcVar4 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Utilities::EnumValue<long>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                   );
    func_?(&
                    Newtonsoft__Json__Utilities__EnumValues<long>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetNamesAndValues<long>_System__Type_
                   );
    func_?(&MethodInfo__Newtonsoft__Json__Utilities__EnumValue<long>__get_Name__);
    func_?(&MethodInfo__Newtonsoft__Json__Utilities__EnumValue<long>__get_Value__);
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Any<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema,_bool>_
                   );
    func_?(&TypeRef__System__FlagsAttribute);
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema,_bool>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    func_?(&TypeRef__System__IConvertible);
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Utilities::EnumValue<long>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__Newtonsoft__Json__JsonArrayAttribute);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                   );
    func_?(&MethodInfo__System__Nullable<bool>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                   );
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator____c__DisplayClass23_0___GenerateInternal_b__0_Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator____c__DisplayClass23_0)
    ;
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
    pcVar4 = pcStack_3;
  }
  pcStack_3 = pcVar4;
  CStack_5._source = (CancellationTokenSource *)0x0;
  pTStack_6 = (Type *)0x0;
  pJStack_7 = (JsonSchema *)0x0;
  pOVar8 = (Object *)
            func_?(
                           TypeInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator____c__DisplayClass23_0
                           );
  pJVar9 = (JsonSchema *)valueRequired;
  NVar10 = NStack_11;
  pOStack_12 = pOVar8;
  if (pOVar8 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar8,ExceptionArgument__Enum_obj,unaff_EDI);
    pOVar8[1].klass = (Object__Class *)type;
    NStack_13.value = (uint32_t)pOVar8;
    func_?(pOVar8 + 1,type);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)pOVar8[1].klass,StringLiteral_type,(MethodInfo *)0x0);
    pSStack_14 = JsonSchemaGenerator_GetTypeId(this,(Type *)pOVar8[1].klass,0,(MethodInfo *)0x0);
    NStack_11.value =
         (uint32_t)JsonSchemaGenerator_GetTypeId(this,(Type *)pOVar8[1].klass,1,(MethodInfo *)0x0);
    bVar15 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSStack_14,(MethodInfo *)0x0);
    if (bVar15 == 0) {
      pJVar16 = (this->fields)._resolver;
      NVar10 = NStack_11;
      if (pJVar16 == (JsonSchemaResolver *)0x0) goto code_?;
      pJVar17 = (JsonSchema *)
                (*(pJVar16->klass->vtable).GetSchema.methodPtr)
                          (pJVar16,pSStack_14,(pJVar16->klass->vtable).GetSchema.method);
      pOVar8 = pOStack_12;
      if (pJVar17 != (JsonSchema *)0x0) {
        if (valueRequired != Required__Enum_Always) {
          uVar18 = *(undefined4 *)&(pJVar17->fields)._Type_k__BackingField;
          uVar19 = (pJVar17->fields)._Type_k__BackingField.value;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                           );
            func_?(&
                            MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                           );
            func_?(&
                            MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                           );
            cRam_? = '\x01';
          }
          if ((char)uVar18 != '\0') {
            NStack_20.hasValue = 0;
            NStack_20._1_3_ = 0;
            NStack_20.value = 0;
            mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                      (&NStack_20,uVar19 & 0x40,
                       MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                      );
            bVar21 = NStack_20.value == 0x40 & NStack_20.hasValue;
            if (bVar21 == 0) {
              NStack_20.hasValue = 0;
              NStack_20._1_3_ = 0;
              NStack_20.value = 0;
              if ((pJVar17->fields)._Type_k__BackingField.hasValue != 0) {
                mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                          (&NStack_20,(pJVar17->fields)._Type_k__BackingField.value | 0x40,
                           MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                          );
              }
              NVar10 = NStack_20;
              (pJVar17->fields)._Type_k__BackingField.hasValue = NStack_20.hasValue;
              *(undefined3 *)&(pJVar17->fields)._Type_k__BackingField.field_0x1 = NStack_20._1_3_;
              (pJVar17->fields)._Type_k__BackingField.value = NStack_20.value;
              NStack_20 = NVar10;
            }
          }
        }
        if (required != 0) {
          NVar22 = (pJVar17->fields)._Required_k__BackingField;
          _NStack_28 = CONCAT22(uStack_23,NVar22);
          uVar18 = _NStack_28;
          NStack_24.hasValue = NVar22.hasValue;
          if ((NStack_24.hasValue & NVar22.value == 1) == 0) {
            pSStack_14 = (String *)((uint)pSStack_14 & 0xffff0000);
            _NStack_28 = uVar18;
            mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                      ((Nullable_1_SByte_ *)&pSStack_14,1,
                       MethodInfo__System__Nullable<bool>__Nullable_bool_);
            (pJVar17->fields)._Required_k__BackingField = pSStack_14._0_2_;
          }
        }
        goto code_?;
      }
    }
    pJStack_25 = (JsonSchema *)(this->fields)._stack;
    pJVar9 = (JsonSchema *)
              func_?(
                             TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema,_bool>
                             );
    NVar10 = NStack_11;
    if (pJVar9 != (JsonSchema *)0x0) {
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)pJVar9,pOVar8,
                 MethodInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator____c__DisplayClass23_0___GenerateInternal_b__0_Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema_
                 ,(MethodInfo *)0x0);
      bVar15 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_3
                         ((IEnumerable_1_System_Object_ *)pJStack_25,
                          (Func_2_Object_Boolean_ *)pJVar9,
                          bool_MethodInfo__System__Linq__Enumerable__Any<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema,_bool>_
                         );
      if (bVar15 == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          cRam_? = '\x01';
        }
        if ((this->fields)._contractResolver == (IContractResolver *)0x0) {
          if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
            cRam_? = '\x01';
          }
          if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
          }
          pDVar26 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->
                    static_fields;
        }
        else {
          pDVar26 = (DefaultContractResolver__StaticFields *)&(this->fields)._contractResolver;
        }
        NVar10 = NStack_11;
        if ((pDVar26->_instance != (IContractResolver *)0x0) &&
           (pJVar9 = (JsonSchema *)
                      func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver
                                      ,pDVar26->_instance,pOVar8[1].klass), NVar10 = NStack_11,
           pJStack_25 = pJVar9, pJVar9 != (JsonSchema *)0x0)) {
          pJStack_27 = *(JsonSchema **)&(pJVar9->fields)._Hidden_k__BackingField;
          if (((pJStack_27 != (JsonSchema *)0x0) ||
              (pJStack_27 = (JsonSchema *)(pJVar9->fields)._Description_k__BackingField,
              pJStack_27 != (JsonSchema *)0x0)) &&
             (pJVar17 = (JsonSchema *)
                        (*(((CultureInfo__Class *)pJStack_27->klass)->vtable).get_Name.methodPtr)
                                  (pJStack_27,
                                   (((CultureInfo__Class *)pJStack_27->klass)->vtable).get_Name.
                                   method), pJVar17 != (JsonSchema *)0x0)) {
code_?:
            *unaff_FS_OFFSET = pSStack_2;
            return pJVar17;
          }
          pOStack_28 = pOVar8[1].klass;
          pOStack_29 = (Object__Class *)
                       func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
          NVar10 = NStack_11;
          if (pOStack_29 != (Object__Class *)0x0) {
            JsonSchema::JsonSchema__ctor((JsonSchema *)pOStack_29,(MethodInfo *)0x0);
            pSStack_14 = (String *)
                         func_?(
                                        TypeInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema
                                        );
            NVar10 = NStack_11;
            if (pSStack_14 != (String *)0x0) {
              if (cRam_? == '\0') {
                func_?(&StringLiteral_schema);
                func_?(&StringLiteral_type);
                cRam_? = '\x01';
              }
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)pSStack_14,ExceptionArgument__Enum_obj,unaff_EDI);
              Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                        ((Object *)pOStack_28,StringLiteral_type,(MethodInfo *)0x0);
              Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                        ((Object *)pOStack_29,StringLiteral_schema,(MethodInfo *)0x0);
              (pSStack_14->fields)._stringLength = (int32_t)pOStack_28;
              func_?(&pSStack_14->fields,pOStack_28);
              *(Object__Class **)&(pSStack_14->fields)._firstChar = pOStack_29;
              func_?(&(pSStack_14->fields)._firstChar,pOStack_29);
              if (cRam_? == '\0') {
                NStack_13.value =
                     (uint32_t)
                     &
                     TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                ;
                NStack_13._0_4_ = &UNK_?;
                func_?();
                NStack_13._0_4_ =
                     &
                     TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                ;
                NStack_20.value = (uint32_t)&UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              NStack_13.value = *(uint32_t *)&(pSStack_14->fields)._firstChar;
              (this->fields)._currentSchema = (JsonSchema *)NStack_13.value;
              NStack_13._0_4_ = &(this->fields)._currentSchema;
              NStack_20.value = (uint32_t)&UNK_?;
              func_?();
              pOStack_28 = (Object__Class *)(this->fields)._stack;
              NVar10 = NStack_11;
              if (pOStack_28 != (Object__Class *)0x0) {
                pOStack_29 = (Object__Class *)(pOStack_28->_0).image;
                uVar30 = 0;
                NStack_31 = (Nullable_1_UInt32_)((ulonglong)NStack_31 & 0xffffffff);
                uVar32 = (pOStack_29->_1).interface_offsets_count;
                if (uVar32 != 0) {
                  do {
                    pJVar9 = pJStack_25;
                    pOVar8 = pOStack_12;
                    if (pOStack_29->interfaceOffsets[uVar30].interfaceType ==
                        (Il2CppClass *)
                        TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                       ) {
                      pVVar33 = &(pOStack_29->vtable).GetHashCode +
                                pOStack_29->interfaceOffsets[uVar30].offset;
                      goto code_?;
                    }
                    uVar30 = uVar30 + 1;
                  } while (uVar30 < uVar32);
                }
                pVVar33 = (VirtualInvokeData *)
                          func_?(pOStack_28,
                                          TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                          ,2);
code_?:
                (*pVVar33->methodPtr)(pOStack_28,pSStack_14,pVVar33->method);
                pJVar16 = (this->fields)._resolver;
                NVar10 = NStack_11;
                if ((pJVar16 != (JsonSchemaResolver *)0x0) &&
                   (pIVar34 = (pJVar16->fields)._LoadedSchemas_k__BackingField,
                   pIVar34 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)) {
                  func_?(2,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                                  ,pIVar34,*(undefined4 *)&(pSStack_14->fields)._firstChar);
                  if ((String *)NStack_11.value != (String *)0x0) {
                    pJVar17 = (this->fields)._currentSchema;
                    NVar10 = NStack_11;
                    if (pJVar17 == (JsonSchema *)0x0) goto code_?;
                    (pJVar17->fields)._Id_k__BackingField = (String *)NStack_11.value;
                    func_?(&pJVar17->fields,NStack_11.value);
                  }
                  if (required != 0) {
                    NStack_11.value = (uint32_t)(this->fields)._currentSchema;
                    pSStack_14 = (String *)((uint)pSStack_14 & 0xffff0000);
                    mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                              ((Nullable_1_SByte_ *)&pSStack_14,1,
                               MethodInfo__System__Nullable<bool>__Nullable_bool_);
                    NVar10 = NStack_11;
                    if (NStack_11.value == 0) goto code_?;
                    *(Nullable_1_Boolean_ *)(NStack_11.value + 0x10) = pSStack_14._0_2_;
                  }
                  NStack_31.value = (uint32_t)(this->fields)._currentSchema;
                  NStack_11.value = (uint32_t)pOVar8[1].klass;
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
                    cRam_? = '\x01';
                  }
                  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
                  }
                  if (cRam_? == '\0') {
                    func_?(&
                                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                                   );
                    func_?(&
                                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                                   );
                    cRam_? = '\x01';
                  }
                  if ((
                      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                      ->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(
                                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                                   );
                  }
                  pOVar35 = Json::Serialization::CachedAttributeGetter`1[System::Object]::
                            CachedAttributeGetter_1_System_Object__GetAttribute
                                      ((ICustomAttributeProvider *)NStack_11.value,
                                       MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                                      );
                  NStack_11.value = (uint32_t)pOVar35;
                  if ((pOVar35 == (Object *)0x0) ||
                     (bVar15 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                         ((String *)pOVar35[1].monitor,(MethodInfo *)0x0),
                     bVar15 != 0)) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = *(undefined4 *)(NStack_11.value + 0xc);
                  }
                  NVar10 = NStack_11;
                  if (NStack_31.value != 0) {
                    *(undefined4 *)(NStack_31.value + 0xc) = uVar18;
                    func_?(NStack_31.value + 0xc,uVar18);
                    NStack_31.value = (uint32_t)(this->fields)._currentSchema;
                    pOStack_29 = pOVar8[1].klass;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector)
                      ;
                      func_?(&
                                      System__ComponentModel__DescriptionAttribute_MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetAttribute<System::ComponentModel::DescriptionAttribute>_System__Reflection__ICustomAttributeProvider_
                                     );
                      cRam_? = '\x01';
                    }
                    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
                    }
                    if (cRam_? == '\0') {
                      func_?(&
                                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                                     );
                      func_?(&
                                      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                                     );
                      cRam_? = '\x01';
                    }
                    if ((
                        TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                        ->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(
                                     TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                                     );
                    }
                    pOVar35 = Json::Serialization::CachedAttributeGetter`1[System::Object]::
                              CachedAttributeGetter_1_System_Object__GetAttribute
                                        ((ICustomAttributeProvider *)pOStack_29,
                                         MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                                        );
                    NStack_11.value = (uint32_t)pOVar35;
                    if ((pOVar35 == (Object *)0x0) ||
                       (bVar15 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                           ((String *)pOVar35[2].klass,(MethodInfo *)0x0),
                       bVar15 != 0)) {
                      pOVar35 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetAttribute
                                          ((ICustomAttributeProvider *)pOStack_29,
                                           System__ComponentModel__DescriptionAttribute_MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetAttribute<System::ComponentModel::DescriptionAttribute>_System__Reflection__ICustomAttributeProvider_
                                          );
                      if (pOVar35 == (Object *)0x0) {
                        uVar18 = 0;
                      }
                      else {
                        pOVar36 = pOVar35->klass;
                        uVar18._0_2_ = pOVar36[1]._0.this_arg.attrs;
                        uVar18._2_1_ = pOVar36[1]._0.this_arg.type;
                        uVar18._3_1_ = pOVar36[1]._0.this_arg.field_0x7;
                        uVar18 = (*(code *)pOVar36[1]._0.this_arg.data)(pOVar35,uVar18);
                      }
                    }
                    else {
                      uVar18 = *(undefined4 *)(NStack_11.value + 0x10);
                    }
                    NVar10 = NStack_11;
                    if (NStack_31.value != 0) {
                      *(undefined4 *)(NStack_31.value + 0x18) = uVar18;
                      func_?(NStack_31.value + 0x18,uVar18);
                      if (pJStack_27 == (JsonSchema *)0x0) {
                        if (((TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1)
                             .typeHierarchyDepth <=
                             (((CultureInfo__Class *)pJVar9->klass)->_1).typeHierarchyDepth) &&
                           ((((CultureInfo__Class *)pJVar9->klass)->_1).typeHierarchy
                            [(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1)
                             .typeHierarchyDepth - 1] ==
                            (Il2CppClass *)
                            TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract)) {
                          pJVar9 = (this->fields)._currentSchema;
                          uVar37 = 0x10;
                          if (valueRequired != Required__Enum_Always) {
                            uVar37 = 0x50;
                          }
                          NStack_20.hasValue = 0;
                          NStack_20._1_3_ = 0;
                          NStack_20.value = 0;
                          mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                                    (&NStack_20,uVar37,
                                     MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                                    );
                          NVar38 = NStack_20;
                          NVar10 = NStack_11;
                          if (pJVar9 == (JsonSchema *)0x0) goto code_?;
                          (pJVar9->fields)._Type_k__BackingField.hasValue = NStack_20.hasValue;
                          *(undefined3 *)&(pJVar9->fields)._Type_k__BackingField.field_0x1 =
                               NStack_20._1_3_;
                          (pJVar9->fields)._Type_k__BackingField.value = NStack_20.value;
                          NStack_20 = NVar38;
                          Json::Utilities::ReflectionUtils::
                          ReflectionUtils_GetDictionaryKeyValueTypes
                                    ((Type *)pOVar8[1].klass,(Type **)&CStack_5,&pTStack_6,
                                     (MethodInfo *)0x0);
                          CVar39._source = CStack_5._source;
                          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          bVar15 = mscorlib.dll::System::Threading::CancellationToken::
                                   CancellationToken_op_Inequality
                                             (CVar39,(CancellationToken)0x0,(MethodInfo *)0x0);
                          pIVar40 = TypeRef__System__IConvertible;
                          if (bVar15 != 0) {
                            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__System__Type);
                            }
                            pTVar41 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                                ((RuntimeTypeHandle)pIVar40,(MethodInfo *)0x0);
                            NVar10 = NStack_11;
                            if (pTVar41 == (Type *)0x0) goto code_?;
                            cVar42 = func_?(0x15);
                            if (cVar42 != '\0') {
                              pJVar17 = (this->fields)._currentSchema;
                              pJVar43 = JsonSchemaGenerator_GenerateInternal
                                                  (this,pTStack_6,Required__Enum_Default,0,
                                                   (MethodInfo *)0x0);
                              NVar10 = NStack_11;
                              if (pJVar17 == (JsonSchema *)0x0) goto code_?;
                              NStack_20._0_4_ = pJVar43;
                              (pJVar17->fields)._AdditionalProperties_k__BackingField = pJVar43;
                              func_?();
                            }
                          }
                          goto code_?;
                        }
                        iVar44 = func_?(pJVar9,
                                                 TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract
                                                );
                        if (iVar44 == 0) {
                          iVar44 = func_?(pJVar9,
                                                  TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract
                                                  );
                          if (iVar44 == 0) {
                            iVar44 = func_?(pJVar9,
                                                  TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract
                                                  );
                            if (iVar44 == 0) {
                              iVar44 = func_?(pJVar9,
                                                  TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract
                                                  );
                              if (iVar44 == 0) {
                                iVar44 = func_?(pJVar9,
                                                  TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract
                                                  );
                                if (iVar44 != 0) {
                                  bVar15 = Json::Utilities::ReflectionUtils::
                                           ReflectionUtils_IsNullable
                                                     ((Type *)(pJVar9->fields)._Id_k__BackingField,
                                                      (MethodInfo *)0x0);
                                  uVar37 = 1;
                                  if ((bVar15 != 0) && (valueRequired != Required__Enum_Always)) {
                                    uVar37 = 0x41;
                                  }
                                  pJVar17 = (this->fields)._currentSchema;
                                  NStack_20.hasValue = 0;
                                  NStack_20._1_3_ = 0;
                                  NStack_20.value = 0;
                                  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                                            (&NStack_20,uVar37,
                                             MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                                            );
                                  goto joined_?;
                                }
                                iVar44 = func_?(pJVar9,
                                                  TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract
                                                  );
                                if (iVar44 == 0) {
                                  uVar18 = func_?(&
                                                  TypeInfo__System__Globalization__CultureInfo);
                                  func_?(uVar18);
                                  pJVar17 = (JsonSchema *)
                                            mscorlib.dll::System::Globalization::CultureInfo::
                                            CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                                  uVar18 = func_?(&TypeInfo__System__Object,1);
                                  args = (Object__Array *)func_?(uVar18);
                                  func_?(args);
                                  func_?(args,pJVar9);
                                  func_?(0,pJVar9);
                                  ppSVar45 = &StringLiteral_Unexpected_contract_type___0_;
                                  goto code_?;
                                }
                                pJVar17 = (this->fields)._currentSchema;
                                NStack_31.hasValue = 0;
                                NStack_31._1_3_ = 0;
                                NStack_31.value = 0;
                                mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                                          (&NStack_31,0x7f,
                                           MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                                          );
                                NVar10 = NStack_11;
                                if (pJVar17 != (JsonSchema *)0x0) {
                                  uVar18 = NStack_31._0_4_;
                                  uVar37 = NStack_31.value;
                                  goto code_?;
                                }
                              }
                              else {
                                NStack_20.value = (uint32_t)(this->fields)._currentSchema;
                                uVar37 = 0x10;
                                if (valueRequired != Required__Enum_Always) {
                                  uVar37 = 0x50;
                                }
                                NStack_13.hasValue = 0;
                                NStack_13._1_3_ = 0;
                                NStack_13.value = 0;
                                mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                                          (&NStack_13,uVar37,
                                           MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                                          );
                                NVar10 = NStack_11;
                                if (NStack_20.value != 0) {
                                  *(undefined4 *)(NStack_20.value + 0x1c) = NStack_13._0_4_;
                                  *(uint32_t *)(NStack_20.value + 0x20) = NStack_13.value;
                                  NStack_20.value = (uint32_t)(this->fields)._currentSchema;
                                  pSVar46 = JsonSchemaGenerator_GetTypeId
                                                      (this,(Type *)pOVar8[1].klass,0,
                                                       (MethodInfo *)0x0);
                                  NVar10 = NStack_11;
                                  if (NStack_20.value != 0) {
                                    *(String **)(NStack_20.value + 8) = pSVar46;
                                    func_?(NStack_20.value + 8,pSVar46);
                                    pJVar47 = (JsonObjectContract__Class *)
                                              TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract
                                    ;
                                    if (((((CultureInfo__Class *)pJVar9->klass)->_1).
                                         typeHierarchyDepth <
                                         (
                                         TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract
                                         ->_1).typeHierarchyDepth) ||
                                       ((((CultureInfo__Class *)pJVar9->klass)->_1).typeHierarchy
                                        [(
                                         TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract
                                         ->_1).typeHierarchyDepth - 1] !=
                                        (Il2CppClass *)
                                        TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract
                                       )) goto code_?;
                                    pJVar17 = (this->fields)._currentSchema;
                                    NVar10 = NStack_11;
                                    if (pJVar17 != (JsonSchema *)0x0) {
                                      (pJVar17->fields)._AllowAdditionalProperties_k__BackingField =
                                           1;
                                      goto code_?;
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              NStack_20.value = (uint32_t)(this->fields)._currentSchema;
                              uVar37 = 0x10;
                              if (valueRequired != Required__Enum_Always) {
                                uVar37 = 0x50;
                              }
                              NStack_13.hasValue = 0;
                              NStack_13._1_3_ = 0;
                              NStack_13.value = 0;
                              mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                                        (&NStack_13,uVar37,
                                         MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                                        );
                              NVar10 = NStack_11;
                              if (NStack_20.value != 0) {
                                *(undefined4 *)(NStack_20.value + 0x1c) = NStack_13._0_4_;
                                *(uint32_t *)(NStack_20.value + 0x20) = NStack_13.value;
                                NStack_20.value = (uint32_t)(this->fields)._currentSchema;
                                pSVar46 = JsonSchemaGenerator_GetTypeId
                                                    (this,(Type *)pOVar8[1].klass,0,
                                                     (MethodInfo *)0x0);
                                NVar10 = NStack_11;
                                if (NStack_20.value != 0) {
                                  *(String **)(NStack_20.value + 8) = pSVar46;
                                  func_?(NStack_20.value + 8,pSVar46);
                                  NStack_20.value = (uint32_t)pOVar8[1].klass;
                                  pJVar47 = 
                                  TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract;
                                  if (((((CultureInfo__Class *)pJVar9->klass)->_1).
                                       typeHierarchyDepth <
                                       (
                                       TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract
                                       ->_1).typeHierarchyDepth) ||
                                     ((((CultureInfo__Class *)pJVar9->klass)->_1).typeHierarchy
                                      [(
                                       TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract
                                       ->_1).typeHierarchyDepth - 1] !=
                                      (Il2CppClass *)
                                      TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract)
                                     ) goto code_?;
                                  JsonSchemaGenerator_GenerateObjectSchema
                                            (this,(Type *)pOVar8[1].klass,
                                             (JsonObjectContract *)pJVar9,(MethodInfo *)0x0);
                                  goto code_?;
                                }
                              }
                            }
                          }
                          else {
                            pJVar9 = (this->fields)._currentSchema;
                            value = JsonSchemaGenerator_GetJsonSchemaType
                                              (this,(Type *)pOVar8[1].klass,valueRequired,
                                               (MethodInfo *)0x0);
                            NStack_11.hasValue = 0;
                            NStack_11._1_3_ = 0;
                            NStack_11.value = 0;
                            mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                                      (&NStack_11,value,
                                       MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                                      );
                            NVar10 = NStack_11;
                            if (pJVar9 != (JsonSchema *)0x0) {
                              (pJVar9->fields)._Type_k__BackingField.hasValue = NStack_11.hasValue;
                              *(undefined3 *)&(pJVar9->fields)._Type_k__BackingField.field_0x1 =
                                   NStack_11._1_3_;
                              (pJVar9->fields)._Type_k__BackingField.value = NStack_11.value;
                              pJVar17 = (this->fields)._currentSchema;
                              if (pJVar17 != (JsonSchema *)0x0) {
                                NStack_11 = NVar10;
                                if (((byte)*(undefined4 *)&(pJVar17->fields)._Type_k__BackingField &
                                    (pJVar17->fields)._Type_k__BackingField.value == 4) == 0)
                                goto code_?;
                                if (pOVar8[1].klass != (Object__Class *)0x0) {
                                  cVar42 = func_?(0x43,pOVar8[1].klass);
                                  pIVar40 = TypeRef__System__FlagsAttribute;
                                  if (cVar42 == '\0') goto code_?;
                                  pOVar36 = pOVar8[1].klass;
                                  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0)
                                  {
                                    func_?(TypeInfo__System__Type);
                                  }
                                  pTVar41 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                                      ((RuntimeTypeHandle)pIVar40,(MethodInfo *)0x0)
                                  ;
                                  pJVar9 = (JsonSchema *)0x0;
                                  NVar10 = NStack_11;
                                  if (pOVar36 != (Object__Class *)0x0) {
                                    cVar42 = (*(code *)(pOVar36->_0).image[6].typeCount)
                                                       (pOVar36,pTVar41);
                                    if (cVar42 != '\0') goto code_?;
                                    pJVar9 = (this->fields)._currentSchema;
                                    pLVar48 = (LowLevelList_1_System_Object_ *)
                                              func_?(
                                                  TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                                                  );
                                    NVar10 = NStack_11;
                                    if ((pLVar48 != (LowLevelList_1_System_Object_ *)0x0) &&
                                       (mscorlib.dll::System::Collections::Generic::
                                        LowLevelList`1[System::Object]::
                                        LowLevelList_1_System_Object___ctor
                                                  (pLVar48,
                                                  MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                                                  ), NVar10 = NStack_11,
                                       pJVar9 != (JsonSchema *)0x0)) {
                                      (pJVar9->fields)._Enum_k__BackingField =
                                           (IList_1_Newtonsoft_Json_Linq_JToken_ *)pLVar48;
                                      func_?(&(pJVar9->fields)._Enum_k__BackingField,
                                                      pLVar48);
                                      pJVar9 = (this->fields)._currentSchema;
                                      this_00 = (ParameterOverride_1_System_Object_ *)
                                                func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                                                  );
                                      NVar10 = NStack_11;
                                      if ((this_00 != (ParameterOverride_1_System_Object_ *)0x0) &&
                                         (Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::
                                          PostProcessing::ParameterOverride`1[System::Object]::
                                          ParameterOverride_1_System_Object___ctor
                                                    (this_00,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>__Dictionary__
                                                  ), NVar10 = NStack_11,
                                         pJVar9 != (JsonSchema *)0x0)) {
                                        (pJVar9->fields)._Options_k__BackingField =
                                             (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_
                                              *)this_00;
                                        func_?(&(pJVar9->fields)._Options_k__BackingField,
                                                        this_00);
                                        this_01 = Json::Utilities::EnumUtils::
                                                  EnumUtils_GetNamesAndValues_1
                                                            ((Type *)pOStack_12[1].klass,
                                                                                                                          
                                                  Newtonsoft__Json__Utilities__EnumValues<long>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetNamesAndValues<long>_System__Type_
                                                  );
                                        NVar10 = NStack_11;
                                        if (this_01 != (EnumValues_1_System_Int64_ *)0x0) {
                                          pJStack_7 = (JsonSchema *)
                                                       mscorlib.dll::System::Collections::
                                                       ObjectModel::Collection`1[System::Object]::
                                                       Collection_1_System_Object__GetEnumerator
                                                                 ((Collection_1_System_Object_ *)
                                                                  this_01,
                                                  MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Utilities::EnumValue<long>_>__GetEnumerator__
                                                  );
                                          pOStack_29 = (Object__Class *)&pJStack_7;
                                          uStack_49 = 0;
                                          uStack_1._0_2_ = 1;
                                          uStack_1._2_1_ = 0;
                                          uStack_1._3_1_ = 0;
                                          while (NVar10 = NStack_11, pJStack_7 != (JsonSchema *)0x0
                                                ) {
                                            cVar42 = func_?(0,
                                                  TypeInfo__System__Collections__IEnumerator,
                                                  pJStack_7);
                                            pJVar9 = pJStack_7;
                                            if (cVar42 == '\0') {
                                              uStack_1._0_2_ = 0xffff;
                                              uStack_1._2_1_ = 0xff;
                                              uStack_1._3_1_ = 0xff;
                                              func_?();
                                              uStack_1._0_2_ = 0xffff;
                                              uStack_1._2_1_ = 0xff;
                                              uStack_1._3_1_ = 0xff;
                                              goto code_?;
                                            }
                                            pJStack_27 = pJStack_7;
                                            NVar10 = NStack_11;
                                            if (pJStack_7 == (JsonSchema *)0x0) break;
                                            pCVar50 = (CultureInfo__Class *)pJStack_7->klass;
                                            uVar30 = 0;
                                            NStack_31.value = (uint32_t)pCVar50;
                                            NStack_11 = (Nullable_1_UInt32_)
                                                        ((ulonglong)NStack_11 & 0xffffffff);
                                            uVar32 = (pCVar50->_1).interface_offsets_count;
                                            if (uVar32 != 0) {
                                              do {
                                                if (pCVar50->interfaceOffsets[uVar30].interfaceType
                                                    == (Il2CppClass *)
                                                                                                              
                                                  TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Utilities::EnumValue<long>_>
                                                  ) {
                                                  pVVar33 = &(((CultureInfo__Class *)
                                                              pJStack_7->klass)->vtable).Equals +
                                                            ((CultureInfo__Class *)pJStack_7->klass
                                                            )->interfaceOffsets[uVar30].offset;
                                                  goto code_?;
                                                }
                                                uVar30 = uVar30 + 1;
                                              } while (uVar30 < uVar32);
                                            }
                                            pVVar33 = (VirtualInvokeData *)
                                                      func_?(pJStack_7,
                                                                                                                                            
                                                  TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Utilities::EnumValue<long>_>
                                                  ,0);
code_?:
                                            iVar44 = (*pVVar33->methodPtr)(pJVar9,pVVar33->method);
                                            NVar10 = NStack_11;
                                            if (iVar44 == 0) break;
                                            uStack_51 = *(undefined4 *)(iVar44 + 0x10);
                                            pOStack_28 = *(Object__Class **)(iVar44 + 0x14);
                                            pOVar8 = (Object *)
                                                      func_?(TypeInfo__System__Int64,
                                                                      &uStack_51);
                                            pJVar9 = (JsonSchema *)
                                                      Linq::JToken::JToken_FromObject
                                                                (pOVar8,(MethodInfo *)0x0);
                                            pJVar17 = (this->fields)._currentSchema;
                                            NVar10 = NStack_11;
                                            if ((pJVar17 == (JsonSchema *)0x0) ||
                                               (pIVar52 = (pJVar17->fields)._Enum_k__BackingField,
                                               pIVar52 == (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0
                                               )) break;
                                            func_?(2,
                                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                                                  ,pIVar52,pJVar9);
                                            pJVar17 = (this->fields)._currentSchema;
                                            NVar10 = NStack_11;
                                            if ((pJVar17 == (JsonSchema *)0x0) ||
                                               (pIVar53 = (pJVar17->fields)._Options_k__BackingField,
                                               pIVar53 == (
                                                  IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_
                                                  *)0x0)) break;
                                            func_?(5,
                                                  TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                                                  ,pIVar53,pJVar9,*(undefined4 *)(iVar44 + 8));
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pJVar17 = (this->fields)._currentSchema;
                          uVar37 = 0x20;
                          if (valueRequired != Required__Enum_Always) {
                            uVar37 = 0x60;
                          }
                          NStack_20.hasValue = 0;
                          NStack_20._1_3_ = 0;
                          NStack_20.value = 0;
                          mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                                    (&NStack_20,uVar37,
                                     MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                                    );
                          NVar38 = NStack_20;
                          pJVar9 = (JsonSchema *)0x0;
                          NVar10 = NStack_11;
                          if (pJVar17 != (JsonSchema *)0x0) {
                            (pJVar17->fields)._Type_k__BackingField.hasValue = NStack_20.hasValue;
                            *(undefined3 *)&(pJVar17->fields)._Type_k__BackingField.field_0x1 =
                                 NStack_20._1_3_;
                            (pJVar17->fields)._Type_k__BackingField.value = NStack_20.value;
                            pJVar17 = (this->fields)._currentSchema;
                            NStack_20 = NVar38;
                            pSVar46 = JsonSchemaGenerator_GetTypeId
                                                (this,(Type *)pOVar8[1].klass,0,(MethodInfo *)0x0);
                            pJVar9 = (JsonSchema *)0x0;
                            NVar10 = NStack_11;
                            if (pJVar17 != (JsonSchema *)0x0) {
                              (pJVar17->fields)._Id_k__BackingField = pSVar46;
                              func_?(&pJVar17->fields,pSVar46);
                              pOVar36 = pOVar8[1].klass;
                              if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1)
                                  .cctor_finished_or_no_cctor == 0) {
                                func_?(
                                               TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector
                                               );
                              }
                              pJVar54 = Json::Serialization::JsonTypeReflector::
                                        JsonTypeReflector_GetJsonContainerAttribute
                                                  ((Type *)pOVar36,(MethodInfo *)0x0);
                              if (pJVar54 == (JsonContainerAttribute *)0x0) {
code_?:
                                pJStack_25 = (JsonSchema *)0x1;
                              }
                              else {
                                pJVar55 = (JsonContainerAttribute *)0x0;
                                if ((JsonArrayAttribute__Class *)pJVar54->klass ==
                                    TypeInfo__Newtonsoft__Json__JsonArrayAttribute) {
                                  pJVar55 = pJVar54;
                                }
                                if (pJVar55 == (JsonContainerAttribute *)0x0) goto code_?;
                                pJStack_25 = (JsonSchema *)(uint)*(byte *)&pJVar55[1].klass;
                              }
                              CVar39._source =
                                   (CancellationTokenSource *)
                                   Json::Utilities::ReflectionUtils::
                                   ReflectionUtils_GetCollectionItemType
                                             ((Type *)pOVar8[1].klass,(MethodInfo *)0x0);
                              NStack_20.value = (uint32_t)CVar39._source;
                              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                                func_?(TypeInfo__System__Type);
                              }
                              bVar15 = mscorlib.dll::System::Threading::CancellationToken::
                                       CancellationToken_op_Inequality
                                                 (CVar39,(CancellationToken)0x0,(MethodInfo *)0x0);
                              if (bVar15 == 0) {
code_?:
                                if (cRam_? == '\0') {
                                  func_?(&
                                                  Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_
                                                 );
                                  func_?(&
                                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                                 );
                                  func_?(&
                                                  TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                                 );
                                  cRam_? = '\x01';
                                }
                                pJVar17 = (JsonSchema *)(this->fields)._stack;
                                pJVar9 = (JsonSchema *)0x0;
                                NVar10 = NStack_11;
                                pJStack_25 = pJVar17;
                                if (pJVar17 != (JsonSchema *)0x0) {
                                  iVar44 = func_?(0,
                                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                                  ,pJVar17);
                                  NStack_20.value = iVar44 - 1;
                                  uVar30 = 0;
                                  uVar32 = (((CultureInfo__Class *)pJVar17->klass)->_1).
                                          interface_offsets_count;
                                  pJVar9 = pJVar17;
                                  if (uVar32 != 0) {
                                    do {
                                      pJVar9 = pJStack_25;
                                      if (((CultureInfo__Class *)pJVar17->klass)->interfaceOffsets
                                          [uVar30].interfaceType ==
                                          (Il2CppClass *)
                                          TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                         ) {
                                        pVVar33 = &(((CultureInfo__Class *)pJStack_25->klass)->
                                                   vtable).Equals +
                                                  ((CultureInfo__Class *)pJStack_25->klass)->
                                                  interfaceOffsets[uVar30].offset;
                                        goto code_?;
                                      }
                                      uVar30 = uVar30 + 1;
                                    } while (uVar30 < uVar32);
                                  }
                                  pVVar33 = (VirtualInvokeData *)
                                            func_?(pJVar9,
                                                  TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                                  ,0);
code_?:
                                  iVar44 = (*pVVar33->methodPtr)
                                                     (pJVar9,NStack_20.value,pVVar33->method);
                                  pIVar56 = (this->fields)._stack;
                                  pJVar9 = (JsonSchema *)0x0;
                                  NVar10 = NStack_11;
                                  if (pIVar56 !=
                                      (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_
                                       *)0x0) {
                                    iVar57 = func_?(0,
                                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                                  ,pIVar56);
                                    func_?(4,
                                                  TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                                  ,pIVar56,iVar57 + -1);
                                    pOVar8 = System.Core.dll::System::Linq::Enumerable::
                                              Enumerable_LastOrDefault
                                                        ((IEnumerable_1_System_Object_ *)
                                                         (this->fields)._stack,
                                                                                                                  
                                                  Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_
                                                  );
                                    if (pOVar8 == (Object *)0x0) {
                                      pJVar9 = (JsonSchema *)0x0;
                                    }
                                    else {
                                      pJVar9 = (JsonSchema *)pOVar8[1].monitor;
                                    }
                                    (this->fields)._currentSchema = pJVar9;
                                    func_?();
                                    pJVar9 = (JsonSchema *)this;
                                    NVar10 = NStack_11;
                                    if (iVar44 != 0) {
                                      pJVar9 = *(JsonSchema **)(iVar44 + 0xc);
                                      *unaff_FS_OFFSET = pSStack_2;
                                      return pJVar9;
                                    }
                                  }
                                }
                              }
                              else {
                                pJVar9 = (this->fields)._currentSchema;
                                pLVar48 = (LowLevelList_1_System_Object_ *)
                                          func_?(
                                                  TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                                                  );
                                NVar10 = NStack_11;
                                if ((pLVar48 != (LowLevelList_1_System_Object_ *)0x0) &&
                                   (mscorlib.dll::System::Collections::Generic::
                                    LowLevelList`1[System::Object]::
                                    LowLevelList_1_System_Object___ctor
                                              (pLVar48,
                                               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
                                              ), NVar10 = NStack_11, pJVar9 != (JsonSchema *)0x0))
                                {
                                  (pJVar9->fields)._Items_k__BackingField =
                                       (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)pLVar48;
                                  func_?(&(pJVar9->fields)._Items_k__BackingField,pLVar48)
                                  ;
                                  pJVar17 = (this->fields)._currentSchema;
                                  NVar10 = NStack_11;
                                  if (pJVar17 != (JsonSchema *)0x0) {
                                    pIVar34 = (pJVar17->fields)._Items_k__BackingField;
                                    valueRequired_00 = Required__Enum_Always;
                                    if (pJStack_25 != (JsonSchema *)0x0) {
                                      valueRequired_00 = Required__Enum_Default;
                                    }
                                    pJVar17 = JsonSchemaGenerator_GenerateInternal
                                                        (this,(Type *)NStack_20.value,
                                                         valueRequired_00,0,(MethodInfo *)0x0);
                                    NVar10 = NStack_11;
                                    if (pIVar34 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)
                                    {
                                      func_?(2,
                                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                                                  ,pIVar34,pJVar17);
                                      goto code_?;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        pJVar17 = (this->fields)._currentSchema;
                        NStack_20.hasValue = 0;
                        NStack_20._1_3_ = 0;
                        NStack_20.value = 0;
                        mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                                  (&NStack_20,0x7f,
                                   MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                                  );
joined_?:
                        NVar10 = NStack_11;
                        if (pJVar17 != (JsonSchema *)0x0) {
                          uVar18 = NStack_20._0_4_;
                          uVar37 = NStack_20.value;
code_?:
                          (pJVar17->fields)._Type_k__BackingField.value = uVar37;
                          (pJVar17->fields)._Type_k__BackingField.hasValue = (bool)uVar18;
                          *(int3 *)&(pJVar17->fields)._Type_k__BackingField.field_0x1 =
                               SUB43(uVar18,1);
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar18 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar18);
        pJVar9 = (JsonSchema *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar18 = func_?(&TypeInfo__System__Object);
        args = (Object__Array *)func_?(uVar18);
        func_?(pOVar8);
        pOVar36 = pOVar8[1].klass;
        func_?(args);
        func_?(args,pOVar36);
        func_?(0);
        ppSVar45 = &StringLiteral_Unresolved_circular_reference_fo;
        pJVar17 = pJVar9;
code_?:
        method_00 = (MethodInfo *)0x0;
        pSVar46 = (String *)func_?(ppSVar45);
        pSVar46 = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (pSVar46,(IFormatProvider *)pJVar17,args,method_00);
        uVar18 = func_?(&TypeInfo__System__Exception);
        this_02 = (Exception *)func_?(uVar18);
        func_?(this_02);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar46,(MethodInfo *)0x0);
        NStack_20.value =
             func_?(&
                             MethodInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator__GenerateInternal_System__Type__Newtonsoft__Json__Required__bool_
                            );
        NStack_20._0_4_ = this_02;
        func_?();
        NVar10 = NStack_11;
      }
    }
  }
code_?:
  NStack_11 = NVar10;
  func_?();
  pJVar47 = (JsonObjectContract__Class *)extraout_EDX;
code_?:
  func_?(pJVar9,pJVar47);
  pcVar58 = (code *)swi(3);
  pJVar9 = (JsonSchema *)(*pcVar58)();
  return pJVar9;
}


/* Void GenerateObjectSchema(Type, JsonObjectContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
     JsonSchemaGenerator_GenerateObjectSchema
               (JsonSchemaGenerator *this,Type *type,JsonObjectContract *contract,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Serialization::JsonProperty>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__get_HasValue__
                   );
    cRam_? = '\x01';
  }
  pJVar4 = (this->fields)._currentSchema;
  this_01 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                           );
  if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
              );
    if (pJVar4 != (JsonSchema *)0x0) {
      (pJVar4->fields)._Properties_k__BackingField =
           (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)this_01;
      func_?();
      if ((contract != (JsonObjectContract *)0x0) &&
         (this_00 = (contract->fields)._Properties_k__BackingField,
         this_00 != (JsonPropertyCollection *)0x0)) {
        pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[System::Object]::
                 Collection_1_System_Object__GetEnumerator
                           ((Collection_1_System_Object_ *)this_00,
                            MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                           );
        uStack_1 = 1;
        while( true ) {
          if (pIVar5 == (IEnumerator_1_System_Object_ *)0x0) break;
          cVar6 = func_?(0);
          if (cVar6 == '\0') {
            uStack_1 = 0xffffffff;
            if (pIVar5 != (IEnumerator_1_System_Object_ *)0x0) {
              func_?(0);
            }
            uStack_1 = 0xffffffff;
            if (type == (Type *)0x0) break;
            bVar7 = mscorlib.dll::System::Type::Type_get_IsSealed(type,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              pJVar4 = (this->fields)._currentSchema;
              if (pJVar4 == (JsonSchema *)0x0) break;
              (pJVar4->fields)._AllowAdditionalProperties_k__BackingField = 0;
            }
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (pIVar5 == (IEnumerator_1_System_Object_ *)0x0) break;
          uVar8 = 0;
          uVar9 = (pIVar5->klass->_1).interface_offsets_count;
          if (uVar9 != 0) {
            do {
              if (pIVar5->klass->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Serialization::JsonProperty>
                 ) {
                pIVar10 = &pIVar5->klass->vtable + pIVar5->klass->interfaceOffsets[uVar8].offset;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          pIVar10 = (IEnumerator_1_System_Object___VTable *)func_?(pIVar5);
code_?:
          iVar11 = (*(pIVar10->get_Current).methodPtr)();
          if (iVar11 == 0) break;
          if (*(char *)(iVar11 + 0x28) == '\0') {
            if (((((byte)*(undefined4 *)(iVar11 + 0x38) & *(int *)(iVar11 + 0x3c) == 1) == 0) &&
                ((*(byte *)(iVar11 + 0x44) & 1) == 0)) && (*(int *)(iVar11 + 0x60) == 0)) {
              required = *(int *)(iVar11 + 100) == 0;
            }
            else {
              required = false;
            }
            pJVar4 = JsonSchemaGenerator_GenerateInternal
                               (this,*(Type **)(iVar11 + 0x1c),*(Required__Enum *)(iVar11 + 0x30),
                                required,(MethodInfo *)0x0);
            if (*(int *)(iVar11 + 0x2c) != 0) {
              pJVar12 = Linq::JToken::JToken_FromObject
                                  (*(Object **)(iVar11 + 0x2c),(MethodInfo *)0x0);
              if (pJVar4 == (JsonSchema *)0x0) break;
              (pJVar4->fields)._Default_k__BackingField = pJVar12;
              func_?();
            }
            pJVar4 = (this->fields)._currentSchema;
            if ((pJVar4 == (JsonSchema *)0x0) ||
               (pIVar13 = (pJVar4->fields)._Properties_k__BackingField,
               pIVar13 == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)0x0))
            break;
            func_?(5,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                            ,pIVar13);
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* JsonSchema Generate(Type, JsonSchemaResolver) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Generate_1
          (JsonSchemaGenerator *this,Type *type,JsonSchemaResolver *resolver,MethodInfo *method)

{
  pJVar1 = JsonSchemaGenerator_Generate_3(this,type,resolver,0,(MethodInfo *)0x0);
  return pJVar1;
}


/* JsonSchema Generate(Type, Boolean) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Generate_2
          (JsonSchemaGenerator *this,Type *type,bool rootSchemaNullable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaResolver *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  if (this_00 != (JsonSchemaResolver *)0x0) {
    JsonSchemaResolver::JsonSchemaResolver__ctor(this_00,(MethodInfo *)0x0);
    pJVar1 = JsonSchemaGenerator_Generate_3(this,type,this_00,rootSchemaNullable,(MethodInfo *)0x0);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonSchema *)(*pcVar2)();
  return pJVar1;
}


/* JsonSchema Generate(Type, JsonSchemaResolver, Boolean) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Generate_3
          (JsonSchemaGenerator *this,Type *type,JsonSchemaResolver *resolver,bool rootSchemaNullable
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_resolver);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)resolver,StringLiteral_resolver,(MethodInfo *)0x0);
  (this->fields)._resolver = resolver;
  func_?(&(this->fields)._resolver,resolver);
  pJVar1 = JsonSchemaGenerator_GenerateInternal
                     (this,type,(rootSchemaNullable ^ 1) * 2,0,(MethodInfo *)0x0);
  return pJVar1;
}


/* String GetDescription(Type) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
         JsonSchemaGenerator_GetDescription(JsonSchemaGenerator *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    System__ComponentModel__DescriptionAttribute_MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetAttribute<System::ComponentModel::DescriptionAttribute>_System__Reflection__ICustomAttributeProvider_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pOVar1 = Json::Serialization::CachedAttributeGetter`1[System::Object]::
           CachedAttributeGetter_1_System_Object__GetAttribute
                     ((ICustomAttributeProvider *)type,
                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                     );
  if (pOVar1 != (Object *)0x0) {
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((String *)pOVar1[2].klass,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return (String *)pOVar1[2].klass;
    }
  }
  pOVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetAttribute
                     ((ICustomAttributeProvider *)type,
                      System__ComponentModel__DescriptionAttribute_MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetAttribute<System::ComponentModel::DescriptionAttribute>_System__Reflection__ICustomAttributeProvider_
                     );
  if (pOVar1 == (Object *)0x0) {
    return (String *)0x0;
  }
  pSVar3 = (String *)(*(code *)pOVar1->klass[1]._0.this_arg.data)();
  return pSVar3;
}


/* JsonSchemaType GetJsonSchemaType(Type, Required) */

JsonSchemaType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
JsonSchemaGenerator_GetJsonSchemaType
          (JsonSchemaGenerator *this,Type *type,Required__Enum valueRequired,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  JVar1 = JsonSchemaType__Enum_None;
  if ((valueRequired != Required__Enum_Always) &&
     (bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullable(type,(MethodInfo *)0x0),
     bVar2 != 0)) {
    JVar1 = JsonSchemaType__Enum_Null;
    bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType(type,(MethodInfo *)0x0)
    ;
    if (bVar2 != 0) {
      type = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(type,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  TVar3 = mscorlib.dll::System::Type::Type_GetTypeCode(type,(MethodInfo *)0x0);
  switch(TVar3) {
  case TypeCode__Enum_Empty:
  case TypeCode__Enum_Object:
  case TypeCode__Enum_Char:
  case TypeCode__Enum_DateTime:
  case TypeCode__Enum_String:
    return JVar1 | JsonSchemaType__Enum_String;
  case TypeCode__Enum_DBNull:
    return JsonSchemaType__Enum_Null;
  case TypeCode__Enum_Boolean:
    return JVar1 | JsonSchemaType__Enum_Boolean;
  case TypeCode__Enum_SByte:
  case TypeCode__Enum_Byte:
  case TypeCode__Enum_Int16:
  case TypeCode__Enum_UInt16:
  case TypeCode__Enum_Int32:
  case TypeCode__Enum_UInt32:
  case TypeCode__Enum_Int64:
  case TypeCode__Enum_UInt64:
    return JVar1 | JsonSchemaType__Enum_Integer;
  case TypeCode__Enum_Single:
  case TypeCode__Enum_Double:
  case TypeCode__Enum_Decimal:
    return JVar1 | JsonSchemaType__Enum_Float;
  default:
    uVar4 = func_?();
    func_?(uVar4);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    uVar4 = func_?();
    func_?(args);
    func_?(args,uVar4);
    func_?();
    func_?(args);
    func_?(args,type);
    func_?(1,type);
    method_00 = (MethodInfo *)0x0;
    pSVar5 = (String *)func_?(&StringLiteral_Unexpected_type_code___0___for_t);
    pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar5,(IFormatProvider *)provider,args,method_00);
    uVar4 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar4);
    func_?(this_00);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar5,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator__GetJsonSchemaType_System__Type__Newtonsoft__Json__Required_
                   );
    uVar6 = func_?();
    cRam_? = cRam_? + (char)(uVar6 + 0xd26aefb6 >> 8) + (uVar6 < 0x2d95104a);
    pcVar7 = (char *)(uVar6 + 0xa4a5df6c);
    *pcVar7 = *pcVar7 + (char)pcVar7 + (uVar6 + 0xd26aefb6 < 0x2dc5104a);
    cRam_? = cRam_? + (char)pcVar7;
    pcVar8 = (code *)swi(3);
    JVar1 = (*pcVar8)();
    return JVar1;
  }
}


/* String GetTitle(Type) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
         JsonSchemaGenerator_GetTitle(JsonSchemaGenerator *this,Type *type,MethodInfo *method)

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
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pOVar1 = Json::Serialization::CachedAttributeGetter`1[System::Object]::
           CachedAttributeGetter_1_System_Object__GetAttribute
                     ((ICustomAttributeProvider *)type,
                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                     );
  if (pOVar1 != (Object *)0x0) {
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((String *)pOVar1[1].monitor,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return (String *)pOVar1[1].monitor;
    }
  }
  return (String *)0x0;
}


/* String GetTypeId(Type, Boolean) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
         JsonSchemaGenerator_GetTypeId
                   (JsonSchemaGenerator *this,Type *type,bool explicitOnly,MethodInfo *method)

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
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pOVar1 = Json::Serialization::CachedAttributeGetter`1[System::Object]::
           CachedAttributeGetter_1_System_Object__GetAttribute
                     ((ICustomAttributeProvider *)type,
                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                     );
  if ((pOVar1 != (Object *)0x0) &&
     (bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                        ((String *)pOVar1[1].klass,(MethodInfo *)0x0), bVar2 == 0)) {
    return (String *)pOVar1[1].klass;
  }
  if (explicitOnly != 0) {
    return (String *)0x0;
  }
  iVar3 = (this->fields)._UndefinedSchemaIdHandling_k__BackingField;
  if (iVar3 == 1) {
    if (type != (Type *)0x0) {
      pSVar4 = (String *)
               (*(type->klass->vtable).__unknown_6.methodPtr)
                         (type,(type->klass->vtable).__unknown_6.method);
      return pSVar4;
    }
  }
  else {
    if (iVar3 != 2) {
      return (String *)0x0;
    }
    if (type != (Type *)0x0) {
      pSVar4 = (String *)
               (*(type->klass->vtable).__unknown_5.methodPtr)
                         (type,(type->klass->vtable).__unknown_5.method);
      return pSVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Boolean HasFlag(Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType], JsonSchemaType) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
     JsonSchemaGenerator_HasFlag_1
               (Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_ value,JsonSchemaType__Enum flag,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                   );
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    NStack_1.hasValue = 0;
    NStack_1._1_3_ = 0;
    NStack_1.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_1,value.value & flag,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    return NStack_1.value == flag & NStack_1.hasValue;
  }
  return 1;
}


/* JsonSchemaGenerator+TypeSchema Pop() */

JsonSchemaGenerator_TypeSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Pop
          (JsonSchemaGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._stack;
  if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)0x0) {
    iVar2 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                            ,pIVar1);
    uVar3 = 0;
    uVar4 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
           ) {
          pVVar5 = &(pIVar1->klass->vtable).get_Item +
                   pIVar1->klass->interfaceOffsets[uVar3].offset;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pVVar5 = (VirtualInvokeData *)
             func_?(pIVar1,
                             TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                             ,0);
code_?:
    pJVar6 = (JsonSchemaGenerator_TypeSchema *)
             (*pVVar5->methodPtr)(pIVar1,iVar2 + -1,pVVar5->method);
    pIVar1 = (this->fields)._stack;
    if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)0x0) {
      iVar2 = func_?(0,
                              TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                              ,pIVar1);
      func_?(4,
                      TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                      ,pIVar1,iVar2 + -1);
      pOVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_LastOrDefault
                         ((IEnumerable_1_System_Object_ *)(this->fields)._stack,
                          Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_
                         );
      ppJVar8 = &(this->fields)._currentSchema;
      if (pOVar7 != (Object *)0x0) {
        pJVar9 = (JsonSchema *)pOVar7[1].monitor;
        (this->fields)._currentSchema = pJVar9;
        func_?(ppJVar8,pJVar9);
        return pJVar6;
      }
      (this->fields)._currentSchema = (JsonSchema *)0x0;
      func_?(ppJVar8,0);
      return pJVar6;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pJVar6 = (JsonSchemaGenerator_TypeSchema *)(*pcVar10)();
  return pJVar6;
}


/* Void Push(JsonSchemaGenerator+TypeSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Push
               (JsonSchemaGenerator *this,JsonSchemaGenerator_TypeSchema *typeSchema,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                   );
    cRam_? = '\x01';
  }
  if (typeSchema != (JsonSchemaGenerator_TypeSchema *)0x0) {
    pJVar1 = (typeSchema->fields)._Schema_k__BackingField;
    (this->fields)._currentSchema = pJVar1;
    func_?(&(this->fields)._currentSchema,pJVar1);
    pIVar2 = (this->fields)._stack;
    if (pIVar2 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)0x0) {
      pIVar3 = pIVar2->klass;
      uVar4 = 0;
      uVar5 = (pIVar3->_1).interface_offsets_count;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
             ) {
            pVVar6 = &(pIVar3->vtable).IndexOf + pIVar3->interfaceOffsets[uVar4].offset;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pVVar6 = (VirtualInvokeData *)
               func_?(pIVar2,
                               TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                               ,2);
code_?:
      (*pVVar6->methodPtr)(pIVar2,typeSchema,pVVar6->method);
      pJVar7 = (this->fields)._resolver;
      if ((pJVar7 != (JsonSchemaResolver *)0x0) &&
         (pIVar8 = (pJVar7->fields)._LoadedSchemas_k__BackingField,
         pIVar8 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)) {
        func_?(2,
                        TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                        ,pIVar8,(typeSchema->fields)._Schema_k__BackingField);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* JsonSchemaGenerator() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator__ctor
               (JsonSchemaGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                   );
    cRam_? = '\x01';
  }
  this_00 = (LowLevelList_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                           );
  if (this_00 != (LowLevelList_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>__List__
              );
    method_00 = (MethodInfo *)&(this->fields)._stack;
    (this->fields)._stack =
         (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* IContractResolver get_ContractResolver() */

IContractResolver *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
JsonSchemaGenerator_get_ContractResolver(JsonSchemaGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    cRam_? = '\x01';
  }
  if ((this->fields)._contractResolver != (IContractResolver *)0x0) {
    return (this->fields)._contractResolver;
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
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

