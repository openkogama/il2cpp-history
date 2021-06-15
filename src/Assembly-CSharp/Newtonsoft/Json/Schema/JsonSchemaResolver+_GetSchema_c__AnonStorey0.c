
/* Boolean <>m__0(JsonSchema) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaResolver+<GetSchema>c__AnonStorey0::
     JsonSchemaResolver_GetSchema_c_AnonStorey0___m__0
               (JsonSchemaResolver_GetSchema_c_AnonStorey0 *this,JsonSchema *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (s != (JsonSchema *)0x0) {
    a = (String *)
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
    b = (this->fields).id;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

