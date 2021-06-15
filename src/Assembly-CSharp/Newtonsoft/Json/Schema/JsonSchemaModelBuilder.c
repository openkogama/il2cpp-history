
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((parentNode != (JsonSchemaNode *)0x0) &&
     (pLVar1 = (parentNode->fields)._Items_k__BackingField,
     pLVar1 != (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Count__
                       );
    if (index < (int)pOVar2) {
      pLVar1 = (parentNode->fields)._Items_k__BackingField;
      if (pLVar1 == (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) goto code_?;
      pJVar3 = (JsonSchemaNode *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                         );
    }
    else {
      pJVar3 = (JsonSchemaNode *)0x0;
    }
    pJVar3 = JsonSchemaModelBuilder_AddSchema(this,pJVar3,schema,(MethodInfo *)0x0);
    pLVar1 = (parentNode->fields)._Items_k__BackingField;
    if (pLVar1 != (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Count__
                         );
      pLVar1 = (parentNode->fields)._Items_k__BackingField;
      if (index < (int)pOVar2) {
        if (pLVar1 != (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          List`1[WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef]::
          List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__set_Item
                    ((List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
                     pLVar1,index,
                     (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)pJVar3,
                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__set_Item_int__Newtonsoft__Json__Schema__JsonSchemaNode_
                    );
          return;
        }
      }
      else if (pLVar1 != (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)pJVar3,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc4;
  puVar5 = &stack0xffffffc4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  if (source == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  puStack_7 = (undefined4 *)&stack0xffffffc4;
  puStack_4 = &stack0xffffffc4;
  pIVar8 = (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
           func_?(0,
                           TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                           ,source);
  uStack_1 = 0;
  while (pIVar8 != (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
    cVar9 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar8);
    if (cVar9 == '\0') {
      *puStack_7 = 0x4b;
      uStack_1 = 0xffffffff;
      if (pIVar8 != (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,pIVar8);
      }
      goto code_?;
    }
    pIVar10 = pIVar8->klass;
    uVar11 = 0;
    uVar12._0_1_ = (pIVar10->_1).rank;
    uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
    if (uVar12 != 0) {
      do {
        if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
           ) {
          ppMVar13 = &(&(pIVar10->vtable).Add)[pIVar10->interfaceOffsets[uVar11].offset].method;
          goto code_?;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    ppMVar13 = (MethodInfo **)
              func_?(pIVar8,
                              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>_>
                              ,0);
code_?:
    uStack_6 = (*(code *)*ppMVar13)(pIVar8,ppMVar13[1]);
    uStack_14 = func_?(&uStack_6,
                                MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>__get_Key__
                               );
    pJStack_15 = (JsonSchema *)
                 func_?(&uStack_6,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchema>__get_Value__
                                );
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pJStack_16 = (JsonSchemaNode *)0x0;
    unaff_ESI = pIVar8;
    if (target == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) break;
    pIVar10 = target->klass;
    uVar12 = 0;
    uVar11._0_1_ = (pIVar10->_1).rank;
    uVar11._1_1_ = (pIVar10->_1).minimumAlignment;
    if (uVar11 != 0) {
      do {
        if (pIVar10->interfaceOffsets[uVar12].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
           ) {
          ppMVar13 = &(&(pIVar10->vtable).TryGetValue)[pIVar10->interfaceOffsets[uVar12].offset].method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar11);
    }
    ppMVar13 = (MethodInfo **)
              func_?(target,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                              ,3);
code_?:
    (*(code *)*ppMVar13)(target,uStack_14,&pJStack_16,ppMVar13[1]);
    pJStack_15 = (JsonSchema *)
                 JsonSchemaModelBuilder_AddSchema(this,pJStack_16,pJStack_15,(MethodInfo *)0x0);
    pIVar10 = target->klass;
    uVar12 = 0;
    uVar17._0_1_ = (pIVar10->_1).rank;
    uVar17._1_1_ = (pIVar10->_1).minimumAlignment;
    if (uVar17 != 0) {
      do {
        if (pIVar10->interfaceOffsets[uVar12].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
           ) {
          ppMVar13 = &(&(pIVar10->vtable).set_Item)[pIVar10->interfaceOffsets[uVar12].offset].method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar17);
    }
    uStack_6 = CONCAT44(uStack_6._4_4_,5);
    ppMVar13 = (MethodInfo **)func_?();
code_?:
    uStack_6 = CONCAT44(uStack_6._4_4_,ppMVar13[1]);
    (*(code *)*ppMVar13)();
    unaff_ESI = target;
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJStack_1 = (JsonSchemaNode *)0x0;
  if (target == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = target->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
         ) {
        ppMVar6 = &(&(target->klass->vtable).TryGetValue)[pIVar3->interfaceOffsets[uVar4].offset].
                   method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(target,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                            ,3);
code_?:
  (*(code *)*ppMVar6)(target,propertyName,&pJStack_1,ppMVar6[1]);
  pJVar7 = JsonSchemaModelBuilder_AddSchema(this,pJStack_1,schema,(MethodInfo *)0x0);
  pIVar3 = target->klass;
  uVar5 = 0;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
         ) {
        ppMVar6 = &(&(target->klass->vtable).set_Item)[pIVar3->interfaceOffsets[uVar5].offset].
                   method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  pJStack_1 = (JsonSchemaNode *)0x5;
  ppMVar6 = (MethodInfo **)
            func_?(target,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                           );
code_?:
  pJStack_1 = (JsonSchemaNode *)ppMVar6[1];
  (*(code *)*ppMVar6)(target,propertyName,pJVar7);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (existingNode == (JsonSchemaNode *)0x0) {
    pIVar1 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
             func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
    if (pIVar1 == (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) goto code_?;
    if ((schema != (JsonSchema *)0x0) &&
       (iVar2 = func_?(schema,(pIVar1->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (pIVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pIVar1[2].klass = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema___Class *)schema;
code_?:
    pSVar3 = JsonSchemaNode::JsonSchemaNode_GetId(pIVar1,(MethodInfo *)0x0);
    pJVar4 = (this->fields)._nodes;
    if (pJVar4 == (JsonSchemaNodeCollection *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::
            String,Newtonsoft::Json::Serialization::JsonProperty]::
            KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty__Contains
                      ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_
                        *)pJVar4,pSVar3,
                       MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Contains_System__String_
                      );
    if (bVar5 != 0) {
      pJVar4 = (this->fields)._nodes;
      if (pJVar4 != (JsonSchemaNodeCollection *)0x0) {
        pJVar6 = mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::
                  String,Newtonsoft::Json::Serialization::JsonProperty]::
                  KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty__get_Item
                            ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_
                              *)pJVar4,pSVar3,
                             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_System__String_
                            );
        return (JsonSchemaNode *)pJVar6;
      }
      goto code_?;
    }
    if (existingNode != (JsonSchemaNode *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_03 = (ScaleAnimationBase *)
                func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
      JsonSchemaNode::JsonSchemaNode__ctor_1
                ((JsonSchemaNode *)this_03,existingNode,schema,(MethodInfo *)0x0);
code_?:
      pJVar4 = (this->fields)._nodes;
      if (((pJVar4 != (JsonSchemaNodeCollection *)0x0) &&
          (mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Linq::
           JToken]::Collection_1_Newtonsoft_Json_Linq_JToken__Add
                     ((Collection_1_Newtonsoft_Json_Linq_JToken_ *)pJVar4,(JToken *)this_03,
                      MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                     ), schema != (JsonSchema *)0x0)) &&
         (source = DayNightCycle::DayNightCycle_get_CurrentStarsParam
                             ((DayNightCycle *)schema,(MethodInfo *)0x0),
         this_03 != (ScaleAnimationBase *)0x0)) {
        JsonSchemaModelBuilder_AddProperties
                  (this,(IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)source,
                   (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                   (this_03->fields).originalScale.x,(MethodInfo *)0x0);
        pCVar7 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)schema,(MethodInfo *)0x0);
        JsonSchemaModelBuilder_AddProperties
                  (this,(IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)pCVar7,
                   (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)
                   (this_03->fields).originalScale.y,(MethodInfo *)0x0);
        pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)schema,(MethodInfo *)0x0);
        if (pSVar8 == (SkyParam *)0x0) {
code_?:
          pCVar7 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                              ((DayNightCycle *)schema,(MethodInfo *)0x0);
          if (pCVar7 != (CelestialParam *)0x0) {
            pJVar9 = (JsonSchema *)
                      DayNightCycle::DayNightCycle_get_CurrentSunParam
                                ((DayNightCycle *)schema,(MethodInfo *)0x0);
            pJVar10 = JsonSchemaModelBuilder_AddSchema
                                (this,(JsonSchemaNode *)(this_03->fields).target,pJVar9,
                                 (MethodInfo *)0x0);
            (this_03->fields).target = (Transform *)pJVar10;
          }
          pSVar11 = PrefabPool::PrefabPool_get_MVSoundEmitterPrefab
                              ((PrefabPool *)schema,(MethodInfo *)0x0);
          if (pSVar11 != (SoundEmitterObject *)0x0) {
            pJVar9 = (JsonSchema *)
                      PrefabPool::PrefabPool_get_MVSoundEmitterPrefab
                                ((PrefabPool *)schema,(MethodInfo *)0x0);
            this_03 = (ScaleAnimationBase *)
                      JsonSchemaModelBuilder_AddSchema
                                (this,(JsonSchemaNode *)this_03,pJVar9,(MethodInfo *)0x0);
          }
          return (JsonSchemaNode *)this_03;
        }
        iVar2 = 0;
        while (iVar12 = iVar2,
              pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                  ((DayNightCycle *)schema,(MethodInfo *)0x0),
              pSVar8 != (SkyParam *)0x0) {
          pSVar13 = pSVar8->klass;
          uVar14 = 0;
          uVar15._0_1_ = (pSVar13->_1).rank;
          uVar15._1_1_ = (pSVar13->_1).minimumAlignment;
          if (uVar15 != 0) {
            do {
              if (pSVar13->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                 ) {
                ppMVar16 = &(&(pSVar13->vtable).Equals)[pSVar13->interfaceOffsets[uVar14].offset].
                            method;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          this = (JsonSchemaModelBuilder *)0x0;
          ppMVar16 = (MethodInfo **)func_?(pSVar8);
code_?:
          iVar17 = (*(code *)*ppMVar16)(pSVar8,ppMVar16[1]);
          if (iVar17 <= iVar12) goto code_?;
          pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)schema,(MethodInfo *)0x0);
          if (pSVar8 == (SkyParam *)0x0) break;
          pSVar13 = pSVar8->klass;
          uVar15 = 0;
          uVar14._0_1_ = (pSVar13->_1).rank;
          uVar14._1_1_ = (pSVar13->_1).minimumAlignment;
          if (uVar14 != 0) {
            do {
              if (pSVar13->interfaceOffsets[uVar15].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                 ) {
                ppMVar16 = &(&(pSVar13->vtable).ToString)[pSVar13->interfaceOffsets[uVar15].offset].
                            method;
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar14);
          }
          this = (JsonSchemaModelBuilder *)0x3;
          ppMVar16 = (MethodInfo **)func_?(pSVar8);
code_?:
          pJVar9 = (JsonSchema *)(*(code *)*ppMVar16)(pSVar8,iVar2,ppMVar16[1]);
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pCVar18 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                   (this_03->fields).originalScale.z;
          if (pCVar18 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) break;
          pOVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (pCVar18,
                               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Count__
                              );
          if (iVar2 < (int)pOVar19) {
            this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                      (this_03->fields).originalScale.z;
            if (this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) break;
            pJVar10 = (JsonSchemaNode *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                (this_01,iVar2,
                                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                                );
          }
          else {
            pJVar10 = (JsonSchemaNode *)0x0;
          }
          pJVar10 = JsonSchemaModelBuilder_AddSchema(this,pJVar10,pJVar9,(MethodInfo *)0x0);
          pCVar18 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                   (this_03->fields).originalScale.z;
          if (pCVar18 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) break;
          pOVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (pCVar18,
                               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Count__
                              );
          this_02 = (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
                    (this_03->fields).originalScale.z;
          if (iVar2 < (int)pOVar19) {
            if (this_02 ==
                (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0)
            break;
            mscorlib.dll::System::Collections::Generic::
            List`1[WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef]::
            List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__set_Item
                      (this_02,iVar2,
                       (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)pJVar10,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__set_Item_int__Newtonsoft__Json__Schema__JsonSchemaNode_
                      );
            iVar2 = iVar2 + 1;
          }
          else {
            if (this_02 ==
                (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0)
            break;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)pJVar10,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__Add_Newtonsoft__Json__Schema__JsonSchemaNode_
                      );
            iVar2 = iVar2 + 1;
          }
        }
      }
      goto code_?;
    }
    this_03 = (ScaleAnimationBase *)
              func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,unaff_EBP);
    pIVar20 = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)
              func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
    if (pIVar20 == (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) goto code_?;
    list = pIVar20;
    if ((schema == (JsonSchema *)0x0) ||
       (iVar2 = func_?(schema,(pIVar20->klass->_0).element_class), iVar2 != 0)) {
      if (pIVar20[1].monitor == (MonitorData *)0x0) goto code_?;
      pIVar20[2].klass = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)schema;
      pRVar21 = (ReadOnlyCollection_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                func_?(
                               TypeInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>
                               );
      mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[Newtonsoft::Json::Schema
      ::JsonSchema]::ReadOnlyCollection_1_Newtonsoft_Json_Schema_JsonSchema___ctor
                (pRVar21,list,
                 MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__ReadOnlyCollection_System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>_
                );
      (this_03->fields).state = (int32_t)pRVar21;
      pHVar22 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (pHVar22,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary__
                );
      (this_03->fields).originalScale.x = (float)pHVar22;
      pHVar22 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (pHVar22,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dictionary__
                );
      (this_03->fields).originalScale.y = (float)pHVar22;
      this_04 = (List_1_UnityEngine_Vector4_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>
                               );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this_04,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__List__
                );
      pIVar1 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)(this_03->fields).state;
      (this_03->fields).originalScale.z = (float)this_04;
      pSVar3 = JsonSchemaNode::JsonSchemaNode_GetId(pIVar1,(MethodInfo *)0x0);
      (this_03->fields)._._._._.m_CachedPtr = pSVar3;
      goto code_?;
    }
  }
  else {
    this_00 = (ReadOnlyCollection_1_UnityEngine_Color32_ *)
              (existingNode->fields)._Schemas_k__BackingField;
    if (this_00 == (ReadOnlyCollection_1_UnityEngine_Color32_ *)0x0) {
code_?:
      func_?(0);
code_?:
      uVar23 = func_?(0,0);
      func_?(uVar23);
code_?:
      uVar23 = func_?(0,0);
      func_?(uVar23);
code_?:
      uVar23 = func_?(0,0);
      func_?(uVar23);
    }
    else {
      value._4_4_ = 
      MethodInfo__System__Collections__ObjectModel__ReadOnlyCollection<Newtonsoft::Json::Schema::JsonSchema>__Contains_Newtonsoft__Json__Schema__JsonSchema_
      ;
      value.rgba = (int32_t)schema;
      bVar5 = mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::
              Color32]::ReadOnlyCollection_1_UnityEngine_Color32__Contains(this_00,value,unaff_EDI);
      if (bVar5 != 0) {
        return existingNode;
      }
      pRVar21 = (existingNode->fields)._Schemas_k__BackingField;
      pIVar1 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)
               func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema,1);
      if (pIVar1 == (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) goto code_?;
      if ((schema != (JsonSchema *)0x0) &&
         (iVar2 = func_?(schema,(pIVar1->klass->_0).element_class), iVar2 == 0))
      goto code_?;
      if (pIVar1[1].monitor != (MonitorData *)0x0) {
        pIVar1[2].klass = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema___Class *)schema;
        pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Union_3
                           ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)pRVar21,pIVar1,
                            System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_MethodInfo__System__Linq__Enumerable__Union<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                           );
        goto code_?;
      }
    }
    uVar23 = func_?(0,0);
    func_?(uVar23);
  }
  uVar23 = func_?(0,0);
  func_?(uVar23);
