
/* BsonObjectId(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObjectId::BsonObjectId__ctor
               (BsonObjectId *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Byte__Array *)0x0) {
    func_?();
  }
  else if (value->max_length == 0xc) {
    (this->fields)._Value_k__BackingField = value;
    func_?();
    return;
  }
  func_?();
  this_00 = (Exception *)func_?();
  func_?(this_00);
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uStack1 = func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

