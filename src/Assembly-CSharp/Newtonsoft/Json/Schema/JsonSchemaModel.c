
/* Void Combine(JsonSchemaModel, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_Combine
               (JsonSchemaModel *model,JsonSchema *schema,MethodInfo *method)

{
  pJVar1 = model;
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddDistinct<System::String>_System__Collections__Generic__IList<System::String>__System__String_
                   );
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRangeDistinct<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                   );
    func_?(&MethodInfo__System__Nullable<bool>__GetValueOrDefault__);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                   );
    cRam_? = '\x01';
  }
  if (model != (JsonSchemaModel *)0x0) {
    if ((model->fields)._Required_k__BackingField == 0) {
      if (schema == (JsonSchema *)0x0) goto code_?;
      (model->fields)._Required_k__BackingField =
           ((ushort)(schema->fields)._Required_k__BackingField & 0xff00) != 0;
    }
    else {
      (model->fields)._Required_k__BackingField = 1;
      if (schema == (JsonSchema *)0x0) goto code_?;
    }
    uVar2 = 0x7f;
    if ((schema->fields)._Type_k__BackingField.hasValue != 0) {
      uVar2 = (schema->fields)._Type_k__BackingField.value;
    }
    piVar3 = &(model->fields)._Type_k__BackingField;
    *piVar3 = *piVar3 & uVar2;
    NVar4 = Json::Utilities::MathUtils::MathUtils_Max
                       ((model->fields)._MinimumLength_k__BackingField,
                        (schema->fields)._MinimumLength_k__BackingField,(MethodInfo *)0x0);
    (model->fields)._MinimumLength_k__BackingField = NVar4;
    NVar4 = Json::Utilities::MathUtils::MathUtils_Min
                       ((model->fields)._MaximumLength_k__BackingField,
                        (schema->fields)._MaximumLength_k__BackingField,(MethodInfo *)0x0);
    (model->fields)._MaximumLength_k__BackingField = NVar4;
    val1_01.value._4_4_ = *(undefined4 *)&(schema->fields)._DivisibleBy_k__BackingField;
    val1_01._0_12_ = *(undefined1 (*) [12])&(model->fields)._DivisibleBy_k__BackingField.field_0x4;
    model = (JsonSchemaModel *)0x0;
    auVar5 = *(undefined1 (*) [12])&(schema->fields)._DivisibleBy_k__BackingField.field_0x4;
    pNVar6 = Json::Utilities::MathUtils::MathUtils_Max_1
                        ((Nullable_1_Double_ *)&stack0xffffffec,val1_01,
                         (Nullable_1_Double_)CONCAT412(model,auVar5),(MethodInfo *)schema);
    uVar7 = *(undefined3 *)&pNVar6->field_0x1;
    uVar8 = *(undefined4 *)&pNVar6->field_0x4;
    uVar9 = *(undefined4 *)&pNVar6->value;
    uVar10 = *(undefined4 *)((int)&pNVar6->value + 4);
    (pJVar1->fields)._DivisibleBy_k__BackingField.hasValue = pNVar6->hasValue;
    *(undefined3 *)&(pJVar1->fields)._DivisibleBy_k__BackingField.field_0x1 = uVar7;
    *(undefined4 *)&(pJVar1->fields)._DivisibleBy_k__BackingField.field_0x4 = uVar8;
    *(undefined4 *)&(pJVar1->fields)._DivisibleBy_k__BackingField.value = uVar9;
    *(undefined4 *)((int)&(pJVar1->fields)._DivisibleBy_k__BackingField.value + 4) = uVar10;
    val1.value._4_4_ = *(undefined4 *)&(schema->fields)._Minimum_k__BackingField;
    val1._0_12_ = *(undefined1 (*) [12])&(pJVar1->fields)._Minimum_k__BackingField.field_0x4;
    val2.value._4_4_ = 0;
    val2._0_12_ = *(undefined1 (*) [12])&(schema->fields)._Minimum_k__BackingField.field_0x4;
    pNVar6 = Json::Utilities::MathUtils::MathUtils_Max_1
                        ((Nullable_1_Double_ *)&stack0xffffffec,val1,val2,in_stack_11);
    uVar7 = *(undefined3 *)&pNVar6->field_0x1;
    uVar8 = *(undefined4 *)&pNVar6->field_0x4;
    uVar9 = *(undefined4 *)&pNVar6->value;
    uVar10 = *(undefined4 *)((int)&pNVar6->value + 4);
    (pJVar1->fields)._Minimum_k__BackingField.hasValue = pNVar6->hasValue;
    *(undefined3 *)&(pJVar1->fields)._Minimum_k__BackingField.field_0x1 = uVar7;
    *(undefined4 *)&(pJVar1->fields)._Minimum_k__BackingField.field_0x4 = uVar8;
    *(undefined4 *)&(pJVar1->fields)._Minimum_k__BackingField.value = uVar9;
    *(undefined4 *)((int)&(pJVar1->fields)._Minimum_k__BackingField.value + 4) = uVar10;
    val1_00.value._4_4_ = *(undefined4 *)&(schema->fields)._Maximum_k__BackingField;
    val1_00._0_12_ = *(undefined1 (*) [12])&(pJVar1->fields)._Maximum_k__BackingField.field_0x4;
    val2_00.value._4_4_ = 0;
    val2_00._0_12_ = *(undefined1 (*) [12])&(schema->fields)._Maximum_k__BackingField.field_0x4;
    pNVar6 = Json::Utilities::MathUtils::MathUtils_Max_1
                        ((Nullable_1_Double_ *)&stack0xffffffec,val1_00,val2_00,in_stack_12);
    bVar13 = (pJVar1->fields)._ExclusiveMinimum_k__BackingField;
    uVar7 = *(undefined3 *)&pNVar6->field_0x1;
    uVar8 = *(undefined4 *)&pNVar6->field_0x4;
    uVar9 = *(undefined4 *)&pNVar6->value;
    uVar10 = *(undefined4 *)((int)&pNVar6->value + 4);
    (pJVar1->fields)._Maximum_k__BackingField.hasValue = pNVar6->hasValue;
    *(undefined3 *)&(pJVar1->fields)._Maximum_k__BackingField.field_0x1 = uVar7;
    *(undefined4 *)&(pJVar1->fields)._Maximum_k__BackingField.field_0x4 = uVar8;
    *(undefined4 *)&(pJVar1->fields)._Maximum_k__BackingField.value = uVar9;
    *(undefined4 *)((int)&(pJVar1->fields)._Maximum_k__BackingField.value + 4) = uVar10;
    if (bVar13 == 0) {
      uVar14 = (ushort)(schema->fields)._ExclusiveMinimum_k__BackingField >> 8;
    }
    else {
      uVar14 = 1;
    }
    (pJVar1->fields)._ExclusiveMinimum_k__BackingField = uVar14 != 0;
    if ((pJVar1->fields)._ExclusiveMaximum_k__BackingField == 0) {
      uVar14 = (ushort)(schema->fields)._ExclusiveMaximum_k__BackingField >> 8;
    }
    else {
      uVar14 = 1;
    }
    (pJVar1->fields)._ExclusiveMaximum_k__BackingField = uVar14 != 0;
    NVar4 = Json::Utilities::MathUtils::MathUtils_Max
                       ((pJVar1->fields)._MinimumItems_k__BackingField,
                        (schema->fields)._MinimumItems_k__BackingField,(MethodInfo *)0x0);
    (pJVar1->fields)._MinimumItems_k__BackingField = NVar4;
    NVar4 = Json::Utilities::MathUtils::MathUtils_Min
                       ((pJVar1->fields)._MaximumItems_k__BackingField,
                        (schema->fields)._MaximumItems_k__BackingField,(MethodInfo *)0x0);
    (pJVar1->fields)._MaximumItems_k__BackingField = NVar4;
    if ((pJVar1->fields)._AllowAdditionalProperties_k__BackingField == 0) {
      bVar13 = 0;
    }
    else {
      bVar13 = (schema->fields)._AllowAdditionalProperties_k__BackingField;
    }
    (pJVar1->fields)._AllowAdditionalProperties_k__BackingField = bVar13 != 0;
    if ((schema->fields)._Enum_k__BackingField != (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      if ((pJVar1->fields)._Enum_k__BackingField == (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        pLVar15 = (LowLevelList_1_System_Object_ *)func_?();
        if (pLVar15 == (LowLevelList_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  (pLVar15,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                  );
        (pJVar1->fields)._Enum_k__BackingField = (IList_1_Newtonsoft_Json_Linq_JToken_ *)pLVar15;
        func_?(&(pJVar1->fields)._Enum_k__BackingField,pLVar15);
      }
      list = (pJVar1->fields)._Enum_k__BackingField;
      values = (schema->fields)._Enum_k__BackingField;
      this = (TweenRunner_1_FloatTween_ *)func_?();
      if (this == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this,(MethodInfo *)0x0);
      Json::Utilities::CollectionUtils::CollectionUtils_AddRangeDistinct_1
                ((IList_1_System_Object_ *)list,(IEnumerable_1_System_Object_ *)values,
                 (IEqualityComparer_1_System_Object_ *)this,
                 bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRangeDistinct<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                );
    }
    (pJVar1->fields)._Disallow_k__BackingField =
         (pJVar1->fields)._Disallow_k__BackingField |
         (schema->fields)._Disallow_k__BackingField.value;
    if ((schema->fields)._Pattern_k__BackingField != (String *)0x0) {
      if ((pJVar1->fields)._Patterns_k__BackingField == (IList_1_System_String_ *)0x0) {
        pLVar15 = (LowLevelList_1_System_Object_ *)func_?();
        if (pLVar15 == (LowLevelList_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  (pLVar15,MethodInfo__System__Collections__Generic__List<System::String>__List__);
        (pJVar1->fields)._Patterns_k__BackingField = (IList_1_System_String_ *)pLVar15;
        func_?(&(pJVar1->fields)._Patterns_k__BackingField,pLVar15);
      }
      Json::Utilities::CollectionUtils::CollectionUtils_IndexOf
                ((IEnumerable_1_System_Object_ *)(pJVar1->fields)._Patterns_k__BackingField,
                 (Object *)(schema->fields)._Pattern_k__BackingField,
                 bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddDistinct<System::String>_System__Collections__Generic__IList<System::String>__System__String_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* JsonSchemaModel Create(IList`1[Newtonsoft.Json.Schema.JsonSchema]) */

