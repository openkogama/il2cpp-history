
/* Boolean <GenerateInternal>b__0(JsonSchemaGenerator+TypeSchema) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator+<>c__DisplayClass23_0::
     JsonSchemaGenerator_c_DisplayClass23_0__GenerateInternal_b__0
               (JsonSchemaGenerator_c_DisplayClass23_0 *this,JsonSchemaGenerator_TypeSchema *tc,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (tc != (JsonSchemaGenerator_TypeSchema *)0x0) {
    left = (tc->fields)._Type_k__BackingField;
    right = (this->fields).type;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)left,(Object **)right,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

