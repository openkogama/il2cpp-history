
/* Void Combine(JsonSchemaModel, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_Combine
               (JsonSchemaModel *model,JsonSchema *schema,MethodInfo *method)

{
  pJVar1 = model;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (model != (JsonSchemaModel *)0x0) {
    if ((model->fields)._Required_k__BackingField == 0) {
      if (schema == (JsonSchema *)0x0) goto code_?;
      Json::Serialization::JsonContract::JsonContract_get_IsReference
                ((JsonContract *)schema,(MethodInfo *)0x0);
      cVar2 = func_?(&stack0xfffffff8,MethodInfo__System__Nullable<bool>__get_HasValue__);
      if (cVar2 == '\0') {
        bVar3 = 0;
      }
      else {
        bVar3 = func_?(&stack0xfffffff8,MethodInfo__System__Nullable<bool>__get_Value__);
      }
    }
    else {
      bVar3 = 1;
    }
    (model->fields)._Required_k__BackingField = bVar3;
    uVar4 = (model->fields)._Type_k__BackingField;
    if (schema != (JsonSchema *)0x0) {
      System.Core.dll::System::Linq::QuickSort`1[TElement]+<Sort>c__Iterator21[System::Collections::
      Generic::KeyValuePair`2[System::Int32,System::Int32]]::
      QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_Generic_IEnumerator_TElement__get_Current
                ((QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
                  *)schema,(MethodInfo *)0x0);
      cVar2 = func_?(&stack0xffffffe8,
                              MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                             );
      if (cVar2 == '\0') {
        uVar5 = 0x7f;
      }
      else {
        uVar5 = func_?();
      }
      (model->fields)._Type_k__BackingField = uVar4 & uVar5;
      NVar6 = (model->fields)._MinimumLength_k__BackingField;
      NVar7 = JsonSchema::JsonSchema_get_MinimumLength(schema,(MethodInfo *)0x0);
      NVar7 = Json::Utilities::MathUtils::MathUtils_Max(NVar6,NVar7,(MethodInfo *)0x0);
      NVar6 = (model->fields)._MaximumLength_k__BackingField;
      (model->fields)._MinimumLength_k__BackingField = NVar7;
      NVar7 = JsonSchema::JsonSchema_get_MaximumLength(schema,(MethodInfo *)0x0);
      NVar6 = Json::Utilities::MathUtils::MathUtils_Min(NVar6,NVar7,(MethodInfo *)0x0);
      uStack_8 = *(undefined4 *)&(model->fields)._DivisibleBy_k__BackingField.value;
      puStack_9 = *(undefined **)((int)&(model->fields)._DivisibleBy_k__BackingField.value + 4);
      uVar10 = *(undefined4 *)&(model->fields)._DivisibleBy_k__BackingField.has_value;
      (model->fields)._MaximumLength_k__BackingField = NVar6;
      pNVar11 = JsonSchema::JsonSchema_get_DivisibleBy(&NStack_12,schema,(MethodInfo *)0x0);
      puVar13 = puStack_9;
      val1_01.value._4_4_ = uVar10;
      val1_01.value._0_4_ = puVar13;
      val1_01.has_value = (model->fields)._DivisibleBy_k__BackingField.field_0xc;
      val1_01._9_3_ = *(undefined3 *)&(model->fields)._DivisibleBy_k__BackingField.field_0xd;
      val1_01._12_4_ = *(undefined4 *)&pNVar11->value;
      val2_01.value._6_2_ = (short)((uint)*(undefined4 *)&pNVar11->has_value >> 0x10);
      val2_01.value._0_6_ = *(undefined6 *)((int)&pNVar11->value + 4);
      val2_01._8_2_ = (short)*(undefined4 *)&pNVar11->field_0xc;
      val2_01._10_2_ = (short)((uint)*(undefined4 *)&pNVar11->field_0xc >> 0x10);
      val2_01._12_4_ = 0;
      pNVar11 = Json::Utilities::MathUtils::MathUtils_Max_1
                          (&NStack_12,val1_01,val2_01,unaff_retaddr);
      uVar10 = *(undefined4 *)((int)&pNVar11->value + 4);
      bVar3 = pNVar11->has_value;
      uVar14 = *(undefined3 *)&pNVar11->field_0x9;
      uVar15 = *(undefined4 *)&pNVar11->field_0xc;
      *(undefined4 *)&(model->fields)._DivisibleBy_k__BackingField.value =
           *(undefined4 *)&pNVar11->value;
      *(undefined4 *)((int)&(model->fields)._DivisibleBy_k__BackingField.value + 4) = uVar10;
      (model->fields)._DivisibleBy_k__BackingField.has_value = bVar3;
      *(undefined3 *)&(model->fields)._DivisibleBy_k__BackingField.field_0x9 = uVar14;
      *(undefined4 *)&(model->fields)._DivisibleBy_k__BackingField.field_0xc = uVar15;
      uStack_8 = *(undefined4 *)&(model->fields)._Minimum_k__BackingField.value;
      puStack_9 = *(undefined **)((int)&(model->fields)._Minimum_k__BackingField.value + 4);
      uVar10 = *(undefined4 *)&(model->fields)._Minimum_k__BackingField.has_value;
      pNVar11 = JsonSchema::JsonSchema_get_Minimum(&NStack_12,schema,(MethodInfo *)0x0);
      uStack16 = uStack_8;
      val1.value._4_4_ = uVar10;
      val1.value._0_4_ = puStack_9;
      val1.has_value = (model->fields)._Minimum_k__BackingField.field_0xc;
      val1._9_3_ = *(undefined3 *)&(model->fields)._Minimum_k__BackingField.field_0xd;
      val1._12_4_ = *(undefined4 *)&pNVar11->value;
      val2._12_4_ = 0;
      val2._0_12_ = *(undefined1 (*) [12])((int)&pNVar11->value + 4);
      pNVar11 = Json::Utilities::MathUtils::MathUtils_Max_1(&NStack_12,val1,val2,in_stack_17);
      uVar10 = *(undefined4 *)((int)&pNVar11->value + 4);
      bVar3 = pNVar11->has_value;
      uVar14 = *(undefined3 *)&pNVar11->field_0x9;
      uVar15 = *(undefined4 *)&pNVar11->field_0xc;
      *(undefined4 *)&(model->fields)._Minimum_k__BackingField.value =
           *(undefined4 *)&pNVar11->value;
      *(undefined4 *)((int)&(model->fields)._Minimum_k__BackingField.value + 4) = uVar10;
      (model->fields)._Minimum_k__BackingField.has_value = bVar3;
      *(undefined3 *)&(model->fields)._Minimum_k__BackingField.field_0x9 = uVar14;
      *(undefined4 *)&(model->fields)._Minimum_k__BackingField.field_0xc = uVar15;
      uStack_8 = *(undefined4 *)&(model->fields)._Maximum_k__BackingField.value;
      puStack_9 = *(undefined **)((int)&(model->fields)._Maximum_k__BackingField.value + 4);
      uVar10 = *(undefined4 *)&(model->fields)._Maximum_k__BackingField.has_value;
      pNVar11 = JsonSchema::JsonSchema_get_Maximum(&NStack_12,schema,(MethodInfo *)0x0);
      uStack18 = uStack_8;
      val1_00.value._4_4_ = uVar10;
      val1_00.value._0_4_ = puStack_9;
      val1_00.has_value = (model->fields)._Maximum_k__BackingField.field_0xc;
      val1_00._9_3_ = *(undefined3 *)&(model->fields)._Maximum_k__BackingField.field_0xd;
      val1_00._12_4_ = *(undefined4 *)&pNVar11->value;
      val2_00._12_4_ = 0;
      val2_00._0_12_ = *(undefined1 (*) [12])((int)&pNVar11->value + 4);
      pNVar11 = Json::Utilities::MathUtils::MathUtils_Max_1
                          (&NStack_12,val1_00,val2_00,in_stack_19);
      bVar3 = (model->fields)._ExclusiveMinimum_k__BackingField;
      uVar10 = *(undefined4 *)((int)&pNVar11->value + 4);
      bVar20 = pNVar11->has_value;
      uVar14 = *(undefined3 *)&pNVar11->field_0x9;
      uVar15 = *(undefined4 *)&pNVar11->field_0xc;
      *(undefined4 *)&(model->fields)._Maximum_k__BackingField.value =
           *(undefined4 *)&pNVar11->value;
      *(undefined4 *)((int)&(model->fields)._Maximum_k__BackingField.value + 4) = uVar10;
      (model->fields)._Maximum_k__BackingField.has_value = bVar20;
      *(undefined3 *)&(model->fields)._Maximum_k__BackingField.field_0x9 = uVar14;
      *(undefined4 *)&(model->fields)._Maximum_k__BackingField.field_0xc = uVar15;
      if (bVar3 == 0) {
        JsonSchema::JsonSchema_get_ExclusiveMinimum(schema,(MethodInfo *)0x0);
        cVar2 = func_?();
        if (cVar2 == '\0') {
          bVar3 = 0;
        }
        else {
          bVar3 = func_?();
        }
      }
      else {
        bVar3 = 1;
      }
      (model->fields)._ExclusiveMinimum_k__BackingField = bVar3;
      if ((model->fields)._ExclusiveMaximum_k__BackingField == 0) {
        JsonSchema::JsonSchema_get_ExclusiveMaximum(schema,(MethodInfo *)0x0);
        cVar2 = func_?();
        if (cVar2 == '\0') {
          bVar3 = 0;
        }
        else {
          bVar3 = func_?();
        }
      }
      else {
        bVar3 = 1;
      }
      (model->fields)._ExclusiveMaximum_k__BackingField = bVar3;
      NVar6 = (model->fields)._MinimumItems_k__BackingField;
      NVar7 = JsonSchema::JsonSchema_get_MinimumItems(schema,(MethodInfo *)0x0);
      NVar7 = Json::Utilities::MathUtils::MathUtils_Max(NVar6,NVar7,(MethodInfo *)0x0);
      NVar6 = (model->fields)._MaximumItems_k__BackingField;
      (model->fields)._MinimumItems_k__BackingField = NVar7;
      NVar7 = JsonSchema::JsonSchema_get_MaximumItems(schema,(MethodInfo *)0x0);
      NVar6 = Json::Utilities::MathUtils::MathUtils_Min(NVar6,NVar7,(MethodInfo *)0x0);
      (model->fields)._MaximumItems_k__BackingField = NVar6;
      if ((model->fields)._AllowAdditionalProperties_k__BackingField == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = JetPackMotor::JetPackMotor_get_Thrust((JetPackMotor *)schema,(MethodInfo *)0x0);
      }
      (model->fields)._AllowAdditionalProperties_k__BackingField = bVar3;
      pOVar21 = PrefabPool::PrefabPool_get_MVPulseBoxPrefab((PrefabPool *)schema,(MethodInfo *)0x0);
      if (pOVar21 != (ObjectPrefab *)0x0) {
        this = (JsonSchemaModel *)(model->fields)._Enum_k__BackingField;
        if (this == (JsonSchemaModel *)0x0) {
          this = (JsonSchemaModel *)func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    ((List_1_UnityEngine_Vector4_ *)this,
                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                    );
          (model->fields)._Enum_k__BackingField = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this;
        }
        model = this;
        pOVar21 = PrefabPool::PrefabPool_get_MVPulseBoxPrefab
                            ((PrefabPool *)schema,(MethodInfo *)0x0);
        this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
        WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
        WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
        Json::Utilities::CollectionUtils::CollectionUtils_AddRangeDistinct_2
                  ((IList_1_Newtonsoft_Json_Linq_JToken_ *)model,
                   (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pOVar21,
                   (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)this_00,
                   bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRangeDistinct<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                  );
      }
      uVar4 = (pJVar1->fields)._Disallow_k__BackingField;
      JsonSchema::JsonSchema_get_Disallow(schema,(MethodInfo *)0x0);
      cVar2 = func_?();
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_?();
      }
      (pJVar1->fields)._Disallow_k__BackingField = uVar4 | uVar5;
      pOVar22 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                          ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)schema,(MethodInfo *)0x0
                          );
      if (pOVar22 != (Object *)0x0) {
        this_01 = (List_1_UnityEngine_Vector4_ *)(pJVar1->fields)._Patterns_k__BackingField;
        if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) {
          this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    (this_01,MethodInfo__System__Collections__Generic__List<System::String>__List__)
          ;
          (pJVar1->fields)._Patterns_k__BackingField = (IList_1_System_String_ *)this_01;
        }
        value = (String *)
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                          ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)schema,(MethodInfo *)0x0
                          );
        Json::Utilities::CollectionUtils::CollectionUtils_AddDistinct_2
                  ((IList_1_System_String_ *)this_01,value,
                   bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddDistinct<System::String>_System__Collections__Generic__IList<System::String>__System__String_
                  );
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  method_00 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaModel;
  pJVar4 = (JsonSchemaModel *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)pJVar4,0.0,(MethodInfo *)method_00);
  (pJVar4->fields)._Type_k__BackingField = 0x7f;
  (pJVar4->fields)._AllowAdditionalProperties_k__BackingField = 1;
  (pJVar4->fields)._Required_k__BackingField = 0;
  if (schemata != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
    piVar5 = (int *)func_?(0);
    uStack_1 = 0;
    while (piVar5 != (int *)0x0) {
      cVar6 = func_?(1);
      unaff_EDI = 
      TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchema>;
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          func_?(0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return pJVar4;
      }
      uVar7 = 0;
      uVar8 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar8 != 0) {
        iVar9 = *(int *)(*piVar5 + 0x58);
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Schema_JsonSchema___Class **)(iVar9 + (uint)uVar7 * 8)
              == 
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchema>
             ) {
            puVar10 = (undefined4 *)(*piVar5 + (*(int *)(iVar9 + 4 + (uint)uVar7 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      puVar10 = (undefined4 *)func_?(piVar5);
code_?:
      schema = (JsonSchema *)(*(code *)*puVar10)();
      JsonSchemaModel_Combine(pJVar4,schema,(MethodInfo *)0x0);
    }
  }
  func_?();
  func_?(unaff_EDI);
  pcVar11 = (code *)swi(3);
  pJVar4 = (JsonSchemaModel *)(*pcVar11)();
  return pJVar4;
}


/* JsonSchemaModel() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel__ctor
               (JsonSchemaModel *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
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


/* Nullable`1[Double] get_DivisibleBy() */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
          (Nullable_1_Double_ *__return_storage_ptr__,JsonSchemaModel *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields)._DivisibleBy_k__BackingField.value + 4);
  bVar2 = (this->fields)._DivisibleBy_k__BackingField.has_value;
  uVar3 = *(undefined3 *)&(this->fields)._DivisibleBy_k__BackingField.field_0x9;
  uVar4 = *(undefined4 *)&(this->fields)._DivisibleBy_k__BackingField.field_0xc;
  *(undefined4 *)&__return_storage_ptr__->value =
       *(undefined4 *)&(this->fields)._DivisibleBy_k__BackingField.value;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = uVar1;
  __return_storage_ptr__->has_value = bVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
  return __return_storage_ptr__;
}


