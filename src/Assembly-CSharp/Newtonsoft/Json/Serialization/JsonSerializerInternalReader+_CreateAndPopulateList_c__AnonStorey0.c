
/* Void <>m__0(IList, Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
     JsonSerializerInternalReader+<CreateAndPopulateList>c__AnonStorey0::
     JsonSerializerInternalReader_CreateAndPopulateList_c_AnonStorey0___m__0
               (JsonSerializerInternalReader_CreateAndPopulateList_c_AnonStorey0 *this,IList *l,
               bool isTemporaryListReference,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).reference;
  if ((pSVar1 == (String *)0x0) || (isTemporaryListReference == 0)) {
    this_00 = (this->fields).contract;
    if (this_00 == (JsonArrayContract *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if (((this_00->fields)._._OnSerializing_k__BackingField == (MethodInfo_1 *)0x0) ||
       (isTemporaryListReference == 0)) {
      if (this_00 != (JsonArrayContract *)0x0) {
        if (((this_00->fields)._._OnError_k__BackingField != (MethodInfo_1 *)0x0) &&
           (isTemporaryListReference != 0)) goto code_?;
        if (this_00 != (JsonArrayContract *)0x0) {
          this_01 = (this->fields)._this;
          if ((this_00->fields)._IsMultidimensionalArray_k__BackingField == 0) {
            if (this_00 != (JsonArrayContract *)0x0) {
              wrappedList = JsonArrayContract::JsonArrayContract_CreateWrapper
                                      (this_00,(Object *)l,(MethodInfo *)0x0);
              if (this_01 != (JsonSerializerInternalReader *)0x0) {
                JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateList
                          (this_01,wrappedList,(this->fields).reader,(this->fields).reference,
                           (this->fields).contract,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else if (this_01 != (JsonSerializerInternalReader *)0x0) {
            JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateMultidimensionalArray
                      (this_01,l,(this->fields).reader,pSVar1,this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  else {
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar3 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pCVar4 = (Collection_1_VoxelHit_ *)func_?();
    func_?(pCVar4,0);
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar4,(MethodInfo *)0x0);
    func_?(pOVar3,0);
    func_?(pOVar3,pIVar5);
    func_?(0,pIVar5);
    pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Cannot_preserve_reference_to_arr,(IFormatProvider *)pCVar2,
                        pOVar3,(MethodInfo *)0x0);
    pJVar6 = (JsonSchemaException *)
             func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar6,pSVar1,(MethodInfo *)0x0);
    func_?();
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar3 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pCVar4 = (Collection_1_VoxelHit_ *)func_?();
  func_?(pCVar4,0);
  pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items(pCVar4,(MethodInfo *)0x0);
  func_?(pOVar3,0);
  func_?(pOVar3,pIVar5);
  func_?(0,pIVar5);
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_call_OnSerializing_on_an_,(IFormatProvider *)pCVar2,
                      pOVar3,(MethodInfo *)0x0);
  pJVar6 = (JsonSchemaException *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar6,pSVar1,(MethodInfo *)0x0);
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar3 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pCVar4 = (Collection_1_VoxelHit_ *)func_?();
  func_?(pCVar4,0);
  pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items(pCVar4,(MethodInfo *)0x0);
  func_?(pOVar3,0);
  func_?(pOVar3,pIVar5);
  func_?(0,pIVar5);
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_call_OnError_on_an_array_,(IFormatProvider *)pCVar2,
                      pOVar3,(MethodInfo *)0x0);
  pJVar6 = (JsonSchemaException *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar6,pSVar1,(MethodInfo *)0x0);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

