
/* Void AddAdditionalProperties(JsonSchemaNode, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
     JsonSchemaModelBuilder_AddAdditionalProperties
               (JsonSchemaModelBuilder *this,JsonSchemaNode *parentNode,JsonSchema *schema,
               MethodInfo *method)

{
  if (parentNode != (JsonSchemaNode *)0x0) {
    pJVar1 = JsonSchemaModelBuilder_AddSchema
                       (this,(parentNode->fields)._AdditionalProperties_k__BackingField,schema,
                        (MethodInfo *)0x0);
    (parentNode->fields)._AdditionalProperties_k__BackingField = pJVar1;
    func_?(&(parentNode->fields)._AdditionalProperties_k__BackingField,pJVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddItem(JsonSchemaNode, Int32, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
     JsonSchemaModelBuilder_AddItem
               (JsonSchemaModelBuilder *this,JsonSchemaNode *parentNode,int32_t index,
               JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__set_Item_int__Newtonsoft__Json__Schema__JsonSchemaNode_
                   );
    cRam_? = '\x01';
  }
  if ((parentNode != (JsonSchemaNode *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (parentNode->fields)._Items_k__BackingField,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    if (index < (this_00->fields)._size) {
      existingNode = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (this_00,index,
                                MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                               );
    }
    else {
      existingNode.First = 0;
      existingNode.Last = 0;
    }
    item = JsonSchemaModelBuilder_AddSchema
                     (this,(JsonSchemaNode *)existingNode,schema,(MethodInfo *)0x0);
    this_01 = (parentNode->fields)._Items_k__BackingField;
    if (this_01 != (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
      if (index < (this_01->fields)._size) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__set_Item
                  ((List_1_System_Object_ *)this_01,index,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__set_Item_int__Newtonsoft__Json__Schema__JsonSchemaNode_
                  );
        return;
      }
      if (this_01 != (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddProperties(IDictionary`2[System.String,Newtonsoft.Json.Schema.JsonSchema],
   IDictionary`2[System.String,Newtonsoft.Json.Schema.JsonSchemaNode]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
     JsonSchemaModelBuilder_AddProperties
               (JsonSchemaModelBuilder *this,
               IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *source,
               IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *target,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff98;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff98;
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
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  if (source == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
  piStack_8 = (int *)func_?(0,
                                      TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                                      ,source);
  uStack_2 = 1;
  while (piStack_8 != (int *)0x0) {
    cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_8);
    if (cVar9 == '\0') {
      uStack_2 = 0xffffffff;
      if (piStack_8 != (int *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,piStack_8);
      }
      goto code_?;
    }
    piStack_10 = piStack_8;
    if (piStack_8 == (int *)0x0) break;
    iStack_11 = *piStack_8;
    uVar12 = 0;
    if (*(ushort *)(iStack_11 + 0xb2) != 0) {
      do {
        if (*(IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchema___Class
              **)(*(int *)(iStack_11 + 0x58) + (uint)uVar12 * 8) ==
            TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
           ) {
          puVar13 = (undefined4 *)
                   (*(int *)(*(int *)(iStack_11 + 0x58) + 4 + (uint)uVar12 * 8) * 8 + 0xbc +
                   iStack_11);
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(iStack_11 + 0xb2));
    }
    puVar13 = (undefined4 *)
             func_?(piStack_8,
                             TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                             ,0);
code_?:
    uVar14 = (*(code *)*puVar13)(piStack_10,puVar13[1]);
    iStack_11 = (int)uVar14;
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                     );
      cRam_? = '\x01';
    }
    pJStack_15 = (JsonSchemaNode *)0x0;
    if (target == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) break;
    piStack_10 = (int *)0x0;
    uVar12 = (target->klass->_1).interface_offsets_count;
    if (uVar12 != 0) {
      do {
        if (target->klass->interfaceOffsets[(uint)piStack_10 & 0xffff].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
           ) {
          pVVar16 = &(target->klass->vtable).TryGetValue +
                   target->klass->interfaceOffsets[(uint)piStack_10 & 0xffff].offset;
          goto code_?;
        }
        piStack_10 = (int *)((int)piStack_10 + 1);
      } while ((ushort)piStack_10 < uVar12);
    }
    pVVar16 = (VirtualInvokeData *)
             func_?(target,
                             TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                             ,7);
code_?:
    (*pVVar16->methodPtr)(target,iStack_11,&pJStack_15,pVVar16->method);
    JsonSchemaModelBuilder_AddSchema
              (this,pJStack_15,(JsonSchema *)((ulonglong)uVar14 >> 0x20),(MethodInfo *)0x0);
    piStack_10 = (int *)0x0;
    uVar12 = (target->klass->_1).interface_offsets_count;
    if (uVar12 != 0) {
      do {
        if (target->klass->interfaceOffsets[(uint)piStack_10 & 0xffff].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
           ) {
          pVVar16 = &(target->klass->vtable).set_Item +
                   target->klass->interfaceOffsets[(uint)piStack_10 & 0xffff].offset;
          goto code_?;
        }
        piStack_10 = (int *)((int)piStack_10 + 1);
      } while ((ushort)piStack_10 < uVar12);
    }
    pVVar16 = (VirtualInvokeData *)func_?();
code_?:
    (*pVVar16->methodPtr)();
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void AddProperty(IDictionary`2[System.String,Newtonsoft.Json.Schema.JsonSchemaNode], String,
   JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
     JsonSchemaModelBuilder_AddProperty
               (JsonSchemaModelBuilder *this,
               IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *target,
               String *propertyName,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                   );
    cRam_? = '\x01';
  }
  pMStack_1 = (MethodInfo *)0x0;
  if (target == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  uVar4 = (target->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (target->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
         ) {
        pVVar5 = &(target->klass->vtable).TryGetValue +
                 target->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)
           func_?(target,
                           TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                           ,7);
code_?:
  (*pVVar5->methodPtr)(target,propertyName,&pMStack_1,pVVar5->method);
  pJVar6 = JsonSchemaModelBuilder_AddSchema
                     (this,(JsonSchemaNode *)pMStack_1,schema,(MethodInfo *)0x0);
  uVar3 = 0;
  uVar4 = (target->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (target->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
         ) {
        pVVar5 = &(target->klass->vtable).set_Item + target->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pMStack_1 = (MethodInfo *)0x1;
  pVVar5 = (VirtualInvokeData *)
           func_?(target,
                           TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                          );
code_?:
  pMStack_1 = pVVar5->method;
  (*pVVar5->methodPtr)(target,propertyName,pJVar6);
  return;
}


/* JsonSchemaNode AddSchema(JsonSchemaNode, JsonSchema) */