/* Boolean get_ExclusiveMaximum() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_get_ExclusiveMaximum(JsonSchemaModel *this,MethodInfo *method)

{
  return (this->fields)._ExclusiveMaximum_k__BackingField;
}


/* Boolean get_ExclusiveMinimum() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_get_ExclusiveMinimum(JsonSchemaModel *this,MethodInfo *method)

{
  return (this->fields)._ExclusiveMinimum_k__BackingField;
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


/* Void set_DivisibleBy(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_set_DivisibleBy
               (JsonSchemaModel *this,Nullable_1_Double_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._DivisibleBy_k__BackingField.value = in_stack_1;
  *(undefined4 *)((int)&(this->fields)._DivisibleBy_k__BackingField.value + 4) = value.value._0_4_;
  *(undefined4 *)&(this->fields)._DivisibleBy_k__BackingField.has_value = value.value._4_4_;
  (this->fields)._DivisibleBy_k__BackingField.field_0xc = value.has_value;
  *(undefined3 *)&(this->fields)._DivisibleBy_k__BackingField.field_0xd = value._9_3_;
  return;
}


/* Void set_ExclusiveMaximum(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_ExclusiveMaximum(JsonSchemaModel *this,bool value,MethodInfo *method)

{
  (this->fields)._ExclusiveMaximum_k__BackingField = value;
  return;
}


/* Void set_Maximum(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_set_Maximum
               (JsonSchemaModel *this,Nullable_1_Double_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._Maximum_k__BackingField.value = in_stack_1;
  *(undefined4 *)((int)&(this->fields)._Maximum_k__BackingField.value + 4) = value.value._0_4_;
  *(undefined4 *)&(this->fields)._Maximum_k__BackingField.has_value = value.value._4_4_;
  (this->fields)._Maximum_k__BackingField.field_0xc = value.has_value;
  *(undefined3 *)&(this->fields)._Maximum_k__BackingField.field_0xd = value._9_3_;
  return;
}


/* Void set_MaximumItems(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_MaximumItems
               (JsonSchemaModel *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MaximumItems_k__BackingField.value = value.value;
  (this->fields)._MaximumItems_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._MaximumItems_k__BackingField.field_0x5 = value._5_3_;
  return;
}


/* Void set_MaximumLength(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_MaximumLength
               (JsonSchemaModel *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MaximumLength_k__BackingField.value = value.value;
  (this->fields)._MaximumLength_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._MaximumLength_k__BackingField.field_0x5 = value._5_3_;
  return;
}


/* Void set_Minimum(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_set_Minimum
               (JsonSchemaModel *this,Nullable_1_Double_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._Minimum_k__BackingField.value = in_stack_1;
  *(undefined4 *)((int)&(this->fields)._Minimum_k__BackingField.value + 4) = value.value._0_4_;
  *(undefined4 *)&(this->fields)._Minimum_k__BackingField.has_value = value.value._4_4_;
  (this->fields)._Minimum_k__BackingField.field_0xc = value.has_value;
  *(undefined3 *)&(this->fields)._Minimum_k__BackingField.field_0xd = value._9_3_;
  return;
}


/* Void set_MinimumItems(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_MinimumItems
               (JsonSchemaModel *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MinimumItems_k__BackingField.value = value.value;
  (this->fields)._MinimumItems_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._MinimumItems_k__BackingField.field_0x5 = value._5_3_;
  return;
}


/* Void set_MinimumLength(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaModel::
     JsonSchemaModel_set_MinimumLength
               (JsonSchemaModel *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MinimumLength_k__BackingField.value = value.value;
  (this->fields)._MinimumLength_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._MinimumLength_k__BackingField.field_0x5 = value._5_3_;
  return;
}

