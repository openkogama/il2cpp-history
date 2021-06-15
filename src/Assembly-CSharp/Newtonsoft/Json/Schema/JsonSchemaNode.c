
/* JsonSchemaNode Combine(JsonSchema) */

JsonSchemaNode *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode_Combine
          (JsonSchemaNode *this,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaNode *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
  JsonSchemaNode__ctor_1(this_00,this,schema,(MethodInfo *)0x0);
  return this_00;
}


/* String GetId(IEnumerable`1[Newtonsoft.Json.Schema.JsonSchema]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode_GetId
                   (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *schemata,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  if (TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode->static_fields->__f__am_cache0 ==
      (Func_2_Newtonsoft_Json_Schema_JsonSchema_String_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchema,_System::String>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Schema__JsonSchemaNode___GetId_m__0_Newtonsoft__Json__Schema__JsonSchema_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Schema::JsonSchema,_System::String>__Func_System__Object__void__
              );
    TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode->static_fields->__f__am_cache0 =
         (Func_2_Newtonsoft_Json_Schema_JsonSchema_String_ *)pUVar2;
  }
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                     ((IEnumerable_1_System_Object_ *)schemata,
                      (Func_2_Object_Single_ *)
                      TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode->static_fields->
                      __f__am_cache0,
                      System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<Newtonsoft::Json::Schema::JsonSchema,_System::String>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchema,_System::String>_
                     );
  if (TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode->static_fields->__f__am_cache1 ==
      (Func_2_String_String_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Func<System::String,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Schema__JsonSchemaNode___GetId_m__1_System__String_,
               MethodInfo__System__Func<System::String,_System::String>__Func_System__Object__void__
              );
    TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode->static_fields->__f__am_cache1 =
         (Func_2_String_String_ *)pUVar2;
  }
  keySelector = (Func_2_Object_Single_ *)
                TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__System__StringComparer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__StringComparer->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__StringComparer);
  }
  comparer = mscorlib.dll::System::StringComparer::StringComparer_get_Ordinal((MethodInfo *)0x0);
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_20
                        ((IEnumerable_1_System_Object_ *)source,keySelector,
                         (IComparer_1_System_Single_ *)comparer,
                         System__Linq__IOrderedEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__OrderBy<System::String,_System::String>_System__Collections__Generic__IEnumerable<System::String>__System__Func<System::String,_System::String>__System__Collections__Generic__IComparer<System::String>_
                        );
  value = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                    ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source_00,
                     System__String__MethodInfo__System__Linq__Enumerable__ToArray<System::String>_System__Collections__Generic__IEnumerable<System::String>_____
                    );
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Join
                     (pSVar1,(String__Array *)value,(MethodInfo *)0x0);
  return pSVar1;
}


/* String <GetId>m__0(JsonSchema) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode__GetId_m__0
                   (JsonSchema *s,MethodInfo *method)

{
  if (s != (JsonSchema *)0x0) {
    return (s->fields)._internalId;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* JsonSchemaNode(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode__ctor
               (JsonSchemaNode *this,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  list = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)
         func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
  if (list == (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if (schema != (JsonSchema *)0x0) {
      iVar2 = func_?(schema,(list->klass->_0).element_class);
      if (iVar2 == 0) goto code_?;
    }
    if (list[1].monitor != (MonitorData *)0x0) {
      list[2].klass = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)schema;
      this_00 = (ReadOnlyCollection_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                func_?(
                               TypeInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>
                               );
      mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[Newtonsoft::Json::Schema
      ::JsonSchema]::ReadOnlyCollection_1_Newtonsoft_Json_Schema_JsonSchema___ctor
                (this_00,list,
                 MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__ReadOnlyCollection_System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>_
                );
      (this->fields)._Schemas_k__BackingField = this_00;
      pDVar3 = (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                              );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary__
                );
      (this->fields)._Properties_k__BackingField = pDVar3;
      pDVar3 = (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                              );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary__
                );
      (this->fields)._PatternProperties_k__BackingField = pDVar3;
      this_01 = (List_1_UnityEngine_Vector4_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>
                               );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__List__
                );
      (this->fields)._Items_k__BackingField =
           (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)this_01;
      pSVar4 = JsonSchemaNode_GetId
                         ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                          (this->fields)._Schemas_k__BackingField,(MethodInfo *)0x0);
      (this->fields)._Id_k__BackingField = pSVar4;
      return;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JsonSchemaNode(JsonSchemaNode, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode__ctor_1
               (JsonSchemaNode *this,JsonSchemaNode *source,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (source == (JsonSchemaNode *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pRVar1 = (source->fields)._Schemas_k__BackingField;
    pIVar2 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
             func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
    if (pIVar2 == (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) goto code_?;
    if (schema == (JsonSchema *)0x0) {
code_?:
      if (pIVar2[1].monitor != (MonitorData *)0x0) {
        pIVar2[2].klass = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema___Class *)schema;
        pIVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Union_3
                           ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)pRVar1,pIVar2,
                            System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__Union<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                           );
        list = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                         ((IEnumerable_1_UseInteractor_ *)pIVar2,
                          System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                         );
        pRVar1 = (ReadOnlyCollection_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                 func_?(
                                TypeInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>
                                );
        mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[Newtonsoft::Json::
        Schema::JsonSchema]::ReadOnlyCollection_1_Newtonsoft_Json_Schema_JsonSchema___ctor
                  (pRVar1,(IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)list,
                   MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__ReadOnlyCollection_System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>_
                  );
        (this->fields)._Schemas_k__BackingField = pRVar1;
        pDVar3 = (source->fields)._Properties_k__BackingField;
        pDVar4 = (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                                );
        System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
        SortedList_2_System_Single_System_Object___ctor_1
                  ((SortedList_2_System_Single_System_Object_ *)pDVar4,(int32_t)pDVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary_System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>_
                  );
        (this->fields)._Properties_k__BackingField = pDVar4;
        pDVar3 = (source->fields)._PatternProperties_k__BackingField;
        pDVar4 = (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                                );
        System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
        SortedList_2_System_Single_System_Object___ctor_1
                  ((SortedList_2_System_Single_System_Object_ *)pDVar4,(int32_t)pDVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary_System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>_
                  );
        (this->fields)._PatternProperties_k__BackingField = pDVar4;
        pLStack5 =
             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>;
        collection = (source->fields)._Items_k__BackingField;
        this_00 = (List_1_VoxelHit_ *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
                  (this_00,(IEnumerable_1_VoxelHit_ *)collection,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__List_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaNode>_
                  );
        (this->fields)._Items_k__BackingField =
             (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)this_00;
        (this->fields)._AdditionalProperties_k__BackingField =
             (source->fields)._AdditionalProperties_k__BackingField;
        pSVar6 = JsonSchemaNode_GetId
                           ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                            (this->fields)._Schemas_k__BackingField,(MethodInfo *)0x0);
        (this->fields)._Id_k__BackingField = pSVar6;
        return;
      }
      goto code_?;
    }
    iVar7 = func_?(schema,(pIVar2->klass->_0).element_class);
    if (iVar7 != 0) goto code_?;
  }
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