JsonSchemaNode *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
JsonSchemaModelBuilder_AddSchema
          (JsonSchemaModelBuilder *this,JsonSchemaNode *existingNode,JsonSchema *schema,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__Union<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Contains_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__Contains_Newtonsoft__Json__Schema__JsonSchema_
                   );
    cRam_? = '\x01';
  }
  if (existingNode == (JsonSchemaNode *)0x0) {
    schemata = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
               func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
    if (schemata == (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
code_?:
      func_?();
    }
    else if ((schema == (JsonSchema *)0x0) ||
            (iVar1 = func_?(schema,(schemata->klass->_0).element_class), iVar1 != 0)) {
      if (schemata[1].monitor == (MonitorData *)0x0) goto code_?;
      schemata[2].klass = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema___Class *)schema;
      func_?(schemata + 2,schema);
code_?:
      key = JsonSchemaNode::JsonSchemaNode_GetId(schemata,(MethodInfo *)0x0);
      pJVar2 = (this->fields)._nodes;
      if (pJVar2 != (JsonSchemaNodeCollection *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::
                Object,System::Object]::KeyedCollection_2_System_Object_System_Object__Contains
                          ((KeyedCollection_2_System_Object_System_Object_ *)pJVar2,(Object *)key,
                           MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Contains_System__String_
                          );
        if (bVar3 == 0) {
          if (existingNode == (JsonSchemaNode *)0x0) {
            pJVar4 = (JsonSchemaNode *)
                     func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
            if (pJVar4 != (JsonSchemaNode *)0x0) {
              JsonSchemaNode::JsonSchemaNode__ctor(pJVar4,schema,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          else {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
              cRam_? = '\x01';
            }
            pJVar4 = (JsonSchemaNode *)
                     func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
            if (pJVar4 != (JsonSchemaNode *)0x0) {
              JsonSchemaNode::JsonSchemaNode__ctor_1(pJVar4,existingNode,schema,(MethodInfo *)0x0);
code_?:
              pJVar2 = (this->fields)._nodes;
              if (((pJVar2 != (JsonSchemaNodeCollection *)0x0) &&
                  (mscorlib.dll::System::Collections::ObjectModel::Collection`1[System::Object]::
                   Collection_1_System_Object__Add
                             ((Collection_1_System_Object_ *)pJVar2,(Object *)pJVar4,
                              MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                             ), schema != (JsonSchema *)0x0)) && (pJVar4 != (JsonSchemaNode *)0x0))
              {
                JsonSchemaModelBuilder_AddProperties
                          (this,(schema->fields)._Properties_k__BackingField,
                           (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                           (pJVar4->fields)._Properties_k__BackingField,(MethodInfo *)0x0);
                JsonSchemaModelBuilder_AddProperties
                          (this,(schema->fields)._PatternProperties_k__BackingField,
                           (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                           (pJVar4->fields)._PatternProperties_k__BackingField,(MethodInfo *)0x0);
                if ((schema->fields)._Items_k__BackingField ==
                    (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
code_?:
                  if ((schema->fields)._AdditionalProperties_k__BackingField != (JsonSchema *)0x0) {
                    pJVar5 = JsonSchemaModelBuilder_AddSchema
                                        (this,(pJVar4->fields)._AdditionalProperties_k__BackingField
                                         ,(schema->fields)._AdditionalProperties_k__BackingField,
                                         (MethodInfo *)0x0);
                    (pJVar4->fields)._AdditionalProperties_k__BackingField = pJVar5;
                    func_?(&(pJVar4->fields)._AdditionalProperties_k__BackingField,pJVar5)
                    ;
                  }
                  if ((schema->fields)._Extends_k__BackingField != (JsonSchema *)0x0) {
                    pJVar4 = JsonSchemaModelBuilder_AddSchema
                                       (this,pJVar4,(schema->fields)._Extends_k__BackingField,
                                        (MethodInfo *)0x0);
                  }
                  return pJVar4;
                }
                iStack_6 = 0;
                while (pIVar7 = (schema->fields)._Items_k__BackingField,
                      pIVar7 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
                  pIVar8 = pIVar7->klass;
                  uVar9 = 0;
                  uVar10 = (pIVar8->_1).interface_offsets_count;
                  if (uVar10 != 0) {
                    do {
                      if (pIVar8->interfaceOffsets[uVar9].interfaceType ==
                          (Il2CppClass *)
                          TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                         ) {
                        pVVar11 = &(pIVar8->vtable).get_Item +
                                 pIVar8->interfaceOffsets[uVar9].offset;
                        goto code_?;
                      }
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < uVar10);
                  }
                  pVVar11 = (VirtualInvokeData *)
                           func_?(pIVar7,
                                           TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                                           ,0);
code_?:
                  iVar1 = (*pVVar11->methodPtr)(pIVar7,pVVar11->method);
                  if (iVar1 <= iStack_6) goto code_?;
                  pIVar7 = (schema->fields)._Items_k__BackingField;
                  if (pIVar7 == (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) break;
                  pIVar8 = pIVar7->klass;
                  uVar9 = 0;
                  uVar10 = (pIVar8->_1).interface_offsets_count;
                  if (uVar10 != 0) {
                    do {
                      if (pIVar8->interfaceOffsets[uVar9].interfaceType ==
                          (Il2CppClass *)
                          TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                         ) {
                        pVVar11 = &(pIVar8->vtable).get_Item +
                                 pIVar8->interfaceOffsets[uVar9].offset;
                        goto code_?;
                      }
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < uVar10);
                  }
                  pVVar11 = (VirtualInvokeData *)
                           func_?(pIVar7,
                                           TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                                           ,0);
code_?:
                  schema_00 = (JsonSchema *)(*pVVar11->methodPtr)(pIVar7,iStack_6,pVVar11->method);
                  if (cRam_? == '\0') {
                    func_?(&
                                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                                   );
                    func_?(&
                                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Count__
                                   );
                    func_?(&
                                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                                   );
                    func_?(&
                                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__set_Item_int__Newtonsoft__Json__Schema__JsonSchemaNode_
                                   );
                    cRam_? = '\x01';
                  }
                  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (pJVar4->fields)._Items_k__BackingField;
                  if (this_01 ==
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                  break;
                  if (iStack_6 < (this_01->fields)._size) {
                    existingNode_00 =
                         mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_01,iStack_6,
                                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                                   );
                  }
                  else {
                    existingNode_00.First = 0;
                    existingNode_00.Last = 0;
                  }
                  pJVar5 = JsonSchemaModelBuilder_AddSchema
                                      (this,(JsonSchemaNode *)existingNode_00,schema_00,
                                       (MethodInfo *)0x0);
                  this_02 = (pJVar4->fields)._Items_k__BackingField;
                  if (this_02 == (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) break;
                  if (iStack_6 < (this_02->fields)._size) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__set_Item
                              ((List_1_System_Object_ *)this_02,iStack_6,(Object *)pJVar5,
                               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__set_Item_int__Newtonsoft__Json__Schema__JsonSchemaNode_
                              );
                    iStack_6 = iStack_6 + 1;
                  }
                  else {
                    if (this_02 == (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) break;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)this_02,(Object *)pJVar5,
                               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                              );
                    iStack_6 = iStack_6 + 1;
                  }
                }
              }
            }
          }
        }
        else {
          pJVar2 = (this->fields)._nodes;
          if (pJVar2 != (JsonSchemaNodeCollection *)0x0) {
            pJVar4 = (JsonSchemaNode *)
                     mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::
                     Object,System::Object]::KeyedCollection_2_System_Object_System_Object__get_Item
                               ((KeyedCollection_2_System_Object_System_Object_ *)pJVar2,
                                (Object *)key,
                                MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_System__String_
                               );
            return pJVar4;
          }
        }
      }
      goto code_?;
    }
    uVar12 = func_?(0);
    func_?(uVar12);
  }
  else {
    this_00 = (ReadOnlyCollection_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (existingNode->fields)._Schemas_k__BackingField;
    if (this_00 ==
        (ReadOnlyCollection_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    bVar3 = mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[System::Text::
            RegularExpressions::RegexCharClass+SingleRange]::
            ReadOnlyCollection_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (this_00,(RegexCharClass_SingleRange)schema,
                       MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__Contains_Newtonsoft__Json__Schema__JsonSchema_
                      );
    if (bVar3 != 0) {
      return existingNode;
    }
    first = (existingNode->fields)._Schemas_k__BackingField;
    second = (IEnumerable_1_System_Object_ *)
             func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
    if (second == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    if ((schema == (JsonSchema *)0x0) ||
       (iVar1 = func_?(schema,(second->klass->_0).element_class), iVar1 != 0)) {
      if (second[1].monitor == (MonitorData *)0x0) goto code_?;
      second[2].klass = (IEnumerable_1_System_Object___Class *)schema;
      func_?(second + 2,schema);
      schemata = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                 System.Core.dll::System::Linq::Enumerable::Enumerable_Union
                           ((IEnumerable_1_System_Object_ *)first,second,
                            System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__Union<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                           );
      goto code_?;
    }
  }
  uVar12 = func_?(0);
  func_?(uVar12);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pJVar4 = (JsonSchemaNode *)(*pcVar13)();
  return pJVar4;
}


/* JsonSchemaModel Build(JsonSchema) */

JsonSchemaModel *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::JsonSchemaModelBuilder_Build
          (JsonSchemaModelBuilder *this,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNodeCollection);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaNodeCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNodeCollection);
  if (this_00 != (JsonSchemaNodeCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__KeyedCollection__
                     );
      cRam_? = '\x01';
    }
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__KeyedCollection__
              );
    (this->fields)._nodes = this_00;
    func_?(&this->fields,this_00);
    pJVar1 = JsonSchemaModelBuilder_AddSchema(this,(JsonSchemaNode *)0x0,schema,(MethodInfo *)0x0);
    (this->fields)._node = pJVar1;
    func_?(&(this->fields)._node,pJVar1);
    this_01 = (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>
                                );
    if (this_01 !=
        (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
         *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                );
      (this->fields)._nodeModels = this_01;
      func_?(&(this->fields)._nodeModels,this_01);
      pJVar2 = JsonSchemaModelBuilder_BuildNodeModel(this,(this->fields)._node,(MethodInfo *)0x0);
      return pJVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar2 = (JsonSchemaModel *)(*pcVar3)();
  return pJVar2;
}


/* JsonSchemaModel BuildNodeModel(JsonSchemaNode) */

JsonSchemaModel *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
JsonSchemaModelBuilder_BuildNodeModel
          (JsonSchemaModelBuilder *this,JsonSchemaNode *node,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pcStack_2 = &DAT_?;
  pIStack_3 = (InvokerMethod)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppMethodPointer)&stack0xffffff8c;
  pIVar5 = (Il2CppMethodPointer)&stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__TryGetValue_Newtonsoft__Json__Schema__JsonSchemaNode__Newtonsoft__Json__Schema__JsonSchemaModel__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__set_Item_Newtonsoft__Json__Schema__JsonSchemaNode__Newtonsoft__Json__Schema__JsonSchemaModel_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Current__
                   );
    in_stack_6 =
         &
         TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
    ;
    func_?();
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  pJStack_7 = (JsonSchemaModel *)0x0;
  pDVar8 = (this->fields)._nodeModels;
  if (pDVar8 != (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
                 *)0x0) {
    method_00 = (MethodInfo *)&pJStack_7;
    bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar8,(Object *)node,
                       (Object **)method_00,
                       MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__TryGetValue_Newtonsoft__Json__Schema__JsonSchemaNode__Newtonsoft__Json__Schema__JsonSchemaModel__
                      );
    if (bVar9 != 0) {
code_?:
      *unaff_FS_OFFSET = pIStack_3;
      return pJStack_7;
    }
    if (node != (JsonSchemaNode *)0x0) {
      pJStack_7 = JsonSchemaModel::JsonSchemaModel_Create
                             ((IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                              (node->fields)._Schemas_k__BackingField,(MethodInfo *)0x0);
      pDVar8 = (this->fields)._nodeModels;
      if (pDVar8 != (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar8,(Object *)node,
                   (Object *)pJStack_7,
                   MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__set_Item_Newtonsoft__Json__Schema__JsonSchemaNode__Newtonsoft__Json__Schema__JsonSchemaModel_
                  );
        pDVar10 = (node->fields)._Properties_k__BackingField;
        if (pDVar10 != (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff98,(Dictionary_2_System_Object_System_Object_ *)pDVar10,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__GetEnumerator__
                              );
          uVar12 = *(undefined8 *)&(pDVar11->_current).value;
          pIStack_1 = (Il2CppClass *)0x1;
          while( true ) {
            bVar9 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffffb0,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__MoveNext__
                              );
            pJVar13 = pJStack_7;
            if (bVar9 == 0) break;
            pJStack_14 = (JsonSchemaNode *)uVar12;
            if (pJStack_7 == (JsonSchemaModel *)0x0) goto code_?;
            if ((pJStack_7->fields)._Properties_k__BackingField ==
                (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
              pPVar15 = (ParameterOverride_1_System_Object_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                                       );
              if (pPVar15 == (ParameterOverride_1_System_Object_ *)0x0) goto code_?;
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        (pPVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                        );
              if (pJVar13 == (JsonSchemaModel *)0x0) goto code_?;
              (pJVar13->fields)._Properties_k__BackingField =
                   (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pPVar15;
              func_?(&(pJVar13->fields)._Properties_k__BackingField,pPVar15);
            }
            if (pJStack_7 == (JsonSchemaModel *)0x0) goto code_?;
            pIVar16 = (pJStack_7->fields)._Properties_k__BackingField;
            JsonSchemaModelBuilder_BuildNodeModel(this,pJStack_14,(MethodInfo *)0x0);
            if (pIVar16 == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0
               ) goto code_?;
            method_00 = (MethodInfo *)0x1;
            func_?(1,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                           );
          }
          pIStack_1 = (Il2CppClass *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffb0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          pIStack_1 = (Il2CppClass *)0xffffffff;
          pDVar10 = (node->fields)._PatternProperties_k__BackingField;
          if (pDVar10 != (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
            pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *
                                 )&stack0xffffff98,
                                 (Dictionary_2_System_Object_System_Object_ *)pDVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__GetEnumerator__
                                );
            uVar12 = *(undefined8 *)&(pDVar11->_current).value;
            pIStack_1 = (Il2CppClass *)0x4;
            while( true ) {
              bVar9 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *
                                 )&stack0xffffffb0,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__MoveNext__
                                );
              pJVar13 = pJStack_7;
              if (bVar9 == 0) break;
              pJStack_14 = (JsonSchemaNode *)uVar12;
              if (pJStack_7 == (JsonSchemaModel *)0x0) goto code_?;
              if ((pJStack_7->fields)._PatternProperties_k__BackingField ==
                  (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
                pPVar15 = (ParameterOverride_1_System_Object_ *)
                          func_?(
                                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                                         );
                if (pPVar15 == (ParameterOverride_1_System_Object_ *)0x0) goto code_?;
                Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                          (pPVar15,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                          );
                if (pJVar13 == (JsonSchemaModel *)0x0) goto code_?;
                (pJVar13->fields)._PatternProperties_k__BackingField =
                     (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pPVar15;
                func_?(&(pJVar13->fields)._PatternProperties_k__BackingField,pPVar15);
              }
              if (pJStack_7 == (JsonSchemaModel *)0x0) goto code_?;
              pIVar16 = (pJStack_7->fields)._PatternProperties_k__BackingField;
              JsonSchemaModelBuilder_BuildNodeModel(this,pJStack_14,(MethodInfo *)0x0);
              if (pIVar16 == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)
                            0x0) goto code_?;
              method_00 = (MethodInfo *)0x1;
              func_?(1,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                             );
            }
            pIStack_1 = (Il2CppClass *)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb0,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dispose__
                       ,method_00);
            pIStack_1 = (Il2CppClass *)0xffffffff;
            iStack_17 = 0;
            while( true ) {
              pJVar13 = pJStack_7;
              pLVar18 = (node->fields)._Items_k__BackingField;
              if (pLVar18 == (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) break;
              if ((pLVar18->fields)._size <= iStack_17) {
                if ((node->fields)._AdditionalProperties_k__BackingField == (JsonSchemaNode *)0x0)
                goto code_?;
                pJVar19 = JsonSchemaModelBuilder_BuildNodeModel
                                    (this,(node->fields)._AdditionalProperties_k__BackingField,
                                     (MethodInfo *)0x0);
                if (pJVar13 != (JsonSchemaModel *)0x0) {
                  (pJVar13->fields)._AdditionalProperties_k__BackingField = pJVar19;
                  func_?();
                  goto code_?;
                }
                break;
              }
              if (pJStack_7 == (JsonSchemaModel *)0x0) break;
              if ((pJStack_7->fields)._Items_k__BackingField ==
                  (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
                this_01 = (LowLevelList_1_System_Object_ *)
                          func_?(
                                         TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>
                                         );
                if (this_01 == (LowLevelList_1_System_Object_ *)0x0) break;
                mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
                LowLevelList_1_System_Object___ctor
                          (this_01,
                           MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List__
                          );
                if (pJVar13 == (JsonSchemaModel *)0x0) break;
                (pJVar13->fields)._Items_k__BackingField =
                     (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)this_01;
                func_?(&(pJVar13->fields)._Items_k__BackingField,this_01);
              }
              if (pJStack_7 == (JsonSchemaModel *)0x0) break;
              pIVar20 = (pJStack_7->fields)._Items_k__BackingField;
              this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (node->fields)._Items_k__BackingField;
              if (this_00 ==
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
              node_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_00,iStack_17,
                                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                                  );
              JsonSchemaModelBuilder_BuildNodeModel
                        (this,(JsonSchemaNode *)node_00,(MethodInfo *)0x0);
              if (pIVar20 == (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) break;
              func_?();
              iStack_17 = iStack_17 + 1;
            }
          }
        }
      }
    }
  }
code_?:
  uVar21 = func_?();
  uVar21 = func_?(uVar21);
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  pJVar13 = (JsonSchemaModel *)(*pcVar22)();
  return pJVar13;
}


/* JsonSchemaModelBuilder() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
     JsonSchemaModelBuilder__ctor(JsonSchemaModelBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNodeCollection);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaNodeCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNodeCollection);
  if (this_00 != (JsonSchemaNodeCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__KeyedCollection__
                     );
      cRam_? = '\x01';
    }
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__KeyedCollection__
              );
    (this->fields)._nodes = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>
                                );
    if (this_01 !=
        (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
         *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                );
      method_00 = (MethodInfo *)&(this->fields)._nodeModels;
      (this->fields)._nodeModels = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

