
/* Void ReferenceOrWriteSchema(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::
     JsonSchemaWriter_ReferenceOrWriteSchema
               (JsonSchemaWriter *this,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__ref);
    cRam_? = '\x01';
  }
  if (schema != (JsonSchema *)0x0) {
    if ((schema->fields)._Id_k__BackingField == (String *)0x0) {
code_?:
      JsonSchemaWriter_WriteSchema(this,schema,(MethodInfo *)0x0);
      return;
    }
    pJVar1 = (this->fields)._resolver;
    if (pJVar1 != (JsonSchemaResolver *)0x0) {
      iVar2 = (*(pJVar1->klass->vtable).GetSchema.methodPtr)
                        (pJVar1,(schema->fields)._Id_k__BackingField,
                         (pJVar1->klass->vtable).GetSchema.method);
      if (iVar2 == 0) goto code_?;
      pJVar3 = (this->fields)._writer;
      if (pJVar3 != (JsonWriter *)0x0) {
        (*(pJVar3->klass->vtable).WriteStartObject.methodPtr)
                  (pJVar3,(pJVar3->klass->vtable).WriteStartObject.method);
        pJVar3 = (this->fields)._writer;
        if (pJVar3 != (JsonWriter *)0x0) {
          (*(pJVar3->klass->vtable).WritePropertyName.methodPtr)
                    (pJVar3,StringLiteral__ref,(pJVar3->klass->vtable).WritePropertyName.method);
          pJVar3 = (this->fields)._writer;
          if (pJVar3 != (JsonWriter *)0x0) {
            (*(pJVar3->klass->vtable).WriteValue.methodPtr)
                      (pJVar3,(schema->fields)._Id_k__BackingField,
                       (pJVar3->klass->vtable).WriteValue.method);
            pJVar3 = (this->fields)._writer;
            if (pJVar3 != (JsonWriter *)0x0) {
              (*(pJVar3->klass->vtable).WriteEndObject.methodPtr)
                        (pJVar3,(pJVar3->klass->vtable).WriteEndObject.method);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteItems(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter_WriteItems
               (JsonSchemaWriter *this,JsonSchema *schema,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&StringLiteral_items);
    cRam_? = '\x01';
  }
  if (schema != (JsonSchema *)0x0) {
    bVar4 = Json::Utilities::CollectionUtils::CollectionUtils_IsNullOrEmpty_1
                      ((ICollection_1_System_Object_ *)(schema->fields)._Items_k__BackingField,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>_
                      );
    if (bVar4 != 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pJVar5 = (this->fields)._writer;
    if (pJVar5 != (JsonWriter *)0x0) {
      (*(pJVar5->klass->vtable).WritePropertyName.methodPtr)(pJVar5);
      pIVar6 = (schema->fields)._Items_k__BackingField;
      if (pIVar6 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
        iVar7 = func_?(0,
                                TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                                ,pIVar6);
        if (iVar7 == 1) {
          pIVar6 = (schema->fields)._Items_k__BackingField;
          if (pIVar6 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
            pJVar8 = (JsonSchema *)
                      func_?(0,
                                      TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                                      ,pIVar6,0);
            JsonSchemaWriter_ReferenceOrWriteSchema(this,pJVar8,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        else {
          pJVar5 = (this->fields)._writer;
          if (pJVar5 != (JsonWriter *)0x0) {
            (*(pJVar5->klass->vtable).WriteStartArray.methodPtr)
                      (pJVar5,(pJVar5->klass->vtable).WriteStartArray.method);
            pIVar6 = (schema->fields)._Items_k__BackingField;
            if (pIVar6 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
              piVar9 = (int *)func_?(0,
                                              TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>
                                              ,pIVar6);
              uStack_1 = 1;
              while( true ) {
                if (piVar9 == (int *)0x0) break;
                cVar10 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar9);
                if (cVar10 == '\0') {
                  uStack_1 = 0xffffffff;
                  if (piVar9 != (int *)0x0) {
                    func_?(0,TypeInfo__System__IDisposable,piVar9);
                  }
                  uStack_1 = 0xffffffff;
                  pJVar5 = (this->fields)._writer;
                  if (pJVar5 != (JsonWriter *)0x0) {
                    (*(pJVar5->klass->vtable).WriteEndArray.methodPtr)
                              (pJVar5,(pJVar5->klass->vtable).WriteEndArray.method);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                  break;
                }
                if (piVar9 == (int *)0x0) break;
                uVar11 = 0;
                uVar12 = *(ushort *)(*piVar9 + 0xb2);
                if (uVar12 != 0) {
                  do {
                    if (*(IEnumerator_1_Newtonsoft_Json_Schema_JsonSchema___Class **)
                         (*(int *)(*piVar9 + 0x58) + (uint)uVar11 * 8) ==
                        TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchema>
                       ) {
                      puVar13 = (undefined4 *)
                               (*(int *)(*(int *)(*piVar9 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xbc
                               + *piVar9);
                      goto code_?;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar12);
                }
                puVar13 = (undefined4 *)
                         func_?(piVar9,
                                         TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchema>
                                         ,0);
code_?:
                pJVar8 = (JsonSchema *)(*(code *)*puVar13)(piVar9,puVar13[1]);
                JsonSchemaWriter_ReferenceOrWriteSchema(this,pJVar8,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void WritePropertyIfNotNull(JsonWriter, String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::
     JsonSchemaWriter_WritePropertyIfNotNull
               (JsonSchemaWriter *this,JsonWriter *writer,String *propertyName,Object *value,
               MethodInfo *method)

{
  if (value != (Object *)0x0) {
    if (writer == (JsonWriter *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(writer->klass->vtable).WritePropertyName.methodPtr)
              (writer,propertyName,(writer->klass->vtable).WritePropertyName.method);
    (*(writer->klass->vtable).WriteValue_37.methodPtr)
              (writer,value,(writer->klass->vtable).WriteValue_37.method);
  }
  return;
}


/* Void WriteSchema(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter_WriteSchema
               (JsonSchemaWriter *this,JsonSchema *schema,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff48;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff48;
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Linq::JToken,_System::String>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Linq::JToken,_System::String>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<Newtonsoft::Json::Linq::JToken,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<Newtonsoft::Json::Linq::JToken,_System::String>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_Value__
                   );
    func_?(&TypeInfo__System__Nullable<double>);
    func_?(&TypeInfo__System__Nullable<bool>);
    func_?(&TypeInfo__System__Nullable<int>);
    func_?(&StringLiteral_hidden);
    func_?(&StringLiteral_minimum);
    func_?(&StringLiteral_readonly);
    func_?(&StringLiteral_divisibleBy);
    func_?(&StringLiteral_enum);
    func_?(&StringLiteral_minItems);
    func_?(&StringLiteral_value);
    func_?(&StringLiteral_minLength);
    func_?(&StringLiteral_default);
    func_?(&StringLiteral_exclusiveMinimum);
    func_?(&StringLiteral_format);
    func_?(&StringLiteral_label);
    func_?(&StringLiteral_disallow);
    func_?(&StringLiteral_properties);
    func_?(&StringLiteral_id);
    func_?(&StringLiteral_required);
    func_?(&StringLiteral_additionalProperties);
    func_?(&StringLiteral_exclusiveMaximum);
    func_?(&StringLiteral_maximum);
    func_?(&StringLiteral_title);
    func_?(&StringLiteral_options);
    func_?(&StringLiteral_maxLength);
    func_?(&StringLiteral_extends);
    func_?(&StringLiteral_pattern);
    func_?(&StringLiteral_description);
    func_?(&StringLiteral_schema);
    func_?(&StringLiteral_transient);
    func_?(&StringLiteral_maxItems);
    func_?(&StringLiteral_patternProperties);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  pJStack_8 = (JsonWriter *)0x0;
  pJStack_9 = (JsonWriter *)0x0;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)schema,StringLiteral_schema,(MethodInfo *)0x0);
  pJVar10 = (this->fields)._resolver;
  uVar11 = CONCAT44(pJStack_12,pJStack_13);
  if ((pJVar10 != (JsonSchemaResolver *)0x0) &&
     (pJStack_14 = (JsonWriter *)(pJVar10->fields)._LoadedSchemas_k__BackingField,
     uVar11 = CONCAT44(pJStack_12,pJStack_13), pJStack_14 != (JsonWriter *)0x0)) {
    pJStack_13 = pJStack_14->klass;
    uVar15 = 0;
    pJStack_12 = (JsonWriter__Class *)0x0;
    uVar16 = (pJStack_13->_1).interface_offsets_count;
    ppJStack_17 = (JsonWriter **)(uint)uVar16;
    if (uVar16 != 0) {
      do {
        if (pJStack_13->interfaceOffsets[uVar15].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
           ) {
          ppIVar18 = &(&(pJStack_13->vtable).System_IDisposable_Dispose)
                     [pJStack_13->interfaceOffsets[uVar15].offset].methodPtr;
          goto code_?;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar16);
    }
    ppIVar18 = (Il2CppMethodPointer *)func_?();
code_?:
    cVar19 = (**ppIVar18)();
    if (cVar19 == '\0') {
      pJVar10 = (this->fields)._resolver;
      uVar11 = CONCAT44(pJStack_12,pJStack_13);
      if ((pJVar10 == (JsonSchemaResolver *)0x0) ||
         (uVar11 = CONCAT44(pJStack_12,pJStack_13),
         (pJVar10->fields)._LoadedSchemas_k__BackingField ==
         (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)) goto code_?;
      func_?(2);
    }
    pJVar20 = (this->fields)._writer;
    uVar11 = CONCAT44(pJStack_12,pJStack_13);
    if (pJVar20 != (JsonWriter *)0x0) {
      (*(pJVar20->klass->vtable).WriteStartObject.methodPtr)();
      pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
      uVar11 = CONCAT44(pJStack_12,pJStack_13);
      if (schema != (JsonSchema *)0x0) {
        pMStack_21 = (MethodInfo *)(schema->fields)._Id_k__BackingField;
        if (pMStack_21 != (MethodInfo *)0x0) {
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*(((JsonWriter *)pJStack_12)->klass->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(schema->fields)._Title_k__BackingField;
        pMStack_21 = (MethodInfo *)(this->fields)._writer;
        if (pJStack_12 != (JsonWriter__Class *)0x0) {
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if (pMStack_21 == (MethodInfo *)0x0) goto code_?;
          (*(((JsonWriter *)pMStack_21)->klass->vtable).WritePropertyName.methodPtr)();
          (*(((JsonWriter__Class *)pMStack_21->methodPointer)->vtable).WriteValue_37.methodPtr)
                    (pMStack_21,pJStack_12,
                     (((JsonWriter__Class *)pMStack_21->methodPointer)->vtable).WriteValue_37.method
                    );
        }
        pJStack_12 = (JsonWriter__Class *)(schema->fields)._Description_k__BackingField;
        pMStack_21 = (MethodInfo *)(this->fields)._writer;
        if (pJStack_12 != (JsonWriter__Class *)0x0) {
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if (pMStack_21 == (MethodInfo *)0x0) goto code_?;
          (*(((JsonWriter *)pMStack_21)->klass->vtable).WritePropertyName.methodPtr)();
          (*(((JsonWriter__Class *)pMStack_21->methodPointer)->vtable).WriteValue_37.methodPtr)
                    (pMStack_21,pJStack_12,
                     (((JsonWriter__Class *)pMStack_21->methodPointer)->vtable).WriteValue_37.method
                    );
        }
        NStack_22 = (schema->fields)._Required_k__BackingField;
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pMStack_21 = (MethodInfo *)func_?();
        if (pMStack_21 != (MethodInfo *)0x0) {
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        ppJStack_17 = (JsonWriter **)
                      CONCAT22(ppJStack_17._2_2_,(schema->fields)._ReadOnly_k__BackingField);
        pMStack_21 = (MethodInfo *)func_?();
        if (pMStack_21 != (MethodInfo *)0x0) {
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pJStack_14 = (JsonWriter *)
                     CONCAT22(pJStack_14._2_2_,(schema->fields)._Hidden_k__BackingField);
        pMStack_21 = (MethodInfo *)func_?();
        if (pMStack_21 != (MethodInfo *)0x0) {
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pJStack_13 = (JsonWriter__Class *)
                     CONCAT22(pJStack_13._2_2_,(schema->fields)._Transient_k__BackingField);
        pMStack_21 = (MethodInfo *)func_?();
        if (pMStack_21 != (MethodInfo *)0x0) {
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        NStack_23.hasValue = (schema->fields)._Type_k__BackingField.hasValue;
        NStack_23._1_3_ = *(undefined3 *)&(schema->fields)._Type_k__BackingField.field_0x1;
        NStack_23.value = (schema->fields)._Type_k__BackingField.value;
        if (NStack_23.hasValue != 0) {
          pJVar20 = (this->fields)._writer;
          JVar24 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                            (&NStack_23,
                             MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_Value__
                            );
          JsonSchemaWriter_WriteType(this,StringLiteral_type,pJVar20,JVar24,(MethodInfo *)0x0);
        }
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if ((schema->fields)._AllowAdditionalProperties_k__BackingField == 0) {
          pJVar20 = (this->fields)._writer;
          if (pJVar20 == (JsonWriter *)0x0) goto code_?;
          (*(pJVar20->klass->vtable).WritePropertyName.methodPtr)();
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          pJVar20 = (this->fields)._writer;
          pMStack_21 = (MethodInfo *)
                       CONCAT31(pMStack_21._1_3_,
                                (schema->fields)._AllowAdditionalProperties_k__BackingField);
          if (pJVar20 == (JsonWriter *)0x0) goto code_?;
          (*(pJVar20->klass->vtable).WriteValue_7.methodPtr)();
        }
        else if ((schema->fields)._AdditionalProperties_k__BackingField != (JsonSchema *)0x0) {
          pJVar20 = (this->fields)._writer;
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if (pJVar20 == (JsonWriter *)0x0) goto code_?;
          (*(pJVar20->klass->vtable).WritePropertyName.methodPtr)();
          JsonSchemaWriter_ReferenceOrWriteSchema
                    (this,(schema->fields)._AdditionalProperties_k__BackingField,(MethodInfo *)0x0);
        }
        JsonSchemaWriter_WriteSchemaDictionaryIfNotNull
                  (this,(this->fields)._writer,StringLiteral_properties,
                   (schema->fields)._Properties_k__BackingField,(MethodInfo *)0x0);
        JsonSchemaWriter_WriteSchemaDictionaryIfNotNull
                  (this,(this->fields)._writer,StringLiteral_patternProperties,
                   (schema->fields)._PatternProperties_k__BackingField,(MethodInfo *)0x0);
        JsonSchemaWriter_WriteItems(this,schema,(MethodInfo *)0x0);
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pJStack_13 = (JsonWriter__Class *)
                     CONCAT22(pJStack_13._2_2_,(schema->fields)._ExclusiveMinimum_k__BackingField);
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pJStack_14 = (JsonWriter *)
                     CONCAT22(pJStack_14._2_2_,(schema->fields)._ExclusiveMaximum_k__BackingField);
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        uStack_25 = *(undefined4 *)&(schema->fields)._MinimumLength_k__BackingField;
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        ppJStack_17 = (JsonWriter **)(schema->fields)._MinimumLength_k__BackingField.value;
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(this->fields)._writer;
        pMStack_21 = (MethodInfo *)func_?();
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if (pMStack_21 != (MethodInfo *)0x0) {
          if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WritePropertyName.methodPtr)();
          (*((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.methodPtr)
                    (pJStack_12,pMStack_21,
                     ((*(JsonWriter__Class **)&pJStack_12->_0)->vtable).WriteValue_37.method);
        }
        pJStack_12 = (JsonWriter__Class *)(schema->fields)._Format_k__BackingField;
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        pMStack_21 = (MethodInfo *)(this->fields)._writer;
        if (pJStack_12 != (JsonWriter__Class *)0x0) {
          if (pMStack_21 == (MethodInfo *)0x0) goto code_?;
          (*(((JsonWriter *)pMStack_21)->klass->vtable).WritePropertyName.methodPtr)();
          (*(((JsonWriter__Class *)pMStack_21->methodPointer)->vtable).WriteValue_37.methodPtr)
                    (pMStack_21,pJStack_12,
                     (((JsonWriter__Class *)pMStack_21->methodPointer)->vtable).WriteValue_37.method
                    );
        }
        pJStack_12 = (JsonWriter__Class *)(schema->fields)._Pattern_k__BackingField;
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        pMStack_21 = (MethodInfo *)(this->fields)._writer;
        if (pJStack_12 != (JsonWriter__Class *)0x0) {
          if (pMStack_21 == (MethodInfo *)0x0) goto code_?;
          (*(((JsonWriter *)pMStack_21)->klass->vtable).WritePropertyName.methodPtr)();
          (*(((JsonWriter__Class *)pMStack_21->methodPointer)->vtable).WriteValue_37.methodPtr)
                    (pMStack_21,pJStack_12,
                     (((JsonWriter__Class *)pMStack_21->methodPointer)->vtable).WriteValue_37.method
                    );
        }
        uVar11 = CONCAT44(pJStack_12,pJStack_13);
        if ((schema->fields)._Enum_k__BackingField == (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
code_?:
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if ((schema->fields)._Default_k__BackingField != (JToken *)0x0) {
            pJVar20 = (this->fields)._writer;
            if (pJVar20 == (JsonWriter *)0x0) goto code_?;
            (*(pJVar20->klass->vtable).WritePropertyName.methodPtr)();
            pJStack_12 = (JsonWriter__Class *)(schema->fields)._Default_k__BackingField;
            pJStack_13 = (JsonWriter__Class *)(this->fields)._writer;
            pMStack_21 = 
            Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
            ;
            pIVar26 = ((
                       Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                       ->field7_0x1c).rgctx_data)->klass;
            if (pIVar26->initialized_and_no_error == 0) {
              pIVar26 = (Il2CppClass *)func_?();
            }
            if (pIVar26->cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pIVar26 = ((pMStack_21->field7_0x1c).rgctx_data)->klass;
            if (pIVar26->initialized_and_no_error == 0) {
              pIVar26 = (Il2CppClass *)func_?();
            }
            uVar11 = CONCAT44(pJStack_12,pJStack_13);
            pMStack_21 = *(MethodInfo **)pIVar26->static_fields;
            if (pJStack_12 == (JsonWriter__Class *)0x0) goto code_?;
            (*(code *)(pJStack_12->_0).image[8].typeCount)(pJStack_12);
          }
          uVar11 = CONCAT44(pJStack_12,pJStack_13);
          if ((schema->fields)._Options_k__BackingField ==
              (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_ *)0x0) {
code_?:
            NStack_23.hasValue = (schema->fields)._Disallow_k__BackingField.hasValue;
            NStack_23._1_3_ = *(undefined3 *)&(schema->fields)._Disallow_k__BackingField.field_0x1;
            NStack_23.value = (schema->fields)._Disallow_k__BackingField.value;
            if (NStack_23.hasValue != 0) {
              pJVar20 = (this->fields)._writer;
              JVar24 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                                (&NStack_23,
                                 MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_Value__
                                );
              JsonSchemaWriter_WriteType(this,StringLiteral_disallow,pJVar20,JVar24,(MethodInfo *)0x0)
              ;
            }
            uVar11 = CONCAT44(pJStack_12,pJStack_13);
            if ((schema->fields)._Extends_k__BackingField != (JsonSchema *)0x0) {
              pJVar20 = (this->fields)._writer;
              if (pJVar20 == (JsonWriter *)0x0) goto code_?;
              (*(pJVar20->klass->vtable).WritePropertyName.methodPtr)();
              JsonSchemaWriter_ReferenceOrWriteSchema
                        (this,(schema->fields)._Extends_k__BackingField,(MethodInfo *)0x0);
            }
            uVar11 = CONCAT44(pJStack_12,pJStack_13);
            pJVar20 = (this->fields)._writer;
            if (pJVar20 != (JsonWriter *)0x0) {
              (*(pJVar20->klass->vtable).WriteEndObject.methodPtr)();
              *unaff_FS_OFFSET = uStack_4;
              return;
            }
          }
          else {
            pJVar20 = (this->fields)._writer;
            if (pJVar20 != (JsonWriter *)0x0) {
              (*(pJVar20->klass->vtable).WritePropertyName.methodPtr)();
              uVar11 = CONCAT44(pJStack_12,pJStack_13);
              pJVar20 = (this->fields)._writer;
              if (pJVar20 != (JsonWriter *)0x0) {
                (*(pJVar20->klass->vtable).WriteStartArray.methodPtr)();
                uVar11 = CONCAT44(pJStack_12,pJStack_13);
                if ((schema->fields)._Options_k__BackingField !=
                    (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_ *)0x0) {
                  pJStack_9 = (JsonWriter *)func_?();
                  ppJStack_17 = &pJStack_9;
                  uStack_25 = 0;
                  uStack_2 = 4;
                  while( true ) {
                    pJStack_13 = (JsonWriter__Class *)pJStack_9;
                    uVar11 = CONCAT44(pJStack_12,pJStack_9);
                    if (pJStack_9 == (JsonWriter *)0x0) break;
                    pJStack_12 = pJStack_9->klass;
                    uVar15 = 0;
                    pMStack_21 = (MethodInfo *)0x0;
                    uVar16 = (pJStack_12->_1).interface_offsets_count;
                    pJStack_14 = (JsonWriter *)(uint)uVar16;
                    if (uVar16 != 0) {
                      do {
                        if (pJStack_12->interfaceOffsets[uVar15].interfaceType ==
                            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                          ppIVar18 = &(&(pJStack_12->vtable).Equals)
                                     [pJStack_12->interfaceOffsets[uVar15].offset].methodPtr;
                          goto code_?;
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < uVar16);
                    }
                    ppIVar18 = (Il2CppMethodPointer *)func_?();
code_?:
                    cVar19 = (**ppIVar18)();
                    if (cVar19 == '\0') {
                      uStack_2 = 0xffffffff;
                      if (pJStack_9 != (JsonWriter *)0x0) {
                        func_?();
                      }
                      uVar11 = CONCAT44(pJStack_12,pJStack_13);
                      uStack_2 = 0xffffffff;
                      pJVar20 = (this->fields)._writer;
                      if (pJVar20 != (JsonWriter *)0x0) {
                        (*(pJVar20->klass->vtable).WriteEndArray.methodPtr)();
                        goto code_?;
                      }
                      break;
                    }
                    pJStack_13 = (JsonWriter__Class *)pJStack_9;
                    uVar11 = CONCAT44(pJStack_12,pJStack_9);
                    if (pJStack_9 == (JsonWriter *)0x0) break;
                    pJStack_12 = pJStack_9->klass;
                    uVar15 = 0;
                    pMStack_21 = (MethodInfo *)0x0;
                    uVar16 = (pJStack_12->_1).interface_offsets_count;
                    pJStack_14 = (JsonWriter *)(uint)uVar16;
                    if (uVar16 != 0) {
                      do {
                        if (pJStack_12->interfaceOffsets[uVar15].interfaceType ==
                            (Il2CppClass *)
                            TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Linq::JToken,_System::String>_>
                           ) {
                          ppIVar18 = &(&(pJStack_12->vtable).Equals)
                                     [pJStack_12->interfaceOffsets[uVar15].offset].methodPtr;
                          goto code_?;
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < uVar16);
                    }
                    ppIVar18 = (Il2CppMethodPointer *)func_?();
code_?:
                    uVar11 = (**ppIVar18)();
                    pJStack_12 = (JsonWriter__Class *)((ulonglong)uVar11 >> 0x20);
                    pJStack_13 = (JsonWriter__Class *)uVar11;
                    pJVar20 = (this->fields)._writer;
                    if (pJVar20 == (JsonWriter *)0x0) break;
                    (*(pJVar20->klass->vtable).WriteStartObject.methodPtr)();
                    uVar11 = CONCAT44(pJStack_12,pJStack_13);
                    pJVar20 = (this->fields)._writer;
                    if (pJVar20 == (JsonWriter *)0x0) break;
                    (*(pJVar20->klass->vtable).WritePropertyName.methodPtr)();
                    pJStack_14 = (this->fields)._writer;
                    pMStack_21 = 
                    Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                    ;
                    pIVar26 = ((
                               Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                               ->field7_0x1c).rgctx_data)->klass;
                    if (pIVar26->initialized_and_no_error == 0) {
                      pIVar26 = (Il2CppClass *)func_?();
                    }
                    if (pIVar26->cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pIVar26 = ((pMStack_21->field7_0x1c).rgctx_data)->klass;
                    if (pIVar26->initialized_and_no_error == 0) {
                      pIVar26 = (Il2CppClass *)func_?();
                    }
                    uVar11 = CONCAT44(pJStack_12,pJStack_13);
                    pMStack_21 = *(MethodInfo **)pIVar26->static_fields;
                    if (pJStack_13 == (JsonWriter__Class *)0x0) break;
                    (**(code **)(*(int *)pJStack_13 + 0x16c))(pJStack_13);
                    uVar11 = CONCAT44(pJStack_12,pJStack_13);
                    if (pJStack_12 != (JsonWriter__Class *)0x0) {
                      if ((this->fields)._writer == (JsonWriter *)0x0) break;
                      func_?();
                      uVar11 = CONCAT44(pJStack_12,pJStack_13);
                      if ((this->fields)._writer == (JsonWriter *)0x0) break;
                      func_?();
                    }
                    uVar11 = CONCAT44(pJStack_12,pJStack_13);
                    if ((this->fields)._writer == (JsonWriter *)0x0) break;
                    func_?();
                  }
                }
              }
            }
          }
        }
        else {
          pJVar20 = (this->fields)._writer;
          if (pJVar20 != (JsonWriter *)0x0) {
            (*(pJVar20->klass->vtable).WritePropertyName.methodPtr)();
            uVar11 = CONCAT44(pJStack_12,pJStack_13);
            pJVar20 = (this->fields)._writer;
            if (pJVar20 != (JsonWriter *)0x0) {
              (*(pJVar20->klass->vtable).WriteStartArray.methodPtr)();
              uVar11 = CONCAT44(pJStack_12,pJStack_13);
              if ((schema->fields)._Enum_k__BackingField !=
                  (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
                pJStack_8 = (JsonWriter *)func_?();
                ppJStack_17 = &pJStack_8;
                uStack_25 = 0;
                uStack_2 = 1;
                while (uVar11 = CONCAT44(pJStack_12,pJStack_13), pJStack_8 != (JsonWriter *)0x0) {
                  cVar19 = func_?();
                  if (cVar19 == '\0') {
                    uStack_2 = 0xffffffff;
                    if (pJStack_8 != (JsonWriter *)0x0) {
                      func_?();
                    }
                    uVar11 = CONCAT44(pJStack_12,pJStack_13);
                    uStack_2 = 0xffffffff;
                    pJVar20 = (this->fields)._writer;
                    if (pJVar20 != (JsonWriter *)0x0) {
                      (*(pJVar20->klass->vtable).WriteEndArray.methodPtr)();
                      goto code_?;
                    }
                    break;
                  }
                  pJStack_13 = (JsonWriter__Class *)pJStack_8;
                  uVar11 = CONCAT44(pJStack_12,pJStack_8);
                  if (pJStack_8 == (JsonWriter *)0x0) break;
                  pJStack_12 = pJStack_8->klass;
                  uVar15 = 0;
                  pMStack_21 = (MethodInfo *)0x0;
                  uVar16 = (pJStack_12->_1).interface_offsets_count;
                  pJStack_14 = (JsonWriter *)(uint)uVar16;
                  if (uVar16 != 0) {
                    do {
                      if (pJStack_12->interfaceOffsets[uVar15].interfaceType ==
                          (Il2CppClass *)
                          TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                         ) {
                        ppIVar18 = &(&(pJStack_12->vtable).Equals)
                                   [pJStack_12->interfaceOffsets[uVar15].offset].methodPtr;
                        goto code_?;
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < uVar16);
                  }
                  ppIVar18 = (Il2CppMethodPointer *)func_?();
code_?:
                  pJStack_12 = (JsonWriter__Class *)(**ppIVar18)();
                  pJStack_13 = (JsonWriter__Class *)(this->fields)._writer;
                  pMStack_21 = 
                  Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                  ;
                  pIVar26 = ((
                             Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                             ->field7_0x1c).rgctx_data)->klass;
                  if (pIVar26->initialized_and_no_error == 0) {
                    pIVar26 = (Il2CppClass *)func_?();
                  }
                  if (pIVar26->cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pIVar26 = ((pMStack_21->field7_0x1c).rgctx_data)->klass;
                  if (pIVar26->initialized_and_no_error == 0) {
                    pIVar26 = (Il2CppClass *)func_?();
                  }
                  uVar11 = CONCAT44(pJStack_12,pJStack_13);
                  pMStack_21 = *(MethodInfo **)pIVar26->static_fields;
                  if (pJStack_12 == (JsonWriter__Class *)0x0) break;
                  (*(code *)(pJStack_12->_0).image[8].typeCount)(pJStack_12);
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  pJStack_12 = (JsonWriter__Class *)((ulonglong)uVar11 >> 0x20);
  pJStack_13 = (JsonWriter__Class *)uVar11;
  func_?();
  func_?();
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void WriteSchemaDictionaryIfNotNull(JsonWriter, String,
   IDictionary`2[System.String,Newtonsoft.Json.Schema.JsonSchema]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::
     JsonSchemaWriter_WriteSchemaDictionaryIfNotNull
               (JsonSchemaWriter *this,JsonWriter *writer,String *propertyName,
               IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *properties,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>__get_Value__
                   );
    cRam_? = '\x01';
  }
  if (properties == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if (writer != (JsonWriter *)0x0) {
    (*(writer->klass->vtable).WritePropertyName.methodPtr)
              (writer,propertyName,(writer->klass->vtable).WritePropertyName.method);
    (*(writer->klass->vtable).WriteStartObject.methodPtr)
              (writer,(writer->klass->vtable).WriteStartObject.method);
    piVar4 = (int *)func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                                    ,properties);
    uStack_1 = 1;
    while( true ) {
      if (piVar4 == (int *)0x0) break;
      cVar5 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar4);
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar4 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar4);
        }
        uStack_1 = 0xffffffff;
        (*(writer->klass->vtable).WriteEndObject.methodPtr)
                  (writer,(writer->klass->vtable).WriteEndObject.method);
        goto code_?;
      }
      if (piVar4 == (int *)0x0) break;
      iVar6 = *piVar4;
      uVar7 = 0;
      if (*(ushort *)(iVar6 + 0xb2) != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchema___Class
                **)(*(int *)(iVar6 + 0x58) + (uint)uVar7 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
             ) {
            puVar8 = (undefined4 *)
                     (*(int *)(*(int *)(iVar6 + 0x58) + 4 + (uint)uVar7 * 8) * 8 + 0xbc + iVar6);
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(iVar6 + 0xb2));
      }
      puVar8 = (undefined4 *)
               func_?(piVar4,
                               TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                               ,0);
code_?:
      uVar9 = (*(code *)*puVar8)(piVar4,puVar8[1]);
      (*(writer->klass->vtable).WritePropertyName.methodPtr)
                (writer,(int)uVar9,(writer->klass->vtable).WritePropertyName.method);
      JsonSchemaWriter_ReferenceOrWriteSchema
                (this,(JsonSchema *)((ulonglong)uVar9 >> 0x20),(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void WriteType(String, JsonWriter, JsonSchemaType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter_WriteType
               (JsonSchemaWriter *this,String *propertyName,JsonWriter *writer,
               JsonSchemaType__Enum type,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetFlagsValues<Newtonsoft::Json::Schema::JsonSchemaType>_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchemaType>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__Where<Newtonsoft::Json::Schema::JsonSchemaType>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>__System__Func<Newtonsoft::Json::Schema::JsonSchemaType,_bool>_
                   );
    func_?(&TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaType,_bool>);
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaType>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaType>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaType>
                   );
    func_?(&TypeRef__Newtonsoft__Json__Schema__JsonSchemaType);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaType);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>__Add_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c___WriteType_b__7_0_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__Schema__JsonSchemaType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaType,&stack0xffffffe4);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = mscorlib.dll::System::Enum::Enum_IsDefined(enumType,value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    source = Json::Utilities::EnumUtils::EnumUtils_GetFlagsValues
                       (type,
                        System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetFlagsValues<Newtonsoft::Json::Schema::JsonSchemaType>_Newtonsoft__Json__Schema__JsonSchemaType_
                       );
    if ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    this_00 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c->static_fields->__9__7_0;
    if (this_00 == (Func_2_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_ *)0x0) {
      if ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c->_1).cctor_finished_or_no_cctor
          == 0) {
        func_?();
      }
      object = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c->static_fields->__9;
      this_00 = (Func_2_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_ *)func_?();
      if (this_00 == (Func_2_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                ((Predicate_1_Int32Enum_ *)this_00,(Object *)object,
                 MethodInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c___WriteType_b__7_0_Newtonsoft__Json__Schema__JsonSchemaType_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c->static_fields->__9__7_0 = this_00;
      func_?();
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_3
                          ((IEnumerable_1_System_Int32Enum_ *)source,
                           (Func_2_Int32Enum_Boolean_ *)this_00,
                           System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__Where<Newtonsoft::Json::Schema::JsonSchemaType>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>__System__Func<Newtonsoft::Json::Schema::JsonSchemaType,_bool>_
                          );
    this_01 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_3
                        (source_00,
                         System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchemaType>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>_
                        );
    if (this_01 != (List_1_System_Int32Enum_ *)0x0) {
code_?:
      pIVar2 = 
      TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaType>;
      iVar3 = func_?();
      if (iVar3 == 0) {
code_?:
        *unaff_FS_OFFSET = pIVar2;
        return;
      }
      if (writer != (JsonWriter *)0x0) {
        (*(writer->klass->vtable).WritePropertyName.methodPtr)();
        iVar3 = func_?();
        if (iVar3 == 1) {
          uVar4 = 0;
          uVar5 = (this_01->klass->_1).interface_offsets_count;
          if (uVar5 != 0) {
            do {
              if (this_01->klass->interfaceOffsets[uVar4].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaType>
                 ) {
                pVVar6 = &(this_01->klass->vtable).Equals +
                          this_01->klass->interfaceOffsets[uVar4].offset;
                goto code_?;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
          }
          pVVar6 = (VirtualInvokeData *)func_?();
code_?:
          pIVar2 = (ICollection_1_Newtonsoft_Json_Schema_JsonSchemaType___Class *)0x0;
          JVar7 = (*pVVar6->methodPtr)();
          JsonSchemaBuilder::JsonSchemaBuilder_MapType_1(JVar7,(MethodInfo *)0x0);
          (*(writer->klass->vtable).WriteValue.methodPtr)();
          goto code_?;
        }
        (*(writer->klass->vtable).WriteStartArray.methodPtr)();
        piVar8 = (int *)func_?();
        while (piVar8 != (int *)0x0) {
          piVar8 = (int *)&UNK_?;
          cVar9 = func_?();
          if (cVar9 == '\0') {
            if (piVar8 != (int *)0x0) {
              func_?();
            }
            (*(writer->klass->vtable).WriteEndArray.methodPtr)();
            *unaff_FS_OFFSET = writer;
            return;
          }
          if (piVar8 == (int *)0x0) break;
          uVar4 = 0;
          uVar5 = *(ushort *)(*piVar8 + 0xb2);
          if (uVar5 != 0) {
            do {
              if (*(IEnumerator_1_Newtonsoft_Json_Schema_JsonSchemaType___Class **)
                   (*(int *)(*piVar8 + 0x58) + (uint)uVar4 * 8) ==
                  TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaType>
                 ) {
                puVar10 = (undefined4 *)
                          (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar4 * 8) * 8 + 0xbc +
                          *piVar8);
                goto code_?;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
          }
          piVar8 = (int *)&UNK_?;
          puVar10 = (undefined4 *)func_?();
code_?:
          JVar7 = (*(code *)*puVar10)();
          JsonSchemaBuilder::JsonSchemaBuilder_MapType_1(JVar7,(MethodInfo *)0x0);
          (*(writer->klass->vtable).WriteValue.methodPtr)();
        }
      }
    }
  }
  else {
    this_01 = (List_1_System_Int32Enum_ *)func_?();
    if (this_01 != (List_1_System_Int32Enum_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>__List__
                );
      pMVar11 = 
      MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>__Add_Newtonsoft__Json__Schema__JsonSchemaType_
      ;
      piVar12 = &(this_01->fields)._version;
      *piVar12 = *piVar12 + 1;
      pIVar13 = (this_01->fields)._items;
      uVar14 = (this_01->fields)._size;
      if (pIVar13 != (Int32Enum__Enum__Array *)0x0) {
        if (uVar14 < pIVar13->max_length) {
          (this_01->fields)._size = uVar14 + 1;
          if (pIVar13->max_length <= uVar14) goto code_?;
          pIVar13->vector[uVar14] = type;
        }
        else {
          (*(pMVar11->klass->rgctx_data[0xb].method)->virtualMethodPointer)();
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* JsonSchemaWriter(JsonWriter, JsonSchemaResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter__ctor
               (JsonSchemaWriter *this,JsonWriter *writer,JsonSchemaResolver *resolver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_writer);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)writer,StringLiteral_writer,(MethodInfo *)0x0);
  (this->fields)._writer = writer;
  func_?(&this->fields,writer);
  (this->fields)._resolver = resolver;
  func_?(&(this->fields)._resolver,resolver);
  return;
}

