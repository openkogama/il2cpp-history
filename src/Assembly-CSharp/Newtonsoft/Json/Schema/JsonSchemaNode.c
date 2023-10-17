
/* JsonSchemaNode Combine(JsonSchema) */

JsonSchemaNode *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode_Combine
          (JsonSchemaNode *this,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonSchemaNode *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
  if (pJVar1 != (JsonSchemaNode *)0x0) {
    JsonSchemaNode__ctor_1(pJVar1,this,schema,(MethodInfo *)0x0);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonSchemaNode *)(*pcVar2)();
  return pJVar1;
}


/* String GetId(IEnumerable`1[Newtonsoft.Json.Schema.JsonSchema]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode_GetId
                   (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *schemata,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Linq__IOrderedEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__OrderBy<System::String,_System::String>_System__Collections__Generic__IEnumerable<System::String>__System__Func<System::String,_System::String>__System__Collections__Generic__IComparer<System::String>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<Newtonsoft::Json::Schema::JsonSchema,_System::String>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchema,_System::String>_
                   );
    func_?(&
                    System__String__MethodInfo__System__Linq__Enumerable__ToArray<System::String>_System__Collections__Generic__IEnumerable<System::String>_____
                   );
    func_?(&TypeInfo__System__Func<System::String,_System::String>);
    func_?(&TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchema,_System::String>);
    func_?(&TypeInfo__System__StringComparer);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c___GetId_b__27_0_Newtonsoft__Json__Schema__JsonSchema_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c___GetId_b__27_1_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c);
  }
  pSVar1 = ::StringLiteral__;
  this = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->__9__27_0;
  if (this == (Func_2_Newtonsoft_Json_Schema_JsonSchema_String_ *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->_1).cctor_finished_or_no_cctor ==
        0) {
      func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c);
    }
    pJVar2 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->__9;
    this = (Func_2_Newtonsoft_Json_Schema_JsonSchema_String_ *)
           func_?(
                          TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchema,_System::String>
                          );
    if (this == (Func_2_Newtonsoft_Json_Schema_JsonSchema_String_ *)0x0) goto code_?;
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]::
    RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
              ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this,(Object *)pJVar2,
               MethodInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c___GetId_b__27_0_Newtonsoft__Json__Schema__JsonSchema_
               ,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->__9__27_0 = this;
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->
                     __9__27_0,this);
  }
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_3
                     ((IEnumerable_1_System_Object_ *)schemata,(Func_2_Object_Object_ *)this,
                      System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<Newtonsoft::Json::Schema::JsonSchema,_System::String>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchema,_System::String>_
                     );
  if ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c);
  }
  this_00 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->__9__27_1;
  if (this_00 == (Func_2_String_String_ *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->_1).cctor_finished_or_no_cctor ==
        0) {
      func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c);
    }
    pJVar2 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->__9;
    this_00 = (Func_2_String_String_ *)
              func_?(TypeInfo__System__Func<System::String,_System::String>);
    if (this_00 == (Func_2_String_String_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar3)();
      return pSVar1;
    }
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]::
    RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
              ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_00,(Object *)pJVar2
               ,
               MethodInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c___GetId_b__27_1_System__String_
               ,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->__9__27_1 = this_00;
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->
                     __9__27_1,this_00);
  }
  if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__StringComparer);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__StringComparer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__StringComparer);
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_4
                        (source,(Func_2_Object_Object_ *)this_00,
                         (IComparer_1_System_Object_ *)
                         TypeInfo__System__StringComparer->static_fields->s_ordinal,
                         System__Linq__IOrderedEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__OrderBy<System::String,_System::String>_System__Collections__Generic__IEnumerable<System::String>__System__Func<System::String,_System::String>__System__Collections__Generic__IComparer<System::String>_
                        );
  value = (String__Array *)
          System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                    ((IEnumerable_1_System_Object_ *)source_00,
                     System__String__MethodInfo__System__Linq__Enumerable__ToArray<System::String>_System__Collections__Generic__IEnumerable<System::String>_____
                    );
  pSVar1 = mscorlib.dll::System::String::String_Join(pSVar1,value,(MethodInfo *)0x0);
  return pSVar1;
}


/* JsonSchemaNode(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode__ctor
               (JsonSchemaNode *this,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>
                   );
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__ReadOnlyCollection_System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>_
                   );
    func_?(&
                    TypeInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  list = (IList_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
  if (list == (IList_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
    func_?();
  }
  else {
    if (schema == (JsonSchema *)0x0) {
code_?:
      if (list[1].monitor == (MonitorData *)0x0) goto code_?;
      list[2].klass = (IList_1_UnityEngine_UnitySynchronizationContext_WorkRequest___Class *)schema;
      func_?(list + 2,schema);
      this_00 = (ReadOnlyCollection_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(
                               TypeInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>
                               );
      if (this_00 !=
          (ReadOnlyCollection_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        ReadOnlyCollection_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor
                  (this_00,list,
                   MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__ReadOnlyCollection_System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>_
                  );
        (this->fields)._Schemas_k__BackingField =
             (ReadOnlyCollection_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
        func_?(&(this->fields)._Schemas_k__BackingField,this_00);
        pDVar1 = (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                                );
        if (pDVar1 != (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pDVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary__
                    );
          (this->fields)._Properties_k__BackingField = pDVar1;
          func_?(&(this->fields)._Properties_k__BackingField,pDVar1);
          pDVar1 = (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                                  );
          if (pDVar1 != (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)pDVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary__
                      );
            (this->fields)._PatternProperties_k__BackingField = pDVar1;
            func_?(&(this->fields)._PatternProperties_k__BackingField,pDVar1);
            this_01 = (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>
                                     );
            if (this_01 != (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
              LowLevelList_1_System_Object___ctor
                        ((LowLevelList_1_System_Object_ *)this_01,
                         MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__List__
                        );
              (this->fields)._Items_k__BackingField = this_01;
              func_?(&(this->fields)._Items_k__BackingField,this_01);
              pSVar2 = JsonSchemaNode_GetId
                                 ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                                  (this->fields)._Schemas_k__BackingField,(MethodInfo *)0x0);
              (this->fields)._Id_k__BackingField = pSVar2;
              func_?(&this->fields,pSVar2);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    iVar3 = func_?(schema,(list->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JsonSchemaNode(JsonSchemaNode, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode__ctor_1
               (JsonSchemaNode *this,JsonSchemaNode *source,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary_System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                   );
    func_?(&
                    System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__Union<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__List_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaNode>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>
                   );
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__ReadOnlyCollection_System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>_
                   );
    func_?(&
                    TypeInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (source == (JsonSchemaNode *)0x0) {
code_?:
    func_?();
  }
  else {
    first = (source->fields)._Schemas_k__BackingField;
    pIVar1 = (IEnumerable_1_System_Object_ *)
             func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
    if (pIVar1 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    if ((schema == (JsonSchema *)0x0) ||
       (iVar2 = func_?(schema,(pIVar1->klass->_0).element_class), iVar2 != 0)) {
      if (pIVar1[1].monitor == (MonitorData *)0x0) goto code_?;
      pIVar1[2].klass = (IEnumerable_1_System_Object___Class *)schema;
      func_?(pIVar1 + 2,schema);
      pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Union
                         ((IEnumerable_1_System_Object_ *)first,pIVar1,
                          System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__Union<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                         );
      list = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                       (pIVar1,
                        System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                       );
      this_00 = (ReadOnlyCollection_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(
                               TypeInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>
                               );
      if (this_00 !=
          (ReadOnlyCollection_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        ReadOnlyCollection_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor
                  (this_00,(IList_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)list,
                   MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__ReadOnlyCollection_System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>_
                  );
        (this->fields)._Schemas_k__BackingField =
             (ReadOnlyCollection_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
        func_?(&(this->fields)._Schemas_k__BackingField,this_00);
        pDVar3 = (source->fields)._Properties_k__BackingField;
        pDVar4 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                                   );
        if (pDVar4 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
          ::Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
                    (pDVar4,(IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)pDVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary_System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>_
                    );
          (this->fields)._Properties_k__BackingField =
               (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)pDVar4;
          func_?(&(this->fields)._Properties_k__BackingField,pDVar4);
          pDVar3 = (source->fields)._PatternProperties_k__BackingField;
          pDVar4 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)func_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                                     );
          if (pDVar4 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
                      (pDVar4,(IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)pDVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary_System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>_
                      );
            (this->fields)._PatternProperties_k__BackingField =
                 (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)pDVar4;
            func_?(&(this->fields)._PatternProperties_k__BackingField,pDVar4);
            collection = (source->fields)._Items_k__BackingField;
            this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>
                                     );
            if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                        (this_01,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                  *)collection,
                         MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__List_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaNode>_
                        );
              (this->fields)._Items_k__BackingField =
                   (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)this_01;
              func_?(&(this->fields)._Items_k__BackingField,this_01);
              pJVar5 = (source->fields)._AdditionalProperties_k__BackingField;
              (this->fields)._AdditionalProperties_k__BackingField = pJVar5;
              func_?(&(this->fields)._AdditionalProperties_k__BackingField,pJVar5);
              pSVar6 = JsonSchemaNode_GetId
                                 ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                                  (this->fields)._Schemas_k__BackingField,(MethodInfo *)0x0);
              (this->fields)._Id_k__BackingField = pSVar6;
              func_?(&this->fields,pSVar6);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar7 = func_?(0);
  func_?(uVar7);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