code_?:
  uVar23 = func_?(0,0);
  func_?(uVar23);
  pcVar24 = (code *)swi(3);
  pJVar10 = (JsonSchemaNode *)(*pcVar24)();
  return pJVar10;
}


/* JsonSchemaModel Build(JsonSchema) */

JsonSchemaModel *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::JsonSchemaModelBuilder_Build
          (JsonSchemaModelBuilder *this,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaNodeCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNodeCollection);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Serialization::JsonProperty]::
  KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__KeyedCollection__
            );
  (this->fields)._nodes = this_00;
  pJVar1 = JsonSchemaModelBuilder_AddSchema(this,(JsonSchemaNode *)0x0,schema,(MethodInfo *)0x0);
  (this->fields)._node = pJVar1;
  this_01 = (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
            );
  (this->fields)._nodeModels = this_01;
  pJVar2 = JsonSchemaModelBuilder_BuildNodeModel(this,(this->fields)._node,(MethodInfo *)0x0);
  return pJVar2;
}


/* JsonSchemaModel BuildNodeModel(JsonSchemaNode) */

JsonSchemaModel *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
JsonSchemaModelBuilder_BuildNodeModel
          (JsonSchemaModelBuilder *this,JsonSchemaNode *node,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff78;
  puVar5 = &stack0xffffff78;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pJStack_6 = (JsonSchemaModel *)0x0;
  auStack_7._16_4_ = (Object *)0x0;
  aKStack_8[0].key = 0;
  aKStack_8[0].value = 0;
  auStack_7._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_7._12_4_ = 0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  pJStack_10 = (JsonSchemaModel *)0x0;
  func_?();
  pLStack_11 = (List_1_UnityEngine_Vector4_ *)0xffffffff;
  pDVar12 = (this->fields)._nodeModels;
  pJVar13 = (JsonSchemaModel *)0x0;
  piStack_14 = (int *)&stack0xffffff78;
  puStack_4 = &stack0xffffff78;
  if (pDVar12 == (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
                 *)0x0) {
code_?:
    pMVar15 = (MethodInfo *)0x0;
    pJVar16 = pJVar13;
  }
  else {
    pMVar15 = 
    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__TryGetValue_Newtonsoft__Json__Schema__JsonSchemaNode__Newtonsoft__Json__Schema__JsonSchemaModel__
    ;
    piStack_14 = (int *)&stack0xffffff78;
    puStack_4 = &stack0xffffff78;
    bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
            Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                      ((Dictionary_2_System_String_UnityEngine_Sprite_ *)pDVar12,(String *)node,
                       (Sprite **)&pJStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__TryGetValue_Newtonsoft__Json__Schema__JsonSchemaNode__Newtonsoft__Json__Schema__JsonSchemaModel__
                      );
    if (bVar17 != 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return pJStack_6;
    }
    pJVar16 = (JsonSchemaModel *)node;
    if (node != (JsonSchemaNode *)0x0) {
      pJStack_6 = JsonSchemaModel::JsonSchemaModel_Create
                             ((IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)
                              (node->fields)._Schemas_k__BackingField,(MethodInfo *)0x0);
      pDVar12 = (this->fields)._nodeModels;
      pJVar13 = (JsonSchemaModel *)node;
      if (pDVar12 != (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar12,(String *)node,(Theme *)pJStack_6,
                   MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__set_Item_Newtonsoft__Json__Schema__JsonSchemaNode__Newtonsoft__Json__Schema__JsonSchemaModel_
                  );
        pDVar18 = (node->fields)._Properties_k__BackingField;
        if (pDVar18 != (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
          pDVar19 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[WinningConditionType,System::Object]::
                   Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                               *)&stack0xffffff84,
                              (Dictionary_2_WinningConditionType_System_Object_ *)pDVar18,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__GetEnumerator__
                             );
          auStack_7._0_4_ = pDVar19->dictionary;
          auStack_7._4_4_ = pDVar19->next;
          auStack_7._8_4_ = pDVar19->stamp;
          auStack_7._12_4_ = (pDVar19->current).key;
          auStack_7._16_4_ = (pDVar19->current).value;
          uStack_1 = 0;
          while (cVar20 = func_?(), cVar20 != '\0') {
            aKStack_8[0] =
                 LevelRewardsManager::LevelRewardsManager_get_NextReward
                           ((LevelRewardsManager *)auStack_7,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Current__
                           );
            pJVar13 = pJStack_6;
            if (pJStack_6 == (JsonSchemaModel *)0x0) goto code_?;
            if ((pJStack_6->fields)._Properties_k__BackingField ==
                (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
              pHVar21 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                                       );
              System.Core.dll::System::Collections::Generic::
              HashSet`1[AvatarModifierPackage+AvatarModifier]::
              HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                        (pHVar21,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                        );
              if (pJVar13 == (JsonSchemaModel *)0x0) goto code_?;
              (pJVar13->fields)._Properties_k__BackingField =
                   (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pHVar21;
            }
            pJVar13 = pJStack_6;
            if (pJStack_6 == (JsonSchemaModel *)0x0) goto code_?;
            pIVar22 = (pJStack_6->fields)._Properties_k__BackingField;
            uVar23 = func_?(aKStack_8,
                                     MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Key__
                                    );
            pJVar24 = (JsonSchemaNode *)
                      func_?(aKStack_8,
                                      MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Value__
                                     );
            pJVar16 = JsonSchemaModelBuilder_BuildNodeModel(this,pJVar24,(MethodInfo *)0x0);
            pJVar13 = (JsonSchemaModel *)0x0;
            if (pIVar22 == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0
               ) goto code_?;
            func_?(5,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                            ,pIVar22,uVar23,pJVar16);
          }
          *piStack_14 = 0x9b;
          iStack_25 = 0;
          uStack_1 = 0xffffffff;
          func_?(auStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dispose__
                         );
          if (*piStack_14 == 0x9b) {
            iStack_25 = -1;
          }
          pJVar13 = (JsonSchemaModel *)node;
          if ((node != (JsonSchemaNode *)0x0) &&
             (pDVar18 = (node->fields)._PatternProperties_k__BackingField,
             pDVar18 != (Dictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
            Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                       &stack0xffffff84,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar18,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__GetEnumerator__
                      );
            uStack_1 = 2;
            while (cVar20 = func_?(), pJVar16 = pJStack_10, cVar20 != '\0') {
              KStack_9 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                    ((LevelRewardsManager *)&stack0xffffff98,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Current__
                                    );
              pJVar13 = pJStack_6;
              if (pJStack_6 == (JsonSchemaModel *)0x0) goto code_?;
              if ((pJStack_6->fields)._PatternProperties_k__BackingField ==
                  (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
                pHVar21 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                          func_?(
                                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                                         );
                System.Core.dll::System::Collections::Generic::
                HashSet`1[AvatarModifierPackage+AvatarModifier]::
                HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                          (pHVar21,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
                          );
                if (pJVar13 == (JsonSchemaModel *)0x0) goto code_?;
                (pJVar13->fields)._PatternProperties_k__BackingField =
                     (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pHVar21;
              }
              pJVar13 = pJStack_6;
              if (pJStack_6 == (JsonSchemaModel *)0x0) goto code_?;
              pIVar22 = (pJStack_6->fields)._PatternProperties_k__BackingField;
              uVar23 = func_?(&KStack_9,
                                       MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Key__
                                      );
              pJVar24 = (JsonSchemaNode *)
                        func_?(&KStack_9,
                                        MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__get_Value__
                                       );
              pJVar16 = JsonSchemaModelBuilder_BuildNodeModel(this,pJVar24,(MethodInfo *)0x0);
              pJVar13 = (JsonSchemaModel *)0x0;
              if (pIVar22 == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)
                            0x0) goto code_?;
              func_?(5,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                              ,pIVar22,uVar23,pJVar16);
            }
            piStack_14[iStack_25 + 1] = 0x109;
            uStack_1 = 0xffffffff;
            func_?(&stack0xffffff98,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__Dispose__
                           );
            if (pJVar16 != (JsonSchemaModel *)0x0) goto code_?;
            index = (JsonSchemaModel *)0x0;
            pJVar13 = pJVar16;
            if (node != (JsonSchemaNode *)0x0) {
              while (pLVar26 = (node->fields)._Items_k__BackingField, pJVar13 = pJVar16,
                    pLVar26 != (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) {
                pOVar27 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pLVar26,
                                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Count__
                                    );
                pJVar13 = pJStack_6;
                if ((int)pOVar27 <= (int)pJVar16) {
                  pJVar24 = (node->fields)._AdditionalProperties_k__BackingField;
                  if (pJVar24 == (JsonSchemaNode *)0x0) goto code_?;
                  pJVar16 = JsonSchemaModelBuilder_BuildNodeModel(this,pJVar24,(MethodInfo *)0x0);
                  if (pJVar13 != (JsonSchemaModel *)0x0) {
                    (pJVar13->fields)._AdditionalProperties_k__BackingField = pJVar16;
                    goto code_?;
                  }
                  break;
                }
                if (pJStack_6 == (JsonSchemaModel *)0x0) break;
                if ((pJStack_6->fields)._Items_k__BackingField ==
                    (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
                  pLStack_11 = (List_1_UnityEngine_Vector4_ *)func_?();
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
                  List_1_UnityEngine_Vector4___ctor
                            (pLStack_11,
                             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List__
                            );
                  if (pJVar13 == (JsonSchemaModel *)0x0) break;
                  (pJVar13->fields)._Items_k__BackingField =
                       (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pLStack_11;
                }
                pJVar13 = pJStack_6;
                if (pJStack_6 == (JsonSchemaModel *)0x0) break;
                pJVar13 = (JsonSchemaModel *)(pJStack_6->fields)._Items_k__BackingField;
                pLVar26 = (node->fields)._Items_k__BackingField;
                if (pLVar26 == (List_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)0x0) break;
                pJVar24 = (JsonSchemaNode *)
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar26,
                                     (int32_t)index,
                                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaNode>__get_Item_int_
                                    );
                JsonSchemaModelBuilder_BuildNodeModel(this,pJVar24,(MethodInfo *)0x0);
                if (pJVar13 == (JsonSchemaModel *)0x0) break;
                func_?();
                pJVar16 = (JsonSchemaModel *)((int)&index->klass + 1);
                index = pJVar16;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(pMVar15);
  func_?(pJVar16,0,0);
code_?:
  func_?(pJVar16,0,0);
  pcVar28 = (code *)swi(3);
  pJVar13 = (JsonSchemaModel *)(*pcVar28)();
  return pJVar13;
}


/* JsonSchemaModelBuilder() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::
     JsonSchemaModelBuilder__ctor(JsonSchemaModelBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaNodeCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNodeCollection);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Serialization::JsonProperty]::
  KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Schema::JsonSchemaNode>__KeyedCollection__
            );
  (this->fields)._nodes = this_00;
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>
  ;
  this_01 = (Dictionary_2_Newtonsoft_Json_Schema_JsonSchemaNode_Newtonsoft_Json_Schema_JsonSchemaModel_
             *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Schema::JsonSchemaNode,_Newtonsoft::Json::Schema::JsonSchemaModel>__Dictionary__
            );
  (this->fields)._nodeModels = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