JsonSchemaModel *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_Create
          (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *schemata,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaModel);
    cRam_? = '\x01';
  }
  pJVar4 = (JsonSchemaModel *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaModel);
  if (pJVar4 != (JsonSchemaModel *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar4,ExceptionArgument__Enum_obj,unaff_EDI);
    (pJVar4->fields)._Type_k__BackingField = 0x7f;
    (pJVar4->fields)._AllowAdditionalProperties_k__BackingField = 1;
    (pJVar4->fields)._Required_k__BackingField = 0;
    if (schemata != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
      piVar5 = (int *)func_?(0);
      uStack_1 = 1;
      while( true ) {
        if (piVar5 == (int *)0x0) break;
        cVar6 = func_?(0);
        if (cVar6 == '\0') {
          uStack_1 = 0xffffffff;
          if (piVar5 != (int *)0x0) {
            func_?(0);
            *unaff_FS_OFFSET = uStack_3;
            return pJVar4;
          }
          *unaff_FS_OFFSET = uStack_3;
          return pJVar4;
        }
        if (piVar5 == (int *)0x0) break;
        uVar7 = 0;
        uVar8 = *(ushort *)(*piVar5 + 0xb2);
        if (uVar8 != 0) {
          do {
            if (*(IEnumerator_1_Newtonsoft_Json_Schema_JsonSchema___Class **)
                 (*(int *)(*piVar5 + 0x58) + (uint)uVar7 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchema>
               ) {
              puVar9 = (undefined4 *)
                       (*piVar5 + 0xbc +
                       *(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar7 * 8) * 8);
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
        }
        puVar9 = (undefined4 *)func_?(piVar5);
code_?:
        schema = (JsonSchema *)(*(code *)*puVar9)();
        JsonSchemaModel_Combine(pJVar4,schema,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pJVar4 = (JsonSchemaModel *)(*pcVar10)();
  return pJVar4;
}


/* JsonSchemaModel() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel__ctor
               (JsonSchemaModel *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._Type_k__BackingField = 0x7f;
  (this->fields)._AllowAdditionalProperties_k__BackingField = 1;
  (this->fields)._Required_k__BackingField = 0;
  return;
}


/* Boolean get_AllowAdditionalProperties() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_get_AllowAdditionalProperties(JsonSchemaModel *this,MethodInfo *method)

{
  return (this->fields)._AllowAdditionalProperties_k__BackingField;
}


/* Boolean get_ExclusiveMaximum() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_get_ExclusiveMaximum(JsonSchemaModel *this,MethodInfo *method)

{
  return (this->fields)._ExclusiveMaximum_k__BackingField;
}


/* Nullable`1[Int32] get_MaximumItems() */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_get_MaximumItems
          (JsonSchemaModel *this,MethodInfo *method)

{
  return (this->fields)._MaximumItems_k__BackingField;
}


/* Nullable`1[Int32] get_MinimumItems() */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_get_MinimumItems
          (JsonSchemaModel *this,MethodInfo *method)

{
  return (this->fields)._MinimumItems_k__BackingField;
}


/* Void set_AdditionalProperties(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_AdditionalProperties
               (JsonSchemaModel *this,JsonSchemaModel *value,MethodInfo *method)

{
  (this->fields)._AdditionalProperties_k__BackingField = value;
  func_?(&(this->fields)._AdditionalProperties_k__BackingField,value);
  return;
}


/* Void set_AllowAdditionalProperties(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_AllowAdditionalProperties
               (JsonSchemaModel *this,bool value,MethodInfo *method)

{
  (this->fields)._AllowAdditionalProperties_k__BackingField = value;
  return;
}


/* Void set_Disallow(JsonSchemaType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_set_Disallow
               (JsonSchemaModel *this,JsonSchemaType__Enum value,MethodInfo *method)

{
  (this->fields)._Disallow_k__BackingField = value;
  return;
}


/* Void set_Enum(IList`1[Newtonsoft.Json.Linq.JToken]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_set_Enum
               (JsonSchemaModel *this,IList_1_Newtonsoft_Json_Linq_JToken_ *value,MethodInfo *method
               )

{
  (this->fields)._Enum_k__BackingField = value;
  func_?(&(this->fields)._Enum_k__BackingField,value);
  return;
}


/* Void set_ExclusiveMaximum(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_ExclusiveMaximum(JsonSchemaModel *this,bool value,MethodInfo *method)

{
  (this->fields)._ExclusiveMaximum_k__BackingField = value;
  return;
}


/* Void set_MaximumItems(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_MaximumItems
               (JsonSchemaModel *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MaximumItems_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._MaximumItems_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._MaximumItems_k__BackingField.value = value.value;
  return;
}


/* Void set_MaximumLength(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_MaximumLength
               (JsonSchemaModel *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MaximumLength_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._MaximumLength_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._MaximumLength_k__BackingField.value = value.value;
  return;
}


/* Void set_MinimumItems(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_MinimumItems
               (JsonSchemaModel *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MinimumItems_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._MinimumItems_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._MinimumItems_k__BackingField.value = value.value;
  return;
}


/* Void set_Properties(IDictionary`2[System.String,Newtonsoft.Json.Schema.JsonSchemaModel]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_set_Properties
               (JsonSchemaModel *this,
               IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *value,
               MethodInfo *method)

{
  (this->fields)._Properties_k__BackingField = value;
  func_?(&(this->fields)._Properties_k__BackingField,value);
  return;
}

