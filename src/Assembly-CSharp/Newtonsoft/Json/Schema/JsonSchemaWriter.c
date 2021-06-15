
/* Void ReferenceOrWriteSchema(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::
     JsonSchemaWriter_ReferenceOrWriteSchema
               (JsonSchemaWriter *this,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (schema != (JsonSchema *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)schema,(MethodInfo *)0x0);
    if (pIVar1 == (IList_1_VoxelHit_ *)0x0) {
code_?:
      JsonSchemaWriter_WriteSchema(this,schema,(MethodInfo *)0x0);
      return;
    }
    pJVar2 = (this->fields)._resolver;
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)schema,(MethodInfo *)0x0);
    if (pJVar2 != (JsonSchemaResolver *)0x0) {
      iVar3 = (*(code *)(pJVar2->klass->vtable).GetSchema.method)
                        (pJVar2,pIVar1,pJVar2->klass[1]._0.image);
      if (iVar3 == 0) goto code_?;
      pJVar4 = (this->fields)._writer;
      if (pJVar4 != (JsonWriter *)0x0) {
        (*(code *)(pJVar4->klass->vtable).WriteStartObject.method)
                  (pJVar4,(pJVar4->klass->vtable).WriteEndObject.methodPtr);
        pJVar4 = (this->fields)._writer;
        if (pJVar4 != (JsonWriter *)0x0) {
          (*(code *)(pJVar4->klass->vtable).WritePropertyName.method)
                    (pJVar4,StringLiteral__ref,(pJVar4->klass->vtable).WriteEnd.methodPtr);
          pJVar4 = (this->fields)._writer;
          pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)schema,(MethodInfo *)0x0);
          if (pJVar4 != (JsonWriter *)0x0) {
            (*(code *)(pJVar4->klass->vtable).WriteValue.method)
                      (pJVar4,pIVar1,(pJVar4->klass->vtable).WriteValue_1.methodPtr);
            pJVar4 = (this->fields)._writer;
            if (pJVar4 != (JsonWriter *)0x0) {
              (*(code *)(pJVar4->klass->vtable).WriteEndObject.method)
                        (pJVar4,(pJVar4->klass->vtable).WriteStartArray.methodPtr);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (schema != (JsonSchema *)0x0) {
    pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)schema,(MethodInfo *)0x0);
    bVar5 = Json::Utilities::CollectionUtils::CollectionUtils_IsNullOrEmpty_5
                      ((ICollection_1_System_Reflection_ParameterInfo_ *)pSVar4,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>_
                      );
    if (bVar5 != 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pJVar6 = (this->fields)._writer;
    if (pJVar6 != (JsonWriter *)0x0) {
      (*(code *)(pJVar6->klass->vtable).WritePropertyName.method)();
      pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                         ((DayNightCycle *)schema,(MethodInfo *)0x0);
      if (pSVar4 != (SkyParam *)0x0) {
        iVar7 = func_?();
        if (iVar7 == 1) {
          pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)schema,(MethodInfo *)0x0);
          if (pSVar4 != (SkyParam *)0x0) {
            pJVar8 = (JsonSchema *)func_?();
            JsonSchemaWriter_ReferenceOrWriteSchema(this,pJVar8,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        else {
          pJVar6 = (this->fields)._writer;
          if (pJVar6 != (JsonWriter *)0x0) {
            (*(code *)(pJVar6->klass->vtable).WriteStartArray.method)();
            pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                               ((DayNightCycle *)schema,(MethodInfo *)0x0);
            if (pSVar4 != (SkyParam *)0x0) {
              piVar9 = (int *)func_?();
              uStack_1 = 0;
              while (piVar9 != (int *)0x0) {
                cVar10 = func_?();
                if (cVar10 == '\0') {
                  uStack_1 = 0xffffffff;
                  if (piVar9 != (int *)0x0) {
                    func_?();
                  }
                  pJVar6 = (this->fields)._writer;
                  if (pJVar6 != (JsonWriter *)0x0) {
                    (*(code *)(pJVar6->klass->vtable).WriteEndArray.method)();
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                  break;
                }
                uVar11 = 0;
                uVar12 = *(ushort *)(*piVar9 + 0xb6);
                if (uVar12 != 0) {
                  iVar7 = *(int *)(*piVar9 + 0x58);
                  do {
                    if (*(IEnumerator_1_Newtonsoft_Json_Schema_JsonSchema___Class **)
                         (iVar7 + (uint)uVar11 * 8) ==
                        TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchema>
                       ) {
                      puVar13 = (undefined4 *)
                                (*piVar9 + (*(int *)(iVar7 + 4 + (uint)uVar11 * 8) + 0x18) * 8);
                      goto code_?;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar12);
                }
                puVar13 = (undefined4 *)func_?();
code_?:
                pJVar8 = (JsonSchema *)(*(code *)*puVar13)();
                JsonSchemaWriter_ReferenceOrWriteSchema(this,pJVar8,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)(writer->klass->vtable).WritePropertyName.method)
              (writer,propertyName,(writer->klass->vtable).WriteEnd.methodPtr);
    (*(code *)(writer->klass->vtable).WriteValue_37.method)
              (writer,value,(writer->klass->vtable).WriteComment.methodPtr);
  }
  return;
}


/* Void WriteSchema(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter_WriteSchema
               (JsonSchemaWriter *this,JsonSchema *schema,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff24;
  puVar5 = &stack0xffffff24;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  uStack_9 = 0;
  NStack_10.value = 0;
  NStack_10.has_value = 0;
  NStack_10._5_3_ = 0;
  NStack_11.value = 0;
  NStack_11.has_value = 0;
  NStack_11._5_3_ = 0;
  func_?();
  pIStack_12 = (Il2CppImage *)0xffffffff;
  pIStack_13 = (Il2CppImage *)0xffffffff;
  puStack_14 = (undefined4 *)&stack0xffffff24;
  puStack_4 = &stack0xffffff24;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)schema,StringLiteral_schema,(MethodInfo *)0x0);
  pJVar15 = (this->fields)._resolver;
  if ((pJVar15 != (JsonSchemaResolver *)0x0) &&
     (pIStack_16 = (pJVar15->fields)._LoadedSchemas_k__BackingField,
     pIStack_16 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)) {
    pIStack_17 = pIStack_16->klass;
    uVar18 = 0;
    pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0;
    uVar20._0_1_ = (pIStack_17->_1).rank;
    uVar20._1_1_ = (pIStack_17->_1).minimumAlignment;
    uStack_21 = (uint)uVar20;
    if (uVar20 != 0) {
      do {
        if (pIStack_17->interfaceOffsets[uVar18].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
           ) {
          ppMVar22 = &(&(pIStack_17->vtable).set_Item)[pIStack_17->interfaceOffsets[uVar18].offset].
                      method;
          goto code_?;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar20);
    }
    ppMVar22 = (MethodInfo **)func_?();
code_?:
    cVar23 = (*(code *)*ppMVar22)();
    if (cVar23 == '\0') {
      pJVar15 = (this->fields)._resolver;
      if ((pJVar15 == (JsonSchemaResolver *)0x0) ||
         ((pJVar15->fields)._LoadedSchemas_k__BackingField ==
          (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)) goto code_?;
      func_?(2);
    }
    pIVar24 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)&this->fields;
    pIStack_17 = pIVar24;
    if (((JsonSchemaWriter__Fields *)pIVar24)->_writer != (JsonWriter *)0x0) {
      (*(code *)(((JsonSchemaWriter__Fields *)pIVar24)->_writer->klass->vtable).WriteStartObject.
                method)();
      pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                   ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
      if (schema != (JsonSchema *)0x0) {
        pIStack_25 = (Il2CppImage *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)schema,(MethodInfo *)0x0);
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          (*(code *)(pIStack_19->_0).image[0xf].typeCount)(pIStack_19);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        pIStack_25 = (Il2CppImage *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)schema,
                                (MethodInfo *)0x0);
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        pIStack_25 = (Il2CppImage *)
                     System.Core.dll::System::Linq::
                     Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                     Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                               ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)schema,
                                (MethodInfo *)0x0);
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        NStack_27 = Json::Serialization::JsonContract::JsonContract_get_IsReference
                              ((JsonContract *)schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        NStack_28 = JsonSchema::JsonSchema_get_ReadOnly(schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        NVar29 = JsonSchema::JsonSchema_get_Hidden(schema,(MethodInfo *)0x0);
        uStack_21 = CONCAT22(uStack_21._2_2_,NVar29);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        NVar29 = JsonSchema::JsonSchema_get_Transient(schema,(MethodInfo *)0x0);
        pIStack_16 = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)CONCAT22(pIStack_16._2_2_,NVar29)
        ;
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        KStack_7 = System.Core.dll::System::Linq::QuickSort`1[TElement]+<Sort>c__Iterator21[System
                    ::Collections::Generic::KeyValuePair`2[System::Int32,System::Int32]]::
                    QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_Generic_IEnumerator_TElement__get_Current
                              ((QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
                                *)schema,(MethodInfo *)0x0);
        cVar23 = func_?();
        if (cVar23 != '\0') {
          pJVar30 = ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
          KStack_8 = System.Core.dll::System::Linq::
                      QuickSort`1[TElement]+<Sort>c__Iterator21[System::Collections::Generic::
                      KeyValuePair`2[System::Int32,System::Int32]]::
                      QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_Generic_IEnumerator_TElement__get_Current
                                ((QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
                                  *)schema,(MethodInfo *)0x0);
          JVar31 = func_?(&KStack_8);
          JsonSchemaWriter_WriteType(this,StringLiteral_type,pJVar30,JVar31,(MethodInfo *)0x0);
        }
        bVar32 = JetPackMotor::JetPackMotor_get_Thrust((JetPackMotor *)schema,(MethodInfo *)0x0);
        if (bVar32 == 0) {
          if (((JsonSchemaWriter__Fields *)pIVar24)->_writer == (JsonWriter *)0x0)
          goto code_?;
          (*(code *)(((JsonSchemaWriter__Fields *)pIVar24)->_writer->klass->vtable).
                    WritePropertyName.method)();
          pIStack_25 = (Il2CppImage *)((JsonSchemaWriter__Fields *)pIVar24)->_writer;
          bVar32 = JetPackMotor::JetPackMotor_get_Thrust((JetPackMotor *)schema,(MethodInfo *)0x0);
          pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                       CONCAT31(pIStack_19._1_3_,bVar32);
          if (pIStack_25 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)&((String__Class *)pIStack_25->name)[1]._0.this_arg.attrs)();
        }
        else {
          pCVar33 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                              ((DayNightCycle *)schema,(MethodInfo *)0x0);
          if (pCVar33 != (CelestialParam *)0x0) {
            if (((JsonSchemaWriter__Fields *)pIVar24)->_writer == (JsonWriter *)0x0)
            goto code_?;
            (*(code *)(((JsonSchemaWriter__Fields *)pIVar24)->_writer->klass->vtable).
                      WritePropertyName.method)();
            pJVar34 = (JsonSchema *)
                      DayNightCycle::DayNightCycle_get_CurrentSunParam
                                ((DayNightCycle *)schema,(MethodInfo *)0x0);
            JsonSchemaWriter_ReferenceOrWriteSchema(this,pJVar34,(MethodInfo *)0x0);
          }
        }
        pJVar30 = ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        properties = DayNightCycle::DayNightCycle_get_CurrentStarsParam
                               ((DayNightCycle *)schema,(MethodInfo *)0x0);
        JsonSchemaWriter_WriteSchemaDictionaryIfNotNull
                  (this,pJVar30,StringLiteral_properties,
                   (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)properties,
                   (MethodInfo *)0x0);
        pJVar30 = ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        pCVar33 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)schema,(MethodInfo *)0x0);
        JsonSchemaWriter_WriteSchemaDictionaryIfNotNull
                  (this,pJVar30,StringLiteral_patternProperties,
                   (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)pCVar33,
                   (MethodInfo *)0x0);
        JsonSchemaWriter_WriteItems(this,schema,(MethodInfo *)0x0);
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        JsonSchema::JsonSchema_get_Minimum
                  ((Nullable_1_Double_ *)&stack0xffffff60,schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        JsonSchema::JsonSchema_get_Maximum
                  ((Nullable_1_Double_ *)&stack0xffffff60,schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        NVar29 = JsonSchema::JsonSchema_get_ExclusiveMinimum(schema,(MethodInfo *)0x0);
        pIStack_16 = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)CONCAT22(pIStack_16._2_2_,NVar29)
        ;
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        NVar29 = JsonSchema::JsonSchema_get_ExclusiveMaximum(schema,(MethodInfo *)0x0);
        uStack_21 = CONCAT22(uStack_21._2_2_,NVar29);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        JsonSchema::JsonSchema_get_MinimumLength(schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        JsonSchema::JsonSchema_get_MaximumLength(schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        JsonSchema::JsonSchema_get_MinimumItems(schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        JsonSchema::JsonSchema_get_MaximumItems(schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        JsonSchema::JsonSchema_get_DivisibleBy
                  ((Nullable_1_Double_ *)&stack0xffffff60,schema,(MethodInfo *)0x0);
        pIStack_25 = (Il2CppImage *)func_?();
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        pIStack_25 = (Il2CppImage *)
                     CloudyTheme::CloudyTheme_get_Identifier
                               ((CloudyTheme *)schema,(MethodInfo *)0x0);
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pIStack_19 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)
                     ((JsonSchemaWriter__Fields *)pIVar24)->_writer;
        pIStack_25 = (Il2CppImage *)
                     UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                     TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                     TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                               ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)schema,
                                (MethodInfo *)0x0);
        if (pIStack_25 != (Il2CppImage *)0x0) {
          if (pIStack_19 == (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0)
          goto code_?;
          (*(code *)(pIStack_19->_0).image[6].codeGenModule)();
          pIVar26 = (pIStack_19->_0).image;
          (*(code *)pIVar26[0xf].typeCount)(pIStack_19,pIStack_25,pIVar26[0xf].exportedTypeCount);
        }
        pOVar35 = PrefabPool::PrefabPool_get_MVPulseBoxPrefab
                            ((PrefabPool *)schema,(MethodInfo *)0x0);
        if (pOVar35 == (ObjectPrefab *)0x0) {
code_?:
          if (schema != (JsonSchema *)0x0) {
            pOVar35 = PrefabPool::PrefabPool_get_MVSmokePrefab
                                ((PrefabPool *)schema,(MethodInfo *)0x0);
            if (pOVar35 != (ObjectPrefab *)0x0) {
              pIVar26 = (pIVar24->_0).image;
              if (pIVar26 == (Il2CppImage *)0x0) goto code_?;
              (**(code **)(pIVar26->name + 0x128))();
              pIStack_13 = (Il2CppImage *)
                           PrefabPool::PrefabPool_get_MVSmokePrefab
                                     ((PrefabPool *)schema,(MethodInfo *)0x0);
              pIStack_25 = (pIVar24->_0).image;
              func_?();
              if (pIStack_13 == (Il2CppImage *)0x0) goto code_?;
              (*(code *)((ObjectPrefab__Class *)pIStack_13->name)[1]._1.native_size)(pIStack_13);
            }
            pOVar35 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab
                                ((PrefabPool *)schema,(MethodInfo *)0x0);
            if (pOVar35 == (ObjectPrefab *)0x0) {
code_?:
              if (schema != (JsonSchema *)0x0) {
                NStack_10 = JsonSchema::JsonSchema_get_Disallow(schema,(MethodInfo *)0x0);
                cVar23 = func_?();
                if (cVar23 != '\0') {
                  pIVar26 = (pIVar24->_0).image;
                  NStack_11 = JsonSchema::JsonSchema_get_Disallow(schema,(MethodInfo *)0x0);
                  JVar31 = func_?(&NStack_11);
                  JsonSchemaWriter_WriteType
                            (this,StringLiteral_disallow,(JsonWriter *)pIVar26,JVar31,
                             (MethodInfo *)0x0);
                }
                pSVar36 = PrefabPool::PrefabPool_get_MVSoundEmitterPrefab
                                    ((PrefabPool *)schema,(MethodInfo *)0x0);
                if (pSVar36 != (SoundEmitterObject *)0x0) {
                  pIVar26 = (pIVar24->_0).image;
                  if (pIVar26 == (Il2CppImage *)0x0) goto code_?;
                  (**(code **)(pIVar26->name + 0x128))();
                  pJVar34 = (JsonSchema *)
                            PrefabPool::PrefabPool_get_MVSoundEmitterPrefab
                                      ((PrefabPool *)schema,(MethodInfo *)0x0);
                  JsonSchemaWriter_ReferenceOrWriteSchema(this,pJVar34,(MethodInfo *)0x0);
                }
                pIVar26 = (pIVar24->_0).image;
                if (pIVar26 != (Il2CppImage *)0x0) {
                  (**(code **)(pIVar26->name + 0x100))();
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
              }
            }
            else {
              pIVar26 = (pIVar24->_0).image;
              if (pIVar26 != (Il2CppImage *)0x0) {
                (**(code **)(pIVar26->name + 0x128))();
                pIVar26 = (pIVar24->_0).image;
                if (pIVar26 != (Il2CppImage *)0x0) {
                  (**(code **)(pIVar26->name + 0x108))();
                  pOVar35 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab
                                      ((PrefabPool *)schema,(MethodInfo *)0x0);
                  if (pOVar35 != (ObjectPrefab *)0x0) {
                    pIStack_16 = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)func_?();
                    uStack_1 = 2;
                    pIVar37 = pIStack_16;
                    while (pIVar37 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
                      cVar23 = func_?();
                      pIVar38 = pIStack_16;
                      if (cVar23 == '\0') {
                        puStack_14[(int)((int)&pIStack_12->name + 1)] = 0x452;
                        uStack_1 = 0xffffffff;
                        if (pIVar37 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
                          func_?();
                        }
                        if (iStack_6 != 0) goto code_?;
                        pJVar30 = (this->fields)._writer;
                        if (pJVar30 != (JsonWriter *)0x0) {
                          (*(code *)(pJVar30->klass->vtable).WriteEndArray.method)();
                          goto code_?;
                        }
                        break;
                      }
                      pIStack_19 = pIStack_16->klass;
                      uVar20 = 0;
                      pIStack_13 = (Il2CppImage *)0x0;
                      uVar18._0_1_ = (pIStack_19->_1).rank;
                      uVar18._1_1_ = (pIStack_19->_1).minimumAlignment;
                      pIStack_25 = (Il2CppImage *)(uint)uVar18;
                      if (uVar18 != 0) {
                        do {
                          pIVar24 = pIStack_17;
                          if (pIStack_19->interfaceOffsets[uVar20].interfaceType ==
                              (Il2CppClass *)
                              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Linq::JToken,_System::String>_>
                             ) {
                            ppMVar22 = &(&(pIStack_19->vtable).IndexOf)
                                        [pIStack_19->interfaceOffsets[uVar20].offset].method;
                            goto code_?;
                          }
                          uVar20 = uVar20 + 1;
                        } while (uVar20 < uVar18);
                      }
                      ppMVar22 = (MethodInfo **)func_?();
code_?:
                      uStack_9 = (*(code *)*ppMVar22)();
                      pIVar26 = (pIVar24->_0).image;
                      if (pIVar26 == (Il2CppImage *)0x0) break;
                      (**(code **)(pIVar26->name + 0xf8))();
                      pIVar26 = (pIVar24->_0).image;
                      if (pIVar26 == (Il2CppImage *)0x0) break;
                      (**(code **)(pIVar26->name + 0x128))();
                      pIStack_13 = (Il2CppImage *)func_?();
                      pIStack_25 = (pIVar24->_0).image;
                      func_?();
                      if (pIStack_13 == (Il2CppImage *)0x0) break;
                      (*(code *)((ObjectPrefab__Class *)pIStack_13->name)[1]._1.native_size)
                                (pIStack_13);
                      iVar39 = func_?();
                      if (iVar39 != 0) {
                        if ((pIVar24->_0).image == (Il2CppImage *)0x0) break;
                        func_?();
                        pIStack_13 = (pIVar24->_0).image;
                        func_?();
                        if (pIStack_13 == (Il2CppImage *)0x0) break;
                        func_?();
                      }
                      if ((pIVar24->_0).image == (Il2CppImage *)0x0) break;
                      func_?();
                      pIVar37 = pIVar38;
                    }
                  }
                }
              }
            }
          }
        }
        else if (((JsonSchemaWriter__Fields *)pIVar24)->_writer != (JsonWriter *)0x0) {
          (*(code *)(((JsonSchemaWriter__Fields *)pIVar24)->_writer->klass->vtable).
                    WritePropertyName.method)();
          if (((JsonSchemaWriter__Fields *)pIVar24)->_writer != (JsonWriter *)0x0) {
            (*(code *)(((JsonSchemaWriter__Fields *)pIVar24)->_writer->klass->vtable).
                      WriteStartArray.method)();
            pOVar35 = PrefabPool::PrefabPool_get_MVPulseBoxPrefab
                                ((PrefabPool *)schema,(MethodInfo *)0x0);
            if (pOVar35 != (ObjectPrefab *)0x0) {
              pIVar40 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)func_?();
              uStack_1 = 0;
              pIStack_19 = pIVar40;
              while (pIVar40 != (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0) {
                cVar23 = func_?();
                if (cVar23 == '\0') {
                  pIStack_12 = (Il2CppImage *)0x0;
                  *puStack_14 = 0x348;
                  uStack_1 = 0xffffffff;
                  if (pIVar40 != (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)0x0) {
                    func_?();
                  }
                  if (iStack_6 != 0) goto code_?;
                  if (((pIStack_12 != (Il2CppImage *)0xffffffff) &&
                      (puStack_14[(int)pIStack_12] == 0x348)) && (-1 < (int)pIStack_12)) {
                    pIStack_12 = (Il2CppImage *)&pIStack_12[-1].field_0x2b;
                  }
                  pJVar30 = (this->fields)._writer;
                  if (pJVar30 != (JsonWriter *)0x0) {
                    (*(code *)(pJVar30->klass->vtable).WriteEndArray.method)();
                    goto code_?;
                  }
                  break;
                }
                pIStack_12 = (pIVar40->_0).image;
                uVar18 = 0;
                pIStack_25 = (Il2CppImage *)0x0;
                uVar20 = *(ushort *)((int)&pIStack_12[4].nameNoExt + 2);
                pIStack_16 = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)(uint)uVar20;
                if (uVar20 != 0) {
                  do {
                    pIVar40 = pIStack_19;
                    pIVar24 = pIStack_17;
                    if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)
                         (pIStack_12[2].name + (uint)uVar18 * 8) ==
                        TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                       ) {
                      pIVar26 = (pIStack_19->_0).image;
                      puVar41 = &pIVar26[4].exportedTypeCount +
                                *(int *)(pIVar26[2].name + (uint)uVar18 * 8 + 4) * 2;
                      goto code_?;
                    }
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < uVar20);
                }
                puVar41 = (uint32_t *)func_?();
code_?:
                pIStack_25 = (Il2CppImage *)(*(code *)*puVar41)();
                pIStack_12 = (pIVar24->_0).image;
                func_?();
                if (pIStack_25 == (Il2CppImage *)0x0) break;
                (*(code *)(((String__Class *)pIStack_25->name)->vtable).
                          System_Collections_IEnumerable_GetEnumerator.method)(pIStack_25);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
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
  puStack_4 = &stack0xffffffd0;
  puVar5 = &stack0xffffffd0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  if (properties == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  puStack_7 = (undefined4 *)&stack0xffffffd0;
  puStack_4 = &stack0xffffffd0;
  if (writer != (JsonWriter *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffd0;
    puStack_4 = &stack0xffffffd0;
    (*(code *)(writer->klass->vtable).WritePropertyName.method)
              (writer,propertyName,(writer->klass->vtable).WriteEnd.methodPtr);
    (*(code *)(writer->klass->vtable).WriteStartObject.method)
              (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
    piVar8 = (int *)func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                                    ,properties);
    uStack_1 = 0;
    while (piVar8 != (int *)0x0) {
      cVar9 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar8);
      properties = (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)
                   TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
      ;
      if (cVar9 == '\0') {
        properties = (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)0x0;
        *puStack_7 = 0x5d;
        uStack_1 = 0xffffffff;
        if (piVar8 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar8);
        }
        if (writer != (JsonWriter *)0x0) {
          (*(code *)(writer->klass->vtable).WriteEndObject.method)
                    (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
          goto code_?;
        }
        break;
      }
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar8 + 0xb6);
      if (uVar11 != 0) {
        iVar12 = *(int *)(*piVar8 + 0x58);
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchema___Class
                **)(iVar12 + (uint)uVar10 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
             ) {
            puVar13 = (undefined4 *)(*piVar8 + (*(int *)(iVar12 + 4 + (uint)uVar10 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar13 = (undefined4 *)
               func_?(piVar8,
                               TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                               ,0);
code_?:
      uStack_6 = (*(code *)*puVar13)(piVar8,puVar13[1]);
      uVar14 = func_?(&uStack_6,
                              MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>__get_Key__
                             );
      (*(code *)(writer->klass->vtable).WritePropertyName.method)
                (writer,uVar14,(writer->klass->vtable).WriteEnd.methodPtr);
      schema = (JsonSchema *)
               func_?(&uStack_6,
                               MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>__get_Value__
                              );
      JsonSchemaWriter_ReferenceOrWriteSchema(this,schema,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  func_?(properties,0,0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void WriteType(String, JsonWriter, JsonSchemaType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter_WriteType
               (JsonSchemaWriter *this,String *propertyName,JsonWriter *writer,
               JsonSchemaType__Enum type,MethodInfo *method)

{
  pLVar1 = (List_1_UnityEngine_Vector4_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  handle = TypeRef__Newtonsoft__Json__Schema__JsonSchemaType;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaType,&stack0xffffffe8);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::Enum::Enum_IsDefined(enumType,value,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    source = Json::Utilities::EnumUtils::EnumUtils_GetFlagsValues
                       (type,
                        System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetFlagsValues<Newtonsoft::Json::Schema::JsonSchemaType>_Newtonsoft__Json__Schema__JsonSchemaType_
                       );
    if (TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter->static_fields->__f__am_cache0 ==
        (Func_2_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__Schema__JsonSchemaWriter___WriteType_m__0_Newtonsoft__Json__Schema__JsonSchemaType_
                 ,
                 MethodInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaType,_bool>__Func_System__Object__void__
                );
      TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter->static_fields->__f__am_cache0 =
           (Func_2_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_ *)this_00;
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                          ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                            *)TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter->static_fields->
                              __f__am_cache0,
                           System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__Where<Newtonsoft::Json::Schema::JsonSchemaType>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>__System__Func<Newtonsoft::Json::Schema::JsonSchemaType,_bool>_
                          );
    pLVar3 = (List_1_Newtonsoft_Json_Schema_JsonSchemaType___Class *)&UNK_?;
    this_01 = (List_1_UnityEngine_Vector4_ *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)source_00,
                         System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchemaType>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaType>_
                        );
  }
  else {
    pLVar3 = TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>
    ;
    this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
    pLVar1 = this_01;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>__List__
              );
    if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_01,type,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaType>__Add_Newtonsoft__Json__Schema__JsonSchemaType_
              );
  }
  if (this_01 != (List_1_UnityEngine_Vector4_ *)0x0) {
    iVar4 = func_?();
    if (iVar4 == 0) {
code_?:
      *unaff_FS_OFFSET = pLVar1;
      return;
    }
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WritePropertyName.method)();
      iVar4 = func_?();
      if (iVar4 == 1) {
        uVar5 = 0;
        uVar6._0_1_ = (this_01->klass->_1).rank;
        uVar6._1_1_ = (this_01->klass->_1).minimumAlignment;
        if (uVar6 != 0) {
          do {
            if (this_01->klass->interfaceOffsets[uVar5].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaType>
               ) {
              ppMVar7 = &(&((List_1_UseInteractor___VTable *)&this_01->klass->vtable)->ToString)
                          [this_01->klass->interfaceOffsets[uVar5].offset].method;
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        ppMVar7 = (MethodInfo **)func_?();
code_?:
        JVar8 = (*(code *)*ppMVar7)();
        pLVar1 = (List_1_UnityEngine_Vector4_ *)
                  JsonSchemaBuilder::JsonSchemaBuilder_MapType_1(JVar8,(MethodInfo *)0x0);
        (*(code *)(writer->klass->vtable).WriteValue.method)();
        goto code_?;
      }
      (*(code *)(writer->klass->vtable).WriteStartArray.method)();
      uVar9 = 0;
      piVar10 = (int *)func_?();
      while (piVar10 != (int *)0x0) {
        cVar11 = func_?();
        if (cVar11 == '\0') {
          (pLVar3->_0).image = (Il2CppImage *)0xd0;
          if (piVar10 != (int *)0x0) {
            func_?();
          }
          if (writer != (JsonWriter *)0x0) {
            (*(code *)(writer->klass->vtable).WriteEndArray.method)();
            *unaff_FS_OFFSET = uVar9;
            return;
          }
          break;
        }
        uVar5 = 0;
        uVar6 = *(ushort *)(*piVar10 + 0xb6);
        if (uVar6 != 0) {
          iVar4 = *(int *)(*piVar10 + 0x58);
          do {
            if (*(IEnumerator_1_Newtonsoft_Json_Schema_JsonSchemaType___Class **)
                 (iVar4 + (uint)uVar5 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaType>
               ) {
              puVar12 = (undefined4 *)(*piVar10 + (*(int *)(iVar4 + 4 + (uint)uVar5 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        puVar12 = (undefined4 *)func_?();
code_?:
        JVar8 = (*(code *)*puVar12)();
        JsonSchemaBuilder::JsonSchemaBuilder_MapType_1(JVar8,(MethodInfo *)0x0);
        (*(code *)(writer->klass->vtable).WriteValue.method)();
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean <WriteType>m__0(JsonSchemaType) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::
     JsonSchemaWriter__WriteType_m__0(JsonSchemaType__Enum v,MethodInfo *method)

{
  return v != JsonSchemaType__Enum_None;
}


/* JsonSchemaWriter(JsonWriter, JsonSchemaResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter__ctor
               (JsonSchemaWriter *this,JsonWriter *writer,JsonSchemaResolver *resolver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)writer,StringLiteral_writer,(MethodInfo *)0x0);
  (this->fields)._writer = writer;
  (this->fields)._resolver = resolver;
  return;
}

