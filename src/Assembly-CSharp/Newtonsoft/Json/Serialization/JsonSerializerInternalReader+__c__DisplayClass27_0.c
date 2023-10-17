
/* Void <CreateAndPopulateList>b__0(IList, Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
     JsonSerializerInternalReader+<>c__DisplayClass27_0::
     JsonSerializerInternalReader_c_DisplayClass27_0__CreateAndPopulateList_b__0
               (JsonSerializerInternalReader_c_DisplayClass27_0 *this,IList *l,
               bool isTemporaryListReference,MethodInfo *method)

{
  if ((isTemporaryListReference & -((this->fields).reference != (String *)0x0)) == 0) {
    pJVar1 = (this->fields).contract;
    if (pJVar1 == (JsonArrayContract *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      ((PropertyInfo_1 *)(pJVar1->fields)._._OnSerializing_k__BackingField,
                       (PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if ((isTemporaryListReference & bVar2) == 0) {
      pJVar1 = (this->fields).contract;
      if (pJVar1 == (JsonArrayContract *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                        ((PropertyInfo_1 *)(pJVar1->fields)._._OnError_k__BackingField,
                         (PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
      if ((isTemporaryListReference & bVar2) == 0) {
        pJVar1 = (this->fields).contract;
        if (pJVar1 != (JsonArrayContract *)0x0) {
          this_00 = (this->fields).__4__this;
          if ((pJVar1->fields)._IsMultidimensionalArray_k__BackingField == 0) {
            if (pJVar1 != (JsonArrayContract *)0x0) {
              wrappedList = JsonArrayContract::JsonArrayContract_CreateWrapper
                                      (pJVar1,(Object *)l,(MethodInfo *)0x0);
              if (this_00 != (JsonSerializerInternalReader *)0x0) {
                JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateList
                          (this_00,wrappedList,(this->fields).reader,(this->fields).reference,
                           (this->fields).contract,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else if (this_00 != (JsonSerializerInternalReader *)0x0) {
            JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateMultidimensionalArray
                      (this_00,l,(this->fields).reader,(this->fields).reference,pJVar1,
                       (MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      pJVar1 = (this->fields).contract;
      func_?();
      pOVar3 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
               Tuple_3_Object_Object_Object__get_Item1
                         ((Tuple_3_Object_Object_Object_ *)pJVar1,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pOVar3);
      func_?();
      ppSVar4 = &StringLiteral_Cannot_call_OnError_on_an_array_;
    }
    else {
      uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar5);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar5 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar5);
      pJVar1 = (this->fields).contract;
      func_?(pJVar1);
      pOVar3 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
               Tuple_3_Object_Object_Object__get_Item1
                         ((Tuple_3_Object_Object_Object_ *)pJVar1,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pOVar3);
      func_?();
      ppSVar4 = &StringLiteral_Cannot_call_OnSerializing_on_an_;
    }
  }
  else {
    uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar5);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar5 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar5);
    pJVar1 = (this->fields).contract;
    func_?(pJVar1);
    pOVar3 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
             Tuple_3_Object_Object_Object__get_Item1
                       ((Tuple_3_Object_Object_Object_ *)pJVar1,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pOVar3);
    func_?(0,pOVar3);
    ppSVar4 = &StringLiteral_Cannot_preserve_reference_to_arr;
  }
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(ppSVar4);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  uVar5 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this_01 = (JsonSerializationException *)func_?(uVar5);
  func_?(this_01);
  JsonSerializationException::JsonSerializationException__ctor_1(this_01,pSVar6,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass27_0___CreateAndPopulateList_b__0_System__Collections__IList__bool_
                 );
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

